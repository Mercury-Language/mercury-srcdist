/*
** Automatically generated from `io.m'
** by the Mercury compiler,
** version rotd-2024-03-27
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


// :- module io.
// :- implementation.

/*
INIT mercury__io__init
ENDINIT
*/

#include "io.mih"
#include "io.mh"


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




static const MR_FA_PseudoTypeInfo_Struct1 mercury__io__list__pti_list_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct3 mercury__io____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct2 mercury__io____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct0 mercury__io____vpti_tuple_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__io__array__pti_array_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct2 mercury__io____vpti_pred_2__plain_univ__type_ctor_info_univ_0__plain_univ__type_ctor_info_univ_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_access_type_0_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_access_type_0_1;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_access_type_0_2;

static const MR_EnumFunctorDescPtr mercury__io__io__enum_ordinal_ordered_access_type_0[3];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_access_type_0[3];

static const MR_Integer mercury__io__io__functor_number_map_access_type_0[3];

static const MR_Integer mercury__io__io__functor_number_map_binary_input_stream_0[1];

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_binary_input_stream_0;

static const MR_Integer mercury__io__io__functor_number_map_binary_output_stream_0[1];

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_binary_output_stream_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_byte_order_0_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_byte_order_0_1;

static const MR_EnumFunctorDescPtr mercury__io__io__enum_ordinal_ordered_byte_order_0[2];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_byte_order_0[2];

static const MR_Integer mercury__io__io__functor_number_map_byte_order_0[2];

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res_1_0[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res_1_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res_1_1[2];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res_1_1;

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res_1_2[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res_1_2;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res_1_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res_1_1[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res_1_2[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_chunk_inner_res_1[3];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_chunk_inner_res_1[3];

static const MR_Integer mercury__io__io__functor_number_map_chunk_inner_res_1[3];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res0_0_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res0_0_1[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res0_0_1;

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res0_0_2;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res0_0_0[2];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res0_0_1[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_chunk_inner_res0_0[2];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_chunk_inner_res0_0[3];

static const MR_Integer mercury__io__io__functor_number_map_chunk_inner_res0_0[3];

static const MR_FA_TypeInfo_Struct2 mercury__io__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_error_0_0[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_error_0_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_error_0_1[2];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_error_0_1;

static const MR_PseudoTypeInfo mercury__io__io__field_types_error_0_2[2];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_error_0_2;

static const MR_PseudoTypeInfo mercury__io__io__field_types_error_0_3[2];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_error_0_3;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_error_0_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_error_0_1[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_error_0_2[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_error_0_3[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_error_0[4];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_error_0[4];

static const MR_Integer mercury__io__io__functor_number_map_error_0[4];

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_1;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_2;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_3;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_4;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_5;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_6;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_7;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_8;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_9;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_10;

static const MR_EnumFunctorDescPtr mercury__io__io__enum_ordinal_ordered_file_type_0[11];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_file_type_0[11];

static const MR_Integer mercury__io__io__functor_number_map_file_type_0[11];

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_incomplete_result_1_0[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_incomplete_result_1_0;

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_incomplete_result_1_1;

static const MR_FA_TypeInfo_Struct1 mercury__io__list__ti_list_1builtin__type_ctor_info_uint8_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_incomplete_result_1_2[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_incomplete_result_1_2;

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_incomplete_result_1_3[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_incomplete_result_1_3;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_1[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_2[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_3[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_maybe_incomplete_result_1[4];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_maybe_incomplete_result_1[4];

static const MR_Integer mercury__io__io__functor_number_map_maybe_incomplete_result_1[4];

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_1;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_2;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_3;

static const MR_EnumFunctorDescPtr mercury__io__io__enum_ordinal_ordered_maybe_incomplete_result_code_0[4];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_maybe_incomplete_result_code_0[4];

static const MR_Integer mercury__io__io__functor_number_map_maybe_incomplete_result_code_0[4];

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_partial_res_1_0[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_partial_res_1_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_partial_res_1_1[2];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_partial_res_1_1;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_1_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_1_1[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_maybe_partial_res_1[2];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_maybe_partial_res_1[2];

static const MR_Integer mercury__io__io__functor_number_map_maybe_partial_res_1[2];

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_partial_res_2_2_0[2];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_partial_res_2_2_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_partial_res_2_2_1[3];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_partial_res_2_2_1;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_2_2_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_2_2_1[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_maybe_partial_res_2_2[2];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_maybe_partial_res_2_2[2];

static const MR_Integer mercury__io__io__functor_number_map_maybe_partial_res_2_2[2];

static const MR_PseudoTypeInfo mercury__io__io__field_types_posn_0_0[3];

static const MR_ConstString mercury__io__io__field_names_posn_0_0[3];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_posn_0_0;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_posn_0_0[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_posn_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_posn_0[1];

static const MR_Integer mercury__io__io__functor_number_map_posn_0[1];

static const MR_PseudoTypeInfo mercury__io__io__field_types_read_result_1_0[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_read_result_1_0;

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_read_result_1_1;

static const MR_PseudoTypeInfo mercury__io__io__field_types_read_result_1_2[2];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_read_result_1_2;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_read_result_1_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_read_result_1_1[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_read_result_1_2[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_read_result_1[3];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_read_result_1[3];

static const MR_Integer mercury__io__io__functor_number_map_read_result_1[3];

static const MR_PseudoTypeInfo mercury__io__io__field_types_res_1_0[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_res_1_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_res_1_1[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_res_1_1;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_1_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_1_1[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_res_1[2];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_res_1[2];

static const MR_Integer mercury__io__io__functor_number_map_res_1[2];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_res_0_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_res_0_1[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_res_0_1;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_0_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_0_1[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_res_0[2];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_res_0[2];

static const MR_Integer mercury__io__io__functor_number_map_res_0[2];

static const MR_PseudoTypeInfo mercury__io__io__field_types_result_1_0[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_1_0;

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_1_1;

static const MR_PseudoTypeInfo mercury__io__io__field_types_result_1_2[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_1_2;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_1_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_1_1[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_1_2[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_result_1[3];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_result_1[3];

static const MR_Integer mercury__io__io__functor_number_map_result_1[3];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_0_0;

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_0_1;

static const MR_PseudoTypeInfo mercury__io__io__field_types_result_0_2[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_0_2;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_0_0[2];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_0_1[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_result_0[2];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_result_0[3];

static const MR_Integer mercury__io__io__functor_number_map_result_0[3];

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_result_code_0_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_result_code_0_1;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_result_code_0_2;

static const MR_EnumFunctorDescPtr mercury__io__io__enum_ordinal_ordered_result_code_0[3];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_result_code_0[3];

static const MR_Integer mercury__io__io__functor_number_map_result_code_0[3];

static const MR_PseudoTypeInfo mercury__io__io__field_types_system_result_0_0[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_system_result_0_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_system_result_0_1[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_system_result_0_1;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_system_result_0_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_system_result_0_1[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_system_result_0[2];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_system_result_0[2];

static const MR_Integer mercury__io__io__functor_number_map_system_result_0[2];

static const MR_Integer mercury__io__io__functor_number_map_text_input_stream_0[1];

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_text_input_stream_0;

static const MR_Integer mercury__io__io__functor_number_map_text_output_stream_0[1];

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_text_output_stream_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_1;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_2;

static const MR_EnumFunctorDescPtr mercury__io__io__enum_ordinal_ordered_whence_0[3];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_whence_0[3];

static const MR_Integer mercury__io__io__functor_number_map_whence_0[3];

static void MR_CALL 
mercury__io__IntroducedFrom__pred__update_globals__5000__1_3_p_0(
  MR_Word UpdatePred_4,
  MR_Word Globals0_6,
  MR_Word * LambdaHeadVar__1_16);

static void MR_CALL 
mercury__io__with_output_stream_4_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__with_output_stream_4_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__with_output_stream_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__with_output_stream_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__update_globals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
mercury__io__write_array_6_p_1_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__write_array_6_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__write_array_6_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mercury__io__write_array_6_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__write_array_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__write_array_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mercury__io__write_list_6_p_1_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__write_list_6_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__write_list_6_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mercury__io__write_list_6_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__write_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__write_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mercury__io____Unify____access_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____access_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____binary_input_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____binary_input_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____binary_output_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____binary_output_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____byte_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____byte_order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__io____Compare____chunk_inner_res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res0_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____chunk_inner_res0_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____environment_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____environment_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____file_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____file_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____file_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____file_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____input_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____input_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____io_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____io_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____maybe_incomplete_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__io____Compare____maybe_incomplete_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__io____Unify____maybe_incomplete_result_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____maybe_incomplete_result_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____maybe_partial_res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__io____Compare____maybe_partial_res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__io____Unify____maybe_partial_res_2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__io____Compare____maybe_partial_res_2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__io____Unify____output_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____output_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____posn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____posn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____read_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__io____Compare____read_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__io____Unify____res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__io____Compare____res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__io____Unify____res_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____res_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__io____Compare____result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__io____Unify____result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____result_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____result_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____stream_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____stream_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____system_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____system_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____system_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____system_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____text_input_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____text_input_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____text_output_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____text_output_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____whence_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____whence_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint64__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int64__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__unboxed_reader____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__unboxed_reader____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__unboxed_reader____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__text_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__text_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek64_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek64_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__text_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__text_output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__text_output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__text_input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__text_input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
mercury__io__ClassMethod_for_stream__error____io__error__arity0______stream__error_message_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box mercury__io_scalar_common_1[8][3];

static /* final */ const MR_Box mercury__io_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__io_scalar_common_3[1][5];

static /* final */ const MR_Box mercury__io_scalar_common_4[4][2];

static /* final */ const MR_Box mercury__io_scalar_common_5[7][1];

static /* final */ const MR_Integer mercury__io_scalar_common_7[1][4];

static /* final */ const MR_Integer mercury__io_scalar_common_8[1][2];

static /* final */ const MR_Box mercury__io_scalar_common_9[2][9];

static /* final */ const MR_Box mercury__io_scalar_common_10[1][7];

static /* final */ const MR_Box mercury__io_scalar_common_11[1][8];

static /* final */ const MR_Box mercury__io_scalar_common_12[1][6];


struct mercury__io__vector_common_type_6_0_s {
  const MR_Word mercury__io__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct mercury__io__vector_common_type_6_0_s mercury__io_vector_common_6[236];



static /* final */ const MR_Box mercury__io_scalar_common_1[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&mercury__io_scalar_common_5[3]))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    (MR_Box) (((((MR_Unsigned) 0U << 2)) | (MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    (MR_Box) (((((MR_Unsigned) 1U << 2)) | (MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    (MR_Box) (((((MR_Unsigned) 1U << 2)) | (MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_4[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint8_0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) (&mercury__io_scalar_common_5[3]))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_5[7][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "failed to put back character")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "failed to put back int8")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "failed to put back uint8")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "null character in input")) },
  /* row   4 */
  { ((MR_Box) (&mercury__io_scalar_common_5[3])) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "io.read_binary: missing newline")) },
  /* row   6 */
  { ((MR_Box) (&mercury__io_scalar_common_5[5])) },
};

static /* final */ const MR_Integer mercury__io_scalar_common_7[1][4] = {
  /* row   0 */
  {
    (MR_Unsigned) 4286578719U,
    (MR_Unsigned) 4294967295U,
    (MR_Unsigned) 4294967295U,
    (MR_Unsigned) 4194303U
  },
};

static /* final */ const MR_Integer mercury__io_scalar_common_8[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_9[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mercury__io_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mercury__io_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__array__pti_array_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_10[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io____vpti_tuple_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_11[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_12[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__io____vpti_pred_2__plain_univ__type_ctor_info_univ_0__plain_univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};


static /* final */ const struct mercury__io__vector_common_type_6_0_s mercury__io_vector_common_6[236] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 0 },
  /* row   4 */   { (MR_Integer) 0 },
  /* row   5 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   6 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   7 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   8 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   9 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  10 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  11 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  12 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  13 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  14 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  15 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  16 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  17 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  18 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  19 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  20 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  21 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  22 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  23 */   { (MR_Integer) 0 },
  /* row  24 */   { (MR_Integer) 13 },
  /* row  25 */   { (MR_Integer) 8 },
  /* row  26 */   { (MR_Integer) 10 },
  /* row  27 */   { (MR_Integer) 12 },
  /* row  28 */   { (MR_Integer) 7 },
  /* row  29 */   { (MR_Integer) 13 },
  /* row  30 */   { (MR_Integer) 8 },
  /* row  31 */   { (MR_Integer) 5 },
  /* row  32 */   { (MR_Integer) 5 },
  /* row  33 */   { (MR_Integer) 13 },
  /* row  34 */   { (MR_Integer) 13 },
  /* row  35 */   { (MR_Integer) 5 },
  /* row  36 */   { (MR_Integer) 13 },
  /* row  37 */   { (MR_Integer) 6 },
  /* row  38 */   { (MR_Integer) 9 },
  /* row  39 */   { (MR_Integer) 3 },
  /* row  40 */   { (MR_Integer) 4 },
  /* row  41 */   { (MR_Integer) 4 },
  /* row  42 */   { (MR_Integer) 4 },
  /* row  43 */   { (MR_Integer) 4 },
  /* row  44 */   { (MR_Integer) 4 },
  /* row  45 */   { (MR_Integer) 4 },
  /* row  46 */   { (MR_Integer) 4 },
  /* row  47 */   { (MR_Integer) 4 },
  /* row  48 */   { (MR_Integer) 4 },
  /* row  49 */   { (MR_Integer) 13 },
  /* row  50 */   { (MR_Integer) 5 },
  /* row  51 */   { (MR_Integer) 13 },
  /* row  52 */   { (MR_Integer) 13 },
  /* row  53 */   { (MR_Integer) 13 },
  /* row  54 */   { (MR_Integer) 13 },
  /* row  55 */   { (MR_Integer) 13 },
  /* row  56 */   { (MR_Integer) 2 },
  /* row  57 */   { (MR_Integer) 2 },
  /* row  58 */   { (MR_Integer) 2 },
  /* row  59 */   { (MR_Integer) 2 },
  /* row  60 */   { (MR_Integer) 2 },
  /* row  61 */   { (MR_Integer) 2 },
  /* row  62 */   { (MR_Integer) 2 },
  /* row  63 */   { (MR_Integer) 2 },
  /* row  64 */   { (MR_Integer) 2 },
  /* row  65 */   { (MR_Integer) 2 },
  /* row  66 */   { (MR_Integer) 2 },
  /* row  67 */   { (MR_Integer) 2 },
  /* row  68 */   { (MR_Integer) 2 },
  /* row  69 */   { (MR_Integer) 2 },
  /* row  70 */   { (MR_Integer) 2 },
  /* row  71 */   { (MR_Integer) 2 },
  /* row  72 */   { (MR_Integer) 2 },
  /* row  73 */   { (MR_Integer) 2 },
  /* row  74 */   { (MR_Integer) 2 },
  /* row  75 */   { (MR_Integer) 2 },
  /* row  76 */   { (MR_Integer) 2 },
  /* row  77 */   { (MR_Integer) 2 },
  /* row  78 */   { (MR_Integer) 2 },
  /* row  79 */   { (MR_Integer) 2 },
  /* row  80 */   { (MR_Integer) 2 },
  /* row  81 */   { (MR_Integer) 2 },
  /* row  82 */   { (MR_Integer) 5 },
  /* row  83 */   { (MR_Integer) 13 },
  /* row  84 */   { (MR_Integer) 5 },
  /* row  85 */   { (MR_Integer) 13 },
  /* row  86 */   { (MR_Integer) 2 },
  /* row  87 */   { (MR_Integer) 11 },
  /* row  88 */   { (MR_Integer) 1 },
  /* row  89 */   { (MR_Integer) 1 },
  /* row  90 */   { (MR_Integer) 1 },
  /* row  91 */   { (MR_Integer) 1 },
  /* row  92 */   { (MR_Integer) 1 },
  /* row  93 */   { (MR_Integer) 1 },
  /* row  94 */   { (MR_Integer) 1 },
  /* row  95 */   { (MR_Integer) 1 },
  /* row  96 */   { (MR_Integer) 1 },
  /* row  97 */   { (MR_Integer) 1 },
  /* row  98 */   { (MR_Integer) 1 },
  /* row  99 */   { (MR_Integer) 1 },
  /* row 100 */   { (MR_Integer) 1 },
  /* row 101 */   { (MR_Integer) 1 },
  /* row 102 */   { (MR_Integer) 1 },
  /* row 103 */   { (MR_Integer) 1 },
  /* row 104 */   { (MR_Integer) 1 },
  /* row 105 */   { (MR_Integer) 1 },
  /* row 106 */   { (MR_Integer) 1 },
  /* row 107 */   { (MR_Integer) 1 },
  /* row 108 */   { (MR_Integer) 1 },
  /* row 109 */   { (MR_Integer) 1 },
  /* row 110 */   { (MR_Integer) 1 },
  /* row 111 */   { (MR_Integer) 1 },
  /* row 112 */   { (MR_Integer) 1 },
  /* row 113 */   { (MR_Integer) 1 },
  /* row 114 */   { (MR_Integer) 5 },
  /* row 115 */   { (MR_Integer) 5 },
  /* row 116 */   { (MR_Integer) 5 },
  /* row 117 */   { (MR_Integer) 13 },
  /* row 118 */   { (MR_Integer) 0 },
  /* row 119 */   { (MR_Integer) 0 },
  /* row 120 */   { (MR_Integer) 0 },
  /* row 121 */   { (MR_Integer) 0 },
  /* row 122 */   { (MR_Integer) 0 },
  /* row 123 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 124 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 125 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 126 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 127 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 128 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 129 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 130 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 131 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 132 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 133 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 134 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 135 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 136 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 137 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 138 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 139 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 140 */   { (MR_Word) ((MR_Integer) 0) },
  /* row 141 */   { (MR_Integer) 0 },
  /* row 142 */   { (MR_Integer) 13 },
  /* row 143 */   { (MR_Integer) 8 },
  /* row 144 */   { (MR_Integer) 10 },
  /* row 145 */   { (MR_Integer) 12 },
  /* row 146 */   { (MR_Integer) 7 },
  /* row 147 */   { (MR_Integer) 13 },
  /* row 148 */   { (MR_Integer) 8 },
  /* row 149 */   { (MR_Integer) 5 },
  /* row 150 */   { (MR_Integer) 5 },
  /* row 151 */   { (MR_Integer) 13 },
  /* row 152 */   { (MR_Integer) 13 },
  /* row 153 */   { (MR_Integer) 5 },
  /* row 154 */   { (MR_Integer) 13 },
  /* row 155 */   { (MR_Integer) 6 },
  /* row 156 */   { (MR_Integer) 9 },
  /* row 157 */   { (MR_Integer) 3 },
  /* row 158 */   { (MR_Integer) 4 },
  /* row 159 */   { (MR_Integer) 4 },
  /* row 160 */   { (MR_Integer) 4 },
  /* row 161 */   { (MR_Integer) 4 },
  /* row 162 */   { (MR_Integer) 4 },
  /* row 163 */   { (MR_Integer) 4 },
  /* row 164 */   { (MR_Integer) 4 },
  /* row 165 */   { (MR_Integer) 4 },
  /* row 166 */   { (MR_Integer) 4 },
  /* row 167 */   { (MR_Integer) 13 },
  /* row 168 */   { (MR_Integer) 5 },
  /* row 169 */   { (MR_Integer) 13 },
  /* row 170 */   { (MR_Integer) 13 },
  /* row 171 */   { (MR_Integer) 13 },
  /* row 172 */   { (MR_Integer) 13 },
  /* row 173 */   { (MR_Integer) 13 },
  /* row 174 */   { (MR_Integer) 2 },
  /* row 175 */   { (MR_Integer) 2 },
  /* row 176 */   { (MR_Integer) 2 },
  /* row 177 */   { (MR_Integer) 2 },
  /* row 178 */   { (MR_Integer) 2 },
  /* row 179 */   { (MR_Integer) 2 },
  /* row 180 */   { (MR_Integer) 2 },
  /* row 181 */   { (MR_Integer) 2 },
  /* row 182 */   { (MR_Integer) 2 },
  /* row 183 */   { (MR_Integer) 2 },
  /* row 184 */   { (MR_Integer) 2 },
  /* row 185 */   { (MR_Integer) 2 },
  /* row 186 */   { (MR_Integer) 2 },
  /* row 187 */   { (MR_Integer) 2 },
  /* row 188 */   { (MR_Integer) 2 },
  /* row 189 */   { (MR_Integer) 2 },
  /* row 190 */   { (MR_Integer) 2 },
  /* row 191 */   { (MR_Integer) 2 },
  /* row 192 */   { (MR_Integer) 2 },
  /* row 193 */   { (MR_Integer) 2 },
  /* row 194 */   { (MR_Integer) 2 },
  /* row 195 */   { (MR_Integer) 2 },
  /* row 196 */   { (MR_Integer) 2 },
  /* row 197 */   { (MR_Integer) 2 },
  /* row 198 */   { (MR_Integer) 2 },
  /* row 199 */   { (MR_Integer) 2 },
  /* row 200 */   { (MR_Integer) 5 },
  /* row 201 */   { (MR_Integer) 13 },
  /* row 202 */   { (MR_Integer) 5 },
  /* row 203 */   { (MR_Integer) 13 },
  /* row 204 */   { (MR_Integer) 2 },
  /* row 205 */   { (MR_Integer) 11 },
  /* row 206 */   { (MR_Integer) 1 },
  /* row 207 */   { (MR_Integer) 1 },
  /* row 208 */   { (MR_Integer) 1 },
  /* row 209 */   { (MR_Integer) 1 },
  /* row 210 */   { (MR_Integer) 1 },
  /* row 211 */   { (MR_Integer) 1 },
  /* row 212 */   { (MR_Integer) 1 },
  /* row 213 */   { (MR_Integer) 1 },
  /* row 214 */   { (MR_Integer) 1 },
  /* row 215 */   { (MR_Integer) 1 },
  /* row 216 */   { (MR_Integer) 1 },
  /* row 217 */   { (MR_Integer) 1 },
  /* row 218 */   { (MR_Integer) 1 },
  /* row 219 */   { (MR_Integer) 1 },
  /* row 220 */   { (MR_Integer) 1 },
  /* row 221 */   { (MR_Integer) 1 },
  /* row 222 */   { (MR_Integer) 1 },
  /* row 223 */   { (MR_Integer) 1 },
  /* row 224 */   { (MR_Integer) 1 },
  /* row 225 */   { (MR_Integer) 1 },
  /* row 226 */   { (MR_Integer) 1 },
  /* row 227 */   { (MR_Integer) 1 },
  /* row 228 */   { (MR_Integer) 1 },
  /* row 229 */   { (MR_Integer) 1 },
  /* row 230 */   { (MR_Integer) 1 },
  /* row 231 */   { (MR_Integer) 1 },
  /* row 232 */   { (MR_Integer) 5 },
  /* row 233 */   { (MR_Integer) 5 },
  /* row 234 */   { (MR_Integer) 5 },
  /* row 235 */   { (MR_Integer) 13 },
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
#line 6092 "io.m"

MR_Word         ML_io_user_globals;
#ifdef MR_THREAD_SAFE
    MercuryLock ML_io_user_globals_lock;
#endif

#if 0
    MR_Word     ML_io_ops_table;
#endif

static void
mercury_set_binary_mode(FILE *f)
{
#if defined(MR_MSVC) || defined(MR_MINGW)
    // Calling fdopen with 'b' in the mode string does not necessarily put the
    // standard input or standard output file into binary translation mode on
    // Windows. This is the case with MinGW and MSVC. The cause is likely the
    // MSVC CRT. The solution is to change the mode on the file after opening.
    _setmode(_fileno(f), _O_BINARY);
#endif
}

void
mercury_init_io(void)
{
    MR_mercuryfile_init(stdin,  1, &mercury_stdin);
    MR_mercuryfile_init(stdout, 1, &mercury_stdout);
    MR_mercuryfile_init(stderr, 1, &mercury_stderr);

    MR_mercuryfile_init(NULL, 1, &mercury_stdin_binary);
    MR_mercuryfile_init(NULL, 1, &mercury_stdout_binary);

    mercury_current_text_input_index =    MR_new_thread_local_mutable_index();
    mercury_current_text_output_index =   MR_new_thread_local_mutable_index();
    mercury_current_binary_input_index =  MR_new_thread_local_mutable_index();
    mercury_current_binary_output_index = MR_new_thread_local_mutable_index();

#if defined(MR_HAVE_FDOPEN) && (defined(MR_HAVE_FILENO) || defined(fileno))         && defined(MR_HAVE_DUP)
    MR_file(mercury_stdin_binary) = fdopen(dup(fileno(stdin)), "rb");
    if (MR_file(mercury_stdin_binary) != NULL) {
        mercury_set_binary_mode(MR_file(mercury_stdin_binary));
    } else {
        // The call to fdopen() may fail if stdin is not available.
        // We don't abort since we still want Mercury programs to be runnable
        // in such a circumstance (aside from those that use stdin).
        // For the same reason, we treat binary stdout identically below.
        //
        // NOTE: some versions of nohup may also cause the above call to
        // fdopen() to fail, because they redirect stdin to /dev/null
        // in *write* mode. Setting binary stdin to stdin in such a case
        // also ensures that we work with those versions of nohup.
        MR_file(mercury_stdin_binary) = stdin;
    }

    MR_file(mercury_stdout_binary) = fdopen(dup(fileno(stdout)), "wb");
    if (MR_file(mercury_stdout_binary) != NULL) {
        mercury_set_binary_mode(MR_file(mercury_stdout_binary));
    } else {
        MR_file(mercury_stdout_binary) = stdout;
    }
#else
    // XXX Standard ANSI/ISO C provides no way to set stdin/stdout
    // to binary mode. I guess we just have to punt...
    MR_file(mercury_stdin_binary) = stdin;
    MR_file(mercury_stdout_binary) = stdout;
#endif

#ifdef MR_THREAD_SAFE
    pthread_mutex_init(&ML_io_stream_db_lock, MR_MUTEX_ATTR);
    pthread_mutex_init(&ML_io_user_globals_lock, MR_MUTEX_ATTR);
    pthread_mutex_init(&ML_io_next_stream_id_lock, MR_MUTEX_ATTR);
#endif
}


#line 3840 "io.m"
void 
ML_io_print_to_stream(
  MR_Word TypeInfo_for_T_12,
  MercuryFilePtr Stream_5,
  MR_Word Term_6)
#line 3840 "io.m"
{
#line 3840 "io.m"
	MR_Box boxed_Stream_5;
	MR_MAYBE_BOX_FOREIGN_TYPE(MercuryFilePtr, Stream_5, boxed_Stream_5);
	mercury__io__print_to_stream_4_p_0((MR_Word) TypeInfo_for_T_12, boxed_Stream_5, (MR_Box) Term_6);
}


static const MR_FA_PseudoTypeInfo_Struct1 mercury__io__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_VA_PseudoTypeInfo_Struct3 mercury__io____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__io____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct0 mercury__io____vpti_tuple_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 0,
  { 0 }

};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__io__array__pti_array_1__pseudo_1 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__io____vpti_pred_2__plain_univ__type_ctor_info_univ_0__plain_univ__type_ctor_info_univ_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0),
    (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
  }
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_access_type_0_0 = {
  (MR_String) "read",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_access_type_0_1 = {
  (MR_String) "write",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_access_type_0_2 = {
  (MR_String) "execute",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_ordinal_ordered_access_type_0[3] = {
  &mercury__io__io__enum_functor_desc_access_type_0_0,
  &mercury__io__io__enum_functor_desc_access_type_0_1,
  &mercury__io__io__enum_functor_desc_access_type_0_2
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_access_type_0[3] = {
  &mercury__io__io__enum_functor_desc_access_type_0_2,
  &mercury__io__io__enum_functor_desc_access_type_0_0,
  &mercury__io__io__enum_functor_desc_access_type_0_1
};

static const MR_Integer mercury__io__io__functor_number_map_access_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_access_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io____Unify____access_type_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____access_type_0_0_10001)),
  (MR_String) "io",
  (MR_String) "access_type",
  { mercury__io__io__enum_name_ordered_access_type_0 },
  { mercury__io__io__enum_ordinal_ordered_access_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__io__io__functor_number_map_access_type_0,

};

static const MR_Integer mercury__io__io__functor_number_map_binary_input_stream_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_binary_input_stream_0 = {
  (MR_String) "binary_input_stream",
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_stream_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_binary_input_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__io____Unify____binary_input_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____binary_input_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "binary_input_stream",
  { &mercury__io__io__notag_functor_desc_binary_input_stream_0 },
  { &mercury__io__io__notag_functor_desc_binary_input_stream_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__io__io__functor_number_map_binary_input_stream_0,

};

static const MR_Integer mercury__io__io__functor_number_map_binary_output_stream_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_binary_output_stream_0 = {
  (MR_String) "binary_output_stream",
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_stream_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_binary_output_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__io____Unify____binary_output_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____binary_output_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "binary_output_stream",
  { &mercury__io__io__notag_functor_desc_binary_output_stream_0 },
  { &mercury__io__io__notag_functor_desc_binary_output_stream_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__io__io__functor_number_map_binary_output_stream_0,

};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_byte_order_0_0 = {
  (MR_String) "big_endian",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_byte_order_0_1 = {
  (MR_String) "little_endian",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_ordinal_ordered_byte_order_0[2] = {
  &mercury__io__io__enum_functor_desc_byte_order_0_0,
  &mercury__io__io__enum_functor_desc_byte_order_0_1
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_byte_order_0[2] = {
  &mercury__io__io__enum_functor_desc_byte_order_0_0,
  &mercury__io__io__enum_functor_desc_byte_order_0_1
};

static const MR_Integer mercury__io__io__functor_number_map_byte_order_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_byte_order_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io____Unify____byte_order_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____byte_order_0_0_10001)),
  (MR_String) "io",
  (MR_String) "byte_order",
  { mercury__io__io__enum_name_ordered_byte_order_0 },
  { mercury__io__io__enum_ordinal_ordered_byte_order_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__io__io__functor_number_map_byte_order_0,

};

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res_1_0 = {
  (MR_String) "cir_ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__io__io__field_types_chunk_inner_res_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res_1_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res_1_1 = {
  (MR_String) "cir_error",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__io__io__field_types_chunk_inner_res_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res_1_2[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res_1_2 = {
  (MR_String) "cir_more",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__io__io__field_types_chunk_inner_res_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res_1_0[1] = { &mercury__io__io__du_functor_desc_chunk_inner_res_1_0 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res_1_1[1] = { &mercury__io__io__du_functor_desc_chunk_inner_res_1_1 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res_1_2[1] = { &mercury__io__io__du_functor_desc_chunk_inner_res_1_2 };

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_chunk_inner_res_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_chunk_inner_res_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_chunk_inner_res_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_chunk_inner_res_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_chunk_inner_res_1[3] = {
  &mercury__io__io__du_functor_desc_chunk_inner_res_1_1,
  &mercury__io__io__du_functor_desc_chunk_inner_res_1_2,
  &mercury__io__io__du_functor_desc_chunk_inner_res_1_0
};

static const MR_Integer mercury__io__io__functor_number_map_chunk_inner_res_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_chunk_inner_res_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____chunk_inner_res_1_0_10001)),
  ((MR_Box) (mercury__io____Compare____chunk_inner_res_1_0_10001)),
  (MR_String) "io",
  (MR_String) "chunk_inner_res",
  { mercury__io__io__du_name_ordered_chunk_inner_res_1 },
  { mercury__io__io__du_ptag_ordered_chunk_inner_res_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__io__io__functor_number_map_chunk_inner_res_1,

};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res0_0_0 = {
  (MR_String) "cir0_ok",
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

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res0_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res0_0_1 = {
  (MR_String) "cir0_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__io__io__field_types_chunk_inner_res0_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res0_0_2 = {
  (MR_String) "cir0_more",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res0_0_0[2] = {
  &mercury__io__io__du_functor_desc_chunk_inner_res0_0_0,
  &mercury__io__io__du_functor_desc_chunk_inner_res0_0_2
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res0_0_1[1] = { &mercury__io__io__du_functor_desc_chunk_inner_res0_0_1 };

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_chunk_inner_res0_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__io__io__du_stag_ordered_chunk_inner_res0_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_chunk_inner_res0_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_chunk_inner_res0_0[3] = {
  &mercury__io__io__du_functor_desc_chunk_inner_res0_0_1,
  &mercury__io__io__du_functor_desc_chunk_inner_res0_0_2,
  &mercury__io__io__du_functor_desc_chunk_inner_res0_0_0
};

static const MR_Integer mercury__io__io__functor_number_map_chunk_inner_res0_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_chunk_inner_res0_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____chunk_inner_res0_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____chunk_inner_res0_0_0_10001)),
  (MR_String) "io",
  (MR_String) "chunk_inner_res0",
  { mercury__io__io__du_name_ordered_chunk_inner_res0_0 },
  { mercury__io__io__du_ptag_ordered_chunk_inner_res0_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__io__io__functor_number_map_chunk_inner_res0_0,

};

static const MR_FA_TypeInfo_Struct2 mercury__io__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_environment_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io____Unify____environment_var_map_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____environment_var_map_0_0_10001)),
  (MR_String) "io",
  (MR_String) "environment_var_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__io__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__io__io__field_types_error_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_error_0_0 = {
  (MR_String) "io_error_string",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__io__io__field_types_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_error_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_system_error_0)
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_error_0_1 = {
  (MR_String) "io_error_errno",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__io__io__field_types_error_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_error_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_system_error_0)
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_error_0_2 = {
  (MR_String) "io_error_win32",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__io__io__field_types_error_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_error_0_3[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_system_error_0)
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_error_0_3 = {
  (MR_String) "io_error_exception_object",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  mercury__io__io__field_types_error_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_error_0_0[1] = { &mercury__io__io__du_functor_desc_error_0_0 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_error_0_1[1] = { &mercury__io__io__du_functor_desc_error_0_1 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_error_0_2[1] = { &mercury__io__io__du_functor_desc_error_0_2 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_error_0_3[1] = { &mercury__io__io__du_functor_desc_error_0_3 };

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_error_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_error_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_error_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_error_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_error_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_error_0[4] = {
  &mercury__io__io__du_functor_desc_error_0_1,
  &mercury__io__io__du_functor_desc_error_0_3,
  &mercury__io__io__du_functor_desc_error_0_0,
  &mercury__io__io__du_functor_desc_error_0_2
};

static const MR_Integer mercury__io__io__functor_number_map_error_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____error_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____error_0_0_10001)),
  (MR_String) "io",
  (MR_String) "error",
  { mercury__io__io__du_name_ordered_error_0 },
  { mercury__io__io__du_ptag_ordered_error_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mercury__io__io__functor_number_map_error_0,

};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_file_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__io____Unify____file_id_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____file_id_0_0_10001)),
  (MR_String) "io",
  (MR_String) "file_id",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_0 = {
  (MR_String) "regular_file",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_1 = {
  (MR_String) "directory",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_2 = {
  (MR_String) "symbolic_link",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_3 = {
  (MR_String) "named_pipe",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_4 = {
  (MR_String) "socket",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_5 = {
  (MR_String) "character_device",
  INT32_C(5)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_6 = {
  (MR_String) "block_device",
  INT32_C(6)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_7 = {
  (MR_String) "message_queue",
  INT32_C(7)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_8 = {
  (MR_String) "semaphore",
  INT32_C(8)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_9 = {
  (MR_String) "shared_memory",
  INT32_C(9)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_10 = {
  (MR_String) "unknown",
  INT32_C(10)
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_ordinal_ordered_file_type_0[11] = {
  &mercury__io__io__enum_functor_desc_file_type_0_0,
  &mercury__io__io__enum_functor_desc_file_type_0_1,
  &mercury__io__io__enum_functor_desc_file_type_0_2,
  &mercury__io__io__enum_functor_desc_file_type_0_3,
  &mercury__io__io__enum_functor_desc_file_type_0_4,
  &mercury__io__io__enum_functor_desc_file_type_0_5,
  &mercury__io__io__enum_functor_desc_file_type_0_6,
  &mercury__io__io__enum_functor_desc_file_type_0_7,
  &mercury__io__io__enum_functor_desc_file_type_0_8,
  &mercury__io__io__enum_functor_desc_file_type_0_9,
  &mercury__io__io__enum_functor_desc_file_type_0_10
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_file_type_0[11] = {
  &mercury__io__io__enum_functor_desc_file_type_0_6,
  &mercury__io__io__enum_functor_desc_file_type_0_5,
  &mercury__io__io__enum_functor_desc_file_type_0_1,
  &mercury__io__io__enum_functor_desc_file_type_0_7,
  &mercury__io__io__enum_functor_desc_file_type_0_3,
  &mercury__io__io__enum_functor_desc_file_type_0_0,
  &mercury__io__io__enum_functor_desc_file_type_0_8,
  &mercury__io__io__enum_functor_desc_file_type_0_9,
  &mercury__io__io__enum_functor_desc_file_type_0_4,
  &mercury__io__io__enum_functor_desc_file_type_0_2,
  &mercury__io__io__enum_functor_desc_file_type_0_10
};

static const MR_Integer mercury__io__io__functor_number_map_file_type_0[11] = {
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 9,
  (MR_Integer) 4,
  (MR_Integer) 8,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 10
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_file_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io____Unify____file_type_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____file_type_0_0_10001)),
  (MR_String) "io",
  (MR_String) "file_type",
  { mercury__io__io__enum_name_ordered_file_type_0 },
  { mercury__io__io__enum_ordinal_ordered_file_type_0 },
  (MR_Integer) 11,
  UINT16_C(12),
  mercury__io__io__functor_number_map_file_type_0,

};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_input_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io____Unify____input_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____input_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "input_stream",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_input_stream_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_io_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io____Unify____io_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____io_0_0_10001)),
  (MR_String) "io",
  (MR_String) "io",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_incomplete_result_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_incomplete_result_1_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__io__io__field_types_maybe_incomplete_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_incomplete_result_1_1 = {
  (MR_String) "eof",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mercury__io__list__ti_list_1builtin__type_ctor_info_uint8_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0) }
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_incomplete_result_1_2[1] = { (MR_PseudoTypeInfo) (&mercury__io__list__ti_list_1builtin__type_ctor_info_uint8_0) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_incomplete_result_1_2 = {
  (MR_String) "incomplete",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__io__io__field_types_maybe_incomplete_result_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_incomplete_result_1_3[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_incomplete_result_1_3 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  mercury__io__io__field_types_maybe_incomplete_result_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_0[1] = { &mercury__io__io__du_functor_desc_maybe_incomplete_result_1_1 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_1[1] = { &mercury__io__io__du_functor_desc_maybe_incomplete_result_1_0 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_2[1] = { &mercury__io__io__du_functor_desc_maybe_incomplete_result_1_2 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_3[1] = { &mercury__io__io__du_functor_desc_maybe_incomplete_result_1_3 };

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_maybe_incomplete_result_1[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_maybe_incomplete_result_1[4] = {
  &mercury__io__io__du_functor_desc_maybe_incomplete_result_1_1,
  &mercury__io__io__du_functor_desc_maybe_incomplete_result_1_3,
  &mercury__io__io__du_functor_desc_maybe_incomplete_result_1_2,
  &mercury__io__io__du_functor_desc_maybe_incomplete_result_1_0
};

static const MR_Integer mercury__io__io__functor_number_map_maybe_incomplete_result_1[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_maybe_incomplete_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____maybe_incomplete_result_1_0_10001)),
  ((MR_Box) (mercury__io____Compare____maybe_incomplete_result_1_0_10001)),
  (MR_String) "io",
  (MR_String) "maybe_incomplete_result",
  { mercury__io__io__du_name_ordered_maybe_incomplete_result_1 },
  { mercury__io__io__du_ptag_ordered_maybe_incomplete_result_1 },
  (MR_Integer) 4,
  UINT16_C(12),
  mercury__io__io__functor_number_map_maybe_incomplete_result_1,

};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_0 = {
  (MR_String) "mirc_ok",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_1 = {
  (MR_String) "mirc_eof",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_2 = {
  (MR_String) "mirc_incomplete",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_3 = {
  (MR_String) "mirc_error",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_ordinal_ordered_maybe_incomplete_result_code_0[4] = {
  &mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_0,
  &mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_1,
  &mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_2,
  &mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_3
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_maybe_incomplete_result_code_0[4] = {
  &mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_1,
  &mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_3,
  &mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_2,
  &mercury__io__io__enum_functor_desc_maybe_incomplete_result_code_0_0
};

static const MR_Integer mercury__io__io__functor_number_map_maybe_incomplete_result_code_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_maybe_incomplete_result_code_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io____Unify____maybe_incomplete_result_code_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____maybe_incomplete_result_code_0_0_10001)),
  (MR_String) "io",
  (MR_String) "maybe_incomplete_result_code",
  { mercury__io__io__enum_name_ordered_maybe_incomplete_result_code_0 },
  { mercury__io__io__enum_ordinal_ordered_maybe_incomplete_result_code_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mercury__io__io__functor_number_map_maybe_incomplete_result_code_0,

};

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_partial_res_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_partial_res_1_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__io__io__field_types_maybe_partial_res_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_partial_res_1_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_partial_res_1_1 = {
  (MR_String) "error",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__io__io__field_types_maybe_partial_res_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_1_0[1] = { &mercury__io__io__du_functor_desc_maybe_partial_res_1_0 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_1_1[1] = { &mercury__io__io__du_functor_desc_maybe_partial_res_1_1 };

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_maybe_partial_res_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_maybe_partial_res_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_maybe_partial_res_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_maybe_partial_res_1[2] = {
  &mercury__io__io__du_functor_desc_maybe_partial_res_1_1,
  &mercury__io__io__du_functor_desc_maybe_partial_res_1_0
};

static const MR_Integer mercury__io__io__functor_number_map_maybe_partial_res_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_maybe_partial_res_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____maybe_partial_res_1_0_10001)),
  ((MR_Box) (mercury__io____Compare____maybe_partial_res_1_0_10001)),
  (MR_String) "io",
  (MR_String) "maybe_partial_res",
  { mercury__io__io__du_name_ordered_maybe_partial_res_1 },
  { mercury__io__io__du_ptag_ordered_maybe_partial_res_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__io__io__functor_number_map_maybe_partial_res_1,

};

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_partial_res_2_2_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_partial_res_2_2_0 = {
  (MR_String) "ok2",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__io__io__field_types_maybe_partial_res_2_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_partial_res_2_2_1[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_partial_res_2_2_1 = {
  (MR_String) "error2",
  INT16_C(3),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__io__io__field_types_maybe_partial_res_2_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_2_2_0[1] = { &mercury__io__io__du_functor_desc_maybe_partial_res_2_2_0 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_2_2_1[1] = { &mercury__io__io__du_functor_desc_maybe_partial_res_2_2_1 };

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_maybe_partial_res_2_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_maybe_partial_res_2_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_maybe_partial_res_2_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_maybe_partial_res_2_2[2] = {
  &mercury__io__io__du_functor_desc_maybe_partial_res_2_2_1,
  &mercury__io__io__du_functor_desc_maybe_partial_res_2_2_0
};

static const MR_Integer mercury__io__io__functor_number_map_maybe_partial_res_2_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_maybe_partial_res_2_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____maybe_partial_res_2_2_0_10001)),
  ((MR_Box) (mercury__io____Compare____maybe_partial_res_2_2_0_10001)),
  (MR_String) "io",
  (MR_String) "maybe_partial_res_2",
  { mercury__io__io__du_name_ordered_maybe_partial_res_2_2 },
  { mercury__io__io__du_ptag_ordered_maybe_partial_res_2_2 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__io__io__functor_number_map_maybe_partial_res_2_2,

};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_output_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io____Unify____output_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____output_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "output_stream",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__io__io__field_types_posn_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__io__io__field_names_posn_0_0[3] = {
  (MR_String) "posn_current_line_number",
  (MR_String) "posn_offset_of_start_of_line",
  (MR_String) "posn_current_offset"
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_posn_0_0 = {
  (MR_String) "posn",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__io__io__field_types_posn_0_0,
  mercury__io__io__field_names_posn_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_posn_0_0[1] = { &mercury__io__io__du_functor_desc_posn_0_0 };

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_posn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_posn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_posn_0[1] = { &mercury__io__io__du_functor_desc_posn_0_0 };

static const MR_Integer mercury__io__io__functor_number_map_posn_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_posn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____posn_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____posn_0_0_10001)),
  (MR_String) "io",
  (MR_String) "posn",
  { mercury__io__io__du_name_ordered_posn_0 },
  { mercury__io__io__du_ptag_ordered_posn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__io__io__functor_number_map_posn_0,

};

static const MR_PseudoTypeInfo mercury__io__io__field_types_read_result_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_read_result_1_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__io__io__field_types_read_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_read_result_1_1 = {
  (MR_String) "eof",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_read_result_1_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_read_result_1_2 = {
  (MR_String) "error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__io__io__field_types_read_result_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_read_result_1_0[1] = { &mercury__io__io__du_functor_desc_read_result_1_1 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_read_result_1_1[1] = { &mercury__io__io__du_functor_desc_read_result_1_0 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_read_result_1_2[1] = { &mercury__io__io__du_functor_desc_read_result_1_2 };

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_read_result_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__io__io__du_stag_ordered_read_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_read_result_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_read_result_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_read_result_1[3] = {
  &mercury__io__io__du_functor_desc_read_result_1_1,
  &mercury__io__io__du_functor_desc_read_result_1_2,
  &mercury__io__io__du_functor_desc_read_result_1_0
};

static const MR_Integer mercury__io__io__functor_number_map_read_result_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_read_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____read_result_1_0_10001)),
  ((MR_Box) (mercury__io____Compare____read_result_1_0_10001)),
  (MR_String) "io",
  (MR_String) "read_result",
  { mercury__io__io__du_name_ordered_read_result_1 },
  { mercury__io__io__du_ptag_ordered_read_result_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__io__io__functor_number_map_read_result_1,

};

static const MR_PseudoTypeInfo mercury__io__io__field_types_res_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_res_1_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__io__io__field_types_res_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_res_1_1[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_res_1_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__io__io__field_types_res_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_1_0[1] = { &mercury__io__io__du_functor_desc_res_1_0 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_1_1[1] = { &mercury__io__io__du_functor_desc_res_1_1 };

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_res_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_res_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_res_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_res_1[2] = {
  &mercury__io__io__du_functor_desc_res_1_1,
  &mercury__io__io__du_functor_desc_res_1_0
};

static const MR_Integer mercury__io__io__functor_number_map_res_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_res_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____res_1_0_10001)),
  ((MR_Box) (mercury__io____Compare____res_1_0_10001)),
  (MR_String) "io",
  (MR_String) "res",
  { mercury__io__io__du_name_ordered_res_1 },
  { mercury__io__io__du_ptag_ordered_res_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__io__io__functor_number_map_res_1,

};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_res_0_0 = {
  (MR_String) "ok",
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

static const MR_PseudoTypeInfo mercury__io__io__field_types_res_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_res_0_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__io__io__field_types_res_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_0_0[1] = { &mercury__io__io__du_functor_desc_res_0_0 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_0_1[1] = { &mercury__io__io__du_functor_desc_res_0_1 };

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_res_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__io__io__du_stag_ordered_res_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_res_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_res_0[2] = {
  &mercury__io__io__du_functor_desc_res_0_1,
  &mercury__io__io__du_functor_desc_res_0_0
};

static const MR_Integer mercury__io__io__functor_number_map_res_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_res_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____res_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____res_0_0_10001)),
  (MR_String) "io",
  (MR_String) "res",
  { mercury__io__io__du_name_ordered_res_0 },
  { mercury__io__io__du_ptag_ordered_res_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__io__io__functor_number_map_res_0,

};

static const MR_PseudoTypeInfo mercury__io__io__field_types_result_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_1_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__io__io__field_types_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_1_1 = {
  (MR_String) "eof",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_result_1_2[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_1_2 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__io__io__field_types_result_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_1_0[1] = { &mercury__io__io__du_functor_desc_result_1_1 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_1_1[1] = { &mercury__io__io__du_functor_desc_result_1_0 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_1_2[1] = { &mercury__io__io__du_functor_desc_result_1_2 };

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_result_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__io__io__du_stag_ordered_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_result_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_result_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_result_1[3] = {
  &mercury__io__io__du_functor_desc_result_1_1,
  &mercury__io__io__du_functor_desc_result_1_2,
  &mercury__io__io__du_functor_desc_result_1_0
};

static const MR_Integer mercury__io__io__functor_number_map_result_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____result_1_0_10001)),
  ((MR_Box) (mercury__io____Compare____result_1_0_10001)),
  (MR_String) "io",
  (MR_String) "result",
  { mercury__io__io__du_name_ordered_result_1 },
  { mercury__io__io__du_ptag_ordered_result_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__io__io__functor_number_map_result_1,

};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_0_0 = {
  (MR_String) "ok",
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

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_0_1 = {
  (MR_String) "eof",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_result_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_0_2 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__io__io__field_types_result_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_0_0[2] = {
  &mercury__io__io__du_functor_desc_result_0_0,
  &mercury__io__io__du_functor_desc_result_0_1
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_0_1[1] = { &mercury__io__io__du_functor_desc_result_0_2 };

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_result_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__io__io__du_stag_ordered_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_result_0[3] = {
  &mercury__io__io__du_functor_desc_result_0_1,
  &mercury__io__io__du_functor_desc_result_0_2,
  &mercury__io__io__du_functor_desc_result_0_0
};

static const MR_Integer mercury__io__io__functor_number_map_result_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____result_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____result_0_0_10001)),
  (MR_String) "io",
  (MR_String) "result",
  { mercury__io__io__du_name_ordered_result_0 },
  { mercury__io__io__du_ptag_ordered_result_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__io__io__functor_number_map_result_0,

};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_result_code_0_0 = {
  (MR_String) "result_code_ok",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_result_code_0_1 = {
  (MR_String) "result_code_eof",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_result_code_0_2 = {
  (MR_String) "result_code_error",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_ordinal_ordered_result_code_0[3] = {
  &mercury__io__io__enum_functor_desc_result_code_0_0,
  &mercury__io__io__enum_functor_desc_result_code_0_1,
  &mercury__io__io__enum_functor_desc_result_code_0_2
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_result_code_0[3] = {
  &mercury__io__io__enum_functor_desc_result_code_0_1,
  &mercury__io__io__enum_functor_desc_result_code_0_2,
  &mercury__io__io__enum_functor_desc_result_code_0_0
};

static const MR_Integer mercury__io__io__functor_number_map_result_code_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_result_code_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io____Unify____result_code_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____result_code_0_0_10001)),
  (MR_String) "io",
  (MR_String) "result_code",
  { mercury__io__io__enum_name_ordered_result_code_0 },
  { mercury__io__io__enum_ordinal_ordered_result_code_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__io__io__functor_number_map_result_code_0,

};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__io____Unify____state_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____state_0_0_10001)),
  (MR_String) "io",
  (MR_String) "state",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__io____Unify____stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "stream",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_stream_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io____Unify____stream_id_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____stream_id_0_0_10001)),
  (MR_String) "io",
  (MR_String) "stream_id",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_system_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__io____Unify____system_error_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____system_error_0_0_10001)),
  (MR_String) "io",
  (MR_String) "system_error",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__io__io__field_types_system_result_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_system_result_0_0 = {
  (MR_String) "exited",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__io__io__field_types_system_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_system_result_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_system_result_0_1 = {
  (MR_String) "signalled",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__io__io__field_types_system_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_system_result_0_0[1] = { &mercury__io__io__du_functor_desc_system_result_0_0 };

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_system_result_0_1[1] = { &mercury__io__io__du_functor_desc_system_result_0_1 };

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_system_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_system_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_system_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_system_result_0[2] = {
  &mercury__io__io__du_functor_desc_system_result_0_0,
  &mercury__io__io__du_functor_desc_system_result_0_1
};

static const MR_Integer mercury__io__io__functor_number_map_system_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_system_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____system_result_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____system_result_0_0_10001)),
  (MR_String) "io",
  (MR_String) "system_result",
  { mercury__io__io__du_name_ordered_system_result_0 },
  { mercury__io__io__du_ptag_ordered_system_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__io__io__functor_number_map_system_result_0,

};

static const MR_Integer mercury__io__io__functor_number_map_text_input_stream_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_text_input_stream_0 = {
  (MR_String) "text_input_stream",
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_stream_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_text_input_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__io____Unify____text_input_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____text_input_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "text_input_stream",
  { &mercury__io__io__notag_functor_desc_text_input_stream_0 },
  { &mercury__io__io__notag_functor_desc_text_input_stream_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__io__io__functor_number_map_text_input_stream_0,

};

static const MR_Integer mercury__io__io__functor_number_map_text_output_stream_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_text_output_stream_0 = {
  (MR_String) "text_output_stream",
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_stream_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_text_output_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__io____Unify____text_output_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____text_output_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "text_output_stream",
  { &mercury__io__io__notag_functor_desc_text_output_stream_0 },
  { &mercury__io__io__notag_functor_desc_text_output_stream_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__io__io__functor_number_map_text_output_stream_0,

};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_0 = {
  (MR_String) "set",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_1 = {
  (MR_String) "cur",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_2 = {
  (MR_String) "end",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_ordinal_ordered_whence_0[3] = {
  &mercury__io__io__enum_functor_desc_whence_0_0,
  &mercury__io__io__enum_functor_desc_whence_0_1,
  &mercury__io__io__enum_functor_desc_whence_0_2
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_whence_0[3] = {
  &mercury__io__io__enum_functor_desc_whence_0_1,
  &mercury__io__io__enum_functor_desc_whence_0_2,
  &mercury__io__io__enum_functor_desc_whence_0_0
};

static const MR_Integer mercury__io__io__functor_number_map_whence_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_whence_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io____Unify____whence_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____whence_0_0_10001)),
  (MR_String) "io",
  (MR_String) "whence",
  { mercury__io__io__enum_name_ordered_whence_0 },
  { mercury__io__io__enum_ordinal_ordered_whence_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__io__io__functor_number_map_whence_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__binary_output_stream__arity0__uint8__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__binary_output_stream__arity0__int8__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__binary_output_stream__arity0__int__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__univ__univ__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__uint64__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint64__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__uint32__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__uint16__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__uint8__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__uint__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__int64__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int64__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__int32__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__int16__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__int8__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__int__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__float__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__character__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__unboxed_reader__arity4__io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__unboxed_reader____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__unboxed_reader__arity4__io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__unboxed_reader____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__unboxed_reader__arity4__io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__unboxed_reader____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__io__binary_output_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__stream____io__text_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__io__binary_input_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__io__text_input_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__stream____io__text_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__seekable__arity2__io__binary_output_stream__arity0__io__state__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0_10001)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek64_5_5_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__seekable__arity2__io__binary_input_stream__arity0__io__state__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0_10001)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek64_5_5_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__reader__arity4__io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__reader__arity4__io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__reader__arity4__io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__reader__arity4__io__text_input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__reader__arity4__io__text_input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__reader__arity4__io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__putback__arity4__io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__putback__arity4__io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__putback__arity4__io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__putback__arity4__io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__putback____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__io__binary_output_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__output____io__text_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__line_oriented__arity2__io__text_output_stream__arity0__io__state__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__line_oriented____io__text_output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__line_oriented____io__text_output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__line_oriented__arity2__io__text_input_stream__arity0__io__state__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__line_oriented____io__text_input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__line_oriented____io__text_input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__input__arity2__io__binary_input_stream__arity0__io__state__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__input__arity2__io__text_input_stream__arity0__io__state__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__error__arity1__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__error____io__error__arity0______stream__error_message_1_1_f_0_10001))
};

static void MR_CALL 
mercury__io__IntroducedFrom__pred__update_globals__5000__1_3_p_0(
  MR_Word UpdatePred_4,
  MR_Word Globals0_6,
  MR_Word * LambdaHeadVar__1_16)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, UpdatePred_4, (MR_Integer) 1))));
  MR_Box conv1_LambdaHeadVar__1_16;

  func_0(((MR_Box) (UpdatePred_4)), ((MR_Box) (Globals0_6)), &conv1_LambdaHeadVar__1_16);
  *LambdaHeadVar__1_16 = ((MR_Word) (conv1_LambdaHeadVar__1_16));
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Char HeadVar__2_2)
{
  mercury__io__write_char_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Float HeadVar__2_2)
{
  mercury__io__write_float_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  mercury__io__write_int_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  mercury__io__write_int8_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  int16_t HeadVar__2_2)
{
  mercury__io__write_int16_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  mercury__io__write_int32_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int64__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  mercury__io__write_int64_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  mercury__io__write_uint_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  mercury__io__write_uint8_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  mercury__io__write_uint16_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  mercury__io__write_uint32_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint64__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  mercury__io__write_uint64_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  mercury__io__write_string_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), HeadVar__1_1, (MR_Integer) 1, HeadVar__2_2, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  mercury__io__write_byte_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  mercury__io__write_binary_int8_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  mercury__io__write_binary_uint8_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__unboxed_reader____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Char * HeadVar__3_3)
{
  mercury__io__stream_read_char_unboxed_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__unboxed_reader____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  int8_t * HeadVar__3_3)
{
  MR_Word Result0_6;

  mercury__io__read_binary_int8_unboxed_5_p_0(HeadVar__1_1, &Result0_6, HeadVar__3_3);
  switch (MR_tag((MR_Word) Result0_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Result0_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Error_7 = ((MR_Word) ((MR_hl_field(1, Result0_6, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Error_7));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__unboxed_reader____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  uint8_t * HeadVar__3_3)
{
  MR_Word Result0_6;

  mercury__io__read_binary_uint8_unboxed_5_p_0(HeadVar__1_1, &Result0_6, HeadVar__3_3);
  switch (MR_tag((MR_Word) Result0_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Result0_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Error_7 = ((MR_Word) ((MR_hl_field(1, Result0_6, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Error_7));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__text_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

  mercury__io__stream_db__stream_name_4_p_0(Stream_5, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

  mercury__io__stream_db__stream_name_4_p_0(Stream_5, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__text_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

  mercury__io__stream_db__stream_name_4_p_0(Stream_5, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

  mercury__io__stream_db__stream_name_4_p_0(Stream_5, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek64_5_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  int64_t HeadVar__3_3)
{
  MR_Word Whence_6;

  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Whence_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      Whence_6 = (MR_Integer) 2;
      break;
    case (MR_Integer) 0:
      Whence_6 = (MR_Integer) 0;
      break;
  }
  mercury__io__seek_binary_input64_5_p_0(HeadVar__1_1, Whence_6, HeadVar__3_3);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_Word Whence_6;

  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Whence_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      Whence_6 = (MR_Integer) 2;
      break;
    case (MR_Integer) 0:
      Whence_6 = (MR_Integer) 0;
      break;
  }
  mercury__io__seek_binary_input_5_p_0(HeadVar__1_1, Whence_6, HeadVar__3_3);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek64_5_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  int64_t HeadVar__3_3)
{
  MR_Word Whence_6;

  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Whence_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      Whence_6 = (MR_Integer) 2;
      break;
    case (MR_Integer) 0:
      Whence_6 = (MR_Integer) 0;
      break;
  }
  mercury__io__seek_binary_output64_5_p_0(HeadVar__1_1, Whence_6, HeadVar__3_3);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_Word Whence_6;

  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Whence_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      Whence_6 = (MR_Integer) 2;
      break;
    case (MR_Integer) 0:
      Whence_6 = (MR_Integer) 0;
      break;
  }
  mercury__io__seek_binary_output_5_p_0(HeadVar__1_1, Whence_6, HeadVar__3_3);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  mercury__io__stream_read_char_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  mercury__io__stream_read_line_as_string_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_Word Result0_5;

  mercury__io__read_file_as_string_4_p_0(HeadVar__1_1, &Result0_5);
  if (((MR_tag((MR_Word) Result0_5)) == (MR_Integer) 1))
  {
    MR_Word Error_8 = ((MR_Word) ((MR_hl_field(1, Result0_5, (MR_Integer) 1))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (Error_8));
    }
  }
  else
  {
    MR_String String_6 = ((MR_String) ((MR_hl_field(0, Result0_5, (MR_Integer) 0))));
    MR_Word Var_9 = (MR_Word) (String_6);

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_9));
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  mercury__io__stream_read_byte_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  mercury__io__stream_read_binary_int8_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  mercury__io__stream_read_binary_uint8_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Char HeadVar__2_2)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word Ok_6;

  mercury__io__primitives_read__putback_char_2_5_p_0(Stream_5, HeadVar__2_2, &Ok_6);
  switch (Ok_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (&mercury__io_scalar_common_5[0])));
        return;
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  mercury__io__putback_byte_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(
  MR_Word HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  uint8_t UInt8_6;
  MR_Word Ok_7;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0

	int8_t I8;
	uint8_t U8;

	I8 = HeadVar__2_2 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	UInt8_6  = U8;
}
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0

	MercuryFilePtr Stream;
	uint8_t UInt8;
	MR_Word Ok;

	Stream = (MercuryFilePtr)Stream_5 ;
	UInt8 = UInt8_6 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, UInt8) == EOF) {
        Ok = MR_FALSE;
    } else {
        Ok = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	Ok_7  = Ok;
}
  switch (Ok_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (&mercury__io_scalar_common_5[1])));
        return;
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word Ok_6;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0

	MercuryFilePtr Stream;
	uint8_t UInt8;
	MR_Word Ok;

	Stream = (MercuryFilePtr)Stream_5 ;
	UInt8 = HeadVar__2_2 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, UInt8) == EOF) {
        Ok = MR_FALSE;
    } else {
        Ok = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	Ok_6  = Ok;
}
  switch (Ok_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (&mercury__io_scalar_common_5[2])));
        return;
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__text_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(
  MR_Word HeadVar__1_1)
{
  mercury__io__flush_output_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(
  MR_Word HeadVar__1_1)
{
  mercury__io__flush_binary_output_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__text_input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__text_input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_5 ;
	LineNum = HeadVar__2_2 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__text_input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__text_input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = LineNum;
}
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__text_output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__text_output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_5 ;
	LineNum = HeadVar__2_2 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__text_output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__text_output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = LineNum;
}
}

MR_String MR_CALL 
mercury__io__ClassMethod_for_stream__error____io__error__arity0______stream__error_message_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
      break;
    case (MR_Integer) 3:
      HeadVar__2_2 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
      break;
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__io____Compare____whence_0_0(
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
mercury__io____Unify____whence_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__io____Compare____system_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

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
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Integer ArgX1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    succeeded = (ArgX1_6 < ArgY1_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_6 == ArgY1_7);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____system_result_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  else
  {
    MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____system_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__io____Unify____system_error_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____stream_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__io____Unify____stream_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__io____Unify____stream_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____state_0_0(
  MR_Word * HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Integer CastX_4 = (MR_Integer) (mercury__private_builtin__dummy_var);
  MR_Integer CastY_5 = (MR_Integer) (mercury__private_builtin__dummy_var);

  succeeded = (CastX_4 == CastY_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    {
      mercury__require__error_1_p_0((MR_String) "attempt to compare two I/O states");
      return;
    }
}

MR_bool MR_CALL 
mercury__io____Unify____state_0_0(void)
{
  MR_bool succeeded;
  MR_Integer CastX_3 = (MR_Integer) (mercury__private_builtin__dummy_var);
  MR_Integer CastY_4 = (MR_Integer) (mercury__private_builtin__dummy_var);

  succeeded = (CastX_3 == CastY_4);
  if (!(succeeded))
    mercury__require__error_1_p_0((MR_String) "attempt to unify two I/O states");
  succeeded = MR_TRUE;
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____result_code_0_0(
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
mercury__io____Unify____result_code_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__io____Compare____result_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__io____Unify____result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__io____Unify____error_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____result_1_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Box ArgX1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
              MR_Box ArgY1_5 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
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
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__io____Unify____result_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box ArgX1_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__io____Unify____error_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____res_0_0(
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

    mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__io____Unify____res_0_0(
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mercury__io____Unify____error_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____res_1_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__io____Unify____res_1_0(
  MR_Word TypeInfo_for_T_9,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mercury__io____Unify____error_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____read_result_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Box ArgX1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
              MR_Box ArgY1_5 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_13, HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
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
              MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              MR_Integer ArgY2_10 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_8;
              MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__io____Compare____read_result_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_6 ;
	S2 = ArgY1_7 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_16  = Res;
}
              succeeded = (Var_16 < (MR_Integer) 0);
              if (succeeded)
                SubResult1_8 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_16 == (MR_Integer) 0);
                if (succeeded)
                  SubResult1_8 = (MR_Integer) 0;
                else
                  SubResult1_8 = (MR_Integer) 2;
              }
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
              {
                succeeded = (ArgX2_9 < ArgY2_10);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX2_9 == ArgY2_10);
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
}

MR_bool MR_CALL 
mercury__io____Unify____read_result_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box ArgX1_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;
          MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            if (succeeded)
              succeeded = (ArgX2_9 == ArgY2_10);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____posn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
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
        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 == ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 0;
          else
            *HeadVar__1_1 = (MR_Integer) 2;
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____posn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____output_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__io____Compare____text_output_stream_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

void MR_CALL 
mercury__io____Compare____text_output_stream_0_0(
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
  {
    MR_Box ArgX1_4 = (MR_Box) (HeadVar__2_2);
    MR_Box ArgY1_5 = (MR_Box) (HeadVar__3_3);
    MR_Word Cast_HeadVar1_9 = (MR_Word) (ArgX1_4);
    MR_Word Cast_HeadVar2_10 = (MR_Word) (ArgY1_5);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_9, Cast_HeadVar2_10);
  }
}

MR_bool MR_CALL 
mercury__io____Unify____output_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__io____Unify____text_output_stream_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__io____Unify____text_output_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Box ArgX1_3 = (MR_Box) (HeadVar__1_1);
    MR_Box ArgY1_4 = (MR_Box) (HeadVar__2_2);
    MR_Word Cast_HeadVar1_7 = (MR_Word) (ArgX1_3);
    MR_Word Cast_HeadVar2_8 = (MR_Word) (ArgY1_4);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_7, Cast_HeadVar2_8);
  }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____maybe_partial_res_2_2_0(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Box ArgX1_9 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_10 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
      MR_Box ArgX2_12 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
      MR_Box ArgY2_13 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1));
      MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_11;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T1_19, &SubResult1_11, ArgX1_9, ArgY1_10);
      succeeded = (SubResult1_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_11;
      else
      {
        MR_Word SubResult2_14;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T2_20, &SubResult2_14, ArgX2_12, ArgY2_13);
        succeeded = (SubResult2_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_14;
        else
          mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX3_15, ArgY3_16);
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T1_19, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0(TypeInfo_for_T2_20, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
mercury__io____Unify____maybe_partial_res_2_2_0(
  MR_Word TypeInfo_for_T1_15,
  MR_Word TypeInfo_for_T2_16,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Box ArgX1_7 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_8;
    MR_Box ArgX2_9 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_10;
    MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      ArgY2_10 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
      ArgY3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_15, ArgX1_7, ArgY1_8);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T2_16, ArgX2_9, ArgY2_10);
        if (succeeded)
          succeeded = mercury__io____Unify____error_0_0(ArgX3_11, ArgY3_12);
      }
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_15, ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T2_16, ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____maybe_partial_res_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Box ArgX1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_7 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_8;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_13, &SubResult1_8, ArgX1_6, ArgY1_7);
      succeeded = (SubResult1_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
        mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX2_9, ArgY2_10);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_13, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__io____Unify____maybe_partial_res_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Box ArgX1_5 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_5, ArgY1_6);
      if (succeeded)
        succeeded = mercury__io____Unify____error_0_0(ArgX2_7, ArgY2_8);
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____maybe_incomplete_result_code_0_0(
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
mercury__io____Unify____maybe_incomplete_result_code_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__io____Compare____maybe_incomplete_result_1_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_10 == CastY_11);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
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
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Box ArgX1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
              MR_Box ArgY1_5 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_12, HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
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
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&mercury__io_scalar_common_4[2]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
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
            {
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

              mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX1_8, ArgY1_9);
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__io____Unify____maybe_incomplete_result_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box ArgX1_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_14_14;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_14_14 = (MR_Word) (&mercury__io_scalar_common_4[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__io____Unify____error_0_0(ArgX1_9, ArgY1_10);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____io_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_105_111_95_95_105_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_105_111_95_95_105_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__io____Unify____io_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__io____Compare____input_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__io____Compare____text_input_stream_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

void MR_CALL 
mercury__io____Compare____text_input_stream_0_0(
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
  {
    MR_Box ArgX1_4 = (MR_Box) (HeadVar__2_2);
    MR_Box ArgY1_5 = (MR_Box) (HeadVar__3_3);
    MR_Word Cast_HeadVar1_9 = (MR_Word) (ArgX1_4);
    MR_Word Cast_HeadVar2_10 = (MR_Word) (ArgY1_5);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_9, Cast_HeadVar2_10);
  }
}

MR_bool MR_CALL 
mercury__io____Unify____input_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__io____Unify____text_input_stream_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__io____Unify____text_input_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Box ArgX1_3 = (MR_Box) (HeadVar__1_1);
    MR_Box ArgY1_4 = (MR_Box) (HeadVar__2_2);
    MR_Word Cast_HeadVar1_7 = (MR_Word) (ArgX1_3);
    MR_Word Cast_HeadVar2_8 = (MR_Word) (ArgY1_4);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_7, Cast_HeadVar2_8);
  }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____file_type_0_0(
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
mercury__io____Unify____file_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__io____Compare____file_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_4 == CastY_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    mercury__io__compare_file_id_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

MR_bool MR_CALL 
mercury__io____Unify____file_id_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_4 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_5 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_4 == CastY_5);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word Result_3;

    mercury__io__compare_file_id_3_p_0(&Result_3, HeadVar__1_1, HeadVar__2_2);
    succeeded = (Result_3 == (MR_Integer) 0);
  }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____environment_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__io_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__io____Unify____environment_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__io_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____chunk_inner_res0_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res0_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__io____Unify____error_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____chunk_inner_res_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
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
              MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
              MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_15, HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
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
              MR_Box ArgX1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
              MR_Box ArgY1_7 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
              MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_8;

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_15, &SubResult1_8, ArgX1_6, ArgY1_7);
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
                mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX2_9, ArgY2_10);
            }
            break;
          case (MR_Integer) 2:
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
              MR_Box ArgX1_11 = (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0));
              MR_Box ArgY1_12 = (MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0));

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_15, HeadVar__1_1, ArgX1_11, ArgY1_12);
            }
            break;
        }
        break;
    }
}

void MR_CALL 
mercury__io____Compare____error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
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
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
              MR_Integer Var_45;

{
#define MR_PROC_LABEL mercury__io____Compare____error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_45  = Res;
}
              succeeded = (Var_45 < (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_45 == (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
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
              MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
              MR_Box ArgX2_9 = ((MR_Box) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Box ArgY2_10 = ((MR_Box) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_8;
              MR_Integer Var_40;

{
#define MR_PROC_LABEL mercury__io____Compare____error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_6 ;
	S2 = ArgY1_7 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_40  = Res;
}
              succeeded = (Var_40 < (MR_Integer) 0);
              if (succeeded)
                SubResult1_8 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_40 == (MR_Integer) 0);
                if (succeeded)
                  SubResult1_8 = (MR_Integer) 0;
                else
                  SubResult1_8 = (MR_Integer) 2;
              }
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
              {
                MR_Word Cast_HeadVar1_42 = (MR_Word) (ArgX2_9);
                MR_Word Cast_HeadVar2_43 = (MR_Word) (ArgY2_10);

                mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_42, Cast_HeadVar2_43);
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
              MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_12 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Box ArgX2_14 = ((MR_Box) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              MR_Box ArgY2_15 = ((MR_Box) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_13;
              MR_Integer Var_35;

{
#define MR_PROC_LABEL mercury__io____Compare____error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_11 ;
	S2 = ArgY1_12 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_35  = Res;
}
              succeeded = (Var_35 < (MR_Integer) 0);
              if (succeeded)
                SubResult1_13 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_35 == (MR_Integer) 0);
                if (succeeded)
                  SubResult1_13 = (MR_Integer) 0;
                else
                  SubResult1_13 = (MR_Integer) 2;
              }
              succeeded = (SubResult1_13 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_13;
              else
              {
                MR_Word Cast_HeadVar1_37 = (MR_Word) (ArgX2_14);
                MR_Word Cast_HeadVar2_38 = (MR_Word) (ArgY2_15);

                mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_37, Cast_HeadVar2_38);
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
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
            {
              MR_String ArgX1_16 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_17 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));
              MR_Box ArgX2_19 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
              MR_Box ArgY2_20 = ((MR_Box) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_18;
              MR_Integer Var_30;

{
#define MR_PROC_LABEL mercury__io____Compare____error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_16 ;
	S2 = ArgY1_17 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_30  = Res;
}
              succeeded = (Var_30 < (MR_Integer) 0);
              if (succeeded)
                SubResult1_18 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_30 == (MR_Integer) 0);
                if (succeeded)
                  SubResult1_18 = (MR_Integer) 0;
                else
                  SubResult1_18 = (MR_Integer) 2;
              }
              succeeded = (SubResult1_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_18;
              else
              {
                MR_Word Cast_HeadVar1_32 = (MR_Word) (ArgX2_19);
                MR_Word Cast_HeadVar2_33 = (MR_Word) (ArgY2_20);

                mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_32, Cast_HeadVar2_33);
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box ArgX1_5 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_5, ArgY1_6);
            if (succeeded)
              succeeded = mercury__io____Unify____error_0_0(ArgX2_7, ArgY2_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box ArgX1_9 = (MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_9, ArgY1_10);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
mercury__io____Unify____error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_6;
          MR_Box ArgX2_7 = ((MR_Box) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Box ArgY2_8;
          MR_Word Cast_HeadVar1_19;
          MR_Word Cast_HeadVar2_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Box) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
            if (succeeded)
            {
              Cast_HeadVar1_19 = (MR_Word) (ArgX2_7);
              Cast_HeadVar2_20 = (MR_Word) (ArgY2_8);
              succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_19, Cast_HeadVar2_20);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_10;
          MR_Box ArgX2_11 = ((MR_Box) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Box ArgY2_12;
          MR_Word Cast_HeadVar1_25;
          MR_Word Cast_HeadVar2_26;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_12 = ((MR_Box) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
            if (succeeded)
            {
              Cast_HeadVar1_25 = (MR_Word) (ArgX2_11);
              Cast_HeadVar2_26 = (MR_Word) (ArgY2_12);
              succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_25, Cast_HeadVar2_26);
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_14;
          MR_Box ArgX2_15 = ((MR_Box) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
          MR_Box ArgY2_16;
          MR_Word Cast_HeadVar1_22;
          MR_Word Cast_HeadVar2_23;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_14 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_16 = ((MR_Box) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
            if (succeeded)
            {
              Cast_HeadVar1_22 = (MR_Word) (ArgX2_15);
              Cast_HeadVar2_23 = (MR_Word) (ArgY2_16);
              succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_22, Cast_HeadVar2_23);
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____byte_order_0_0(
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
mercury__io____Unify____byte_order_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__io____Compare____binary_output_stream_0_0(
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
  {
    MR_Box ArgX1_4 = (MR_Box) (HeadVar__2_2);
    MR_Box ArgY1_5 = (MR_Box) (HeadVar__3_3);
    MR_Word Cast_HeadVar1_9 = (MR_Word) (ArgX1_4);
    MR_Word Cast_HeadVar2_10 = (MR_Word) (ArgY1_5);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_9, Cast_HeadVar2_10);
  }
}

MR_bool MR_CALL 
mercury__io____Unify____binary_output_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Box ArgX1_3 = (MR_Box) (HeadVar__1_1);
    MR_Box ArgY1_4 = (MR_Box) (HeadVar__2_2);
    MR_Word Cast_HeadVar1_7 = (MR_Word) (ArgX1_3);
    MR_Word Cast_HeadVar2_8 = (MR_Word) (ArgY1_4);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_7, Cast_HeadVar2_8);
  }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____binary_input_stream_0_0(
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
  {
    MR_Box ArgX1_4 = (MR_Box) (HeadVar__2_2);
    MR_Box ArgY1_5 = (MR_Box) (HeadVar__3_3);
    MR_Word Cast_HeadVar1_9 = (MR_Word) (ArgX1_4);
    MR_Word Cast_HeadVar2_10 = (MR_Word) (ArgY1_5);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_9, Cast_HeadVar2_10);
  }
}

MR_bool MR_CALL 
mercury__io____Unify____binary_input_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Box ArgX1_3 = (MR_Box) (HeadVar__1_1);
    MR_Box ArgY1_4 = (MR_Box) (HeadVar__2_2);
    MR_Word Cast_HeadVar1_7 = (MR_Word) (ArgX1_3);
    MR_Word Cast_HeadVar2_8 = (MR_Word) (ArgY1_4);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_7, Cast_HeadVar2_8);
  }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____access_type_0_0(
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
mercury__io____Unify____access_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__io__interpret_maybe_incomplete_result_code_7_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word ResultCode_8,
  MR_Box Error_9,
  MR_Word IncompleteBytes_10,
  MR_Box Value_11,
  MR_Word * Result_12)
{
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_12 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOError_14;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_12 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (IOError_14));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_12 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_12 = base;
        MR_hl_field(1, base, 0) = Value_11;
      }
      break;
  }
}

void MR_CALL 
mercury__io__interpret_result_code1_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word ResultCode_7,
  MR_Box Error_8,
  MR_Box Value_9,
  MR_Word * Result_10)
{
  switch (ResultCode_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_12;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "read failed: ", &IOError_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_10 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (IOError_12));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(1, base, 0) = Value_9;
      }
      break;
  }
}

void MR_CALL 
mercury__io__interpret_result_code0_5_p_0(
  MR_Word ResultCode_6,
  MR_Box Error_7,
  MR_Word * Result_8)
{
  switch (ResultCode_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_8 = (MR_Word) ((MR_Unsigned) 4U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_10;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_7, (MR_String) "read failed: ", &IOError_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (IOError_10));
        }
      }
      break;
    case (MR_Integer) 0:
      *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

MR_Word MR_CALL 
mercury__io__stream_whence_to_io_whence_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__io__result0_to_stream_result0_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Error_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

        {
          HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Error_3));
        }
      }
      break;
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__io__result1_to_stream_result1_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box T_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));

        {
          HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__2_2, 0) = T_3;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_4 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));

        {
          HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Error_4));
        }
      }
      break;
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__io__restore_output_stream_5_p_1(
  MR_Word _DummyPred_6,
  MR_Word Stream_7,
  MR_Word * HeadVar__3_3)
{
  MR_Box NewStream_12;
  MR_Box OutStream_13;

  *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  NewStream_12 = (MR_Box) (Stream_7);
{
#define MR_PROC_LABEL mercury__io__restore_output_stream_5_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_12 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_13  = (MR_Box) OutStream;
}
}

void MR_CALL 
mercury__io__restore_output_stream_5_p_0(
  MR_Word _DummyPred_6,
  MR_Word Stream_7,
  MR_Word * HeadVar__3_3)
{
  mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_111_114_101_95_111_117_116_112_117_116_95_115_116_114_101_97_109_95_95_91_49_93_95_48_5_p_0(Stream_7, HeadVar__3_3);
}

void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_111_114_101_95_111_117_116_112_117_116_95_115_116_114_101_97_109_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word * HeadVar__3_3)
{
  MR_Box NewStream_12;
  MR_Box OutStream_13;

  *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  NewStream_12 = (MR_Box) (Stream_7);
{
#define MR_PROC_LABEL mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_111_114_101_95_111_117_116_112_117_116_95_115_116_114_101_97_109_95_95_91_49_93_95_48_5_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_12 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_13  = (MR_Box) OutStream;
}
}

void MR_CALL 
mercury__io__call_pred_no_result_4_p_1(
  MR_Word Pred_5,
  MR_Tuple * HeadVar__2_2)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_IO_8;

  *HeadVar__2_2 = (MR_Integer) 0;
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, (MR_Integer) 1))));
  func_0(((MR_Box) (Pred_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_8);
}

void MR_CALL 
mercury__io__call_pred_no_result_4_p_0(
  MR_Word Pred_5,
  MR_Tuple * HeadVar__2_2)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_IO_8;

  *HeadVar__2_2 = (MR_Integer) 0;
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, (MR_Integer) 1))));
  func_0(((MR_Box) (Pred_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_8);
}

static void MR_CALL 
mercury__io__with_output_stream_4_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  mercury__io__restore_output_stream_5_p_1(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv1_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
mercury__io__with_output_stream_4_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv0_HeadVar__2_2;

  mercury__io__call_pred_no_result_4_p_1(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), &conv0_HeadVar__2_2);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
}

void MR_CALL 
mercury__io__with_output_stream_4_p_1(
  MR_Word Stream_5,
  MR_Word Pred_6)
{
  MR_Word OrigStream_8;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Box NewStream_23 = (MR_Box) (Stream_5);
  MR_Box OutStream_24;
  MR_Word _CleanupRes_10;
  MR_Box conv2__Result_9;

{
#define MR_PROC_LABEL mercury__io__with_output_stream_4_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_23 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_24  = (MR_Box) OutStream;
}
  OrigStream_8 = (MR_Word) (OutStream_24);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_10[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (mercury__io__with_output_stream_4_p_1_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Pred_6));
  }
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&mercury__io_scalar_common_11[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (mercury__io__with_output_stream_4_p_1_2));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Pred_6));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (OrigStream_8));
  }
  mercury__exception__finally_2_6_p_1((MR_Word) (&mercury__io_scalar_common_4[0]), Var_14, Var_15, &conv2__Result_9, &_CleanupRes_10);
}

static void MR_CALL 
mercury__io__with_output_stream_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  mercury__io__restore_output_stream_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv1_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
mercury__io__with_output_stream_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv0_HeadVar__2_2;

  mercury__io__call_pred_no_result_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), &conv0_HeadVar__2_2);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
}

void MR_CALL 
mercury__io__with_output_stream_4_p_0(
  MR_Word Stream_5,
  MR_Word Pred_6)
{
  MR_Word OrigStream_8;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Box NewStream_23 = (MR_Box) (Stream_5);
  MR_Box OutStream_24;
  MR_Word _CleanupRes_10;
  MR_Box conv2__Result_9;

{
#define MR_PROC_LABEL mercury__io__with_output_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_23 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_24  = (MR_Box) OutStream;
}
  OrigStream_8 = (MR_Word) (OutStream_24);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_10[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (mercury__io__with_output_stream_4_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Pred_6));
  }
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&mercury__io_scalar_common_11[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (mercury__io__with_output_stream_4_p_0_2));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Pred_6));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (OrigStream_8));
  }
  mercury__exception__finally_2_6_p_0((MR_Word) (&mercury__io_scalar_common_4[0]), Var_14, Var_15, &conv2__Result_9, &_CleanupRes_10);
}

void MR_CALL 
mercury__io__file_id_2_5_p_0(
  MR_String FileName_1,
  MR_Box * FileId_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__file_id_2_5_p_0

	MR_String FileName;
	ML_File_Id FileId;
	MR_Integer Error;

	FileName = FileName_1 ;
		{

    // Win32 returns junk in the st_ino field of `struct stat'.
#if defined(MR_HAVE_STAT) && !defined(MR_WIN32)
    struct stat s;
    int stat_result = stat(FileName, &s);

    if (stat_result == 0) {
        FileId.device = s.st_dev;
        FileId.inode = s.st_ino;
        Error = 0;
    } else {
        Error = errno;
    }
#else
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(ML_File_Id, FileId, *FileId_2 );
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__compare_file_id_2_3_p_0(
  MR_Integer * Res_1,
  MR_Box FileId1_2,
  MR_Box FileId2_3)
{
{
#define MR_PROC_LABEL mercury__io__compare_file_id_2_3_p_0

	MR_Integer Res;
	ML_File_Id FileId1;
	ML_File_Id FileId2;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_File_Id, FileId1_2 , FileId1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_File_Id, FileId2_3 , FileId2);
		{

    int device_cmp;
    int inode_cmp;

    // For compilers other than GCC, glibc defines dev_t as struct (dev_t
    // is 64 bits, and other compilers may not have a 64 bit arithmetic type).
    // XXX This code assumes that dev_t and ino_t do not include padding bits.
    // In practice, that should be OK.
    device_cmp = memcmp(&(FileId1.device), &(FileId2.device),
        sizeof(ML_dev_t));

    if (device_cmp < 0) {
        Res = -1;
    } else if (device_cmp > 0) {
        Res = 1;
    } else {
        inode_cmp = memcmp(&(FileId1.inode), &(FileId2.inode),
            sizeof(ML_ino_t));
        if (inode_cmp < 0) {
            Res = -1;
        } else if (inode_cmp > 0) {
            Res = 1;
        } else {
            Res = 0;
        }
    }


		;}
#undef MR_PROC_LABEL
	*Res_1  = Res;
}
}

void MR_CALL 
mercury__io__compare_file_id_3_p_0(
  MR_Word * Result_4,
  MR_Box FileId1_5,
  MR_Box FileId2_6)
{
  MR_bool succeeded;
  MR_Integer Result0_7;

{
#define MR_PROC_LABEL mercury__io__compare_file_id_3_p_0

	MR_Integer Res;
	ML_File_Id FileId1;
	ML_File_Id FileId2;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_File_Id, FileId1_5 , FileId1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_File_Id, FileId2_6 , FileId2);
		{

    int device_cmp;
    int inode_cmp;

    // For compilers other than GCC, glibc defines dev_t as struct (dev_t
    // is 64 bits, and other compilers may not have a 64 bit arithmetic type).
    // XXX This code assumes that dev_t and ino_t do not include padding bits.
    // In practice, that should be OK.
    device_cmp = memcmp(&(FileId1.device), &(FileId2.device),
        sizeof(ML_dev_t));

    if (device_cmp < 0) {
        Res = -1;
    } else if (device_cmp > 0) {
        Res = 1;
    } else {
        inode_cmp = memcmp(&(FileId1.inode), &(FileId2.inode),
            sizeof(ML_ino_t));
        if (inode_cmp < 0) {
            Res = -1;
        } else if (inode_cmp > 0) {
            Res = 1;
        } else {
            Res = 0;
        }
    }


		;}
#undef MR_PROC_LABEL
	Result0_7  = Res;
}
  succeeded = (Result0_7 < (MR_Integer) 0);
  if (succeeded)
    *Result_4 = (MR_Integer) 1;
  else
  {
    succeeded = (Result0_7 == (MR_Integer) 0);
    if (succeeded)
      *Result_4 = (MR_Integer) 0;
    else
      *Result_4 = (MR_Integer) 2;
  }
}

void MR_CALL 
mercury__io__gc_init_4_p_0(
  MR_Word StreamDbType_1,
  MR_Word UserGlobalsType_2)
{
{
#define MR_PROC_LABEL mercury__io__gc_init_4_p_0

	MR_Word StreamDbType;
	MR_Word UserGlobalsType;

	StreamDbType = StreamDbType_1 ;
	UserGlobalsType = UserGlobalsType_2 ;
		{

    // For Windows DLLs, we need to call GC_INIT() from each DLL.
#ifdef MR_BOEHM_GC
    GC_INIT();
#endif
    MR_add_root(&ML_io_stream_db, (MR_TypeInfo) StreamDbType);
    MR_add_root(&ML_io_user_globals, (MR_TypeInfo) UserGlobalsType);


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__init_std_streams_2_p_0(void)
{
}

void MR_CALL 
mercury__io__system_error_exception_name_2_p_0(
  MR_Box HeadVar__1_3,
  MR_String * HeadVar__2_4)
{
  {
    mercury__require__error_1_p_0((MR_String) "io.system_error_exception_name: inapplicable back-end");
    return;
  }
}

void MR_CALL 
mercury__io__system_error_win32_error_name_2_p_0(
  MR_Box ErrorCode_1,
  MR_String * Name_2)
{
{
#define MR_PROC_LABEL mercury__io__system_error_win32_error_name_2_p_0

	MR_Integer ErrorCode;
	MR_String Name;

	ErrorCode = (MR_Integer)ErrorCode_1 ;
		{

#ifdef MR_WIN32
    const char *suffix = MR_win32_error_name(ErrorCode);
    if (suffix != NULL) {
        const char prefix[6] = "ERROR_";
        size_t prefix_len;
        size_t suffix_len;

        prefix_len = sizeof(prefix);
        suffix_len = strlen(suffix);
        MR_allocate_aligned_string_msg(Name, prefix_len + suffix_len,
            MR_ALLOC_ID);
        MR_memcpy(Name, prefix, prefix_len);
        MR_memcpy(Name + prefix_len, suffix, suffix_len + 1); // include NUL
    } else {
        Name = MR_make_string(MR_ALLOC_ID, "System error 0x%X", ErrorCode);
    }
#else
    MR_fatal_error("io.system_error_win32_error_name: not on Windows");
#endif


		;}
#undef MR_PROC_LABEL
	*Name_2  = Name;
}
}

void MR_CALL 
mercury__io__system_error_errno_name_2_p_0(
  MR_Box Errno_1,
  MR_String * Name_2)
{
{
#define MR_PROC_LABEL mercury__io__system_error_errno_name_2_p_0

	MR_Integer Errno;
	MR_String Name;

	Errno = (MR_Integer)Errno_1 ;
		{

    const char *str = MR_errno_name(Errno);
    if (str != NULL) {
        Name = (MR_String) str;
    } else {
        Name = MR_make_string(MR_ALLOC_ID, "errno %d", Errno);
    }


		;}
#undef MR_PROC_LABEL
	*Name_2  = Name;
}
}

void MR_CALL 
mercury__io__unsafe_set_globals_3_p_0(
  MR_Word Globals_1)
{
{
#define MR_PROC_LABEL mercury__io__unsafe_set_globals_3_p_0

	MR_Word Globals;

	Globals = Globals_1 ;
		{

    // XXX need to globalize the memory.
    ML_io_user_globals = Globals;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__unsafe_get_globals_3_p_0(
  MR_Word * Globals_1)
{
{
#define MR_PROC_LABEL mercury__io__unsafe_get_globals_3_p_0

	MR_Word Globals;

		{

    Globals = ML_io_user_globals;


		;}
#undef MR_PROC_LABEL
	*Globals_1  = Globals;
}
}

void MR_CALL 
mercury__io__unlock_globals_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__io__unlock_globals_0_p_0


		{

    #ifdef MR_THREAD_SAFE
        MR_UNLOCK(&ML_io_user_globals_lock, "io.unlock_globals/2");
    #endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__unlock_globals_2_p_0(void)
{
{
#define MR_PROC_LABEL mercury__io__unlock_globals_2_p_0


		{

    #ifdef MR_THREAD_SAFE
        MR_UNLOCK(&ML_io_user_globals_lock, "io.unlock_globals/2");
    #endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__lock_globals_2_p_0(void)
{
{
#define MR_PROC_LABEL mercury__io__lock_globals_2_p_0


		{

    #ifdef MR_THREAD_SAFE
        MR_LOCK(&ML_io_user_globals_lock, "io.lock_globals/2");
    #endif


		;}
#undef MR_PROC_LABEL
}
}

MR_Integer MR_CALL 
mercury__io__chunk_size_0_f_0(void)
{
  return (MR_Integer) 1000;
}

void MR_CALL 
mercury__io__should_reduce_stack_usage_1_p_0(
  MR_Word * ShouldReduce_1)
{
{
#define MR_PROC_LABEL mercury__io__should_reduce_stack_usage_1_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	*ShouldReduce_1  = ShouldReduce;
}
}

void MR_CALL 
mercury__io__stream_read_file_as_string_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;

  mercury__io__read_file_as_string_4_p_0(Stream_5, &Result0_8);
  if (((MR_tag((MR_Word) Result0_8)) == (MR_Integer) 1))
  {
    MR_Word Error_11 = ((MR_Word) ((MR_hl_field(1, Result0_8, (MR_Integer) 1))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (Error_11));
    }
  }
  else
  {
    MR_String String_9 = ((MR_String) ((MR_hl_field(0, Result0_8, (MR_Integer) 0))));
    MR_Word Var_15 = (MR_Word) (String_9);

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
mercury__io__print_to_stream_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box Stream_5,
  MR_Box Term_6)
{
  MR_Word Var_10 = (MR_Word) (Stream_5);

  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeInfo_for_T_12, (MR_Word) (&mercury__io_scalar_common_3[0]), Var_10, (MR_Integer) 1, Term_6);
}

void MR_CALL 
mercury__io__stream_read_line_as_string_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;

  mercury__io__read_line_as_string_4_p_0(Stream_5, &Result0_8);
  switch (MR_tag((MR_Word) Result0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_String String_9 = ((MR_String) ((MR_hl_field(1, Result0_8, (MR_Integer) 0))));
        MR_Word Var_14 = (MR_Word) (String_9);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_10 = ((MR_Word) ((MR_hl_field(2, Result0_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Error_10));
        }
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__io__native_byte_order_is_big_endian_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__native_byte_order_is_big_endian_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #if defined(MR_BIG_ENDIAN)
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__io__stream_read_binary_uint8_unboxed_5_p_0(
  MR_Word Stream_6,
  MR_Word * Result_7,
  uint8_t * UInt8_8)
{
  MR_Word Result0_10;

  mercury__io__read_binary_uint8_unboxed_5_p_0(Stream_6, &Result0_10, UInt8_8);
  switch (MR_tag((MR_Word) Result0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Result0_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Result_7 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *Result_7 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Error_13 = ((MR_Word) ((MR_hl_field(1, Result0_10, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Error_13));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__stream_read_binary_uint8_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;

  mercury__io__read_binary_uint8_4_p_0(Stream_5, &Result0_8);
  switch (MR_tag((MR_Word) Result0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        uint8_t T_12 = ((uint8_t) (MR_Word) (MR_hl_field(1, Result0_8, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (T_12));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_13 = ((MR_Word) ((MR_hl_field(2, Result0_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Error_13));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__stream_read_binary_int8_unboxed_5_p_0(
  MR_Word Stream_6,
  MR_Word * Result_7,
  int8_t * Int8_8)
{
  MR_Word Result0_10;

  mercury__io__read_binary_int8_unboxed_5_p_0(Stream_6, &Result0_10, Int8_8);
  switch (MR_tag((MR_Word) Result0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Result0_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Result_7 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *Result_7 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Error_13 = ((MR_Word) ((MR_hl_field(1, Result0_10, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Error_13));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__stream_read_binary_int8_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;

  mercury__io__read_binary_int8_4_p_0(Stream_5, &Result0_8);
  switch (MR_tag((MR_Word) Result0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        int8_t T_12 = ((int8_t) (MR_Word) (MR_hl_field(1, Result0_8, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (T_12));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_13 = ((MR_Word) ((MR_hl_field(2, Result0_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Error_13));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__stream_read_byte_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;
  MR_Box Stream_12 = (MR_Box) (Stream_5);
  MR_Word ResultCode_13;
  MR_Box Error_14;
  MR_Integer Byte_15;

{
#define MR_PROC_LABEL mercury__io__stream_read_byte_4_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_12 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_13  = ResultCode;
	Error_14  = (MR_Box) Error;
	Byte_15  = ByteVal;
}
  switch (ResultCode_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Result0_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_20;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_14, (MR_String) "read failed: ", &IOError_20);
        {
          Result0_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Result0_8, 0) = ((MR_Box) (IOError_20));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        Result0_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Result0_8, 0) = ((MR_Box) (Byte_15));
      }
      break;
  }
  switch (MR_tag((MR_Word) Result0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Integer T_22 = ((MR_Integer) ((MR_hl_field(1, Result0_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (T_22));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_23 = ((MR_Word) ((MR_hl_field(2, Result0_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Error_23));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__stream_read_char_unboxed_5_p_0(
  MR_Word Stream_6,
  MR_Word * Result_7,
  MR_Char * Char_8)
{
  MR_Word Result0_10;
  MR_Word ResultCode_13;
  MR_Box Error_14;
  MR_Box Var_16 = (MR_Box) (Stream_6);

  mercury__io__primitives_read__read_char_code_2_6_p_0(Var_16, &ResultCode_13, &Error_14, Char_8);
  switch (ResultCode_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Result0_10 = (MR_Word) ((MR_Unsigned) 4U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_17;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_14, (MR_String) "read failed: ", &IOError_17);
        {
          Result0_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Result0_10, 0) = ((MR_Box) (IOError_17));
        }
      }
      break;
    case (MR_Integer) 0:
      Result0_10 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  switch (MR_tag((MR_Word) Result0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Result0_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Result_7 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *Result_7 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Error_19 = ((MR_Word) ((MR_hl_field(1, Result0_10, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Error_19));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__stream_read_char_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;
  MR_Word ResultCode_12;
  MR_Box Error_13;
  MR_Char Char_14;
  MR_Box Var_17 = (MR_Box) (Stream_5);

  mercury__io__primitives_read__read_char_code_2_6_p_0(Var_17, &ResultCode_12, &Error_13, &Char_14);
  switch (ResultCode_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Result0_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_18;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_13, (MR_String) "read failed: ", &IOError_18);
        {
          Result0_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Result0_8, 0) = ((MR_Box) (IOError_18));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        Result0_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Result0_8, 0) = ((MR_Box) (MR_Word) (Char_14));
      }
      break;
  }
  switch (MR_tag((MR_Word) Result0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Char T_20 = ((MR_Char) (MR_Word) (MR_hl_field(1, Result0_8, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (T_20));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_21 = ((MR_Word) ((MR_hl_field(2, Result0_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Error_21));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__stream_seek_binary_output64_5_p_0(
  MR_Word Stream_6,
  MR_Word Whence0_7,
  int64_t Offset_8)
{
  MR_Word Whence_10;

  switch (Whence0_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Whence_10 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      Whence_10 = (MR_Integer) 2;
      break;
    case (MR_Integer) 0:
      Whence_10 = (MR_Integer) 0;
      break;
  }
  mercury__io__seek_binary_output64_5_p_0(Stream_6, Whence_10, Offset_8);
}

void MR_CALL 
mercury__io__stream_seek_binary_output_5_p_0(
  MR_Word Stream_6,
  MR_Word Whence0_7,
  MR_Integer OffSet_8)
{
  MR_Word Whence_10;

  switch (Whence0_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Whence_10 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      Whence_10 = (MR_Integer) 2;
      break;
    case (MR_Integer) 0:
      Whence_10 = (MR_Integer) 0;
      break;
  }
  mercury__io__seek_binary_output_5_p_0(Stream_6, Whence_10, OffSet_8);
}

void MR_CALL 
mercury__io__stream_seek_binary_input64_5_p_0(
  MR_Word Stream_6,
  MR_Word Whence0_7,
  int64_t OffSet_8)
{
  MR_Word Whence_10;

  switch (Whence0_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Whence_10 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      Whence_10 = (MR_Integer) 2;
      break;
    case (MR_Integer) 0:
      Whence_10 = (MR_Integer) 0;
      break;
  }
  mercury__io__seek_binary_input64_5_p_0(Stream_6, Whence_10, OffSet_8);
}

void MR_CALL 
mercury__io__stream_seek_binary_input_5_p_0(
  MR_Word Stream_6,
  MR_Word Whence0_7,
  MR_Integer OffSet_8)
{
  MR_Word Whence_10;

  switch (Whence0_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Whence_10 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      Whence_10 = (MR_Integer) 2;
      break;
    case (MR_Integer) 0:
      Whence_10 = (MR_Integer) 0;
      break;
  }
  mercury__io__seek_binary_input_5_p_0(Stream_6, Whence_10, OffSet_8);
}

void MR_CALL 
mercury__io__io_state_compare_3_p_0(
  MR_Word * HeadVar__1_4)
{
  {
    mercury__require__error_1_p_0((MR_String) "attempt to compare two I/O states");
    return;
  }
}

MR_bool MR_CALL 
mercury__io__io_state_equal_2_p_0(void)
{
  mercury__require__error_1_p_0((MR_String) "attempt to unify two I/O states");
  return MR_TRUE;
}

void MR_CALL 
mercury__io__unsafe_set_io_state_1_p_0(void)
{
}

void MR_CALL 
mercury__io__unsafe_get_io_state_1_p_0(void)
{
}

MR_Box MR_CALL 
mercury__io__binary_output_stream_get_stream_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Box Stream_3 = (MR_Box) (HeadVar__1_1);

  return Stream_3;
}

MR_Box MR_CALL 
mercury__io__binary_input_stream_get_stream_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Box Stream_3 = (MR_Box) (HeadVar__1_1);

  return Stream_3;
}

MR_Box MR_CALL 
mercury__io__output_stream_get_stream_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Box Stream_3 = (MR_Box) (HeadVar__1_1);

  return Stream_3;
}

MR_Box MR_CALL 
mercury__io__input_stream_get_stream_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Box Stream_3 = (MR_Box) (HeadVar__1_1);

  return Stream_3;
}

void MR_CALL 
mercury__io__file_id_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Box FileId_8;
  MR_Box Error_9;
  MR_Word MaybeIOError_10;

{
#define MR_PROC_LABEL mercury__io__file_id_4_p_0

	MR_String FileName;
	ML_File_Id FileId;
	MR_Integer Error;

	FileName = FileName_5 ;
		{

    // Win32 returns junk in the st_ino field of `struct stat'.
#if defined(MR_HAVE_STAT) && !defined(MR_WIN32)
    struct stat s;
    int stat_result = stat(FileName, &s);

    if (stat_result == 0) {
        FileId.device = s.st_dev;
        FileId.inode = s.st_ino;
        Error = 0;
    } else {
        Error = errno;
    }
#else
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(ML_File_Id, FileId, FileId_8 );
	Error_9  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__file_id_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_9 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    MaybeIOError_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_16;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "cannot get file id: ", &Var_16);
    {
      MaybeIOError_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIOError_10, 0) = ((MR_Box) (Var_16));
    }
  }
  if ((MaybeIOError_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (FileId_8));
    }
  else
  {
    MR_Word IOError_11 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_10, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IOError_11));
    }
  }
}

MR_bool MR_CALL 
mercury__io__have_dotnet_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__have_dotnet_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__io__have_cygwin_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__have_cygwin_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__io__have_win32_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__have_win32_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__io__finalize_state_2_p_0(void)
{
}

void MR_CALL 
mercury__io__init_state_2_p_0(void)
{
  MR_Word Globals_5;
  MR_Word Var_10;
  MR_Word Var_11;

  mercury__io__init_current_streams_2_p_0();
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__io_scalar_common_1[1]) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_10  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_11  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MR_Word StreamDbType;
	MR_Word UserGlobalsType;

	StreamDbType = Var_10 ;
	UserGlobalsType = Var_11 ;
		{

    // For Windows DLLs, we need to call GC_INIT() from each DLL.
#ifdef MR_BOEHM_GC
    GC_INIT();
#endif
    MR_add_root(&ML_io_stream_db, (MR_TypeInfo) StreamDbType);
    MR_add_root(&ML_io_user_globals, (MR_TypeInfo) UserGlobalsType);


		;}
#undef MR_PROC_LABEL
}
  mercury__univ__type_to_univ_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "<globals>")), &Globals_5);
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MR_Word StreamDb;

	StreamDb = (MR_Word) ((MR_Unsigned) 0U) ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0


		{

    #ifdef MR_THREAD_SAFE
        MR_LOCK(&ML_io_user_globals_lock, "io.lock_globals/2");
    #endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MR_Word Globals;

	Globals = Globals_5 ;
		{

    // XXX need to globalize the memory.
    ML_io_user_globals = Globals;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0


		{

    #ifdef MR_THREAD_SAFE
        MR_UNLOCK(&ML_io_user_globals_lock, "io.unlock_globals/2");
    #endif


		;}
#undef MR_PROC_LABEL
}
  mercury__io__insert_std_stream_names_2_p_0();
}

void MR_CALL 
mercury__io__insert_std_stream_names_2_p_0(void)
{
  MR_Box Stdin_4;
  MR_Box Stdout_5;
  MR_Box Stderr_6;

{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	Stdin_4  = (MR_Box) Stream;
}
  mercury__io__stream_db__insert_stream_info_4_p_0(Stdin_4, (MR_Word) (&mercury__io_scalar_common_1[5]));
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	Stdout_5  = (MR_Box) Stream;
}
  mercury__io__stream_db__insert_stream_info_4_p_0(Stdout_5, (MR_Word) (&mercury__io_scalar_common_1[6]));
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Stderr_6  = (MR_Box) Stream;
}
  mercury__io__stream_db__insert_stream_info_4_p_0(Stderr_6, (MR_Word) (&mercury__io_scalar_common_1[7]));
}

void MR_CALL 
mercury__io__init_current_streams_2_p_0(void)
{
  MR_Word StdinBinary_6;
  MR_Word StdoutBinary_7;
  MR_Box NewStream_20;
  MR_Box NewStream_23;
  MR_Box Stream_25;
  MR_Box Stream_26;
  MR_Box NewStream_27;
  MR_Box NewStream_29;
  MR_Box OutStream_21;
  MR_Box OutStream_24;
  MR_Box OutStream_28;
  MR_Box OutStream_30;

{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	NewStream_20  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_20 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	OutStream_21  = (MR_Box) OutStream;
}
{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	NewStream_23  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_23 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_24  = (MR_Box) OutStream;
}
{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin_binary;


		;}
#undef MR_PROC_LABEL
	Stream_25  = (MR_Box) Stream;
}
  StdinBinary_6 = (MR_Word) (Stream_25);
{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout_binary;


		;}
#undef MR_PROC_LABEL
	Stream_26  = (MR_Box) Stream;
}
  StdoutBinary_7 = (MR_Word) (Stream_26);
  NewStream_27 = (MR_Box) (StdinBinary_6);
{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_27 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	OutStream_28  = (MR_Box) OutStream;
}
  NewStream_29 = (MR_Box) (StdoutBinary_7);
{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_29 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_30  = (MR_Box) OutStream;
}
}

MR_bool MR_CALL 
mercury__io__system_error_is_success_1_p_0(
  MR_Box Error_1)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__system_error_is_success_1_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_1 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__io__get_system_error_name_2_p_0(
  MR_Word Error_3,
  MR_String * Name_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Error_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      {
        MR_Box Errno_7 = ((MR_Box) ((MR_hl_field(1, Error_3, (MR_Integer) 1))));

{
#define MR_PROC_LABEL mercury__io__get_system_error_name_2_p_0

	MR_Integer Errno;
	MR_String Name;

	Errno = (MR_Integer)Errno_7 ;
		{

    const char *str = MR_errno_name(Errno);
    if (str != NULL) {
        Name = (MR_String) str;
    } else {
        Name = MR_make_string(MR_ALLOC_ID, "errno %d", Errno);
    }


		;}
#undef MR_PROC_LABEL
	*Name_4  = Name;
}
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box ErrorCode_9 = ((MR_Box) ((MR_hl_field(2, Error_3, (MR_Integer) 1))));

{
#define MR_PROC_LABEL mercury__io__get_system_error_name_2_p_0

	MR_Integer ErrorCode;
	MR_String Name;

	ErrorCode = (MR_Integer)ErrorCode_9 ;
		{

#ifdef MR_WIN32
    const char *suffix = MR_win32_error_name(ErrorCode);
    if (suffix != NULL) {
        const char prefix[6] = "ERROR_";
        size_t prefix_len;
        size_t suffix_len;

        prefix_len = sizeof(prefix);
        suffix_len = strlen(suffix);
        MR_allocate_aligned_string_msg(Name, prefix_len + suffix_len,
            MR_ALLOC_ID);
        MR_memcpy(Name, prefix, prefix_len);
        MR_memcpy(Name + prefix_len, suffix, suffix_len + 1); // include NUL
    } else {
        Name = MR_make_string(MR_ALLOC_ID, "System error 0x%X", ErrorCode);
    }
#else
    MR_fatal_error("io.system_error_win32_error_name: not on Windows");
#endif


		;}
#undef MR_PROC_LABEL
	*Name_4  = Name;
}
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__require__error_1_p_0((MR_String) "io.system_error_exception_name: inapplicable back-end");
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__io__get_exception_object_error_2_p_0(
  MR_Word Error_3,
  MR_Box * Exception_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Error_3)) == (MR_Integer) 3);

  if (succeeded)
    *Exception_4 = ((MR_Box) ((MR_hl_field(3, Error_3, (MR_Integer) 1))));
  return succeeded;
}

MR_bool MR_CALL 
mercury__io__get_windows_error_2_p_0(
  MR_Word Error_3,
  MR_Box * ErrorCode_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Error_3)) == (MR_Integer) 2);

  if (succeeded)
    *ErrorCode_4 = ((MR_Box) ((MR_hl_field(2, Error_3, (MR_Integer) 1))));
  return succeeded;
}

MR_bool MR_CALL 
mercury__io__get_errno_error_2_p_0(
  MR_Word Error_3,
  MR_Box * Errno_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Error_3)) == (MR_Integer) 1);

  if (succeeded)
    *Errno_4 = ((MR_Box) ((MR_hl_field(1, Error_3, (MR_Integer) 1))));
  return succeeded;
}

MR_bool MR_CALL 
mercury__io__get_system_error_2_p_0(
  MR_Word Error_3,
  MR_Box * SystemError_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Error_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      {
        *SystemError_4 = ((MR_Box) ((MR_hl_field(1, Error_3, (MR_Integer) 1))));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        *SystemError_4 = ((MR_Box) ((MR_hl_field(2, Error_3, (MR_Integer) 1))));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      {
        *SystemError_4 = ((MR_Box) ((MR_hl_field(3, Error_3, (MR_Integer) 1))));
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

void MR_CALL 
mercury__io__error_message_2_p_0(
  MR_Word Error_3,
  MR_String * Msg_4)
{
  switch (MR_tag((MR_Word) Error_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_4 = ((MR_String) ((MR_hl_field(0, Error_3, (MR_Integer) 0))));
      break;
    case (MR_Integer) 1:
      *Msg_4 = ((MR_String) ((MR_hl_field(1, Error_3, (MR_Integer) 0))));
      break;
    case (MR_Integer) 2:
      *Msg_4 = ((MR_String) ((MR_hl_field(2, Error_3, (MR_Integer) 0))));
      break;
    case (MR_Integer) 3:
      *Msg_4 = ((MR_String) ((MR_hl_field(3, Error_3, (MR_Integer) 0))));
      break;
  }
}

MR_String MR_CALL 
mercury__io__error_message_1_f_0(
  MR_Word Error_3)
{
  MR_String Msg_4;

  switch (MR_tag((MR_Word) Error_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Msg_4 = ((MR_String) ((MR_hl_field(0, Error_3, (MR_Integer) 0))));
      break;
    case (MR_Integer) 1:
      Msg_4 = ((MR_String) ((MR_hl_field(1, Error_3, (MR_Integer) 0))));
      break;
    case (MR_Integer) 2:
      Msg_4 = ((MR_String) ((MR_hl_field(2, Error_3, (MR_Integer) 0))));
      break;
    case (MR_Integer) 3:
      Msg_4 = ((MR_String) ((MR_hl_field(3, Error_3, (MR_Integer) 0))));
      break;
  }
  return Msg_4;
}

void MR_CALL 
mercury__io__make_io_error_from_windows_error_5_p_0(
  MR_Box Error_6,
  MR_String Prefix_7,
  MR_Word * IOError_8)
{
  mercury__io__error_util__make_io_error_from_windows_error_impl_5_p_0(Error_6, Prefix_7, IOError_8);
}

void MR_CALL 
mercury__io__make_io_error_from_system_error_5_p_0(
  MR_Box Error_6,
  MR_String Prefix_7,
  MR_Word * IOError_8)
{
  mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_6, Prefix_7, IOError_8);
}

MR_Word MR_CALL 
mercury__io__make_io_error_1_f_0(
  MR_String Error_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Error_3));
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__io__report_tabling_statistics_2_p_0(void)
{
  MR_Box Stream_8;

{
#define MR_PROC_LABEL mercury__io__report_tabling_statistics_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Stream_8  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__report_tabling_statistics_2_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr)Stream_8 ;
		{

    MR_table_report_statistics(MR_file(*Stream));


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__report_tabling_statistics_3_p_0(
  MR_Word Stream_4)
{
  MR_Box Var_8 = (MR_Box) (Stream_4);

{
#define MR_PROC_LABEL mercury__io__report_tabling_statistics_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr)Var_8 ;
		{

    MR_table_report_statistics(MR_file(*Stream));


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__report_full_memory_stats_2_p_0(void)
{
  MR_bool succeeded;
  MR_Box Stream_8;
  MR_Box Var_10;

{
#define MR_PROC_LABEL mercury__io__report_full_memory_stats_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Stream_8  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__report_full_memory_stats_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
		{

    Error = MR_report_full_memory_stats(MR_file(*Stream),
        &MR_line_number(*Stream));


		;}
#undef MR_PROC_LABEL
	Var_10  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__report_full_memory_stats_2_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Var_10 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Var_10, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__report_full_memory_stats_3_p_0(
  MR_Word Stream_4)
{
  MR_bool succeeded;
  MR_Box Var_8 = (MR_Box) (Stream_4);
  MR_Box Var_9;

{
#define MR_PROC_LABEL mercury__io__report_full_memory_stats_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_8 ;
		{

    Error = MR_report_full_memory_stats(MR_file(*Stream),
        &MR_line_number(*Stream));


		;}
#undef MR_PROC_LABEL
	Var_9  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__report_full_memory_stats_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Var_9 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_12;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Var_9, (MR_String) "error writing to output file: ", &Var_12);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_12)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__report_standard_stats_2_p_0(void)
{
  MR_bool succeeded;
  MR_Box Stream_8;
  MR_Box Var_10;

{
#define MR_PROC_LABEL mercury__io__report_standard_stats_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Stream_8  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__report_standard_stats_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
		{

    Error = MR_report_standard_stats(MR_file(*Stream),
        &MR_line_number(*Stream));


		;}
#undef MR_PROC_LABEL
	Var_10  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__report_standard_stats_2_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Var_10 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Var_10, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__report_standard_stats_3_p_0(
  MR_Word Stream_4)
{
  MR_bool succeeded;
  MR_Box Var_8 = (MR_Box) (Stream_4);
  MR_Box Var_9;

{
#define MR_PROC_LABEL mercury__io__report_standard_stats_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_8 ;
		{

    Error = MR_report_standard_stats(MR_file(*Stream),
        &MR_line_number(*Stream));


		;}
#undef MR_PROC_LABEL
	Var_9  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__report_standard_stats_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Var_9 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_12;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Var_9, (MR_String) "error writing to output file: ", &Var_12);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_12)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__report_stats_3_p_0(
  MR_String Selector_4)
{
  MR_Word Var_8;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__report_stats_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Var_8 = (MR_Word) (Stream_10);
  mercury__benchmarking__report_stats_4_p_0(Var_8, Selector_4);
}

void MR_CALL 
mercury__io__report_stats_4_p_0(
  MR_Word Stream_5,
  MR_String Selector_6)
{
  mercury__benchmarking__report_stats_4_p_0(Stream_5, Selector_6);
}

static void MR_CALL 
mercury__io__update_globals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__1_16;

  mercury__io__IntroducedFrom__pred__update_globals__5000__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv0_LambdaHeadVar__1_16);
  *wrapper_arg_1 = ((MR_Box) (conv0_LambdaHeadVar__1_16));
}

void MR_CALL 
mercury__io__update_globals_3_p_0(
  MR_Word UpdatePred_4)
{
  MR_Word Globals0_6;
  MR_Word Update_7;
  MR_Word UpdateResult_9;

{
#define MR_PROC_LABEL mercury__io__update_globals_3_p_0


		{

    #ifdef MR_THREAD_SAFE
        MR_LOCK(&ML_io_user_globals_lock, "io.lock_globals/2");
    #endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__update_globals_3_p_0

	MR_Word Globals;

		{

    Globals = ML_io_user_globals;


		;}
#undef MR_PROC_LABEL
	Globals0_6  = Globals;
}
  {
    Update_7 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Update_7, 0) = ((MR_Box) (&mercury__io_scalar_common_12[0]));
    MR_hl_field(0, Update_7, 1) = ((MR_Box) (mercury__io__update_globals_3_p_0_1));
    MR_hl_field(0, Update_7, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Update_7, 3) = ((MR_Box) (UpdatePred_4));
    MR_hl_field(0, Update_7, 4) = ((MR_Box) (Globals0_6));
  }
  mercury__exception__try_2_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Update_7, &UpdateResult_9);
  if (((MR_tag((MR_Word) UpdateResult_9)) == (MR_Integer) 2))
  {
{
#define MR_PROC_LABEL mercury__io__update_globals_3_p_0


		{

    #ifdef MR_THREAD_SAFE
        MR_UNLOCK(&ML_io_user_globals_lock, "io.unlock_globals/2");
    #endif


		;}
#undef MR_PROC_LABEL
}
    {
      mercury__exception__rethrow_1_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), UpdateResult_9);
      return;
    }
  }
  else
  {
    MR_Word Globals_10 = ((MR_Word) ((MR_hl_field(1, UpdateResult_9, (MR_Integer) 0))));

{
#define MR_PROC_LABEL mercury__io__update_globals_3_p_0

	MR_Word Globals;

	Globals = Globals_10 ;
		{

    // XXX need to globalize the memory.
    ML_io_user_globals = Globals;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__update_globals_3_p_0


		{

    #ifdef MR_THREAD_SAFE
        MR_UNLOCK(&ML_io_user_globals_lock, "io.unlock_globals/2");
    #endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__set_globals_3_p_0(
  MR_Word Globals_4)
{
{
#define MR_PROC_LABEL mercury__io__set_globals_3_p_0


		{

    #ifdef MR_THREAD_SAFE
        MR_LOCK(&ML_io_user_globals_lock, "io.lock_globals/2");
    #endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__set_globals_3_p_0

	MR_Word Globals;

	Globals = Globals_4 ;
		{

    // XXX need to globalize the memory.
    ML_io_user_globals = Globals;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__set_globals_3_p_0


		{

    #ifdef MR_THREAD_SAFE
        MR_UNLOCK(&ML_io_user_globals_lock, "io.unlock_globals/2");
    #endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__get_globals_3_p_0(
  MR_Word * Globals_4)
{
{
#define MR_PROC_LABEL mercury__io__get_globals_3_p_0


		{

    #ifdef MR_THREAD_SAFE
        MR_LOCK(&ML_io_user_globals_lock, "io.lock_globals/2");
    #endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__get_globals_3_p_0

	MR_Word Globals;

		{

    Globals = ML_io_user_globals;


		;}
#undef MR_PROC_LABEL
	*Globals_4  = Globals;
}
{
#define MR_PROC_LABEL mercury__io__get_globals_3_p_0


		{

    #ifdef MR_THREAD_SAFE
        MR_UNLOCK(&ML_io_user_globals_lock, "io.unlock_globals/2");
    #endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__call_system_return_signal_4_p_0(
  MR_String Command_5,
  MR_Word * Result_6)
{
  mercury__io__call_system__call_system_return_signal_4_p_0(Command_5, Result_6);
}

void MR_CALL 
mercury__io__call_system_4_p_0(
  MR_String Command_5,
  MR_Word * Result_6)
{
  mercury__io__call_system__call_system_4_p_0(Command_5, Result_6);
}

void MR_CALL 
mercury__io__get_environment_var_map_3_p_0(
  MR_Word * EnvVarMap_4)
{
  MR_Word Var_9;

{
#define MR_PROC_LABEL mercury__io__get_environment_var_map_3_p_0

	MR_Word EnvVarAL0;
	MR_Word EnvVarAL;

	EnvVarAL0 = (MR_Word) ((MR_Unsigned) 0U) ;
		{

    MR_Word cur_env = EnvVarAL0;
    MR_Word next_env;
    int     i;
    char    **environ_vars;

    // See the comments about the environ global below
    // for an explanation of this.
    #if defined(MR_MAC_OSX)
        environ_vars = (*_NSGetEnviron());
    #else
        environ_vars = environ;
    #endif

    for (i = 0; environ_vars[i] != NULL; i++) {
        ML_record_env_var_equal_value(environ_vars[i], cur_env, &next_env);
        cur_env = next_env;
    }

    EnvVarAL = cur_env;


		;}
#undef MR_PROC_LABEL
	Var_9  = EnvVarAL;
}
  mercury__tree234__assoc_list_to_tree234_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, (MR_Word) ((MR_Unsigned) 0U), EnvVarMap_4);
}

MR_bool MR_CALL 
mercury__io__have_set_environment_var_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__have_set_environment_var_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__io__set_environment_var_4_p_0(
  MR_String Var_5,
  MR_String Value_6)
{
  mercury__io__environment__set_environment_var_4_p_0(Var_5, Value_6);
}

void MR_CALL 
mercury__io__set_environment_var_5_p_0(
  MR_String Var_6,
  MR_String Value_7,
  MR_Word * Res_8)
{
  mercury__io__environment__set_environment_var_5_p_0(Var_6, Value_7, Res_8);
}

void MR_CALL 
mercury__io__get_environment_var_4_p_0(
  MR_String Var_5,
  MR_Word * OptValue_6)
{
  mercury__io__environment__get_environment_var_4_p_0(Var_5, OptValue_6);
}

void MR_CALL 
mercury__io__set_exit_status_3_p_0(
  MR_Integer ExitStatus_1)
{
{
#define MR_PROC_LABEL mercury__io__set_exit_status_3_p_0

	MR_Integer ExitStatus;

	ExitStatus = ExitStatus_1 ;
		{

    mercury_exit_status = (int) ExitStatus;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__get_exit_status_3_p_0(
  MR_Integer * ExitStatus_1)
{
{
#define MR_PROC_LABEL mercury__io__get_exit_status_3_p_0

	MR_Integer ExitStatus;

		{

    ExitStatus = mercury_exit_status;


		;}
#undef MR_PROC_LABEL
	*ExitStatus_1  = ExitStatus;
}
}

void MR_CALL 
mercury__io__command_line_arguments_3_p_0(
  MR_Word * Args_1)
{
{
#define MR_PROC_LABEL mercury__io__command_line_arguments_3_p_0

	MR_Word Args;

		{
{
    int i;

    // Convert mercury_argv from a vector to a list.
    i = mercury_argc;
    Args = MR_list_empty_msg(MR_ALLOC_ID);
    while (--i >= 0) {
        Args = MR_string_list_cons_msg((MR_Word) mercury_argv[i], Args,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	*Args_1  = Args;
}
}

void MR_CALL 
mercury__io__progname_base_4_p_0(
  MR_String DefaultName_5,
  MR_String * PrognameBase_6)
{
  MR_String Progname_8;

  mercury__io__progname_4_p_0(DefaultName_5, &Progname_8);
  *PrognameBase_6 = mercury__dir__det_basename_1_f_0(Progname_8);
}

void MR_CALL 
mercury__io__progname_4_p_0(
  MR_String DefaultProgname_1,
  MR_String * PrognameOut_2)
{
{
#define MR_PROC_LABEL mercury__io__progname_4_p_0

	MR_String DefaultProgname;
	MR_String PrognameOut;

	DefaultProgname = DefaultProgname_1 ;
		{

    if ((MR_progname != NULL) && MR_progname_is_known) {
        MR_make_aligned_string(PrognameOut, MR_progname);
    } else {
        PrognameOut = DefaultProgname;
    }


		;}
#undef MR_PROC_LABEL
	*PrognameOut_2  = PrognameOut;
}
}

void MR_CALL 
mercury__io__get_temp_directory_3_p_0(
  MR_String * Dir_4)
{
  mercury__io__file__get_temp_directory_3_p_0(Dir_4);
}

MR_bool MR_CALL 
mercury__io__have_make_temp_directory_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__have_make_temp_directory_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MR_HAVE_MKDTEMP
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__io__make_temp_directory_6_p_0(
  MR_String Dir_7,
  MR_String Prefix_8,
  MR_String Suffix_9,
  MR_Word * Result_10)
{
  mercury__io__file__make_temp_directory_6_p_0(Dir_7, Prefix_8, Suffix_9, Result_10);
}

void MR_CALL 
mercury__io__make_temp_directory_3_p_0(
  MR_Word * Result_4)
{
  MR_String Var_8;

  mercury__io__file__get_temp_directory_3_p_0(&Var_8);
  mercury__io__file__make_temp_directory_6_p_0(Var_8, (MR_String) "mtmp", (MR_String) "", Result_4);
}

void MR_CALL 
mercury__io__make_temp_file_6_p_0(
  MR_String Dir_7,
  MR_String Prefix_8,
  MR_String Suffix_9,
  MR_Word * Result_10)
{
  mercury__io__file__make_temp_file_6_p_0(Dir_7, Prefix_8, Suffix_9, Result_10);
}

void MR_CALL 
mercury__io__make_temp_file_3_p_0(
  MR_Word * Result_4)
{
  MR_String Var_8;

  mercury__io__file__get_temp_directory_3_p_0(&Var_8);
  mercury__io__file__make_temp_file_6_p_0(Var_8, (MR_String) "mtmp", (MR_String) "", Result_4);
}

void MR_CALL 
mercury__io__file_modification_time_4_p_0(
  MR_String File_5,
  MR_Word * Result_6)
{
  mercury__io__file__file_modification_time_4_p_0(File_5, Result_6);
}

void MR_CALL 
mercury__io__file_type_5_p_0(
  MR_Word FollowSymLinks_6,
  MR_String FileName_7,
  MR_Word * Result_8)
{
  mercury__io__file__file_type_5_p_0(FollowSymLinks_6, FileName_7, Result_8);
}

void MR_CALL 
mercury__io__check_file_accessibility_5_p_0(
  MR_String FileName_6,
  MR_Word AccessTypes_7,
  MR_Word * Result_8)
{
  mercury__io__file__check_file_accessibility_5_p_0(FileName_6, AccessTypes_7, Result_8);
}

void MR_CALL 
mercury__io__read_symlink_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  mercury__io__file__read_symlink_4_p_0(FileName_5, Result_6);
}

void MR_CALL 
mercury__io__make_symlink_5_p_0(
  MR_String FileName_6,
  MR_String LinkFileName_7,
  MR_Word * Result_8)
{
  mercury__io__file__make_symlink_5_p_0(FileName_6, LinkFileName_7, Result_8);
}

MR_bool MR_CALL 
mercury__io__have_symlinks_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__have_symlinks_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_HAVE_SYMLINK) && defined(MR_HAVE_READLINK)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__io__rename_file_5_p_0(
  MR_String OldFileName_6,
  MR_String NewFileName_7,
  MR_Word * Result_8)
{
  mercury__io__file__rename_file_5_p_0(OldFileName_6, NewFileName_7, Result_8);
}

void MR_CALL 
mercury__io__remove_file_recursively_4_p_0(
  MR_String FileName_5,
  MR_Word * Res_6)
{
  mercury__io__file__remove_file_recursively_4_p_0(FileName_5, Res_6);
}

void MR_CALL 
mercury__io__remove_file_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  mercury__io__file__remove_file_4_p_0(FileName_5, Result_6);
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  MR_Word ShouldReduce_12;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_1

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_12  = ShouldReduce;
}
  switch (ShouldReduce_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1(TypeInfo_for_T_15, Stream_7, Pred_8, T0_9, Res_10);
      break;
    case (MR_Integer) 1:
      mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_1(TypeInfo_for_T_15, Stream_7, Pred_8, T0_9, Res_10);
      break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  MR_Word ShouldReduce_12;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_12  = ShouldReduce;
}
  switch (ShouldReduce_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0(TypeInfo_for_T_15, Stream_7, Pred_8, T0_9, Res_10);
      break;
    case (MR_Integer) 1:
      mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_0(TypeInfo_for_T_15, Stream_7, Pred_8, T0_9, Res_10);
      break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_1(
  MR_Word TypeInfo_for_T_14,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  MR_Word Stream_10;
  MR_Box Stream_15;
  MR_Word ShouldReduce_16;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_15);
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_1

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_16  = ShouldReduce;
}
  switch (ShouldReduce_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
      break;
    case (MR_Integer) 1:
      mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_1(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
      break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_1(
  MR_Word TypeInfo_for_T_22,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word InnerRes_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_1(TypeInfo_for_T_22, (MR_Integer) 1000, Stream_7, Pred_8, T0_9, &InnerRes_12);
    switch (MR_tag((MR_Word) InnerRes_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box T_13 = (MR_hl_field(0, InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(0, base, 0) = T_13;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, InnerRes_12, (MR_Integer) 1))));
          MR_Box T_21 = (MR_hl_field(1, InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T_21;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box T1_15 = (MR_hl_field(2, InnerRes_12, (MR_Integer) 0));
          MR_Box next_value_of_T0_9 = T1_15;

          // direct tailcall eliminated
          ;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_1(
  MR_Word TypeInfo_for_T_27,
  MR_Integer Left_8,
  MR_Word Stream_9,
  MR_Word Pred_10,
  MR_Box T0_11,
  MR_Word * Res_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Left_8 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word ByteResult_14;
      MR_Box Stream_28 = (MR_Box) (Stream_9);
      MR_Word ResultCode_29;
      MR_Box Error_30;
      MR_Integer Byte_31;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_1

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_28 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_29  = ResultCode;
	Error_30  = (MR_Box) Error;
	Byte_31  = ByteVal;
}
      switch (ResultCode_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_Word IOError_36;

            mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_30, (MR_String) "read failed: ", &IOError_36);
            {
              ByteResult_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, ByteResult_14, 0) = ((MR_Box) (IOError_36));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ByteResult_14, 0) = ((MR_Box) (Byte_31));
          }
          break;
      }
      switch (MR_tag((MR_Word) ByteResult_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_12 = base;
            MR_hl_field(0, base, 0) = T0_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_15 = ((MR_Integer) ((MR_hl_field(1, ByteResult_14, (MR_Integer) 0))));
            MR_Word Continue_16;
            MR_Box T1_17;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_10, (MR_Integer) 1))));
            MR_Box conv2_Continue_16;
            MR_Box conv1_STATE_VARIABLE_IO_23_23;

            func_0(((MR_Box) (Pred_10)), ((MR_Box) (Byte_15)), &conv2_Continue_16, T0_11, &T1_17, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
            Continue_16 = ((MR_Word) (conv2_Continue_16));
            switch (Continue_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *Res_12 = base;
                  MR_hl_field(0, base, 0) = T1_17;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) Left_8 - (MR_Unsigned) 1);
                  MR_Integer next_value_of_Left_8 = Var_24;
                  MR_Box next_value_of_T0_11 = T1_17;

                  // direct tailcall eliminated
                  ;
                  Left_8 = next_value_of_Left_8;
                  T0_11 = next_value_of_T0_11;
                  continue;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_18 = ((MR_Word) ((MR_hl_field(2, ByteResult_14, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Res_12 = base;
              MR_hl_field(1, base, 0) = T0_11;
              MR_hl_field(1, base, 1) = ((MR_Box) (Error_18));
            }
          }
          break;
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_12 = base;
        MR_hl_field(2, base, 0) = T0_11;
      }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1(
  MR_Word TypeInfo_for_T_21,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_12;
    MR_Box Stream_22 = (MR_Box) (Stream_7);
    MR_Word ResultCode_23;
    MR_Box Error_24;
    MR_Integer Byte_25;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_22 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_23  = ResultCode;
	Error_24  = (MR_Box) Error;
	Byte_25  = ByteVal;
}
    switch (ResultCode_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_30;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_24, (MR_String) "read failed: ", &IOError_30);
          {
            ByteResult_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ByteResult_12, 0) = ((MR_Box) (IOError_30));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ByteResult_12, 0) = ((MR_Box) (Byte_25));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(0, base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(1, ByteResult_12, (MR_Integer) 0))));
          MR_Word Continue_14;
          MR_Box T1_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Box conv2_Continue_14;
          MR_Box conv1_STATE_VARIABLE_IO_20_20;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (Byte_13)), &conv2_Continue_14, T0_9, &T1_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
          Continue_14 = ((MR_Word) (conv2_Continue_14));
          switch (Continue_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Res_10 = base;
                MR_hl_field(0, base, 0) = T1_15;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box next_value_of_T0_9 = T1_15;

                // direct tailcall eliminated
                ;
                T0_9 = next_value_of_T0_9;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_16 = ((MR_Word) ((MR_hl_field(2, ByteResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T0_9;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_16));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  MR_Word Stream_10;
  MR_Box Stream_15;
  MR_Word ShouldReduce_16;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_15);
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_16  = ShouldReduce;
}
  switch (ShouldReduce_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
      break;
    case (MR_Integer) 1:
      mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_0(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
      break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word InnerRes_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_0(TypeInfo_for_T_22, (MR_Integer) 1000, Stream_7, Pred_8, T0_9, &InnerRes_12);
    switch (MR_tag((MR_Word) InnerRes_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box T_13 = (MR_hl_field(0, InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(0, base, 0) = T_13;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, InnerRes_12, (MR_Integer) 1))));
          MR_Box T_21 = (MR_hl_field(1, InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T_21;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box T1_15 = (MR_hl_field(2, InnerRes_12, (MR_Integer) 0));
          MR_Box next_value_of_T0_9 = T1_15;

          // direct tailcall eliminated
          ;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Integer Left_8,
  MR_Word Stream_9,
  MR_Word Pred_10,
  MR_Box T0_11,
  MR_Word * Res_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Left_8 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word ByteResult_14;
      MR_Box Stream_28 = (MR_Box) (Stream_9);
      MR_Word ResultCode_29;
      MR_Box Error_30;
      MR_Integer Byte_31;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_28 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_29  = ResultCode;
	Error_30  = (MR_Box) Error;
	Byte_31  = ByteVal;
}
      switch (ResultCode_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_Word IOError_36;

            mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_30, (MR_String) "read failed: ", &IOError_36);
            {
              ByteResult_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, ByteResult_14, 0) = ((MR_Box) (IOError_36));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ByteResult_14, 0) = ((MR_Box) (Byte_31));
          }
          break;
      }
      switch (MR_tag((MR_Word) ByteResult_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_12 = base;
            MR_hl_field(0, base, 0) = T0_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_15 = ((MR_Integer) ((MR_hl_field(1, ByteResult_14, (MR_Integer) 0))));
            MR_Word Continue_16;
            MR_Box T1_17;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_10, (MR_Integer) 1))));
            MR_Box conv2_Continue_16;
            MR_Box conv1_STATE_VARIABLE_IO_23_23;

            func_0(((MR_Box) (Pred_10)), ((MR_Box) (Byte_15)), &conv2_Continue_16, T0_11, &T1_17, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
            Continue_16 = ((MR_Word) (conv2_Continue_16));
            switch (Continue_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *Res_12 = base;
                  MR_hl_field(0, base, 0) = T1_17;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) Left_8 - (MR_Unsigned) 1);
                  MR_Integer next_value_of_Left_8 = Var_24;
                  MR_Box next_value_of_T0_11 = T1_17;

                  // direct tailcall eliminated
                  ;
                  Left_8 = next_value_of_Left_8;
                  T0_11 = next_value_of_T0_11;
                  continue;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_18 = ((MR_Word) ((MR_hl_field(2, ByteResult_14, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Res_12 = base;
              MR_hl_field(1, base, 0) = T0_11;
              MR_hl_field(1, base, 1) = ((MR_Box) (Error_18));
            }
          }
          break;
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_12 = base;
        MR_hl_field(2, base, 0) = T0_11;
      }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_12;
    MR_Box Stream_22 = (MR_Box) (Stream_7);
    MR_Word ResultCode_23;
    MR_Box Error_24;
    MR_Integer Byte_25;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_22 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_23  = ResultCode;
	Error_24  = (MR_Box) Error;
	Byte_25  = ByteVal;
}
    switch (ResultCode_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_30;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_24, (MR_String) "read failed: ", &IOError_30);
          {
            ByteResult_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ByteResult_12, 0) = ((MR_Box) (IOError_30));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ByteResult_12, 0) = ((MR_Box) (Byte_25));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(0, base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(1, ByteResult_12, (MR_Integer) 0))));
          MR_Word Continue_14;
          MR_Box T1_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Box conv2_Continue_14;
          MR_Box conv1_STATE_VARIABLE_IO_20_20;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (Byte_13)), &conv2_Continue_14, T0_9, &T1_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
          Continue_14 = ((MR_Word) (conv2_Continue_14));
          switch (Continue_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Res_10 = base;
                MR_hl_field(0, base, 0) = T1_15;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box next_value_of_T0_9 = T1_15;

                // direct tailcall eliminated
                ;
                T0_9 = next_value_of_T0_9;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_16 = ((MR_Word) ((MR_hl_field(2, ByteResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T0_9;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_16));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_6_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  MR_Word ShouldReduce_12;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_6_p_1

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_12  = ShouldReduce;
}
  switch (ShouldReduce_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__binary_input_stream_foldl2_io_plain_6_p_1(TypeInfo_for_T_15, Stream_7, Pred_8, T0_9, Res_10);
      break;
    case (MR_Integer) 1:
      mercury__io__binary_input_stream_foldl2_io_chunk_6_p_1(TypeInfo_for_T_15, Stream_7, Pred_8, T0_9, Res_10);
      break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  MR_Word ShouldReduce_12;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_6_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_12  = ShouldReduce;
}
  switch (ShouldReduce_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__binary_input_stream_foldl2_io_plain_6_p_0(TypeInfo_for_T_15, Stream_7, Pred_8, T0_9, Res_10);
      break;
    case (MR_Integer) 1:
      mercury__io__binary_input_stream_foldl2_io_chunk_6_p_0(TypeInfo_for_T_15, Stream_7, Pred_8, T0_9, Res_10);
      break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_5_p_1(
  MR_Word TypeInfo_for_T_14,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  MR_Word Stream_10;
  MR_Box Stream_15;
  MR_Word ShouldReduce_16;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_15);
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_5_p_1

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_16  = ShouldReduce;
}
  switch (ShouldReduce_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__binary_input_stream_foldl2_io_plain_6_p_1(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
      break;
    case (MR_Integer) 1:
      mercury__io__binary_input_stream_foldl2_io_chunk_6_p_1(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
      break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_chunk_6_p_1(
  MR_Word TypeInfo_for_T_22,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word InnerRes_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__binary_input_stream_foldl2_io_inner_7_p_1(TypeInfo_for_T_22, (MR_Integer) 1000, Stream_7, Pred_8, T0_9, &InnerRes_12);
    switch (MR_tag((MR_Word) InnerRes_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box T_13 = (MR_hl_field(0, InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(0, base, 0) = T_13;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, InnerRes_12, (MR_Integer) 1))));
          MR_Box T_21 = (MR_hl_field(1, InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T_21;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box T1_15 = (MR_hl_field(2, InnerRes_12, (MR_Integer) 0));
          MR_Box next_value_of_T0_9 = T1_15;

          // direct tailcall eliminated
          ;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_inner_7_p_1(
  MR_Word TypeInfo_for_T_26,
  MR_Integer Left_8,
  MR_Word Stream_9,
  MR_Word Pred_10,
  MR_Box T0_11,
  MR_Word * Res_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Left_8 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word ByteResult_14;
      MR_Box Stream_27 = (MR_Box) (Stream_9);
      MR_Word ResultCode_28;
      MR_Box Error_29;
      MR_Integer Byte_30;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_1

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_27 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_28  = ResultCode;
	Error_29  = (MR_Box) Error;
	Byte_30  = ByteVal;
}
      switch (ResultCode_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_Word IOError_35;

            mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_29, (MR_String) "read failed: ", &IOError_35);
            {
              ByteResult_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, ByteResult_14, 0) = ((MR_Box) (IOError_35));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ByteResult_14, 0) = ((MR_Box) (Byte_30));
          }
          break;
      }
      switch (MR_tag((MR_Word) ByteResult_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_12 = base;
            MR_hl_field(0, base, 0) = T0_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_15 = ((MR_Integer) ((MR_hl_field(1, ByteResult_14, (MR_Integer) 0))));
            MR_Box T1_16;
            MR_Integer Var_23;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_10, (MR_Integer) 1))));
            MR_Box conv1_STATE_VARIABLE_IO_22_22;
            MR_Integer next_value_of_Left_8;
            MR_Box next_value_of_T0_11;

            func_0(((MR_Box) (Pred_10)), ((MR_Box) (Byte_15)), T0_11, &T1_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_22_22);
            Var_23 = (MR_Integer) ((MR_Unsigned) Left_8 - (MR_Unsigned) 1);
            // direct tailcall eliminated
            ;
            next_value_of_Left_8 = Var_23;
            next_value_of_T0_11 = T1_16;
            Left_8 = next_value_of_Left_8;
            T0_11 = next_value_of_T0_11;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_17 = ((MR_Word) ((MR_hl_field(2, ByteResult_14, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Res_12 = base;
              MR_hl_field(1, base, 0) = T0_11;
              MR_hl_field(1, base, 1) = ((MR_Box) (Error_17));
            }
          }
          break;
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_12 = base;
        MR_hl_field(2, base, 0) = T0_11;
      }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_plain_6_p_1(
  MR_Word TypeInfo_for_T_20,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_12;
    MR_Box Stream_21 = (MR_Box) (Stream_7);
    MR_Word ResultCode_22;
    MR_Box Error_23;
    MR_Integer Byte_24;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_1

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_21 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_22  = ResultCode;
	Error_23  = (MR_Box) Error;
	Byte_24  = ByteVal;
}
    switch (ResultCode_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_29;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_23, (MR_String) "read failed: ", &IOError_29);
          {
            ByteResult_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ByteResult_12, 0) = ((MR_Box) (IOError_29));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ByteResult_12, 0) = ((MR_Box) (Byte_24));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(0, base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(1, ByteResult_12, (MR_Integer) 0))));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_19_19;
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (Byte_13)), T0_9, &T1_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
          // direct tailcall eliminated
          ;
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(2, ByteResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T0_9;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_15));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  MR_Word Stream_10;
  MR_Box Stream_15;
  MR_Word ShouldReduce_16;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_15);
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_5_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_16  = ShouldReduce;
}
  switch (ShouldReduce_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__binary_input_stream_foldl2_io_plain_6_p_0(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
      break;
    case (MR_Integer) 1:
      mercury__io__binary_input_stream_foldl2_io_chunk_6_p_0(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
      break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_chunk_6_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word InnerRes_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__binary_input_stream_foldl2_io_inner_7_p_0(TypeInfo_for_T_22, (MR_Integer) 1000, Stream_7, Pred_8, T0_9, &InnerRes_12);
    switch (MR_tag((MR_Word) InnerRes_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box T_13 = (MR_hl_field(0, InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(0, base, 0) = T_13;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, InnerRes_12, (MR_Integer) 1))));
          MR_Box T_21 = (MR_hl_field(1, InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T_21;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box T1_15 = (MR_hl_field(2, InnerRes_12, (MR_Integer) 0));
          MR_Box next_value_of_T0_9 = T1_15;

          // direct tailcall eliminated
          ;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_inner_7_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Integer Left_8,
  MR_Word Stream_9,
  MR_Word Pred_10,
  MR_Box T0_11,
  MR_Word * Res_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Left_8 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word ByteResult_14;
      MR_Box Stream_27 = (MR_Box) (Stream_9);
      MR_Word ResultCode_28;
      MR_Box Error_29;
      MR_Integer Byte_30;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_27 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_28  = ResultCode;
	Error_29  = (MR_Box) Error;
	Byte_30  = ByteVal;
}
      switch (ResultCode_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_Word IOError_35;

            mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_29, (MR_String) "read failed: ", &IOError_35);
            {
              ByteResult_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, ByteResult_14, 0) = ((MR_Box) (IOError_35));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ByteResult_14, 0) = ((MR_Box) (Byte_30));
          }
          break;
      }
      switch (MR_tag((MR_Word) ByteResult_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_12 = base;
            MR_hl_field(0, base, 0) = T0_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_15 = ((MR_Integer) ((MR_hl_field(1, ByteResult_14, (MR_Integer) 0))));
            MR_Box T1_16;
            MR_Integer Var_23;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_10, (MR_Integer) 1))));
            MR_Box conv1_STATE_VARIABLE_IO_22_22;
            MR_Integer next_value_of_Left_8;
            MR_Box next_value_of_T0_11;

            func_0(((MR_Box) (Pred_10)), ((MR_Box) (Byte_15)), T0_11, &T1_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_22_22);
            Var_23 = (MR_Integer) ((MR_Unsigned) Left_8 - (MR_Unsigned) 1);
            // direct tailcall eliminated
            ;
            next_value_of_Left_8 = Var_23;
            next_value_of_T0_11 = T1_16;
            Left_8 = next_value_of_Left_8;
            T0_11 = next_value_of_T0_11;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_17 = ((MR_Word) ((MR_hl_field(2, ByteResult_14, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Res_12 = base;
              MR_hl_field(1, base, 0) = T0_11;
              MR_hl_field(1, base, 1) = ((MR_Box) (Error_17));
            }
          }
          break;
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_12 = base;
        MR_hl_field(2, base, 0) = T0_11;
      }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_plain_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_12;
    MR_Box Stream_21 = (MR_Box) (Stream_7);
    MR_Word ResultCode_22;
    MR_Box Error_23;
    MR_Integer Byte_24;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_21 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_22  = ResultCode;
	Error_23  = (MR_Box) Error;
	Byte_24  = ByteVal;
}
    switch (ResultCode_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_29;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_23, (MR_String) "read failed: ", &IOError_29);
          {
            ByteResult_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ByteResult_12, 0) = ((MR_Box) (IOError_29));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ByteResult_12, 0) = ((MR_Box) (Byte_24));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(0, base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(1, ByteResult_12, (MR_Integer) 0))));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_19_19;
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (Byte_13)), T0_9, &T1_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
          // direct tailcall eliminated
          ;
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(2, ByteResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T0_9;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_15));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_5_p_1(
  MR_Word Stream_6,
  MR_Word Pred_7,
  MR_Word * Res_8)
{
  MR_Word ShouldReduce_10;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_5_p_1

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_10  = ShouldReduce;
}
  switch (ShouldReduce_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__binary_input_stream_foldl_io_plain_5_p_1(Stream_6, Pred_7, Res_8);
      break;
    case (MR_Integer) 1:
      mercury__io__binary_input_stream_foldl_io_chunk_5_p_1(Stream_6, Pred_7, Res_8);
      break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_5_p_0(
  MR_Word Stream_6,
  MR_Word Pred_7,
  MR_Word * Res_8)
{
  MR_Word ShouldReduce_10;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_5_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_10  = ShouldReduce;
}
  switch (ShouldReduce_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__binary_input_stream_foldl_io_plain_5_p_0(Stream_6, Pred_7, Res_8);
      break;
    case (MR_Integer) 1:
      mercury__io__binary_input_stream_foldl_io_chunk_5_p_0(Stream_6, Pred_7, Res_8);
      break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_4_p_1(
  MR_Word Pred_5,
  MR_Word * Res_6)
{
  MR_Word Stream_8;
  MR_Box Stream_12;
  MR_Word ShouldReduce_13;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_4_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Stream_12);
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_4_p_1

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_13  = ShouldReduce;
}
  switch (ShouldReduce_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__binary_input_stream_foldl_io_plain_5_p_1(Stream_8, Pred_5, Res_6);
      break;
    case (MR_Integer) 1:
      mercury__io__binary_input_stream_foldl_io_chunk_5_p_1(Stream_8, Pred_5, Res_6);
      break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_chunk_5_p_1(
  MR_Word Stream_6,
  MR_Word Pred_7,
  MR_Word * Res_8)
{
  while (MR_TRUE)
  {
    MR_Word InnerRes_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__binary_input_stream_foldl_io_inner_6_p_1((MR_Integer) 1000, Stream_6, Pred_7, &InnerRes_10);
    switch (MR_tag((MR_Word) InnerRes_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InnerRes_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              // direct tailcall eliminated
              ;
              continue;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_11 = ((MR_Word) ((MR_hl_field(1, InnerRes_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_11));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_inner_6_p_1(
  MR_Integer Left_7,
  MR_Word Stream_8,
  MR_Word Pred_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Left_7 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word ByteResult_12;
      MR_Box Stream_23 = (MR_Box) (Stream_8);
      MR_Word ResultCode_24;
      MR_Box Error_25;
      MR_Integer Byte_26;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_1

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_23 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_24  = ResultCode;
	Error_25  = (MR_Box) Error;
	Byte_26  = ByteVal;
}
      switch (ResultCode_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_Word IOError_31;

            mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_25, (MR_String) "read failed: ", &IOError_31);
            {
              ByteResult_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, ByteResult_12, 0) = ((MR_Box) (IOError_31));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ByteResult_12, 0) = ((MR_Box) (Byte_26));
          }
          break;
      }
      switch (MR_tag((MR_Word) ByteResult_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Res_10 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(1, ByteResult_12, (MR_Integer) 0))));
            MR_Integer Var_20;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_9, (MR_Integer) 1))));
            MR_Box conv1_STATE_VARIABLE_IO_19_19;
            MR_Integer next_value_of_Left_7;

            func_0(((MR_Box) (Pred_9)), ((MR_Box) (Byte_13)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
            Var_20 = (MR_Integer) ((MR_Unsigned) Left_7 - (MR_Unsigned) 1);
            // direct tailcall eliminated
            ;
            next_value_of_Left_7 = Var_20;
            Left_7 = next_value_of_Left_7;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_14 = ((MR_Word) ((MR_hl_field(2, ByteResult_12, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Res_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_14));
            }
          }
          break;
      }
    }
    else
      *Res_10 = (MR_Word) ((MR_Unsigned) 4U);
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_plain_5_p_1(
  MR_Word Stream_6,
  MR_Word Pred_7,
  MR_Word * Res_8)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_10;
    MR_Box Stream_17 = (MR_Box) (Stream_6);
    MR_Word ResultCode_18;
    MR_Box Error_19;
    MR_Integer Byte_20;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_1

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_17 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_18  = ResultCode;
	Error_19  = (MR_Box) Error;
	Byte_20  = ByteVal;
}
    switch (ResultCode_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_25;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_19, (MR_String) "read failed: ", &IOError_25);
          {
            ByteResult_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ByteResult_10, 0) = ((MR_Box) (IOError_25));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ByteResult_10, 0) = ((MR_Box) (Byte_20));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_11 = ((MR_Integer) ((MR_hl_field(1, ByteResult_10, (MR_Integer) 0))));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_16_16;

          func_0(((MR_Box) (Pred_7)), ((MR_Box) (Byte_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
          // direct tailcall eliminated
          ;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(2, ByteResult_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_12));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_4_p_0(
  MR_Word Pred_5,
  MR_Word * Res_6)
{
  MR_Word Stream_8;
  MR_Box Stream_12;
  MR_Word ShouldReduce_13;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Stream_12);
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_4_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_13  = ShouldReduce;
}
  switch (ShouldReduce_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__binary_input_stream_foldl_io_plain_5_p_0(Stream_8, Pred_5, Res_6);
      break;
    case (MR_Integer) 1:
      mercury__io__binary_input_stream_foldl_io_chunk_5_p_0(Stream_8, Pred_5, Res_6);
      break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_chunk_5_p_0(
  MR_Word Stream_6,
  MR_Word Pred_7,
  MR_Word * Res_8)
{
  while (MR_TRUE)
  {
    MR_Word InnerRes_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__binary_input_stream_foldl_io_inner_6_p_0((MR_Integer) 1000, Stream_6, Pred_7, &InnerRes_10);
    switch (MR_tag((MR_Word) InnerRes_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InnerRes_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              // direct tailcall eliminated
              ;
              continue;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_11 = ((MR_Word) ((MR_hl_field(1, InnerRes_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_11));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_inner_6_p_0(
  MR_Integer Left_7,
  MR_Word Stream_8,
  MR_Word Pred_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Left_7 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word ByteResult_12;
      MR_Box Stream_23 = (MR_Box) (Stream_8);
      MR_Word ResultCode_24;
      MR_Box Error_25;
      MR_Integer Byte_26;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_23 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_24  = ResultCode;
	Error_25  = (MR_Box) Error;
	Byte_26  = ByteVal;
}
      switch (ResultCode_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_Word IOError_31;

            mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_25, (MR_String) "read failed: ", &IOError_31);
            {
              ByteResult_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, ByteResult_12, 0) = ((MR_Box) (IOError_31));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ByteResult_12, 0) = ((MR_Box) (Byte_26));
          }
          break;
      }
      switch (MR_tag((MR_Word) ByteResult_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Res_10 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(1, ByteResult_12, (MR_Integer) 0))));
            MR_Integer Var_20;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_9, (MR_Integer) 1))));
            MR_Box conv1_STATE_VARIABLE_IO_19_19;
            MR_Integer next_value_of_Left_7;

            func_0(((MR_Box) (Pred_9)), ((MR_Box) (Byte_13)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
            Var_20 = (MR_Integer) ((MR_Unsigned) Left_7 - (MR_Unsigned) 1);
            // direct tailcall eliminated
            ;
            next_value_of_Left_7 = Var_20;
            Left_7 = next_value_of_Left_7;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_14 = ((MR_Word) ((MR_hl_field(2, ByteResult_12, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Res_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_14));
            }
          }
          break;
      }
    }
    else
      *Res_10 = (MR_Word) ((MR_Unsigned) 4U);
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_plain_5_p_0(
  MR_Word Stream_6,
  MR_Word Pred_7,
  MR_Word * Res_8)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_10;
    MR_Box Stream_17 = (MR_Box) (Stream_6);
    MR_Word ResultCode_18;
    MR_Box Error_19;
    MR_Integer Byte_20;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_17 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_18  = ResultCode;
	Error_19  = (MR_Box) Error;
	Byte_20  = ByteVal;
}
    switch (ResultCode_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_25;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_19, (MR_String) "read failed: ", &IOError_25);
          {
            ByteResult_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ByteResult_10, 0) = ((MR_Box) (IOError_25));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ByteResult_10, 0) = ((MR_Box) (Byte_20));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_11 = ((MR_Integer) ((MR_hl_field(1, ByteResult_10, (MR_Integer) 0))));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_16_16;

          func_0(((MR_Box) (Pred_7)), ((MR_Box) (Byte_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
          // direct tailcall eliminated
          ;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(2, ByteResult_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_12));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_5_p_1(
  MR_Word TypeInfo_for_T_14,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  MR_Word Stream_10;
  MR_Box Stream_15;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_15);
  mercury__io__binary_input_stream_foldl_6_p_1(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_6_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_12;
    MR_Box Stream_20 = (MR_Box) (Stream_7);
    MR_Word ResultCode_21;
    MR_Box Error_22;
    MR_Integer Byte_23;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_1

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_20 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_21  = ResultCode;
	Error_22  = (MR_Box) Error;
	Byte_23  = ByteVal;
}
    switch (ResultCode_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_28;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_22, (MR_String) "read failed: ", &IOError_28);
          {
            ByteResult_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ByteResult_12, 0) = ((MR_Box) (IOError_28));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ByteResult_12, 0) = ((MR_Box) (Byte_23));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(0, base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(1, ByteResult_12, (MR_Integer) 0))));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (Byte_13)), T0_9, &T1_14);
          // direct tailcall eliminated
          ;
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(2, ByteResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T0_9;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_15));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  MR_Word Stream_10;
  MR_Box Stream_15;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_15);
  mercury__io__binary_input_stream_foldl_6_p_0(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_12;
    MR_Box Stream_20 = (MR_Box) (Stream_7);
    MR_Word ResultCode_21;
    MR_Box Error_22;
    MR_Integer Byte_23;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_20 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_21  = ResultCode;
	Error_22  = (MR_Box) Error;
	Byte_23  = ByteVal;
}
    switch (ResultCode_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_28;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_22, (MR_String) "read failed: ", &IOError_28);
          {
            ByteResult_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ByteResult_12, 0) = ((MR_Box) (IOError_28));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ByteResult_12, 0) = ((MR_Box) (Byte_23));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(0, base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(1, ByteResult_12, (MR_Integer) 0))));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (Byte_13)), T0_9, &T1_14);
          // direct tailcall eliminated
          ;
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(2, ByteResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T0_9;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_15));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_maybe_stop_5_p_1(
  MR_Word TypeInfo_for_T_14,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  MR_Word Stream_10;
  MR_Box Stream_15;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_15);
  mercury__io__input_stream_foldl2_io_maybe_stop_6_p_1(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_maybe_stop_6_p_1(
  MR_Word TypeInfo_for_T_21,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word CharResult_12;
    MR_Word ResultCode_22;
    MR_Box Error_23;
    MR_Char Char_24;
    MR_Box Var_27 = (MR_Box) (Stream_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_27, &ResultCode_22, &Error_23, &Char_24);
    switch (ResultCode_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_28;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_23, (MR_String) "read failed: ", &IOError_28);
          {
            CharResult_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, CharResult_12, 0) = ((MR_Box) (IOError_28));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_24));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(0, base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(1, CharResult_12, (MR_Integer) 0)));
          MR_Word Continue_14;
          MR_Box T1_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Box conv2_Continue_14;
          MR_Box conv1_STATE_VARIABLE_IO_20_20;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (MR_Word) (Char_13)), &conv2_Continue_14, T0_9, &T1_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
          Continue_14 = ((MR_Word) (conv2_Continue_14));
          switch (Continue_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Res_10 = base;
                MR_hl_field(0, base, 0) = T1_15;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box next_value_of_T0_9 = T1_15;

                // direct tailcall eliminated
                ;
                T0_9 = next_value_of_T0_9;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_16 = ((MR_Word) ((MR_hl_field(2, CharResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T0_9;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_16));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_maybe_stop_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  MR_Word Stream_10;
  MR_Box Stream_15;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_15);
  mercury__io__input_stream_foldl2_io_maybe_stop_6_p_0(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_maybe_stop_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word CharResult_12;
    MR_Word ResultCode_22;
    MR_Box Error_23;
    MR_Char Char_24;
    MR_Box Var_27 = (MR_Box) (Stream_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_27, &ResultCode_22, &Error_23, &Char_24);
    switch (ResultCode_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_28;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_23, (MR_String) "read failed: ", &IOError_28);
          {
            CharResult_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, CharResult_12, 0) = ((MR_Box) (IOError_28));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_24));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(0, base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(1, CharResult_12, (MR_Integer) 0)));
          MR_Word Continue_14;
          MR_Box T1_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Box conv2_Continue_14;
          MR_Box conv1_STATE_VARIABLE_IO_20_20;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (MR_Word) (Char_13)), &conv2_Continue_14, T0_9, &T1_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
          Continue_14 = ((MR_Word) (conv2_Continue_14));
          switch (Continue_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Res_10 = base;
                MR_hl_field(0, base, 0) = T1_15;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box next_value_of_T0_9 = T1_15;

                // direct tailcall eliminated
                ;
                T0_9 = next_value_of_T0_9;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_16 = ((MR_Word) ((MR_hl_field(2, CharResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T0_9;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_16));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_5_p_1(
  MR_Word TypeInfo_for_T_14,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  MR_Word Stream_10;
  MR_Box Stream_15;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_15);
  mercury__io__input_stream_foldl2_io_6_p_1(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_6_p_1(
  MR_Word TypeInfo_for_T_20,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word CharResult_12;
    MR_Word ResultCode_21;
    MR_Box Error_22;
    MR_Char Char_23;
    MR_Box Var_26 = (MR_Box) (Stream_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_26, &ResultCode_21, &Error_22, &Char_23);
    switch (ResultCode_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_27;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_22, (MR_String) "read failed: ", &IOError_27);
          {
            CharResult_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, CharResult_12, 0) = ((MR_Box) (IOError_27));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_23));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(0, base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(1, CharResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_19_19;
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (MR_Word) (Char_13)), T0_9, &T1_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
          // direct tailcall eliminated
          ;
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(2, CharResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T0_9;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_15));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  MR_Word Stream_10;
  MR_Box Stream_15;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_15);
  mercury__io__input_stream_foldl2_io_6_p_0(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word CharResult_12;
    MR_Word ResultCode_21;
    MR_Box Error_22;
    MR_Char Char_23;
    MR_Box Var_26 = (MR_Box) (Stream_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_26, &ResultCode_21, &Error_22, &Char_23);
    switch (ResultCode_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_27;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_22, (MR_String) "read failed: ", &IOError_27);
          {
            CharResult_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, CharResult_12, 0) = ((MR_Box) (IOError_27));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_23));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(0, base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(1, CharResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_19_19;
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (MR_Word) (Char_13)), T0_9, &T1_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
          // direct tailcall eliminated
          ;
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(2, CharResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T0_9;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_15));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__input_stream_foldl_io_4_p_1(
  MR_Word Pred_5,
  MR_Word * Res_6)
{
  MR_Word Stream_8;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_4_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Stream_12);
  mercury__io__input_stream_foldl_io_5_p_1(Stream_8, Pred_5, Res_6);
}

void MR_CALL 
mercury__io__input_stream_foldl_io_5_p_1(
  MR_Word Stream_6,
  MR_Word Pred_7,
  MR_Word * Res_8)
{
  while (MR_TRUE)
  {
    MR_Word CharResult_10;
    MR_Word ResultCode_17;
    MR_Box Error_18;
    MR_Char Char_19;
    MR_Box Var_22 = (MR_Box) (Stream_6);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_22, &ResultCode_17, &Error_18, &Char_19);
    switch (ResultCode_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_23;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_18, (MR_String) "read failed: ", &IOError_23);
          {
            CharResult_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, CharResult_10, 0) = ((MR_Box) (IOError_23));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CharResult_10, 0) = ((MR_Box) (MR_Word) (Char_19));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(1, CharResult_10, (MR_Integer) 0)));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_16_16;

          func_0(((MR_Box) (Pred_7)), ((MR_Box) (MR_Word) (Char_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
          // direct tailcall eliminated
          ;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(2, CharResult_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_12));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__input_stream_foldl_io_4_p_0(
  MR_Word Pred_5,
  MR_Word * Res_6)
{
  MR_Word Stream_8;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Stream_12);
  mercury__io__input_stream_foldl_io_5_p_0(Stream_8, Pred_5, Res_6);
}

void MR_CALL 
mercury__io__input_stream_foldl_io_5_p_0(
  MR_Word Stream_6,
  MR_Word Pred_7,
  MR_Word * Res_8)
{
  while (MR_TRUE)
  {
    MR_Word CharResult_10;
    MR_Word ResultCode_17;
    MR_Box Error_18;
    MR_Char Char_19;
    MR_Box Var_22 = (MR_Box) (Stream_6);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_22, &ResultCode_17, &Error_18, &Char_19);
    switch (ResultCode_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_23;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_18, (MR_String) "read failed: ", &IOError_23);
          {
            CharResult_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, CharResult_10, 0) = ((MR_Box) (IOError_23));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CharResult_10, 0) = ((MR_Box) (MR_Word) (Char_19));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(1, CharResult_10, (MR_Integer) 0)));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_16_16;

          func_0(((MR_Box) (Pred_7)), ((MR_Box) (MR_Word) (Char_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
          // direct tailcall eliminated
          ;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(2, CharResult_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_12));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__input_stream_foldl_5_p_1(
  MR_Word TypeInfo_for_T_14,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  MR_Word Stream_10;
  MR_Box Stream_15;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_15);
  mercury__io__input_stream_foldl_6_p_1(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
}

void MR_CALL 
mercury__io__input_stream_foldl_6_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word CharResult_12;
    MR_Word ResultCode_20;
    MR_Box Error_21;
    MR_Char Char_22;
    MR_Box Var_25 = (MR_Box) (Stream_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_25, &ResultCode_20, &Error_21, &Char_22);
    switch (ResultCode_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_26;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_21, (MR_String) "read failed: ", &IOError_26);
          {
            CharResult_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, CharResult_12, 0) = ((MR_Box) (IOError_26));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_22));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(0, base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(1, CharResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (MR_Word) (Char_13)), T0_9, &T1_14);
          // direct tailcall eliminated
          ;
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(2, CharResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T0_9;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_15));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__input_stream_foldl_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  MR_Word Stream_10;
  MR_Box Stream_15;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_15);
  mercury__io__input_stream_foldl_6_p_0(TypeInfo_for_T_14, Stream_10, Pred_6, T0_7, Res_8);
}

void MR_CALL 
mercury__io__input_stream_foldl_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word CharResult_12;
    MR_Word ResultCode_20;
    MR_Box Error_21;
    MR_Char Char_22;
    MR_Box Var_25 = (MR_Box) (Stream_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_25, &ResultCode_20, &Error_21, &Char_22);
    switch (ResultCode_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_26;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_21, (MR_String) "read failed: ", &IOError_26);
          {
            CharResult_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, CharResult_12, 0) = ((MR_Box) (IOError_26));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_22));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(0, base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(1, CharResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_8, (MR_Integer) 1))));
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) (Pred_8)), ((MR_Box) (MR_Word) (Char_13)), T0_9, &T1_14);
          // direct tailcall eliminated
          ;
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(2, CharResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(1, base, 0) = T0_9;
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_15));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__read_binary_file_as_bitmap_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  mercury__io__text_read__read_binary_file_as_bitmap_2_4_p_0(Stream_5, Result_6);
}

void MR_CALL 
mercury__io__read_binary_file_as_bitmap_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_file_as_bitmap_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__text_read__read_binary_file_as_bitmap_2_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_file_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  mercury__io__read_binary_file_2_5_p_0(Stream_5, (MR_Word) ((MR_Unsigned) 0U), Result_6);
}

void MR_CALL 
mercury__io__read_binary_file_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_file_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_file_2_5_p_0(Stream_6, (MR_Word) ((MR_Unsigned) 0U), Result_4);
}

void MR_CALL 
mercury__io__read_binary_file_2_5_p_0(
  MR_Word Stream_6,
  MR_Word Bytes0_7,
  MR_Word * Result_8)
{
  while (MR_TRUE)
  {
    MR_Word Result0_10;
    MR_Box Stream_19 = (MR_Box) (Stream_6);
    MR_Word ResultCode_20;
    MR_Box Error_21;
    MR_Integer Byte_22;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__read_binary_file_2_5_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_19 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_20  = ResultCode;
	Error_21  = (MR_Box) Error;
	Byte_22  = ByteVal;
}
    switch (ResultCode_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Result0_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_27;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_21, (MR_String) "read failed: ", &IOError_27);
          {
            Result0_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Result0_10, 0) = ((MR_Box) (IOError_27));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          Result0_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Result0_10, 0) = ((MR_Box) (Byte_22));
        }
        break;
    }
    switch (MR_tag((MR_Word) Result0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Bytes_11;

          mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Bytes0_7, &Bytes_11);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Bytes_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(1, Result0_10, (MR_Integer) 0))));
          MR_Word Var_17;
          MR_Word next_value_of_Bytes0_7;

          {
            Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_17, 0) = ((MR_Box) (Byte_13));
            MR_hl_field(1, Var_17, 1) = ((MR_Box) (Bytes0_7));
          }
          // direct tailcall eliminated
          ;
          next_value_of_Bytes0_7 = Var_17;
          Bytes0_7 = next_value_of_Bytes0_7;
          continue;
        }
        break;
      case (MR_Integer) 2:
        *Result_8 = (MR_Word) (Result0_10);
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__read_file_as_string_and_num_code_units_wf_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_and_num_code_units_wf_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_file_as_string_and_num_code_units_wf_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_file_as_string_and_num_code_units_wf_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;

  mercury__io__read_file_as_string_and_num_code_units_4_p_0(Stream_5, &Result0_8);
  if (((MR_tag((MR_Word) Result0_8)) == (MR_Integer) 1))
    *Result_6 = Result0_8;
  else
  {
    MR_String String_12 = ((MR_String) ((MR_hl_field(0, Result0_8, (MR_Integer) 0))));
    MR_Word MaybeWellFormed_14;

    mercury__string__check_well_formedness_2_p_0(String_12, &MaybeWellFormed_14);
    if ((MaybeWellFormed_14 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_6 = Result0_8;
    else
    {
      MR_Integer FirstIllFormedPos_15 = ((MR_Integer) ((MR_hl_field(1, MaybeWellFormed_14, (MR_Integer) 0))));
      MR_String Msg_16;
      MR_String Var_21;
      MR_Word Var_24;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_and_num_code_units_wf_4_p_0

	MR_Integer I;
	MR_String S;

	I = FirstIllFormedPos_15 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_21  = S;
}
      mercury__string__append_3_p_2((MR_String) "ill formed character at offset ", Var_21, &Msg_16);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_24, 0) = ((MR_Box) (Msg_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(1, base, 2) = ((MR_Box) (Var_24));
      }
    }
  }
}

void MR_CALL 
mercury__io__read_file_as_string_and_num_code_units_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_and_num_code_units_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_file_as_string_and_num_code_units_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_file_as_string_and_num_code_units_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_String String_8;
  MR_Integer NumCUs_9;
  MR_Box Error_10;
  MR_Word NullCharError_11;
  MR_Word MaybeIOError_12;

  mercury__io__text_read__read_file_as_string_2_7_p_0(Stream_5, &String_8, &NumCUs_9, &Error_10, &NullCharError_11);
{
#define MR_PROC_LABEL mercury__io__read_file_as_string_and_num_code_units_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_10 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    MaybeIOError_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_18;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_10, (MR_String) "read failed: ", &Var_18);
    {
      MaybeIOError_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIOError_12, 0) = ((MR_Box) (Var_18));
    }
  }
  if ((MaybeIOError_12 == (MR_Word) ((MR_Unsigned) 0U)))
    switch (NullCharError_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (String_8));
          MR_hl_field(0, base, 1) = ((MR_Box) (NumCUs_9));
        }
        break;
      case (MR_Integer) 1:
        *Result_6 = (MR_Word) (MR_mkword(1, &mercury__io_scalar_common_1[4]));
        break;
    }
  else
  {
    MR_Word IOError_13 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_12, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (String_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (NumCUs_9));
      MR_hl_field(1, base, 2) = ((MR_Box) (IOError_13));
    }
  }
}

void MR_CALL 
mercury__io__read_file_as_string_wf_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_wf_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_file_as_string_wf_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_file_as_string_wf_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;

  mercury__io__read_file_as_string_4_p_0(Stream_5, &Result0_8);
  if (((MR_tag((MR_Word) Result0_8)) == (MR_Integer) 1))
    *Result_6 = Result0_8;
  else
  {
    MR_String String_11 = ((MR_String) ((MR_hl_field(0, Result0_8, (MR_Integer) 0))));
    MR_Word MaybeWellFormed_12;

    mercury__string__check_well_formedness_2_p_0(String_11, &MaybeWellFormed_12);
    if ((MaybeWellFormed_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_6 = Result0_8;
    else
    {
      MR_Integer FirstIllFormedPos_13 = ((MR_Integer) ((MR_hl_field(1, MaybeWellFormed_12, (MR_Integer) 0))));
      MR_String Msg_14;
      MR_String Var_19;
      MR_Word Var_21;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_wf_4_p_0

	MR_Integer I;
	MR_String S;

	I = FirstIllFormedPos_13 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_19  = S;
}
      mercury__string__append_3_p_2((MR_String) "ill formed character at offset ", Var_19, &Msg_14);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (Msg_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_21));
      }
    }
  }
}

void MR_CALL 
mercury__io__read_file_as_string_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_file_as_string_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_file_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  mercury__io__read_file_chars_acc_5_p_0(Stream_5, (MR_Word) ((MR_Unsigned) 0U), Result_6);
}

void MR_CALL 
mercury__io__read_file_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_file_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_file_chars_acc_5_p_0(Stream_6, (MR_Word) ((MR_Unsigned) 0U), Result_4);
}

void MR_CALL 
mercury__io__read_file_chars_acc_5_p_0(
  MR_Word Stream_6,
  MR_Word RevChars0_7,
  MR_Word * Result_8)
{
  while (MR_TRUE)
  {
    MR_Word Result0_10;
    MR_Word ResultCode_21;
    MR_Box Error_22;
    MR_Char Char_23;
    MR_Box Var_26 = (MR_Box) (Stream_6);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_26, &ResultCode_21, &Error_22, &Char_23);
    switch (ResultCode_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Result0_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_27;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_22, (MR_String) "read failed: ", &IOError_27);
          {
            Result0_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Result0_10, 0) = ((MR_Box) (IOError_27));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          Result0_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Result0_10, 0) = ((MR_Box) (MR_Word) (Char_23));
        }
        break;
    }
    switch (MR_tag((MR_Word) Result0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_17;

          mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), RevChars0_7, &Var_17);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_12 = ((MR_Char) (MR_Word) (MR_hl_field(1, Result0_10, (MR_Integer) 0)));
          MR_Word RevChars_13;
          MR_Word next_value_of_RevChars0_7;

          {
            RevChars_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, RevChars_13, 0) = ((MR_Box) (MR_Word) (Char_12));
            MR_hl_field(1, RevChars_13, 1) = ((MR_Box) (RevChars0_7));
          }
          // direct tailcall eliminated
          ;
          next_value_of_RevChars0_7 = RevChars_13;
          RevChars0_7 = next_value_of_RevChars0_7;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_11 = ((MR_Word) ((MR_hl_field(2, Result0_10, (MR_Integer) 0))));
          MR_Word Var_18;

          mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), RevChars0_7, &Var_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
            MR_hl_field(1, base, 1) = ((MR_Box) (Error_11));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__read_named_file_as_lines_wf_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_Word OpenResult_8;

  mercury__io__open_input_4_p_0(FileName_5, &OpenResult_8);
  if (((MR_tag((MR_Word) OpenResult_8)) == (MR_Integer) 1))
    *Result_6 = (MR_Word) (OpenResult_8);
  else
  {
    MR_Word FileStream_9 = ((MR_Word) ((MR_hl_field(0, OpenResult_8, (MR_Integer) 0))));
    MR_Word ReadResult_10;

    mercury__io__read_file_as_string_4_p_0(FileStream_9, &ReadResult_10);
    if (((MR_tag((MR_Word) ReadResult_10)) == (MR_Integer) 1))
    {
      MR_Word Error_17 = ((MR_Word) ((MR_hl_field(1, ReadResult_10, (MR_Integer) 1))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Error_17));
      }
    }
    else
    {
      MR_String String_11 = ((MR_String) ((MR_hl_field(0, ReadResult_10, (MR_Integer) 0))));
      MR_Word MaybeWellFormed_12;

      mercury__string__check_well_formedness_2_p_0(String_11, &MaybeWellFormed_12);
      if ((MaybeWellFormed_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Lines_15;
        MR_Word Var_29;

        mercury__string__split_into_lines_loop_4_p_0(String_11, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Var_29);
        mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_29, &Lines_15);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Lines_15));
        }
      }
      else
      {
        MR_Integer FirstIllFormedPos_13 = ((MR_Integer) ((MR_hl_field(1, MaybeWellFormed_12, (MR_Integer) 0))));
        MR_String Msg_14;
        MR_String Var_23;
        MR_Word Var_24;

{
#define MR_PROC_LABEL mercury__io__read_named_file_as_lines_wf_4_p_0

	MR_Integer I;
	MR_String S;

	I = FirstIllFormedPos_13 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_23  = S;
}
        mercury__string__append_3_p_2((MR_String) "ill formed character at offset ", Var_23, &Msg_14);
        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_24, 0) = ((MR_Box) (Msg_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
        }
      }
    }
    mercury__io__close_input_3_p_0(FileStream_9);
  }
}

void MR_CALL 
mercury__io__read_named_file_as_lines_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_Word OpenResult_8;

  mercury__io__open_input_4_p_0(FileName_5, &OpenResult_8);
  if (((MR_tag((MR_Word) OpenResult_8)) == (MR_Integer) 1))
    *Result_6 = (MR_Word) (OpenResult_8);
  else
  {
    MR_Word FileStream_9 = ((MR_Word) ((MR_hl_field(0, OpenResult_8, (MR_Integer) 0))));
    MR_Word ReadResult_10;

    mercury__io__read_file_as_string_4_p_0(FileStream_9, &ReadResult_10);
    if (((MR_tag((MR_Word) ReadResult_10)) == (MR_Integer) 1))
    {
      MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, ReadResult_10, (MR_Integer) 1))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Error_14));
      }
    }
    else
    {
      MR_String String_11 = ((MR_String) ((MR_hl_field(0, ReadResult_10, (MR_Integer) 0))));
      MR_Word Lines_12;
      MR_Word Var_23;

      mercury__string__split_into_lines_loop_4_p_0(String_11, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Var_23);
      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, &Lines_12);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Lines_12));
      }
    }
    mercury__io__close_input_3_p_0(FileStream_9);
  }
}

void MR_CALL 
mercury__io__read_named_file_as_string_wf_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;

  mercury__io__read_named_file_as_string_4_p_0(FileName_5, &Result0_8);
  if (((MR_tag((MR_Word) Result0_8)) == (MR_Integer) 1))
    *Result_6 = Result0_8;
  else
  {
    MR_String String_10 = ((MR_String) ((MR_hl_field(0, Result0_8, (MR_Integer) 0))));
    MR_Word MaybeWellFormed_11;

    mercury__string__check_well_formedness_2_p_0(String_10, &MaybeWellFormed_11);
    if ((MaybeWellFormed_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_6 = Result0_8;
    else
    {
      MR_Integer FirstIllFormedPos_12 = ((MR_Integer) ((MR_hl_field(1, MaybeWellFormed_11, (MR_Integer) 0))));
      MR_String Msg_13;
      MR_String Var_18;
      MR_Word Var_19;

{
#define MR_PROC_LABEL mercury__io__read_named_file_as_string_wf_4_p_0

	MR_Integer I;
	MR_String S;

	I = FirstIllFormedPos_12 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_18  = S;
}
      mercury__string__append_3_p_2((MR_String) "ill formed character at offset ", Var_18, &Msg_13);
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (Msg_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_19));
      }
    }
  }
}

void MR_CALL 
mercury__io__read_named_file_as_string_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_Word OpenResult_8;

  mercury__io__open_input_4_p_0(FileName_5, &OpenResult_8);
  if (((MR_tag((MR_Word) OpenResult_8)) == (MR_Integer) 1))
    *Result_6 = (MR_Word) (OpenResult_8);
  else
  {
    MR_Word FileStream_9 = ((MR_Word) ((MR_hl_field(0, OpenResult_8, (MR_Integer) 0))));
    MR_Word ReadResult_10;

    mercury__io__read_file_as_string_4_p_0(FileStream_9, &ReadResult_10);
    if (((MR_tag((MR_Word) ReadResult_10)) == (MR_Integer) 1))
    {
      MR_Word Error_13 = ((MR_Word) ((MR_hl_field(1, ReadResult_10, (MR_Integer) 1))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Error_13));
      }
    }
    else
    {
      MR_String String_11 = ((MR_String) ((MR_hl_field(0, ReadResult_10, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (String_11));
      }
    }
    mercury__io__close_input_3_p_0(FileStream_9);
  }
}

void MR_CALL 
mercury__io__read_file_as_string_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_String String_8;
  MR_Box Error_10;
  MR_Word NullCharError_11;
  MR_Word MaybeIOError_12;
  MR_Integer _NumCUs_9;

  mercury__io__text_read__read_file_as_string_2_7_p_0(Stream_5, &String_8, &_NumCUs_9, &Error_10, &NullCharError_11);
{
#define MR_PROC_LABEL mercury__io__read_file_as_string_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_10 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    MaybeIOError_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_22;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_10, (MR_String) "read failed: ", &Var_22);
    {
      MaybeIOError_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIOError_12, 0) = ((MR_Box) (Var_22));
    }
  }
  if ((MaybeIOError_12 == (MR_Word) ((MR_Unsigned) 0U)))
    switch (NullCharError_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (String_8));
        }
        break;
      case (MR_Integer) 1:
        *Result_6 = (MR_Word) (MR_mkword(1, &mercury__io_scalar_common_4[3]));
        break;
    }
  else
  {
    MR_Word IOError_13 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_12, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (String_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (IOError_13));
    }
  }
}

void MR_CALL 
mercury__io__flush_binary_output_2_p_0(void)
{
  MR_Word Stream_4;
  MR_Box Stream_8;

{
#define MR_PROC_LABEL mercury__io__flush_binary_output_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_8  = (MR_Box) Stream;
}
  Stream_4 = (MR_Word) (Stream_8);
  mercury__io__flush_binary_output_3_p_0(Stream_4);
}

void MR_CALL 
mercury__io__flush_binary_output_3_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Box Stream_4 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_6;

{
#define MR_PROC_LABEL mercury__io__flush_binary_output_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_4 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_6  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__flush_binary_output_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_6 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_11;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_6, (MR_String) "error writing to output file: ", &Var_11);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_11)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__flush_output_2_p_0(void)
{
  MR_Word Stream_4;
  MR_Box Stream_8;

{
#define MR_PROC_LABEL mercury__io__flush_output_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_8  = (MR_Box) Stream;
}
  Stream_4 = (MR_Word) (Stream_8);
  mercury__io__flush_output_3_p_0(Stream_4);
}

void MR_CALL 
mercury__io__flush_output_3_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Box Stream_4 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_6;

{
#define MR_PROC_LABEL mercury__io__flush_output_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_4 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_6  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__flush_output_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_6 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_11;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_6, (MR_String) "error writing to output file: ", &Var_11);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_11)));
      return;
    }
  }
}

static void MR_CALL 
mercury__io__write_array_6_p_1_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  mercury__io__restore_output_stream_5_p_1(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv1_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
mercury__io__write_array_6_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv0_HeadVar__2_2;

  mercury__io__call_pred_no_result_4_p_1(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), &conv0_HeadVar__2_2);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__write_array_6_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__write_array_5_p_1(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))));
}

void MR_CALL 
mercury__io__write_array_6_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word Stream_7,
  MR_ArrayPtr Array_8,
  MR_String Separator_9,
  MR_Word OutputPred_10)
{
  MR_Word Var_14;
  MR_Word OrigStream_16;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Box NewStream_23;
  MR_Box OutStream_24;
  MR_Word _CleanupRes_18;
  MR_Box conv2__Result_17;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_9[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (mercury__io__write_array_6_p_1_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (Array_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (Separator_9));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (OutputPred_10));
  }
  NewStream_23 = (MR_Box) (Stream_7);
{
#define MR_PROC_LABEL mercury__io__write_array_6_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_23 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_24  = (MR_Box) OutStream;
}
  OrigStream_16 = (MR_Word) (OutStream_24);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&mercury__io_scalar_common_10[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (mercury__io__write_array_6_p_1_2));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (Var_14));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&mercury__io_scalar_common_11[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (mercury__io__write_array_6_p_1_3));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (OrigStream_16));
  }
  mercury__exception__finally_2_6_p_1((MR_Word) (&mercury__io_scalar_common_4[0]), Var_20, Var_21, &conv2__Result_17, &_CleanupRes_18);
}

static void MR_CALL 
mercury__io__write_array_6_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  mercury__io__restore_output_stream_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv1_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
mercury__io__write_array_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv0_HeadVar__2_2;

  mercury__io__call_pred_no_result_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), &conv0_HeadVar__2_2);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__write_array_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__write_array_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))));
}

void MR_CALL 
mercury__io__write_array_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Stream_7,
  MR_ArrayPtr Array_8,
  MR_String Separator_9,
  MR_Word OutputPred_10)
{
  MR_Word Var_14;
  MR_Word OrigStream_16;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Box NewStream_23;
  MR_Box OutStream_24;
  MR_Word _CleanupRes_18;
  MR_Box conv2__Result_17;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_9[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (mercury__io__write_array_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (Array_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (Separator_9));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (OutputPred_10));
  }
  NewStream_23 = (MR_Box) (Stream_7);
{
#define MR_PROC_LABEL mercury__io__write_array_6_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_23 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_24  = (MR_Box) OutStream;
}
  OrigStream_16 = (MR_Word) (OutStream_24);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&mercury__io_scalar_common_10[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (mercury__io__write_array_6_p_0_2));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (Var_14));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&mercury__io_scalar_common_11[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (mercury__io__write_array_6_p_0_3));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (OrigStream_16));
  }
  mercury__exception__finally_2_6_p_0((MR_Word) (&mercury__io_scalar_common_4[0]), Var_20, Var_21, &conv2__Result_17, &_CleanupRes_18);
}

void MR_CALL 
mercury__io__write_array_5_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_ArrayPtr Array_6,
  MR_String Separator_7,
  MR_Word OutputPred_8)
{
  MR_bool succeeded;
  MR_Integer Lo_10;
  MR_Integer Hi_11;

{
#define MR_PROC_LABEL mercury__io__write_array_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)Array_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Lo_10  = Min;
}
{
#define MR_PROC_LABEL mercury__io__write_array_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Hi_11  = Max;
}
  succeeded = (Lo_10 <= Hi_11);
  if (succeeded)
  {
    MR_Box E_12;
    MR_Integer Var_16;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_15_15;

{
#define MR_PROC_LABEL mercury__io__write_array_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)Array_6 ;
	Index = Lo_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	E_12  = (MR_Box) Item;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, OutputPred_8, (MR_Integer) 1))));
    func_0(((MR_Box) (OutputPred_8)), E_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_15_15);
    Var_16 = (MR_Integer) ((MR_Unsigned) Lo_10 + (MR_Unsigned) 1);
    mercury__io__do_write_array_7_p_1(TypeInfo_for_T_19, Array_6, Separator_7, OutputPred_8, Var_16, Hi_11);
  }
}

void MR_CALL 
mercury__io__do_write_array_7_p_1(
  MR_Word TypeInfo_for_T_22,
  MR_ArrayPtr Array_8,
  MR_String Separator_9,
  MR_Word OutputPred_10,
  MR_Integer I_11,
  MR_Integer Hi_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 <= Hi_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box E_14;
      MR_Integer Var_19;
      MR_Word Stream_23;
      MR_Box Stream_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_STATE_VARIABLE_IO_18_18;
      MR_Integer next_value_of_I_11;

{
#define MR_PROC_LABEL mercury__io__do_write_array_7_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_25  = (MR_Box) Stream;
}
      Stream_23 = (MR_Word) (Stream_25);
      mercury__io__write_string_4_p_0(Stream_23, Separator_9);
{
#define MR_PROC_LABEL mercury__io__do_write_array_7_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)Array_8 ;
	Index = I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	E_14  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, OutputPred_10, (MR_Integer) 1))));
      func_0(((MR_Box) (OutputPred_10)), E_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18_18);
      Var_19 = (MR_Integer) ((MR_Unsigned) I_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_11 = Var_19;
      I_11 = next_value_of_I_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__io__write_array_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_ArrayPtr Array_6,
  MR_String Separator_7,
  MR_Word OutputPred_8)
{
  MR_bool succeeded;
  MR_Integer Lo_10;
  MR_Integer Hi_11;

{
#define MR_PROC_LABEL mercury__io__write_array_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)Array_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Lo_10  = Min;
}
{
#define MR_PROC_LABEL mercury__io__write_array_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Hi_11  = Max;
}
  succeeded = (Lo_10 <= Hi_11);
  if (succeeded)
  {
    MR_Box E_12;
    MR_Integer Var_16;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_15_15;

{
#define MR_PROC_LABEL mercury__io__write_array_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)Array_6 ;
	Index = Lo_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	E_12  = (MR_Box) Item;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, OutputPred_8, (MR_Integer) 1))));
    func_0(((MR_Box) (OutputPred_8)), E_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_15_15);
    Var_16 = (MR_Integer) ((MR_Unsigned) Lo_10 + (MR_Unsigned) 1);
    mercury__io__do_write_array_7_p_0(TypeInfo_for_T_19, Array_6, Separator_7, OutputPred_8, Var_16, Hi_11);
  }
}

void MR_CALL 
mercury__io__do_write_array_7_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_ArrayPtr Array_8,
  MR_String Separator_9,
  MR_Word OutputPred_10,
  MR_Integer I_11,
  MR_Integer Hi_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 <= Hi_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box E_14;
      MR_Integer Var_19;
      MR_Word Stream_23;
      MR_Box Stream_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_STATE_VARIABLE_IO_18_18;
      MR_Integer next_value_of_I_11;

{
#define MR_PROC_LABEL mercury__io__do_write_array_7_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_25  = (MR_Box) Stream;
}
      Stream_23 = (MR_Word) (Stream_25);
      mercury__io__write_string_4_p_0(Stream_23, Separator_9);
{
#define MR_PROC_LABEL mercury__io__do_write_array_7_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)Array_8 ;
	Index = I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	E_14  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, OutputPred_10, (MR_Integer) 1))));
      func_0(((MR_Box) (OutputPred_10)), E_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18_18);
      Var_19 = (MR_Integer) ((MR_Unsigned) I_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_11 = Var_19;
      I_11 = next_value_of_I_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__io__write_list_6_p_1_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  mercury__io__restore_output_stream_5_p_1(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv1_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
mercury__io__write_list_6_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv0_HeadVar__2_2;

  mercury__io__call_pred_no_result_4_p_1(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), &conv0_HeadVar__2_2);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__write_list_6_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__write_list_5_p_1(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))));
}

void MR_CALL 
mercury__io__write_list_6_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word Stream_7,
  MR_Word List_8,
  MR_String Separator_9,
  MR_Word OutputPred_10)
{
  MR_Word Var_14;
  MR_Word OrigStream_16;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Box NewStream_23;
  MR_Box OutStream_24;
  MR_Word _CleanupRes_18;
  MR_Box conv2__Result_17;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_9[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (mercury__io__write_list_6_p_1_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (List_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (Separator_9));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (OutputPred_10));
  }
  NewStream_23 = (MR_Box) (Stream_7);
{
#define MR_PROC_LABEL mercury__io__write_list_6_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_23 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_24  = (MR_Box) OutStream;
}
  OrigStream_16 = (MR_Word) (OutStream_24);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&mercury__io_scalar_common_10[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (mercury__io__write_list_6_p_1_2));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (Var_14));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&mercury__io_scalar_common_11[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (mercury__io__write_list_6_p_1_3));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (OrigStream_16));
  }
  mercury__exception__finally_2_6_p_1((MR_Word) (&mercury__io_scalar_common_4[0]), Var_20, Var_21, &conv2__Result_17, &_CleanupRes_18);
}

static void MR_CALL 
mercury__io__write_list_6_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  mercury__io__restore_output_stream_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv1_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
mercury__io__write_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv0_HeadVar__2_2;

  mercury__io__call_pred_no_result_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), &conv0_HeadVar__2_2);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__write_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__write_list_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))));
}

void MR_CALL 
mercury__io__write_list_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Stream_7,
  MR_Word List_8,
  MR_String Separator_9,
  MR_Word OutputPred_10)
{
  MR_Word Var_14;
  MR_Word OrigStream_16;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Box NewStream_23;
  MR_Box OutStream_24;
  MR_Word _CleanupRes_18;
  MR_Box conv2__Result_17;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_9[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (mercury__io__write_list_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (List_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (Separator_9));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (OutputPred_10));
  }
  NewStream_23 = (MR_Box) (Stream_7);
{
#define MR_PROC_LABEL mercury__io__write_list_6_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_23 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_24  = (MR_Box) OutStream;
}
  OrigStream_16 = (MR_Word) (OutStream_24);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&mercury__io_scalar_common_10[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (mercury__io__write_list_6_p_0_2));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (Var_14));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&mercury__io_scalar_common_11[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (mercury__io__write_list_6_p_0_3));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (OrigStream_16));
  }
  mercury__exception__finally_2_6_p_0((MR_Word) (&mercury__io_scalar_common_4[0]), Var_20, Var_21, &conv2__Result_17, &_CleanupRes_18);
}

void MR_CALL 
mercury__io__write_list_5_p_1(
  MR_Word TypeInfo_for_T_21,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Box Head_11 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Word Tail_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_IO_20_20;

    func_0(((MR_Box) (HeadVar__3_3)), Head_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
    if (!((Tail_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Box TailHead_16 = (MR_hl_field(1, Tail_12, (MR_Integer) 0));
      MR_Word TailTail_17 = ((MR_Word) ((MR_hl_field(1, Tail_12, (MR_Integer) 1))));

      mercury__io__write_list_lag_6_p_1(TypeInfo_for_T_21, TailHead_16, TailTail_17, HeadVar__2_2, HeadVar__3_3);
    }
  }
}

void MR_CALL 
mercury__io__write_list_lag_6_p_1(
  MR_Word TypeInfo_for_T_18,
  MR_Box Head_7,
  MR_Word Tail_8,
  MR_String Separator_9,
  MR_Word OutputPred_10)
{
  while (MR_TRUE)
  {
    MR_Word Stream_19;
    MR_Box Stream_21;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_17_17;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__write_list_lag_6_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_21  = (MR_Box) Stream;
}
    Stream_19 = (MR_Word) (Stream_21);
    mercury__io__write_string_4_p_0(Stream_19, Separator_9);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, OutputPred_10, (MR_Integer) 1))));
    func_0(((MR_Box) (OutputPred_10)), Head_7, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17_17);
    if (!((Tail_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Box TailHead_12 = (MR_hl_field(1, Tail_8, (MR_Integer) 0));
      MR_Word TailTail_13 = ((MR_Word) ((MR_hl_field(1, Tail_8, (MR_Integer) 1))));
      MR_Box next_value_of_Head_7 = TailHead_12;
      MR_Word next_value_of_Tail_8 = TailTail_13;

      // direct tailcall eliminated
      ;
      Head_7 = next_value_of_Head_7;
      Tail_8 = next_value_of_Tail_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__io__write_list_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Box Head_11 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Word Tail_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_IO_20_20;

    func_0(((MR_Box) (HeadVar__3_3)), Head_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
    if (!((Tail_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Box TailHead_16 = (MR_hl_field(1, Tail_12, (MR_Integer) 0));
      MR_Word TailTail_17 = ((MR_Word) ((MR_hl_field(1, Tail_12, (MR_Integer) 1))));

      mercury__io__write_list_lag_6_p_0(TypeInfo_for_T_21, TailHead_16, TailTail_17, HeadVar__2_2, HeadVar__3_3);
    }
  }
}

void MR_CALL 
mercury__io__write_list_lag_6_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Box Head_7,
  MR_Word Tail_8,
  MR_String Separator_9,
  MR_Word OutputPred_10)
{
  while (MR_TRUE)
  {
    MR_Word Stream_19;
    MR_Box Stream_21;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_17_17;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__write_list_lag_6_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_21  = (MR_Box) Stream;
}
    Stream_19 = (MR_Word) (Stream_21);
    mercury__io__write_string_4_p_0(Stream_19, Separator_9);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, OutputPred_10, (MR_Integer) 1))));
    func_0(((MR_Box) (OutputPred_10)), Head_7, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17_17);
    if (!((Tail_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Box TailHead_12 = (MR_hl_field(1, Tail_8, (MR_Integer) 0));
      MR_Word TailTail_13 = ((MR_Word) ((MR_hl_field(1, Tail_8, (MR_Integer) 1))));
      MR_Box next_value_of_Head_7 = TailHead_12;
      MR_Word next_value_of_Tail_8 = TailTail_13;

      // direct tailcall eliminated
      ;
      Head_7 = next_value_of_Head_7;
      Tail_8 = next_value_of_Tail_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__io__write_many_3_p_0(
  MR_Word Vals_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_many_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_many_4_p_0(Stream_6, Vals_4);
}

void MR_CALL 
mercury__io__write_many_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Val_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vals_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      switch (MR_tag((MR_Word) Val_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float F_17 = MR_unbox_float((MR_hl_field(0, Val_10, (MR_Integer) 0)));

            mercury__io__write_float_4_p_0(HeadVar__1_1, F_17);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer I_14 = ((MR_Integer) ((MR_hl_field(1, Val_10, (MR_Integer) 0))));

            mercury__io__write_int_4_p_0(HeadVar__1_1, I_14);
          }
          break;
        case (MR_Integer) 2:
          {
            int8_t I_34 = ((int8_t) (MR_Word) (MR_hl_field(2, Val_10, (MR_Integer) 0)));

            mercury__io__write_int8_4_p_0(HeadVar__1_1, I_34);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Val_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                int16_t I_35 = ((int16_t) (MR_Word) (MR_hl_field(3, Val_10, (MR_Integer) 1)));

                mercury__io__write_int16_4_p_0(HeadVar__1_1, I_35);
              }
              break;
            case (MR_Integer) 1:
              {
                int32_t I_36 = ((int32_t) (MR_Word) (MR_hl_field(3, Val_10, (MR_Integer) 1)));

                mercury__io__write_int32_4_p_0(HeadVar__1_1, I_36);
              }
              break;
            case (MR_Integer) 2:
              {
                int64_t I_37 = MR_unbox_int64((MR_hl_field(3, Val_10, (MR_Integer) 1)));

                mercury__io__write_int64_4_p_0(HeadVar__1_1, I_37);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Unsigned U_15 = ((MR_Unsigned) ((MR_hl_field(3, Val_10, (MR_Integer) 1))));

                mercury__io__write_uint_4_p_0(HeadVar__1_1, U_15);
              }
              break;
            case (MR_Integer) 4:
              {
                uint8_t U_38 = ((uint8_t) (MR_Word) (MR_hl_field(3, Val_10, (MR_Integer) 1)));

                mercury__io__write_uint8_4_p_0(HeadVar__1_1, U_38);
              }
              break;
            case (MR_Integer) 5:
              {
                uint16_t U_39 = ((uint16_t) (MR_Word) (MR_hl_field(3, Val_10, (MR_Integer) 1)));

                mercury__io__write_uint16_4_p_0(HeadVar__1_1, U_39);
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t U_40 = ((uint32_t) (MR_Word) (MR_hl_field(3, Val_10, (MR_Integer) 1)));

                mercury__io__write_uint32_4_p_0(HeadVar__1_1, U_40);
              }
              break;
            case (MR_Integer) 7:
              {
                uint64_t U_41 = MR_unbox_uint64((MR_hl_field(3, Val_10, (MR_Integer) 1)));

                mercury__io__write_uint64_4_p_0(HeadVar__1_1, U_41);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_String S_16 = ((MR_String) ((MR_hl_field(3, Val_10, (MR_Integer) 1))));

                mercury__io__write_string_4_p_0(HeadVar__1_1, S_16);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Char C_13 = ((MR_Char) (MR_Word) (MR_hl_field(3, Val_10, (MR_Integer) 1)));

                mercury__io__write_char_4_p_0(HeadVar__1_1, C_13);
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vals_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__io__write_prefixed_lines_4_p_0(
  MR_String Prefix_5,
  MR_Word Lines_6)
{
  MR_Word Stream_8;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__write_prefixed_lines_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Stream_12);
  mercury__io__write_prefixed_lines_5_p_0(Stream_8, Prefix_5, Lines_6);
}

void MR_CALL 
mercury__io__write_prefixed_lines_5_p_0(
  MR_Word Stream_1,
  MR_String Prefix_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Str_13 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Strs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__3_3;

      mercury__io__write_string_4_p_0(Stream_1, Prefix_2);
      mercury__io__write_string_4_p_0(Stream_1, Str_13);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Strs_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__io__write_strings_3_p_0(
  MR_Word Strings_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_strings_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_strings_4_p_0(Stream_6, Strings_4);
}

void MR_CALL 
mercury__io__write_strings_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String S_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Ss_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_4_p_0(HeadVar__1_1, S_10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Ss_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__io__format_5_p_0(
  MR_Word Stream_6,
  MR_String FormatString_7,
  MR_Word Arguments_8)
{
  MR_String String_10;

  mercury__string__format__format_impl_3_p_0(FormatString_7, Arguments_8, &String_10);
  mercury__io__write_string_4_p_0(Stream_6, String_10);
}

void MR_CALL 
mercury__io__format_4_p_0(
  MR_String FormatString_5,
  MR_Word Arguments_6)
{
  MR_Word Stream_8;
  MR_Box Stream_12;
  MR_String String_13;

{
#define MR_PROC_LABEL mercury__io__format_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Stream_12);
  mercury__string__format__format_impl_3_p_0(FormatString_5, Arguments_6, &String_13);
  mercury__io__write_string_4_p_0(Stream_8, String_13);
}

void MR_CALL 
mercury__io__write_binary_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box Term_4)
{
  MR_Word Stream_6;
  MR_Box Stream_11;

{
#define MR_PROC_LABEL mercury__io__write_binary_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_11);
  mercury__io__write_binary_4_p_0(TypeInfo_for_T_10, Stream_6, Term_4);
}

void MR_CALL 
mercury__io__write_binary_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Box Term_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word Var_10 = (MR_Word) (Stream_5);
  MR_Word Var_17;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_14, Term_6, &Var_17);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), Var_10, (MR_Integer) 1, Var_17, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
  mercury__io__write_string_4_p_0(Var_10, (MR_String) ".\n");
}

void MR_CALL 
mercury__io__write_line_cc_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Stream_5,
  MR_Box X_6)
{
  MR_Word Var_14;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_11, X_6, &Var_14);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_5, (MR_Integer) 2, Var_14, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 10);
}

void MR_CALL 
mercury__io__write_line_cc_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box X_4)
{
  MR_Word Stream_6;
  MR_Box Stream_11;
  MR_Word Var_15;

{
#define MR_PROC_LABEL mercury__io__write_line_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_11);
  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_10, X_4, &Var_15);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, (MR_Integer) 2, Var_15, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
  mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 10);
}

void MR_CALL 
mercury__io__write_line_5_p_3(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box X_8)
{
  MR_Word Var_15;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_13, X_8, &Var_15);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Var_15, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
  mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 10);
}

void MR_CALL 
mercury__io__write_line_5_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box X_8)
{
  MR_Word Var_15;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_13, X_8, &Var_15);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Var_15, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
  mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 10);
}

void MR_CALL 
mercury__io__write_line_5_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box X_8)
{
  MR_Word Var_15;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_13, X_8, &Var_15);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Var_15, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
  mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 10);
}

void MR_CALL 
mercury__io__write_line_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box X_8)
{
  MR_Word Var_15;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_13, X_8, &Var_15);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Var_15, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
  mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 10);
}

void MR_CALL 
mercury__io__write_line_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Stream_5,
  MR_Box X_6)
{
  MR_Word Var_14;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_11, X_6, &Var_14);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_5, (MR_Integer) 1, Var_14, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 10);
}

void MR_CALL 
mercury__io__write_line_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box X_4)
{
  MR_Word Stream_6;
  MR_Box Stream_11;
  MR_Word Var_15;

{
#define MR_PROC_LABEL mercury__io__write_line_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_11);
  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_10, X_4, &Var_15);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, (MR_Integer) 1, Var_15, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
  mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 10);
}

void MR_CALL 
mercury__io__write_cc_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Stream_5,
  MR_Box X_6)
{
  MR_Word Var_13;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_11, X_6, &Var_13);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_5, (MR_Integer) 2, Var_13, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
}

void MR_CALL 
mercury__io__write_cc_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box X_4)
{
  MR_Word Stream_6;
  MR_Box Stream_11;
  MR_Word Var_14;

{
#define MR_PROC_LABEL mercury__io__write_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_11);
  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_10, X_4, &Var_14);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, (MR_Integer) 2, Var_14, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
}

void MR_CALL 
mercury__io__write_5_p_3(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box X_8)
{
  MR_Word Var_14;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_12, X_8, &Var_14);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Var_14, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
}

void MR_CALL 
mercury__io__write_5_p_2(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box X_8)
{
  MR_Word Var_14;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_12, X_8, &Var_14);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Var_14, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
}

void MR_CALL 
mercury__io__write_5_p_1(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box X_8)
{
  MR_Word Var_14;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_12, X_8, &Var_14);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Var_14, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
}

void MR_CALL 
mercury__io__write_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box X_8)
{
  MR_Word Var_14;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_12, X_8, &Var_14);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Var_14, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
}

void MR_CALL 
mercury__io__write_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Stream_5,
  MR_Box X_6)
{
  MR_Word Var_13;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_11, X_6, &Var_13);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_5, (MR_Integer) 1, Var_13, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
}

void MR_CALL 
mercury__io__write_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box X_4)
{
  MR_Word Stream_6;
  MR_Box Stream_13;
  MR_Word Var_14;

{
#define MR_PROC_LABEL mercury__io__write_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_13  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_13);
  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_11, X_4, &Var_14);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, (MR_Integer) 1, Var_14, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))));
}

void MR_CALL 
mercury__io__print_line_cc_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box Term_4)
{
  MR_Word Stream_10;
  MR_Box Stream_13;
  MR_Word Stream_16;
  MR_Box Stream_18;

{
#define MR_PROC_LABEL mercury__io__print_line_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_13  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_13);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(TypeInfo_for_T_9, (MR_Word) (&mercury__io_scalar_common_3[0]), Stream_10, (MR_Integer) 2, Term_4);
{
#define MR_PROC_LABEL mercury__io__print_line_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_18  = (MR_Box) Stream;
}
  Stream_16 = (MR_Word) (Stream_18);
  mercury__io__write_char_4_p_0(Stream_16, (MR_Char) 10);
}

void MR_CALL 
mercury__io__print_line_5_p_3(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box Term_8)
{
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(TypeInfo_for_T_13, (MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Term_8);
  mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 10);
}

void MR_CALL 
mercury__io__print_line_5_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box Term_8)
{
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(TypeInfo_for_T_13, (MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Term_8);
  mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 10);
}

void MR_CALL 
mercury__io__print_line_5_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box Term_8)
{
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeInfo_for_T_13, (MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Term_8);
  mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 10);
}

void MR_CALL 
mercury__io__print_line_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box Term_8)
{
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Term_8);
  mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 10);
}

void MR_CALL 
mercury__io__print_line_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Stream_5,
  MR_Box Term_6)
{
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeInfo_for_T_11, (MR_Word) (&mercury__io_scalar_common_3[0]), Stream_5, (MR_Integer) 1, Term_6);
  mercury__io__write_char_4_p_0(Stream_5, (MR_Char) 10);
}

void MR_CALL 
mercury__io__print_line_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box Term_4)
{
  MR_Word Stream_6;
  MR_Box Stream_11;

{
#define MR_PROC_LABEL mercury__io__print_line_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_11);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeInfo_for_T_10, (MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, (MR_Integer) 1, Term_4);
  mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 10);
}

void MR_CALL 
mercury__io__print_cc_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box Term_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__print_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(TypeInfo_for_T_10, (MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, (MR_Integer) 2, Term_4);
}

void MR_CALL 
mercury__io__print_5_p_3(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box Term_8)
{
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(TypeInfo_for_T_12, (MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Term_8);
}

void MR_CALL 
mercury__io__print_5_p_2(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box Term_8)
{
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(TypeInfo_for_T_12, (MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Term_8);
}

void MR_CALL 
mercury__io__print_5_p_1(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box Term_8)
{
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeInfo_for_T_12, (MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Term_8);
}

void MR_CALL 
mercury__io__print_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word MaybeCanon_7,
  MR_Box Term_8)
{
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, MaybeCanon_7, Term_8);
}

void MR_CALL 
mercury__io__print_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Stream_5,
  MR_Box Term_6)
{
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeInfo_for_T_11, (MR_Word) (&mercury__io_scalar_common_3[0]), Stream_5, (MR_Integer) 1, Term_6);
}

void MR_CALL 
mercury__io__print_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box Term_4)
{
  MR_Word Stream_6;
  MR_Box Stream_13;

{
#define MR_PROC_LABEL mercury__io__print_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_13  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_13);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeInfo_for_T_11, (MR_Word) (&mercury__io_scalar_common_3[0]), Stream_6, (MR_Integer) 1, Term_4);
}

void MR_CALL 
mercury__io__read_binary_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word BinaryInputStream_5,
  MR_Word * Result_6)
{
  MR_Box Stream_8 = (MR_Box) (BinaryInputStream_5);
  MR_Word TextInputStream_9 = (MR_Word) (Stream_8);

  mercury__io__read_binary_from_text_input_stream_4_p_0(TypeInfo_for_T_12, TextInputStream_9, Result_6);
}

void MR_CALL 
mercury__io__read_binary_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word * Result_4)
{
  MR_Box Stream_12;
  MR_Word TextInputStream_13;

{
#define MR_PROC_LABEL mercury__io__read_binary_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  TextInputStream_13 = (MR_Word) (Stream_12);
  mercury__io__read_binary_from_text_input_stream_4_p_0(TypeInfo_for_T_10, TextInputStream_13, Result_4);
}

void MR_CALL 
mercury__io__read_binary_from_text_input_stream_4_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word ReadResult_8;

  mercury__io__read_4_p_0(TypeInfo_for_T_24, Stream_5, &ReadResult_8);
  switch (MR_tag((MR_Word) ReadResult_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box T_9 = (MR_hl_field(1, ReadResult_8, (MR_Integer) 0));
        MR_Word NewLineRes_10;
        MR_Word ResultCode_25;
        MR_Box Error_26;
        MR_Char Char_27;
        MR_Box Var_30 = (MR_Box) (Stream_5);

        mercury__io__primitives_read__read_char_code_2_6_p_0(Var_30, &ResultCode_25, &Error_26, &Char_27);
        switch (ResultCode_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            NewLineRes_10 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word IOError_31;

              mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_26, (MR_String) "read failed: ", &IOError_31);
              {
                NewLineRes_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, NewLineRes_10, 0) = ((MR_Box) (IOError_31));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              NewLineRes_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, NewLineRes_10, 0) = ((MR_Box) (MR_Word) (Char_27));
            }
            break;
        }
        switch (MR_tag((MR_Word) NewLineRes_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Result_6 = (MR_Word) (MR_mkword(2, &mercury__io_scalar_common_5[6]));
            break;
          case (MR_Integer) 1:
            {
              MR_Char NewLineChar_12 = ((MR_Char) (MR_Word) (MR_hl_field(1, NewLineRes_10, (MR_Integer) 0)));

              succeeded = (NewLineChar_12 == (MR_Char) 10);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_6 = base;
                  MR_hl_field(1, base, 0) = T_9;
                }
              else
                *Result_6 = (MR_Word) (MR_mkword(2, &mercury__io_scalar_common_5[6]));
            }
            break;
          case (MR_Integer) 2:
            *Result_6 = NewLineRes_10;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String ErrorMsg_13 = ((MR_String) ((MR_hl_field(2, ReadResult_8, (MR_Integer) 0))));
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (ErrorMsg_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Var_23));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_from_string_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_String FileName_7,
  MR_String String_8,
  MR_Integer Len_9,
  MR_Word * Result_10,
  MR_Word STATE_VARIABLE_Posn_0_16,
  MR_Word * STATE_VARIABLE_Posn_17)
{
  MR_Word ReadResult_12;
  MR_Integer LineNumber_13;
  MR_Word Var_24;

  mercury__mercury_term_lexer__string_get_token_list_max_5_p_0(String_8, Len_9, &Var_24, STATE_VARIABLE_Posn_0_16, STATE_VARIABLE_Posn_17);
  mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&mercury__io_scalar_common_4[1]), ((MR_Box) ((MR_Integer) 0)), FileName_7, Var_24, &ReadResult_12);
  LineNumber_13 = ((MR_Integer) ((MR_hl_field(0, *STATE_VARIABLE_Posn_17, (MR_Integer) 0))));
  mercury__io__process_read_term_4_p_0(TypeInfo_for_T_20, (MR_String) "predicate \140io.read_from_string\'/6", ReadResult_12, LineNumber_13, Result_10);
}

MR_Word MR_CALL 
mercury__io__init_posn_0_f_0(void)
{
  return (MR_Word) (&mercury__io_scalar_common_1[3]);
}

void MR_CALL 
mercury__io__read_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word ReadResult_8;
  MR_Integer LineNumber_9;
  MR_String Var_17;
  MR_Box Stream_21 = (MR_Box) (Stream_5);
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Integer Var_24;
  MR_Word Var_27;
  MR_Char Var_28;
  MR_Word ResultCode_32;
  MR_Box Error_33;
  MR_Box Var_35;
  MR_Box Stream_41;

  mercury__io__stream_db__stream_name_4_p_0(Stream_21, &Var_17);
  Var_35 = (MR_Box) (Stream_5);
  mercury__io__primitives_read__read_char_code_2_6_p_0(Var_35, &ResultCode_32, &Error_33, &Var_28);
  switch (ResultCode_32) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Var_27 = (MR_Word) ((MR_Unsigned) 4U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_36;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_33, (MR_String) "read failed: ", &IOError_36);
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (IOError_36));
        }
      }
      break;
    case (MR_Integer) 0:
      Var_27 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  switch (MR_tag((MR_Word) Var_27)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Var_27)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_31;

            if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Var_28 - (MR_Unsigned) 9))) <= ((MR_Unsigned) 117)))
              if ((((mercury__io_scalar_common_7[0])[(((MR_Integer) ((MR_Unsigned) Var_28 - (MR_Unsigned) 9)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Var_28 - (MR_Unsigned) 9)) & (MR_Integer) 31))))))
              {
                Var_31 = ((&mercury__io_vector_common_6[118 + (MR_Integer) ((MR_Unsigned) Var_28 - (MR_Unsigned) 9)]))->mercury__io__vector_common_type_6_0__vct_6_f_0;
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
            else
              succeeded = MR_FALSE;
            if (succeeded)
              mercury__mercury_term_lexer__execute_get_token_action_8_p_0(Stream_5, Var_28, Var_31, (MR_Integer) 1, &Var_23, &Var_24);
            else
            {
              MR_Box Stream_40 = (MR_Box) (Stream_5);

{
#define MR_PROC_LABEL mercury__io__read_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_40 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	Var_24  = LineNum;
}
              {
                Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Var_23, 1) = ((MR_Box) (MR_Word) (Var_28));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box Stream_38 = (MR_Box) (Stream_5);

{
#define MR_PROC_LABEL mercury__io__read_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_38 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	Var_24  = LineNum;
}
            Var_23 = (MR_Word) ((MR_Unsigned) 40U);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
        MR_Box Stream_39 = (MR_Box) (Stream_5);

{
#define MR_PROC_LABEL mercury__io__read_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_39 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	Var_24  = LineNum;
}
        {
          Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_23, 1) = ((MR_Box) (Var_30));
        }
      }
      break;
  }
  mercury__mercury_term_lexer__get_token_list_2_6_p_0(Stream_5, Var_23, Var_24, &Var_22);
  mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&mercury__io_scalar_common_4[1]), ((MR_Box) ((MR_Integer) 0)), Var_17, Var_22, &ReadResult_8);
  Stream_41 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__read_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_41 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	LineNumber_9  = LineNum;
}
  mercury__io__process_read_term_4_p_0(TypeInfo_for_T_15, (MR_String) "predicate \140io.read\'/4", ReadResult_8, LineNumber_9, Result_6);
}

void MR_CALL 
mercury__io__read_3_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word * Result_4)
{
  MR_bool succeeded;
  MR_Word Stream_6;
  MR_Word ReadResult_7;
  MR_Integer LineNumber_8;
  MR_String Var_18;
  MR_Box Stream_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Integer Var_25;
  MR_Word Var_28;
  MR_Char Var_29;
  MR_Word ResultCode_33;
  MR_Box Error_34;
  MR_Box Var_36;
  MR_Box Stream_42;

{
#define MR_PROC_LABEL mercury__io__read_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_22  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_22);
  mercury__io__stream_db__stream_name_4_p_0(Stream_22, &Var_18);
  Var_36 = (MR_Box) (Stream_6);
  mercury__io__primitives_read__read_char_code_2_6_p_0(Var_36, &ResultCode_33, &Error_34, &Var_29);
  switch (ResultCode_33) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Var_28 = (MR_Word) ((MR_Unsigned) 4U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_37;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_34, (MR_String) "read failed: ", &IOError_37);
        {
          Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_28, 0) = ((MR_Box) (IOError_37));
        }
      }
      break;
    case (MR_Integer) 0:
      Var_28 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  switch (MR_tag((MR_Word) Var_28)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Var_28)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_32;

            if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Var_29 - (MR_Unsigned) 9))) <= ((MR_Unsigned) 117)))
              if ((((mercury__io_scalar_common_7[0])[(((MR_Integer) ((MR_Unsigned) Var_29 - (MR_Unsigned) 9)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Var_29 - (MR_Unsigned) 9)) & (MR_Integer) 31))))))
              {
                Var_32 = ((&mercury__io_vector_common_6[0 + (MR_Integer) ((MR_Unsigned) Var_29 - (MR_Unsigned) 9)]))->mercury__io__vector_common_type_6_0__vct_6_f_0;
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
            else
              succeeded = MR_FALSE;
            if (succeeded)
              mercury__mercury_term_lexer__execute_get_token_action_8_p_0(Stream_6, Var_29, Var_32, (MR_Integer) 1, &Var_24, &Var_25);
            else
            {
              MR_Box Stream_41 = (MR_Box) (Stream_6);

{
#define MR_PROC_LABEL mercury__io__read_3_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_41 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	Var_25  = LineNum;
}
              {
                Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Var_24, 1) = ((MR_Box) (MR_Word) (Var_29));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box Stream_39 = (MR_Box) (Stream_6);

{
#define MR_PROC_LABEL mercury__io__read_3_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_39 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	Var_25  = LineNum;
}
            Var_24 = (MR_Word) ((MR_Unsigned) 40U);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
        MR_Box Stream_40 = (MR_Box) (Stream_6);

{
#define MR_PROC_LABEL mercury__io__read_3_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_40 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	Var_25  = LineNum;
}
        {
          Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_31));
        }
      }
      break;
  }
  mercury__mercury_term_lexer__get_token_list_2_6_p_0(Stream_6, Var_24, Var_25, &Var_23);
  mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&mercury__io_scalar_common_4[1]), ((MR_Box) ((MR_Integer) 0)), Var_18, Var_23, &ReadResult_7);
  Stream_42 = (MR_Box) (Stream_6);
{
#define MR_PROC_LABEL mercury__io__read_3_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_42 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	LineNumber_8  = LineNum;
}
  mercury__io__process_read_term_4_p_0(TypeInfo_for_T_15, (MR_String) "predicate \140io.read\'/3", ReadResult_7, LineNumber_8, Result_4);
}

void MR_CALL 
mercury__io__process_read_term_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_String PredId_5,
  MR_Word ReadResult_6,
  MR_Integer LineNumber_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ReadResult_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Integer LN_13 = ((MR_Integer) ((MR_hl_field(1, ReadResult_6, (MR_Integer) 1))));
        MR_String Msg_17 = ((MR_String) ((MR_hl_field(1, ReadResult_6, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Msg_17));
          MR_hl_field(2, base, 1) = ((MR_Box) (LN_13));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Term_10 = ((MR_Word) ((MR_hl_field(2, ReadResult_6, (MR_Integer) 1))));
        MR_Box Type_11;
        MR_Word Var_21;

        mercury__term_conversion__try_term_to_type_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_18, Term_10, &Var_21);
        succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
        if (succeeded)
        {
          Type_11 = (MR_hl_field(0, Var_21, (MR_Integer) 0));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(1, base, 0) = Type_11;
          }
        }
        else
        {
          MR_String Msg_12;
          MR_String Var_14;
          MR_String Var_15;
          MR_Word Var_23;

          succeeded = ((MR_tag((MR_Word) Term_10)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_23 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 1))));
            succeeded = mercury__term_subst__terms_are_ground_1_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_23);
          }
          if (succeeded)
            Msg_12 = (MR_String) "the term read did not have the right type";
          else
            Msg_12 = (MR_String) "the term read was not a ground term";
          mercury__string__append_3_p_2((MR_String) ": ", Msg_12, &Var_15);
          mercury__string__append_3_p_2(PredId_5, Var_15, &Var_14);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (Var_14));
            MR_hl_field(2, base, 1) = ((MR_Box) (LineNumber_7));
          }
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__write_bitmap_6_p_0(
  MR_Word Stream_7,
  MR_Box Bitmap_8,
  MR_Integer Start_9,
  MR_Integer NumBytes_10)
{
  mercury__bitmap__write_bitmap_range_6_p_0(Stream_7, Bitmap_8, Start_9, NumBytes_10);
}

void MR_CALL 
mercury__io__write_bitmap_5_p_0(
  MR_Box Bitmap_6,
  MR_Integer Start_7,
  MR_Integer NumBytes_8)
{
  MR_Word Var_12;
  MR_Box Stream_14;

{
#define MR_PROC_LABEL mercury__io__write_bitmap_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_14  = (MR_Box) Stream;
}
  Var_12 = (MR_Word) (Stream_14);
  mercury__bitmap__write_bitmap_range_6_p_0(Var_12, Bitmap_6, Start_7, NumBytes_8);
}

void MR_CALL 
mercury__io__write_bitmap_4_p_0(
  MR_Word Stream_5,
  MR_Box Bitmap_6)
{
  mercury__bitmap__write_bitmap_4_p_0(Stream_5, Bitmap_6);
}

void MR_CALL 
mercury__io__write_bitmap_3_p_0(
  MR_Box Bitmap_4)
{
  MR_Word Var_8;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_bitmap_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Var_8 = (MR_Word) (Stream_10);
  mercury__bitmap__write_bitmap_4_p_0(Var_8, Bitmap_4);
}

void MR_CALL 
mercury__io__read_bitmap_9_p_0(
  MR_Word Stream_10,
  MR_Integer Start_11,
  MR_Integer NumBytes_12,
  MR_Box STATE_VARIABLE_Bitmap_0_17,
  MR_Box * STATE_VARIABLE_Bitmap_18,
  MR_Integer * BytesRead_14,
  MR_Word * Result_15)
{
  mercury__bitmap__read_bitmap_range_9_p_0(Stream_10, Start_11, NumBytes_12, STATE_VARIABLE_Bitmap_0_17, STATE_VARIABLE_Bitmap_18, BytesRead_14, Result_15);
}

void MR_CALL 
mercury__io__read_bitmap_8_p_0(
  MR_Integer StartByte_9,
  MR_Integer NumBytes_10,
  MR_Box STATE_VARIABLE_Bitmap_0_15,
  MR_Box * STATE_VARIABLE_Bitmap_16,
  MR_Integer * BytesRead_12,
  MR_Word * Result_13)
{
  MR_Word Var_19;
  MR_Box Stream_21;

{
#define MR_PROC_LABEL mercury__io__read_bitmap_8_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_21  = (MR_Box) Stream;
}
  Var_19 = (MR_Word) (Stream_21);
  mercury__bitmap__read_bitmap_range_9_p_0(Var_19, StartByte_9, NumBytes_10, STATE_VARIABLE_Bitmap_0_15, STATE_VARIABLE_Bitmap_16, BytesRead_12, Result_13);
}

void MR_CALL 
mercury__io__read_bitmap_7_p_0(
  MR_Word Stream_8,
  MR_Box STATE_VARIABLE_Bitmap_0_13,
  MR_Box * STATE_VARIABLE_Bitmap_14,
  MR_Integer * BytesRead_10,
  MR_Word * Result_11)
{
  MR_Integer Var_17;

  Var_17 = mercury__bitmap__det_num_bytes_1_f_0(STATE_VARIABLE_Bitmap_0_13);
  mercury__bitmap__read_bitmap_range_9_p_0(Stream_8, (MR_Integer) 0, Var_17, STATE_VARIABLE_Bitmap_0_13, STATE_VARIABLE_Bitmap_14, BytesRead_10, Result_11);
}

void MR_CALL 
mercury__io__read_bitmap_6_p_0(
  MR_Box STATE_VARIABLE_Bitmap_0_11,
  MR_Box * STATE_VARIABLE_Bitmap_12,
  MR_Integer * BytesRead_8,
  MR_Word * Result_9)
{
  MR_Word Var_15;
  MR_Box Stream_17;
  MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__io__read_bitmap_6_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
  Var_15 = (MR_Word) (Stream_17);
  Var_18 = mercury__bitmap__det_num_bytes_1_f_0(STATE_VARIABLE_Bitmap_0_11);
  mercury__bitmap__read_bitmap_range_9_p_0(Var_15, (MR_Integer) 0, Var_18, STATE_VARIABLE_Bitmap_0_11, STATE_VARIABLE_Bitmap_12, BytesRead_8, Result_9);
}

void MR_CALL 
mercury__io__ignore_whitespace_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__ignore_whitespace_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__ignore_whitespace_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_line_as_string_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_line_as_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_line_as_string_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_line_as_string_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word Res_8;
  MR_Box Error_9;
  MR_String String_10;

{
#define MR_PROC_LABEL mercury__io__read_line_as_string_4_p_0

	MercuryFilePtr Stream;
	MR_Word Res;
	MR_Integer Error;
	MR_String RetString;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

#define ML_IO_READ_LINE_GROW(n) ((n) * 3 / 2)
#define ML_IO_BYTES_TO_WORDS(n) (((n) + sizeof(MR_Word) - 1) / sizeof(MR_Word))
#define ML_IO_READ_LINE_START   1024

    char initial_read_buffer[ML_IO_READ_LINE_START];
    char *read_buffer = initial_read_buffer;
    size_t read_buf_size = ML_IO_READ_LINE_START;
    size_t i;
    int char_code = '\0';

    Res = ML_RLAS_OK;
    Error = 0;
    for (i = 0; char_code != '\n'; ) {
        char_code = mercury_get_byte(Stream);
        if (char_code == EOF) {
            if (i == 0) {
                if (MR_FERROR(*Stream)) {
                    Res = ML_RLAS_ERROR;
                    Error = errno;
                } else {
                    Res = ML_RLAS_EOF;
                }
            }
            break;
        }
        if (char_code == 0) {
            Res = ML_RLAS_NULL_CHAR;
            break;
        }
        read_buffer[i++] = (char) char_code;
        MR_assert(i <= read_buf_size);
        if (i == read_buf_size) {
            // Grow the read buffer.
            read_buf_size = ML_IO_READ_LINE_GROW(read_buf_size);
            if (read_buffer == initial_read_buffer) {
                read_buffer = MR_NEW_ARRAY(char, read_buf_size);
                MR_memcpy(read_buffer, initial_read_buffer,
                    ML_IO_READ_LINE_START);
            } else {
                read_buffer = MR_RESIZE_ARRAY(read_buffer, char,
                    read_buf_size);
            }
        }
    }
    if (Res == ML_RLAS_OK) {
        MR_Word ret_string_word;
        MR_offset_incr_hp_atomic_msg(ret_string_word,
            0, ML_IO_BYTES_TO_WORDS((i + 1) * sizeof(char)),
            MR_ALLOC_ID, "string.string/0");
        RetString = (MR_String) ret_string_word;
        MR_memcpy(RetString, read_buffer, i * sizeof(char));
        RetString[i] = '\0';
    } else {
        RetString = MR_make_string_const("");
    }
    if (read_buffer != initial_read_buffer) {
        MR_free(read_buffer);
    }


		;}
#undef MR_PROC_LABEL
	Res_8  = Res;
	Error_9  = (MR_Box) Error;
	String_10  = RetString;
}
  switch (Res_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOError_11;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (IOError_11));
        }
      }
      break;
    case (MR_Integer) 2:
      *Result_6 = (MR_Word) (MR_mkword(2, &mercury__io_scalar_common_5[4]));
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (String_10));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_line_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_line_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_line_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_line_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Word Chars_10;

  mercury__io__text_read__read_line_2_6_p_0(Stream_5, &ResultCode_8, &Error_9, &Chars_10);
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_11;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (IOError_11));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Chars_10));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_word_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_word_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_word_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_word_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word WSResult_8;

  mercury__io__ignore_whitespace_4_p_0(Stream_5, &WSResult_8);
  switch (MR_tag((MR_Word) WSResult_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(WSResult_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__text_read__read_word_2_4_p_0(Stream_5, Result_6);
          break;
        case (MR_Integer) 1:
          *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Error_9 = ((MR_Word) ((MR_hl_field(1, WSResult_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Error_9));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__ignore_whitespace_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word CharResult_8;
    MR_Word ResultCode_14;
    MR_Box Error_15;
    MR_Char Char_16;
    MR_Box Var_19 = (MR_Box) (Stream_5);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_19, &ResultCode_14, &Error_15, &Char_16);
    switch (ResultCode_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word IOError_20;

          mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_15, (MR_String) "read failed: ", &IOError_20);
          {
            CharResult_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, CharResult_8, 0) = ((MR_Box) (IOError_20));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CharResult_8, 0) = ((MR_Box) (MR_Word) (Char_16));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Result_6 = (MR_Word) ((MR_Unsigned) 4U);
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(1, CharResult_8, (MR_Integer) 0)));

          succeeded = mercury__char__is_whitespace_1_p_0(Char_10);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            continue;
          }
          else
          {
            MR_Box Stream_22 = (MR_Box) (Stream_5);
            MR_Word Ok_23;

            mercury__io__primitives_read__putback_char_2_5_p_0(Stream_22, Char_10, &Ok_23);
            switch (Ok_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (&mercury__io_scalar_common_5[0])));
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
            }
            *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_9 = ((MR_Word) ((MR_hl_field(2, CharResult_8, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_9));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__write_binary_string_utf8_3_p_0(
  MR_String String_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_binary_string_utf8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_binary_string_utf8_4_p_0(Stream_6, String_4);
}

void MR_CALL 
mercury__io__write_binary_string_utf8_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String String_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_string_utf8_4_p_0

	MercuryFilePtr Stream;
	MR_String String;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	String = String_6 ;
		{

    size_t len = strlen(String);
    if (MR_WRITE(*Stream, (unsigned char *) String, len) != len) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_string_utf8_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_binary_uint64_be_3_p_0(
  uint64_t UInt64_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_binary_uint64_be_4_p_0(Stream_6, UInt64_4);
}

void MR_CALL 
mercury__io__write_binary_int64_be_4_p_0(
  MR_Word Stream_5,
  int64_t Int64_6)
{
  uint64_t UInt64_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_int64_be_4_p_0

	int64_t I64;
	uint64_t U64;

	I64 = Int64_6 ;
		{

    U64 = (uint64_t) I64;


		;}
#undef MR_PROC_LABEL
	UInt64_8  = U64;
}
  mercury__io__write_binary_uint64_be_4_p_0(Stream_5, UInt64_8);
}

void MR_CALL 
mercury__io__write_binary_int64_be_3_p_0(
  int64_t Int64_4)
{
  uint64_t UInt64_6;
  MR_Word Stream_9;
  MR_Box Stream_11;

{
#define MR_PROC_LABEL mercury__io__write_binary_int64_be_3_p_0

	int64_t I64;
	uint64_t U64;

	I64 = Int64_4 ;
		{

    U64 = (uint64_t) I64;


		;}
#undef MR_PROC_LABEL
	UInt64_6  = U64;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int64_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  Stream_9 = (MR_Word) (Stream_11);
  mercury__io__write_binary_uint64_be_4_p_0(Stream_9, UInt64_6);
}

void MR_CALL 
mercury__io__write_binary_uint64_be_4_p_0(
  MR_Word HeadVar__1_1,
  uint64_t UInt64_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_be_4_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	U64 = UInt64_6 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U64 = MR_uint64_reverse_bytes(U64);
    #endif
    if (MR_WRITE(*Stream, (unsigned char *) (&U64), 8) != 8) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_be_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_binary_uint64_le_3_p_0(
  uint64_t UInt64_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_binary_uint64_le_4_p_0(Stream_6, UInt64_4);
}

void MR_CALL 
mercury__io__write_binary_int64_le_4_p_0(
  MR_Word Stream_5,
  int64_t Int64_6)
{
  uint64_t UInt64_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_int64_le_4_p_0

	int64_t I64;
	uint64_t U64;

	I64 = Int64_6 ;
		{

    U64 = (uint64_t) I64;


		;}
#undef MR_PROC_LABEL
	UInt64_8  = U64;
}
  mercury__io__write_binary_uint64_le_4_p_0(Stream_5, UInt64_8);
}

void MR_CALL 
mercury__io__write_binary_int64_le_3_p_0(
  int64_t Int64_4)
{
  uint64_t UInt64_6;
  MR_Word Stream_9;
  MR_Box Stream_11;

{
#define MR_PROC_LABEL mercury__io__write_binary_int64_le_3_p_0

	int64_t I64;
	uint64_t U64;

	I64 = Int64_4 ;
		{

    U64 = (uint64_t) I64;


		;}
#undef MR_PROC_LABEL
	UInt64_6  = U64;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int64_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  Stream_9 = (MR_Word) (Stream_11);
  mercury__io__write_binary_uint64_le_4_p_0(Stream_9, UInt64_6);
}

void MR_CALL 
mercury__io__write_binary_uint64_le_4_p_0(
  MR_Word HeadVar__1_1,
  uint64_t UInt64_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_le_4_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	U64 = UInt64_6 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U64 = MR_uint64_reverse_bytes(U64);
    #endif
    if (MR_WRITE(*Stream, (unsigned char *) (&U64), 8) != 8) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_le_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_binary_uint64_3_p_0(
  uint64_t UInt64_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_binary_uint64_4_p_0(Stream_6, UInt64_4);
}

void MR_CALL 
mercury__io__write_binary_int64_4_p_0(
  MR_Word Stream_5,
  int64_t Int64_6)
{
  uint64_t UInt64_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_int64_4_p_0

	int64_t I64;
	uint64_t U64;

	I64 = Int64_6 ;
		{

    U64 = (uint64_t) I64;


		;}
#undef MR_PROC_LABEL
	UInt64_8  = U64;
}
  mercury__io__write_binary_uint64_4_p_0(Stream_5, UInt64_8);
}

void MR_CALL 
mercury__io__write_binary_int64_3_p_0(
  int64_t Int64_4)
{
  uint64_t UInt64_6;
  MR_Word Stream_9;
  MR_Box Stream_11;

{
#define MR_PROC_LABEL mercury__io__write_binary_int64_3_p_0

	int64_t I64;
	uint64_t U64;

	I64 = Int64_4 ;
		{

    U64 = (uint64_t) I64;


		;}
#undef MR_PROC_LABEL
	UInt64_6  = U64;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int64_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  Stream_9 = (MR_Word) (Stream_11);
  mercury__io__write_binary_uint64_4_p_0(Stream_9, UInt64_6);
}

void MR_CALL 
mercury__io__write_binary_uint64_4_p_0(
  MR_Word HeadVar__1_1,
  uint64_t UInt64_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_4_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	U64 = UInt64_6 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U64), 8) != 8) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_binary_uint32_be_3_p_0(
  uint32_t UInt32_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_binary_uint32_be_4_p_0(Stream_6, UInt32_4);
}

void MR_CALL 
mercury__io__write_binary_int32_be_4_p_0(
  MR_Word Stream_5,
  int32_t Int32_6)
{
  uint32_t UInt32_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_int32_be_4_p_0

	int32_t I32;
	uint32_t U32;

	I32 = Int32_6 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	UInt32_8  = U32;
}
  mercury__io__write_binary_uint32_be_4_p_0(Stream_5, UInt32_8);
}

void MR_CALL 
mercury__io__write_binary_int32_be_3_p_0(
  int32_t Int32_4)
{
  uint32_t UInt32_6;
  MR_Word Stream_9;
  MR_Box Stream_11;

{
#define MR_PROC_LABEL mercury__io__write_binary_int32_be_3_p_0

	int32_t I32;
	uint32_t U32;

	I32 = Int32_4 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	UInt32_6  = U32;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  Stream_9 = (MR_Word) (Stream_11);
  mercury__io__write_binary_uint32_be_4_p_0(Stream_9, UInt32_6);
}

void MR_CALL 
mercury__io__write_binary_uint32_be_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t UInt32_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_be_4_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	U32 = UInt32_6 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U32 = MR_uint32_reverse_bytes(U32);
    #endif
    if (MR_WRITE(*Stream, (unsigned char *) (&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_be_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_binary_uint32_le_3_p_0(
  uint32_t UInt32_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_binary_uint32_le_4_p_0(Stream_6, UInt32_4);
}

void MR_CALL 
mercury__io__write_binary_int32_le_4_p_0(
  MR_Word Stream_5,
  int32_t Int32_6)
{
  uint32_t UInt32_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_int32_le_4_p_0

	int32_t I32;
	uint32_t U32;

	I32 = Int32_6 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	UInt32_8  = U32;
}
  mercury__io__write_binary_uint32_le_4_p_0(Stream_5, UInt32_8);
}

void MR_CALL 
mercury__io__write_binary_int32_le_3_p_0(
  int32_t Int32_4)
{
  uint32_t UInt32_6;
  MR_Word Stream_9;
  MR_Box Stream_11;

{
#define MR_PROC_LABEL mercury__io__write_binary_int32_le_3_p_0

	int32_t I32;
	uint32_t U32;

	I32 = Int32_4 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	UInt32_6  = U32;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  Stream_9 = (MR_Word) (Stream_11);
  mercury__io__write_binary_uint32_le_4_p_0(Stream_9, UInt32_6);
}

void MR_CALL 
mercury__io__write_binary_uint32_le_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t UInt32_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_le_4_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	U32 = UInt32_6 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U32 = MR_uint32_reverse_bytes(U32);
    #endif
    if (MR_WRITE(*Stream, (unsigned char *) (&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_le_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_binary_uint32_3_p_0(
  uint32_t UInt32_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_binary_uint32_4_p_0(Stream_6, UInt32_4);
}

void MR_CALL 
mercury__io__write_binary_int32_4_p_0(
  MR_Word Stream_5,
  int32_t Int32_6)
{
  uint32_t UInt32_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_int32_4_p_0

	int32_t I32;
	uint32_t U32;

	I32 = Int32_6 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	UInt32_8  = U32;
}
  mercury__io__write_binary_uint32_4_p_0(Stream_5, UInt32_8);
}

void MR_CALL 
mercury__io__write_binary_int32_3_p_0(
  int32_t Int32_4)
{
  uint32_t UInt32_6;
  MR_Word Stream_9;
  MR_Box Stream_11;

{
#define MR_PROC_LABEL mercury__io__write_binary_int32_3_p_0

	int32_t I32;
	uint32_t U32;

	I32 = Int32_4 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	UInt32_6  = U32;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  Stream_9 = (MR_Word) (Stream_11);
  mercury__io__write_binary_uint32_4_p_0(Stream_9, UInt32_6);
}

void MR_CALL 
mercury__io__write_binary_uint32_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t UInt32_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_4_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	U32 = UInt32_6 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_binary_uint16_be_3_p_0(
  uint16_t UInt16_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_binary_uint16_be_4_p_0(Stream_6, UInt16_4);
}

void MR_CALL 
mercury__io__write_binary_int16_be_4_p_0(
  MR_Word Stream_5,
  int16_t Int16_6)
{
  uint16_t UInt16_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_int16_be_4_p_0

	int16_t I16;
	uint16_t U16;

	I16 = Int16_6 ;
		{

    U16 = (uint16_t) I16;


		;}
#undef MR_PROC_LABEL
	UInt16_8  = U16;
}
  mercury__io__write_binary_uint16_be_4_p_0(Stream_5, UInt16_8);
}

void MR_CALL 
mercury__io__write_binary_int16_be_3_p_0(
  int16_t Int16_4)
{
  uint16_t UInt16_6;
  MR_Word Stream_9;
  MR_Box Stream_11;

{
#define MR_PROC_LABEL mercury__io__write_binary_int16_be_3_p_0

	int16_t I16;
	uint16_t U16;

	I16 = Int16_4 ;
		{

    U16 = (uint16_t) I16;


		;}
#undef MR_PROC_LABEL
	UInt16_6  = U16;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  Stream_9 = (MR_Word) (Stream_11);
  mercury__io__write_binary_uint16_be_4_p_0(Stream_9, UInt16_6);
}

void MR_CALL 
mercury__io__write_binary_uint16_be_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t UInt16_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_be_4_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	U16 = UInt16_6 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U16 = MR_uint16_reverse_bytes(U16);
    #endif
    if (MR_WRITE(*Stream, (unsigned char *) (&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_be_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_binary_uint16_le_3_p_0(
  uint16_t UInt16_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_binary_uint16_le_4_p_0(Stream_6, UInt16_4);
}

void MR_CALL 
mercury__io__write_binary_int16_le_4_p_0(
  MR_Word Stream_5,
  int16_t Int16_6)
{
  uint16_t UInt16_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_int16_le_4_p_0

	int16_t I16;
	uint16_t U16;

	I16 = Int16_6 ;
		{

    U16 = (uint16_t) I16;


		;}
#undef MR_PROC_LABEL
	UInt16_8  = U16;
}
  mercury__io__write_binary_uint16_le_4_p_0(Stream_5, UInt16_8);
}

void MR_CALL 
mercury__io__write_binary_int16_le_3_p_0(
  int16_t Int16_4)
{
  uint16_t UInt16_6;
  MR_Word Stream_9;
  MR_Box Stream_11;

{
#define MR_PROC_LABEL mercury__io__write_binary_int16_le_3_p_0

	int16_t I16;
	uint16_t U16;

	I16 = Int16_4 ;
		{

    U16 = (uint16_t) I16;


		;}
#undef MR_PROC_LABEL
	UInt16_6  = U16;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  Stream_9 = (MR_Word) (Stream_11);
  mercury__io__write_binary_uint16_le_4_p_0(Stream_9, UInt16_6);
}

void MR_CALL 
mercury__io__write_binary_uint16_le_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t UInt16_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_le_4_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	U16 = UInt16_6 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U16 = MR_uint16_reverse_bytes(U16);
    #endif
    if (MR_WRITE(*Stream, (unsigned char *) (&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_le_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_binary_uint16_3_p_0(
  uint16_t UInt16_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_binary_uint16_4_p_0(Stream_6, UInt16_4);
}

void MR_CALL 
mercury__io__write_binary_int16_4_p_0(
  MR_Word Stream_5,
  int16_t Int16_6)
{
  uint16_t UInt16_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_int16_4_p_0

	int16_t I16;
	uint16_t U16;

	I16 = Int16_6 ;
		{

    U16 = (uint16_t) I16;


		;}
#undef MR_PROC_LABEL
	UInt16_8  = U16;
}
  mercury__io__write_binary_uint16_4_p_0(Stream_5, UInt16_8);
}

void MR_CALL 
mercury__io__write_binary_int16_3_p_0(
  int16_t Int16_4)
{
  uint16_t UInt16_6;
  MR_Word Stream_9;
  MR_Box Stream_11;

{
#define MR_PROC_LABEL mercury__io__write_binary_int16_3_p_0

	int16_t I16;
	uint16_t U16;

	I16 = Int16_4 ;
		{

    U16 = (uint16_t) I16;


		;}
#undef MR_PROC_LABEL
	UInt16_6  = U16;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  Stream_9 = (MR_Word) (Stream_11);
  mercury__io__write_binary_uint16_4_p_0(Stream_9, UInt16_6);
}

void MR_CALL 
mercury__io__write_binary_uint16_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t UInt16_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_4_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	U16 = UInt16_6 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_binary_uint8_3_p_0(
  uint8_t UInt8_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_binary_uint8_4_p_0(Stream_6, UInt8_4);
}

void MR_CALL 
mercury__io__write_binary_uint8_4_p_0(
  MR_Word HeadVar__1_1,
  uint8_t UInt8_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Integer Int_8;
  MR_Box Error_9;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint8_4_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = UInt8_6 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Int_8  = I;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint8_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Byte = Int_8 ;
		{

    // Call putc with a strictly non-negative byte-sized integer.
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_9  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint8_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_9 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_14;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "error writing to output file: ", &Var_14);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_14)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_binary_int8_3_p_0(
  int8_t Int8_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_binary_int8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_binary_int8_4_p_0(Stream_6, Int8_4);
}

void MR_CALL 
mercury__io__write_binary_int8_4_p_0(
  MR_Word HeadVar__1_1,
  int8_t Int8_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  uint8_t UInt8_8;
  MR_Integer Int_9;
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__write_binary_int8_4_p_0

	int8_t I8;
	uint8_t U8;

	I8 = Int8_6 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	UInt8_8  = U8;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int8_4_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = UInt8_8 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Int_9  = I;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int8_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Byte = Int_9 ;
		{

    // Call putc with a strictly non-negative byte-sized integer.
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_10  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int8_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_10 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_15;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_10, (MR_String) "error writing to output file: ", &Var_15);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_15)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_byte_3_p_0(
  MR_Integer Byte_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_byte_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_byte_4_p_0(Stream_6, Byte_4);
}

void MR_CALL 
mercury__io__write_byte_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Byte_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_byte_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Byte = Byte_6 ;
		{

    // Call putc with a strictly non-negative byte-sized integer.
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_byte_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__nl_3_p_0(
  MR_Word Stream_4)
{
  mercury__io__write_char_4_p_0(Stream_4, (MR_Char) 10);
}

void MR_CALL 
mercury__io__nl_2_p_0(void)
{
  MR_Word Stream_7;
  MR_Box Stream_9;

{
#define MR_PROC_LABEL mercury__io__nl_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_9  = (MR_Box) Stream;
}
  Stream_7 = (MR_Word) (Stream_9);
  mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 10);
}

void MR_CALL 
mercury__io__write_string_3_p_0(
  MR_String Message_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_string_4_p_0(Stream_6, Message_4);
}

void MR_CALL 
mercury__io__write_string_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String Message_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_string_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Message = Message_6 ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_string_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_float_3_p_0(
  MR_Float Val_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_float_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_float_4_p_0(Stream_6, Val_4);
}

void MR_CALL 
mercury__io__write_float_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Float Val_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_float_4_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Val = Val_6 ;
		{

    char buf[MR_SPRINTF_FLOAT_BUF_SIZE];
    MR_sprintf_float(buf, Val);
    if (ML_fprintf(Stream, "%s", buf) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_float_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_uint64_3_p_0(
  uint64_t Val_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_uint64_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_uint64_4_p_0(Stream_6, Val_4);
}

void MR_CALL 
mercury__io__write_uint64_4_p_0(
  MR_Word HeadVar__1_1,
  uint64_t Val_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_uint64_4_p_0

	MercuryFilePtr Stream;
	uint64_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Val = Val_6 ;
		{

    if (ML_fprintf(Stream, "%" PRIu64, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_uint64_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_int64_3_p_0(
  int64_t Val_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_int64_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_int64_4_p_0(Stream_6, Val_4);
}

void MR_CALL 
mercury__io__write_int64_4_p_0(
  MR_Word HeadVar__1_1,
  int64_t Val_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_int64_4_p_0

	MercuryFilePtr Stream;
	int64_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Val = Val_6 ;
		{

    if (ML_fprintf(Stream, "%" PRId64, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_int64_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_uint32_3_p_0(
  uint32_t Val_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_uint32_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_uint32_4_p_0(Stream_6, Val_4);
}

void MR_CALL 
mercury__io__write_uint32_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t Val_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_uint32_4_p_0

	MercuryFilePtr Stream;
	uint32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Val = Val_6 ;
		{

    if (ML_fprintf(Stream, "%" PRIu32, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_uint32_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_int32_3_p_0(
  int32_t Val_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_int32_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_int32_4_p_0(Stream_6, Val_4);
}

void MR_CALL 
mercury__io__write_int32_4_p_0(
  MR_Word HeadVar__1_1,
  int32_t Val_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_int32_4_p_0

	MercuryFilePtr Stream;
	int32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Val = Val_6 ;
		{

    if (ML_fprintf(Stream, "%" PRId32, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_int32_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_uint16_3_p_0(
  uint16_t Val_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_uint16_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_uint16_4_p_0(Stream_6, Val_4);
}

void MR_CALL 
mercury__io__write_uint16_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t Val_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_uint16_4_p_0

	MercuryFilePtr Stream;
	uint16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Val = Val_6 ;
		{

    if (ML_fprintf(Stream, "%" PRIu16, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_uint16_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_int16_3_p_0(
  int16_t Val_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_int16_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_int16_4_p_0(Stream_6, Val_4);
}

void MR_CALL 
mercury__io__write_int16_4_p_0(
  MR_Word HeadVar__1_1,
  int16_t Val_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_int16_4_p_0

	MercuryFilePtr Stream;
	int16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Val = Val_6 ;
		{

    if (ML_fprintf(Stream, "%" PRId16, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_int16_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_uint8_3_p_0(
  uint8_t Val_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_uint8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_uint8_4_p_0(Stream_6, Val_4);
}

void MR_CALL 
mercury__io__write_uint8_4_p_0(
  MR_Word HeadVar__1_1,
  uint8_t Val_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_uint8_4_p_0

	MercuryFilePtr Stream;
	uint8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Val = Val_6 ;
		{

    if (ML_fprintf(Stream, "%" PRIu8, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_uint8_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_int8_3_p_0(
  int8_t Val_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_int8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_int8_4_p_0(Stream_6, Val_4);
}

void MR_CALL 
mercury__io__write_int8_4_p_0(
  MR_Word HeadVar__1_1,
  int8_t Val_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_int8_4_p_0

	MercuryFilePtr Stream;
	int8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Val = Val_6 ;
		{

    if (ML_fprintf(Stream, "%" PRId8, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_int8_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_uint_3_p_0(
  MR_Unsigned Val_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_uint_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_uint_4_p_0(Stream_6, Val_4);
}

void MR_CALL 
mercury__io__write_uint_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned Val_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_uint_4_p_0

	MercuryFilePtr Stream;
	MR_Unsigned Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Val = Val_6 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "u", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_uint_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_int_3_p_0(
  MR_Integer Val_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_int_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_int_4_p_0(Stream_6, Val_4);
}

void MR_CALL 
mercury__io__write_int_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Val_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_int_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Val = Val_6 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_int_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__write_char_3_p_0(
  MR_Char Character_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__write_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__write_char_4_p_0(Stream_6, Character_4);
}

void MR_CALL 
mercury__io__write_char_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Char Character_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_char_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
	Character = Character_6 ;
		{

    Error = 0;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            Error = errno;
        } else if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        // XXX ILSEQ Error if len==0
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__write_char_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error writing to output file: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__read_binary_uint64_be_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint64_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_uint64_be_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_uint64_le_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint64_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_uint64_le_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_uint64_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint64_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #if defined(MR_BIG_ENDIAN)
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__io__read_binary_uint64_be_4_p_0(Stream_5, Result_6);
  else
    mercury__io__read_binary_uint64_le_4_p_0(Stream_5, Result_6);
}

void MR_CALL 
mercury__io__read_binary_uint64_3_p_0(
  MR_Word * Result_4)
{
  MR_bool succeeded;
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint64_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
{
#define MR_PROC_LABEL mercury__io__read_binary_uint64_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #if defined(MR_BIG_ENDIAN)
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__io__read_binary_uint64_be_4_p_0(Stream_6, Result_4);
  else
    mercury__io__read_binary_uint64_le_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_uint64_be_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Word IncompleteBytes_10;
  uint64_t UInt64_11;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint64_be_4_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint64_t UInt64;

	Stream = (MercuryFilePtr)Stream_5 ;
	ByteOrder = (MR_Integer) 0 ;
		{

    ML_do_read_binary_uintN(8, 64, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt64);


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	IncompleteBytes_10  = IncompleteBytes;
	UInt64_11  = UInt64;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOError_17;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (IOError_17));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = MR_box_uint64(UInt64_11);
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_uint64_le_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Word IncompleteBytes_10;
  uint64_t UInt64_11;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint64_le_4_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint64_t UInt64;

	Stream = (MercuryFilePtr)Stream_5 ;
	ByteOrder = (MR_Integer) 1 ;
		{

    ML_do_read_binary_uintN(8, 64, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt64);


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	IncompleteBytes_10  = IncompleteBytes;
	UInt64_11  = UInt64;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOError_17;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (IOError_17));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = MR_box_uint64(UInt64_11);
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_int64_be_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_int64_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_int64_be_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_int64_le_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_int64_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_int64_le_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_int64_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__read_binary_int64_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #if defined(MR_BIG_ENDIAN)
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__io__read_binary_int64_be_4_p_0(Stream_5, Result_6);
  else
    mercury__io__read_binary_int64_le_4_p_0(Stream_5, Result_6);
}

void MR_CALL 
mercury__io__read_binary_int64_3_p_0(
  MR_Word * Result_4)
{
  MR_bool succeeded;
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_int64_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
{
#define MR_PROC_LABEL mercury__io__read_binary_int64_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #if defined(MR_BIG_ENDIAN)
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__io__read_binary_int64_be_4_p_0(Stream_6, Result_4);
  else
    mercury__io__read_binary_int64_le_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_int64_be_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Word IncompleteBytes_10;
  uint64_t UInt64_11;
  int64_t Int64_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int64_be_4_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint64_t UInt64;

	Stream = (MercuryFilePtr)Stream_5 ;
	ByteOrder = (MR_Integer) 0 ;
		{

    ML_do_read_binary_uintN(8, 64, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt64);


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	IncompleteBytes_10  = IncompleteBytes;
	UInt64_11  = UInt64;
}
{
#define MR_PROC_LABEL mercury__io__read_binary_int64_be_4_p_0

	uint64_t U64;
	int64_t I64;

	U64 = UInt64_11 ;
		{

    I64 = (int64_t) U64;


		;}
#undef MR_PROC_LABEL
	Int64_12  = I64;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOError_18;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (IOError_18));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = MR_box_int64(Int64_12);
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_int64_le_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Word IncompleteBytes_10;
  uint64_t UInt64_11;
  int64_t Int64_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int64_le_4_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint64_t UInt64;

	Stream = (MercuryFilePtr)Stream_5 ;
	ByteOrder = (MR_Integer) 1 ;
		{

    ML_do_read_binary_uintN(8, 64, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt64);


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	IncompleteBytes_10  = IncompleteBytes;
	UInt64_11  = UInt64;
}
{
#define MR_PROC_LABEL mercury__io__read_binary_int64_le_4_p_0

	uint64_t U64;
	int64_t I64;

	U64 = UInt64_11 ;
		{

    I64 = (int64_t) U64;


		;}
#undef MR_PROC_LABEL
	Int64_12  = I64;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOError_18;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (IOError_18));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = MR_box_int64(Int64_12);
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_uint32_be_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint32_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_uint32_be_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_uint32_le_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint32_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_uint32_le_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_uint32_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint32_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #if defined(MR_BIG_ENDIAN)
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__io__read_binary_uint32_be_4_p_0(Stream_5, Result_6);
  else
    mercury__io__read_binary_uint32_le_4_p_0(Stream_5, Result_6);
}

void MR_CALL 
mercury__io__read_binary_uint32_3_p_0(
  MR_Word * Result_4)
{
  MR_bool succeeded;
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint32_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
{
#define MR_PROC_LABEL mercury__io__read_binary_uint32_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #if defined(MR_BIG_ENDIAN)
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__io__read_binary_uint32_be_4_p_0(Stream_6, Result_4);
  else
    mercury__io__read_binary_uint32_le_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_uint32_be_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Word IncompleteBytes_10;
  uint32_t UInt32_11;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint32_be_4_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint32_t UInt32;

	Stream = (MercuryFilePtr)Stream_5 ;
	ByteOrder = (MR_Integer) 0 ;
		{

    ML_do_read_binary_uintN(4, 32, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt32);


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	IncompleteBytes_10  = IncompleteBytes;
	UInt32_11  = UInt32;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOError_17;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (IOError_17));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (UInt32_11));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_uint32_le_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Word IncompleteBytes_10;
  uint32_t UInt32_11;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint32_le_4_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint32_t UInt32;

	Stream = (MercuryFilePtr)Stream_5 ;
	ByteOrder = (MR_Integer) 1 ;
		{

    ML_do_read_binary_uintN(4, 32, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt32);


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	IncompleteBytes_10  = IncompleteBytes;
	UInt32_11  = UInt32;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOError_17;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (IOError_17));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (UInt32_11));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_int32_be_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_int32_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_int32_be_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_int32_le_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_int32_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_int32_le_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_int32_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__read_binary_int32_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #if defined(MR_BIG_ENDIAN)
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__io__read_binary_int32_be_4_p_0(Stream_5, Result_6);
  else
    mercury__io__read_binary_int32_le_4_p_0(Stream_5, Result_6);
}

void MR_CALL 
mercury__io__read_binary_int32_3_p_0(
  MR_Word * Result_4)
{
  MR_bool succeeded;
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_int32_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
{
#define MR_PROC_LABEL mercury__io__read_binary_int32_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #if defined(MR_BIG_ENDIAN)
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__io__read_binary_int32_be_4_p_0(Stream_6, Result_4);
  else
    mercury__io__read_binary_int32_le_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_int32_be_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Word IncompleteBytes_10;
  uint32_t UInt32_11;
  int32_t Int32_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int32_be_4_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint32_t UInt32;

	Stream = (MercuryFilePtr)Stream_5 ;
	ByteOrder = (MR_Integer) 0 ;
		{

    ML_do_read_binary_uintN(4, 32, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt32);


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	IncompleteBytes_10  = IncompleteBytes;
	UInt32_11  = UInt32;
}
{
#define MR_PROC_LABEL mercury__io__read_binary_int32_be_4_p_0

	uint32_t U32;
	int32_t I32;

	U32 = UInt32_11 ;
		{

    I32 = U32;


		;}
#undef MR_PROC_LABEL
	Int32_12  = I32;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOError_18;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (IOError_18));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (Int32_12));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_int32_le_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Word IncompleteBytes_10;
  uint32_t UInt32_11;
  int32_t Int32_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int32_le_4_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint32_t UInt32;

	Stream = (MercuryFilePtr)Stream_5 ;
	ByteOrder = (MR_Integer) 1 ;
		{

    ML_do_read_binary_uintN(4, 32, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt32);


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	IncompleteBytes_10  = IncompleteBytes;
	UInt32_11  = UInt32;
}
{
#define MR_PROC_LABEL mercury__io__read_binary_int32_le_4_p_0

	uint32_t U32;
	int32_t I32;

	U32 = UInt32_11 ;
		{

    I32 = U32;


		;}
#undef MR_PROC_LABEL
	Int32_12  = I32;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOError_18;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (IOError_18));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (Int32_12));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_uint16_be_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint16_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_uint16_be_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_uint16_le_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint16_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_uint16_le_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_uint16_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint16_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #if defined(MR_BIG_ENDIAN)
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__io__read_binary_uint16_be_4_p_0(Stream_5, Result_6);
  else
    mercury__io__read_binary_uint16_le_4_p_0(Stream_5, Result_6);
}

void MR_CALL 
mercury__io__read_binary_uint16_3_p_0(
  MR_Word * Result_4)
{
  MR_bool succeeded;
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint16_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
{
#define MR_PROC_LABEL mercury__io__read_binary_uint16_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #if defined(MR_BIG_ENDIAN)
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__io__read_binary_uint16_be_4_p_0(Stream_6, Result_4);
  else
    mercury__io__read_binary_uint16_le_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_uint16_be_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Word IncompleteBytes_10;
  uint16_t UInt16_11;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint16_be_4_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint16_t UInt16;

	Stream = (MercuryFilePtr)Stream_5 ;
	ByteOrder = (MR_Integer) 0 ;
		{

    ML_do_read_binary_uintN(2, 16, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt16);


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	IncompleteBytes_10  = IncompleteBytes;
	UInt16_11  = UInt16;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOError_17;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (IOError_17));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (UInt16_11));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_uint16_le_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Word IncompleteBytes_10;
  uint16_t UInt16_11;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint16_le_4_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint16_t UInt16;

	Stream = (MercuryFilePtr)Stream_5 ;
	ByteOrder = (MR_Integer) 1 ;
		{

    ML_do_read_binary_uintN(2, 16, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt16);


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	IncompleteBytes_10  = IncompleteBytes;
	UInt16_11  = UInt16;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOError_17;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (IOError_17));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (UInt16_11));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_int16_be_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_int16_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_int16_be_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_int16_le_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_int16_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_int16_le_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_int16_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__read_binary_int16_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #if defined(MR_BIG_ENDIAN)
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__io__read_binary_int16_be_4_p_0(Stream_5, Result_6);
  else
    mercury__io__read_binary_int16_le_4_p_0(Stream_5, Result_6);
}

void MR_CALL 
mercury__io__read_binary_int16_3_p_0(
  MR_Word * Result_4)
{
  MR_bool succeeded;
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_int16_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
{
#define MR_PROC_LABEL mercury__io__read_binary_int16_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    #if defined(MR_BIG_ENDIAN)
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__io__read_binary_int16_be_4_p_0(Stream_6, Result_4);
  else
    mercury__io__read_binary_int16_le_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_int16_be_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Word IncompleteBytes_10;
  uint16_t UInt16_11;
  int16_t Int16_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int16_be_4_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint16_t UInt16;

	Stream = (MercuryFilePtr)Stream_5 ;
	ByteOrder = (MR_Integer) 0 ;
		{

    ML_do_read_binary_uintN(2, 16, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt16);


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	IncompleteBytes_10  = IncompleteBytes;
	UInt16_11  = UInt16;
}
{
#define MR_PROC_LABEL mercury__io__read_binary_int16_be_4_p_0

	uint16_t U16;
	int16_t I16;

	U16 = UInt16_11 ;
		{

    I16 = U16;


		;}
#undef MR_PROC_LABEL
	Int16_12  = I16;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOError_18;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (IOError_18));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (Int16_12));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_int16_le_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Word IncompleteBytes_10;
  uint16_t UInt16_11;
  int16_t Int16_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int16_le_4_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint16_t UInt16;

	Stream = (MercuryFilePtr)Stream_5 ;
	ByteOrder = (MR_Integer) 1 ;
		{

    ML_do_read_binary_uintN(2, 16, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt16);


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	IncompleteBytes_10  = IncompleteBytes;
	UInt16_11  = UInt16;
}
{
#define MR_PROC_LABEL mercury__io__read_binary_int16_le_4_p_0

	uint16_t U16;
	int16_t I16;

	U16 = UInt16_11 ;
		{

    I16 = U16;


		;}
#undef MR_PROC_LABEL
	Int16_12  = I16;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_Word IOError_18;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (IOError_18));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (Int16_12));
      }
      break;
  }
}

void MR_CALL 
mercury__io__putback_uint8_4_p_0(
  MR_Word HeadVar__1_1,
  uint8_t UInt8_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word Ok_8;

{
#define MR_PROC_LABEL mercury__io__putback_uint8_4_p_0

	MercuryFilePtr Stream;
	uint8_t UInt8;
	MR_Word Ok;

	Stream = (MercuryFilePtr)Stream_5 ;
	UInt8 = UInt8_6 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, UInt8) == EOF) {
        Ok = MR_FALSE;
    } else {
        Ok = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	Ok_8  = Ok;
}
  switch (Ok_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (&mercury__io_scalar_common_5[2])));
        return;
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

void MR_CALL 
mercury__io__putback_uint8_3_p_0(
  uint8_t UInt8_4)
{
  MR_Box Stream_11;
  MR_Word Ok_12;

{
#define MR_PROC_LABEL mercury__io__putback_uint8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__putback_uint8_3_p_0

	MercuryFilePtr Stream;
	uint8_t UInt8;
	MR_Word Ok;

	Stream = (MercuryFilePtr)Stream_11 ;
	UInt8 = UInt8_4 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, UInt8) == EOF) {
        Ok = MR_FALSE;
    } else {
        Ok = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	Ok_12  = Ok;
}
  switch (Ok_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (&mercury__io_scalar_common_5[2])));
        return;
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

void MR_CALL 
mercury__io__putback_int8_4_p_0(
  MR_Word HeadVar__1_1,
  int8_t Int8_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  uint8_t UInt8_8;
  MR_Word Ok_9;

{
#define MR_PROC_LABEL mercury__io__putback_int8_4_p_0

	int8_t I8;
	uint8_t U8;

	I8 = Int8_6 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	UInt8_8  = U8;
}
{
#define MR_PROC_LABEL mercury__io__putback_int8_4_p_0

	MercuryFilePtr Stream;
	uint8_t UInt8;
	MR_Word Ok;

	Stream = (MercuryFilePtr)Stream_5 ;
	UInt8 = UInt8_8 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, UInt8) == EOF) {
        Ok = MR_FALSE;
    } else {
        Ok = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	Ok_9  = Ok;
}
  switch (Ok_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (&mercury__io_scalar_common_5[1])));
        return;
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

void MR_CALL 
mercury__io__putback_int8_3_p_0(
  int8_t Int8_4)
{
  MR_Box Stream_11;
  uint8_t UInt8_12;
  MR_Word Ok_13;

{
#define MR_PROC_LABEL mercury__io__putback_int8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__putback_int8_3_p_0

	int8_t I8;
	uint8_t U8;

	I8 = Int8_4 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	UInt8_12  = U8;
}
{
#define MR_PROC_LABEL mercury__io__putback_int8_3_p_0

	MercuryFilePtr Stream;
	uint8_t UInt8;
	MR_Word Ok;

	Stream = (MercuryFilePtr)Stream_11 ;
	UInt8 = UInt8_12 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, UInt8) == EOF) {
        Ok = MR_FALSE;
    } else {
        Ok = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	Ok_13  = Ok;
}
  switch (Ok_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (&mercury__io_scalar_common_5[1])));
        return;
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

void MR_CALL 
mercury__io__putback_byte_3_p_0(
  MR_Integer Int_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__putback_byte_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__putback_byte_4_p_0(Stream_6, Int_4);
}

void MR_CALL 
mercury__io__putback_byte_4_p_0(
  MR_Word Stream_5,
  MR_Integer Int_6)
{
  uint8_t UInt8_8;
  MR_Integer Var_11 = (Int_6 & (MR_Integer) 255);
  MR_Box Stream_13;
  MR_Word Ok_14;

{
#define MR_PROC_LABEL mercury__io__putback_byte_4_p_0

	MR_Integer I;
	uint8_t U8;

	I = Var_11 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	UInt8_8  = U8;
}
  Stream_13 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__putback_byte_4_p_0

	MercuryFilePtr Stream;
	uint8_t UInt8;
	MR_Word Ok;

	Stream = (MercuryFilePtr)Stream_13 ;
	UInt8 = UInt8_8 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, UInt8) == EOF) {
        Ok = MR_FALSE;
    } else {
        Ok = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	Ok_14  = Ok;
}
  switch (Ok_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (&mercury__io_scalar_common_5[2])));
        return;
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_uint8_unboxed_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_7,
  uint8_t * UInt8_8)
{
  MR_Box Stream_6 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_10;
  MR_Box Error_11;
  MR_Integer Int_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint8_unboxed_5_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_6 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_10  = ResultCode;
	Error_11  = (MR_Box) Error;
	Int_12  = ByteVal;
}
{
#define MR_PROC_LABEL mercury__io__read_binary_uint8_unboxed_5_p_0

	MR_Integer I;
	uint8_t U8;

	I = Int_12 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	*UInt8_8  = U8;
}
  switch (ResultCode_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_7 = (MR_Word) ((MR_Unsigned) 4U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_18;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_11, (MR_String) "read failed: ", &IOError_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (IOError_18));
        }
      }
      break;
    case (MR_Integer) 0:
      *Result_7 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_uint8_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_uint8_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_uint8_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Integer Int_10;
  uint8_t UInt8_11;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint8_4_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	Int_10  = ByteVal;
}
{
#define MR_PROC_LABEL mercury__io__read_binary_uint8_4_p_0

	MR_Integer I;
	uint8_t U8;

	I = Int_10 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	UInt8_11  = U8;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_18;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (IOError_18));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (UInt8_11));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_int8_unboxed_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_7,
  int8_t * Int8_8)
{
  MR_Box Stream_6 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_10;
  MR_Box Error_11;
  MR_Integer Int_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int8_unboxed_5_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_6 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_10  = ResultCode;
	Error_11  = (MR_Box) Error;
	Int_12  = ByteVal;
}
{
#define MR_PROC_LABEL mercury__io__read_binary_int8_unboxed_5_p_0

	MR_Integer I;
	int8_t I8;

	I = Int_12 ;
		{

    I8 = (int8_t) I;


		;}
#undef MR_PROC_LABEL
	*Int8_8  = I8;
}
  switch (ResultCode_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_7 = (MR_Word) ((MR_Unsigned) 4U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_18;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_11, (MR_String) "read failed: ", &IOError_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (IOError_18));
        }
      }
      break;
    case (MR_Integer) 0:
      *Result_7 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_int8_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_10;

{
#define MR_PROC_LABEL mercury__io__read_binary_int8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_10);
  mercury__io__read_binary_int8_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_int8_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Integer Int_10;
  int8_t Int8_11;

{
#define MR_PROC_LABEL mercury__io__read_binary_int8_4_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	Int_10  = ByteVal;
}
{
#define MR_PROC_LABEL mercury__io__read_binary_int8_4_p_0

	MR_Integer I;
	int8_t I8;

	I = Int_10 ;
		{

    I8 = (int8_t) I;


		;}
#undef MR_PROC_LABEL
	Int8_11  = I8;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_18;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (IOError_18));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (Int8_11));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_byte_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Integer Byte_10;

{
#define MR_PROC_LABEL mercury__io__read_byte_4_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_8  = ResultCode;
	Error_9  = (MR_Box) Error;
	Byte_10  = ByteVal;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_17;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (IOError_17));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Byte_10));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_byte_3_p_0(
  MR_Word * Result_4)
{
  MR_Box Stream_11;
  MR_Word ResultCode_12;
  MR_Box Error_13;
  MR_Integer Byte_14;

{
#define MR_PROC_LABEL mercury__io__read_byte_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__read_byte_3_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_11 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	ResultCode_12  = ResultCode;
	Error_13  = (MR_Box) Error;
	Byte_14  = ByteVal;
}
  switch (ResultCode_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_19;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_13, (MR_String) "read failed: ", &IOError_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_4 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (IOError_19));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Byte_14));
      }
      break;
  }
}

void MR_CALL 
mercury__io__putback_char_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Char Character_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Word Ok_8;

  mercury__io__primitives_read__putback_char_2_5_p_0(Stream_5, Character_6, &Ok_8);
  switch (Ok_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (&mercury__io_scalar_common_5[0])));
        return;
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

void MR_CALL 
mercury__io__putback_char_3_p_0(
  MR_Char Char_4)
{
  MR_Box Stream_11;
  MR_Word Ok_12;

{
#define MR_PROC_LABEL mercury__io__putback_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_11  = (MR_Box) Stream;
}
  mercury__io__primitives_read__putback_char_2_5_p_0(Stream_11, Char_4, &Ok_12);
  switch (Ok_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (&mercury__io_scalar_common_5[0])));
        return;
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_char_unboxed_5_p_0(
  MR_Word Stream_6,
  MR_Word * Result_7,
  MR_Char * Char_8)
{
  MR_Word ResultCode_10;
  MR_Box Error_11;
  MR_Box Var_15 = (MR_Box) (Stream_6);

  mercury__io__primitives_read__read_char_code_2_6_p_0(Var_15, &ResultCode_10, &Error_11, Char_8);
  switch (ResultCode_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_7 = (MR_Word) ((MR_Unsigned) 4U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_16;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_11, (MR_String) "read failed: ", &IOError_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (IOError_16));
        }
      }
      break;
    case (MR_Integer) 0:
      *Result_7 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

void MR_CALL 
mercury__io__read_char_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word ResultCode_8;
  MR_Box Error_9;
  MR_Char Char_10;
  MR_Box Var_15 = (MR_Box) (Stream_5);

  mercury__io__primitives_read__read_char_code_2_6_p_0(Var_15, &ResultCode_8, &Error_9, &Char_10);
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_16;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "read failed: ", &IOError_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (IOError_16));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (Char_10));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_char_3_p_0(
  MR_Word * Result_4)
{
  MR_Box Stream_10;
  MR_Word ResultCode_11;
  MR_Box Error_12;
  MR_Char Char_13;

{
#define MR_PROC_LABEL mercury__io__read_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_10  = (MR_Box) Stream;
}
  mercury__io__primitives_read__read_char_code_2_6_p_0(Stream_10, &ResultCode_11, &Error_12, &Char_13);
  switch (ResultCode_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word IOError_17;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_12, (MR_String) "read failed: ", &IOError_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_4 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (IOError_17));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (Char_13));
      }
      break;
  }
}

void MR_CALL 
mercury__io__set_output_line_number_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer LineNum_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__io__set_output_line_number_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_5 ;
	LineNum = LineNum_6 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__set_output_line_number_3_p_0(
  MR_Integer LineNum_4)
{
  MR_Box Stream_6;

{
#define MR_PROC_LABEL mercury__io__set_output_line_number_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_6  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__set_output_line_number_3_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_6 ;
	LineNum = LineNum_4 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__get_output_line_number_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * LineNum_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__io__get_output_line_number_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	*LineNum_6  = LineNum;
}
}

void MR_CALL 
mercury__io__get_output_line_number_3_p_0(
  MR_Integer * LineNum_4)
{
  MR_Box Stream_6;

{
#define MR_PROC_LABEL mercury__io__get_output_line_number_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_6  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__get_output_line_number_3_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_6 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	*LineNum_4  = LineNum;
}
}

void MR_CALL 
mercury__io__set_line_number_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer LineNum_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__io__set_line_number_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_5 ;
	LineNum = LineNum_6 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__set_line_number_3_p_0(
  MR_Integer LineNum_4)
{
  MR_Box Stream_6;

{
#define MR_PROC_LABEL mercury__io__set_line_number_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_6  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__set_line_number_3_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_6 ;
	LineNum = LineNum_4 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__get_line_number_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * LineNum_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__io__get_line_number_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	*LineNum_6  = LineNum;
}
}

void MR_CALL 
mercury__io__get_line_number_3_p_0(
  MR_Integer * LineNum_4)
{
  MR_Box Stream_6;

{
#define MR_PROC_LABEL mercury__io__get_line_number_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_6  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__get_line_number_3_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_6 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	*LineNum_4  = LineNum;
}
}

void MR_CALL 
mercury__io__binary_output_stream_name_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Name_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

  mercury__io__stream_db__stream_name_4_p_0(Stream_5, Name_6);
}

void MR_CALL 
mercury__io__binary_output_stream_name_3_p_0(
  MR_String * Name_4)
{
  MR_Box Stream_6;

{
#define MR_PROC_LABEL mercury__io__binary_output_stream_name_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_6  = (MR_Box) Stream;
}
  mercury__io__stream_db__stream_name_4_p_0(Stream_6, Name_4);
}

void MR_CALL 
mercury__io__output_stream_name_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Name_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

  mercury__io__stream_db__stream_name_4_p_0(Stream_5, Name_6);
}

void MR_CALL 
mercury__io__output_stream_name_3_p_0(
  MR_String * Name_4)
{
  MR_Box Stream_6;

{
#define MR_PROC_LABEL mercury__io__output_stream_name_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_6  = (MR_Box) Stream;
}
  mercury__io__stream_db__stream_name_4_p_0(Stream_6, Name_4);
}

void MR_CALL 
mercury__io__binary_input_stream_name_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Name_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

  mercury__io__stream_db__stream_name_4_p_0(Stream_5, Name_6);
}

void MR_CALL 
mercury__io__binary_input_stream_name_3_p_0(
  MR_String * Name_4)
{
  MR_Box Stream_6;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_name_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_6  = (MR_Box) Stream;
}
  mercury__io__stream_db__stream_name_4_p_0(Stream_6, Name_4);
}

void MR_CALL 
mercury__io__input_stream_name_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Name_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);

  mercury__io__stream_db__stream_name_4_p_0(Stream_5, Name_6);
}

void MR_CALL 
mercury__io__input_stream_name_3_p_0(
  MR_String * Name_4)
{
  MR_Box Stream_6;

{
#define MR_PROC_LABEL mercury__io__input_stream_name_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_6  = (MR_Box) Stream;
}
  mercury__io__stream_db__stream_name_4_p_0(Stream_6, Name_4);
}

void MR_CALL 
mercury__io__binary_output_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Box Stream_4;

{
#define MR_PROC_LABEL mercury__io__binary_output_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_4  = (MR_Box) Stream;
}
  *HeadVar__1_1 = (MR_Word) (Stream_4);
}

void MR_CALL 
mercury__io__output_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Box Stream_4;

{
#define MR_PROC_LABEL mercury__io__output_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_4  = (MR_Box) Stream;
}
  *HeadVar__1_1 = (MR_Word) (Stream_4);
}

void MR_CALL 
mercury__io__binary_input_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Box Stream_4;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_4  = (MR_Box) Stream;
}
  *HeadVar__1_1 = (MR_Word) (Stream_4);
}

void MR_CALL 
mercury__io__input_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Box Stream_4;

{
#define MR_PROC_LABEL mercury__io__input_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_4  = (MR_Box) Stream;
}
  *HeadVar__1_1 = (MR_Word) (Stream_4);
}

void MR_CALL 
mercury__io__stderr_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Box Stream_4;

{
#define MR_PROC_LABEL mercury__io__stderr_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Stream_4  = (MR_Box) Stream;
}
  *HeadVar__1_1 = (MR_Word) (Stream_4);
}

MR_Word MR_CALL 
mercury__io__stderr_stream_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Box Var_2;

{
#define MR_PROC_LABEL mercury__io__stderr_stream_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Var_2  = (MR_Box) Stream;
}
  HeadVar__1_1 = (MR_Word) (Var_2);
  return HeadVar__1_1;
}

void MR_CALL 
mercury__io__stdout_binary_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Box Stream_4;

{
#define MR_PROC_LABEL mercury__io__stdout_binary_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout_binary;


		;}
#undef MR_PROC_LABEL
	Stream_4  = (MR_Box) Stream;
}
  *HeadVar__1_1 = (MR_Word) (Stream_4);
}

void MR_CALL 
mercury__io__stdout_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Box Stream_4;

{
#define MR_PROC_LABEL mercury__io__stdout_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	Stream_4  = (MR_Box) Stream;
}
  *HeadVar__1_1 = (MR_Word) (Stream_4);
}

MR_Word MR_CALL 
mercury__io__stdout_stream_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Box Var_2;

{
#define MR_PROC_LABEL mercury__io__stdout_stream_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	Var_2  = (MR_Box) Stream;
}
  HeadVar__1_1 = (MR_Word) (Var_2);
  return HeadVar__1_1;
}

void MR_CALL 
mercury__io__stdin_binary_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Box Stream_4;

{
#define MR_PROC_LABEL mercury__io__stdin_binary_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin_binary;


		;}
#undef MR_PROC_LABEL
	Stream_4  = (MR_Box) Stream;
}
  *HeadVar__1_1 = (MR_Word) (Stream_4);
}

void MR_CALL 
mercury__io__stdin_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
  MR_Box Stream_4;

{
#define MR_PROC_LABEL mercury__io__stdin_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	Stream_4  = (MR_Box) Stream;
}
  *HeadVar__1_1 = (MR_Word) (Stream_4);
}

MR_Word MR_CALL 
mercury__io__stdin_stream_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Box Var_2;

{
#define MR_PROC_LABEL mercury__io__stdin_stream_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	Var_2  = (MR_Box) Stream;
}
  HeadVar__1_1 = (MR_Word) (Var_2);
  return HeadVar__1_1;
}

void MR_CALL 
mercury__io__binary_output_stream_offset64_4_p_0(
  MR_Word HeadVar__1_1,
  int64_t * Offset_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__binary_output_stream_offset64_4_p_0

	MercuryFilePtr Stream;
	int64_t Offset;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

    // XXX should check if the stream is tellable
    if (MR_IS_FILE_STREAM(*Stream)) {
        Offset = MR_ftell(MR_file(*Stream));
        if (Offset < 0) {
            Error = errno;
        } else {
            Error = 0;
        }
    } else {
        Error = EINVAL;
    }


		;}
#undef MR_PROC_LABEL
	*Offset_6  = Offset;
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__binary_output_stream_offset64_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error getting file offset: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__binary_output_stream_offset_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Offset_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  int64_t Offset64_8;
  MR_Box Error_9;
  MR_Integer OffsetPrime_10;

{
#define MR_PROC_LABEL mercury__io__binary_output_stream_offset_4_p_0

	MercuryFilePtr Stream;
	int64_t Offset;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

    // XXX should check if the stream is tellable
    if (MR_IS_FILE_STREAM(*Stream)) {
        Offset = MR_ftell(MR_file(*Stream));
        if (Offset < 0) {
            Error = errno;
        } else {
            Error = 0;
        }
    } else {
        Error = EINVAL;
    }


		;}
#undef MR_PROC_LABEL
	Offset64_8  = Offset;
	Error_9  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__binary_output_stream_offset_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_9 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_17;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "error getting file offset: ", &Var_17);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_17)));
      return;
    }
  }
  succeeded = mercury__int64__to_int_2_p_0(Offset64_8, &OffsetPrime_10);
  if (succeeded)
    *Offset_6 = OffsetPrime_10;
  else
    {
      mercury__require__error_1_p_0((MR_String) "io.binary_output_stream_offset: offset exceeds range of an int");
      return;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_offset64_4_p_0(
  MR_Word HeadVar__1_1,
  int64_t * Offset_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_offset64_4_p_0

	MercuryFilePtr Stream;
	int64_t Offset;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

    // XXX should check if the stream is tellable
    if (MR_IS_FILE_STREAM(*Stream)) {
        Offset = MR_ftell(MR_file(*Stream));
        if (Offset < 0) {
            Error = errno;
        } else {
            Error = 0;
        }
    } else {
        Error = EINVAL;
    }


		;}
#undef MR_PROC_LABEL
	*Offset_6  = Offset;
	Error_8  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_offset64_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_8 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_13;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_8, (MR_String) "error getting file offset: ", &Var_13);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_13)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_offset_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Offset_6)
{
  MR_bool succeeded;
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  int64_t Offset64_8;
  MR_Box Error_9;
  MR_Integer OffsetPrime_10;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_offset_4_p_0

	MercuryFilePtr Stream;
	int64_t Offset;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

    // XXX should check if the stream is tellable
    if (MR_IS_FILE_STREAM(*Stream)) {
        Offset = MR_ftell(MR_file(*Stream));
        if (Offset < 0) {
            Error = errno;
        } else {
            Error = 0;
        }
    } else {
        Error = EINVAL;
    }


		;}
#undef MR_PROC_LABEL
	Offset64_8  = Offset;
	Error_9  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_offset_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_9 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_17;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "error getting file offset: ", &Var_17);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_17)));
      return;
    }
  }
  succeeded = mercury__int64__to_int_2_p_0(Offset64_8, &OffsetPrime_10);
  if (succeeded)
    *Offset_6 = OffsetPrime_10;
  else
    {
      mercury__require__error_1_p_0((MR_String) "io.binary_input_stream_offset: offset exceeds range of an int");
      return;
    }
}

void MR_CALL 
mercury__io__seek_binary_output64_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Whence_7,
  int64_t Offset_8)
{
  MR_bool succeeded;
  MR_Box Stream_6 = (MR_Box) (HeadVar__1_1);
  MR_Integer Flag_10;
  MR_Box Error_11;

  mercury__io__stream_ops__whence_to_int_2_p_0(Whence_7, &Flag_10);
{
#define MR_PROC_LABEL mercury__io__seek_binary_output64_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	int64_t Off;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_6 ;
	Flag = Flag_10 ;
	Off = Offset_8 ;
		{

    static const int seek_flags[] = { SEEK_SET, SEEK_CUR, SEEK_END };

    // XXX check if the stream is seekable.
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (MR_fseek(MR_file(*Stream), Off, seek_flags[Flag]) < 0) {
            Error = errno;
        } else {
            Error = 0;
        }
    } else {
        Error = EINVAL;
    }


		;}
#undef MR_PROC_LABEL
	Error_11  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__seek_binary_output64_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_11 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_16;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_11, (MR_String) "error seeking in file: ", &Var_16);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_16)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__seek_binary_output_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Whence_7,
  MR_Integer Offset_8)
{
  MR_bool succeeded;
  MR_Box Stream_6 = (MR_Box) (HeadVar__1_1);
  MR_Integer Flag_10;
  MR_Box Error_11;
  int64_t Var_14;

  mercury__io__stream_ops__whence_to_int_2_p_0(Whence_7, &Flag_10);
{
#define MR_PROC_LABEL mercury__io__seek_binary_output_5_p_0

	MR_Integer I;
	int64_t I64;

	I = Offset_8 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_14  = I64;
}
{
#define MR_PROC_LABEL mercury__io__seek_binary_output_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	int64_t Off;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_6 ;
	Flag = Flag_10 ;
	Off = Var_14 ;
		{

    static const int seek_flags[] = { SEEK_SET, SEEK_CUR, SEEK_END };

    // XXX check if the stream is seekable.
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (MR_fseek(MR_file(*Stream), Off, seek_flags[Flag]) < 0) {
            Error = errno;
        } else {
            Error = 0;
        }
    } else {
        Error = EINVAL;
    }


		;}
#undef MR_PROC_LABEL
	Error_11  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__seek_binary_output_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_11 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_17;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_11, (MR_String) "error seeking in file: ", &Var_17);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_17)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__seek_binary_input64_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Whence_7,
  int64_t Offset_8)
{
  MR_bool succeeded;
  MR_Box Stream_6 = (MR_Box) (HeadVar__1_1);
  MR_Integer Flag_10;
  MR_Box Error_11;

  mercury__io__stream_ops__whence_to_int_2_p_0(Whence_7, &Flag_10);
{
#define MR_PROC_LABEL mercury__io__seek_binary_input64_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	int64_t Off;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_6 ;
	Flag = Flag_10 ;
	Off = Offset_8 ;
		{

    static const int seek_flags[] = { SEEK_SET, SEEK_CUR, SEEK_END };

    // XXX check if the stream is seekable.
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (MR_fseek(MR_file(*Stream), Off, seek_flags[Flag]) < 0) {
            Error = errno;
        } else {
            Error = 0;
        }
    } else {
        Error = EINVAL;
    }


		;}
#undef MR_PROC_LABEL
	Error_11  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__seek_binary_input64_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_11 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_16;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_11, (MR_String) "error seeking in file: ", &Var_16);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_16)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__seek_binary_input_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Whence_7,
  MR_Integer Offset_8)
{
  MR_bool succeeded;
  MR_Box Stream_6 = (MR_Box) (HeadVar__1_1);
  MR_Integer Flag_10;
  MR_Box Error_11;
  int64_t Var_14;

  mercury__io__stream_ops__whence_to_int_2_p_0(Whence_7, &Flag_10);
{
#define MR_PROC_LABEL mercury__io__seek_binary_input_5_p_0

	MR_Integer I;
	int64_t I64;

	I = Offset_8 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_14  = I64;
}
{
#define MR_PROC_LABEL mercury__io__seek_binary_input_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	int64_t Off;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_6 ;
	Flag = Flag_10 ;
	Off = Var_14 ;
		{

    static const int seek_flags[] = { SEEK_SET, SEEK_CUR, SEEK_END };

    // XXX check if the stream is seekable.
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (MR_fseek(MR_file(*Stream), Off, seek_flags[Flag]) < 0) {
            Error = errno;
        } else {
            Error = 0;
        }
    } else {
        Error = EINVAL;
    }


		;}
#undef MR_PROC_LABEL
	Error_11  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__seek_binary_input_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_11 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_17;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_11, (MR_String) "error seeking in file: ", &Var_17);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_17)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__set_binary_output_stream_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_Box NewStream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box OutStream_6;

{
#define MR_PROC_LABEL mercury__io__set_binary_output_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_5 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_6  = (MR_Box) OutStream;
}
  *HeadVar__2_2 = (MR_Word) (OutStream_6);
}

void MR_CALL 
mercury__io__set_output_stream_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_Box NewStream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box OutStream_6;

{
#define MR_PROC_LABEL mercury__io__set_output_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_5 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_6  = (MR_Box) OutStream;
}
  *HeadVar__2_2 = (MR_Word) (OutStream_6);
}

void MR_CALL 
mercury__io__set_binary_input_stream_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_Box NewStream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box OutStream_6;

{
#define MR_PROC_LABEL mercury__io__set_binary_input_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_5 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	OutStream_6  = (MR_Box) OutStream;
}
  *HeadVar__2_2 = (MR_Word) (OutStream_6);
}

void MR_CALL 
mercury__io__set_input_stream_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_Box NewStream_5 = (MR_Box) (HeadVar__1_1);
  MR_Box OutStream_6;

{
#define MR_PROC_LABEL mercury__io__set_input_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_5 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	OutStream_6  = (MR_Box) OutStream;
}
  *HeadVar__2_2 = (MR_Word) (OutStream_6);
}

void MR_CALL 
mercury__io__close_binary_output_3_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Box Stream_4 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_6;

  mercury__io__stream_db__maybe_delete_stream_info_3_p_0(Stream_4);
{
#define MR_PROC_LABEL mercury__io__close_binary_output_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_4 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_6  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__close_binary_output_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_6 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_12;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_6, (MR_String) "error closing file: ", &Var_12);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_12)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__close_output_3_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Box Stream_4 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_6;

  mercury__io__stream_db__maybe_delete_stream_info_3_p_0(Stream_4);
{
#define MR_PROC_LABEL mercury__io__close_output_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_4 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_6  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__close_output_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_6 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_12;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_6, (MR_String) "error closing file: ", &Var_12);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_12)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__close_binary_input_3_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Box Stream_4 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_6;

  mercury__io__stream_db__maybe_delete_stream_info_3_p_0(Stream_4);
{
#define MR_PROC_LABEL mercury__io__close_binary_input_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_4 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_6  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__close_binary_input_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_6 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_12;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_6, (MR_String) "error closing file: ", &Var_12);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_12)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__close_input_3_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Box Stream_4 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_6;

  mercury__io__stream_db__maybe_delete_stream_info_3_p_0(Stream_4);
{
#define MR_PROC_LABEL mercury__io__close_input_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_4 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_6  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__close_input_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_6 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_12;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_6, (MR_String) "error closing file: ", &Var_12);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_12)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__open_binary_append_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Integer OpenCount_8;
  MR_Box NewStream_9;
  MR_Box Error_10;
  MR_Word MaybeIOError_11;

{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName = FileName_5 ;
	Mode = (MR_String) "ab" ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        StreamId = mercury_next_stream_id();
        Error = 0;
    } else {
        StreamId = -1;
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	OpenCount_8  = StreamId;
	NewStream_9  = (MR_Box) Stream;
	Error_10  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_10 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    MaybeIOError_11 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_24;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_10, (MR_String) "can\'t append to file: ", &Var_24);
    {
      MaybeIOError_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIOError_11, 0) = ((MR_Box) (Var_24));
    }
  }
  if ((MaybeIOError_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word StreamInfo_13;
    MR_Word Var_20 = (MR_Word) (NewStream_9);
    MR_Word Var_23;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (FileName_5));
    }
    {
      StreamInfo_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, StreamInfo_13, 0) = ((MR_Box) (OpenCount_8));
      MR_hl_field(0, StreamInfo_13, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(0, StreamInfo_13, 2) = ((MR_Box) (Var_23));
    }
    mercury__io__stream_db__insert_stream_info_4_p_0(NewStream_9, StreamInfo_13);
  }
  else
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_11, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IOError_12));
    }
  }
}

void MR_CALL 
mercury__io__open_append_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Integer OpenCount_8;
  MR_Box NewStream_9;
  MR_Box Error_10;
  MR_Word MaybeIOError_11;

{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName = FileName_5 ;
	Mode = (MR_String) "a" ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        StreamId = mercury_next_stream_id();
        Error = 0;
    } else {
        StreamId = -1;
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	OpenCount_8  = StreamId;
	NewStream_9  = (MR_Box) Stream;
	Error_10  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_10 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    MaybeIOError_11 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_24;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_10, (MR_String) "can\'t append to file: ", &Var_24);
    {
      MaybeIOError_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIOError_11, 0) = ((MR_Box) (Var_24));
    }
  }
  if ((MaybeIOError_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word StreamInfo_13;
    MR_Word Var_20 = (MR_Word) (NewStream_9);
    MR_Word Var_23;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (FileName_5));
    }
    {
      StreamInfo_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, StreamInfo_13, 0) = ((MR_Box) (OpenCount_8));
      MR_hl_field(0, StreamInfo_13, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(0, StreamInfo_13, 2) = ((MR_Box) (Var_23));
    }
    mercury__io__stream_db__insert_stream_info_4_p_0(NewStream_9, StreamInfo_13);
  }
  else
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_11, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IOError_12));
    }
  }
}

void MR_CALL 
mercury__io__open_binary_output_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Integer OpenCount_8;
  MR_Box NewStream_9;
  MR_Box Error_10;
  MR_Word MaybeIOError_11;

{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName = FileName_5 ;
	Mode = (MR_String) "wb" ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        StreamId = mercury_next_stream_id();
        Error = 0;
    } else {
        StreamId = -1;
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	OpenCount_8  = StreamId;
	NewStream_9  = (MR_Box) Stream;
	Error_10  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_10 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    MaybeIOError_11 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_24;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_10, (MR_String) "can\'t open output file: ", &Var_24);
    {
      MaybeIOError_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIOError_11, 0) = ((MR_Box) (Var_24));
    }
  }
  if ((MaybeIOError_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word StreamInfo_13;
    MR_Word Var_20 = (MR_Word) (NewStream_9);
    MR_Word Var_23;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (FileName_5));
    }
    {
      StreamInfo_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, StreamInfo_13, 0) = ((MR_Box) (OpenCount_8));
      MR_hl_field(0, StreamInfo_13, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(0, StreamInfo_13, 2) = ((MR_Box) (Var_23));
    }
    mercury__io__stream_db__insert_stream_info_4_p_0(NewStream_9, StreamInfo_13);
  }
  else
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_11, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IOError_12));
    }
  }
}

void MR_CALL 
mercury__io__open_output_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Integer OpenCount_8;
  MR_Box NewStream_9;
  MR_Box Error_10;
  MR_Word MaybeIOError_11;

{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName = FileName_5 ;
	Mode = (MR_String) "w" ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        StreamId = mercury_next_stream_id();
        Error = 0;
    } else {
        StreamId = -1;
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	OpenCount_8  = StreamId;
	NewStream_9  = (MR_Box) Stream;
	Error_10  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_10 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    MaybeIOError_11 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_24;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_10, (MR_String) "can\'t open output file: ", &Var_24);
    {
      MaybeIOError_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIOError_11, 0) = ((MR_Box) (Var_24));
    }
  }
  if ((MaybeIOError_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word StreamInfo_13;
    MR_Word Var_20 = (MR_Word) (NewStream_9);
    MR_Word Var_23;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (FileName_5));
    }
    {
      StreamInfo_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, StreamInfo_13, 0) = ((MR_Box) (OpenCount_8));
      MR_hl_field(0, StreamInfo_13, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(0, StreamInfo_13, 2) = ((MR_Box) (Var_23));
    }
    mercury__io__stream_db__insert_stream_info_4_p_0(NewStream_9, StreamInfo_13);
  }
  else
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_11, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IOError_12));
    }
  }
}

void MR_CALL 
mercury__io__open_binary_input_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Integer OpenCount_8;
  MR_Box NewStream_9;
  MR_Box Error_10;
  MR_Word MaybeIOError_11;

{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName = FileName_5 ;
	Mode = (MR_String) "rb" ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        StreamId = mercury_next_stream_id();
        Error = 0;
    } else {
        StreamId = -1;
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	OpenCount_8  = StreamId;
	NewStream_9  = (MR_Box) Stream;
	Error_10  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_10 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    MaybeIOError_11 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_24;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_10, (MR_String) "can\'t open input file: ", &Var_24);
    {
      MaybeIOError_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIOError_11, 0) = ((MR_Box) (Var_24));
    }
  }
  if ((MaybeIOError_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word StreamInfo_13;
    MR_Word Var_20 = (MR_Word) (NewStream_9);
    MR_Word Var_23;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (FileName_5));
    }
    {
      StreamInfo_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, StreamInfo_13, 0) = ((MR_Box) (OpenCount_8));
      MR_hl_field(0, StreamInfo_13, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(0, StreamInfo_13, 2) = ((MR_Box) (Var_23));
    }
    mercury__io__stream_db__insert_stream_info_4_p_0(NewStream_9, StreamInfo_13);
  }
  else
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_11, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IOError_12));
    }
  }
}

void MR_CALL 
mercury__io__open_input_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Integer OpenCount_8;
  MR_Box NewStream_9;
  MR_Box Error_10;
  MR_Word MaybeIOError_11;

{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName = FileName_5 ;
	Mode = (MR_String) "r" ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        StreamId = mercury_next_stream_id();
        Error = 0;
    } else {
        StreamId = -1;
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	OpenCount_8  = StreamId;
	NewStream_9  = (MR_Box) Stream;
	Error_10  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_10 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    MaybeIOError_11 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_24;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_10, (MR_String) "can\'t open input file: ", &Var_24);
    {
      MaybeIOError_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIOError_11, 0) = ((MR_Box) (Var_24));
    }
  }
  if ((MaybeIOError_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word StreamInfo_13;
    MR_Word Var_20 = (MR_Word) (NewStream_9);
    MR_Word Var_23;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (FileName_5));
    }
    {
      StreamInfo_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, StreamInfo_13, 0) = ((MR_Box) (OpenCount_8));
      MR_hl_field(0, StreamInfo_13, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(0, StreamInfo_13, 2) = ((MR_Box) (Var_23));
    }
    mercury__io__stream_db__insert_stream_info_4_p_0(NewStream_9, StreamInfo_13);
  }
  else
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_11, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IOError_12));
    }
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____access_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____access_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____access_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____access_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____binary_input_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____binary_input_stream_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____binary_input_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____binary_input_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____binary_output_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____binary_output_stream_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____binary_output_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____binary_output_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____byte_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____byte_order_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____byte_order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____byte_order_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____chunk_inner_res_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____chunk_inner_res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____chunk_inner_res_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res0_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____chunk_inner_res0_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____chunk_inner_res0_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____chunk_inner_res0_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____environment_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____environment_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____environment_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____environment_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____file_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____file_id_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____file_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____file_id_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____file_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____file_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____file_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____file_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____input_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____input_stream_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____input_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____input_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____io_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____io_0_0();
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____io_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____io_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____maybe_incomplete_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____maybe_incomplete_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____maybe_incomplete_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____maybe_incomplete_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____maybe_incomplete_result_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____maybe_incomplete_result_code_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____maybe_incomplete_result_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____maybe_incomplete_result_code_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____maybe_partial_res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____maybe_partial_res_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____maybe_partial_res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____maybe_partial_res_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____maybe_partial_res_2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____maybe_partial_res_2_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____maybe_partial_res_2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____maybe_partial_res_2_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____output_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____output_stream_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____output_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____output_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____posn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____posn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____posn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____posn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____read_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____read_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____read_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____read_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____res_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____res_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____res_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____res_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____res_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____res_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____result_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____result_code_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____result_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____result_code_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____state_0_0();
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____state_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____stream_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____stream_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____stream_id_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____stream_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____stream_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____system_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____system_error_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____system_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____system_error_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____system_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____system_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____system_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____system_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____text_input_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____text_input_stream_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____text_input_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____text_input_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____text_output_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____text_output_stream_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____text_output_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____text_output_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io____Unify____whence_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io____Unify____whence_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io____Compare____whence_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io____Compare____whence_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((uint8_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((int8_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint64__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint64__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), MR_unbox_uint64(wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((uint32_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((uint16_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((uint8_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int64__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int64__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), MR_unbox_int64(wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((int32_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((int16_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((int8_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), MR_unbox_float(wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__text_output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Char) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__unboxed_reader____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;
  uint8_t conv0_HeadVar__3_3;

  mercury__io__ClassMethod_for_stream__unboxed_reader____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  *wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__unboxed_reader____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;
  int8_t conv0_HeadVar__3_3;

  mercury__io__ClassMethod_for_stream__unboxed_reader____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  *wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__unboxed_reader____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;
  MR_Char conv0_HeadVar__3_3;

  mercury__io__ClassMethod_for_stream__unboxed_reader____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  *wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__text_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__stream____io__text_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__text_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__stream____io__text_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek64_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek64_5_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), MR_unbox_int64(wrapper_arg_3));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek64_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek64_5_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), MR_unbox_int64(wrapper_arg_3));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__reader____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((uint8_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((int8_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__putback____io__text_input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Char) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__text_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__output____io__text_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__text_output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__line_oriented____io__text_output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__text_output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__line_oriented____io__text_output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__text_input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__line_oriented____io__text_input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__text_input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__line_oriented____io__text_input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
}

static MR_Box MR_CALL 
mercury__io__ClassMethod_for_stream__error____io__error__arity0______stream__error_message_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__io__ClassMethod_for_stream__error____io__error__arity0______stream__error_message_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void mercury__io__init(void)
{
}

void mercury__io__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_access_type_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_binary_input_stream_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_binary_output_stream_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_byte_order_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_chunk_inner_res_1);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_chunk_inner_res0_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_environment_var_map_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_error_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_file_id_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_file_type_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_input_stream_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_io_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_maybe_incomplete_result_1);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_maybe_incomplete_result_code_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_maybe_partial_res_1);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_maybe_partial_res_2_2);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_output_stream_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_posn_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_read_result_1);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_res_1);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_res_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_result_1);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_result_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_result_code_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_state_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_stream_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_stream_id_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_system_error_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_system_result_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_text_input_stream_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_text_output_stream_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_whence_0);
}

void mercury__io__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__io__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module io.
