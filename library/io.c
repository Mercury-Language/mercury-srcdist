/*
** Automatically generated from `io.m'
** by the Mercury compiler,
** version rotd-2016-05-13
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


/* :- module io. */
/* :- implementation. */

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
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"











static const MR_VA_PseudoTypeInfo_Struct2 mercury__io____vpti_pred_2__plain_univ__type_ctor_info_univ_0__plain_univ__type_ctor_info_univ_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_access_type_0_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_access_type_0_1;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_access_type_0_2;

static const MR_EnumFunctorDescPtr mercury__io__io__enum_value_ordered_access_type_0[3];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_access_type_0[3];

static const MR_Integer mercury__io__io__functor_number_map_access_type_0[3];

static const MR_Integer mercury__io__io__functor_number_map_binary_input_stream_0[1];

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_binary_input_stream_0;

static const MR_Integer mercury__io__io__functor_number_map_binary_output_stream_0[1];

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_binary_output_stream_0;

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

static const MR_Integer mercury__io__io__functor_number_map_error_0[1];

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_error_0;

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

static const MR_EnumFunctorDescPtr mercury__io__io__enum_value_ordered_file_type_0[11];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_file_type_0[11];

static const MR_Integer mercury__io__io__functor_number_map_file_type_0[11];

static const MR_Integer mercury__io__io__functor_number_map_input_stream_0[1];

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_input_stream_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_partial_res_1_0[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_partial_res_1_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_partial_res_1_1[2];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_partial_res_1_1;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_1_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_1_1[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_maybe_partial_res_1[2];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_maybe_partial_res_1[2];

static const MR_Integer mercury__io__io__functor_number_map_maybe_partial_res_1[2];

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_stream_info_0_0[4];

static const MR_ConstString mercury__io__io__field_names_maybe_stream_info_0_0[4];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_stream_info_0_0;

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_stream_info_0_1;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_stream_info_0_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_stream_info_0_1[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_maybe_stream_info_0[2];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_maybe_stream_info_0[2];

static const MR_Integer mercury__io__io__functor_number_map_maybe_stream_info_0[2];

static const MR_Integer mercury__io__io__functor_number_map_output_stream_0[1];

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_output_stream_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_posn_0_0[3];

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

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_stream_content_0_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_stream_content_0_1;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_stream_content_0_2;

static const MR_EnumFunctorDescPtr mercury__io__io__enum_value_ordered_stream_content_0[3];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_stream_content_0[3];

static const MR_Integer mercury__io__io__functor_number_map_stream_content_0[3];

static const MR_FA_TypeInfo_Struct2 mercury__io__tree234__ti_tree234_2builtin__type_ctor_info_int_0io__type_ctor_info_stream_info_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_stream_info_0_0[4];

static const MR_ConstString mercury__io__io__field_names_stream_info_0_0[4];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_stream_info_0_0;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_stream_info_0_0[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_stream_info_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_stream_info_0[1];

static const MR_Integer mercury__io__io__functor_number_map_stream_info_0[1];

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_stream_mode_0_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_stream_mode_0_1;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_stream_mode_0_2;

static const MR_EnumFunctorDescPtr mercury__io__io__enum_value_ordered_stream_mode_0[3];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_stream_mode_0[3];

static const MR_Integer mercury__io__io__functor_number_map_stream_mode_0[3];

static const MR_PseudoTypeInfo mercury__io__io__field_types_stream_source_0_0[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_stream_source_0_0;

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_stream_source_0_1;

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_stream_source_0_2;

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_stream_source_0_3;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_stream_source_0_0[3];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_stream_source_0_1[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_stream_source_0[2];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_stream_source_0[4];

static const MR_Integer mercury__io__io__functor_number_map_stream_source_0[4];

static const MR_PseudoTypeInfo mercury__io__io__field_types_system_result_0_0[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_system_result_0_0;

static const MR_PseudoTypeInfo mercury__io__io__field_types_system_result_0_1[1];

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_system_result_0_1;

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_system_result_0_0[1];

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_system_result_0_1[1];

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_system_result_0[2];

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_system_result_0[2];

static const MR_Integer mercury__io__io__functor_number_map_system_result_0[2];

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_1;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_2;

static const MR_EnumFunctorDescPtr mercury__io__io__enum_value_ordered_whence_0[3];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_whence_0[3];

static const MR_Integer mercury__io__io__functor_number_map_whence_0[3];

static MR_bool MR_CALL 
mercury__io____Unify____access_type_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____access_type_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____binary_input_stream_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____binary_input_stream_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____binary_output_stream_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____binary_output_stream_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____buffer_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____buffer_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static void MR_CALL 
mercury__io____Compare____chunk_inner_res_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res0_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____chunk_inner_res0_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____error_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____error_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____file_id_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____file_id_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____file_type_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____file_type_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____input_stream_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____input_stream_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____io_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____io_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____maybe_partial_res_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static void MR_CALL 
mercury__io____Compare____maybe_partial_res_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__io____Unify____maybe_stream_info_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____maybe_stream_info_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____output_stream_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____output_stream_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____poly_type_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____poly_type_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____posn_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____posn_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____read_result_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static void MR_CALL 
mercury__io____Compare____read_result_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__io____Unify____res_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static void MR_CALL 
mercury__io____Compare____res_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__io____Unify____res_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____res_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____result_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static void MR_CALL 
mercury__io____Compare____result_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__io____Unify____result_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____result_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____state_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____state_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____stream_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____stream_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____stream_content_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____stream_content_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____stream_db_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____stream_db_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____stream_id_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____stream_id_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____stream_info_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____stream_info_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____stream_mode_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____stream_mode_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____stream_source_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____stream_source_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____system_error_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____system_error_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____system_result_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____system_result_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____text_input_stream_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____text_input_stream_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____text_output_stream_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____text_output_stream_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____whence_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____whence_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4,
  MR_Box * mercury__io__wrapper_arg_5);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4,
  MR_Box * mercury__io__wrapper_arg_5);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box * mercury__io__wrapper_arg_3);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box * mercury__io__wrapper_arg_3);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4);

static MR_Box MR_CALL 
mercury__io__ClassMethod_for_stream__error____io__error__arity0______stream__error_message_1_1_f_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__bulk_reader____io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0______stream__bulk_get_9_9_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4,
  MR_Box * mercury__io__wrapper_arg_5,
  MR_Box * mercury__io__wrapper_arg_6,
  MR_Box * mercury__io__wrapper_arg_7,
  MR_Box mercury__io__wrapper_arg_8,
  MR_Box * mercury__io__wrapper_arg_9);

static MR_Integer MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_100_105_114_101_99_116_111_114_121_95_101_110_116_114_121_95_95_91_51_44_32_53_93_95_48_8_p_0(
  MR_String mercury__io__DirName_9,
  MR_String mercury__io__FileName_10,
  MR_Word * mercury__io__Continue_12,
  MR_Word * mercury__io__Res_14);

static void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_98_105_110_97_114_121_95_102_105_108_101_95_97_115_95_98_105_116_109_97_112_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_Integer mercury__io__BufferSize_9,
  MR_Word * mercury__io__Res_10,
  MR_Word mercury__io__STATE_VARIABLE_BMs_0_17,
  MR_Word * mercury__io__STATE_VARIABLE_BMs_18);

static void MR_CALL 
mercury__io__foldl2__ho6_6_p_in__dir_0_1(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4,
  MR_Box mercury__io__wrapper_arg_5,
  MR_Box * mercury__io__wrapper_arg_6,
  MR_Box mercury__io__wrapper_arg_7,
  MR_Box * mercury__io__wrapper_arg_8);

static void MR_CALL 
mercury__io__foldl2__ho6_6_p_in__dir_0(
  MR_String mercury__io__V_8_8,
  MR_Word mercury__io__V_9_9,
  MR_Word * mercury__io__V_10_10);

static void MR_CALL 
mercury__io__IntroducedFrom__pred__update_globals__5530__1_3_p_0(
  MR_Word mercury__io__UpdatePred_4,
  MR_Word mercury__io__Globals0_6,
  MR_Word * mercury__io__LambdaHeadVar__1_16);

static void MR_CALL 
mercury__io__read_symlink_2_6_p_0(
  MR_String mercury__io__FileName_1,
  MR_String * mercury__io__TargetFileName_2,
  MR_Integer * mercury__io__Status_3,
  MR_Box * mercury__io__Error_4);

static void MR_CALL 
mercury__io__make_symlink_2_5_p_0(
  MR_String mercury__io__FileName_1,
  MR_String mercury__io__LinkFileName_2,
  MR_Integer * mercury__io__Status_3);

static void MR_CALL 
mercury__io__remove_directory_entry_8_p_0(
  MR_String mercury__io__DirName_9,
  MR_String mercury__io__FileName_10,
  MR_Word mercury__io___FileType_11,
  MR_Word * mercury__io__Continue_12,
  MR_Word mercury__io__HeadVar__5_13,
  MR_Word * mercury__io__Res_14);

static void MR_CALL 
mercury__io__decode_system_command_exit_code_5_p_0(
  MR_Integer mercury__io__Status0_1,
  MR_Word * mercury__io__Exited_2,
  MR_Integer * mercury__io__Status_3,
  MR_Word * mercury__io__Signalled_4,
  MR_Integer * mercury__io__Signal_5);

static void MR_CALL 
mercury__io__do_open_text_7_p_0(
  MR_String mercury__io__FileName_1,
  MR_String mercury__io__Mode_2,
  MR_Integer * mercury__io__ResultCode_3,
  MR_Integer * mercury__io__StreamId_4,
  MR_Box * mercury__io__Stream_5);

static void MR_CALL 
mercury__io__do_open_binary_7_p_0(
  MR_String mercury__io__FileName_1,
  MR_String mercury__io__Mode_2,
  MR_Integer * mercury__io__ResultCode_3,
  MR_Integer * mercury__io__StreamId_4,
  MR_Box * mercury__io__Stream_5);

static void MR_CALL 
mercury__io__throw_io_error_1_p_0(
  MR_String mercury__io__Message_2);

static void MR_CALL 
mercury__io__get_io_output_stream_type_3_p_0(
  MR_Word * mercury__io__Type_4);

static void MR_CALL 
mercury__io__get_io_input_stream_type_3_p_0(
  MR_Word * mercury__io__Type_4);

static void MR_CALL 
mercury__io__unlock_globals_0_p_0(void);

static void MR_CALL 
mercury__io__may_delete_stream_info_3_p_0(
  MR_Integer * mercury__io__MayDelete_1);

static void MR_CALL 
mercury__io__insert_stream_info_4_p_0(
  MR_Box mercury__io__Stream_5,
  MR_Word mercury__io__Name_6);

static void MR_CALL 
mercury__io__set_stream_db_3_p_0(
  MR_Word mercury__io__StreamDb_1);

static void MR_CALL 
mercury__io__print_to_stream_4_p_0(
  MR_Word mercury__io__TypeInfo_for_T_13,
  MR_Box mercury__io__Stream_5,
  MR_Box mercury__io__Term_6);

static void MR_CALL 
mercury__io__read_into_buffer_8_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Box mercury__io__Buffer0_2,
  MR_Box * mercury__io__Buffer_3,
  MR_Integer mercury__io__Pos0_4,
  MR_Integer * mercury__io__Pos_5,
  MR_Integer mercury__io__Size_6);

static MR_bool MR_CALL 
mercury__io__buffer_to_string_3_p_0(
  MR_Box mercury__io__Buffer_1,
  MR_Integer mercury__io__Len_2,
  MR_String * mercury__io__Str_3);

static void MR_CALL 
mercury__io__resize_buffer_4_p_0(
  MR_Integer mercury__io__OldSize_1,
  MR_Integer mercury__io__NewSize_2,
  MR_Box mercury__io__Buffer0_3,
  MR_Box * mercury__io__Buffer_4);

static void MR_CALL 
mercury__io__alloc_buffer_2_p_0(
  MR_Integer mercury__io__Size_1,
  MR_Box * mercury__io__Buffer_2);

static void MR_CALL 
mercury__io__file_id_2_6_p_0(
  MR_String mercury__io__FileName_1,
  MR_Integer * mercury__io__Status_2,
  MR_String * mercury__io__Msg_3,
  MR_Box * mercury__io__FileId_4);

static void MR_CALL 
mercury__io__compare_file_id_2_3_p_0(
  MR_Integer * mercury__io__Res_1,
  MR_Box mercury__io__FileId1_2,
  MR_Box mercury__io__FileId2_3);

static void MR_CALL 
mercury__io__make_io_maybe_partial_res_1_error_string_6_p_0(
  MR_String mercury__io__Partial_7,
  MR_Box mercury__io__Error_8,
  MR_String mercury__io__Msg0_9,
  MR_Word * mercury__io__Res_10);

static MR_Word MR_CALL 
mercury__io__make_io_maybe_partial_res_1_ok_string_1_f_0(
  MR_String mercury__io__String_3);

static void MR_CALL 
mercury__io__make_io_res_1_error_string_5_p_0(
  MR_Box mercury__io__Error_6,
  MR_String mercury__io__Msg0_7,
  MR_Word * mercury__io__HeadVar__3_3);

static MR_Word MR_CALL 
mercury__io__make_io_res_1_ok_string_1_f_0(
  MR_String mercury__io__String_3);

static void MR_CALL 
mercury__io__make_io_res_1_error_file_type_5_p_0(
  MR_Box mercury__io__Error_6,
  MR_String mercury__io__Msg0_7,
  MR_Word * mercury__io__HeadVar__3_3);

static MR_Word MR_CALL 
mercury__io__make_io_res_1_ok_file_type_1_f_0(
  MR_Word mercury__io__FileType_3);

static MR_Word MR_CALL 
mercury__io__make_io_res_0_error_msg_1_f_0(
  MR_String mercury__io__Msg_3);

static void MR_CALL 
mercury__io__make_io_res_0_error_5_p_0(
  MR_Box mercury__io__Error_6,
  MR_String mercury__io__Msg0_7,
  MR_Word * mercury__io__HeadVar__3_3);

static MR_Word MR_CALL 
mercury__io__make_io_res_0_ok_0_f_0(void);

static MR_bool MR_CALL 
mercury__io__access_types_includes_execute_1_p_0(
  MR_Word mercury__io__Access_2);

static MR_bool MR_CALL 
mercury__io__access_types_includes_write_1_p_0(
  MR_Word mercury__io__Access_2);

static MR_bool MR_CALL 
mercury__io__access_types_includes_read_1_p_0(
  MR_Word mercury__io__Access_2);

static MR_Word MR_CALL 
mercury__io__file_type_unknown_0_f_0(void);

static MR_Word MR_CALL 
mercury__io__file_type_shared_memory_0_f_0(void);

static MR_Word MR_CALL 
mercury__io__file_type_semaphore_0_f_0(void);

static MR_Word MR_CALL 
mercury__io__file_type_message_queue_0_f_0(void);

static MR_Word MR_CALL 
mercury__io__file_type_regular_0_f_0(void);

static MR_Word MR_CALL 
mercury__io__file_type_symbolic_link_0_f_0(void);

static MR_Word MR_CALL 
mercury__io__file_type_socket_0_f_0(void);

static MR_Word MR_CALL 
mercury__io__file_type_directory_0_f_0(void);

static MR_Word MR_CALL 
mercury__io__file_type_fifo_0_f_0(void);

static MR_Word MR_CALL 
mercury__io__file_type_block_device_0_f_0(void);

static MR_Word MR_CALL 
mercury__io__file_type_character_device_0_f_0(void);

static void MR_CALL 
mercury__io__file_type_2_5_p_0(
  MR_Integer mercury__io__FollowSymLinks_1,
  MR_String mercury__io__FileName_2,
  MR_Word * mercury__io__Result_3);

static MR_bool MR_CALL 
mercury__io__file_type_implemented_0_p_0(void);

static void MR_CALL 
mercury__io__stream_file_size_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer * mercury__io__Size_2);

static void MR_CALL 
mercury__io__ferror_5_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer * mercury__io__RetVal_2,
  MR_String * mercury__io__RetStr_3);

static void MR_CALL 
mercury__io__clear_err_3_p_0(
  MR_Box mercury__io__Stream_1);

static void MR_CALL 
mercury__io__read_file_as_string_2_9_p_0(
  MR_Word mercury__io__Stream_10,
  MR_Box mercury__io__STATE_VARIABLE_Buffer_0_18,
  MR_Box * mercury__io__STATE_VARIABLE_Buffer_19,
  MR_Integer mercury__io__STATE_VARIABLE_Pos_0_20,
  MR_Integer * mercury__io__STATE_VARIABLE_Pos_21,
  MR_Integer mercury__io__STATE_VARIABLE_Size_0_22,
  MR_Integer * mercury__io__STATE_VARIABLE_Size_23);

static void MR_CALL 
mercury__io__read_line_as_string_2_6_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Word mercury__io___FirstCall_2,
  MR_Integer * mercury__io__Res_3,
  MR_String * mercury__io__RetString_4);

static void MR_CALL 
mercury__io__read_line_2_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6);

static void MR_CALL 
mercury__io__read_word_2_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6);

static void MR_CALL 
mercury__io__do_read_bitmap_9_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer mercury__io__StartByte_2,
  MR_Integer mercury__io__NumBytes_3,
  MR_Box mercury__io__Bitmap0_4,
  MR_Box * mercury__io__Bitmap_5,
  MR_Integer mercury__io__BytesRead0_6,
  MR_Integer * mercury__io__BytesRead_7);

static void MR_CALL 
mercury__io__insert_std_stream_names_2_p_0(void);

static void MR_CALL 
mercury__io__gc_init_4_p_0(
  MR_Word mercury__io__StreamDbType_1,
  MR_Word mercury__io__UserGlobalsType_2);

static MR_bool MR_CALL 
mercury__io__setenv_2_p_0(
  MR_String mercury__io__Var_1,
  MR_String mercury__io__Value_2);

static void MR_CALL 
mercury__io__update_globals_3_p_0_1(
  MR_Box mercury__io__closure_arg,
  MR_Box * mercury__io__wrapper_arg_1);


static /* final */ const MR_Box mercury__io_scalar_common_1[3][3];

static /* final */ const MR_Box mercury__io_scalar_common_2[4][4];

static /* final */ const MR_Box mercury__io_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__io_scalar_common_4[3][2];

static /* final */ const MR_Box mercury__io_scalar_common_5[10][1];

static /* final */ const MR_Box mercury__io_scalar_common_6[1][6];

static /* final */ const MR_Box mercury__io_scalar_common_7[1][11];




static /* final */ const MR_Box mercury__io_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_stream_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__io_scalar_common_7[0])),
    ((MR_Box) (mercury__io__foldl2__ho6_6_p_in__dir_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_2[4][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_4[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__bool__bool__arity0__)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) (((MR_Box) ((MR_String) "null character in input"))))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_5[10][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "null character in input"))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "io.read_binary: missing newline"))))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "io.read_binary_file_as_bitmap: incorrect file size"))))
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "Cannot set environment variables on this platform"))))
  },
  /* row 4 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "io.make_symlink not supported on this platform"))))
  },
  /* row 5 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "io.read_symlink not supported on this platform"))))
  },
  /* row 6 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "Sorry, io.file_type not implemented on this platform"))))
  },
  /* row 7 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "io.file_id not implemented on this platform"))))
  },
  /* row 8 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "unknown result code from system command"))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__io____vpti_pred_2__plain_univ__type_ctor_info_univ_0__plain_univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_file_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
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
#line 1875 "io.m"

    MR_Word         ML_io_stream_db;
    MR_Word         ML_io_user_globals;

    /* a counter used to generate unique stream ids */
    int             ML_next_stream_id;
    #if 0
      MR_Word       ML_io_ops_table;
    #endif

    #ifdef MR_THREAD_SAFE
        MercuryLock ML_io_stream_db_lock;
        MercuryLock ML_io_user_globals_lock;
        MercuryLock ML_io_next_stream_id_lock;
    #endif

#line 6488 "io.m"


MercuryFile mercury_stdin;
MercuryFile mercury_stdout;
MercuryFile mercury_stderr;
MercuryFile mercury_stdin_binary;
MercuryFile mercury_stdout_binary;

MR_Unsigned mercury_current_text_input_index;
MR_Unsigned mercury_current_text_output_index;
MR_Unsigned mercury_current_binary_input_index;
MR_Unsigned mercury_current_binary_output_index;

static void
mercury_set_binary_mode(FILE *f)
{
#if defined(MR_MSVC) || defined(MR_MINGW)
    /*
    ** Calling fdopen with 'b' in the mode string does not necessarily put the
    ** standard input or standard output file into binary translation mode on
    ** Windows. This is the case with MinGW and MSVC. The cause is likely the
    ** MSVC CRT. The solution is to change the mode on the file after opening.
    */
    _setmode(_fileno(f), _O_BINARY);
#endif
}

void
mercury_init_io(void)
{
    MR_mercuryfile_init(stdin, 1, &mercury_stdin);
    MR_mercuryfile_init(stdout, 1, &mercury_stdout);
    MR_mercuryfile_init(stderr, 1, &mercury_stderr);

    MR_mercuryfile_init(NULL, 1, &mercury_stdin_binary);
    MR_mercuryfile_init(NULL, 1, &mercury_stdout_binary);

    mercury_current_text_input_index = MR_new_thread_local_mutable_index();
    mercury_current_text_output_index = MR_new_thread_local_mutable_index();
    mercury_current_binary_input_index = MR_new_thread_local_mutable_index();
    mercury_current_binary_output_index = MR_new_thread_local_mutable_index();

#if defined(MR_HAVE_FDOPEN) && (defined(MR_HAVE_FILENO) || defined(fileno))         && defined(MR_HAVE_DUP)
    MR_file(mercury_stdin_binary) = fdopen(dup(fileno(stdin)), "rb");
    if (MR_file(mercury_stdin_binary) != NULL) {
        mercury_set_binary_mode(MR_file(mercury_stdin_binary));
    } else {
        /*
        ** The call to fdopen() may fail if stdin is not available.
        ** We don't abort since we still want Mercury programs to be runnable
        ** in such a circumstance (aside from those that use stdin).
        ** For the same reason we treat binary stdout identically below.
        **
        ** NOTE: some versions of nohup may also cause the above call to
        **       fdopen() to fail because they redirect stdin to /dev/null
        **       in *write* mode. Setting binary stdin to stdin in such
        **       a case also ensures that we work with those versions of
        **       nohup.
        */
        MR_file(mercury_stdin_binary) = stdin;
    }

    MR_file(mercury_stdout_binary) = fdopen(dup(fileno(stdout)), "wb");
    if (MR_file(mercury_stdout_binary) != NULL) {
        mercury_set_binary_mode(MR_file(mercury_stdout_binary));
    } else {
        MR_file(mercury_stdout_binary) = stdout;
    }
#else
    /*
    ** XXX Standard ANSI/ISO C provides no way to set stdin/stdout
    ** to binary mode. I guess we just have to punt...
    */
    MR_file(mercury_stdin_binary) = stdin;
    MR_file(mercury_stdout_binary) = stdout;
#endif

#ifdef MR_THREAD_SAFE
    pthread_mutex_init(&ML_io_stream_db_lock, MR_MUTEX_ATTR);
    pthread_mutex_init(&ML_io_user_globals_lock, MR_MUTEX_ATTR);
    pthread_mutex_init(&ML_io_next_stream_id_lock, MR_MUTEX_ATTR);
#endif
}

MercuryFilePtr
mercury_current_text_input(void)
{
    MercuryFilePtr stream;
    MR_get_thread_local_mutable(MercuryFilePtr, stream,
        mercury_current_text_input_index);
    return stream;
}

MercuryFilePtr
mercury_current_text_output(void)
{
    MercuryFilePtr stream;
    MR_get_thread_local_mutable(MercuryFilePtr, stream,
        mercury_current_text_output_index);
    return stream;
}

MercuryFilePtr
mercury_current_binary_input(void)
{
    MercuryFilePtr stream;
    MR_get_thread_local_mutable(MercuryFilePtr, stream,
        mercury_current_binary_input_index);
    return stream;
}

MercuryFilePtr
mercury_current_binary_output(void)
{
    MercuryFilePtr stream;
    MR_get_thread_local_mutable(MercuryFilePtr, stream,
        mercury_current_binary_output_index);
    return stream;
}

int
mercury_next_stream_id(void)
{
    int id;
    MR_LOCK(&ML_io_next_stream_id_lock, "io.do_open_text");
    id = ML_next_stream_id++;
    MR_UNLOCK(&ML_io_next_stream_id_lock, "io.do_open_text");
    return id;
}

#line 7148 "io.m"


MercuryFilePtr
mercury_open(const char *filename, const char *openmode,
    MR_AllocSiteInfoPtr alloc_id)
{
    MercuryFilePtr  mf;
    FILE            *f;

#ifdef MR_WIN32
    f = _wfopen(ML_utf8_to_wide(filename), ML_utf8_to_wide(openmode));
#else
    f = fopen(filename, openmode);
#endif

    if (f == NULL) {
        return NULL;
    }
    MR_incr_hp_type_msg(mf, MercuryFile, alloc_id, "MercuryFile");
    MR_mercuryfile_init(f, 1, mf);
    return mf;
}


#line 7239 "io.m"


void
mercury_io_error(MercuryFilePtr mf, const char *format, ...)
{
    va_list     args;
    char        message[5000];
    MR_String   message_as_mercury_string;

    /* the `mf' parameter is currently not used */

    /* format the error message using vsprintf() */
    va_start(args, format);
    vsprintf(message, format, args);
    va_end(args);

    /* copy the error message to a Mercury string */
    MR_restore_registers(); /* for MR_hp */
    MR_make_aligned_string_copy(message_as_mercury_string, message);
    MR_save_registers(); /* for MR_hp */

    /* call some Mercury code to throw the exception */
    ML_throw_io_error(message_as_mercury_string);
}


#line 7266 "io.m"


void
mercury_output_error(MercuryFilePtr mf, int errnum)
{
    char errbuf[MR_STRERROR_BUF_SIZE];

    mercury_io_error(mf, "error writing to output file: %s",
        MR_strerror(errnum, errbuf, sizeof(errbuf)));
}


#line 7279 "io.m"


void
mercury_print_string(MercuryFilePtr mf, const char *s)
{
    if (ML_fprintf(mf, "%s", s) < 0) {
        mercury_output_error(mf, errno);
    }
    while (*s) {
        if (*s++ == '\n') {
            MR_line_number(*mf)++;
        }
    }
}


#line 7342 "io.m"


int
mercury_get_byte(MercuryFilePtr mf)
{
    int c = MR_GETCH(*mf);
    if (c == '\n') {
        MR_line_number(*mf)++;
    }
    return c;
}


#line 7454 "io.m"


#ifdef MR_NEW_MERCURYFILE_STRUCT

#include <errno.h>

#ifdef EBADF
  #define MR_CLOSED_FILE_ERROR  EBADF
#else
  /* ANSI/ISO C guarantees that EDOM will exist */
  #define MR_CLOSED_FILE_ERROR  EDOM
#endif

static int
ME_closed_stream_close(MR_StreamInfo *info)
{
    errno = MR_CLOSED_FILE_ERROR;
    return EOF;
}

static int
ME_closed_stream_read(MR_StreamInfo *info, void *buffer, size_t size)
{
    errno = MR_CLOSED_FILE_ERROR;
    return -1;  /* XXX should this be 0? */
}

static int
ME_closed_stream_write(MR_StreamInfo *info, const void *buffer, size_t size)
{
    errno = MR_CLOSED_FILE_ERROR;
    return -1;  /* XXX should this be 0? */
}

static int
ME_closed_stream_flush(MR_StreamInfo *info)
{
    errno = MR_CLOSED_FILE_ERROR;
    return EOF;
}

static int
ME_closed_stream_ungetch(MR_StreamInfo *info, int ch)
{
    errno = MR_CLOSED_FILE_ERROR;
    return EOF;
}

static int
ME_closed_stream_getch(MR_StreamInfo *info)
{
    errno = MR_CLOSED_FILE_ERROR;
    return EOF;
}

static int
ME_closed_stream_vfprintf(MR_StreamInfo *info, const char *format, va_list ap)
{
    errno = MR_CLOSED_FILE_ERROR;
    return EOF;
}

static int
ME_closed_stream_putch(MR_StreamInfo *info, int ch)
{
    errno = MR_CLOSED_FILE_ERROR;
    return EOF;
}

static const MercuryFile MR_closed_stream = {
    /* stream_type  = */    MR_USER_STREAM,
    /* stream_info  = */    { NULL },
    /* line_number  = */    0,

    /* close    = */    ME_closed_stream_close,
    /* read     = */    ME_closed_stream_read,
    /* write    = */    ME_closed_stream_write,

    /* flush    = */    ME_closed_stream_flush,
    /* ungetc   = */    ME_closed_stream_ungetch,
    /* getc     = */    ME_closed_stream_getch,
    /* vprintf  = */    ME_closed_stream_vfprintf,
    /* putc     = */    ME_closed_stream_putch
};

#endif /* MR_NEW_MERCURYFILE_STRUCT */

void
mercury_close(MercuryFilePtr mf)
{
    char errbuf[MR_STRERROR_BUF_SIZE];

    /*
    ** On some systems attempting to close a file stream that has been
    ** previously closed will lead to a segmentation fault. We check
    ** that we have not previously closed the file stream here so we
    ** can give the user some idea about what has happened.
    */
    if (MR_file(*mf) == NULL) {
        mercury_io_error(mf, "error closing file: invalid file stream");
    }

    if (MR_CLOSE(*mf) < 0) {
        mercury_io_error(mf, "error closing file: %s",
            MR_strerror(errno, errbuf, sizeof(errbuf)));
    }

#ifdef MR_NEW_MERCURYFILE_STRUCT

    /*
    ** MR_closed_stream is a dummy stream object containing pointers to
    ** functions that always return an error indication. Doing this ensures
    ** that future accesses to the file will fail nicely.
    */
    /*
    ** gcc 2.95.2 barfs on `*mf = MR_closed_stream;'
    ** so we use MR_memcpy() instead.
    */
    MR_memcpy(mf, &MR_closed_stream, sizeof(*mf));

    /*
    ** XXX It would be nice to have an autoconf check for the GNU libc
    ** function fopencookie(); we could use that to do a similar thing to what
    ** we do in the MR_NEW_MERCURYFILE_STRUCT case.
    */

/****
#elif defined(HAVE_FOPENCOOKIE)
    MR_file(*mf) = MR_closed_file;
****/

#else

    /*
    ** We want future accesses to the file to fail nicely. Ideally they would
    ** throw an exception, but that would require a check at every I/O
    ** operation, and for simple operations like putchar() or getchar(),
    ** that would be too expensive. Instead we just set the file pointer
    ** to NULL; on systems which trap null pointer dereferences, or if
    ** library/io.m is compiled with MR_assert assertions enabled
    ** (i.e. -DMR_LOWLEVEL_DEBUG), this will ensure that accessing closed files
    ** traps immediately rather than causing problems at some later point.
    */
    MR_mercuryfile_init(NULL, 0, mf);

#endif /* ! MR_NEW_MERCURYFILE_STRUCT */

#ifndef MR_CONSERVATIVE_GC
    if (mf == &mercury_stdin ||
        mf == &mercury_stdout ||
        mf == &mercury_stderr ||
        mf == &mercury_stdin_binary ||
        mf == &mercury_stdout_binary)
    {
        /*
        ** The memory for these streams is allocated statically,
        ** so there is nothing to free.
        */
    } else {
        /*
        ** For the accurate GC or no GC cases, we need to explicitly deallocate
        ** the memory here, to avoid a memory leak. Note that the accurate
        ** collector won't reclaim io_streams, since the io.stream type
        ** is defined as a foreign_type.
        */
        MR_GC_free(mf);
    }
#endif /* !MR_CONSERVATIVE_GC */
}


#line 7655 "io.m"


int
ML_fprintf(MercuryFilePtr mf, const char *format, ...)
{
    int     rc;
    va_list args;

    va_start(args, format);
    rc = MR_VFPRINTF(*mf, format, args);
    va_end(args);

    return rc;
}

#line 7671 "io.m"

#ifdef MR_WIN32

/*
** Accessing Unicode file names on Windows requires that we use the functions
** taking wide character strings.
*/
wchar_t *
ML_utf8_to_wide(const char *s)
{
    int     wslen;
    wchar_t *ws;

    wslen = MultiByteToWideChar(CP_UTF8, 0, s, -1, NULL, 0);
    if (wslen == 0) {
        MR_fatal_error("ML_utf8_to_wide: MultiByteToWideChar failed");
    }
    ws = MR_GC_NEW_ARRAY(wchar_t, wslen);
    if (0 == MultiByteToWideChar(CP_UTF8, 0, s, -1, ws, wslen)) {
        MR_fatal_error("ML_utf8_to_wide: MultiByteToWideChar failed");
    }
    return ws;
}

char *
ML_wide_to_utf8(const wchar_t *ws, MR_AllocSiteInfoPtr alloc_id)
{
    char    *s;
    int     bytes;

    bytes = WideCharToMultiByte(CP_UTF8, 0, ws, -1, NULL, 0, NULL, NULL);
    if (bytes == 0) {
        MR_fatal_error("ML_wide_to_utf8: WideCharToMultiByte failed");
    }
    MR_allocate_aligned_string_msg(s, bytes, alloc_id);
    if (0 == WideCharToMultiByte(CP_UTF8, 0, ws, -1, s, bytes, NULL, NULL)) {
        MR_fatal_error("ML_wide_to_utf8: WideCharToMultiByte failed");
    }
    return s;
}

#endif /* MR_WIN32 */

#line 10520 "io.m"

    long    ML_io_tempnam_counter = 0;

#line 2889 "io.m"
void 
ML_make_err_msg(
  MR_Integer mercury__io__Error_1,
  MR_String mercury__io__Msg0_2,
  MR_String * mercury__io__Msg_3)
#line 2889 "io.m"
{
#line 2889 "io.m"
	MR_Box mercury__io__boxed_Error_1;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_1, mercury__io__boxed_Error_1);
	mercury__io__make_err_msg_5_p_0(mercury__io__boxed_Error_1, (MR_String) mercury__io__Msg0_2, (MR_String *) mercury__io__Msg_3);
}

#line 2970 "io.m"
void 
ML_make_win32_err_msg(
  MR_Integer mercury__io__Error_1,
  MR_String mercury__io__Msg0_2,
  MR_String * mercury__io__Msg_3)
#line 2970 "io.m"
{
#line 2970 "io.m"
	MR_Box mercury__io__boxed_Error_1;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_1, mercury__io__boxed_Error_1);
	mercury__io__make_win32_err_msg_5_p_0(mercury__io__boxed_Error_1, (MR_String) mercury__io__Msg0_2, (MR_String *) mercury__io__Msg_3);
}

#line 3507 "io.m"
MR_Word 
ML_file_type_character_device(void)
#line 3507 "io.m"
{
#line 3507 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__file_type_character_device_0_f_0();
	return ret_value;
}

#line 3513 "io.m"
MR_Word 
ML_file_type_block_device(void)
#line 3513 "io.m"
{
#line 3513 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__file_type_block_device_0_f_0();
	return ret_value;
}

#line 3517 "io.m"
MR_Word 
ML_file_type_fifo(void)
#line 3517 "io.m"
{
#line 3517 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__file_type_fifo_0_f_0();
	return ret_value;
}

#line 3521 "io.m"
MR_Word 
ML_file_type_directory(void)
#line 3521 "io.m"
{
#line 3521 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__file_type_directory_0_f_0();
	return ret_value;
}

#line 3529 "io.m"
MR_Word 
ML_file_type_socket(void)
#line 3529 "io.m"
{
#line 3529 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__file_type_socket_0_f_0();
	return ret_value;
}

#line 3533 "io.m"
MR_Word 
ML_file_type_symbolic_link(void)
#line 3533 "io.m"
{
#line 3533 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__file_type_symbolic_link_0_f_0();
	return ret_value;
}

#line 3539 "io.m"
MR_Word 
ML_file_type_regular(void)
#line 3539 "io.m"
{
#line 3539 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__file_type_regular_0_f_0();
	return ret_value;
}

#line 3547 "io.m"
MR_Word 
ML_file_type_message_queue(void)
#line 3547 "io.m"
{
#line 3547 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__file_type_message_queue_0_f_0();
	return ret_value;
}

#line 3551 "io.m"
MR_Word 
ML_file_type_semaphore(void)
#line 3551 "io.m"
{
#line 3551 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__file_type_semaphore_0_f_0();
	return ret_value;
}

#line 3555 "io.m"
MR_Word 
ML_file_type_shared_memory(void)
#line 3555 "io.m"
{
#line 3555 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__file_type_shared_memory_0_f_0();
	return ret_value;
}

#line 3559 "io.m"
MR_Word 
ML_file_type_unknown(void)
#line 3559 "io.m"
{
#line 3559 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__file_type_unknown_0_f_0();
	return ret_value;
}

#line 3887 "io.m"
MR_bool 
ML_access_types_includes_read(
  MR_Word mercury__io__Access_2)
#line 3887 "io.m"
{
#line 3887 "io.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__io__access_types_includes_read_1_p_0((MR_Word) mercury__io__Access_2);
	return ret_value;
}

#line 3900 "io.m"
MR_bool 
ML_access_types_includes_write(
  MR_Word mercury__io__Access_2)
#line 3900 "io.m"
{
#line 3900 "io.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__io__access_types_includes_write_1_p_0((MR_Word) mercury__io__Access_2);
	return ret_value;
}

#line 3913 "io.m"
MR_bool 
ML_access_types_includes_execute(
  MR_Word mercury__io__Access_2)
#line 3913 "io.m"
{
#line 3913 "io.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__io__access_types_includes_execute_1_p_0((MR_Word) mercury__io__Access_2);
	return ret_value;
}

#line 3926 "io.m"
MR_Word 
ML_make_io_res_0_ok(void)
#line 3926 "io.m"
{
#line 3926 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__make_io_res_0_ok_0_f_0();
	return ret_value;
}

#line 3939 "io.m"
void 
ML_make_io_res_0_error(
  MR_Integer mercury__io__Error_6,
  MR_String mercury__io__Msg0_7,
  MR_Word * mercury__io__HeadVar__3_3)
#line 3939 "io.m"
{
#line 3939 "io.m"
	MR_Box mercury__io__boxed_Error_6;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_6, mercury__io__boxed_Error_6);
	mercury__io__make_io_res_0_error_5_p_0(mercury__io__boxed_Error_6, (MR_String) mercury__io__Msg0_7, (MR_Word *) mercury__io__HeadVar__3_3);
}

#line 3952 "io.m"
MR_Word 
ML_make_io_res_0_error_msg(
  MR_String mercury__io__Msg_3)
#line 3952 "io.m"
{
#line 3952 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__make_io_res_0_error_msg_1_f_0((MR_String) mercury__io__Msg_3);
	return ret_value;
}

#line 3962 "io.m"
MR_Word 
ML_make_io_res_1_ok_file_type(
  MR_Word mercury__io__FileType_3)
#line 3962 "io.m"
{
#line 3962 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__make_io_res_1_ok_file_type_1_f_0((MR_Word) mercury__io__FileType_3);
	return ret_value;
}

#line 3975 "io.m"
void 
ML_make_io_res_1_error_file_type(
  MR_Integer mercury__io__Error_6,
  MR_String mercury__io__Msg0_7,
  MR_Word * mercury__io__HeadVar__3_3)
#line 3975 "io.m"
{
#line 3975 "io.m"
	MR_Box mercury__io__boxed_Error_6;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_6, mercury__io__boxed_Error_6);
	mercury__io__make_io_res_1_error_file_type_5_p_0(mercury__io__boxed_Error_6, (MR_String) mercury__io__Msg0_7, (MR_Word *) mercury__io__HeadVar__3_3);
}

#line 3992 "io.m"
MR_Word 
ML_make_io_res_1_ok_string(
  MR_String mercury__io__String_3)
#line 3992 "io.m"
{
#line 3992 "io.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__io__make_io_res_1_ok_string_1_f_0((MR_String) mercury__io__String_3);
	return ret_value;
}

#line 4005 "io.m"
void 
ML_make_io_res_1_error_string(
  MR_Integer mercury__io__Error_6,
  MR_String mercury__io__Msg0_7,
  MR_Word * mercury__io__HeadVar__3_3)
#line 4005 "io.m"
{
#line 4005 "io.m"
	MR_Box mercury__io__boxed_Error_6;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_6, mercury__io__boxed_Error_6);
	mercury__io__make_io_res_1_error_string_5_p_0(mercury__io__boxed_Error_6, (MR_String) mercury__io__Msg0_7, (MR_Word *) mercury__io__HeadVar__3_3);
}

#line 4874 "io.m"
void 
ML_io_print_to_cur_stream(
  MR_Word mercury__io__TypeInfo_for_T_12,
  MR_Word mercury__io__Term_4)
#line 4874 "io.m"
{
#line 4874 "io.m"
	mercury__io__print_3_p_0((MR_Word) mercury__io__TypeInfo_for_T_12, (MR_Box) mercury__io__Term_4);
}

#line 4897 "io.m"
void 
ML_io_print_to_stream(
  MR_Word mercury__io__TypeInfo_for_T_13,
  MercuryFilePtr mercury__io__Stream_5,
  MR_Word mercury__io__Term_6)
#line 4897 "io.m"
{
#line 4897 "io.m"
	MR_Box mercury__io__boxed_Stream_5;
	MR_MAYBE_BOX_FOREIGN_TYPE(MercuryFilePtr, mercury__io__Stream_5, mercury__io__boxed_Stream_5);
	mercury__io__print_to_stream_4_p_0((MR_Word) mercury__io__TypeInfo_for_T_13, mercury__io__boxed_Stream_5, (MR_Box) mercury__io__Term_6);
}

#line 5829 "io.m"
void 
ML_io_input_stream_type(
  MR_Word * mercury__io__Type_4)
#line 5829 "io.m"
{
#line 5829 "io.m"
	mercury__io__get_io_input_stream_type_3_p_0((MR_Word *) mercury__io__Type_4);
}

#line 5838 "io.m"
void 
ML_io_output_stream_type(
  MR_Word * mercury__io__Type_4)
#line 5838 "io.m"
{
#line 5838 "io.m"
	mercury__io__get_io_output_stream_type_3_p_0((MR_Word *) mercury__io__Type_4);
}

#line 7233 "io.m"
void 
ML_throw_io_error(
  MR_String mercury__io__Message_2)
#line 7233 "io.m"
{
#line 7233 "io.m"
	mercury__io__throw_io_error_1_p_0((MR_String) mercury__io__Message_2);
}

#line 8684 "io.m"
void 
ML_io_stdin_stream(
  MercuryFilePtr * mercury__io__Stream_1)
#line 8684 "io.m"
{
#line 8684 "io.m"
	MR_Box mercury__io__boxed_Stream_1;
	mercury__io__stdin_stream_2_3_p_0(&mercury__io__boxed_Stream_1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MercuryFilePtr, mercury__io__boxed_Stream_1, *mercury__io__Stream_1);
}

#line 8686 "io.m"
void 
ML_io_stdout_stream(
  MercuryFilePtr * mercury__io__Stream_1)
#line 8686 "io.m"
{
#line 8686 "io.m"
	MR_Box mercury__io__boxed_Stream_1;
	mercury__io__stdout_stream_2_3_p_0(&mercury__io__boxed_Stream_1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MercuryFilePtr, mercury__io__boxed_Stream_1, *mercury__io__Stream_1);
}

#line 8688 "io.m"
void 
ML_io_stderr_stream(
  MercuryFilePtr * mercury__io__Stream_1)
#line 8688 "io.m"
{
#line 8688 "io.m"
	MR_Box mercury__io__boxed_Stream_1;
	mercury__io__stderr_stream_2_3_p_0(&mercury__io__boxed_Stream_1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MercuryFilePtr, mercury__io__boxed_Stream_1, *mercury__io__Stream_1);
}


static const MR_VA_PseudoTypeInfo_Struct2 mercury__io____vpti_pred_2__plain_univ__type_ctor_info_univ_0__plain_univ__type_ctor_info_univ_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
    (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_access_type_0_0 = {
  (MR_String) "read",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_access_type_0_1 = {
  (MR_String) "write",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_access_type_0_2 = {
  (MR_String) "execute",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_value_ordered_access_type_0[3] = {
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io____Unify____access_type_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____access_type_0_0_10001)),
  (MR_String) "io",
  (MR_String) "access_type",
  {     mercury__io__io__enum_name_ordered_access_type_0 },
  {     mercury__io__io__enum_value_ordered_access_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_access_type_0
};

static const MR_Integer mercury__io__io__functor_number_map_binary_input_stream_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_binary_input_stream_0 = {
  (MR_String) "binary_input_stream",
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_stream_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_binary_input_stream_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__io____Unify____binary_input_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____binary_input_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "binary_input_stream",
  {     &mercury__io__io__notag_functor_desc_binary_input_stream_0 },
  {     &mercury__io__io__notag_functor_desc_binary_input_stream_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_binary_input_stream_0
};

static const MR_Integer mercury__io__io__functor_number_map_binary_output_stream_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_binary_output_stream_0 = {
  (MR_String) "binary_output_stream",
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_stream_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_binary_output_stream_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__io____Unify____binary_output_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____binary_output_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "binary_output_stream",
  {     &mercury__io__io__notag_functor_desc_binary_output_stream_0 },
  {     &mercury__io__io__notag_functor_desc_binary_output_stream_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_binary_output_stream_0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_buffer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__io____Unify____buffer_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____buffer_0_0_10001)),
  (MR_String) "io",
  (MR_String) "buffer",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_chunk_inner_res_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res_1_1 = {
  (MR_String) "error",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__io__io__field_types_chunk_inner_res_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res_1_2 = {
  (MR_String) "more",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__io__io__field_types_chunk_inner_res_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res_1_0[1] = {
  &mercury__io__io__du_functor_desc_chunk_inner_res_1_0
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res_1_1[1] = {
  &mercury__io__io__du_functor_desc_chunk_inner_res_1_1
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res_1_2[1] = {
  &mercury__io__io__du_functor_desc_chunk_inner_res_1_2
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_chunk_inner_res_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_chunk_inner_res_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_chunk_inner_res_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_chunk_inner_res_1_2
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
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____chunk_inner_res_1_0_10001)),
  ((MR_Box) (mercury__io____Compare____chunk_inner_res_1_0_10001)),
  (MR_String) "io",
  (MR_String) "chunk_inner_res",
  {     mercury__io__io__du_name_ordered_chunk_inner_res_1 },
  {     mercury__io__io__du_ptag_ordered_chunk_inner_res_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_chunk_inner_res_1
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res0_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res0_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res0_0_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__io__io__field_types_chunk_inner_res0_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res0_0_2 = {
  (MR_String) "more",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res0_0_0[2] = {
  &mercury__io__io__du_functor_desc_chunk_inner_res0_0_0,
  &mercury__io__io__du_functor_desc_chunk_inner_res0_0_2
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res0_0_1[1] = {
  &mercury__io__io__du_functor_desc_chunk_inner_res0_0_1
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_chunk_inner_res0_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__io__io__du_stag_ordered_chunk_inner_res0_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_chunk_inner_res0_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____chunk_inner_res0_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____chunk_inner_res0_0_0_10001)),
  (MR_String) "io",
  (MR_String) "chunk_inner_res0",
  {     mercury__io__io__du_name_ordered_chunk_inner_res0_0 },
  {     mercury__io__io__du_ptag_ordered_chunk_inner_res0_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_chunk_inner_res0_0
};

static const MR_Integer mercury__io__io__functor_number_map_error_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_error_0 = {
  (MR_String) "io_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__io____Unify____error_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____error_0_0_10001)),
  (MR_String) "io",
  (MR_String) "error",
  {     &mercury__io__io__notag_functor_desc_error_0 },
  {     &mercury__io__io__notag_functor_desc_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_error_0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_file_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__io____Unify____file_id_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____file_id_0_0_10001)),
  (MR_String) "io",
  (MR_String) "file_id",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_0 = {
  (MR_String) "regular_file",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_1 = {
  (MR_String) "directory",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_2 = {
  (MR_String) "symbolic_link",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_3 = {
  (MR_String) "named_pipe",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_4 = {
  (MR_String) "socket",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_5 = {
  (MR_String) "character_device",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_6 = {
  (MR_String) "block_device",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_7 = {
  (MR_String) "message_queue",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_8 = {
  (MR_String) "semaphore",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_9 = {
  (MR_String) "shared_memory",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_file_type_0_10 = {
  (MR_String) "unknown",
  (MR_Integer) 10
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_value_ordered_file_type_0[11] = {
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io____Unify____file_type_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____file_type_0_0_10001)),
  (MR_String) "io",
  (MR_String) "file_type",
  {     mercury__io__io__enum_name_ordered_file_type_0 },
  {     mercury__io__io__enum_value_ordered_file_type_0 },
  (MR_Integer) 11,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_file_type_0
};

static const MR_Integer mercury__io__io__functor_number_map_input_stream_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_input_stream_0 = {
  (MR_String) "input_stream",
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_stream_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_input_stream_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__io____Unify____input_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____input_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "input_stream",
  {     &mercury__io__io__notag_functor_desc_input_stream_0 },
  {     &mercury__io__io__notag_functor_desc_input_stream_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_input_stream_0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_io_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io____Unify____io_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____io_0_0_10001)),
  (MR_String) "io",
  (MR_String) "io",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_partial_res_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_partial_res_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_maybe_partial_res_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_partial_res_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_partial_res_1_1 = {
  (MR_String) "error",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__io__io__field_types_maybe_partial_res_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_1_0[1] = {
  &mercury__io__io__du_functor_desc_maybe_partial_res_1_0
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_1_1[1] = {
  &mercury__io__io__du_functor_desc_maybe_partial_res_1_1
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_maybe_partial_res_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_maybe_partial_res_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_maybe_partial_res_1_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____maybe_partial_res_1_0_10001)),
  ((MR_Box) (mercury__io____Compare____maybe_partial_res_1_0_10001)),
  (MR_String) "io",
  (MR_String) "maybe_partial_res",
  {     mercury__io__io__du_name_ordered_maybe_partial_res_1 },
  {     mercury__io__io__du_ptag_ordered_maybe_partial_res_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_maybe_partial_res_1
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_stream_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_stream_mode_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_stream_content_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_stream_source_0
};

static const MR_ConstString mercury__io__io__field_names_maybe_stream_info_0_0[4] = {
  (MR_String) "maybe_stream_id",
  (MR_String) "maybe_stream_mode",
  (MR_String) "maybe_stream_content",
  (MR_String) "maybe_stream_source"
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_stream_info_0_0 = {
  (MR_String) "stream",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_maybe_stream_info_0_0,
  mercury__io__io__field_names_maybe_stream_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_stream_info_0_1 = {
  (MR_String) "unknown_stream",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_stream_info_0_0[1] = {
  &mercury__io__io__du_functor_desc_maybe_stream_info_0_1
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_stream_info_0_1[1] = {
  &mercury__io__io__du_functor_desc_maybe_stream_info_0_0
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_maybe_stream_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__io__io__du_stag_ordered_maybe_stream_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_maybe_stream_info_0_1
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_maybe_stream_info_0[2] = {
  &mercury__io__io__du_functor_desc_maybe_stream_info_0_0,
  &mercury__io__io__du_functor_desc_maybe_stream_info_0_1
};

static const MR_Integer mercury__io__io__functor_number_map_maybe_stream_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_maybe_stream_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____maybe_stream_info_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____maybe_stream_info_0_0_10001)),
  (MR_String) "io",
  (MR_String) "maybe_stream_info",
  {     mercury__io__io__du_name_ordered_maybe_stream_info_0 },
  {     mercury__io__io__du_ptag_ordered_maybe_stream_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_maybe_stream_info_0
};

static const MR_Integer mercury__io__io__functor_number_map_output_stream_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_output_stream_0 = {
  (MR_String) "output_stream",
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_stream_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_output_stream_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__io____Unify____output_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____output_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "output_stream",
  {     &mercury__io__io__notag_functor_desc_output_stream_0 },
  {     &mercury__io__io__notag_functor_desc_output_stream_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_output_stream_0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_poly_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io____Unify____poly_type_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____poly_type_0_0_10001)),
  (MR_String) "io",
  (MR_String) "poly_type",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__string__string__type_ctor_info_poly_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_posn_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_posn_0_0 = {
  (MR_String) "posn",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_posn_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_posn_0_0[1] = {
  &mercury__io__io__du_functor_desc_posn_0_0
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_posn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_posn_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_posn_0[1] = {
  &mercury__io__io__du_functor_desc_posn_0_0
};

static const MR_Integer mercury__io__io__functor_number_map_posn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_posn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____posn_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____posn_0_0_10001)),
  (MR_String) "io",
  (MR_String) "posn",
  {     mercury__io__io__du_name_ordered_posn_0 },
  {     mercury__io__io__du_ptag_ordered_posn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_posn_0
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_read_result_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_read_result_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_read_result_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_read_result_1_1 = {
  (MR_String) "eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_read_result_1_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_read_result_1_2 = {
  (MR_String) "error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__io__io__field_types_read_result_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_read_result_1_0[1] = {
  &mercury__io__io__du_functor_desc_read_result_1_1
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_read_result_1_1[1] = {
  &mercury__io__io__du_functor_desc_read_result_1_0
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_read_result_1_2[1] = {
  &mercury__io__io__du_functor_desc_read_result_1_2
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_read_result_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__io__io__du_stag_ordered_read_result_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_read_result_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_read_result_1_2
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
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____read_result_1_0_10001)),
  ((MR_Box) (mercury__io____Compare____read_result_1_0_10001)),
  (MR_String) "io",
  (MR_String) "read_result",
  {     mercury__io__io__du_name_ordered_read_result_1 },
  {     mercury__io__io__du_ptag_ordered_read_result_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_read_result_1
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_res_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_res_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_res_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_res_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_res_1_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__io__io__field_types_res_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_1_0[1] = {
  &mercury__io__io__du_functor_desc_res_1_0
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_1_1[1] = {
  &mercury__io__io__du_functor_desc_res_1_1
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_res_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_res_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_res_1_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____res_1_0_10001)),
  ((MR_Box) (mercury__io____Compare____res_1_0_10001)),
  (MR_String) "io",
  (MR_String) "res",
  {     mercury__io__io__du_name_ordered_res_1 },
  {     mercury__io__io__du_ptag_ordered_res_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_res_1
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_res_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_res_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_res_0_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__io__io__field_types_res_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_0_0[1] = {
  &mercury__io__io__du_functor_desc_res_0_0
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_0_1[1] = {
  &mercury__io__io__du_functor_desc_res_0_1
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_res_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__io__io__du_stag_ordered_res_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_res_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____res_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____res_0_0_10001)),
  (MR_String) "io",
  (MR_String) "res",
  {     mercury__io__io__du_name_ordered_res_0 },
  {     mercury__io__io__du_ptag_ordered_res_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_res_0
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_result_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_result_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_1_1 = {
  (MR_String) "eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_result_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_1_2 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__io__io__field_types_result_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_1_0[1] = {
  &mercury__io__io__du_functor_desc_result_1_1
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_1_1[1] = {
  &mercury__io__io__du_functor_desc_result_1_0
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_1_2[1] = {
  &mercury__io__io__du_functor_desc_result_1_2
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_result_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__io__io__du_stag_ordered_result_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_result_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_result_1_2
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
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____result_1_0_10001)),
  ((MR_Box) (mercury__io____Compare____result_1_0_10001)),
  (MR_String) "io",
  (MR_String) "result",
  {     mercury__io__io__du_name_ordered_result_1 },
  {     mercury__io__io__du_ptag_ordered_result_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_result_1
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_0_1 = {
  (MR_String) "eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_result_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_0_2 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__io__io__field_types_result_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_0_0[2] = {
  &mercury__io__io__du_functor_desc_result_0_0,
  &mercury__io__io__du_functor_desc_result_0_1
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_0_1[1] = {
  &mercury__io__io__du_functor_desc_result_0_2
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_result_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__io__io__du_stag_ordered_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_result_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____result_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____result_0_0_10001)),
  (MR_String) "io",
  (MR_String) "result",
  {     mercury__io__io__du_name_ordered_result_0 },
  {     mercury__io__io__du_ptag_ordered_result_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_result_0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__io____Unify____state_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____state_0_0_10001)),
  (MR_String) "io",
  (MR_String) "state",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_stream_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__io____Unify____stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "stream",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_stream_content_0_0 = {
  (MR_String) "text",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_stream_content_0_1 = {
  (MR_String) "binary",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_stream_content_0_2 = {
  (MR_String) "preopen",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_value_ordered_stream_content_0[3] = {
  &mercury__io__io__enum_functor_desc_stream_content_0_0,
  &mercury__io__io__enum_functor_desc_stream_content_0_1,
  &mercury__io__io__enum_functor_desc_stream_content_0_2
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_stream_content_0[3] = {
  &mercury__io__io__enum_functor_desc_stream_content_0_1,
  &mercury__io__io__enum_functor_desc_stream_content_0_2,
  &mercury__io__io__enum_functor_desc_stream_content_0_0
};

static const MR_Integer mercury__io__io__functor_number_map_stream_content_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_stream_content_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io____Unify____stream_content_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____stream_content_0_0_10001)),
  (MR_String) "io",
  (MR_String) "stream_content",
  {     mercury__io__io__enum_name_ordered_stream_content_0 },
  {     mercury__io__io__enum_value_ordered_stream_content_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_stream_content_0
};

static const MR_FA_TypeInfo_Struct2 mercury__io__tree234__ti_tree234_2builtin__type_ctor_info_int_0io__type_ctor_info_stream_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_stream_info_0
  }
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_stream_db_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io____Unify____stream_db_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____stream_db_0_0_10001)),
  (MR_String) "io",
  (MR_String) "stream_db",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__io__tree234__ti_tree234_2builtin__type_ctor_info_int_0io__type_ctor_info_stream_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_stream_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io____Unify____stream_id_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____stream_id_0_0_10001)),
  (MR_String) "io",
  (MR_String) "stream_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_stream_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_stream_mode_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_stream_content_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_stream_source_0
};

static const MR_ConstString mercury__io__io__field_names_stream_info_0_0[4] = {
  (MR_String) "stream_id",
  (MR_String) "stream_mode",
  (MR_String) "stream_content",
  (MR_String) "stream_source"
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_stream_info_0_0 = {
  (MR_String) "stream",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_stream_info_0_0,
  mercury__io__io__field_names_stream_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_stream_info_0_0[1] = {
  &mercury__io__io__du_functor_desc_stream_info_0_0
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_stream_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_stream_info_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_stream_info_0[1] = {
  &mercury__io__io__du_functor_desc_stream_info_0_0
};

static const MR_Integer mercury__io__io__functor_number_map_stream_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_stream_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____stream_info_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____stream_info_0_0_10001)),
  (MR_String) "io",
  (MR_String) "stream_info",
  {     mercury__io__io__du_name_ordered_stream_info_0 },
  {     mercury__io__io__du_ptag_ordered_stream_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_stream_info_0
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_stream_mode_0_0 = {
  (MR_String) "input",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_stream_mode_0_1 = {
  (MR_String) "output",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_stream_mode_0_2 = {
  (MR_String) "append",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_value_ordered_stream_mode_0[3] = {
  &mercury__io__io__enum_functor_desc_stream_mode_0_0,
  &mercury__io__io__enum_functor_desc_stream_mode_0_1,
  &mercury__io__io__enum_functor_desc_stream_mode_0_2
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_stream_mode_0[3] = {
  &mercury__io__io__enum_functor_desc_stream_mode_0_2,
  &mercury__io__io__enum_functor_desc_stream_mode_0_0,
  &mercury__io__io__enum_functor_desc_stream_mode_0_1
};

static const MR_Integer mercury__io__io__functor_number_map_stream_mode_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_stream_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io____Unify____stream_mode_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____stream_mode_0_0_10001)),
  (MR_String) "io",
  (MR_String) "stream_mode",
  {     mercury__io__io__enum_name_ordered_stream_mode_0 },
  {     mercury__io__io__enum_value_ordered_stream_mode_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_stream_mode_0
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_stream_source_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_stream_source_0_0 = {
  (MR_String) "file",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_stream_source_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_stream_source_0_1 = {
  (MR_String) "stdin",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_stream_source_0_2 = {
  (MR_String) "stdout",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_stream_source_0_3 = {
  (MR_String) "stderr",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_stream_source_0_0[3] = {
  &mercury__io__io__du_functor_desc_stream_source_0_1,
  &mercury__io__io__du_functor_desc_stream_source_0_2,
  &mercury__io__io__du_functor_desc_stream_source_0_3
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_stream_source_0_1[1] = {
  &mercury__io__io__du_functor_desc_stream_source_0_0
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_stream_source_0[2] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__io__io__du_stag_ordered_stream_source_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_stream_source_0_1
  }
};

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_stream_source_0[4] = {
  &mercury__io__io__du_functor_desc_stream_source_0_0,
  &mercury__io__io__du_functor_desc_stream_source_0_3,
  &mercury__io__io__du_functor_desc_stream_source_0_1,
  &mercury__io__io__du_functor_desc_stream_source_0_2
};

static const MR_Integer mercury__io__io__functor_number_map_stream_source_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_stream_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____stream_source_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____stream_source_0_0_10001)),
  (MR_String) "io",
  (MR_String) "stream_source",
  {     mercury__io__io__du_name_ordered_stream_source_0 },
  {     mercury__io__io__du_ptag_ordered_stream_source_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_stream_source_0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_system_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__io____Unify____system_error_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____system_error_0_0_10001)),
  (MR_String) "io",
  (MR_String) "system_error",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_system_result_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_system_result_0_0 = {
  (MR_String) "exited",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_system_result_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_system_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_system_result_0_1 = {
  (MR_String) "signalled",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__io__io__field_types_system_result_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_system_result_0_0[1] = {
  &mercury__io__io__du_functor_desc_system_result_0_0
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_system_result_0_1[1] = {
  &mercury__io__io__du_functor_desc_system_result_0_1
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_system_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_system_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_system_result_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io____Unify____system_result_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____system_result_0_0_10001)),
  (MR_String) "io",
  (MR_String) "system_result",
  {     mercury__io__io__du_name_ordered_system_result_0 },
  {     mercury__io__io__du_ptag_ordered_system_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_system_result_0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_text_input_stream_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io____Unify____text_input_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____text_input_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "text_input_stream",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_input_stream_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_text_output_stream_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io____Unify____text_output_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____text_output_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "text_output_stream",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_0 = {
  (MR_String) "set",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_1 = {
  (MR_String) "cur",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_2 = {
  (MR_String) "end",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_value_ordered_whence_0[3] = {
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io____Unify____whence_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____whence_0_0_10001)),
  (MR_String) "io",
  (MR_String) "whence",
  {     mercury__io__io__enum_name_ordered_whence_0 },
  {     mercury__io__io__enum_value_ordered_whence_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_whence_0
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__binary_output_stream__arity0__int__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__univ__univ__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__int__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__float__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__io__binary_output_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__io__binary_input_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__stream____io__output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__io__input_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__stream____io__input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__seekable__arity2__io__binary_output_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__seekable__arity2__io__binary_input_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__reader__arity4__io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 4)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__reader__arity4__io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 4)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__reader__arity4__io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 4)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__reader__arity4__io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 4)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__putback__arity4__io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 4)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__putback__arity4__io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 4)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__putback____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__io__binary_output_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__line_oriented__arity2__io__output_stream__arity0__io__state__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__line_oriented__arity2__io__input_stream__arity0__io__state__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__input__arity2__io__binary_input_stream__arity0__io__state__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__input__arity2__io__input_stream__arity0__io__state__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__error__arity1__io__error__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__error____io__error__arity0______stream__error_message_1_1_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__bulk_reader__arity5__io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 5)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__bulk_reader____io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0______stream__bulk_get_9_9_p_0_10001))
};

static MR_bool MR_CALL 
mercury__io____Unify____access_type_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____access_type_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____access_type_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____access_type_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____binary_input_stream_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____binary_input_stream_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____binary_input_stream_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____binary_input_stream_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____binary_output_stream_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____binary_output_stream_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____binary_output_stream_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____binary_output_stream_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____buffer_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____buffer_0_0(((MR_Box) mercury__io__wrapper_arg_1), ((MR_Box) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____buffer_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____buffer_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Box) mercury__io__wrapper_arg_2), ((MR_Box) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____chunk_inner_res_1_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____chunk_inner_res_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____chunk_inner_res_1_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_3), ((MR_Word) mercury__io__wrapper_arg_4));
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res0_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____chunk_inner_res0_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____chunk_inner_res0_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____chunk_inner_res0_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____error_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____error_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____error_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____error_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____file_id_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____file_id_0_0(((MR_Box) mercury__io__wrapper_arg_1), ((MR_Box) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____file_id_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____file_id_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Box) mercury__io__wrapper_arg_2), ((MR_Box) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____file_type_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____file_type_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____file_type_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____file_type_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____input_stream_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____input_stream_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____input_stream_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____input_stream_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____io_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____io_0_0();
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____io_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____io_0_0(&mercury__io__conv0_HeadVar__1_1);
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____maybe_partial_res_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____maybe_partial_res_1_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____maybe_partial_res_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____maybe_partial_res_1_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_3), ((MR_Word) mercury__io__wrapper_arg_4));
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____maybe_stream_info_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____maybe_stream_info_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____maybe_stream_info_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____maybe_stream_info_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____output_stream_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____output_stream_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____output_stream_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____output_stream_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____poly_type_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____poly_type_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____poly_type_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____poly_type_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____posn_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____posn_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____posn_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____posn_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____read_result_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____read_result_1_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____read_result_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____read_result_1_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_3), ((MR_Word) mercury__io__wrapper_arg_4));
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____res_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____res_1_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____res_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____res_1_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_3), ((MR_Word) mercury__io__wrapper_arg_4));
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____res_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____res_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____res_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____res_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____result_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____result_1_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____result_1_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____result_1_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_3), ((MR_Word) mercury__io__wrapper_arg_4));
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____result_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____result_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____result_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____result_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____state_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____state_0_0();
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____state_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____state_0_0(&mercury__io__conv0_HeadVar__1_1);
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____stream_0_0(((MR_Box) mercury__io__wrapper_arg_1), ((MR_Box) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____stream_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____stream_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Box) mercury__io__wrapper_arg_2), ((MR_Box) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_content_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____stream_content_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____stream_content_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____stream_content_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_db_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____stream_db_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____stream_db_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____stream_db_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_id_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____stream_id_0_0(((MR_Integer) mercury__io__wrapper_arg_1), ((MR_Integer) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____stream_id_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____stream_id_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Integer) mercury__io__wrapper_arg_2), ((MR_Integer) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_info_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____stream_info_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____stream_info_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____stream_info_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_mode_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____stream_mode_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____stream_mode_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____stream_mode_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_source_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____stream_source_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____stream_source_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____stream_source_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____system_error_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____system_error_0_0(((MR_Box) mercury__io__wrapper_arg_1), ((MR_Box) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____system_error_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____system_error_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Box) mercury__io__wrapper_arg_2), ((MR_Box) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____system_result_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____system_result_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____system_result_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____system_result_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____text_input_stream_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____text_input_stream_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____text_input_stream_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____text_input_stream_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____text_output_stream_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____text_output_stream_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____text_output_stream_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____text_output_stream_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____whence_0_0_10001(
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io____Unify____whence_0_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____whence_0_0_10001(
  MR_Box * mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3)
{
  {
    MR_Word mercury__io__conv0_HeadVar__1_1;

    {
      mercury__io____Compare____whence_0_0(&mercury__io__conv0_HeadVar__1_1, ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3));
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Box) mercury__io__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Integer) mercury__io__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_String) mercury__io__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Integer) mercury__io__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), MR_unbox_float(mercury__io__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Char) (MR_Word) mercury__io__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;
    MR_String mercury__io__conv0_HeadVar__2_2;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_HeadVar__2_2);
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;
    MR_String mercury__io__conv0_HeadVar__2_2;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_HeadVar__2_2);
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;
    MR_String mercury__io__conv0_HeadVar__2_2;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__stream____io__output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_HeadVar__2_2);
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;
    MR_String mercury__io__conv0_HeadVar__2_2;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__stream____io__input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_HeadVar__2_2);
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4,
  MR_Box * mercury__io__wrapper_arg_5)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Integer) mercury__io__wrapper_arg_3));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4,
  MR_Box * mercury__io__wrapper_arg_5)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Word) mercury__io__wrapper_arg_2), ((MR_Integer) mercury__io__wrapper_arg_3));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;
    MR_Word mercury__io__conv0_Result_6;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_Result_6);
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_Result_6));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;
    MR_Word mercury__io__conv0_Result_6;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_Result_6);
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_Result_6));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;
    MR_Word mercury__io__conv0_Result_6;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_Result_6);
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_Result_6));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;
    MR_Word mercury__io__conv0_Result_6;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_Result_6);
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_Result_6));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Integer) mercury__io__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__putback____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Char) (MR_Word) mercury__io__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box * mercury__io__wrapper_arg_3)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(((MR_Word) mercury__io__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box * mercury__io__wrapper_arg_3)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(((MR_Word) mercury__io__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;
    MR_Integer mercury__io__conv0_HeadVar__2_2;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_HeadVar__2_2);
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Integer) mercury__io__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box * mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;
    MR_Integer mercury__io__conv0_HeadVar__2_2;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), &mercury__io__conv0_HeadVar__2_2);
    }
    *mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4)
{
  {
    MR_Box mercury__io__closure;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Integer) mercury__io__wrapper_arg_2));
    }
  }
}

static MR_Box MR_CALL 
mercury__io__ClassMethod_for_stream__error____io__error__arity0______stream__error_message_1_1_f_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1)
{
  {
    MR_Box mercury__io__wrapper_arg_2;
    MR_Box mercury__io__closure;
    MR_String mercury__io__conv0_HeadVar__2_2;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__conv0_HeadVar__2_2 = mercury__io__ClassMethod_for_stream__error____io__error__arity0______stream__error_message_1_1_f_0(((MR_Word) mercury__io__wrapper_arg_1));
    }
    mercury__io__wrapper_arg_2 = ((MR_Box) (mercury__io__conv0_HeadVar__2_2));
    return mercury__io__wrapper_arg_2;
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__bulk_reader____io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0______stream__bulk_get_9_9_p_0_10001(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box mercury__io__wrapper_arg_4,
  MR_Box * mercury__io__wrapper_arg_5,
  MR_Box * mercury__io__wrapper_arg_6,
  MR_Box * mercury__io__wrapper_arg_7,
  MR_Box mercury__io__wrapper_arg_8,
  MR_Box * mercury__io__wrapper_arg_9)
{
  {
    MR_Box mercury__io__closure;
    MR_Box mercury__io__conv2_STATE_VARIABLE_Store_19;
    MR_Integer mercury__io__conv1_NumRead_14;
    MR_Word mercury__io__conv0_Result_15;

    mercury__io__closure = mercury__io__closure_arg;
    {
      mercury__io__ClassMethod_for_stream__bulk_reader____io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0______stream__bulk_get_9_9_p_0(((MR_Word) mercury__io__wrapper_arg_1), ((MR_Integer) mercury__io__wrapper_arg_2), ((MR_Integer) mercury__io__wrapper_arg_3), ((MR_Box) mercury__io__wrapper_arg_4), &mercury__io__conv2_STATE_VARIABLE_Store_19, &mercury__io__conv1_NumRead_14, &mercury__io__conv0_Result_15);
    }
    *mercury__io__wrapper_arg_5 = ((MR_Box) (mercury__io__conv2_STATE_VARIABLE_Store_19));
    *mercury__io__wrapper_arg_6 = ((MR_Box) (mercury__io__conv1_NumRead_14));
    *mercury__io__wrapper_arg_7 = ((MR_Box) (mercury__io__conv0_Result_15));
  }
}

static MR_Integer MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_105_111_95_95_115_116_97_116_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;

    *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_105_111_95_95_115_116_97_116_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_105_111_95_95_105_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;

    *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_105_111_95_95_105_111_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

static void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_100_105_114_101_99_116_111_114_121_95_101_110_116_114_121_95_95_91_51_44_32_53_93_95_48_8_p_0(
  MR_String mercury__io__DirName_9,
  MR_String mercury__io__FileName_10,
  MR_Word * mercury__io__Continue_12,
  MR_Word * mercury__io__Res_14)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Res0_16;
    MR_String mercury__io__V_20_20;

    {
      mercury__io__V_20_20 = mercury__dir__f_slash_2_f_0(mercury__io__DirName_9, mercury__io__FileName_10);
    }
    {
      mercury__io__remove_file_recursively_4_p_0(mercury__io__V_20_20, &mercury__io__Res0_16);
    }
    if ((mercury__io__Res0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__io__Res_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__io__Continue_12 = (MR_Integer) 1;
      }
    else
      {
        *mercury__io__Res_14 = mercury__io__Res0_16;
        *mercury__io__Continue_12 = (MR_Integer) 0;
      }
  }
}

static void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_98_105_110_97_114_121_95_102_105_108_101_95_97_115_95_98_105_116_109_97_112_95_50_95_95_91_49_93_95_48_7_p_0(
  MR_Integer mercury__io__BufferSize_9,
  MR_Word * mercury__io__Res_10,
  MR_Word mercury__io__STATE_VARIABLE_BMs_0_17,
  MR_Word * mercury__io__STATE_VARIABLE_BMs_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Integer mercury__io__NumBytesRead_14;
        MR_Word mercury__io__ReadRes_15;
        MR_Box mercury__io__STATE_VARIABLE_BM_21_21;
        MR_Integer mercury__io__V_22_22 = (mercury__io__BufferSize_9 * (MR_Integer) 8);
        MR_Box mercury__io__STATE_VARIABLE_BM_25_25;
        MR_Word mercury__io__Stream_53;
        MR_Box mercury__io__Stream_59;

        {
          mercury__io__STATE_VARIABLE_BM_21_21 = mercury__bitmap__init_2_f_0(mercury__io__V_22_22, (MR_Integer) 0);
        }
{
#define MR_PROC_LABEL mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_98_105_110_97_114_121_95_102_105_108_101_95_97_115_95_98_105_116_109_97_112_95_50_95_95_91_49_93_95_48_7_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_59  = (MR_Box) Stream;
}
        mercury__io__Stream_53 = (MR_Word) mercury__io__Stream_59;
        {
          mercury__io__read_bitmap_9_p_0(mercury__io__Stream_53, (MR_Integer) 0, mercury__io__BufferSize_9, mercury__io__STATE_VARIABLE_BM_21_21, &mercury__io__STATE_VARIABLE_BM_25_25, &mercury__io__NumBytesRead_14, &mercury__io__ReadRes_15);
        }
        if ((mercury__io__ReadRes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__io__succeeded = (mercury__io__NumBytesRead_14 < mercury__io__BufferSize_9);
            if (mercury__io__succeeded)
              {
                MR_Box mercury__io__STATE_VARIABLE_BM_27_27;
                MR_Integer mercury__io__V_28_28 = (mercury__io__NumBytesRead_14 * (MR_Integer) 8);

                {
                  mercury__io__STATE_VARIABLE_BM_27_27 = mercury__bitmap__shrink_without_copying_2_f_0(mercury__io__STATE_VARIABLE_BM_25_25, mercury__io__V_28_28);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__io__STATE_VARIABLE_BMs_18 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__STATE_VARIABLE_BM_27_27));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__STATE_VARIABLE_BMs_0_17));
                }
                *mercury__io__Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            else
              {
                MR_Word mercury__io__STATE_VARIABLE_BMs_31_31;
                MR_Integer mercury__io__V_32_32;

                {
                  mercury__io__STATE_VARIABLE_BMs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__io__STATE_VARIABLE_BMs_31_31, 0) = ((MR_Box) (mercury__io__STATE_VARIABLE_BM_25_25));
                  MR_hl_field(MR_mktag(1), mercury__io__STATE_VARIABLE_BMs_31_31, 1) = ((MR_Box) (mercury__io__STATE_VARIABLE_BMs_0_17));
                }
                mercury__io__V_32_32 = (mercury__io__BufferSize_9 * (MR_Integer) 2);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__io__BufferSize__tmp_copy_9 = mercury__io__V_32_32;
                  MR_Word mercury__io__STATE_VARIABLE_BMs_0__tmp_copy_17 = mercury__io__STATE_VARIABLE_BMs_31_31;

                  mercury__io__STATE_VARIABLE_BMs_0_17 = mercury__io__STATE_VARIABLE_BMs_0__tmp_copy_17;
                  mercury__io__BufferSize_9 = mercury__io__BufferSize__tmp_copy_9;
                }
                continue;
              }
          }
        else
          {
            *mercury__io__Res_10 = mercury__io__ReadRes_15;
            *mercury__io__STATE_VARIABLE_BMs_18 = mercury__io__STATE_VARIABLE_BMs_0_17;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_111_112_95_116_97_98_108_101_95_95_91_49_93_95_48_3_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

  }
}

static void MR_CALL 
mercury__io__foldl2__ho6_6_p_in__dir_0_1(
  MR_Box mercury__io__closure_arg,
  MR_Box mercury__io__wrapper_arg_1,
  MR_Box mercury__io__wrapper_arg_2,
  MR_Box mercury__io__wrapper_arg_3,
  MR_Box * mercury__io__wrapper_arg_4,
  MR_Box mercury__io__wrapper_arg_5,
  MR_Box * mercury__io__wrapper_arg_6,
  MR_Box mercury__io__wrapper_arg_7,
  MR_Box * mercury__io__wrapper_arg_8)
{
  {
    MR_Box mercury__io__closure = mercury__io__closure_arg;
    MR_Word mercury__io__conv1_Continue_12;
    MR_Word mercury__io__conv0_Res_14;

    {
      mercury__io__remove_directory_entry_8_p_0(((MR_String) mercury__io__wrapper_arg_1), ((MR_String) mercury__io__wrapper_arg_2), ((MR_Word) mercury__io__wrapper_arg_3), &mercury__io__conv1_Continue_12, ((MR_Word) mercury__io__wrapper_arg_5), &mercury__io__conv0_Res_14);
    }
    *mercury__io__wrapper_arg_4 = ((MR_Box) (mercury__io__conv1_Continue_12));
    *mercury__io__wrapper_arg_6 = ((MR_Box) (mercury__io__conv0_Res_14));
  }
}

static void MR_CALL 
mercury__io__foldl2__ho6_6_p_in__dir_0(
  MR_String mercury__io__V_8_8,
  MR_Word mercury__io__V_9_9,
  MR_Word * mercury__io__V_10_10)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeInfo_for_T_19 = (MR_Word) &mercury__io__io__type_ctor_info_res_0;
    MR_Word mercury__io__V_7_7 = (MR_Word) &mercury__io_scalar_common_1[2];
    MR_String mercury__io__V_16_14;
    MR_Word mercury__io__V_17_15;
    MR_Word mercury__io__V_12_18;

    {
      mercury__io__V_16_14 = mercury__dir__fixup_dirname_1_f_0(mercury__io__V_8_8);
    }
    mercury__io__V_17_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__dir__foldl2_process_dir_11_p_0(mercury__io__TypeInfo_for_T_19, (MR_Integer) 0, mercury__io__V_7_7, mercury__io__V_16_14, mercury__io__V_17_15, (MR_Integer) 0, (MR_Integer) 0, &mercury__io__V_12_18, ((MR_Box) (mercury__io__V_9_9)), mercury__io__V_10_10);
    }
  }
}

static void MR_CALL 
mercury__io__IntroducedFrom__pred__update_globals__5530__1_3_p_0(
  MR_Word mercury__io__UpdatePred_4,
  MR_Word mercury__io__Globals0_6,
  MR_Word * mercury__io__LambdaHeadVar__1_16)
{
  {
    MR_bool mercury__io__succeeded;
    void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__UpdatePred_4, (MR_Integer) 1)));
    MR_Box mercury__io__conv1_LambdaHeadVar__1_16;

    {
      mercury__io__func_0(((MR_Box) mercury__io__UpdatePred_4), ((MR_Box) (mercury__io__Globals0_6)), &mercury__io__conv1_LambdaHeadVar__1_16);
    }
    *mercury__io__LambdaHeadVar__1_16 = ((MR_Word) mercury__io__conv1_LambdaHeadVar__1_16);
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Char mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_8 ;
	Character =  mercury__io__HeadVar__2_2 ;
		{

    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            mercury_output_error(Stream, errno);
        }
        if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                mercury_output_error(Stream, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Float mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Float Val;

	Stream = (MercuryFilePtr) mercury__io__Stream_8 ;
	Val =  mercury__io__HeadVar__2_2 ;
		{

    char buf[MR_SPRINTF_FLOAT_BUF_SIZE];
    MR_sprintf_float(buf, Val);
    if (ML_fprintf(Stream, "%s", buf) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;

	Stream = (MercuryFilePtr) mercury__io__Stream_8 ;
	Val =  mercury__io__HeadVar__2_2 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_String mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;

	Stream = (MercuryFilePtr) mercury__io__Stream_8 ;
	Message =  mercury__io__HeadVar__2_2 ;
		{

    mercury_print_string(Stream, Message);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_5 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_6 = (MR_Word) &mercury__io_scalar_common_3[1];

    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(mercury__io__TypeClassInfo_for_writer_5, mercury__io__TypeClassInfo_for_writer_6, mercury__io__HeadVar__1_1, (MR_Integer) 1, mercury__io__HeadVar__2_2);
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;

	Stream = (MercuryFilePtr) mercury__io__Stream_8 ;
	Byte =  mercury__io__HeadVar__2_2 ;
		{

    /* call putc with a strictly non-negative byte-sized integer */
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Box mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__NumBytes_10;

    {
      mercury__io__succeeded = mercury__bitmap__num_bytes_1_f_0(mercury__io__HeadVar__2_2, &mercury__io__NumBytes_10);
    }
    if (mercury__io__succeeded)
      {
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_BitmapPtr Bitmap;
	MR_Integer Start;
	MR_Integer Length;

	Stream = (MercuryFilePtr) mercury__io__Stream_8 ;
	Bitmap = (MR_BitmapPtr) mercury__io__HeadVar__2_2 ;
	Start =  (MR_Integer) 0 ;
	Length =  mercury__io__NumBytes_10 ;
		{

    MR_Integer bytes_written =
        (MR_Integer)MR_WRITE(*Stream, Bitmap->elements + Start, Length);
    if (bytes_written != Length) {
        mercury_io_error(Stream, "Error writing bitmap.");
    }


		;}
#undef MR_PROC_LABEL
}
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "io.write_bitmap: bitmap contains partial final byte");
          return;
        }
      }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word mercury__io__Slice_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__V_11_11;
    MR_Integer mercury__io__V_12_12;
    MR_Integer mercury__io__V_5_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__Slice_6, (MR_Integer) 1)));
    MR_Box mercury__io__V_4_24 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__io__Slice_6, (MR_Integer) 0)));
    MR_Integer mercury__io__V_5_29;
    MR_Integer mercury__io__V_5_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__Slice_6, (MR_Integer) 2)));
    MR_Box mercury__io__V_4_32;
    MR_Integer mercury__io__V_5_33;

    {
      mercury__io__V_11_11 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_start_byte_index", mercury__io__V_5_21);
    }
    mercury__io__V_4_32 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__io__Slice_6, (MR_Integer) 0)));
    mercury__io__V_5_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__Slice_6, (MR_Integer) 1)));
    mercury__io__V_5_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__Slice_6, (MR_Integer) 2)));
    {
      mercury__io__V_12_12 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_num_bytes", mercury__io__V_5_29);
    }
    {
      mercury__io__write_bitmap_6_p_0(mercury__io__Stream_5, mercury__io__V_4_24, mercury__io__V_11_11, mercury__io__V_12_12);
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_String * mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__stream_name_4_p_0(mercury__io__Stream_8, mercury__io__HeadVar__2_2);
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_String * mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__stream_name_4_p_0(mercury__io__Stream_8, mercury__io__HeadVar__2_2);
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_String * mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__stream_name_4_p_0(mercury__io__Stream_8, mercury__io__HeadVar__2_2);
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_String * mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__stream_name_4_p_0(mercury__io__Stream_8, mercury__io__HeadVar__2_2);
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0(
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__Whence0_7,
  MR_Integer mercury__io__OffSet_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Whence_10;
    MR_Box mercury__io__Stream_18;
    MR_Integer mercury__io__Flag_20;

    switch (mercury__io__Whence0_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__Whence_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        mercury__io__Whence_10 = (MR_Integer) 2;
        break;
      case (MR_Integer) 0:
        mercury__io__Whence_10 = (MR_Integer) 0;
        break;
    }
    mercury__io__Stream_18 = (MR_Box) mercury__io__Stream_6;
    switch (mercury__io__Whence_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__Flag_20 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        mercury__io__Flag_20 = (MR_Integer) 2;
        break;
      case (MR_Integer) 0:
        mercury__io__Flag_20 = (MR_Integer) 0;
        break;
    }
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	MR_Integer Off;

	Stream = (MercuryFilePtr) mercury__io__Stream_18 ;
	Flag =  mercury__io__Flag_20 ;
	Off =  mercury__io__OffSet_8 ;
		{

    static const int seek_flags[] = { SEEK_SET, SEEK_CUR, SEEK_END };

    /* XXX should check for failure */
    /* XXX should also check if the stream is seekable */
    if (MR_IS_FILE_STREAM(*Stream)) {
        fseek(MR_file(*Stream), Off, seek_flags[Flag]);
    } else {
        mercury_io_error(Stream, "io.seek_binary_2: unseekable stream");
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0(
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__Whence0_7,
  MR_Integer mercury__io__OffSet_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Whence_10;
    MR_Box mercury__io__Stream_18;
    MR_Integer mercury__io__Flag_20;

    switch (mercury__io__Whence0_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__Whence_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        mercury__io__Whence_10 = (MR_Integer) 2;
        break;
      case (MR_Integer) 0:
        mercury__io__Whence_10 = (MR_Integer) 0;
        break;
    }
    mercury__io__Stream_18 = (MR_Box) mercury__io__Stream_6;
    switch (mercury__io__Whence_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__Flag_20 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        mercury__io__Flag_20 = (MR_Integer) 2;
        break;
      case (MR_Integer) 0:
        mercury__io__Flag_20 = (MR_Integer) 0;
        break;
    }
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	MR_Integer Off;

	Stream = (MercuryFilePtr) mercury__io__Stream_18 ;
	Flag =  mercury__io__Flag_20 ;
	Off =  mercury__io__OffSet_8 ;
		{

    static const int seek_flags[] = { SEEK_SET, SEEK_CUR, SEEK_END };

    /* XXX should check for failure */
    /* XXX should also check if the stream is seekable */
    if (MR_IS_FILE_STREAM(*Stream)) {
        fseek(MR_file(*Stream), Off, seek_flags[Flag]);
    } else {
        mercury_io_error(Stream, "io.seek_binary_2: unseekable stream");
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Result0_8;
    MR_Integer mercury__io__Code_18;
    MR_Box mercury__io__Stream_28 = (MR_Box) mercury__io__Stream_5;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_28, &mercury__io__Code_18);
    }
    mercury__io__succeeded = (mercury__io__Code_18 == (MR_Integer) -1);
    if (mercury__io__succeeded)
      mercury__io__Result0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Char mercury__io__Char_19;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_18 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_19  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__io__succeeded)
          {
            mercury__io__Result0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__io__Result0_8, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_19));
          }
        else
          {
            MR_String mercury__io__Msg_20;
            MR_Word mercury__io__V_24_24;
            MR_Box mercury__io__Error_36;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_36 );
}
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_36 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_20  = Msg;
}
            mercury__io__V_24_24 = (MR_Word) mercury__io__Msg_20;
            {
              mercury__io__Result0_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mercury__io__Result0_8, 0) = ((MR_Box) (mercury__io__V_24_24));
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__io__Result0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Char mercury__io__T_39 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Result0_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__io__T_39));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__io__Error_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__Result0_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__io__Error_40));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Result0_8;

    {
      mercury__io__read_line_as_string_4_p_0(mercury__io__Stream_5, &mercury__io__Result0_8);
    }
    switch (MR_tag((MR_Word) mercury__io__Result0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_String mercury__io__String_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__io__Result0_8, (MR_Integer) 0)));
          MR_Word mercury__io__V_14_14 = (MR_Word) mercury__io__String_9;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_14_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__io__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__Result0_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__io__Error_10));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Result0_8;

    {
      mercury__io__read_file_as_string_4_p_0(mercury__io__Stream_5, &mercury__io__Result0_8);
    }
    if (((MR_tag((MR_Word) mercury__io__Result0_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__io__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Result0_8, (MR_Integer) 1)));
        MR_String mercury__io___PartialString_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__io__Result0_8, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__io__Error_11));
        }
      }
    else
      {
        MR_String mercury__io__String_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__io__Result0_8, (MR_Integer) 0)));
        MR_Word mercury__io__V_15_15 = (MR_Word) mercury__io__String_9;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_15_15));
        }
      }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Result0_8;
    MR_Integer mercury__io__Code_18;
    MR_Box mercury__io__Stream_29 = (MR_Box) mercury__io__Stream_5;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_29 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_18  = ByteVal;
}
    mercury__io__succeeded = (mercury__io__Code_18 >= (MR_Integer) 0);
    if (mercury__io__succeeded)
      {
        mercury__io__Result0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__io__Result0_8, 0) = ((MR_Box) (mercury__io__Code_18));
      }
    else
      {
        mercury__io__succeeded = (mercury__io__Code_18 == (MR_Integer) -1);
        if (mercury__io__succeeded)
          mercury__io__Result0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_String mercury__io__Msg_19;
            MR_Word mercury__io__V_25_25;
            MR_Box mercury__io__Error_37;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_37 );
}
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_37 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_19  = Msg;
}
            mercury__io__V_25_25 = (MR_Word) mercury__io__Msg_19;
            {
              mercury__io__Result0_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mercury__io__Result0_8, 0) = ((MR_Box) (mercury__io__V_25_25));
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__io__Result0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mercury__io__T_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__Result0_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__T_40));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__io__Error_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__Result0_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__io__Error_41));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Char mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__putback_char_2_4_p_0(mercury__io__Stream_8, mercury__io__HeadVar__2_2);
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_8 ;
	Character =  mercury__io__HeadVar__2_2 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_byte: ungetc failed");
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(
  MR_Word mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_6 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_6 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(
  MR_Word mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_6 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_6 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__io__Stream_8 ;
	LineNum =  mercury__io__HeadVar__2_2 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer * mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__io__Stream_8 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__HeadVar__2_2  = LineNum;
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__io__Stream_8 ;
	LineNum =  mercury__io__HeadVar__2_2 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer * mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_8 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__io__Stream_8 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__HeadVar__2_2  = LineNum;
}
  }
}

MR_String MR_CALL 
mercury__io__ClassMethod_for_stream__error____io__error__arity0______stream__error_message_1_1_f_0(
  MR_Word mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__HeadVar__2_2 = (MR_String) mercury__io__HeadVar__1_1;

    return mercury__io__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__bulk_reader____io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0______stream__bulk_get_9_9_p_0(
  MR_Word mercury__io__Stream_10,
  MR_Integer mercury__io__Index_11,
  MR_Integer mercury__io__Int_12,
  MR_Box mercury__io__STATE_VARIABLE_Store_0_18,
  MR_Box * mercury__io__STATE_VARIABLE_Store_19,
  MR_Integer * mercury__io__NumRead_14,
  MR_Word * mercury__io__Result_15)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Result0_17;

    {
      mercury__io__read_bitmap_9_p_0(mercury__io__Stream_10, mercury__io__Index_11, mercury__io__Int_12, mercury__io__STATE_VARIABLE_Store_0_18, mercury__io__STATE_VARIABLE_Store_19, mercury__io__NumRead_14, &mercury__io__Result0_17);
    }
    if ((mercury__io__Result0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__io__Result_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__io__E_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Result0_17, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_15 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__E_24));
        }
      }
  }
}

void MR_CALL 
mercury__io____Compare____whence_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Cast_HeadVar1_4 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__Cast_HeadVar2_5 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__Cast_HeadVar1_4 < mercury__io__Cast_HeadVar2_5);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__io__succeeded = (mercury__io__Cast_HeadVar1_4 == mercury__io__Cast_HeadVar2_5);
        if (mercury__io__succeeded)
          *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____whence_0_0(
  MR_Word mercury__io__HeadVar__2_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded = (mercury__io__HeadVar__2_1 == mercury__io__HeadVar__2_2);

    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____text_output_stream_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Cast_HeadVar1_4 = mercury__io__HeadVar__2_2;
    MR_Word mercury__io__Cast_HeadVar2_5 = mercury__io__HeadVar__3_3;

    {
      mercury__io____Compare____output_stream_0_0(mercury__io__HeadVar__1_1, mercury__io__Cast_HeadVar1_4, mercury__io__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____text_output_stream_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Cast_HeadVar1_3 = mercury__io__HeadVar__1_1;
    MR_Word mercury__io__Cast_HeadVar2_4 = mercury__io__HeadVar__2_2;

    {
      mercury__io__succeeded = mercury__io____Unify____output_stream_0_0(mercury__io__Cast_HeadVar1_3, mercury__io__Cast_HeadVar2_4);
    }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____text_input_stream_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Cast_HeadVar1_4 = mercury__io__HeadVar__2_2;
    MR_Word mercury__io__Cast_HeadVar2_5 = mercury__io__HeadVar__3_3;

    {
      mercury__io____Compare____input_stream_0_0(mercury__io__HeadVar__1_1, mercury__io__Cast_HeadVar1_4, mercury__io__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____text_input_stream_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Cast_HeadVar1_3 = mercury__io__HeadVar__1_1;
    MR_Word mercury__io__Cast_HeadVar2_4 = mercury__io__HeadVar__2_2;

    {
      mercury__io__succeeded = mercury__io____Unify____input_stream_0_0(mercury__io__Cast_HeadVar1_3, mercury__io__Cast_HeadVar2_4);
    }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____system_result_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_12 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_13 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_12 == mercury__io__CastY_13);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer mercury__io__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Integer mercury__io__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__3_3, (MR_Integer) 0)));

            mercury__io__succeeded = (mercury__io__V_16_16 < mercury__io__V_5_5);
            if (mercury__io__succeeded)
              *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
            else
              {
                mercury__io__succeeded = (mercury__io__V_16_16 == mercury__io__V_5_5);
                if (mercury__io__succeeded)
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                else
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
              }
          }
        else
          *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Integer mercury__io__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Integer mercury__io__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 0)));

            mercury__io__succeeded = (mercury__io__V_17_17 < mercury__io__V_11_11);
            if (mercury__io__succeeded)
              *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
            else
              {
                mercury__io__succeeded = (mercury__io__V_17_17 == mercury__io__V_11_11);
                if (mercury__io__succeeded)
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                else
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____system_result_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_7 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_8 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_7 == mercury__io__CastY_8);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer mercury__io__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__io__V_4_4;

        mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__io__succeeded)
          {
            mercury__io__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
            mercury__io__succeeded = (mercury__io__V_3_3 == mercury__io__V_4_4);
          }
      }
    else
      {
        MR_Integer mercury__io__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__io__V_6_6;

        mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__io__succeeded)
          {
            mercury__io__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
            mercury__io__succeeded = (mercury__io__V_5_5 == mercury__io__V_6_6);
          }
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____system_error_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Box mercury__io__HeadVar__2_2,
  MR_Box mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Cast_HeadVar1_4 = (MR_Word) mercury__io__HeadVar__2_2;
    MR_Word mercury__io__Cast_HeadVar2_5 = (MR_Word) mercury__io__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mercury__io__HeadVar__1_1, mercury__io__Cast_HeadVar1_4, mercury__io__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____system_error_0_0(
  MR_Box mercury__io__HeadVar__1_1,
  MR_Box mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Cast_HeadVar1_3 = (MR_Word) mercury__io__HeadVar__1_1;
    MR_Word mercury__io__Cast_HeadVar2_4 = (MR_Word) mercury__io__HeadVar__2_2;

    {
      mercury__io__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__io__Cast_HeadVar1_3, mercury__io__Cast_HeadVar2_4);
    }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____stream_source_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_12 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_13 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_12 == mercury__io__CastY_13);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__io__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__io__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__io__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__io__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__io__V_7_19;

{
#define MR_PROC_LABEL mercury__io____Compare____stream_source_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__io__V_15_15 ;
	S2 =  mercury__io__V_5_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_7_19  = Res;
}
                  mercury__io__succeeded = (mercury__io__V_7_19 < (MR_Integer) 0);
                  if (mercury__io__succeeded)
                    *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__io__succeeded = (mercury__io__V_7_19 == (MR_Integer) 0);
                      if (mercury__io__succeeded)
                        *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____stream_source_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_11 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_12 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_11 == mercury__io__CastY_12);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__io__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__io__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__io__CastX_5 = (MR_Integer) mercury__io__HeadVar__1_1;
                MR_Integer mercury__io__CastY_6 = (MR_Integer) mercury__io__HeadVar__2_2;

                mercury__io__succeeded = (mercury__io__CastY_6 == mercury__io__CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__io__CastX_7 = (MR_Integer) mercury__io__HeadVar__1_1;
                MR_Integer mercury__io__CastY_8 = (MR_Integer) mercury__io__HeadVar__2_2;

                mercury__io__succeeded = (mercury__io__CastY_8 == mercury__io__CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mercury__io__CastX_9 = (MR_Integer) mercury__io__HeadVar__1_1;
                MR_Integer mercury__io__CastY_10 = (MR_Integer) mercury__io__HeadVar__2_2;

                mercury__io__succeeded = (mercury__io__CastY_10 == mercury__io__CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__io__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__io__V_4_4;

            mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__io__succeeded)
              {
                mercury__io__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__io__succeeded = (strcmp(mercury__io__V_3_3, mercury__io__V_4_4) == 0);
              }
          }
          break;
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____stream_mode_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Cast_HeadVar1_4 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__Cast_HeadVar2_5 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__Cast_HeadVar1_4 < mercury__io__Cast_HeadVar2_5);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__io__succeeded = (mercury__io__Cast_HeadVar1_4 == mercury__io__Cast_HeadVar2_5);
        if (mercury__io__succeeded)
          *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____stream_mode_0_0(
  MR_Word mercury__io__HeadVar__2_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded = (mercury__io__HeadVar__2_1 == mercury__io__HeadVar__2_2);

    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____stream_info_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_15 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_16 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_15 == mercury__io__CastY_16);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__io__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer mercury__io__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mercury__io__V_12_12;

        mercury__io__succeeded = (mercury__io__V_4_4 < mercury__io__V_8_8);
        if (mercury__io__succeeded)
          mercury__io__V_12_12 = (MR_Integer) 1;
        else
          {
            mercury__io__succeeded = (mercury__io__V_4_4 == mercury__io__V_8_8);
            if (mercury__io__succeeded)
              mercury__io__V_12_12 = (MR_Integer) 0;
            else
              mercury__io__V_12_12 = (MR_Integer) 2;
          }
        mercury__io__succeeded = (mercury__io__V_12_12 == (MR_Integer) 0);
        mercury__io__succeeded = !(mercury__io__succeeded);
        if (mercury__io__succeeded)
          *mercury__io__HeadVar__1_1 = mercury__io__V_12_12;
        else
          {
            MR_Word mercury__io__V_13_13;
            MR_Integer mercury__io__V_21_21 = (MR_Integer) mercury__io__V_5_5;
            MR_Integer mercury__io__V_22_22 = (MR_Integer) mercury__io__V_9_9;

            mercury__io__succeeded = (mercury__io__V_21_21 < mercury__io__V_22_22);
            if (mercury__io__succeeded)
              mercury__io__V_13_13 = (MR_Integer) 1;
            else
              {
                mercury__io__succeeded = (mercury__io__V_21_21 == mercury__io__V_22_22);
                if (mercury__io__succeeded)
                  mercury__io__V_13_13 = (MR_Integer) 0;
                else
                  mercury__io__V_13_13 = (MR_Integer) 2;
              }
            mercury__io__succeeded = (mercury__io__V_13_13 == (MR_Integer) 0);
            mercury__io__succeeded = !(mercury__io__succeeded);
            if (mercury__io__succeeded)
              *mercury__io__HeadVar__1_1 = mercury__io__V_13_13;
            else
              {
                MR_Word mercury__io__V_14_14;
                MR_Integer mercury__io__V_23_23 = (MR_Integer) mercury__io__V_6_6;
                MR_Integer mercury__io__V_24_24 = (MR_Integer) mercury__io__V_10_10;

                mercury__io__succeeded = (mercury__io__V_23_23 < mercury__io__V_24_24);
                if (mercury__io__succeeded)
                  mercury__io__V_14_14 = (MR_Integer) 1;
                else
                  {
                    mercury__io__succeeded = (mercury__io__V_23_23 == mercury__io__V_24_24);
                    if (mercury__io__succeeded)
                      mercury__io__V_14_14 = (MR_Integer) 0;
                    else
                      mercury__io__V_14_14 = (MR_Integer) 2;
                  }
                mercury__io__succeeded = (mercury__io__V_14_14 == (MR_Integer) 0);
                mercury__io__succeeded = !(mercury__io__succeeded);
                if (mercury__io__succeeded)
                  *mercury__io__HeadVar__1_1 = mercury__io__V_14_14;
                else
                  {
                    mercury__io____Compare____stream_source_0_0(mercury__io__HeadVar__1_1, mercury__io__V_7_7, mercury__io__V_11_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____stream_info_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_11 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_12 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_11 == mercury__io__CastY_12);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
      {
        MR_Integer mercury__io__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__io__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer mercury__io__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 3)));

        mercury__io__succeeded = (mercury__io__V_3_3 == mercury__io__V_7_7);
        if (mercury__io__succeeded)
          {
            mercury__io__succeeded = (mercury__io__V_4_4 == mercury__io__V_8_8);
            if (mercury__io__succeeded)
              {
                mercury__io__succeeded = (mercury__io__V_5_5 == mercury__io__V_9_9);
                if (mercury__io__succeeded)
                  {
                    mercury__io__succeeded = mercury__io____Unify____stream_source_0_0(mercury__io__V_6_6, mercury__io__V_10_10);
                  }
              }
          }
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____stream_id_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Integer mercury__io__HeadVar__2_2,
  MR_Integer mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Cast_HeadVar1_4 = mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__Cast_HeadVar2_5 = mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__Cast_HeadVar1_4 < mercury__io__Cast_HeadVar2_5);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__io__succeeded = (mercury__io__Cast_HeadVar1_4 == mercury__io__Cast_HeadVar2_5);
        if (mercury__io__succeeded)
          *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____stream_id_0_0(
  MR_Integer mercury__io__HeadVar__1_1,
  MR_Integer mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Cast_HeadVar1_3 = mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__Cast_HeadVar2_4 = mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__Cast_HeadVar1_3 == mercury__io__Cast_HeadVar2_4);
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____stream_db_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeInfo_6_6 = (MR_Word) &mercury__io_scalar_common_1[1];
    MR_Word mercury__io__Cast_HeadVar1_4 = mercury__io__HeadVar__2_2;
    MR_Word mercury__io__Cast_HeadVar2_5 = mercury__io__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__io__TypeInfo_6_6, mercury__io__HeadVar__1_1, ((MR_Box) (mercury__io__Cast_HeadVar1_4)), ((MR_Box) (mercury__io__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____stream_db_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeInfo_5_5 = (MR_Word) &mercury__io_scalar_common_1[1];
    MR_Word mercury__io__Cast_HeadVar1_3 = mercury__io__HeadVar__1_1;
    MR_Word mercury__io__Cast_HeadVar2_4 = mercury__io__HeadVar__2_2;

    {
      mercury__io__succeeded = mercury__builtin__unify_2_p_0(mercury__io__TypeInfo_5_5, ((MR_Box) (mercury__io__Cast_HeadVar1_3)), ((MR_Box) (mercury__io__Cast_HeadVar2_4)));
    }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____stream_content_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Cast_HeadVar1_4 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__Cast_HeadVar2_5 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__Cast_HeadVar1_4 < mercury__io__Cast_HeadVar2_5);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__io__succeeded = (mercury__io__Cast_HeadVar1_4 == mercury__io__Cast_HeadVar2_5);
        if (mercury__io__succeeded)
          *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____stream_content_0_0(
  MR_Word mercury__io__HeadVar__2_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded = (mercury__io__HeadVar__2_1 == mercury__io__HeadVar__2_2);

    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____stream_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Box mercury__io__HeadVar__2_2,
  MR_Box mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Cast_HeadVar1_4 = (MR_Word) mercury__io__HeadVar__2_2;
    MR_Word mercury__io__Cast_HeadVar2_5 = (MR_Word) mercury__io__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mercury__io__HeadVar__1_1, mercury__io__Cast_HeadVar1_4, mercury__io__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____stream_0_0(
  MR_Box mercury__io__HeadVar__1_1,
  MR_Box mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Cast_HeadVar1_3 = (MR_Word) mercury__io__HeadVar__1_1;
    MR_Word mercury__io__Cast_HeadVar2_4 = (MR_Word) mercury__io__HeadVar__2_2;

    {
      mercury__io__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__io__Cast_HeadVar1_3, mercury__io__Cast_HeadVar2_4);
    }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____state_0_0(
  MR_Word * mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_105_111_95_95_115_116_97_116_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__io__HeadVar__1_1);
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____state_0_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_105_111_95_95_115_116_97_116_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____result_1_0(
  MR_Word mercury__io__TypeInfo_for_T_18,
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_16 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_17 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_16 == mercury__io__CastY_17);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__io__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box mercury__io__V_21_21 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mercury__io__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 0));

                  {
                    mercury__builtin__compare_3_p_0(mercury__io__TypeInfo_for_T_18, mercury__io__HeadVar__1_1, mercury__io__V_21_21, mercury__io__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String mercury__io__V_22_22 = (MR_String) mercury__io__V_20_20;
                  MR_String mercury__io__V_23_23 = (MR_String) mercury__io__V_15_15;
                  MR_Integer mercury__io__V_7_27;

{
#define MR_PROC_LABEL mercury__io____Compare____result_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__io__V_22_22 ;
	S2 =  mercury__io__V_23_23 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_7_27  = Res;
}
                  mercury__io__succeeded = (mercury__io__V_7_27 < (MR_Integer) 0);
                  if (mercury__io__succeeded)
                    *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__io__succeeded = (mercury__io__V_7_27 == (MR_Integer) 0);
                      if (mercury__io__succeeded)
                        *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____result_1_0(
  MR_Word mercury__io__TypeInfo_for_T_11,
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_9 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_10 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_9 == mercury__io__CastY_10);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__io__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mercury__io__CastX_5 = (MR_Integer) mercury__io__HeadVar__1_1;
            MR_Integer mercury__io__CastY_6 = (MR_Integer) mercury__io__HeadVar__2_2;

            mercury__io__succeeded = (mercury__io__CastY_6 == mercury__io__CastX_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box mercury__io__V_3_3 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mercury__io__V_4_4;

            mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__io__succeeded)
              {
                mercury__io__V_4_4 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0));
                {
                  mercury__io__succeeded = mercury__builtin__unify_2_p_0(mercury__io__TypeInfo_for_T_11, mercury__io__V_3_3, mercury__io__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__io__V_8_8;
            MR_Integer mercury__io__CastX_14;
            MR_Integer mercury__io__CastY_15;

            mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__io__succeeded)
              {
                mercury__io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__io__CastX_14 = (MR_Integer) mercury__io__V_7_7;
                mercury__io__CastY_15 = (MR_Integer) mercury__io__V_8_8;
                mercury__io__succeeded = (mercury__io__CastX_14 == mercury__io__CastY_15);
                if (mercury__io__succeeded)
                  mercury__io__succeeded = MR_TRUE;
                else
                  {
                    MR_String mercury__io__V_12_12 = (MR_String) mercury__io__V_7_7;
                    MR_String mercury__io__V_13_13 = (MR_String) mercury__io__V_8_8;

                    mercury__io__succeeded = (strcmp(mercury__io__V_12_12, mercury__io__V_13_13) == 0);
                  }
              }
          }
          break;
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____result_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_10 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_11 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_10 == mercury__io__CastY_11);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__io__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__io__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__io__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String mercury__io__V_14_14 = (MR_String) mercury__io__V_13_13;
                  MR_String mercury__io__V_15_15 = (MR_String) mercury__io__V_9_9;
                  MR_Integer mercury__io__V_7_19;

{
#define MR_PROC_LABEL mercury__io____Compare____result_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__io__V_14_14 ;
	S2 =  mercury__io__V_15_15 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_7_19  = Res;
}
                  mercury__io__succeeded = (mercury__io__V_7_19 < (MR_Integer) 0);
                  if (mercury__io__succeeded)
                    *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__io__succeeded = (mercury__io__V_7_19 == (MR_Integer) 0);
                      if (mercury__io__succeeded)
                        *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____result_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_9 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_10 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_9 == mercury__io__CastY_10);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__io__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__io__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__io__CastX_3 = (MR_Integer) mercury__io__HeadVar__1_1;
                MR_Integer mercury__io__CastY_4 = (MR_Integer) mercury__io__HeadVar__2_2;

                mercury__io__succeeded = (mercury__io__CastY_4 == mercury__io__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__io__CastX_5 = (MR_Integer) mercury__io__HeadVar__1_1;
                MR_Integer mercury__io__CastY_6 = (MR_Integer) mercury__io__HeadVar__2_2;

                mercury__io__succeeded = (mercury__io__CastY_6 == mercury__io__CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__io__V_8_8;
            MR_Integer mercury__io__CastX_13;
            MR_Integer mercury__io__CastY_14;

            mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__io__succeeded)
              {
                mercury__io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__io__CastX_13 = (MR_Integer) mercury__io__V_7_7;
                mercury__io__CastY_14 = (MR_Integer) mercury__io__V_8_8;
                mercury__io__succeeded = (mercury__io__CastX_13 == mercury__io__CastY_14);
                if (mercury__io__succeeded)
                  mercury__io__succeeded = MR_TRUE;
                else
                  {
                    MR_String mercury__io__V_11_11 = (MR_String) mercury__io__V_7_7;
                    MR_String mercury__io__V_12_12 = (MR_String) mercury__io__V_8_8;

                    mercury__io__succeeded = (strcmp(mercury__io__V_11_11, mercury__io__V_12_12) == 0);
                  }
              }
          }
          break;
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____res_1_0(
  MR_Word mercury__io__TypeInfo_for_T_14,
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_12 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_13 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_12 == mercury__io__CastY_13);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__io__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word mercury__io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 0)));
            MR_String mercury__io__V_18_18 = (MR_String) mercury__io__V_16_16;
            MR_String mercury__io__V_19_19 = (MR_String) mercury__io__V_11_11;
            MR_Integer mercury__io__V_7_23;

{
#define MR_PROC_LABEL mercury__io____Compare____res_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__io__V_18_18 ;
	S2 =  mercury__io__V_19_19 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_7_23  = Res;
}
            mercury__io__succeeded = (mercury__io__V_7_23 < (MR_Integer) 0);
            if (mercury__io__succeeded)
              *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
            else
              {
                mercury__io__succeeded = (mercury__io__V_7_23 == (MR_Integer) 0);
                if (mercury__io__succeeded)
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                else
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
              }
          }
        else
          *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Box mercury__io__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) mercury__io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Box mercury__io__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__3_3, (MR_Integer) 0));

            {
              mercury__builtin__compare_3_p_0(mercury__io__TypeInfo_for_T_14, mercury__io__HeadVar__1_1, mercury__io__V_17_17, mercury__io__V_5_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____res_1_0(
  MR_Word mercury__io__TypeInfo_for_T_9,
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_7 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_8 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_7 == mercury__io__CastY_8);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__io__V_6_6;
        MR_Integer mercury__io__CastX_12;
        MR_Integer mercury__io__CastY_13;

        mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__io__succeeded)
          {
            mercury__io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
            mercury__io__CastX_12 = (MR_Integer) mercury__io__V_5_5;
            mercury__io__CastY_13 = (MR_Integer) mercury__io__V_6_6;
            mercury__io__succeeded = (mercury__io__CastX_12 == mercury__io__CastY_13);
            if (mercury__io__succeeded)
              mercury__io__succeeded = MR_TRUE;
            else
              {
                MR_String mercury__io__V_10_10 = (MR_String) mercury__io__V_5_5;
                MR_String mercury__io__V_11_11 = (MR_String) mercury__io__V_6_6;

                mercury__io__succeeded = (strcmp(mercury__io__V_10_10, mercury__io__V_11_11) == 0);
              }
          }
      }
    else
      {
        MR_Box mercury__io__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mercury__io__V_4_4;

        mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__io__succeeded)
          {
            mercury__io__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 0));
            {
              mercury__io__succeeded = mercury__builtin__unify_2_p_0(mercury__io__TypeInfo_for_T_9, mercury__io__V_3_3, mercury__io__V_4_4);
            }
          }
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____res_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_8 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_9 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_8 == mercury__io__CastY_9);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mercury__io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word mercury__io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));

        if ((mercury__io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word mercury__io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 0)));
            MR_String mercury__io__V_12_12 = (MR_String) mercury__io__V_11_11;
            MR_String mercury__io__V_13_13 = (MR_String) mercury__io__V_7_7;
            MR_Integer mercury__io__V_7_17;

{
#define MR_PROC_LABEL mercury__io____Compare____res_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__io__V_12_12 ;
	S2 =  mercury__io__V_13_13 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_7_17  = Res;
}
            mercury__io__succeeded = (mercury__io__V_7_17 < (MR_Integer) 0);
            if (mercury__io__succeeded)
              *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
            else
              {
                mercury__io__succeeded = (mercury__io__V_7_17 == (MR_Integer) 0);
                if (mercury__io__succeeded)
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                else
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____res_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_7 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_8 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_7 == mercury__io__CastY_8);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
    if ((mercury__io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mercury__io__CastX_3 = (MR_Integer) mercury__io__HeadVar__1_1;
        MR_Integer mercury__io__CastY_4 = (MR_Integer) mercury__io__HeadVar__2_2;

        mercury__io__succeeded = (mercury__io__CastY_4 == mercury__io__CastX_3);
      }
    else
      {
        MR_Word mercury__io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__io__V_6_6;
        MR_Integer mercury__io__CastX_11;
        MR_Integer mercury__io__CastY_12;

        mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__io__succeeded)
          {
            mercury__io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
            mercury__io__CastX_11 = (MR_Integer) mercury__io__V_5_5;
            mercury__io__CastY_12 = (MR_Integer) mercury__io__V_6_6;
            mercury__io__succeeded = (mercury__io__CastX_11 == mercury__io__CastY_12);
            if (mercury__io__succeeded)
              mercury__io__succeeded = MR_TRUE;
            else
              {
                MR_String mercury__io__V_9_9 = (MR_String) mercury__io__V_5_5;
                MR_String mercury__io__V_10_10 = (MR_String) mercury__io__V_6_6;

                mercury__io__succeeded = (strcmp(mercury__io__V_9_9, mercury__io__V_10_10) == 0);
              }
          }
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____read_result_1_0(
  MR_Word mercury__io__TypeInfo_for_T_25,
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_23 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_24 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_23 == mercury__io__CastY_24);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__io__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box mercury__io__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mercury__io__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 0));

                  {
                    mercury__builtin__compare_3_p_0(mercury__io__TypeInfo_for_T_25, mercury__io__HeadVar__1_1, mercury__io__V_30_30, mercury__io__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__io__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__2_2, (MR_Integer) 1)));
            MR_String mercury__io__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String mercury__io__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__io__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__io__V_22_22;
                  MR_Integer mercury__io__V_7_34;

{
#define MR_PROC_LABEL mercury__io____Compare____read_result_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__io__V_29_29 ;
	S2 =  mercury__io__V_20_20 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_7_34  = Res;
}
                  mercury__io__succeeded = (mercury__io__V_7_34 < (MR_Integer) 0);
                  if (mercury__io__succeeded)
                    mercury__io__V_22_22 = (MR_Integer) 1;
                  else
                    {
                      mercury__io__succeeded = (mercury__io__V_7_34 == (MR_Integer) 0);
                      if (mercury__io__succeeded)
                        mercury__io__V_22_22 = (MR_Integer) 0;
                      else
                        mercury__io__V_22_22 = (MR_Integer) 2;
                    }
                  mercury__io__succeeded = (mercury__io__V_22_22 == (MR_Integer) 0);
                  mercury__io__succeeded = !(mercury__io__succeeded);
                  if (mercury__io__succeeded)
                    *mercury__io__HeadVar__1_1 = mercury__io__V_22_22;
                  else
                    {
                      mercury__io__succeeded = (mercury__io__V_28_28 < mercury__io__V_21_21);
                      if (mercury__io__succeeded)
                        *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                      else
                        {
                          mercury__io__succeeded = (mercury__io__V_28_28 == mercury__io__V_21_21);
                          if (mercury__io__succeeded)
                            *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                        }
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____read_result_1_0(
  MR_Word mercury__io__TypeInfo_for_T_13,
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_11 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_12 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_11 == mercury__io__CastY_12);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__io__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mercury__io__CastX_5 = (MR_Integer) mercury__io__HeadVar__1_1;
            MR_Integer mercury__io__CastY_6 = (MR_Integer) mercury__io__HeadVar__2_2;

            mercury__io__succeeded = (mercury__io__CastY_6 == mercury__io__CastX_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box mercury__io__V_3_3 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mercury__io__V_4_4;

            mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__io__succeeded)
              {
                mercury__io__V_4_4 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0));
                {
                  mercury__io__succeeded = mercury__builtin__unify_2_p_0(mercury__io__TypeInfo_for_T_13, mercury__io__V_3_3, mercury__io__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mercury__io__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__io__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__1_1, (MR_Integer) 1)));
            MR_String mercury__io__V_9_9;
            MR_Integer mercury__io__V_10_10;

            mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__io__succeeded)
              {
                mercury__io__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__io__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__2_2, (MR_Integer) 1)));
                mercury__io__succeeded = (strcmp(mercury__io__V_7_7, mercury__io__V_9_9) == 0);
                if (mercury__io__succeeded)
                  mercury__io__succeeded = (mercury__io__V_8_8 == mercury__io__V_10_10);
              }
          }
          break;
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____posn_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_12 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_13 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_12 == mercury__io__CastY_13);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__io__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__io__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__io__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mercury__io__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mercury__io__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer mercury__io__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__io__V_10_10;

        mercury__io__succeeded = (mercury__io__V_4_4 < mercury__io__V_7_7);
        if (mercury__io__succeeded)
          mercury__io__V_10_10 = (MR_Integer) 1;
        else
          {
            mercury__io__succeeded = (mercury__io__V_4_4 == mercury__io__V_7_7);
            if (mercury__io__succeeded)
              mercury__io__V_10_10 = (MR_Integer) 0;
            else
              mercury__io__V_10_10 = (MR_Integer) 2;
          }
        mercury__io__succeeded = (mercury__io__V_10_10 == (MR_Integer) 0);
        mercury__io__succeeded = !(mercury__io__succeeded);
        if (mercury__io__succeeded)
          *mercury__io__HeadVar__1_1 = mercury__io__V_10_10;
        else
          {
            MR_Word mercury__io__V_11_11;

            mercury__io__succeeded = (mercury__io__V_5_5 < mercury__io__V_8_8);
            if (mercury__io__succeeded)
              mercury__io__V_11_11 = (MR_Integer) 1;
            else
              {
                mercury__io__succeeded = (mercury__io__V_5_5 == mercury__io__V_8_8);
                if (mercury__io__succeeded)
                  mercury__io__V_11_11 = (MR_Integer) 0;
                else
                  mercury__io__V_11_11 = (MR_Integer) 2;
              }
            mercury__io__succeeded = (mercury__io__V_11_11 == (MR_Integer) 0);
            mercury__io__succeeded = !(mercury__io__succeeded);
            if (mercury__io__succeeded)
              *mercury__io__HeadVar__1_1 = mercury__io__V_11_11;
            else
              {
                mercury__io__succeeded = (mercury__io__V_6_6 < mercury__io__V_9_9);
                if (mercury__io__succeeded)
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                else
                  {
                    mercury__io__succeeded = (mercury__io__V_6_6 == mercury__io__V_9_9);
                    if (mercury__io__succeeded)
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____posn_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_9 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_10 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_9 == mercury__io__CastY_10);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
      {
        MR_Integer mercury__io__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__io__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__io__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mercury__io__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__io__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__io__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 2)));

        mercury__io__succeeded = (mercury__io__V_3_3 == mercury__io__V_6_6);
        if (mercury__io__succeeded)
          {
            mercury__io__succeeded = (mercury__io__V_4_4 == mercury__io__V_7_7);
            if (mercury__io__succeeded)
              mercury__io__succeeded = (mercury__io__V_5_5 == mercury__io__V_8_8);
          }
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____poly_type_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Cast_HeadVar1_4 = mercury__io__HeadVar__2_2;
    MR_Word mercury__io__Cast_HeadVar2_5 = mercury__io__HeadVar__3_3;

    {
      mercury__string____Compare____poly_type_0_0(mercury__io__HeadVar__1_1, mercury__io__Cast_HeadVar1_4, mercury__io__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____poly_type_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Cast_HeadVar1_3 = mercury__io__HeadVar__1_1;
    MR_Word mercury__io__Cast_HeadVar2_4 = mercury__io__HeadVar__2_2;

    {
      mercury__io__succeeded = mercury__string____Unify____poly_type_0_0(mercury__io__Cast_HeadVar1_3, mercury__io__Cast_HeadVar2_4);
    }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____output_stream_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_6 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_7 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_6 == mercury__io__CastY_7);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__io__V_4_4 = (MR_Box) mercury__io__HeadVar__2_2;
        MR_Box mercury__io__V_5_5 = (MR_Box) mercury__io__HeadVar__3_3;
        MR_Word mercury__io__Cast_HeadVar1_9 = (MR_Word) mercury__io__V_4_4;
        MR_Word mercury__io__Cast_HeadVar2_10 = (MR_Word) mercury__io__V_5_5;

        {
          mercury__builtin____Compare____c_pointer_0_0(mercury__io__HeadVar__1_1, mercury__io__Cast_HeadVar1_9, mercury__io__Cast_HeadVar2_10);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____output_stream_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_5 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_6 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_5 == mercury__io__CastY_6);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__io__V_3_3 = (MR_Box) mercury__io__HeadVar__1_1;
        MR_Box mercury__io__V_4_4 = (MR_Box) mercury__io__HeadVar__2_2;
        MR_Word mercury__io__Cast_HeadVar1_7 = (MR_Word) mercury__io__V_3_3;
        MR_Word mercury__io__Cast_HeadVar2_8 = (MR_Word) mercury__io__V_4_4;

        {
          mercury__io__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__io__Cast_HeadVar1_7, mercury__io__Cast_HeadVar2_8);
        }
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____maybe_stream_info_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_23 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_24 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_23 == mercury__io__CastY_24);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mercury__io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word mercury__io__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mercury__io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__io__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__io__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));

        if ((mercury__io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Integer mercury__io__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word mercury__io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 3)));
            MR_Word mercury__io__V_12_12;

            mercury__io__succeeded = (mercury__io__V_32_32 < mercury__io__V_8_8);
            if (mercury__io__succeeded)
              mercury__io__V_12_12 = (MR_Integer) 1;
            else
              {
                mercury__io__succeeded = (mercury__io__V_32_32 == mercury__io__V_8_8);
                if (mercury__io__succeeded)
                  mercury__io__V_12_12 = (MR_Integer) 0;
                else
                  mercury__io__V_12_12 = (MR_Integer) 2;
              }
            mercury__io__succeeded = (mercury__io__V_12_12 == (MR_Integer) 0);
            mercury__io__succeeded = !(mercury__io__succeeded);
            if (mercury__io__succeeded)
              *mercury__io__HeadVar__1_1 = mercury__io__V_12_12;
            else
              {
                MR_Word mercury__io__V_13_13;
                MR_Integer mercury__io__V_33_33 = (MR_Integer) mercury__io__V_31_31;
                MR_Integer mercury__io__V_34_34 = (MR_Integer) mercury__io__V_9_9;

                mercury__io__succeeded = (mercury__io__V_33_33 < mercury__io__V_34_34);
                if (mercury__io__succeeded)
                  mercury__io__V_13_13 = (MR_Integer) 1;
                else
                  {
                    mercury__io__succeeded = (mercury__io__V_33_33 == mercury__io__V_34_34);
                    if (mercury__io__succeeded)
                      mercury__io__V_13_13 = (MR_Integer) 0;
                    else
                      mercury__io__V_13_13 = (MR_Integer) 2;
                  }
                mercury__io__succeeded = (mercury__io__V_13_13 == (MR_Integer) 0);
                mercury__io__succeeded = !(mercury__io__succeeded);
                if (mercury__io__succeeded)
                  *mercury__io__HeadVar__1_1 = mercury__io__V_13_13;
                else
                  {
                    MR_Word mercury__io__V_14_14;
                    MR_Integer mercury__io__V_35_35 = (MR_Integer) mercury__io__V_30_30;
                    MR_Integer mercury__io__V_36_36 = (MR_Integer) mercury__io__V_10_10;

                    mercury__io__succeeded = (mercury__io__V_35_35 < mercury__io__V_36_36);
                    if (mercury__io__succeeded)
                      mercury__io__V_14_14 = (MR_Integer) 1;
                    else
                      {
                        mercury__io__succeeded = (mercury__io__V_35_35 == mercury__io__V_36_36);
                        if (mercury__io__succeeded)
                          mercury__io__V_14_14 = (MR_Integer) 0;
                        else
                          mercury__io__V_14_14 = (MR_Integer) 2;
                      }
                    mercury__io__succeeded = (mercury__io__V_14_14 == (MR_Integer) 0);
                    mercury__io__succeeded = !(mercury__io__succeeded);
                    if (mercury__io__succeeded)
                      *mercury__io__HeadVar__1_1 = mercury__io__V_14_14;
                    else
                      {
                        mercury__io____Compare____stream_source_0_0(mercury__io__HeadVar__1_1, mercury__io__V_29_29, mercury__io__V_11_11);
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____maybe_stream_info_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_13 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_14 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_13 == mercury__io__CastY_14);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
    if ((mercury__io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mercury__io__CastX_11 = (MR_Integer) mercury__io__HeadVar__1_1;
        MR_Integer mercury__io__CastY_12 = (MR_Integer) mercury__io__HeadVar__2_2;

        mercury__io__succeeded = (mercury__io__CastY_12 == mercury__io__CastX_11);
      }
    else
      {
        MR_Integer mercury__io__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__io__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer mercury__io__V_7_7;
        MR_Word mercury__io__V_8_8;
        MR_Word mercury__io__V_9_9;
        MR_Word mercury__io__V_10_10;

        mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__io__succeeded)
          {
            mercury__io__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
            mercury__io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 1)));
            mercury__io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 2)));
            mercury__io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 3)));
            mercury__io__succeeded = (mercury__io__V_3_3 == mercury__io__V_7_7);
            if (mercury__io__succeeded)
              {
                mercury__io__succeeded = (mercury__io__V_4_4 == mercury__io__V_8_8);
                if (mercury__io__succeeded)
                  {
                    mercury__io__succeeded = (mercury__io__V_5_5 == mercury__io__V_9_9);
                    if (mercury__io__succeeded)
                      {
                        mercury__io__succeeded = mercury__io____Unify____stream_source_0_0(mercury__io__V_6_6, mercury__io__V_10_10);
                      }
                  }
              }
          }
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____maybe_partial_res_1_0(
  MR_Word mercury__io__TypeInfo_for_T_19,
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_17 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_18 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_17 == mercury__io__CastY_18);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__io__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__io__V_22_22 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) mercury__io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Box mercury__io__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 0));
            MR_Word mercury__io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__io__V_16_16;

            {
              mercury__builtin__compare_3_p_0(mercury__io__TypeInfo_for_T_19, &mercury__io__V_16_16, mercury__io__V_22_22, mercury__io__V_14_14);
            }
            mercury__io__succeeded = (mercury__io__V_16_16 == (MR_Integer) 0);
            mercury__io__succeeded = !(mercury__io__succeeded);
            if (mercury__io__succeeded)
              *mercury__io__HeadVar__1_1 = mercury__io__V_16_16;
            else
              {
                MR_String mercury__io__V_24_24 = (MR_String) mercury__io__V_21_21;
                MR_String mercury__io__V_25_25 = (MR_String) mercury__io__V_15_15;
                MR_Integer mercury__io__V_7_29;

{
#define MR_PROC_LABEL mercury__io____Compare____maybe_partial_res_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__io__V_24_24 ;
	S2 =  mercury__io__V_25_25 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_7_29  = Res;
}
                mercury__io__succeeded = (mercury__io__V_7_29 < (MR_Integer) 0);
                if (mercury__io__succeeded)
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                else
                  {
                    mercury__io__succeeded = (mercury__io__V_7_29 == (MR_Integer) 0);
                    if (mercury__io__succeeded)
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                  }
              }
          }
        else
          *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Box mercury__io__V_23_23 = (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) mercury__io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Box mercury__io__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__3_3, (MR_Integer) 0));

            {
              mercury__builtin__compare_3_p_0(mercury__io__TypeInfo_for_T_19, mercury__io__HeadVar__1_1, mercury__io__V_23_23, mercury__io__V_5_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____maybe_partial_res_1_0(
  MR_Word mercury__io__TypeInfo_for_T_11,
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_9 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_10 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_9 == mercury__io__CastY_10);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__io__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box mercury__io__V_7_7;
        MR_Word mercury__io__V_8_8;
        MR_Integer mercury__io__CastX_14;
        MR_Integer mercury__io__CastY_15;

        mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__io__succeeded)
          {
            mercury__io__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0));
            mercury__io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 1)));
            {
              mercury__io__succeeded = mercury__builtin__unify_2_p_0(mercury__io__TypeInfo_for_T_11, mercury__io__V_5_5, mercury__io__V_7_7);
            }
            if (mercury__io__succeeded)
              {
                mercury__io__CastX_14 = (MR_Integer) mercury__io__V_6_6;
                mercury__io__CastY_15 = (MR_Integer) mercury__io__V_8_8;
                mercury__io__succeeded = (mercury__io__CastX_14 == mercury__io__CastY_15);
                if (mercury__io__succeeded)
                  mercury__io__succeeded = MR_TRUE;
                else
                  {
                    MR_String mercury__io__V_12_12 = (MR_String) mercury__io__V_6_6;
                    MR_String mercury__io__V_13_13 = (MR_String) mercury__io__V_8_8;

                    mercury__io__succeeded = (strcmp(mercury__io__V_12_12, mercury__io__V_13_13) == 0);
                  }
              }
          }
      }
    else
      {
        MR_Box mercury__io__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mercury__io__V_4_4;

        mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__io__succeeded)
          {
            mercury__io__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 0));
            {
              mercury__io__succeeded = mercury__builtin__unify_2_p_0(mercury__io__TypeInfo_for_T_11, mercury__io__V_3_3, mercury__io__V_4_4);
            }
          }
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____io_0_0(
  MR_Word * mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_105_111_95_95_105_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__io__HeadVar__1_1);
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____io_0_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__succeeded = mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_105_111_95_95_105_111_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____input_stream_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_6 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_7 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_6 == mercury__io__CastY_7);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__io__V_4_4 = (MR_Box) mercury__io__HeadVar__2_2;
        MR_Box mercury__io__V_5_5 = (MR_Box) mercury__io__HeadVar__3_3;
        MR_Word mercury__io__Cast_HeadVar1_9 = (MR_Word) mercury__io__V_4_4;
        MR_Word mercury__io__Cast_HeadVar2_10 = (MR_Word) mercury__io__V_5_5;

        {
          mercury__builtin____Compare____c_pointer_0_0(mercury__io__HeadVar__1_1, mercury__io__Cast_HeadVar1_9, mercury__io__Cast_HeadVar2_10);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____input_stream_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_5 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_6 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_5 == mercury__io__CastY_6);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__io__V_3_3 = (MR_Box) mercury__io__HeadVar__1_1;
        MR_Box mercury__io__V_4_4 = (MR_Box) mercury__io__HeadVar__2_2;
        MR_Word mercury__io__Cast_HeadVar1_7 = (MR_Word) mercury__io__V_3_3;
        MR_Word mercury__io__Cast_HeadVar2_8 = (MR_Word) mercury__io__V_4_4;

        {
          mercury__io__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__io__Cast_HeadVar1_7, mercury__io__Cast_HeadVar2_8);
        }
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____file_type_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Cast_HeadVar1_4 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__Cast_HeadVar2_5 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__Cast_HeadVar1_4 < mercury__io__Cast_HeadVar2_5);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__io__succeeded = (mercury__io__Cast_HeadVar1_4 == mercury__io__Cast_HeadVar2_5);
        if (mercury__io__succeeded)
          *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____file_type_0_0(
  MR_Word mercury__io__HeadVar__2_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded = (mercury__io__HeadVar__2_1 == mercury__io__HeadVar__2_2);

    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____file_id_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Box mercury__io__HeadVar__2_2,
  MR_Box mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_4 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_5 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_4 == mercury__io__CastY_5);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        mercury__io__compare_file_id_3_p_0(mercury__io__HeadVar__1_1, mercury__io__HeadVar__2_2, mercury__io__HeadVar__3_3);
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____file_id_0_0(
  MR_Box mercury__io__HeadVar__1_1,
  MR_Box mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_4 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_5 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_4 == mercury__io__CastY_5);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__io__V_3_3;

        {
          mercury__io__compare_file_id_3_p_0(&mercury__io__V_3_3, mercury__io__HeadVar__1_1, mercury__io__HeadVar__2_2);
        }
        mercury__io__succeeded = (mercury__io__V_3_3 == (MR_Integer) 0);
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____error_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_6 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_7 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_6 == mercury__io__CastY_7);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mercury__io__V_4_4 = (MR_String) mercury__io__HeadVar__2_2;
        MR_String mercury__io__V_5_5 = (MR_String) mercury__io__HeadVar__3_3;
        MR_Integer mercury__io__V_7_12;

{
#define MR_PROC_LABEL mercury__io____Compare____error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__io__V_4_4 ;
	S2 =  mercury__io__V_5_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_7_12  = Res;
}
        mercury__io__succeeded = (mercury__io__V_7_12 < (MR_Integer) 0);
        if (mercury__io__succeeded)
          *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mercury__io__succeeded = (mercury__io__V_7_12 == (MR_Integer) 0);
            if (mercury__io__succeeded)
              *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
            else
              *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
          }
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____error_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_5 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_6 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_5 == mercury__io__CastY_6);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
      {
        MR_String mercury__io__V_3_3 = (MR_String) mercury__io__HeadVar__1_1;
        MR_String mercury__io__V_4_4 = (MR_String) mercury__io__HeadVar__2_2;

        mercury__io__succeeded = (strcmp(mercury__io__V_3_3, mercury__io__V_4_4) == 0);
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____chunk_inner_res0_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_10 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_11 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_10 == mercury__io__CastY_11);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__io__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__io__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__io__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String mercury__io__V_14_14 = (MR_String) mercury__io__V_13_13;
                  MR_String mercury__io__V_15_15 = (MR_String) mercury__io__V_7_7;
                  MR_Integer mercury__io__V_7_19;

{
#define MR_PROC_LABEL mercury__io____Compare____chunk_inner_res0_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__io__V_14_14 ;
	S2 =  mercury__io__V_15_15 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_7_19  = Res;
}
                  mercury__io__succeeded = (mercury__io__V_7_19 < (MR_Integer) 0);
                  if (mercury__io__succeeded)
                    *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__io__succeeded = (mercury__io__V_7_19 == (MR_Integer) 0);
                      if (mercury__io__succeeded)
                        *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res0_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_9 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_10 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_9 == mercury__io__CastY_10);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__io__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__io__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__io__CastX_3 = (MR_Integer) mercury__io__HeadVar__1_1;
                MR_Integer mercury__io__CastY_4 = (MR_Integer) mercury__io__HeadVar__2_2;

                mercury__io__succeeded = (mercury__io__CastY_4 == mercury__io__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__io__CastX_7 = (MR_Integer) mercury__io__HeadVar__1_1;
                MR_Integer mercury__io__CastY_8 = (MR_Integer) mercury__io__HeadVar__2_2;

                mercury__io__succeeded = (mercury__io__CastY_8 == mercury__io__CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__io__V_6_6;
            MR_Integer mercury__io__CastX_13;
            MR_Integer mercury__io__CastY_14;

            mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__io__succeeded)
              {
                mercury__io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__io__CastX_13 = (MR_Integer) mercury__io__V_5_5;
                mercury__io__CastY_14 = (MR_Integer) mercury__io__V_6_6;
                mercury__io__succeeded = (mercury__io__CastX_13 == mercury__io__CastY_14);
                if (mercury__io__succeeded)
                  mercury__io__succeeded = MR_TRUE;
                else
                  {
                    MR_String mercury__io__V_11_11 = (MR_String) mercury__io__V_5_5;
                    MR_String mercury__io__V_12_12 = (MR_String) mercury__io__V_6_6;

                    mercury__io__succeeded = (strcmp(mercury__io__V_11_11, mercury__io__V_12_12) == 0);
                  }
              }
          }
          break;
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____chunk_inner_res_1_0(
  MR_Word mercury__io__TypeInfo_for_T_31,
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_29 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_30 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_29 == mercury__io__CastY_30);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__io__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box mercury__io__V_36_36 = (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box mercury__io__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__3_3, (MR_Integer) 0));

                  {
                    mercury__builtin__compare_3_p_0(mercury__io__TypeInfo_for_T_31, mercury__io__HeadVar__1_1, mercury__io__V_36_36, mercury__io__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__io__V_34_34 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mercury__io__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 0));
                  MR_Word mercury__io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__io__V_18_18;

                  {
                    mercury__builtin__compare_3_p_0(mercury__io__TypeInfo_for_T_31, &mercury__io__V_18_18, mercury__io__V_34_34, mercury__io__V_16_16);
                  }
                  mercury__io__succeeded = (mercury__io__V_18_18 == (MR_Integer) 0);
                  mercury__io__succeeded = !(mercury__io__succeeded);
                  if (mercury__io__succeeded)
                    *mercury__io__HeadVar__1_1 = mercury__io__V_18_18;
                  else
                    {
                      MR_String mercury__io__V_37_37 = (MR_String) mercury__io__V_33_33;
                      MR_String mercury__io__V_38_38 = (MR_String) mercury__io__V_17_17;
                      MR_Integer mercury__io__V_7_42;

{
#define MR_PROC_LABEL mercury__io____Compare____chunk_inner_res_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__io__V_37_37 ;
	S2 =  mercury__io__V_38_38 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_7_42  = Res;
}
                      mercury__io__succeeded = (mercury__io__V_7_42 < (MR_Integer) 0);
                      if (mercury__io__succeeded)
                        *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                      else
                        {
                          mercury__io__succeeded = (mercury__io__V_7_42 == (MR_Integer) 0);
                          if (mercury__io__succeeded)
                            *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box mercury__io__V_35_35 = (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mercury__io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Box mercury__io__V_28_28 = (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__3_3, (MR_Integer) 0));

                  {
                    mercury__builtin__compare_3_p_0(mercury__io__TypeInfo_for_T_31, mercury__io__HeadVar__1_1, mercury__io__V_35_35, mercury__io__V_28_28);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res_1_0(
  MR_Word mercury__io__TypeInfo_for_T_13,
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_11 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_12 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_11 == mercury__io__CastY_12);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__io__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box mercury__io__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mercury__io__V_4_4;

            mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__io__succeeded)
              {
                mercury__io__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, (MR_Integer) 0));
                {
                  mercury__io__succeeded = mercury__builtin__unify_2_p_0(mercury__io__TypeInfo_for_T_13, mercury__io__V_3_3, mercury__io__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box mercury__io__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box mercury__io__V_7_7;
            MR_Word mercury__io__V_8_8;
            MR_Integer mercury__io__CastX_16;
            MR_Integer mercury__io__CastY_17;

            mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__io__succeeded)
              {
                mercury__io__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0));
                mercury__io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 1)));
                {
                  mercury__io__succeeded = mercury__builtin__unify_2_p_0(mercury__io__TypeInfo_for_T_13, mercury__io__V_5_5, mercury__io__V_7_7);
                }
                if (mercury__io__succeeded)
                  {
                    mercury__io__CastX_16 = (MR_Integer) mercury__io__V_6_6;
                    mercury__io__CastY_17 = (MR_Integer) mercury__io__V_8_8;
                    mercury__io__succeeded = (mercury__io__CastX_16 == mercury__io__CastY_17);
                    if (mercury__io__succeeded)
                      mercury__io__succeeded = MR_TRUE;
                    else
                      {
                        MR_String mercury__io__V_14_14 = (MR_String) mercury__io__V_6_6;
                        MR_String mercury__io__V_15_15 = (MR_String) mercury__io__V_8_8;

                        mercury__io__succeeded = (strcmp(mercury__io__V_14_14, mercury__io__V_15_15) == 0);
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box mercury__io__V_9_9 = (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mercury__io__V_10_10;

            mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__io__succeeded)
              {
                mercury__io__V_10_10 = (MR_hl_field(MR_mktag(2), mercury__io__HeadVar__2_2, (MR_Integer) 0));
                {
                  mercury__io__succeeded = mercury__builtin__unify_2_p_0(mercury__io__TypeInfo_for_T_13, mercury__io__V_9_9, mercury__io__V_10_10);
                }
              }
          }
          break;
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____buffer_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Box mercury__io__HeadVar__2_2,
  MR_Box mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Cast_HeadVar1_4 = (MR_Word) mercury__io__HeadVar__2_2;
    MR_Word mercury__io__Cast_HeadVar2_5 = (MR_Word) mercury__io__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mercury__io__HeadVar__1_1, mercury__io__Cast_HeadVar1_4, mercury__io__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____buffer_0_0(
  MR_Box mercury__io__HeadVar__1_1,
  MR_Box mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Cast_HeadVar1_3 = (MR_Word) mercury__io__HeadVar__1_1;
    MR_Word mercury__io__Cast_HeadVar2_4 = (MR_Word) mercury__io__HeadVar__2_2;

    {
      mercury__io__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__io__Cast_HeadVar1_3, mercury__io__Cast_HeadVar2_4);
    }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____binary_output_stream_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_6 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_7 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_6 == mercury__io__CastY_7);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__io__V_4_4 = (MR_Box) mercury__io__HeadVar__2_2;
        MR_Box mercury__io__V_5_5 = (MR_Box) mercury__io__HeadVar__3_3;
        MR_Word mercury__io__Cast_HeadVar1_9 = (MR_Word) mercury__io__V_4_4;
        MR_Word mercury__io__Cast_HeadVar2_10 = (MR_Word) mercury__io__V_5_5;

        {
          mercury__builtin____Compare____c_pointer_0_0(mercury__io__HeadVar__1_1, mercury__io__Cast_HeadVar1_9, mercury__io__Cast_HeadVar2_10);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____binary_output_stream_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_5 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_6 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_5 == mercury__io__CastY_6);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__io__V_3_3 = (MR_Box) mercury__io__HeadVar__1_1;
        MR_Box mercury__io__V_4_4 = (MR_Box) mercury__io__HeadVar__2_2;
        MR_Word mercury__io__Cast_HeadVar1_7 = (MR_Word) mercury__io__V_3_3;
        MR_Word mercury__io__Cast_HeadVar2_8 = (MR_Word) mercury__io__V_4_4;

        {
          mercury__io__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__io__Cast_HeadVar1_7, mercury__io__Cast_HeadVar2_8);
        }
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____binary_input_stream_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_6 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__CastY_7 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__CastX_6 == mercury__io__CastY_7);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__io__V_4_4 = (MR_Box) mercury__io__HeadVar__2_2;
        MR_Box mercury__io__V_5_5 = (MR_Box) mercury__io__HeadVar__3_3;
        MR_Word mercury__io__Cast_HeadVar1_9 = (MR_Word) mercury__io__V_4_4;
        MR_Word mercury__io__Cast_HeadVar2_10 = (MR_Word) mercury__io__V_5_5;

        {
          mercury__builtin____Compare____c_pointer_0_0(mercury__io__HeadVar__1_1, mercury__io__Cast_HeadVar1_9, mercury__io__Cast_HeadVar2_10);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____binary_input_stream_0_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__CastX_5 = (MR_Integer) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__CastY_6 = (MR_Integer) mercury__io__HeadVar__2_2;

    mercury__io__succeeded = (mercury__io__CastX_5 == mercury__io__CastY_6);
    if (mercury__io__succeeded)
      mercury__io__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__io__V_3_3 = (MR_Box) mercury__io__HeadVar__1_1;
        MR_Box mercury__io__V_4_4 = (MR_Box) mercury__io__HeadVar__2_2;
        MR_Word mercury__io__Cast_HeadVar1_7 = (MR_Word) mercury__io__V_3_3;
        MR_Word mercury__io__Cast_HeadVar2_8 = (MR_Word) mercury__io__V_4_4;

        {
          mercury__io__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__io__Cast_HeadVar1_7, mercury__io__Cast_HeadVar2_8);
        }
      }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____access_type_0_0(
  MR_Word * mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Cast_HeadVar1_4 = (MR_Integer) mercury__io__HeadVar__2_2;
    MR_Integer mercury__io__Cast_HeadVar2_5 = (MR_Integer) mercury__io__HeadVar__3_3;

    mercury__io__succeeded = (mercury__io__Cast_HeadVar1_4 < mercury__io__Cast_HeadVar2_5);
    if (mercury__io__succeeded)
      *mercury__io__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__io__succeeded = (mercury__io__Cast_HeadVar1_4 == mercury__io__Cast_HeadVar2_5);
        if (mercury__io__succeeded)
          *mercury__io__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__io__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____access_type_0_0(
  MR_Word mercury__io__HeadVar__2_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded = (mercury__io__HeadVar__2_1 == mercury__io__HeadVar__2_2);

    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io__read_symlink_2_6_p_0(
  MR_String mercury__io__FileName_1,
  MR_String * mercury__io__TargetFileName_2,
  MR_Integer * mercury__io__Status_3,
  MR_Box * mercury__io__Error_4)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__read_symlink_2_6_p_0

	MR_String FileName;
	MR_String TargetFileName;
	MR_Integer Status;
	MR_Integer Error;

	FileName =  mercury__io__FileName_1 ;
		{

#ifdef MR_HAVE_READLINK
  #ifndef PATH_MAX
    #define PATH_MAX 256
  #endif
    int     num_chars;
    char    *buffer2 = NULL;
    int     buffer_size2 = PATH_MAX;
    char    buffer[PATH_MAX + 1];

    /* readlink() does not null-terminate the buffer */
    num_chars = readlink(FileName, buffer, PATH_MAX);

    if (num_chars == PATH_MAX) {
        do {
            buffer_size2 *= 2;
            buffer2 = MR_RESIZE_ARRAY(buffer2, char, buffer_size2);
            num_chars = readlink(FileName, buffer2, PATH_MAX);
        } while (num_chars == buffer_size2);

        if (num_chars == -1) {
            Error = errno;
            TargetFileName = MR_make_string_const("");
            Status = 0;
        } else {
            buffer2[num_chars] = '\0';
            MR_make_aligned_string_copy_msg(TargetFileName, buffer2,
                MR_ALLOC_ID);
            Status = 1;
        }
        MR_free(buffer2);
    } else if (num_chars == -1) {
        TargetFileName = MR_make_string_const("");
        Error = errno;
        Status = 0;
    } else {
        buffer[num_chars] = '\0';
        MR_make_aligned_string_copy_msg(TargetFileName, buffer, MR_ALLOC_ID);
        Status = 1;
    }
#else /* !MR_HAVE_READLINK */
    /*
    ** We can't just return NULL here, because otherwise mdb will break
    ** when it tries to print the string.
    */
    TargetFileName = MR_make_string_const("");
    Status = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 *mercury__io__TargetFileName_2  = TargetFileName;
	 *mercury__io__Status_3  = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *mercury__io__Error_4 );
}
  }
}

static void MR_CALL 
mercury__io__make_symlink_2_5_p_0(
  MR_String mercury__io__FileName_1,
  MR_String mercury__io__LinkFileName_2,
  MR_Integer * mercury__io__Status_3)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__make_symlink_2_5_p_0

	MR_String FileName;
	MR_String LinkFileName;
	MR_Integer Status;

	FileName =  mercury__io__FileName_1 ;
	LinkFileName =  mercury__io__LinkFileName_2 ;
		{

#ifdef MR_HAVE_SYMLINK
    Status = (symlink(FileName, LinkFileName) == 0);
#else
    Status = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Status_3  = Status;
}
  }
}

void MR_CALL 
mercury__io__rename_file_2_6_p_0(
  MR_String mercury__io__OldFileName_1,
  MR_String mercury__io__NewFileName_2,
  MR_Integer * mercury__io__RetVal_3,
  MR_String * mercury__io__RetStr_4)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__rename_file_2_6_p_0

	MR_String OldFileName;
	MR_String NewFileName;
	MR_Integer RetVal;
	MR_String RetStr;

	OldFileName =  mercury__io__OldFileName_1 ;
	NewFileName =  mercury__io__NewFileName_2 ;
		{

#ifdef MR_WIN32
    RetVal = _wrename(ML_utf8_to_wide(OldFileName),
        ML_utf8_to_wide(NewFileName));
#else
    RetVal = rename(OldFileName, NewFileName);
#endif
    ML_maybe_make_err_msg(RetVal != 0, errno, "rename failed: ",
        MR_ALLOC_ID, RetStr);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__RetVal_3  = RetVal;
	 *mercury__io__RetStr_4  = RetStr;
}
  }
}

static void MR_CALL 
mercury__io__remove_directory_entry_8_p_0(
  MR_String mercury__io__DirName_9,
  MR_String mercury__io__FileName_10,
  MR_Word mercury__io___FileType_11,
  MR_Word * mercury__io__Continue_12,
  MR_Word mercury__io__HeadVar__5_13,
  MR_Word * mercury__io__Res_14)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_100_105_114_101_99_116_111_114_121_95_101_110_116_114_121_95_95_91_51_44_32_53_93_95_48_8_p_0(mercury__io__DirName_9, mercury__io__FileName_10, mercury__io__Continue_12, mercury__io__Res_14);
    }
  }
}

void MR_CALL 
mercury__io__remove_file_2_5_p_0(
  MR_String mercury__io__FileName_1,
  MR_Integer * mercury__io__RetVal_2,
  MR_String * mercury__io__RetStr_3)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__remove_file_2_5_p_0

	MR_String FileName;
	MR_Integer RetVal;
	MR_String RetStr;

	FileName =  mercury__io__FileName_1 ;
		{

#ifdef MR_WIN32
    RetVal = _wremove(ML_utf8_to_wide(FileName));
#else
    RetVal = remove(FileName);
#endif
    ML_maybe_make_err_msg(RetVal != 0, errno, "remove failed: ",
        MR_ALLOC_ID, RetStr);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__RetVal_2  = RetVal;
	 *mercury__io__RetStr_3  = RetStr;
}
  }
}

void MR_CALL 
mercury__io__do_make_temp_directory_9_p_0(
  MR_String mercury__io__Dir_1,
  MR_String mercury__io__Prefix_2,
  MR_String mercury__io__Suffix_3,
  MR_String mercury__io__Sep_4,
  MR_String * mercury__io__DirName_5,
  MR_Word * mercury__io__Okay_6,
  MR_String * mercury__io__ErrorMessage_7)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__do_make_temp_directory_9_p_0

	MR_String Dir;
	MR_String Prefix;
	MR_String Suffix;
	MR_String Sep;
	MR_String DirName;
	MR_Word Okay;
	MR_String ErrorMessage;

	Dir =  mercury__io__Dir_1 ;
	Prefix =  mercury__io__Prefix_2 ;
	Suffix =  mercury__io__Suffix_3 ;
	Sep =  mercury__io__Sep_4 ;
		{

#ifdef MR_HAVE_MKDTEMP
    int err;

    DirName = MR_make_string(MR_ALLOC_ID, "%s%s%.5sXXXXXX%s",
        Dir, Sep, Prefix, Suffix);
    DirName = mkdtemp(DirName);
    if (DirName == NULL) {
        ML_maybe_make_err_msg(MR_TRUE, errno,
            "error creating temporary directory: ", MR_ALLOC_ID,
            ErrorMessage);
        Okay = MR_NO;
    } else {
        ErrorMessage = MR_make_string_const("");
        Okay = MR_YES;
    }
#else
    #warning "Your system does not have mkdtemp"
    Okay = MR_NO;
    ErrorMessage =
        MR_make_string_const("Your system does not have mkdtemp");
    DirName = MR_make_string_const("");
#endif /* HAVE_MKDTEMP */


		;}
#undef MR_PROC_LABEL
	 *mercury__io__DirName_5  = DirName;
	 *mercury__io__Okay_6  = Okay;
	 *mercury__io__ErrorMessage_7  = ErrorMessage;
}
  }
}

void MR_CALL 
mercury__io__do_make_temp_9_p_0(
  MR_String mercury__io__Dir_1,
  MR_String mercury__io__Prefix_2,
  MR_String mercury__io__Suffix_3,
  MR_String mercury__io__Sep_4,
  MR_String * mercury__io__FileName_5,
  MR_Word * mercury__io__Okay_6,
  MR_String * mercury__io__ErrorMessage_7)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__do_make_temp_9_p_0

	MR_String Dir;
	MR_String Prefix;
	MR_String Suffix;
	MR_String Sep;
	MR_String FileName;
	MR_Word Okay;
	MR_String ErrorMessage;

	Dir =  mercury__io__Dir_1 ;
	Prefix =  mercury__io__Prefix_2 ;
	Suffix =  mercury__io__Suffix_3 ;
	Sep =  mercury__io__Sep_4 ;
		{

#ifdef MR_HAVE_MKSTEMP
    int err, fd;

    FileName = MR_make_string(MR_ALLOC_ID, "%s%s%.5sXXXXXX%s",
        Dir, Sep, Prefix, Suffix);
    fd = mkstemp(FileName);
    if (fd == -1) {
        ML_maybe_make_err_msg(MR_TRUE, errno,
            "error opening temporary file: ", MR_ALLOC_ID,
            ErrorMessage);
        Okay = MR_NO;
    } else {
        do {
            err = close(fd);
        } while (err == -1 && MR_is_eintr(errno));
        ML_maybe_make_err_msg(err, errno,
            "error closing temporary file: ", MR_ALLOC_ID,
            ErrorMessage);
        Okay = err == 0 ? MR_YES : MR_NO;
    }
#else
    /*
    ** Constructs a temporary name by concatenating Dir, `/', the first 5 chars
    ** of Prefix, six hex digits, and Suffix. The six digit hex number is
    ** generated by starting with the pid of this process.  Uses
    ** `open(..., O_CREATE | O_EXCL, ...)' to create the file, checking that
    ** there was no existing file with that name.
    */
    int     len, err, fd, num_tries;
    char    countstr[256];
    MR_Word filename_word;
    int     flags;

    len = strlen(Dir) + 1 + 5 + 6 + strlen(Suffix) + 1;
    /* Dir + / + Prefix + counter + Suffix + \0 */
    MR_offset_incr_hp_atomic_msg(filename_word, 0,
        (len + sizeof(MR_Word)) / sizeof(MR_Word),
        MR_ALLOC_ID, "string.string/0");
    FileName = (MR_String) filename_word;
    if (ML_io_tempnam_counter == 0) {
        ML_io_tempnam_counter = getpid();
    }
    num_tries = 0;
    do {
        sprintf(countstr, "%06lX", ML_io_tempnam_counter & 0xffffffL);
        strcpy(FileName, Dir);
        strcat(FileName, Sep);
        strncat(FileName, Prefix, 5);
        strncat(FileName, countstr, 6);
        strcat(FileName, Suffix);
        flags = O_WRONLY | O_CREAT | O_EXCL;
        do {
            #ifdef MR_WIN32
                fd = _wopen(ML_utf8_to_wide(FileName), flags, 0600);
            #else
                fd = open(FileName, flags, 0600);
            #endif
        } while (fd == -1 && MR_is_eintr(errno));
        num_tries++;
        ML_io_tempnam_counter += (1 << num_tries);
    } while (fd == -1 && errno == EEXIST &&
        num_tries < ML_MAX_TEMPNAME_TRIES);
    if (fd == -1) {
        ML_maybe_make_err_msg(MR_TRUE, errno,
            "error opening temporary file: ", MR_ALLOC_ID,
            ErrorMessage);
        Okay = MR_NO;
    }  else {
        do {
            err = close(fd);
        } while (err == -1 && MR_is_eintr(errno));
        ML_maybe_make_err_msg(err, errno,
            "error closing temporary file: ", MR_ALLOC_ID,
            ErrorMessage);
        Okay = err == 0 ? MR_YES : MR_NO;
    }
#endif


		;}
#undef MR_PROC_LABEL
	 *mercury__io__FileName_5  = FileName;
	 *mercury__io__Okay_6  = Okay;
	 *mercury__io__ErrorMessage_7  = ErrorMessage;
}
  }
}

static void MR_CALL 
mercury__io__decode_system_command_exit_code_5_p_0(
  MR_Integer mercury__io__Status0_1,
  MR_Word * mercury__io__Exited_2,
  MR_Integer * mercury__io__Status_3,
  MR_Word * mercury__io__Signalled_4,
  MR_Integer * mercury__io__Signal_5)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__decode_system_command_exit_code_5_p_0

	MR_Integer Status0;
	MR_Word Exited;
	MR_Integer Status;
	MR_Word Signalled;
	MR_Integer Signal;

	Status0 =  mercury__io__Status0_1 ;
		{

    #if defined (WIFEXITED) && defined (WEXITSTATUS) &&             defined (WIFSIGNALED) && defined (WTERMSIG)
        if (WIFEXITED(Status0)) {
            Exited = MR_YES;
            Signalled = MR_NO;
            Status = WEXITSTATUS(Status0);
        } else if (WIFSIGNALED(Status0)) {
            Exited = MR_NO;
            Signalled = MR_YES;
            Signal = -WTERMSIG(Status0);
        } else {
            Exited = MR_NO;
            Signalled = MR_NO;
        }
    #else
        Exited = MR_YES;
        Status = Status0;
        Signalled = MR_NO;
    #endif


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Exited_2  = Exited;
	 *mercury__io__Status_3  = Status;
	 *mercury__io__Signalled_4  = Signalled;
	 *mercury__io__Signal_5  = Signal;
}
  }
}

void MR_CALL 
mercury__io__close_stream_3_p_0(
  MR_Box mercury__io__Stream_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__close_stream_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
		{

    mercury_close(Stream);


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__io__do_open_text_7_p_0(
  MR_String mercury__io__FileName_1,
  MR_String mercury__io__Mode_2,
  MR_Integer * mercury__io__ResultCode_3,
  MR_Integer * mercury__io__StreamId_4,
  MR_Box * mercury__io__Stream_5)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__do_open_text_7_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer ResultCode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;

	FileName =  mercury__io__FileName_1 ;
	Mode =  mercury__io__Mode_2 ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        ResultCode = 0;
        StreamId = mercury_next_stream_id();
    } else {
        ResultCode = -1;
        StreamId = -1;
    }


		;}
#undef MR_PROC_LABEL
	 *mercury__io__ResultCode_3  = ResultCode;
	 *mercury__io__StreamId_4  = StreamId;
	 *mercury__io__Stream_5  = (MR_Box) Stream;
}
  }
}

static void MR_CALL 
mercury__io__do_open_binary_7_p_0(
  MR_String mercury__io__FileName_1,
  MR_String mercury__io__Mode_2,
  MR_Integer * mercury__io__ResultCode_3,
  MR_Integer * mercury__io__StreamId_4,
  MR_Box * mercury__io__Stream_5)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__do_open_binary_7_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer ResultCode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;

	FileName =  mercury__io__FileName_1 ;
	Mode =  mercury__io__Mode_2 ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        ResultCode = 0;
        StreamId = mercury_next_stream_id();
    } else {
        ResultCode = -1;
        StreamId = -1;
    }


		;}
#undef MR_PROC_LABEL
	 *mercury__io__ResultCode_3  = ResultCode;
	 *mercury__io__StreamId_4  = StreamId;
	 *mercury__io__Stream_5  = (MR_Box) Stream;
}
  }
}

void MR_CALL 
mercury__io__set_binary_output_stream_2_4_p_0(
  MR_Box mercury__io__NewStream_1,
  MR_Box * mercury__io__OutStream_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__set_binary_output_stream_2_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_1 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__OutStream_2  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__set_binary_input_stream_2_4_p_0(
  MR_Box mercury__io__NewStream_1,
  MR_Box * mercury__io__OutStream_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__set_binary_input_stream_2_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_1 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__OutStream_2  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__set_output_stream_2_4_p_0(
  MR_Box mercury__io__NewStream_1,
  MR_Box * mercury__io__OutStream_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__set_output_stream_2_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_1 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__OutStream_2  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__set_input_stream_2_4_p_0(
  MR_Box mercury__io__NewStream_1,
  MR_Box * mercury__io__OutStream_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__set_input_stream_2_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_1 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__OutStream_2  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__set_output_line_number_2_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer mercury__io__LineNum_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__set_output_line_number_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
	LineNum =  mercury__io__LineNum_2 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__get_output_line_number_2_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer * mercury__io__LineNum_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__get_output_line_number_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__LineNum_2  = LineNum;
}
  }
}

void MR_CALL 
mercury__io__set_line_number_2_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer mercury__io__LineNum_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__set_line_number_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
	LineNum =  mercury__io__LineNum_2 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__get_line_number_2_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer * mercury__io__LineNum_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__get_line_number_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__LineNum_2  = LineNum;
}
  }
}

void MR_CALL 
mercury__io__binary_output_stream_2_3_p_0(
  MR_Box * mercury__io__Stream_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__binary_output_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Stream_1  = (MR_Box) Stream;
}
  }
}

void MR_CALL 
mercury__io__binary_input_stream_2_3_p_0(
  MR_Box * mercury__io__Stream_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Stream_1  = (MR_Box) Stream;
}
  }
}

void MR_CALL 
mercury__io__output_stream_2_3_p_0(
  MR_Box * mercury__io__Stream_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__output_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Stream_1  = (MR_Box) Stream;
}
  }
}

void MR_CALL 
mercury__io__input_stream_2_3_p_0(
  MR_Box * mercury__io__Stream_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__input_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Stream_1  = (MR_Box) Stream;
}
  }
}

void MR_CALL 
mercury__io__stdout_binary_stream_2_3_p_0(
  MR_Box * mercury__io__Stream_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__stdout_binary_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout_binary;


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Stream_1  = (MR_Box) Stream;
}
  }
}

void MR_CALL 
mercury__io__stdin_binary_stream_2_3_p_0(
  MR_Box * mercury__io__Stream_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__stdin_binary_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin_binary;


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Stream_1  = (MR_Box) Stream;
}
  }
}

void MR_CALL 
mercury__io__stderr_stream_2_3_p_0(
  MR_Box * mercury__io__Stream_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__stderr_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Stream_1  = (MR_Box) Stream;
}
  }
}

MR_Box MR_CALL 
mercury__io__stderr_stream_2_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_1;

{
#define MR_PROC_LABEL mercury__io__stderr_stream_2_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_1  = (MR_Box) Stream;
}
    return mercury__io__Stream_1;
  }
}

void MR_CALL 
mercury__io__stdout_stream_2_3_p_0(
  MR_Box * mercury__io__Stream_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__stdout_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Stream_1  = (MR_Box) Stream;
}
  }
}

MR_Box MR_CALL 
mercury__io__stdout_stream_2_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_1;

{
#define MR_PROC_LABEL mercury__io__stdout_stream_2_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_1  = (MR_Box) Stream;
}
    return mercury__io__Stream_1;
  }
}

void MR_CALL 
mercury__io__stdin_stream_2_3_p_0(
  MR_Box * mercury__io__Stream_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__stdin_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Stream_1  = (MR_Box) Stream;
}
  }
}

MR_Box MR_CALL 
mercury__io__stdin_stream_2_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_1;

{
#define MR_PROC_LABEL mercury__io__stdin_stream_2_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_1  = (MR_Box) Stream;
}
    return mercury__io__Stream_1;
  }
}

void MR_CALL 
mercury__io__flush_binary_output_2_3_p_0(
  MR_Box mercury__io__Stream_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__flush_binary_output_2_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__flush_output_2_3_p_0(
  MR_Box mercury__io__Stream_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__flush_output_2_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__do_write_bitmap_6_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Box mercury__io__Bitmap_2,
  MR_Integer mercury__io__Start_3,
  MR_Integer mercury__io__Length_4)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__do_write_bitmap_6_p_0

	MercuryFilePtr Stream;
	MR_BitmapPtr Bitmap;
	MR_Integer Start;
	MR_Integer Length;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
	Bitmap = (MR_BitmapPtr) mercury__io__Bitmap_2 ;
	Start =  mercury__io__Start_3 ;
	Length =  mercury__io__Length_4 ;
		{

    MR_Integer bytes_written =
        (MR_Integer)MR_WRITE(*Stream, Bitmap->elements + Start, Length);
    if (bytes_written != Length) {
        mercury_io_error(Stream, "Error writing bitmap.");
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_byte_2_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer mercury__io__Byte_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__write_byte_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
	Byte =  mercury__io__Byte_2 ;
		{

    /* call putc with a strictly non-negative byte-sized integer */
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_float_2_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Float mercury__io__Val_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__write_float_2_4_p_0

	MercuryFilePtr Stream;
	MR_Float Val;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
	Val =  mercury__io__Val_2 ;
		{

    char buf[MR_SPRINTF_FLOAT_BUF_SIZE];
    MR_sprintf_float(buf, Val);
    if (ML_fprintf(Stream, "%s", buf) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_int_2_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer mercury__io__Val_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__write_int_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
	Val =  mercury__io__Val_2 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_char_2_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Char mercury__io__Character_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__write_char_2_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
	Character =  mercury__io__Character_2 ;
		{

    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            mercury_output_error(Stream, errno);
        }
        if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                mercury_output_error(Stream, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_string_2_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_String mercury__io__Message_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__write_string_2_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
	Message =  mercury__io__Message_2 ;
		{

    mercury_print_string(Stream, Message);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__binary_stream_offset_2_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer * mercury__io__Offset_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__binary_stream_offset_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Offset;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
		{

    /* XXX should check for failure */
    /* XXX should check if the stream is tellable */
    if (MR_IS_FILE_STREAM(*Stream)) {
        Offset = ftell(MR_file(*Stream));
    } else {
        mercury_io_error(Stream,
            "io.primitive_binary_stream_offset: untellable stream");
    }


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Offset_2  = Offset;
}
  }
}

void MR_CALL 
mercury__io__seek_binary_2_5_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer mercury__io__Flag_2,
  MR_Integer mercury__io__Off_3)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__seek_binary_2_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	MR_Integer Off;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
	Flag =  mercury__io__Flag_2 ;
	Off =  mercury__io__Off_3 ;
		{

    static const int seek_flags[] = { SEEK_SET, SEEK_CUR, SEEK_END };

    /* XXX should check for failure */
    /* XXX should also check if the stream is seekable */
    if (MR_IS_FILE_STREAM(*Stream)) {
        fseek(MR_file(*Stream), Off, seek_flags[Flag]);
    } else {
        mercury_io_error(Stream, "io.seek_binary_2: unseekable stream");
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__whence_to_int_2_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer * mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;

    switch (mercury__io__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *mercury__io__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        *mercury__io__HeadVar__2_2 = (MR_Integer) 2;
        break;
      case (MR_Integer) 0:
        *mercury__io__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
  }
}

void MR_CALL 
mercury__io__putback_byte_2_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer mercury__io__Character_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__putback_byte_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
	Character =  mercury__io__Character_2 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_byte: ungetc failed");
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__putback_char_2_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Char mercury__io__Character_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__putback_char_2_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
	Character =  mercury__io__Character_2 ;
		{

    MercuryFilePtr mf = Stream;
    if (Character == '\n') {
        MR_line_number(*mf)--;
    }
    if (Character <= 0x7f) {
        if (MR_UNGETCH(*mf, Character) == EOF) {
            mercury_io_error(mf, "io.putback_char: ungetc failed");
        }
    } else {
        /* This requires multiple pushback in the underlying C library. */
        char        buf[5];
        ML_ssize_t  len;
        len = MR_utf8_encode(buf, Character);
        for (; len > 0; len--) {
            if (MR_UNGETCH(*mf, buf[len - 1]) == EOF) {
                mercury_io_error(mf, "io.putback_char: ungetc failed");
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__read_byte_val_2_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer * mercury__io__ByteVal_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__read_byte_val_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__ByteVal_2  = ByteVal;
}
  }
}

void MR_CALL 
mercury__io__read_char_code_2_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer * mercury__io__CharCode_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__read_char_code_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer CharCode;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
		{

    char    buf[5];
    int     nbytes;
    int     i;
    int     c;
    unsigned int    uc;

    c = mercury_get_byte(Stream);
    uc = c;
    if (uc <= 0x7f) {
        CharCode = uc;
    } else if (c == EOF) {
        CharCode = -1;
    } else {
        if ((uc & 0xE0) == 0xC0) {
            nbytes = 2;
        } else if ((uc & 0xF0) == 0xE0) {
            nbytes = 3;
        } else if ((uc & 0xF8) == 0xF0) {
            nbytes = 4;
        } else {
            nbytes = 0;
        }
        if (nbytes > 0) {
            buf[0] = (char) uc;
            for (i = 1; i < nbytes; i++) {
                uc = mercury_get_byte(Stream);
                buf[i] = uc;
            }
            buf[i] = '\0';
            CharCode = MR_utf8_get(buf, 0);
            if (CharCode < 0) {
                /* Invalid byte sequence. */
                errno = EILSEQ;
                CharCode = -2;
            }
        } else {
            /* Invalid byte sequence. */
            errno = EILSEQ;
            CharCode = -2;
        }
    }


		;}
#undef MR_PROC_LABEL
	 *mercury__io__CharCode_2  = CharCode;
}
  }
}

static void MR_CALL 
mercury__io__throw_io_error_1_p_0(
  MR_String mercury__io__Message_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeCtorInfo_4_4 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
    MR_Word mercury__io__V_3_3 = (MR_Word) mercury__io__Message_2;

    {
      mercury__exception__throw_1_p_0(mercury__io__TypeCtorInfo_4_4, ((MR_Box) (mercury__io__V_3_3)));
      return;
    }
  }
}

static void MR_CALL 
mercury__io__get_io_output_stream_type_3_p_0(
  MR_Word * mercury__io__Type_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeCtorInfo_10_10;
    MR_Box mercury__io__Stream_14;
    MR_Word mercury__io__V_11_11;

{
#define MR_PROC_LABEL mercury__io__get_io_output_stream_type_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_14  = (MR_Box) Stream;
}
    mercury__io__TypeCtorInfo_10_10 = (MR_Word) &mercury__io__io__type_ctor_info_output_stream_0;
{
#define MR_PROC_LABEL mercury__io__get_io_output_stream_type_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__io__TypeCtorInfo_10_10 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 *mercury__io__Type_4  = TypeInfo;
}
  }
}

static void MR_CALL 
mercury__io__get_io_input_stream_type_3_p_0(
  MR_Word * mercury__io__Type_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeCtorInfo_10_10;
    MR_Box mercury__io__Stream_14;
    MR_Word mercury__io__V_11_11;

{
#define MR_PROC_LABEL mercury__io__get_io_input_stream_type_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_14  = (MR_Box) Stream;
}
    mercury__io__TypeCtorInfo_10_10 = (MR_Word) &mercury__io__io__type_ctor_info_input_stream_0;
{
#define MR_PROC_LABEL mercury__io__get_io_input_stream_type_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__io__TypeCtorInfo_10_10 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 *mercury__io__Type_4  = TypeInfo;
}
  }
}

void MR_CALL 
mercury__io__unsafe_set_globals_3_p_0(
  MR_Word mercury__io__Globals_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__unsafe_set_globals_3_p_0

	MR_Word Globals;

	Globals =  mercury__io__Globals_1 ;
		{

    /* XXX need to globalize the memory */
    ML_io_user_globals = Globals;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__unsafe_get_globals_3_p_0(
  MR_Word * mercury__io__Globals_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__unsafe_get_globals_3_p_0

	MR_Word Globals;

		{

    Globals = ML_io_user_globals;


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Globals_1  = Globals;
}
  }
}

static void MR_CALL 
mercury__io__unlock_globals_0_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

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
}

void MR_CALL 
mercury__io__unlock_globals_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

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
}

void MR_CALL 
mercury__io__lock_globals_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

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
}

static void MR_CALL 
mercury__io__may_delete_stream_info_3_p_0(
  MR_Integer * mercury__io__MayDelete_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__may_delete_stream_info_3_p_0

	MR_Integer MayDelete;

		{

    MayDelete = !MR_debug_ever_enabled;


		;}
#undef MR_PROC_LABEL
	 *mercury__io__MayDelete_1  = MayDelete;
}
  }
}

void MR_CALL 
mercury__io__maybe_delete_stream_info_3_p_0(
  MR_Box mercury__io__Stream_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__MayDeleteStreamInfo_6;

{
#define MR_PROC_LABEL mercury__io__maybe_delete_stream_info_3_p_0

	MR_Integer MayDelete;

		{

    MayDelete = !MR_debug_ever_enabled;


		;}
#undef MR_PROC_LABEL
	 mercury__io__MayDeleteStreamInfo_6  = MayDelete;
}
    mercury__io__succeeded = (mercury__io__MayDeleteStreamInfo_6 == (MR_Integer) 0);
    if (mercury__io__succeeded)
      {
      }
    else
      {
        MR_Word mercury__io__TypeCtorInfo_17_17;
        MR_Word mercury__io__TypeCtorInfo_18_18;
        MR_Word mercury__io__StreamDb0_7;
        MR_Word mercury__io__StreamDb_8;
        MR_Integer mercury__io__V_14_14;
        MR_Word mercury__io__V_7_31;

{
#define MR_PROC_LABEL mercury__io__maybe_delete_stream_info_3_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__maybe_delete_stream_info_3_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	 mercury__io__StreamDb0_7  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__maybe_delete_stream_info_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) mercury__io__Stream_4 ;
		{

#ifndef MR_NATIVE_GC
    /*
    ** Most of the time, we can just use the pointer to the stream
    ** as a unique identifier.
    */
    Id = (MR_Word) Stream;
#else
    /*
    ** For accurate GC we embed an ID in the MercuryFile
    ** and retrieve it here.
    */
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_14_14  = Id;
}
        mercury__io__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        mercury__io__TypeCtorInfo_18_18 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
        {
          mercury__tree234__delete_2_4_p_0(mercury__io__TypeCtorInfo_17_17, mercury__io__TypeCtorInfo_18_18, mercury__io__StreamDb0_7, ((MR_Box) (mercury__io__V_14_14)), &mercury__io__StreamDb_8, &mercury__io__V_7_31);
        }
{
#define MR_PROC_LABEL mercury__io__maybe_delete_stream_info_3_p_0

	MR_Word StreamDb;

	StreamDb =  mercury__io__StreamDb_8 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__maybe_delete_stream_info_3_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
      }
  }
}

static void MR_CALL 
mercury__io__insert_stream_info_4_p_0(
  MR_Box mercury__io__Stream_5,
  MR_Word mercury__io__Name_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeCtorInfo_18_18;
    MR_Word mercury__io__TypeInfo_for_K_26;
    MR_Word mercury__io__StreamDb0_8;
    MR_Word mercury__io__StreamDb_9;
    MR_Integer mercury__io__V_14_14;

{
#define MR_PROC_LABEL mercury__io__insert_stream_info_4_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__insert_stream_info_4_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	 mercury__io__StreamDb0_8  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__insert_stream_info_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
		{

#ifndef MR_NATIVE_GC
    /*
    ** Most of the time, we can just use the pointer to the stream
    ** as a unique identifier.
    */
    Id = (MR_Word) Stream;
#else
    /*
    ** For accurate GC we embed an ID in the MercuryFile
    ** and retrieve it here.
    */
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_14_14  = Id;
}
    mercury__io__TypeCtorInfo_18_18 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
    mercury__io__TypeInfo_for_K_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__tree234__set_4_p_0(mercury__io__TypeInfo_for_K_26, mercury__io__TypeCtorInfo_18_18, ((MR_Box) (mercury__io__V_14_14)), ((MR_Box) (mercury__io__Name_6)), mercury__io__StreamDb0_8, &mercury__io__StreamDb_9);
    }
{
#define MR_PROC_LABEL mercury__io__insert_stream_info_4_p_0

	MR_Word StreamDb;

	StreamDb =  mercury__io__StreamDb_9 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__insert_stream_info_4_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__unlock_stream_db_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__unlock_stream_db_2_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__lock_stream_db_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__lock_stream_db_2_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__io__set_stream_db_3_p_0(
  MR_Word mercury__io__StreamDb_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__set_stream_db_3_p_0

	MR_Word StreamDb;

	StreamDb =  mercury__io__StreamDb_1 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
  }
}

MR_String MR_CALL 
mercury__io__source_name_1_f_0(
  MR_Word mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__HeadVar__2_2;

    switch (MR_tag((MR_Word) mercury__io__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__io__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__HeadVar__2_2 = (MR_String) "<standard input>";
            break;
          case (MR_Integer) 1:
            mercury__io__HeadVar__2_2 = (MR_String) "<standard output>";
            break;
          case (MR_Integer) 2:
            mercury__io__HeadVar__2_2 = (MR_String) "<standard error>";
            break;
        }
        break;
      case (MR_Integer) 1:
        mercury__io__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 0)));
        break;
    }
    return mercury__io__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__io__maybe_stream_info_2_f_0(
  MR_Word mercury__io__StreamDb_4,
  MR_Box mercury__io__Stream_5)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Info_6;
    MR_Word mercury__io__Info0_7;
    MR_Word mercury__io__TypeCtorInfo_14_14;
    MR_Integer mercury__io__V_12_12;
    MR_Box mercury__io__conv0_Info0_7;

{
#define MR_PROC_LABEL mercury__io__maybe_stream_info_2_f_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
		{

#ifndef MR_NATIVE_GC
    /*
    ** Most of the time, we can just use the pointer to the stream
    ** as a unique identifier.
    */
    Id = (MR_Word) Stream;
#else
    /*
    ** For accurate GC we embed an ID in the MercuryFile
    ** and retrieve it here.
    */
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_12_12  = Id;
}
    mercury__io__TypeCtorInfo_14_14 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
    {
      mercury__io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__io__TypeCtorInfo_14_14, mercury__io__StreamDb_4, mercury__io__V_12_12, &mercury__io__conv0_Info0_7);
    }
    if (mercury__io__succeeded)
      {
        mercury__io__Info0_7 = ((MR_Word) mercury__io__conv0_Info0_7);
        mercury__io__succeeded = MR_TRUE;
      }
    if (mercury__io__succeeded)
      {
        MR_Integer mercury__io__Id_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__Info0_7, (MR_Integer) 0)));
        MR_Word mercury__io__Mode_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Info0_7, (MR_Integer) 1)));
        MR_Word mercury__io__Content_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Info0_7, (MR_Integer) 2)));
        MR_Word mercury__io__Source_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Info0_7, (MR_Integer) 3)));

        {
          mercury__io__Info_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__io__Info_6, 0) = ((MR_Box) (mercury__io__Id_8));
          MR_hl_field(MR_mktag(1), mercury__io__Info_6, 1) = ((MR_Box) (mercury__io__Mode_9));
          MR_hl_field(MR_mktag(1), mercury__io__Info_6, 2) = ((MR_Box) (mercury__io__Content_10));
          MR_hl_field(MR_mktag(1), mercury__io__Info_6, 3) = ((MR_Box) (mercury__io__Source_11));
        }
      }
    else
      mercury__io__Info_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return mercury__io__Info_6;
  }
}

void MR_CALL 
mercury__io__stream_info_4_p_0(
  MR_Box mercury__io__Stream_5,
  MR_Word * mercury__io__MaybeInfo_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__StreamDb_8;
    MR_Word mercury__io__Info_9;
    MR_Word mercury__io__TypeCtorInfo_17_17;
    MR_Integer mercury__io__V_15_15;
    MR_Box mercury__io__conv0_Info_9;

{
#define MR_PROC_LABEL mercury__io__stream_info_4_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__stream_info_4_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	 mercury__io__StreamDb_8  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__stream_info_4_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__stream_info_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
		{

#ifndef MR_NATIVE_GC
    /*
    ** Most of the time, we can just use the pointer to the stream
    ** as a unique identifier.
    */
    Id = (MR_Word) Stream;
#else
    /*
    ** For accurate GC we embed an ID in the MercuryFile
    ** and retrieve it here.
    */
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_15_15  = Id;
}
    mercury__io__TypeCtorInfo_17_17 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
    {
      mercury__io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__io__TypeCtorInfo_17_17, mercury__io__StreamDb_8, mercury__io__V_15_15, &mercury__io__conv0_Info_9);
    }
    if (mercury__io__succeeded)
      {
        mercury__io__Info_9 = ((MR_Word) mercury__io__conv0_Info_9);
        mercury__io__succeeded = MR_TRUE;
      }
    if (mercury__io__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mercury__io__MaybeInfo_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Info_9));
      }
    else
      *mercury__io__MaybeInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
mercury__io__stream_name_4_p_0(
  MR_Box mercury__io__Stream_5,
  MR_String * mercury__io__Name_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__MaybeInfo_8;

    {
      mercury__io__stream_info_4_p_0(mercury__io__Stream_5, &mercury__io__MaybeInfo_8);
    }
    if ((mercury__io__MaybeInfo_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__io__Name_6 = (MR_String) "<stream name unavailable>";
    else
      {
        MR_Word mercury__io__Info_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__MaybeInfo_8, (MR_Integer) 0)));
        MR_Word mercury__io__Source_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Info_9, (MR_Integer) 3)));
        MR_Integer mercury__io__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__Info_9, (MR_Integer) 0)));
        MR_Word mercury__io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Info_9, (MR_Integer) 1)));
        MR_Word mercury__io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Info_9, (MR_Integer) 2)));

        switch (MR_tag((MR_Word) mercury__io__Source_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__io__Source_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__io__Name_6 = (MR_String) "<standard input>";
                break;
              case (MR_Integer) 1:
                *mercury__io__Name_6 = (MR_String) "<standard output>";
                break;
              case (MR_Integer) 2:
                *mercury__io__Name_6 = (MR_String) "<standard error>";
                break;
            }
            break;
          case (MR_Integer) 1:
            *mercury__io__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__io__Source_13, (MR_Integer) 0)));
            break;
        }
      }
  }
}

void MR_CALL 
mercury__io__do_write_array_7_p_1(
  MR_Word mercury__io__TypeInfo_for_T_22,
  MR_ArrayPtr mercury__io__Array_8,
  MR_String mercury__io__Separator_9,
  MR_Word mercury__io__OutputPred_10,
  MR_Integer mercury__io__I_11,
  MR_Integer mercury__io__Hi_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded = (mercury__io__I_11 <= mercury__io__Hi_12);

        if (mercury__io__succeeded)
          {
            MR_Box mercury__io__E_14;
            MR_Integer mercury__io__V_19_19;
            MR_Word mercury__io__TypeInfo_for_T_23;
            void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box mercury__io__conv1_STATE_VARIABLE_IO_18_18;

{
#define MR_PROC_LABEL mercury__io__do_write_array_7_p_1

	MR_String Message;

	Message =  mercury__io__Separator_9 ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__do_write_array_7_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__io__Array_8 , Array);
	Index =  mercury__io__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__io__E_14  = (MR_Box) Item;
}
            mercury__io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__OutputPred_10, (MR_Integer) 1)));
            {
              mercury__io__func_0(((MR_Box) mercury__io__OutputPred_10), mercury__io__E_14, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_18_18);
            }
            mercury__io__V_19_19 = (mercury__io__I_11 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__io__I__tmp_copy_11 = mercury__io__V_19_19;

              mercury__io__I_11 = mercury__io__I__tmp_copy_11;
            }
            continue;
          }
        else
          {
          }
      }
      break;
    }
}

void MR_CALL 
mercury__io__do_write_array_7_p_0(
  MR_Word mercury__io__TypeInfo_for_T_22,
  MR_ArrayPtr mercury__io__Array_8,
  MR_String mercury__io__Separator_9,
  MR_Word mercury__io__OutputPred_10,
  MR_Integer mercury__io__I_11,
  MR_Integer mercury__io__Hi_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded = (mercury__io__I_11 <= mercury__io__Hi_12);

        if (mercury__io__succeeded)
          {
            MR_Box mercury__io__E_14;
            MR_Integer mercury__io__V_19_19;
            MR_Word mercury__io__TypeInfo_for_T_23;
            void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box mercury__io__conv1_STATE_VARIABLE_IO_18_18;

{
#define MR_PROC_LABEL mercury__io__do_write_array_7_p_0

	MR_String Message;

	Message =  mercury__io__Separator_9 ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__do_write_array_7_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__io__Array_8 , Array);
	Index =  mercury__io__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__io__E_14  = (MR_Box) Item;
}
            mercury__io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__OutputPred_10, (MR_Integer) 1)));
            {
              mercury__io__func_0(((MR_Box) mercury__io__OutputPred_10), mercury__io__E_14, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_18_18);
            }
            mercury__io__V_19_19 = (mercury__io__I_11 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__io__I__tmp_copy_11 = mercury__io__V_19_19;

              mercury__io__I_11 = mercury__io__I__tmp_copy_11;
            }
            continue;
          }
        else
          {
          }
      }
      break;
    }
}

void MR_CALL 
mercury__io__write_list_lag_6_p_1(
  MR_Word mercury__io__TypeInfo_for_T_19,
  MR_Box mercury__io__Head_7,
  MR_Word mercury__io__Tail_8,
  MR_String mercury__io__Separator_9,
  MR_Word mercury__io__OutputPred_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box mercury__io__conv1_STATE_VARIABLE_IO_17_17;

{
#define MR_PROC_LABEL mercury__io__write_list_lag_6_p_1

	MR_String Message;

	Message =  mercury__io__Separator_9 ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
        mercury__io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__OutputPred_10, (MR_Integer) 1)));
        {
          mercury__io__func_0(((MR_Box) mercury__io__OutputPred_10), mercury__io__Head_7, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_17_17);
        }
        if ((mercury__io__Tail_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Box mercury__io__TailHead_12 = (MR_hl_field(MR_mktag(1), mercury__io__Tail_8, (MR_Integer) 0));
            MR_Word mercury__io__TailTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Tail_8, (MR_Integer) 1)));

            /* direct tailcall eliminated */
            {
              MR_Box mercury__io__Head__tmp_copy_7 = mercury__io__TailHead_12;
              MR_Word mercury__io__Tail__tmp_copy_8 = mercury__io__TailTail_13;

              mercury__io__Tail_8 = mercury__io__Tail__tmp_copy_8;
              mercury__io__Head_7 = mercury__io__Head__tmp_copy_7;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__io__write_list_lag_6_p_0(
  MR_Word mercury__io__TypeInfo_for_T_19,
  MR_Box mercury__io__Head_7,
  MR_Word mercury__io__Tail_8,
  MR_String mercury__io__Separator_9,
  MR_Word mercury__io__OutputPred_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box mercury__io__conv1_STATE_VARIABLE_IO_17_17;

{
#define MR_PROC_LABEL mercury__io__write_list_lag_6_p_0

	MR_String Message;

	Message =  mercury__io__Separator_9 ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
        mercury__io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__OutputPred_10, (MR_Integer) 1)));
        {
          mercury__io__func_0(((MR_Box) mercury__io__OutputPred_10), mercury__io__Head_7, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_17_17);
        }
        if ((mercury__io__Tail_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Box mercury__io__TailHead_12 = (MR_hl_field(MR_mktag(1), mercury__io__Tail_8, (MR_Integer) 0));
            MR_Word mercury__io__TailTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Tail_8, (MR_Integer) 1)));

            /* direct tailcall eliminated */
            {
              MR_Box mercury__io__Head__tmp_copy_7 = mercury__io__TailHead_12;
              MR_Word mercury__io__Tail__tmp_copy_8 = mercury__io__TailTail_13;

              mercury__io__Tail_8 = mercury__io__Tail__tmp_copy_8;
              mercury__io__Head_7 = mercury__io__Head__tmp_copy_7;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__io__print_to_stream_4_p_0(
  MR_Word mercury__io__TypeInfo_for_T_13,
  MR_Box mercury__io__Stream_5,
  MR_Box mercury__io__Term_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_21 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word mercury__io__V_10_10 = (MR_Word) mercury__io__Stream_5;
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_9;

    {
      mercury__stream__string_writer__print_5_p_1(mercury__io__TypeInfo_for_T_13, mercury__io__TypeClassInfo_for_writer_21, mercury__io__TypeClassInfo_for_writer_22, ((MR_Box) (mercury__io__V_10_10)), (MR_Integer) 1, mercury__io__Term_6, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_9);
    }
  }
}

void MR_CALL 
mercury__io__process_read_term_3_p_0(
  MR_Word mercury__io__TypeInfo_for_T_14,
  MR_Word mercury__io__ReadResult_4,
  MR_Integer mercury__io__LineNumber_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;

    switch (MR_tag((MR_Word) mercury__io__ReadResult_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_String mercury__io__String_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__io__ReadResult_4, (MR_Integer) 0)));
          MR_Integer mercury__io__Int_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ReadResult_4, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__io__String_10));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__io__Int_11));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__io__Term_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ReadResult_4, (MR_Integer) 1)));
          MR_Word mercury__io___VarSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ReadResult_4, (MR_Integer) 0)));
          MR_Box mercury__io__Type_9;
          MR_Word mercury__io__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
          MR_Word mercury__io__V_5_19;

          {
            mercury__term_conversion__try_term_to_type_2_p_0(mercury__io__TypeCtorInfo_15_15, mercury__io__TypeInfo_for_T_14, mercury__io__Term_8, &mercury__io__V_5_19);
          }
          mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__V_5_19)) == (MR_mktag((MR_Integer) 0)));
          if (mercury__io__succeeded)
            {
              mercury__io__Type_9 = (MR_hl_field(MR_mktag(0), mercury__io__V_5_19, (MR_Integer) 0));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Result_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__Type_9;
              }
            }
          else
            {
              MR_Word mercury__io__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
              MR_Word mercury__io__V_3_23;
              MR_Word mercury__io__V_2_22;
              MR_Word mercury__io__V_4_24;

              mercury__io__succeeded = ((MR_tag((MR_Word) mercury__io__Term_8)) == (MR_mktag((MR_Integer) 0)));
              if (mercury__io__succeeded)
                {
                  mercury__io__V_2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Term_8, (MR_Integer) 0)));
                  mercury__io__V_3_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Term_8, (MR_Integer) 1)));
                  mercury__io__V_4_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Term_8, (MR_Integer) 2)));
                  {
                    mercury__io__succeeded = mercury__term__is_ground_list_1_p_0(mercury__io__TypeCtorInfo_16_16, mercury__io__V_3_23);
                  }
                }
              if (mercury__io__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__io__Result_6 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((MR_String) "io.read: the term read did not have the right type"));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__io__LineNumber_5));
                  }
                }
              else
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__io__Result_6 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((MR_String) "io.read: the term read was not a ground term"));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__io__LineNumber_5));
                  }
                }
            }
        }
        break;
    }
  }
}

MR_Integer MR_CALL 
mercury__io__chunk_size_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    return (MR_Integer) 1000;
  }
}

void MR_CALL 
mercury__io__should_reduce_stack_usage_1_p_0(
  MR_Word * mercury__io__ShouldReduce_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__should_reduce_stack_usage_1_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_TRUE;
#else
    ShouldReduce = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	 *mercury__io__ShouldReduce_1  = ShouldReduce;
}
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_1(
  MR_Word mercury__io__TypeInfo_for_T_27,
  MR_Integer mercury__io__Left_8,
  MR_Word mercury__io__Stream_9,
  MR_Word mercury__io__Pred_10,
  MR_Box mercury__io__T0_11,
  MR_Word * mercury__io__Res_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded = (mercury__io__Left_8 > (MR_Integer) 0);

        if (mercury__io__succeeded)
          {
            MR_Word mercury__io__ByteResult_14;
            MR_Integer mercury__io__Code_33;
            MR_Box mercury__io__Stream_44 = (MR_Box) mercury__io__Stream_9;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_1

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_44 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_33  = ByteVal;
}
            mercury__io__succeeded = (mercury__io__Code_33 >= (MR_Integer) 0);
            if (mercury__io__succeeded)
              {
                mercury__io__ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__ByteResult_14, 0) = ((MR_Box) (mercury__io__Code_33));
              }
            else
              {
                mercury__io__succeeded = (mercury__io__Code_33 == (MR_Integer) -1);
                if (mercury__io__succeeded)
                  mercury__io__ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    MR_String mercury__io__Msg_34;
                    MR_Word mercury__io__V_40_40;
                    MR_Box mercury__io__Error_52;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_1

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_52 );
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_52 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_34  = Msg;
}
                    mercury__io__V_40_40 = (MR_Word) mercury__io__Msg_34;
                    {
                      mercury__io__ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__io__ByteResult_14, 0) = ((MR_Box) (mercury__io__V_40_40));
                    }
                  }
              }
            switch (MR_tag((MR_Word) mercury__io__ByteResult_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__io__Res_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_11;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__io__Byte_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ByteResult_14, (MR_Integer) 0)));
                  MR_Word mercury__io__Continue_16;
                  MR_Box mercury__io__T1_17;
                  void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_10, (MR_Integer) 1)));
                  MR_Box mercury__io__conv2_Continue_16;
                  MR_Box mercury__io__conv1_STATE_VARIABLE_IO_23_23;

                  {
                    mercury__io__func_0(((MR_Box) mercury__io__Pred_10), ((MR_Box) (mercury__io__Byte_15)), &mercury__io__conv2_Continue_16, mercury__io__T0_11, &mercury__io__T1_17, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_23_23);
                  }
                  mercury__io__Continue_16 = ((MR_Word) mercury__io__conv2_Continue_16);
                  switch (mercury__io__Continue_16) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *mercury__io__Res_12 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T1_17;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer mercury__io__V_24_24 = (mercury__io__Left_8 - (MR_Integer) 1);

                        /* direct tailcall eliminated */
                        {
                          MR_Integer mercury__io__Left__tmp_copy_8 = mercury__io__V_24_24;
                          MR_Box mercury__io__T0__tmp_copy_11 = mercury__io__T1_17;

                          mercury__io__T0_11 = mercury__io__T0__tmp_copy_11;
                          mercury__io__Left_8 = mercury__io__Left__tmp_copy_8;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__io__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ByteResult_14, (MR_Integer) 0)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__io__Res_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_11;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_18));
                  }
                }
                break;
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Res_12 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__io__T0_11;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_0(
  MR_Word mercury__io__TypeInfo_for_T_27,
  MR_Integer mercury__io__Left_8,
  MR_Word mercury__io__Stream_9,
  MR_Word mercury__io__Pred_10,
  MR_Box mercury__io__T0_11,
  MR_Word * mercury__io__Res_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded = (mercury__io__Left_8 > (MR_Integer) 0);

        if (mercury__io__succeeded)
          {
            MR_Word mercury__io__ByteResult_14;
            MR_Integer mercury__io__Code_33;
            MR_Box mercury__io__Stream_44 = (MR_Box) mercury__io__Stream_9;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_0

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_44 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_33  = ByteVal;
}
            mercury__io__succeeded = (mercury__io__Code_33 >= (MR_Integer) 0);
            if (mercury__io__succeeded)
              {
                mercury__io__ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__ByteResult_14, 0) = ((MR_Box) (mercury__io__Code_33));
              }
            else
              {
                mercury__io__succeeded = (mercury__io__Code_33 == (MR_Integer) -1);
                if (mercury__io__succeeded)
                  mercury__io__ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    MR_String mercury__io__Msg_34;
                    MR_Word mercury__io__V_40_40;
                    MR_Box mercury__io__Error_52;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_52 );
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_52 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_34  = Msg;
}
                    mercury__io__V_40_40 = (MR_Word) mercury__io__Msg_34;
                    {
                      mercury__io__ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__io__ByteResult_14, 0) = ((MR_Box) (mercury__io__V_40_40));
                    }
                  }
              }
            switch (MR_tag((MR_Word) mercury__io__ByteResult_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__io__Res_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_11;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__io__Byte_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ByteResult_14, (MR_Integer) 0)));
                  MR_Word mercury__io__Continue_16;
                  MR_Box mercury__io__T1_17;
                  void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_10, (MR_Integer) 1)));
                  MR_Box mercury__io__conv2_Continue_16;
                  MR_Box mercury__io__conv1_STATE_VARIABLE_IO_23_23;

                  {
                    mercury__io__func_0(((MR_Box) mercury__io__Pred_10), ((MR_Box) (mercury__io__Byte_15)), &mercury__io__conv2_Continue_16, mercury__io__T0_11, &mercury__io__T1_17, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_23_23);
                  }
                  mercury__io__Continue_16 = ((MR_Word) mercury__io__conv2_Continue_16);
                  switch (mercury__io__Continue_16) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *mercury__io__Res_12 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T1_17;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer mercury__io__V_24_24 = (mercury__io__Left_8 - (MR_Integer) 1);

                        /* direct tailcall eliminated */
                        {
                          MR_Integer mercury__io__Left__tmp_copy_8 = mercury__io__V_24_24;
                          MR_Box mercury__io__T0__tmp_copy_11 = mercury__io__T1_17;

                          mercury__io__T0_11 = mercury__io__T0__tmp_copy_11;
                          mercury__io__Left_8 = mercury__io__Left__tmp_copy_8;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__io__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ByteResult_14, (MR_Integer) 0)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__io__Res_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_11;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_18));
                  }
                }
                break;
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Res_12 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__io__T0_11;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_1(
  MR_Word mercury__io__TypeInfo_for_T_22,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__InnerRes_12;

        {
          mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_1(mercury__io__TypeInfo_for_T_22, (MR_Integer) 1000, mercury__io__Stream_7, mercury__io__Pred_8, mercury__io__T0_9, &mercury__io__InnerRes_12);
        }
        switch (MR_tag((MR_Word) mercury__io__InnerRes_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__io__T_13 = (MR_hl_field(MR_mktag(0), mercury__io__InnerRes_12, (MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T_13;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__io__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__InnerRes_12, (MR_Integer) 1)));
              MR_Box mercury__io__T_21 = (MR_hl_field(MR_mktag(1), mercury__io__InnerRes_12, (MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T_21;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_14));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__io__T1_15 = (MR_hl_field(MR_mktag(2), mercury__io__InnerRes_12, (MR_Integer) 0));

              /* direct tailcall eliminated */
              {
                MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_15;

                mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_0(
  MR_Word mercury__io__TypeInfo_for_T_22,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__InnerRes_12;

        {
          mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_0(mercury__io__TypeInfo_for_T_22, (MR_Integer) 1000, mercury__io__Stream_7, mercury__io__Pred_8, mercury__io__T0_9, &mercury__io__InnerRes_12);
        }
        switch (MR_tag((MR_Word) mercury__io__InnerRes_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__io__T_13 = (MR_hl_field(MR_mktag(0), mercury__io__InnerRes_12, (MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T_13;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__io__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__InnerRes_12, (MR_Integer) 1)));
              MR_Box mercury__io__T_21 = (MR_hl_field(MR_mktag(1), mercury__io__InnerRes_12, (MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T_21;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_14));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__io__T1_15 = (MR_hl_field(MR_mktag(2), mercury__io__InnerRes_12, (MR_Integer) 0));

              /* direct tailcall eliminated */
              {
                MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_15;

                mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1(
  MR_Word mercury__io__TypeInfo_for_T_22,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__ByteResult_12;
        MR_Integer mercury__io__Code_28;
        MR_Box mercury__io__Stream_39 = (MR_Box) mercury__io__Stream_7;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_39 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_28  = ByteVal;
}
        mercury__io__succeeded = (mercury__io__Code_28 >= (MR_Integer) 0);
        if (mercury__io__succeeded)
          {
            mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__Code_28));
          }
        else
          {
            mercury__io__succeeded = (mercury__io__Code_28 == (MR_Integer) -1);
            if (mercury__io__succeeded)
              mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_String mercury__io__Msg_29;
                MR_Word mercury__io__V_35_35;
                MR_Box mercury__io__Error_47;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_47 );
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_47 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_29  = Msg;
}
                mercury__io__V_35_35 = (MR_Word) mercury__io__Msg_29;
                {
                  mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__V_35_35));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__ByteResult_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__io__Res_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_9;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mercury__io__Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, (MR_Integer) 0)));
              MR_Word mercury__io__Continue_14;
              MR_Box mercury__io__T1_15;
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_8, (MR_Integer) 1)));
              MR_Box mercury__io__conv2_Continue_14;
              MR_Box mercury__io__conv1_STATE_VARIABLE_IO_20_20;

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_8), ((MR_Box) (mercury__io__Byte_13)), &mercury__io__conv2_Continue_14, mercury__io__T0_9, &mercury__io__T1_15, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_20_20);
              }
              mercury__io__Continue_14 = ((MR_Word) mercury__io__conv2_Continue_14);
              switch (mercury__io__Continue_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *mercury__io__Res_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T1_15;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_15;

                      mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
                    }
                    continue;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_9;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_16));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0(
  MR_Word mercury__io__TypeInfo_for_T_22,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__ByteResult_12;
        MR_Integer mercury__io__Code_28;
        MR_Box mercury__io__Stream_39 = (MR_Box) mercury__io__Stream_7;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_39 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_28  = ByteVal;
}
        mercury__io__succeeded = (mercury__io__Code_28 >= (MR_Integer) 0);
        if (mercury__io__succeeded)
          {
            mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__Code_28));
          }
        else
          {
            mercury__io__succeeded = (mercury__io__Code_28 == (MR_Integer) -1);
            if (mercury__io__succeeded)
              mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_String mercury__io__Msg_29;
                MR_Word mercury__io__V_35_35;
                MR_Box mercury__io__Error_47;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_47 );
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_47 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_29  = Msg;
}
                mercury__io__V_35_35 = (MR_Word) mercury__io__Msg_29;
                {
                  mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__V_35_35));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__ByteResult_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__io__Res_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_9;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mercury__io__Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, (MR_Integer) 0)));
              MR_Word mercury__io__Continue_14;
              MR_Box mercury__io__T1_15;
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_8, (MR_Integer) 1)));
              MR_Box mercury__io__conv2_Continue_14;
              MR_Box mercury__io__conv1_STATE_VARIABLE_IO_20_20;

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_8), ((MR_Box) (mercury__io__Byte_13)), &mercury__io__conv2_Continue_14, mercury__io__T0_9, &mercury__io__T1_15, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_20_20);
              }
              mercury__io__Continue_14 = ((MR_Word) mercury__io__conv2_Continue_14);
              switch (mercury__io__Continue_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *mercury__io__Res_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T1_15;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_15;

                      mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
                    }
                    continue;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_9;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_16));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_inner_7_p_1(
  MR_Word mercury__io__TypeInfo_for_T_26,
  MR_Integer mercury__io__Left_8,
  MR_Word mercury__io__Stream_9,
  MR_Word mercury__io__Pred_10,
  MR_Box mercury__io__T0_11,
  MR_Word * mercury__io__Res_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded = (mercury__io__Left_8 > (MR_Integer) 0);

        if (mercury__io__succeeded)
          {
            MR_Word mercury__io__ByteResult_14;
            MR_Integer mercury__io__Code_32;
            MR_Box mercury__io__Stream_43 = (MR_Box) mercury__io__Stream_9;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_1

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_43 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_32  = ByteVal;
}
            mercury__io__succeeded = (mercury__io__Code_32 >= (MR_Integer) 0);
            if (mercury__io__succeeded)
              {
                mercury__io__ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__ByteResult_14, 0) = ((MR_Box) (mercury__io__Code_32));
              }
            else
              {
                mercury__io__succeeded = (mercury__io__Code_32 == (MR_Integer) -1);
                if (mercury__io__succeeded)
                  mercury__io__ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    MR_String mercury__io__Msg_33;
                    MR_Word mercury__io__V_39_39;
                    MR_Box mercury__io__Error_51;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_1

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_51 );
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_51 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_33  = Msg;
}
                    mercury__io__V_39_39 = (MR_Word) mercury__io__Msg_33;
                    {
                      mercury__io__ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__io__ByteResult_14, 0) = ((MR_Box) (mercury__io__V_39_39));
                    }
                  }
              }
            switch (MR_tag((MR_Word) mercury__io__ByteResult_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__io__Res_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_11;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__io__Byte_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ByteResult_14, (MR_Integer) 0)));
                  MR_Box mercury__io__T1_16;
                  MR_Integer mercury__io__V_23_23;
                  void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_10, (MR_Integer) 1)));
                  MR_Box mercury__io__conv1_STATE_VARIABLE_IO_22_22;

                  {
                    mercury__io__func_0(((MR_Box) mercury__io__Pred_10), ((MR_Box) (mercury__io__Byte_15)), mercury__io__T0_11, &mercury__io__T1_16, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_22_22);
                  }
                  mercury__io__V_23_23 = (mercury__io__Left_8 - (MR_Integer) 1);
                  /* direct tailcall eliminated */
                  {
                    MR_Integer mercury__io__Left__tmp_copy_8 = mercury__io__V_23_23;
                    MR_Box mercury__io__T0__tmp_copy_11 = mercury__io__T1_16;

                    mercury__io__T0_11 = mercury__io__T0__tmp_copy_11;
                    mercury__io__Left_8 = mercury__io__Left__tmp_copy_8;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__io__Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ByteResult_14, (MR_Integer) 0)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__io__Res_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_11;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_17));
                  }
                }
                break;
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Res_12 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__io__T0_11;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_inner_7_p_0(
  MR_Word mercury__io__TypeInfo_for_T_26,
  MR_Integer mercury__io__Left_8,
  MR_Word mercury__io__Stream_9,
  MR_Word mercury__io__Pred_10,
  MR_Box mercury__io__T0_11,
  MR_Word * mercury__io__Res_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded = (mercury__io__Left_8 > (MR_Integer) 0);

        if (mercury__io__succeeded)
          {
            MR_Word mercury__io__ByteResult_14;
            MR_Integer mercury__io__Code_32;
            MR_Box mercury__io__Stream_43 = (MR_Box) mercury__io__Stream_9;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_0

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_43 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_32  = ByteVal;
}
            mercury__io__succeeded = (mercury__io__Code_32 >= (MR_Integer) 0);
            if (mercury__io__succeeded)
              {
                mercury__io__ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__ByteResult_14, 0) = ((MR_Box) (mercury__io__Code_32));
              }
            else
              {
                mercury__io__succeeded = (mercury__io__Code_32 == (MR_Integer) -1);
                if (mercury__io__succeeded)
                  mercury__io__ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    MR_String mercury__io__Msg_33;
                    MR_Word mercury__io__V_39_39;
                    MR_Box mercury__io__Error_51;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_51 );
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_51 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_33  = Msg;
}
                    mercury__io__V_39_39 = (MR_Word) mercury__io__Msg_33;
                    {
                      mercury__io__ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__io__ByteResult_14, 0) = ((MR_Box) (mercury__io__V_39_39));
                    }
                  }
              }
            switch (MR_tag((MR_Word) mercury__io__ByteResult_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__io__Res_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_11;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__io__Byte_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ByteResult_14, (MR_Integer) 0)));
                  MR_Box mercury__io__T1_16;
                  MR_Integer mercury__io__V_23_23;
                  void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_10, (MR_Integer) 1)));
                  MR_Box mercury__io__conv1_STATE_VARIABLE_IO_22_22;

                  {
                    mercury__io__func_0(((MR_Box) mercury__io__Pred_10), ((MR_Box) (mercury__io__Byte_15)), mercury__io__T0_11, &mercury__io__T1_16, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_22_22);
                  }
                  mercury__io__V_23_23 = (mercury__io__Left_8 - (MR_Integer) 1);
                  /* direct tailcall eliminated */
                  {
                    MR_Integer mercury__io__Left__tmp_copy_8 = mercury__io__V_23_23;
                    MR_Box mercury__io__T0__tmp_copy_11 = mercury__io__T1_16;

                    mercury__io__T0_11 = mercury__io__T0__tmp_copy_11;
                    mercury__io__Left_8 = mercury__io__Left__tmp_copy_8;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__io__Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ByteResult_14, (MR_Integer) 0)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__io__Res_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_11;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_17));
                  }
                }
                break;
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Res_12 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__io__T0_11;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_chunk_6_p_1(
  MR_Word mercury__io__TypeInfo_for_T_22,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__InnerRes_12;

        {
          mercury__io__binary_input_stream_foldl2_io_inner_7_p_1(mercury__io__TypeInfo_for_T_22, (MR_Integer) 1000, mercury__io__Stream_7, mercury__io__Pred_8, mercury__io__T0_9, &mercury__io__InnerRes_12);
        }
        switch (MR_tag((MR_Word) mercury__io__InnerRes_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__io__T_13 = (MR_hl_field(MR_mktag(0), mercury__io__InnerRes_12, (MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T_13;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__io__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__InnerRes_12, (MR_Integer) 1)));
              MR_Box mercury__io__T_21 = (MR_hl_field(MR_mktag(1), mercury__io__InnerRes_12, (MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T_21;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_14));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__io__T1_15 = (MR_hl_field(MR_mktag(2), mercury__io__InnerRes_12, (MR_Integer) 0));

              /* direct tailcall eliminated */
              {
                MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_15;

                mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_chunk_6_p_0(
  MR_Word mercury__io__TypeInfo_for_T_22,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__InnerRes_12;

        {
          mercury__io__binary_input_stream_foldl2_io_inner_7_p_0(mercury__io__TypeInfo_for_T_22, (MR_Integer) 1000, mercury__io__Stream_7, mercury__io__Pred_8, mercury__io__T0_9, &mercury__io__InnerRes_12);
        }
        switch (MR_tag((MR_Word) mercury__io__InnerRes_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__io__T_13 = (MR_hl_field(MR_mktag(0), mercury__io__InnerRes_12, (MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T_13;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__io__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__InnerRes_12, (MR_Integer) 1)));
              MR_Box mercury__io__T_21 = (MR_hl_field(MR_mktag(1), mercury__io__InnerRes_12, (MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T_21;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_14));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__io__T1_15 = (MR_hl_field(MR_mktag(2), mercury__io__InnerRes_12, (MR_Integer) 0));

              /* direct tailcall eliminated */
              {
                MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_15;

                mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_plain_6_p_1(
  MR_Word mercury__io__TypeInfo_for_T_21,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__ByteResult_12;
        MR_Integer mercury__io__Code_27;
        MR_Box mercury__io__Stream_38 = (MR_Box) mercury__io__Stream_7;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_1

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_38 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_27  = ByteVal;
}
        mercury__io__succeeded = (mercury__io__Code_27 >= (MR_Integer) 0);
        if (mercury__io__succeeded)
          {
            mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__Code_27));
          }
        else
          {
            mercury__io__succeeded = (mercury__io__Code_27 == (MR_Integer) -1);
            if (mercury__io__succeeded)
              mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_String mercury__io__Msg_28;
                MR_Word mercury__io__V_34_34;
                MR_Box mercury__io__Error_46;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_1

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_46 );
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_46 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_28  = Msg;
}
                mercury__io__V_34_34 = (MR_Word) mercury__io__Msg_28;
                {
                  mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__V_34_34));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__ByteResult_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__io__Res_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_9;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mercury__io__Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, (MR_Integer) 0)));
              MR_Box mercury__io__T1_14;
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_8, (MR_Integer) 1)));
              MR_Box mercury__io__conv1_STATE_VARIABLE_IO_19_19;

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_8), ((MR_Box) (mercury__io__Byte_13)), mercury__io__T0_9, &mercury__io__T1_14, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_19_19);
              }
              /* direct tailcall eliminated */
              {
                MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_14;

                mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_9;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_15));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_plain_6_p_0(
  MR_Word mercury__io__TypeInfo_for_T_21,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__ByteResult_12;
        MR_Integer mercury__io__Code_27;
        MR_Box mercury__io__Stream_38 = (MR_Box) mercury__io__Stream_7;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_0

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_38 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_27  = ByteVal;
}
        mercury__io__succeeded = (mercury__io__Code_27 >= (MR_Integer) 0);
        if (mercury__io__succeeded)
          {
            mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__Code_27));
          }
        else
          {
            mercury__io__succeeded = (mercury__io__Code_27 == (MR_Integer) -1);
            if (mercury__io__succeeded)
              mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_String mercury__io__Msg_28;
                MR_Word mercury__io__V_34_34;
                MR_Box mercury__io__Error_46;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_46 );
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_46 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_28  = Msg;
}
                mercury__io__V_34_34 = (MR_Word) mercury__io__Msg_28;
                {
                  mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__V_34_34));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__ByteResult_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__io__Res_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_9;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mercury__io__Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, (MR_Integer) 0)));
              MR_Box mercury__io__T1_14;
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_8, (MR_Integer) 1)));
              MR_Box mercury__io__conv1_STATE_VARIABLE_IO_19_19;

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_8), ((MR_Box) (mercury__io__Byte_13)), mercury__io__T0_9, &mercury__io__T1_14, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_19_19);
              }
              /* direct tailcall eliminated */
              {
                MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_14;

                mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_9;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_15));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_inner_6_p_1(
  MR_Integer mercury__io__Left_7,
  MR_Word mercury__io__Stream_8,
  MR_Word mercury__io__Pred_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded = (mercury__io__Left_7 > (MR_Integer) 0);

        if (mercury__io__succeeded)
          {
            MR_Word mercury__io__ByteResult_12;
            MR_Integer mercury__io__Code_28;
            MR_Box mercury__io__Stream_39 = (MR_Box) mercury__io__Stream_8;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_1

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_39 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_28  = ByteVal;
}
            mercury__io__succeeded = (mercury__io__Code_28 >= (MR_Integer) 0);
            if (mercury__io__succeeded)
              {
                mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__Code_28));
              }
            else
              {
                mercury__io__succeeded = (mercury__io__Code_28 == (MR_Integer) -1);
                if (mercury__io__succeeded)
                  mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    MR_String mercury__io__Msg_29;
                    MR_Word mercury__io__V_35_35;
                    MR_Box mercury__io__Error_47;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_1

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_47 );
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_47 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_29  = Msg;
}
                    mercury__io__V_35_35 = (MR_Word) mercury__io__Msg_29;
                    {
                      mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__V_35_35));
                    }
                  }
              }
            switch (MR_tag((MR_Word) mercury__io__ByteResult_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__io__Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__io__Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, (MR_Integer) 0)));
                  MR_Integer mercury__io__V_20_20;
                  void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_9, (MR_Integer) 1)));
                  MR_Box mercury__io__conv1_STATE_VARIABLE_IO_19_19;

                  {
                    mercury__io__func_0(((MR_Box) mercury__io__Pred_9), ((MR_Box) (mercury__io__Byte_13)), ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_19_19);
                  }
                  mercury__io__V_20_20 = (mercury__io__Left_7 - (MR_Integer) 1);
                  /* direct tailcall eliminated */
                  {
                    MR_Integer mercury__io__Left__tmp_copy_7 = mercury__io__V_20_20;

                    mercury__io__Left_7 = mercury__io__Left__tmp_copy_7;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__io__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, (MR_Integer) 0)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__io__Res_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Error_14));
                  }
                }
                break;
            }
          }
        else
          *mercury__io__Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_inner_6_p_0(
  MR_Integer mercury__io__Left_7,
  MR_Word mercury__io__Stream_8,
  MR_Word mercury__io__Pred_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded = (mercury__io__Left_7 > (MR_Integer) 0);

        if (mercury__io__succeeded)
          {
            MR_Word mercury__io__ByteResult_12;
            MR_Integer mercury__io__Code_28;
            MR_Box mercury__io__Stream_39 = (MR_Box) mercury__io__Stream_8;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_0

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_39 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_28  = ByteVal;
}
            mercury__io__succeeded = (mercury__io__Code_28 >= (MR_Integer) 0);
            if (mercury__io__succeeded)
              {
                mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__Code_28));
              }
            else
              {
                mercury__io__succeeded = (mercury__io__Code_28 == (MR_Integer) -1);
                if (mercury__io__succeeded)
                  mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    MR_String mercury__io__Msg_29;
                    MR_Word mercury__io__V_35_35;
                    MR_Box mercury__io__Error_47;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_47 );
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_47 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_29  = Msg;
}
                    mercury__io__V_35_35 = (MR_Word) mercury__io__Msg_29;
                    {
                      mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__V_35_35));
                    }
                  }
              }
            switch (MR_tag((MR_Word) mercury__io__ByteResult_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__io__Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__io__Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, (MR_Integer) 0)));
                  MR_Integer mercury__io__V_20_20;
                  void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_9, (MR_Integer) 1)));
                  MR_Box mercury__io__conv1_STATE_VARIABLE_IO_19_19;

                  {
                    mercury__io__func_0(((MR_Box) mercury__io__Pred_9), ((MR_Box) (mercury__io__Byte_13)), ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_19_19);
                  }
                  mercury__io__V_20_20 = (mercury__io__Left_7 - (MR_Integer) 1);
                  /* direct tailcall eliminated */
                  {
                    MR_Integer mercury__io__Left__tmp_copy_7 = mercury__io__V_20_20;

                    mercury__io__Left_7 = mercury__io__Left__tmp_copy_7;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__io__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, (MR_Integer) 0)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__io__Res_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Error_14));
                  }
                }
                break;
            }
          }
        else
          *mercury__io__Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_chunk_5_p_1(
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__Pred_7,
  MR_Word * mercury__io__Res_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__InnerRes_10;

        {
          mercury__io__binary_input_stream_foldl_io_inner_6_p_1((MR_Integer) 1000, mercury__io__Stream_6, mercury__io__Pred_7, &mercury__io__InnerRes_10);
        }
        switch (MR_tag((MR_Word) mercury__io__InnerRes_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__io__InnerRes_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__io__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  continue;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__io__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__InnerRes_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Error_11));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_chunk_5_p_0(
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__Pred_7,
  MR_Word * mercury__io__Res_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__InnerRes_10;

        {
          mercury__io__binary_input_stream_foldl_io_inner_6_p_0((MR_Integer) 1000, mercury__io__Stream_6, mercury__io__Pred_7, &mercury__io__InnerRes_10);
        }
        switch (MR_tag((MR_Word) mercury__io__InnerRes_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__io__InnerRes_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__io__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  continue;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__io__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__InnerRes_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Error_11));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_plain_5_p_1(
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__Pred_7,
  MR_Word * mercury__io__Res_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__ByteResult_10;
        MR_Integer mercury__io__Code_23;
        MR_Box mercury__io__Stream_34 = (MR_Box) mercury__io__Stream_6;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_1

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_34 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_23  = ByteVal;
}
        mercury__io__succeeded = (mercury__io__Code_23 >= (MR_Integer) 0);
        if (mercury__io__succeeded)
          {
            mercury__io__ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__io__ByteResult_10, 0) = ((MR_Box) (mercury__io__Code_23));
          }
        else
          {
            mercury__io__succeeded = (mercury__io__Code_23 == (MR_Integer) -1);
            if (mercury__io__succeeded)
              mercury__io__ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_String mercury__io__Msg_24;
                MR_Word mercury__io__V_30_30;
                MR_Box mercury__io__Error_42;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_1

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_42 );
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_42 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_24  = Msg;
}
                mercury__io__V_30_30 = (MR_Word) mercury__io__Msg_24;
                {
                  mercury__io__ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__ByteResult_10, 0) = ((MR_Box) (mercury__io__V_30_30));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__ByteResult_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__io__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mercury__io__Byte_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ByteResult_10, (MR_Integer) 0)));
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_7, (MR_Integer) 1)));
              MR_Box mercury__io__conv1_STATE_VARIABLE_IO_16_16;

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_7), ((MR_Box) (mercury__io__Byte_11)), ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_16_16);
              }
              /* direct tailcall eliminated */
              {
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ByteResult_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_plain_5_p_0(
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__Pred_7,
  MR_Word * mercury__io__Res_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__ByteResult_10;
        MR_Integer mercury__io__Code_23;
        MR_Box mercury__io__Stream_34 = (MR_Box) mercury__io__Stream_6;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_0

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_34 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_23  = ByteVal;
}
        mercury__io__succeeded = (mercury__io__Code_23 >= (MR_Integer) 0);
        if (mercury__io__succeeded)
          {
            mercury__io__ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__io__ByteResult_10, 0) = ((MR_Box) (mercury__io__Code_23));
          }
        else
          {
            mercury__io__succeeded = (mercury__io__Code_23 == (MR_Integer) -1);
            if (mercury__io__succeeded)
              mercury__io__ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_String mercury__io__Msg_24;
                MR_Word mercury__io__V_30_30;
                MR_Box mercury__io__Error_42;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_42 );
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_42 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_24  = Msg;
}
                mercury__io__V_30_30 = (MR_Word) mercury__io__Msg_24;
                {
                  mercury__io__ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__ByteResult_10, 0) = ((MR_Box) (mercury__io__V_30_30));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__ByteResult_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__io__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mercury__io__Byte_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ByteResult_10, (MR_Integer) 0)));
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_7, (MR_Integer) 1)));
              MR_Box mercury__io__conv1_STATE_VARIABLE_IO_16_16;

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_7), ((MR_Box) (mercury__io__Byte_11)), ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_16_16);
              }
              /* direct tailcall eliminated */
              {
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ByteResult_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__read_binary_file_2_5_p_0(
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__Bytes0_7,
  MR_Word * mercury__io__Result_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__Result0_10;
        MR_Integer mercury__io__Code_25;
        MR_Box mercury__io__Stream_36 = (MR_Box) mercury__io__Stream_6;

{
#define MR_PROC_LABEL mercury__io__read_binary_file_2_5_p_0

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_36 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_25  = ByteVal;
}
        mercury__io__succeeded = (mercury__io__Code_25 >= (MR_Integer) 0);
        if (mercury__io__succeeded)
          {
            mercury__io__Result0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__io__Result0_10, 0) = ((MR_Box) (mercury__io__Code_25));
          }
        else
          {
            mercury__io__succeeded = (mercury__io__Code_25 == (MR_Integer) -1);
            if (mercury__io__succeeded)
              mercury__io__Result0_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_String mercury__io__Msg_26;
                MR_Word mercury__io__V_32_32;
                MR_Box mercury__io__Error_44;

{
#define MR_PROC_LABEL mercury__io__read_binary_file_2_5_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_44 );
}
{
#define MR_PROC_LABEL mercury__io__read_binary_file_2_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_44 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_26  = Msg;
}
                mercury__io__V_32_32 = (MR_Word) mercury__io__Msg_26;
                {
                  mercury__io__Result0_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__Result0_10, 0) = ((MR_Box) (mercury__io__V_32_32));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__Result0_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__io__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              MR_Word mercury__io__Bytes_11;

              {
                mercury__list__reverse_2_p_0(mercury__io__TypeCtorInfo_19_19, mercury__io__Bytes0_7, &mercury__io__Bytes_11);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Result_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Bytes_11));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mercury__io__Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__Result0_10, (MR_Integer) 0)));
              MR_Word mercury__io__V_17_17;

              {
                mercury__io__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__V_17_17, 0) = ((MR_Box) (mercury__io__Byte_13));
                MR_hl_field(MR_mktag(1), mercury__io__V_17_17, 1) = ((MR_Box) (mercury__io__Bytes0_7));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__io__Bytes0__tmp_copy_7 = mercury__io__V_17_17;

                mercury__io__Bytes0_7 = mercury__io__Bytes0__tmp_copy_7;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            *mercury__io__Result_8 = (MR_Word) mercury__io__Result0_10;
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__io__read_into_buffer_8_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Box mercury__io__Buffer0_2,
  MR_Box * mercury__io__Buffer_3,
  MR_Integer mercury__io__Pos0_4,
  MR_Integer * mercury__io__Pos_5,
  MR_Integer mercury__io__Size_6)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__read_into_buffer_8_p_0

	MercuryFilePtr Stream;
	char * Buffer0;
	char * Buffer;
	MR_Integer Pos0;
	MR_Integer Pos;
	MR_Integer Size;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
	Buffer0 = (char *) mercury__io__Buffer0_2 ;
	Pos0 =  mercury__io__Pos0_4 ;
	Size =  mercury__io__Size_6 ;
		{

    int items_read;

    MR_CHECK_EXPR_TYPE(Buffer0, char *);
    MR_CHECK_EXPR_TYPE(Buffer, char *);

    items_read = MR_READ(*Stream, Buffer0 + Pos0, Size - Pos0);

    Buffer = Buffer0;
    Pos = Pos0 + items_read;


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Buffer_3  = (MR_Box) Buffer;
	 *mercury__io__Pos_5  = Pos;
}
  }
}

static MR_bool MR_CALL 
mercury__io__buffer_to_string_3_p_0(
  MR_Box mercury__io__Buffer_1,
  MR_Integer mercury__io__Len_2,
  MR_String * mercury__io__Str_3)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__buffer_to_string_3_p_0

	char * Buffer;
	MR_Integer Len;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Buffer = (char *) mercury__io__Buffer_1 ;
	Len =  mercury__io__Len_2 ;
		{
{
    Str = Buffer;
    Str[Len] = '\0';

    /* Check that the string doesn't contain null characters. */
    if (strlen(Str) != Len) {
        SUCCESS_INDICATOR= MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__io__Str_3  = Str;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__io__succeeded;
  }
}

static void MR_CALL 
mercury__io__resize_buffer_4_p_0(
  MR_Integer mercury__io__OldSize_1,
  MR_Integer mercury__io__NewSize_2,
  MR_Box mercury__io__Buffer0_3,
  MR_Box * mercury__io__Buffer_4)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__resize_buffer_4_p_0

	MR_Integer OldSize;
	MR_Integer NewSize;
	char * Buffer0;
	char * Buffer;

	OldSize =  mercury__io__OldSize_1 ;
	NewSize =  mercury__io__NewSize_2 ;
	Buffer0 = (char *) mercury__io__Buffer0_3 ;
		{
{
    MR_CHECK_EXPR_TYPE(Buffer0, char *);
    MR_CHECK_EXPR_TYPE(Buffer, char *);

#ifdef MR_CONSERVATIVE_GC
    Buffer = MR_GC_realloc(Buffer0, NewSize * sizeof(char));
#else
    if (Buffer0 + OldSize == (char *) MR_hp) {
        MR_Word next;
        MR_offset_incr_hp_atomic_msg(next, 0,
            (NewSize * sizeof(char) + sizeof(MR_Word) - 1)
                / sizeof(MR_Word),
            MR_ALLOC_ID, "io.buffer/0");
        assert(Buffer0 + OldSize == (char *) next);
        Buffer = Buffer0;
    } else {
        /* just have to alloc and copy */
        MR_Word buf;
        MR_offset_incr_hp_atomic_msg(buf, 0,
            (NewSize * sizeof(char) + sizeof(MR_Word) - 1)
                / sizeof(MR_Word),
            MR_ALLOC_ID, "io.buffer/0");
        Buffer = (char *) buf;
        if (OldSize > NewSize) {
            MR_memcpy(Buffer, Buffer0, NewSize);
        } else {
            MR_memcpy(Buffer, Buffer0, OldSize);
        }
    }
#endif
}

		;}
#undef MR_PROC_LABEL
	 *mercury__io__Buffer_4  = (MR_Box) Buffer;
}
  }
}

static void MR_CALL 
mercury__io__alloc_buffer_2_p_0(
  MR_Integer mercury__io__Size_1,
  MR_Box * mercury__io__Buffer_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__alloc_buffer_2_p_0

	MR_Integer Size;
	char * Buffer;

	Size =  mercury__io__Size_1 ;
		{
{
    MR_Word buf;
    MR_offset_incr_hp_atomic_msg(buf, 0,
        (Size * sizeof(char) + sizeof(MR_Word) - 1) / sizeof(MR_Word),
        MR_ALLOC_ID, "io.buffer/0");
    Buffer = (char *) buf;
}

		;}
#undef MR_PROC_LABEL
	 *mercury__io__Buffer_2  = (MR_Box) Buffer;
}
  }
}

static void MR_CALL 
mercury__io__file_id_2_6_p_0(
  MR_String mercury__io__FileName_1,
  MR_Integer * mercury__io__Status_2,
  MR_String * mercury__io__Msg_3,
  MR_Box * mercury__io__FileId_4)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__file_id_2_6_p_0

	MR_String FileName;
	MR_Integer Status;
	MR_String Msg;
	ML_File_Id FileId;

	FileName =  mercury__io__FileName_1 ;
		{

#ifdef MR_HAVE_STAT
  #ifdef MR_WIN32
    struct _stat s;
    int stat_result = _wstat(ML_utf8_to_wide(FileName), &s);
  #else
    struct stat s;
    int stat_result = stat(FileName, &s);
  #endif

    if (stat_result == 0) {
        FileId.device = s.st_dev;
        FileId.inode = s.st_ino;
        Msg = MR_string_const("", 0);
        Status = 1;
    } else {
        ML_maybe_make_err_msg(MR_TRUE, errno, "stat() failed: ",
            MR_ALLOC_ID, Msg);
        Status = 0;
    }
#else
    MR_fatal_error("io.file_id_2 called but not supported");
#endif


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Status_2  = Status;
	 *mercury__io__Msg_3  = Msg;
	MR_MAYBE_BOX_FOREIGN_TYPE(ML_File_Id, FileId, *mercury__io__FileId_4 );
}
  }
}

static void MR_CALL 
mercury__io__compare_file_id_2_3_p_0(
  MR_Integer * mercury__io__Res_1,
  MR_Box mercury__io__FileId1_2,
  MR_Box mercury__io__FileId2_3)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__compare_file_id_2_3_p_0

	MR_Integer Res;
	ML_File_Id FileId1;
	ML_File_Id FileId2;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_File_Id, mercury__io__FileId1_2 , FileId1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_File_Id, mercury__io__FileId2_3 , FileId2);
		{

    int device_cmp;
    int inode_cmp;

    /*
    ** For compilers other than GCC, glibc defines dev_t as struct (dev_t
    ** is 64 bits, and other compilers may not have a 64 bit arithmetic type).
    ** XXX This code assumes that dev_t and ino_t do not include padding bits.
    ** In practice, that should be OK.
    */
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
	 *mercury__io__Res_1  = Res;
}
  }
}

void MR_CALL 
mercury__io__compare_file_id_3_p_0(
  MR_Word * mercury__io__Result_4,
  MR_Box mercury__io__FileId1_5,
  MR_Box mercury__io__FileId2_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Result0_7;

{
#define MR_PROC_LABEL mercury__io__compare_file_id_3_p_0

	MR_Integer Res;
	ML_File_Id FileId1;
	ML_File_Id FileId2;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_File_Id, mercury__io__FileId1_5 , FileId1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_File_Id, mercury__io__FileId2_6 , FileId2);
		{

    int device_cmp;
    int inode_cmp;

    /*
    ** For compilers other than GCC, glibc defines dev_t as struct (dev_t
    ** is 64 bits, and other compilers may not have a 64 bit arithmetic type).
    ** XXX This code assumes that dev_t and ino_t do not include padding bits.
    ** In practice, that should be OK.
    */
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
	 mercury__io__Result0_7  = Res;
}
    mercury__io__succeeded = (mercury__io__Result0_7 < (MR_Integer) 0);
    if (mercury__io__succeeded)
      *mercury__io__Result_4 = (MR_Integer) 1;
    else
      {
        mercury__io__succeeded = (mercury__io__Result0_7 == (MR_Integer) 0);
        if (mercury__io__succeeded)
          *mercury__io__Result_4 = (MR_Integer) 0;
        else
          *mercury__io__Result_4 = (MR_Integer) 2;
      }
  }
}

static void MR_CALL 
mercury__io__make_io_maybe_partial_res_1_error_string_6_p_0(
  MR_String mercury__io__Partial_7,
  MR_Box mercury__io__Error_8,
  MR_String mercury__io__Msg0_9,
  MR_Word * mercury__io__Res_10)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__Msg_12;
    MR_Word mercury__io__V_16_16;

{
#define MR_PROC_LABEL mercury__io__make_io_maybe_partial_res_1_error_string_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_8 , Error);
	Msg0 =  mercury__io__Msg0_9 ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_12  = Msg;
}
    mercury__io__V_16_16 = (MR_Word) mercury__io__Msg_12;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__io__Res_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Partial_7));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__V_16_16));
    }
  }
}

static MR_Word MR_CALL 
mercury__io__make_io_maybe_partial_res_1_ok_string_1_f_0(
  MR_String mercury__io__String_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__HeadVar__2_2;

    {
      mercury__io__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, 0) = ((MR_Box) (mercury__io__String_3));
    }
    return mercury__io__HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__io__make_io_res_1_error_string_5_p_0(
  MR_Box mercury__io__Error_6,
  MR_String mercury__io__Msg0_7,
  MR_Word * mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__Msg_8;
    MR_Word mercury__io__V_12_12;

{
#define MR_PROC_LABEL mercury__io__make_io_res_1_error_string_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_6 , Error);
	Msg0 =  mercury__io__Msg0_7 ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_8  = Msg;
}
    mercury__io__V_12_12 = (MR_Word) mercury__io__Msg_8;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *mercury__io__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_12_12));
    }
  }
}

static MR_Word MR_CALL 
mercury__io__make_io_res_1_ok_string_1_f_0(
  MR_String mercury__io__String_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__HeadVar__2_2;

    {
      mercury__io__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, 0) = ((MR_Box) (mercury__io__String_3));
    }
    return mercury__io__HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__io__make_io_res_1_error_file_type_5_p_0(
  MR_Box mercury__io__Error_6,
  MR_String mercury__io__Msg0_7,
  MR_Word * mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__Msg_8;
    MR_Word mercury__io__V_12_12;

{
#define MR_PROC_LABEL mercury__io__make_io_res_1_error_file_type_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_6 , Error);
	Msg0 =  mercury__io__Msg0_7 ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_8  = Msg;
}
    mercury__io__V_12_12 = (MR_Word) mercury__io__Msg_8;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *mercury__io__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_12_12));
    }
  }
}

static MR_Word MR_CALL 
mercury__io__make_io_res_1_ok_file_type_1_f_0(
  MR_Word mercury__io__FileType_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__HeadVar__2_2;

    {
      mercury__io__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__io__HeadVar__2_2, 0) = ((MR_Box) (mercury__io__FileType_3));
    }
    return mercury__io__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mercury__io__make_io_res_0_error_msg_1_f_0(
  MR_String mercury__io__Msg_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__HeadVar__2_2;
    MR_Word mercury__io__V_4_4 = (MR_Word) mercury__io__Msg_3;

    {
      mercury__io__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, 0) = ((MR_Box) (mercury__io__V_4_4));
    }
    return mercury__io__HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__io__make_io_res_0_error_5_p_0(
  MR_Box mercury__io__Error_6,
  MR_String mercury__io__Msg0_7,
  MR_Word * mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__Msg_8;
    MR_Word mercury__io__V_12_12;

{
#define MR_PROC_LABEL mercury__io__make_io_res_0_error_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_6 , Error);
	Msg0 =  mercury__io__Msg0_7 ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_8  = Msg;
}
    mercury__io__V_12_12 = (MR_Word) mercury__io__Msg_8;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *mercury__io__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_12_12));
    }
  }
}

static MR_Word MR_CALL 
mercury__io__make_io_res_0_ok_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__io__HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
mercury__io__access_types_includes_execute_1_p_0(
  MR_Word mercury__io__Access_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeCtorInfo_4_4 = (MR_Word) &mercury__io__io__type_ctor_info_access_type_0;

    {
      mercury__io__succeeded = mercury__list__member_2_p_0(mercury__io__TypeCtorInfo_4_4, ((MR_Box) ((MR_Integer) 2)), mercury__io__Access_2);
    }
    return mercury__io__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__io__access_types_includes_write_1_p_0(
  MR_Word mercury__io__Access_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeCtorInfo_4_4 = (MR_Word) &mercury__io__io__type_ctor_info_access_type_0;

    {
      mercury__io__succeeded = mercury__list__member_2_p_0(mercury__io__TypeCtorInfo_4_4, ((MR_Box) ((MR_Integer) 1)), mercury__io__Access_2);
    }
    return mercury__io__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__io__access_types_includes_read_1_p_0(
  MR_Word mercury__io__Access_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeCtorInfo_4_4 = (MR_Word) &mercury__io__io__type_ctor_info_access_type_0;

    {
      mercury__io__succeeded = mercury__list__member_2_p_0(mercury__io__TypeCtorInfo_4_4, ((MR_Box) ((MR_Integer) 0)), mercury__io__Access_2);
    }
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io__check_file_accessibility_dotnet_5_p_0(
  MR_String mercury__io__FileName_6,
  MR_Word mercury__io__AccessTypes_7,
  MR_Word * mercury__io__Result_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__CheckRead0_10;
    MR_Word mercury__io__CheckWrite_11;
    MR_Word mercury__io__CheckExec_12;
    MR_Word mercury__io__CheckRead_13;
    MR_Word mercury__io__FileTypeRes_14;
    MR_Word mercury__io__TypeCtorInfo_4_46 = (MR_Word) &mercury__io__io__type_ctor_info_access_type_0;
    MR_Word mercury__io__TypeCtorInfo_4_51;
    MR_Word mercury__io__TypeCtorInfo_4_56;

    {
      mercury__io__succeeded = mercury__list__member_2_p_0(mercury__io__TypeCtorInfo_4_46, ((MR_Box) ((MR_Integer) 0)), mercury__io__AccessTypes_7);
    }
    if (mercury__io__succeeded)
      mercury__io__CheckRead0_10 = (MR_Integer) 1;
    else
      mercury__io__CheckRead0_10 = (MR_Integer) 0;
    mercury__io__TypeCtorInfo_4_51 = (MR_Word) &mercury__io__io__type_ctor_info_access_type_0;
    {
      mercury__io__succeeded = mercury__list__member_2_p_0(mercury__io__TypeCtorInfo_4_51, ((MR_Box) ((MR_Integer) 1)), mercury__io__AccessTypes_7);
    }
    if (mercury__io__succeeded)
      mercury__io__CheckWrite_11 = (MR_Integer) 1;
    else
      mercury__io__CheckWrite_11 = (MR_Integer) 0;
    mercury__io__TypeCtorInfo_4_56 = (MR_Word) &mercury__io__io__type_ctor_info_access_type_0;
    {
      mercury__io__succeeded = mercury__list__member_2_p_0(mercury__io__TypeCtorInfo_4_56, ((MR_Box) ((MR_Integer) 2)), mercury__io__AccessTypes_7);
    }
    if (mercury__io__succeeded)
      mercury__io__CheckExec_12 = (MR_Integer) 1;
    else
      mercury__io__CheckExec_12 = (MR_Integer) 0;
    switch (mercury__io__CheckRead0_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__CheckRead_13 = mercury__io__CheckExec_12;
        break;
      case (MR_Integer) 1:
        mercury__io__CheckRead_13 = (MR_Integer) 1;
        break;
    }
    {
      mercury__io__file_type_5_p_0((MR_Integer) 1, mercury__io__FileName_6, &mercury__io__FileTypeRes_14);
    }
    if (((MR_tag((MR_Word) mercury__io__FileTypeRes_14)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__io__FileTypeError_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__FileTypeRes_14, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__FileTypeError_24));
        }
      }
    else
      {
        MR_Word mercury__io__FileType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__FileTypeRes_14, (MR_Integer) 0)));

        mercury__io__succeeded = (mercury__io__FileType_15 == (MR_Integer) 1);
        if (mercury__io__succeeded)
          {
            MR_Word mercury__io__TypeClassInfo_for_enum_40 = (MR_Word) &mercury__io_scalar_common_4[0];
            MR_Word mercury__io__TypeClassInfo_for_enum_41;
            MR_Integer mercury__io__V_32_32;
            MR_Box MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__io__TypeClassInfo_for_enum_40, (MR_Integer) 0)), (MR_Integer) 5)));
            MR_Box mercury__io__conv1_V_32_32;
            MR_Integer mercury__io__V_33_33;
            MR_Box MR_CALL (* mercury__io__func_2)(MR_Box, MR_Box);
            MR_Box mercury__io__conv3_V_33_33;

            {
              mercury__io__conv1_V_32_32 = mercury__io__func_0(((MR_Box) mercury__io__TypeClassInfo_for_enum_40), ((MR_Box) (mercury__io__CheckRead_13)));
            }
            mercury__io__V_32_32 = ((MR_Integer) mercury__io__conv1_V_32_32);
            mercury__io__TypeClassInfo_for_enum_41 = (MR_Word) &mercury__io_scalar_common_4[0];
            mercury__io__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__io__TypeClassInfo_for_enum_41, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__io__conv3_V_33_33 = mercury__io__func_2(((MR_Box) mercury__io__TypeClassInfo_for_enum_41), ((MR_Box) (mercury__io__CheckWrite_11)));
            }
            mercury__io__V_33_33 = ((MR_Integer) mercury__io__conv3_V_33_33);
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_dotnet_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__io__succeeded)
              {
                {
                  mercury__require__error_1_p_0((MR_String) "io.check_directory_accessibility_dotnet called for non-.NET CLI backend");
                  return;
                }
              }
            else
              *mercury__io__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word mercury__io__CheckReadRes_18;
            MR_Word mercury__io__CheckWriteRes_22;

            switch (mercury__io__CheckRead_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mercury__io__CheckReadRes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__io__InputRes_16;

                  {
                    mercury__io__open_input_4_p_0(mercury__io__FileName_6, &mercury__io__InputRes_16);
                  }
                  if (((MR_tag((MR_Word) mercury__io__InputRes_16)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_Word mercury__io__InputError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__InputRes_16, (MR_Integer) 0)));

                      {
                        mercury__io__CheckReadRes_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__io__CheckReadRes_18, 0) = ((MR_Box) (mercury__io__InputError_19));
                      }
                    }
                  else
                    {
                      MR_Word mercury__io__InputStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__InputRes_16, (MR_Integer) 0)));
                      MR_Box mercury__io__Stream_74 = (MR_Box) mercury__io__InputStream_17;

                      {
                        mercury__io__maybe_delete_stream_info_3_p_0(mercury__io__Stream_74);
                      }
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_dotnet_5_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_74 ;
		{

    mercury_close(Stream);


		;}
#undef MR_PROC_LABEL
}
                      mercury__io__CheckReadRes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                }
                break;
            }
            mercury__io__succeeded = (mercury__io__CheckReadRes_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__io__succeeded)
              mercury__io__succeeded = (mercury__io__CheckWrite_11 == (MR_Integer) 1);
            if (mercury__io__succeeded)
              {
                MR_Word mercury__io__OutputRes_20;

                {
                  mercury__io__open_append_4_p_0(mercury__io__FileName_6, &mercury__io__OutputRes_20);
                }
                if (((MR_tag((MR_Word) mercury__io__OutputRes_20)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word mercury__io__OutputError_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__OutputRes_20, (MR_Integer) 0)));

                    {
                      mercury__io__CheckWriteRes_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__io__CheckWriteRes_22, 0) = ((MR_Box) (mercury__io__OutputError_23));
                    }
                  }
                else
                  {
                    MR_Word mercury__io__OutputStream_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__OutputRes_20, (MR_Integer) 0)));
                    MR_Box mercury__io__Stream_80 = (MR_Box) mercury__io__OutputStream_21;

                    {
                      mercury__io__maybe_delete_stream_info_3_p_0(mercury__io__Stream_80);
                    }
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_dotnet_5_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_80 ;
		{

    mercury_close(Stream);


		;}
#undef MR_PROC_LABEL
}
                    mercury__io__CheckWriteRes_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
              }
            else
              mercury__io__CheckWriteRes_22 = mercury__io__CheckReadRes_18;
            mercury__io__succeeded = (mercury__io__CheckWriteRes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__io__succeeded)
              mercury__io__succeeded = (mercury__io__CheckExec_12 == (MR_Integer) 1);
            if (mercury__io__succeeded)
              {
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_dotnet_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
                if (mercury__io__succeeded)
                  {
                    {
                      mercury__require__error_1_p_0((MR_String) "io.have_dotnet_exec_permission invoked for non-.NET CLI backend");
                      return;
                    }
                  }
                else
                  *mercury__io__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            else
              *mercury__io__Result_8 = mercury__io__CheckWriteRes_22;
          }
      }
  }
}

void MR_CALL 
mercury__io__check_file_accessibility_2_5_p_0(
  MR_String mercury__io__FileName_1,
  MR_Word mercury__io__AccessTypes_2,
  MR_Word * mercury__io__Result_3)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_2_5_p_0

	MR_String FileName;
	MR_Word AccessTypes;
	MR_Word Result;

	FileName =  mercury__io__FileName_1 ;
	AccessTypes =  mercury__io__AccessTypes_2 ;
		{

#if defined(MR_HAVE_ACCESS)
  #ifdef F_OK
    int mode = F_OK;
  #else
    int mode = 0;
  #endif
    int access_result;

  #if !defined(MR_WIN32) || defined(MR_CYGWIN)
    /*
    ** Earlier versions of MSVCRT ignored flags it doesn't support,
    ** later versions return an error (e.g. on Vista).
    */
    if (ML_access_types_includes_execute(AccessTypes)) {
      #ifdef X_OK
        mode |= X_OK;
      #else
        mode |= 1;
      #endif
    }
  #endif
    if (ML_access_types_includes_write(AccessTypes)) {
  #ifdef W_OK
        mode |= W_OK;
  #else
        mode |= 2;
  #endif
    }
    if (ML_access_types_includes_read(AccessTypes)) {
  #ifdef R_OK
        mode |= R_OK;
  #else
        mode |= 4;
  #endif
    }

  #ifdef MR_WIN32
    access_result = _waccess(ML_utf8_to_wide(FileName), mode);
  #else
    access_result = access(FileName, mode);
  #endif

    if (access_result == 0) {
        Result = ML_make_io_res_0_ok();
    } else {
        ML_make_io_res_0_error(errno,
            MR_make_string_const("file not accessible: "), &Result);
    }
#else /* !MR_HAVE_ACCESS */
    Result = ML_make_io_res_0_error_msg(
        "io.check_file_accessibility not supported on this platform");
#endif


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Result_3  = Result;
}
  }
}

static MR_Word MR_CALL 
mercury__io__file_type_unknown_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    return (MR_Integer) 10;
  }
}

static MR_Word MR_CALL 
mercury__io__file_type_shared_memory_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    return (MR_Integer) 9;
  }
}

static MR_Word MR_CALL 
mercury__io__file_type_semaphore_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    return (MR_Integer) 8;
  }
}

static MR_Word MR_CALL 
mercury__io__file_type_message_queue_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    return (MR_Integer) 7;
  }
}

static MR_Word MR_CALL 
mercury__io__file_type_regular_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    return (MR_Integer) 0;
  }
}

static MR_Word MR_CALL 
mercury__io__file_type_symbolic_link_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    return (MR_Integer) 2;
  }
}

static MR_Word MR_CALL 
mercury__io__file_type_socket_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    return (MR_Integer) 4;
  }
}

static MR_Word MR_CALL 
mercury__io__file_type_directory_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    return (MR_Integer) 1;
  }
}

static MR_Word MR_CALL 
mercury__io__file_type_fifo_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    return (MR_Integer) 3;
  }
}

static MR_Word MR_CALL 
mercury__io__file_type_block_device_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    return (MR_Integer) 6;
  }
}

static MR_Word MR_CALL 
mercury__io__file_type_character_device_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    return (MR_Integer) 5;
  }
}

static void MR_CALL 
mercury__io__file_type_2_5_p_0(
  MR_Integer mercury__io__FollowSymLinks_1,
  MR_String mercury__io__FileName_2,
  MR_Word * mercury__io__Result_3)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__file_type_2_5_p_0

	MR_Integer FollowSymLinks;
	MR_String FileName;
	MR_Word Result;

	FollowSymLinks =  mercury__io__FollowSymLinks_1 ;
	FileName =  mercury__io__FileName_2 ;
		{

#ifdef MR_HAVE_STAT
  #ifdef MR_WIN32
    struct _stat s;
    int stat_result = _wstat(ML_utf8_to_wide(FileName), &s);
  #else
    struct stat s;
    int stat_result;

    if (FollowSymLinks == 1) {
        stat_result = stat(FileName, &s);
    } else {
        #ifdef MR_HAVE_LSTAT
            stat_result = lstat(FileName, &s);
        #else
            stat_result = stat(FileName, &s);
        #endif
    }
  #endif

    if (stat_result == 0) {
        MR_Word type;

        #if defined(S_ISREG)
            if (S_ISREG(s.st_mode)) {
                type = ML_file_type_regular();
            } else
        #elif defined(S_IFMT) && defined(S_IFREG)
            if ((s.st_mode & S_IFMT) == S_IFREG) {
                type = ML_file_type_regular();
            } else
        #endif

        #if defined(S_ISDIR)
            if (S_ISDIR(s.st_mode)) {
                type = ML_file_type_directory();
            } else
        #elif defined(S_IFMT) && defined(S_IFDIR)
            if ((s.st_mode & S_IFMT) == S_IFDIR) {
                type = ML_file_type_directory();
            } else
        #endif

        #if defined(S_ISBLK)
            if (S_ISBLK(s.st_mode)) {
                type = ML_file_type_block_device();
            } else
        #elif defined(S_IFMT) && defined(S_IFBLK)
            if ((s.st_mode & S_IFMT) == S_IFBLK) {
                type = ML_file_type_block_device();
            } else
        #endif

        #if defined(S_ISCHR)
            if (S_ISCHR(s.st_mode)) {
                type = ML_file_type_character_device();
            } else
        #elif defined(S_IFMT) && defined(S_IFCHR)
            if ((s.st_mode & S_IFMT) == S_IFCHR) {
                type = ML_file_type_character_device();
            } else
        #endif

        #if defined(S_ISFIFO)
            if (S_ISFIFO(s.st_mode)) {
                type = ML_file_type_fifo();
            } else
        #elif defined(S_IFMT) && defined(S_IFIFO)
            if ((s.st_mode & S_IFMT) == S_IFIFO) {
                type = ML_file_type_fifo();
            } else
        #endif

        #if defined(S_ISLNK)
            if (S_ISLNK(s.st_mode)) {
                type = ML_file_type_symbolic_link();
            } else
        #elif defined(S_IFMT) && defined(S_IFLNK)
            if ((s.st_mode & S_IFMT) == S_IFLNK) {
                type = ML_file_type_symbolic_link();
            } else
        #endif

        #if defined(S_ISSOCK)
            if (S_ISSOCK(s.st_mode)) {
                type = ML_file_type_socket();
            } else
        #elif defined(S_IFMT) && defined(S_IFSOCK)
            if ((s.st_mode & S_IFMT) == S_IFSOCK) {
                type = ML_file_type_socket();
            } else
        #endif

        #ifdef S_TYPEISMQ
            if (S_TYPEISMQ(&s)) {
                type = ML_file_type_message_queue();
            } else
        #endif

        #ifdef S_TYPEISSEM
            if (S_TYPEISSEM(&s)) {
                type = ML_file_type_semaphore();
            } else
        #endif

        #ifdef S_TYPEISSHM
            if (S_TYPEISSHM(&s)) {
                type = ML_file_type_shared_memory();
            } else
        #endif

            {
                type = ML_file_type_unknown();
            }

        Result = ML_make_io_res_1_ok_file_type(type);
    } else {
        /*
        ** We can't just call ML_make_err_msg here because
        ** it uses `hp' and this procedure can call Mercury.
        */
        ML_make_io_res_1_error_file_type(errno,
            MR_make_string_const("io.file_type failed: "), &Result);
    }
#else
    MR_fatal_error(
        "Sorry, io.file_type not implemented on this platform") }
#endif


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Result_3  = Result;
}
  }
}

static MR_bool MR_CALL 
mercury__io__file_type_implemented_0_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__file_type_implemented_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MR_HAVE_STAT
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io__file_modification_time_2_6_p_0(
  MR_String mercury__io__FileName_1,
  MR_Integer * mercury__io__Status_2,
  MR_String * mercury__io__Msg_3,
  MR_Word * mercury__io__Time_4)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__file_modification_time_2_6_p_0

	MR_String FileName;
	MR_Integer Status;
	MR_String Msg;
	MR_Word Time;

	FileName =  mercury__io__FileName_1 ;
		{

#ifdef MR_HAVE_STAT
  #ifdef MR_WIN32
    struct _stat s;
    int stat_result = _wstat(ML_utf8_to_wide(FileName), &s);
  #else
    struct stat s;
    int stat_result = stat(FileName, &s);
  #endif

    if (stat_result == 0) {
        Time = ML_construct_time_t(s.st_mtime);
        Msg = MR_string_const("", 0);
        Status = 1;
    } else {
        ML_maybe_make_err_msg(MR_TRUE, errno, "stat() failed: ",
            MR_ALLOC_ID, Msg);
        Status = 0;
        Time = 0;   /* Dummy value -- will not be used. */
    }
#else
    Status = 0;
    Msg = MR_make_string_const(
        "io.file_modification_time not available on this platform");
#endif


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Status_2  = Status;
	 *mercury__io__Msg_3  = Msg;
	 *mercury__io__Time_4  = Time;
}
  }
}

static void MR_CALL 
mercury__io__stream_file_size_4_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer * mercury__io__Size_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__stream_file_size_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Size;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
		{

#if defined(MR_HAVE_FSTAT) &&         (defined(MR_HAVE_FILENO) || defined(fileno)) && defined(S_ISREG)
    struct stat s;
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (fstat(fileno(MR_file(*Stream)), &s) == 0 && S_ISREG(s.st_mode)) {
            Size = s.st_size;
        } else {
            Size = -1;
        }
    } else {
        Size = -1;
    }
#else
    Size = -1;
#endif


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Size_2  = Size;
}
  }
}

void MR_CALL 
mercury__io__get_system_error_3_p_0(
  MR_Box * mercury__io__Error_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__get_system_error_3_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *mercury__io__Error_1 );
}
  }
}

void MR_CALL 
mercury__io__make_err_msg_4_p_0(
  MR_String mercury__io__Msg0_5,
  MR_String * mercury__io__Msg_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Error_8;

{
#define MR_PROC_LABEL mercury__io__make_err_msg_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_8 );
}
{
#define MR_PROC_LABEL mercury__io__make_err_msg_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_8 , Error);
	Msg0 =  mercury__io__Msg0_5 ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Msg_6  = Msg;
}
  }
}

static void MR_CALL 
mercury__io__ferror_5_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer * mercury__io__RetVal_2,
  MR_String * mercury__io__RetStr_3)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__ferror_5_p_0

	MercuryFilePtr Stream;
	MR_Integer RetVal;
	MR_String RetStr;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
		{

    if (MR_IS_FILE_STREAM(*Stream)) {
        RetVal = ferror(MR_file(*Stream));
    } else {
        RetVal = -1;
    }

    ML_maybe_make_err_msg(RetVal != 0, errno, "read failed: ",
        MR_ALLOC_ID, RetStr);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__RetVal_2  = RetVal;
	 *mercury__io__RetStr_3  = RetStr;
}
  }
}

static void MR_CALL 
mercury__io__clear_err_3_p_0(
  MR_Box mercury__io__Stream_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__clear_err_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
		{

    if (MR_IS_FILE_STREAM(*Stream)) {
        clearerr(MR_file(*Stream));
    } else {
        /* Not a file stream so do nothing */
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__io__read_file_as_string_2_9_p_0(
  MR_Word mercury__io__Stream_10,
  MR_Box mercury__io__STATE_VARIABLE_Buffer_0_18,
  MR_Box * mercury__io__STATE_VARIABLE_Buffer_19,
  MR_Integer mercury__io__STATE_VARIABLE_Pos_0_20,
  MR_Integer * mercury__io__STATE_VARIABLE_Pos_21,
  MR_Integer mercury__io__STATE_VARIABLE_Size_0_22,
  MR_Integer * mercury__io__STATE_VARIABLE_Size_23)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Box mercury__io__RealStream_17 = (MR_Box) mercury__io__Stream_10;
        MR_Box mercury__io__STATE_VARIABLE_Buffer_26_26;
        MR_Integer mercury__io__STATE_VARIABLE_Pos_27_27;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_2_9_p_0

	MercuryFilePtr Stream;
	char * Buffer0;
	char * Buffer;
	MR_Integer Pos0;
	MR_Integer Pos;
	MR_Integer Size;

	Stream = (MercuryFilePtr) mercury__io__RealStream_17 ;
	Buffer0 = (char *) mercury__io__STATE_VARIABLE_Buffer_0_18 ;
	Pos0 =  mercury__io__STATE_VARIABLE_Pos_0_20 ;
	Size =  mercury__io__STATE_VARIABLE_Size_0_22 ;
		{

    int items_read;

    MR_CHECK_EXPR_TYPE(Buffer0, char *);
    MR_CHECK_EXPR_TYPE(Buffer, char *);

    items_read = MR_READ(*Stream, Buffer0 + Pos0, Size - Pos0);

    Buffer = Buffer0;
    Pos = Pos0 + items_read;


		;}
#undef MR_PROC_LABEL
	 mercury__io__STATE_VARIABLE_Buffer_26_26  = (MR_Box) Buffer;
	 mercury__io__STATE_VARIABLE_Pos_27_27  = Pos;
}
        mercury__io__succeeded = (mercury__io__STATE_VARIABLE_Pos_27_27 <= mercury__io__STATE_VARIABLE_Pos_0_20);
        if (mercury__io__succeeded)
          {
            *mercury__io__STATE_VARIABLE_Size_23 = mercury__io__STATE_VARIABLE_Size_0_22;
            *mercury__io__STATE_VARIABLE_Pos_21 = mercury__io__STATE_VARIABLE_Pos_27_27;
            *mercury__io__STATE_VARIABLE_Buffer_19 = mercury__io__STATE_VARIABLE_Buffer_26_26;
          }
        else
          {
            mercury__io__succeeded = (mercury__io__STATE_VARIABLE_Pos_27_27 == mercury__io__STATE_VARIABLE_Size_0_22);
            if (mercury__io__succeeded)
              {
                MR_Integer mercury__io__STATE_VARIABLE_Size_29_29 = (mercury__io__STATE_VARIABLE_Size_0_22 * (MR_Integer) 2);
                MR_Box mercury__io__STATE_VARIABLE_Buffer_31_31;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_2_9_p_0

	MR_Integer OldSize;
	MR_Integer NewSize;
	char * Buffer0;
	char * Buffer;

	OldSize =  mercury__io__STATE_VARIABLE_Size_0_22 ;
	NewSize =  mercury__io__STATE_VARIABLE_Size_29_29 ;
	Buffer0 = (char *) mercury__io__STATE_VARIABLE_Buffer_26_26 ;
		{
{
    MR_CHECK_EXPR_TYPE(Buffer0, char *);
    MR_CHECK_EXPR_TYPE(Buffer, char *);

#ifdef MR_CONSERVATIVE_GC
    Buffer = MR_GC_realloc(Buffer0, NewSize * sizeof(char));
#else
    if (Buffer0 + OldSize == (char *) MR_hp) {
        MR_Word next;
        MR_offset_incr_hp_atomic_msg(next, 0,
            (NewSize * sizeof(char) + sizeof(MR_Word) - 1)
                / sizeof(MR_Word),
            MR_ALLOC_ID, "io.buffer/0");
        assert(Buffer0 + OldSize == (char *) next);
        Buffer = Buffer0;
    } else {
        /* just have to alloc and copy */
        MR_Word buf;
        MR_offset_incr_hp_atomic_msg(buf, 0,
            (NewSize * sizeof(char) + sizeof(MR_Word) - 1)
                / sizeof(MR_Word),
            MR_ALLOC_ID, "io.buffer/0");
        Buffer = (char *) buf;
        if (OldSize > NewSize) {
            MR_memcpy(Buffer, Buffer0, NewSize);
        } else {
            MR_memcpy(Buffer, Buffer0, OldSize);
        }
    }
#endif
}

		;}
#undef MR_PROC_LABEL
	 mercury__io__STATE_VARIABLE_Buffer_31_31  = (MR_Box) Buffer;
}
                /* direct tailcall eliminated */
                {
                  MR_Box mercury__io__STATE_VARIABLE_Buffer_0__tmp_copy_18 = mercury__io__STATE_VARIABLE_Buffer_31_31;
                  MR_Integer mercury__io__STATE_VARIABLE_Pos_0__tmp_copy_20 = mercury__io__STATE_VARIABLE_Pos_27_27;
                  MR_Integer mercury__io__STATE_VARIABLE_Size_0__tmp_copy_22 = mercury__io__STATE_VARIABLE_Size_29_29;

                  mercury__io__STATE_VARIABLE_Size_0_22 = mercury__io__STATE_VARIABLE_Size_0__tmp_copy_22;
                  mercury__io__STATE_VARIABLE_Pos_0_20 = mercury__io__STATE_VARIABLE_Pos_0__tmp_copy_20;
                  mercury__io__STATE_VARIABLE_Buffer_0_18 = mercury__io__STATE_VARIABLE_Buffer_0__tmp_copy_18;
                }
                continue;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Box mercury__io__STATE_VARIABLE_Buffer_0__tmp_copy_18 = mercury__io__STATE_VARIABLE_Buffer_26_26;
                  MR_Integer mercury__io__STATE_VARIABLE_Pos_0__tmp_copy_20 = mercury__io__STATE_VARIABLE_Pos_27_27;

                  mercury__io__STATE_VARIABLE_Pos_0_20 = mercury__io__STATE_VARIABLE_Pos_0__tmp_copy_20;
                  mercury__io__STATE_VARIABLE_Buffer_0_18 = mercury__io__STATE_VARIABLE_Buffer_0__tmp_copy_18;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
mercury__io__read_file_2_5_p_0(
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__Chars0_7,
  MR_Word * mercury__io__Result_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__Result0_10;
        MR_Integer mercury__io__Code_27;
        MR_Box mercury__io__Stream_37 = (MR_Box) mercury__io__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_37, &mercury__io__Code_27);
        }
        mercury__io__succeeded = (mercury__io__Code_27 == (MR_Integer) -1);
        if (mercury__io__succeeded)
          mercury__io__Result0_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Char mercury__io__Char_28;

{
#define MR_PROC_LABEL mercury__io__read_file_2_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_27 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_28  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__io__succeeded)
              {
                mercury__io__Result0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__Result0_10, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_28));
              }
            else
              {
                MR_String mercury__io__Msg_29;
                MR_Word mercury__io__V_33_33;
                MR_Box mercury__io__Error_45;

{
#define MR_PROC_LABEL mercury__io__read_file_2_5_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_45 );
}
{
#define MR_PROC_LABEL mercury__io__read_file_2_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_45 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_29  = Msg;
}
                mercury__io__V_33_33 = (MR_Word) mercury__io__Msg_29;
                {
                  mercury__io__Result0_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__Result0_10, 0) = ((MR_Box) (mercury__io__V_33_33));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__Result0_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__io__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
              MR_Word mercury__io__V_19_19;

              {
                mercury__list__reverse_2_p_0(mercury__io__TypeCtorInfo_20_20, mercury__io__Chars0_7, &mercury__io__V_19_19);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__io__Result_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__V_19_19));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Char mercury__io__Char_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Result0_10, (MR_Integer) 0)));
              MR_Word mercury__io__V_16_16;

              {
                mercury__io__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__V_16_16, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_12));
                MR_hl_field(MR_mktag(1), mercury__io__V_16_16, 1) = ((MR_Box) (mercury__io__Chars0_7));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__io__Chars0__tmp_copy_7 = mercury__io__V_16_16;

                mercury__io__Chars0_7 = mercury__io__Chars0__tmp_copy_7;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
              MR_Word mercury__io__Err_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__Result0_10, (MR_Integer) 0)));
              MR_Word mercury__io__V_18_18;

              {
                mercury__list__reverse_2_p_0(mercury__io__TypeCtorInfo_21_21, mercury__io__Chars0_7, &mercury__io__V_18_18);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Result_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_18_18));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Err_11));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__io__read_line_as_string_2_6_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Word mercury__io___FirstCall_2,
  MR_Integer * mercury__io__Res_3,
  MR_String * mercury__io__RetString_4)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__read_line_as_string_2_6_p_0

	MercuryFilePtr Stream;
	MR_Integer Res;
	MR_String RetString;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
		{

#define ML_IO_READ_LINE_GROW(n) ((n) * 3 / 2)
#define ML_IO_BYTES_TO_WORDS(n) (((n) + sizeof(MR_Word) - 1) / sizeof(MR_Word))
#define ML_IO_READ_LINE_START   1024

    char initial_read_buffer[ML_IO_READ_LINE_START];
    char *read_buffer = initial_read_buffer;
    size_t read_buf_size = ML_IO_READ_LINE_START;
    size_t i;
    int char_code = '\0';

    Res = 0;
    for (i = 0; char_code != '\n'; ) {
        char_code = mercury_get_byte(Stream);
        if (char_code == EOF) {
            if (i == 0) {
                Res = -1;
            }
            break;
        }
        if (char_code == 0) {
            Res = -2;
            break;
        }
        read_buffer[i++] = (char) char_code;
        MR_assert(i <= read_buf_size);
        if (i == read_buf_size) {
            /* Grow the read buffer */
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
    if (Res == 0) {
        MR_Word ret_string_word;
        MR_offset_incr_hp_atomic_msg(ret_string_word,
            0, ML_IO_BYTES_TO_WORDS((i + 1) * sizeof(char)),
            MR_ALLOC_ID, "string.string/0");
        RetString = (MR_String) ret_string_word;
        MR_memcpy(RetString, read_buffer, i * sizeof(char));
        RetString[i] = '\0';
    } else {
        /*
        ** We can't just return NULL here, because otherwise mdb will break
        ** when it tries to print the string.
        */
        RetString = MR_make_string_const("");
    }
    if (read_buffer != initial_read_buffer) {
        MR_free(read_buffer);
    }


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Res_3  = Res;
	 *mercury__io__RetString_4  = RetString;
}
  }
}

static void MR_CALL 
mercury__io__read_line_2_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Code_8;
    MR_Box mercury__io__Stream_19 = (MR_Box) mercury__io__Stream_5;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_19, &mercury__io__Code_8);
    }
    mercury__io__succeeded = (mercury__io__Code_8 == (MR_Integer) -1);
    if (mercury__io__succeeded)
      *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Char mercury__io__Char_9;

{
#define MR_PROC_LABEL mercury__io__read_line_2_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_8 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_9  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__io__succeeded)
          {
            mercury__io__succeeded = (mercury__io__Char_9 == (MR_Char) 10);
            if (mercury__io__succeeded)
              {
                MR_Word mercury__io__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__io__Result_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_9));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__V_14_14));
                }
              }
            else
              {
                MR_Word mercury__io__Chars_10;

                {
                  mercury__io__read_line_2_4_p_0(mercury__io__Stream_5, &mercury__io__Chars_10);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__io__Result_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_9));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Chars_10));
                }
              }
          }
        else
          *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

static void MR_CALL 
mercury__io__read_word_2_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__CharResult_8;
    MR_Integer mercury__io__Code_28;
    MR_Box mercury__io__Stream_38 = (MR_Box) mercury__io__Stream_5;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_38, &mercury__io__Code_28);
    }
    mercury__io__succeeded = (mercury__io__Code_28 == (MR_Integer) -1);
    if (mercury__io__succeeded)
      mercury__io__CharResult_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Char mercury__io__Char_29;

{
#define MR_PROC_LABEL mercury__io__read_word_2_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_28 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_29  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__io__succeeded)
          {
            mercury__io__CharResult_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__io__CharResult_8, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_29));
          }
        else
          {
            MR_String mercury__io__Msg_30;
            MR_Word mercury__io__V_34_34;
            MR_Box mercury__io__Error_46;

{
#define MR_PROC_LABEL mercury__io__read_word_2_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_46 );
}
{
#define MR_PROC_LABEL mercury__io__read_word_2_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_46 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_30  = Msg;
}
            mercury__io__V_34_34 = (MR_Word) mercury__io__Msg_30;
            {
              mercury__io__CharResult_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mercury__io__CharResult_8, 0) = ((MR_Box) (mercury__io__V_34_34));
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__io__CharResult_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Char mercury__io__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__CharResult_8, (MR_Integer) 0)));

          {
            mercury__io__succeeded = mercury__char__is_whitespace_1_p_0(mercury__io__Char_10);
          }
          if (mercury__io__succeeded)
            {
              MR_Word mercury__io__V_18_18;
              MR_Box mercury__io__Stream_52 = (MR_Box) mercury__io__Stream_5;

              {
                mercury__io__putback_char_2_4_p_0(mercury__io__Stream_52, mercury__io__Char_10);
              }
              mercury__io__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_5[9]);
            }
          else
            {
              MR_Word mercury__io__Result0_11;

              {
                mercury__io__read_word_2_4_p_0(mercury__io__Stream_5, &mercury__io__Result0_11);
              }
              switch (MR_tag((MR_Word) mercury__io__Result0_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word mercury__io__V_20_20;
                    MR_Word mercury__io__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                    {
                      mercury__io__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__io__V_20_20, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_10));
                      MR_hl_field(MR_mktag(1), mercury__io__V_20_20, 1) = ((MR_Box) (mercury__io__V_21_21));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__io__Result_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_20_20));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mercury__io__Chars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Result0_11, (MR_Integer) 0)));
                    MR_Word mercury__io__V_22_22;

                    {
                      mercury__io__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__io__V_22_22, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_10));
                      MR_hl_field(MR_mktag(1), mercury__io__V_22_22, 1) = ((MR_Box) (mercury__io__Chars_12));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__io__Result_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_22_22));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *mercury__io__Result_6 = mercury__io__Result0_11;
                  break;
              }
            }
        }
        break;
      case (MR_Integer) 2:
        *mercury__io__Result_6 = (MR_Word) mercury__io__CharResult_8;
        break;
    }
  }
}

static void MR_CALL 
mercury__io__do_read_bitmap_9_p_0(
  MR_Box mercury__io__Stream_1,
  MR_Integer mercury__io__StartByte_2,
  MR_Integer mercury__io__NumBytes_3,
  MR_Box mercury__io__Bitmap0_4,
  MR_Box * mercury__io__Bitmap_5,
  MR_Integer mercury__io__BytesRead0_6,
  MR_Integer * mercury__io__BytesRead_7)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__do_read_bitmap_9_p_0

	MercuryFilePtr Stream;
	MR_Integer StartByte;
	MR_Integer NumBytes;
	MR_BitmapPtr Bitmap0;
	MR_BitmapPtr Bitmap;
	MR_Integer BytesRead0;
	MR_Integer BytesRead;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
	StartByte =  mercury__io__StartByte_2 ;
	NumBytes =  mercury__io__NumBytes_3 ;
	Bitmap0 = (MR_BitmapPtr) mercury__io__Bitmap0_4 ;
	BytesRead0 =  mercury__io__BytesRead0_6 ;
		{

    Bitmap = Bitmap0,
    BytesRead = BytesRead0 +
                    MR_READ(*Stream, Bitmap->elements + StartByte, NumBytes);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Bitmap_5  = (MR_Box) Bitmap;
	 *mercury__io__BytesRead_7  = BytesRead;
}
  }
}

static void MR_CALL 
mercury__io__insert_std_stream_names_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeCtorInfo_18_51;
    MR_Word mercury__io__TypeInfo_for_K_59;
    MR_Word mercury__io__TypeCtorInfo_18_81;
    MR_Word mercury__io__TypeInfo_for_K_89;
    MR_Box mercury__io__Stdin_4;
    MR_Box mercury__io__Stdout_5;
    MR_Box mercury__io__Stderr_6;
    MR_Word mercury__io__V_11_11;
    MR_Word mercury__io__V_19_19;
    MR_Word mercury__io__V_27_27;
    MR_Word mercury__io__StreamDb0_43;
    MR_Word mercury__io__StreamDb_44;
    MR_Integer mercury__io__V_47_47;
    MR_Word mercury__io__StreamDb0_73;
    MR_Word mercury__io__StreamDb_74;
    MR_Integer mercury__io__V_77_77;

{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stdin_4  = (MR_Box) Stream;
}
    mercury__io__V_11_11 = (MR_Word) &mercury__io_scalar_common_2[1];
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	 mercury__io__StreamDb0_43  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) mercury__io__Stdin_4 ;
		{

#ifndef MR_NATIVE_GC
    /*
    ** Most of the time, we can just use the pointer to the stream
    ** as a unique identifier.
    */
    Id = (MR_Word) Stream;
#else
    /*
    ** For accurate GC we embed an ID in the MercuryFile
    ** and retrieve it here.
    */
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_47_47  = Id;
}
    mercury__io__TypeCtorInfo_18_51 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
    mercury__io__TypeInfo_for_K_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__tree234__set_4_p_0(mercury__io__TypeInfo_for_K_59, mercury__io__TypeCtorInfo_18_51, ((MR_Box) (mercury__io__V_47_47)), ((MR_Box) (mercury__io__V_11_11)), mercury__io__StreamDb0_43, &mercury__io__StreamDb_44);
    }
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MR_Word StreamDb;

	StreamDb =  mercury__io__StreamDb_44 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stdout_5  = (MR_Box) Stream;
}
    mercury__io__V_19_19 = (MR_Word) &mercury__io_scalar_common_2[2];
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	 mercury__io__StreamDb0_73  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) mercury__io__Stdout_5 ;
		{

#ifndef MR_NATIVE_GC
    /*
    ** Most of the time, we can just use the pointer to the stream
    ** as a unique identifier.
    */
    Id = (MR_Word) Stream;
#else
    /*
    ** For accurate GC we embed an ID in the MercuryFile
    ** and retrieve it here.
    */
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_77_77  = Id;
}
    mercury__io__TypeCtorInfo_18_81 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
    mercury__io__TypeInfo_for_K_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__tree234__set_4_p_0(mercury__io__TypeInfo_for_K_89, mercury__io__TypeCtorInfo_18_81, ((MR_Box) (mercury__io__V_77_77)), ((MR_Box) (mercury__io__V_19_19)), mercury__io__StreamDb0_73, &mercury__io__StreamDb_74);
    }
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MR_Word StreamDb;

	StreamDb =  mercury__io__StreamDb_74 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stderr_6  = (MR_Box) Stream;
}
    mercury__io__V_27_27 = (MR_Word) &mercury__io_scalar_common_2[3];
    {
      mercury__io__insert_stream_info_4_p_0(mercury__io__Stderr_6, mercury__io__V_27_27);
    }
  }
}

static void MR_CALL 
mercury__io__gc_init_4_p_0(
  MR_Word mercury__io__StreamDbType_1,
  MR_Word mercury__io__UserGlobalsType_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__gc_init_4_p_0

	MR_Word StreamDbType;
	MR_Word UserGlobalsType;

	StreamDbType =  mercury__io__StreamDbType_1 ;
	UserGlobalsType =  mercury__io__UserGlobalsType_2 ;
		{

    /* for Windows DLLs, we need to call GC_INIT() from each DLL */
#ifdef MR_BOEHM_GC
    GC_INIT();
#endif
    MR_add_root(&ML_io_stream_db, (MR_TypeInfo) StreamDbType);
    MR_add_root(&ML_io_user_globals, (MR_TypeInfo) UserGlobalsType);


		;}
#undef MR_PROC_LABEL
}
  }
}

static MR_bool MR_CALL 
mercury__io__setenv_2_p_0(
  MR_String mercury__io__Var_1,
  MR_String mercury__io__Value_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__setenv_2_p_0

	MR_String Var;
	MR_String Value;
	MR_bool SUCCESS_INDICATOR;

	Var =  mercury__io__Var_1 ;
	Value =  mercury__io__Value_2 ;
		{

#ifdef MR_WIN32
    SUCCESS_INDICATOR =
        (_wputenv_s(ML_utf8_to_wide(Var), ML_utf8_to_wide(Value)) == 0);
#else
    SUCCESS_INDICATOR = (setenv(Var, Value, 1) == 0);
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__io__succeeded;
  }
}

MR_bool MR_CALL 
mercury__io__getenv_2_p_0(
  MR_String mercury__io__Var_1,
  MR_String * mercury__io__Value_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__getenv_2_p_0

	MR_String Var;
	MR_String Value;
	MR_bool SUCCESS_INDICATOR;

	Var =  mercury__io__Var_1 ;
		{

#ifdef MR_WIN32
    wchar_t *ValueW = _wgetenv(ML_utf8_to_wide(Var));
    if (ValueW != NULL) {
        Value = ML_wide_to_utf8(ValueW, MR_ALLOC_ID);
    } else {
        Value = NULL;
    }
#else
    Value = getenv(Var);
#endif
    SUCCESS_INDICATOR = (Value != 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__io__Value_2  = Value;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io__call_system_code_6_p_0(
  MR_String mercury__io__Command_1,
  MR_Integer * mercury__io__Status_2,
  MR_Word * mercury__io__Success_3,
  MR_String * mercury__io__Msg_4)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__call_system_code_6_p_0

	MR_String Command;
	MR_Integer Status;
	MR_Word Success;
	MR_String Msg;

	Command =  mercury__io__Command_1 ;
		{

    /*
    ** In multithreaded grades, try to use posix_spawn() instead of system().
    ** There were problems with threads and system() on Linux/glibc, probably
    ** because system() uses fork().
    */
#if defined(MR_THREAD_SAFE) && defined(MR_HAVE_POSIX_SPAWN) &&         defined(MR_HAVE_ENVIRON)

    char    *argv[4];
    pid_t   pid;
    int     err;
    int     st;

    argv[0] = (char *) "sh";
    argv[1] = (char *) "-c";
    argv[2] = Command;
    argv[3] = NULL;

    /* Protect `environ' from concurrent modifications. */
    MR_OBTAIN_GLOBAL_LOCK("io.call_system_code/5");

    /*
    ** See the comment at the head of the body of preceding foreign_decl
    ** for details of why Mac OS X is different here.
    */
    #if defined(MR_MAC_OSX)
        err = posix_spawn(&pid, "/bin/sh", NULL, NULL, argv,
            *_NSGetEnviron());
    #else
        err = posix_spawn(&pid, "/bin/sh", NULL, NULL, argv, environ);
    #endif

    MR_RELEASE_GLOBAL_LOCK("io.call_system_code/5");

    if (err != 0) {
        /* Spawn failed. */
        Success = MR_NO;
        ML_maybe_make_err_msg(MR_TRUE, errno,
            "error invoking system command: ",
            MR_ALLOC_ID, Msg);
    } else {
        /* Wait for the spawned process to exit. */
        do {
            err = waitpid(pid, &st, 0);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == -1) {
            Success = MR_NO;
            ML_maybe_make_err_msg(MR_TRUE, errno,
                "error invoking system command: ",
                MR_ALLOC_ID, Msg);
        } else {
            Status = st;
            Success = MR_YES;
        }
    }

#else   /* !MR_THREAD_SAFE || !MR_HAVE_POSIX_SPAWN || !MR_HAVE_ENVIRON */

  #ifdef MR_WIN32
    Status = _wsystem(ML_utf8_to_wide(Command));
  #else
    Status = system(Command);
  #endif

    if (Status == -1) {
        Success = MR_NO;
        ML_maybe_make_err_msg(MR_TRUE, errno,
            "error invoking system command: ",
            MR_ALLOC_ID, Msg);
    } else {
        Success = MR_YES;
    }

#endif  /* !MR_THREAD_SAFE || !MR_HAVE_POSIX_SPAWN || !MR_HAVE_ENVIRON */


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Status_2  = Status;
	 *mercury__io__Success_3  = Success;
	 *mercury__io__Msg_4  = Msg;
}
  }
}

void MR_CALL 
mercury__io__read_byte_val_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer * mercury__io__ByteVal_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__read_byte_val_4_p_0

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__ByteVal_6  = ByteVal;
}
  }
}

void MR_CALL 
mercury__io__read_char_code_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer * mercury__io__CharCode_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_5, mercury__io__CharCode_6);
    }
  }
}

MR_Integer MR_CALL 
mercury__io__get_stream_id_1_f_0(
  MR_Box mercury__io__Stream_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Id_2;

{
#define MR_PROC_LABEL mercury__io__get_stream_id_1_f_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) mercury__io__Stream_1 ;
		{

#ifndef MR_NATIVE_GC
    /*
    ** Most of the time, we can just use the pointer to the stream
    ** as a unique identifier.
    */
    Id = (MR_Word) Stream;
#else
    /*
    ** For accurate GC we embed an ID in the MercuryFile
    ** and retrieve it here.
    */
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__Id_2  = Id;
}
    return mercury__io__Id_2;
  }
}

void MR_CALL 
mercury__io__unsafe_set_io_state_1_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

  }
}

void MR_CALL 
mercury__io__unsafe_get_io_state_1_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

  }
}

MR_Word MR_CALL 
mercury__io__decode_system_command_exit_code_1_f_0(
  MR_Integer mercury__io__Code0_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Status_4;
    MR_Word mercury__io__Exited_5;
    MR_Integer mercury__io__ExitCode_6;
    MR_Word mercury__io__Signalled_7;
    MR_Integer mercury__io__Signal_8;

{
#define MR_PROC_LABEL mercury__io__decode_system_command_exit_code_1_f_0

	MR_Integer Status0;
	MR_Word Exited;
	MR_Integer Status;
	MR_Word Signalled;
	MR_Integer Signal;

	Status0 =  mercury__io__Code0_3 ;
		{

    #if defined (WIFEXITED) && defined (WEXITSTATUS) &&             defined (WIFSIGNALED) && defined (WTERMSIG)
        if (WIFEXITED(Status0)) {
            Exited = MR_YES;
            Signalled = MR_NO;
            Status = WEXITSTATUS(Status0);
        } else if (WIFSIGNALED(Status0)) {
            Exited = MR_NO;
            Signalled = MR_YES;
            Signal = -WTERMSIG(Status0);
        } else {
            Exited = MR_NO;
            Signalled = MR_NO;
        }
    #else
        Exited = MR_YES;
        Status = Status0;
        Signalled = MR_NO;
    #endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__Exited_5  = Exited;
	 mercury__io__ExitCode_6  = Status;
	 mercury__io__Signalled_7  = Signalled;
	 mercury__io__Signal_8  = Signal;
}
    switch (mercury__io__Exited_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (mercury__io__Signalled_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__io__V_9_9 = (MR_Word) ((MR_Box) ((MR_String) "unknown result code from system command"));

              mercury__io__Status_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_5[8]);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__io__V_11_11;

              {
                mercury__io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__V_11_11, 0) = ((MR_Box) (mercury__io__Signal_8));
              }
              {
                mercury__io__Status_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__io__Status_4, 0) = ((MR_Box) (mercury__io__V_11_11));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__io__V_12_12;

          {
            mercury__io__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__io__V_12_12, 0) = ((MR_Box) (mercury__io__ExitCode_6));
          }
          {
            mercury__io__Status_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__io__Status_4, 0) = ((MR_Box) (mercury__io__V_12_12));
          }
        }
        break;
    }
    return mercury__io__Status_4;
  }
}

MR_bool MR_CALL 
mercury__io__get_io_stream_info_2_f_0(
  MR_Word mercury__io__TypeInfo_for_T_17,
  MR_Word mercury__io__StreamDB_4,
  MR_Box mercury__io__Stream_5,
  MR_Word * mercury__io__StreamInfo_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__IOStream_8;
    MR_Box mercury__io__IOStream0_7;
    MR_Word mercury__io__TypeCtorInfo_18_18 = (MR_Word) &mercury__io__io__type_ctor_info_input_stream_0;
    MR_Word mercury__io__V_9_9;
    MR_Box mercury__io__conv0_V_9_9;

    {
      mercury__io__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__io__TypeInfo_for_T_17, mercury__io__TypeCtorInfo_18_18, mercury__io__Stream_5, &mercury__io__conv0_V_9_9);
    }
    if (mercury__io__succeeded)
      {
        mercury__io__V_9_9 = ((MR_Word) mercury__io__conv0_V_9_9);
        mercury__io__succeeded = MR_TRUE;
      }
    if (mercury__io__succeeded)
      {
        mercury__io__IOStream0_7 = (MR_Box) mercury__io__V_9_9;
        mercury__io__succeeded = MR_TRUE;
      }
    if (mercury__io__succeeded)
      {
        mercury__io__IOStream_8 = mercury__io__IOStream0_7;
        mercury__io__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__io__IOStream0_16;
        MR_Word mercury__io__TypeCtorInfo_19_19 = (MR_Word) &mercury__io__io__type_ctor_info_output_stream_0;
        MR_Word mercury__io__V_10_10;
        MR_Box mercury__io__conv1_V_10_10;

        {
          mercury__io__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__io__TypeInfo_for_T_17, mercury__io__TypeCtorInfo_19_19, mercury__io__Stream_5, &mercury__io__conv1_V_10_10);
        }
        if (mercury__io__succeeded)
          {
            mercury__io__V_10_10 = ((MR_Word) mercury__io__conv1_V_10_10);
            mercury__io__succeeded = MR_TRUE;
          }
        if (mercury__io__succeeded)
          {
            mercury__io__IOStream0_16 = (MR_Box) mercury__io__V_10_10;
            mercury__io__succeeded = MR_TRUE;
          }
        if (mercury__io__succeeded)
          {
            mercury__io__IOStream_8 = mercury__io__IOStream0_16;
            mercury__io__succeeded = MR_TRUE;
          }
        else
          {
            MR_Box mercury__io__IOStream0_15;
            MR_Word mercury__io__TypeCtorInfo_20_20 = (MR_Word) &mercury__io__io__type_ctor_info_binary_input_stream_0;
            MR_Word mercury__io__V_11_11;
            MR_Box mercury__io__conv2_V_11_11;

            {
              mercury__io__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__io__TypeInfo_for_T_17, mercury__io__TypeCtorInfo_20_20, mercury__io__Stream_5, &mercury__io__conv2_V_11_11);
            }
            if (mercury__io__succeeded)
              {
                mercury__io__V_11_11 = ((MR_Word) mercury__io__conv2_V_11_11);
                mercury__io__succeeded = MR_TRUE;
              }
            if (mercury__io__succeeded)
              {
                mercury__io__IOStream0_15 = (MR_Box) mercury__io__V_11_11;
                mercury__io__succeeded = MR_TRUE;
              }
            if (mercury__io__succeeded)
              {
                mercury__io__IOStream_8 = mercury__io__IOStream0_15;
                mercury__io__succeeded = MR_TRUE;
              }
            else
              {
                MR_Box mercury__io__IOStream0_14;
                MR_Word mercury__io__TypeCtorInfo_21_21 = (MR_Word) &mercury__io__io__type_ctor_info_binary_output_stream_0;
                MR_Word mercury__io__V_12_12;
                MR_Box mercury__io__conv3_V_12_12;

                {
                  mercury__io__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__io__TypeInfo_for_T_17, mercury__io__TypeCtorInfo_21_21, mercury__io__Stream_5, &mercury__io__conv3_V_12_12);
                }
                if (mercury__io__succeeded)
                  {
                    mercury__io__V_12_12 = ((MR_Word) mercury__io__conv3_V_12_12);
                    mercury__io__succeeded = MR_TRUE;
                  }
                if (mercury__io__succeeded)
                  {
                    mercury__io__IOStream0_14 = (MR_Box) mercury__io__V_12_12;
                    mercury__io__succeeded = MR_TRUE;
                  }
                if (mercury__io__succeeded)
                  {
                    mercury__io__IOStream_8 = mercury__io__IOStream0_14;
                    mercury__io__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word mercury__io__TypeCtorInfo_22_22 = (MR_Word) &mercury__io__io__type_ctor_info_stream_0;
                    MR_Box mercury__io__conv4_IOStream_8;

                    {
                      mercury__io__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__io__TypeInfo_for_T_17, mercury__io__TypeCtorInfo_22_22, mercury__io__Stream_5, &mercury__io__conv4_IOStream_8);
                    }
                    if (mercury__io__succeeded)
                      {
                        mercury__io__IOStream_8 = ((MR_Box) mercury__io__conv4_IOStream_8);
                        mercury__io__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    if (mercury__io__succeeded)
      {
        {
          *mercury__io__StreamInfo_6 = mercury__io__maybe_stream_info_2_f_0(mercury__io__StreamDB_4, mercury__io__IOStream_8);
        }
        mercury__io__succeeded = MR_TRUE;
      }
    return mercury__io__succeeded;
  }
}

MR_Word MR_CALL 
mercury__io__binary_output_stream_info_2_f_0(
  MR_Word mercury__io__StreamDb_4,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__HeadVar__3_3;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__2_2;

    {
      mercury__io__HeadVar__3_3 = mercury__io__maybe_stream_info_2_f_0(mercury__io__StreamDb_4, mercury__io__Stream_5);
    }
    return mercury__io__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__io__binary_input_stream_info_2_f_0(
  MR_Word mercury__io__StreamDb_4,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__HeadVar__3_3;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__2_2;

    {
      mercury__io__HeadVar__3_3 = mercury__io__maybe_stream_info_2_f_0(mercury__io__StreamDb_4, mercury__io__Stream_5);
    }
    return mercury__io__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__io__output_stream_info_2_f_0(
  MR_Word mercury__io__StreamDb_4,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__HeadVar__3_3;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__2_2;

    {
      mercury__io__HeadVar__3_3 = mercury__io__maybe_stream_info_2_f_0(mercury__io__StreamDb_4, mercury__io__Stream_5);
    }
    return mercury__io__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__io__input_stream_info_2_f_0(
  MR_Word mercury__io__StreamDb_4,
  MR_Word mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__HeadVar__3_3;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__2_2;

    {
      mercury__io__HeadVar__3_3 = mercury__io__maybe_stream_info_2_f_0(mercury__io__StreamDb_4, mercury__io__Stream_5);
    }
    return mercury__io__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__io__get_stream_db_with_locking_1_p_0(
  MR_Word * mercury__io__StreamDb_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__get_stream_db_with_locking_1_p_0

	MR_Word StreamDb;

		{

    MR_LOCK(&ML_io_stream_db_lock, "io.get_stream_db/1");
    StreamDb = ML_io_stream_db;
    MR_UNLOCK(&ML_io_stream_db_lock, "io.get_stream_db/1");


		;}
#undef MR_PROC_LABEL
	 *mercury__io__StreamDb_1  = StreamDb;
}
  }
}

void MR_CALL 
mercury__io__get_stream_db_3_p_0(
  MR_Word * mercury__io__StreamDb_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__get_stream_db_3_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	 *mercury__io__StreamDb_1  = StreamDb;
}
  }
}

void MR_CALL 
mercury__io__set_op_table_3_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_111_112_95_116_97_98_108_101_95_95_91_49_93_95_48_3_p_0();
    }
  }
}

void MR_CALL 
mercury__io__get_op_table_3_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__io__have_file_ids_0_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__have_file_ids_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_BROKEN_STAT_ST_INO) || !defined(MR_HAVE_STAT)
    /* Win32 returns junk in the st_ino field of `struct stat'. */
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io__file_id_4_p_0(
  MR_String mercury__io__FileName_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__file_id_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_BROKEN_STAT_ST_INO) || !defined(MR_HAVE_STAT)
    /* Win32 returns junk in the st_ino field of `struct stat'. */
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__io__succeeded)
      {
        MR_Integer mercury__io__Status_8;
        MR_String mercury__io__Msg_9;
        MR_Box mercury__io__FileId_10;

{
#define MR_PROC_LABEL mercury__io__file_id_4_p_0

	MR_String FileName;
	MR_Integer Status;
	MR_String Msg;
	ML_File_Id FileId;

	FileName =  mercury__io__FileName_5 ;
		{

#ifdef MR_HAVE_STAT
  #ifdef MR_WIN32
    struct _stat s;
    int stat_result = _wstat(ML_utf8_to_wide(FileName), &s);
  #else
    struct stat s;
    int stat_result = stat(FileName, &s);
  #endif

    if (stat_result == 0) {
        FileId.device = s.st_dev;
        FileId.inode = s.st_ino;
        Msg = MR_string_const("", 0);
        Status = 1;
    } else {
        ML_maybe_make_err_msg(MR_TRUE, errno, "stat() failed: ",
            MR_ALLOC_ID, Msg);
        Status = 0;
    }
#else
    MR_fatal_error("io.file_id_2 called but not supported");
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__Status_8  = Status;
	 mercury__io__Msg_9  = Msg;
	MR_MAYBE_BOX_FOREIGN_TYPE(ML_File_Id, FileId, mercury__io__FileId_10 );
}
        mercury__io__succeeded = (mercury__io__Status_8 == (MR_Integer) 1);
        if (mercury__io__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mercury__io__Result_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__FileId_10));
          }
        else
          {
            MR_Word mercury__io__V_14_14 = (MR_Word) mercury__io__Msg_9;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Result_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_14_14));
            }
          }
      }
    else
      {
        MR_Word mercury__io__V_15_15 = (MR_Word) ((MR_Box) ((MR_String) "io.file_id not implemented on this platform"));

        *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_5[7]);
      }
  }
}

void MR_CALL 
mercury__io__make_maybe_win32_err_msg_5_p_0(
  MR_Box mercury__io__Error_6,
  MR_String mercury__io__Msg0_7,
  MR_String * mercury__io__Msg_8)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__make_maybe_win32_err_msg_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__io__succeeded)
      {
{
#define MR_PROC_LABEL mercury__io__make_maybe_win32_err_msg_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_6 , Error);
	Msg0 =  mercury__io__Msg0_7 ;
		{

    ML_maybe_make_win32_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Msg_8  = Msg;
}
      }
    else
      {
{
#define MR_PROC_LABEL mercury__io__make_maybe_win32_err_msg_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_6 , Error);
	Msg0 =  mercury__io__Msg0_7 ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Msg_8  = Msg;
}
      }
  }
}

void MR_CALL 
mercury__io__make_win32_err_msg_5_p_0(
  MR_Box mercury__io__Error_1,
  MR_String mercury__io__Msg0_2,
  MR_String * mercury__io__Msg_3)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__make_win32_err_msg_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_1 , Error);
	Msg0 =  mercury__io__Msg0_2 ;
		{

    ML_maybe_make_win32_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Msg_3  = Msg;
}
  }
}

MR_bool MR_CALL 
mercury__io__have_dotnet_0_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__have_dotnet_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__io__succeeded;
  }
}

MR_bool MR_CALL 
mercury__io__have_cygwin_0_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

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
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__io__succeeded;
  }
}

MR_bool MR_CALL 
mercury__io__have_win32_0_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

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
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io__make_err_msg_5_p_0(
  MR_Box mercury__io__Error_1,
  MR_String mercury__io__Msg0_2,
  MR_String * mercury__io__Msg_3)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__make_err_msg_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_1 , Error);
	Msg0 =  mercury__io__Msg0_2 ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Msg_3  = Msg;
}
  }
}

void MR_CALL 
mercury__io__finalize_state_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

  }
}

void MR_CALL 
mercury__io__init_state_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeInfo_19_19;
    MR_Word mercury__io__TypeCtorInfo_20_20;
    MR_Word mercury__io__TypeCtorInfo_23_23;
    MR_Word mercury__io__StreamDb_4;
    MR_Word mercury__io__Globals_5;
    MR_Word mercury__io__V_10_10;
    MR_Word mercury__io__V_11_11;
    MR_Word mercury__io__StdinBinary_32;
    MR_Word mercury__io__StdoutBinary_33;
    MR_Box mercury__io__NewStream_47;
    MR_Box mercury__io__NewStream_54;
    MR_Box mercury__io__Stream_60;
    MR_Box mercury__io__Stream_65;
    MR_Box mercury__io__NewStream_70;
    MR_Box mercury__io__NewStream_76;
    MR_Box mercury__io__OutStream_48;
    MR_Box mercury__io__OutStream_55;
    MR_Box mercury__io__OutStream_71;
    MR_Box mercury__io__OutStream_77;

{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	 mercury__io__NewStream_47  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_47 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_48  = (MR_Box) OutStream;
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	 mercury__io__NewStream_54  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_54 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_55  = (MR_Box) OutStream;
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin_binary;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_60  = (MR_Box) Stream;
}
    mercury__io__StdinBinary_32 = (MR_Word) mercury__io__Stream_60;
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout_binary;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_65  = (MR_Box) Stream;
}
    mercury__io__StdoutBinary_33 = (MR_Word) mercury__io__Stream_65;
    mercury__io__NewStream_70 = (MR_Box) mercury__io__StdinBinary_32;
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_70 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_71  = (MR_Box) OutStream;
}
    mercury__io__NewStream_76 = (MR_Box) mercury__io__StdoutBinary_33;
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_76 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_77  = (MR_Box) OutStream;
}
    mercury__io__TypeInfo_19_19 = (MR_Word) &mercury__io_scalar_common_1[1];
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__io__TypeInfo_19_19 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__io__V_10_10  = TypeInfo;
}
    mercury__io__TypeCtorInfo_20_20 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__io__TypeCtorInfo_20_20 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__io__V_11_11  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MR_Word StreamDbType;
	MR_Word UserGlobalsType;

	StreamDbType =  mercury__io__V_10_10 ;
	UserGlobalsType =  mercury__io__V_11_11 ;
		{

    /* for Windows DLLs, we need to call GC_INIT() from each DLL */
#ifdef MR_BOEHM_GC
    GC_INIT();
#endif
    MR_add_root(&ML_io_stream_db, (MR_TypeInfo) StreamDbType);
    MR_add_root(&ML_io_user_globals, (MR_TypeInfo) UserGlobalsType);


		;}
#undef MR_PROC_LABEL
}
    mercury__io__StreamDb_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__io__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__univ__type_to_univ_2_p_0(mercury__io__TypeCtorInfo_23_23, ((MR_Box) ((MR_String) "<globals>")), &mercury__io__Globals_5);
    }
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MR_Word StreamDb;

	StreamDb =  mercury__io__StreamDb_4 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
    {
      mercury__io__set_globals_3_p_0(mercury__io__Globals_5);
    }
    {
      mercury__io__insert_std_stream_names_2_p_0();
    }
  }
}

void MR_CALL 
mercury__io__error_message_2_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_String * mercury__io__Error_3)
{
  {
    MR_bool mercury__io__succeeded;

    *mercury__io__Error_3 = (MR_String) mercury__io__HeadVar__1_1;
  }
}

MR_String MR_CALL 
mercury__io__error_message_1_f_0(
  MR_Word mercury__io__Error_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__Msg_4 = (MR_String) mercury__io__Error_3;

    return mercury__io__Msg_4;
  }
}

MR_Word MR_CALL 
mercury__io__make_io_error_1_f_0(
  MR_String mercury__io__Error_3)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__HeadVar__2_2 = (MR_Word) mercury__io__Error_3;

    return mercury__io__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__io__call_system_return_signal_4_p_0(
  MR_String mercury__io__Command_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Code_8;
    MR_Word mercury__io__Success_9;
    MR_String mercury__io__Msg_10;

{
#define MR_PROC_LABEL mercury__io__call_system_return_signal_4_p_0

	MR_String Command;
	MR_Integer Status;
	MR_Word Success;
	MR_String Msg;

	Command =  mercury__io__Command_5 ;
		{

    /*
    ** In multithreaded grades, try to use posix_spawn() instead of system().
    ** There were problems with threads and system() on Linux/glibc, probably
    ** because system() uses fork().
    */
#if defined(MR_THREAD_SAFE) && defined(MR_HAVE_POSIX_SPAWN) &&         defined(MR_HAVE_ENVIRON)

    char    *argv[4];
    pid_t   pid;
    int     err;
    int     st;

    argv[0] = (char *) "sh";
    argv[1] = (char *) "-c";
    argv[2] = Command;
    argv[3] = NULL;

    /* Protect `environ' from concurrent modifications. */
    MR_OBTAIN_GLOBAL_LOCK("io.call_system_code/5");

    /*
    ** See the comment at the head of the body of preceding foreign_decl
    ** for details of why Mac OS X is different here.
    */
    #if defined(MR_MAC_OSX)
        err = posix_spawn(&pid, "/bin/sh", NULL, NULL, argv,
            *_NSGetEnviron());
    #else
        err = posix_spawn(&pid, "/bin/sh", NULL, NULL, argv, environ);
    #endif

    MR_RELEASE_GLOBAL_LOCK("io.call_system_code/5");

    if (err != 0) {
        /* Spawn failed. */
        Success = MR_NO;
        ML_maybe_make_err_msg(MR_TRUE, errno,
            "error invoking system command: ",
            MR_ALLOC_ID, Msg);
    } else {
        /* Wait for the spawned process to exit. */
        do {
            err = waitpid(pid, &st, 0);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == -1) {
            Success = MR_NO;
            ML_maybe_make_err_msg(MR_TRUE, errno,
                "error invoking system command: ",
                MR_ALLOC_ID, Msg);
        } else {
            Status = st;
            Success = MR_YES;
        }
    }

#else   /* !MR_THREAD_SAFE || !MR_HAVE_POSIX_SPAWN || !MR_HAVE_ENVIRON */

  #ifdef MR_WIN32
    Status = _wsystem(ML_utf8_to_wide(Command));
  #else
    Status = system(Command);
  #endif

    if (Status == -1) {
        Success = MR_NO;
        ML_maybe_make_err_msg(MR_TRUE, errno,
            "error invoking system command: ",
            MR_ALLOC_ID, Msg);
    } else {
        Success = MR_YES;
    }

#endif  /* !MR_THREAD_SAFE || !MR_HAVE_POSIX_SPAWN || !MR_HAVE_ENVIRON */


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_8  = Status;
	 mercury__io__Success_9  = Success;
	 mercury__io__Msg_10  = Msg;
}
    switch (mercury__io__Success_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__io__V_14_14 = (MR_Word) mercury__io__Msg_10;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_14_14));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *mercury__io__Result_6 = mercury__io__decode_system_command_exit_code_1_f_0(mercury__io__Code_8);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__call_system_4_p_0(
  MR_String mercury__io__Command_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Result0_8;
    MR_Integer mercury__io__Code_27;
    MR_Word mercury__io__Success_28;
    MR_String mercury__io__Msg_29;

{
#define MR_PROC_LABEL mercury__io__call_system_4_p_0

	MR_String Command;
	MR_Integer Status;
	MR_Word Success;
	MR_String Msg;

	Command =  mercury__io__Command_5 ;
		{

    /*
    ** In multithreaded grades, try to use posix_spawn() instead of system().
    ** There were problems with threads and system() on Linux/glibc, probably
    ** because system() uses fork().
    */
#if defined(MR_THREAD_SAFE) && defined(MR_HAVE_POSIX_SPAWN) &&         defined(MR_HAVE_ENVIRON)

    char    *argv[4];
    pid_t   pid;
    int     err;
    int     st;

    argv[0] = (char *) "sh";
    argv[1] = (char *) "-c";
    argv[2] = Command;
    argv[3] = NULL;

    /* Protect `environ' from concurrent modifications. */
    MR_OBTAIN_GLOBAL_LOCK("io.call_system_code/5");

    /*
    ** See the comment at the head of the body of preceding foreign_decl
    ** for details of why Mac OS X is different here.
    */
    #if defined(MR_MAC_OSX)
        err = posix_spawn(&pid, "/bin/sh", NULL, NULL, argv,
            *_NSGetEnviron());
    #else
        err = posix_spawn(&pid, "/bin/sh", NULL, NULL, argv, environ);
    #endif

    MR_RELEASE_GLOBAL_LOCK("io.call_system_code/5");

    if (err != 0) {
        /* Spawn failed. */
        Success = MR_NO;
        ML_maybe_make_err_msg(MR_TRUE, errno,
            "error invoking system command: ",
            MR_ALLOC_ID, Msg);
    } else {
        /* Wait for the spawned process to exit. */
        do {
            err = waitpid(pid, &st, 0);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == -1) {
            Success = MR_NO;
            ML_maybe_make_err_msg(MR_TRUE, errno,
                "error invoking system command: ",
                MR_ALLOC_ID, Msg);
        } else {
            Status = st;
            Success = MR_YES;
        }
    }

#else   /* !MR_THREAD_SAFE || !MR_HAVE_POSIX_SPAWN || !MR_HAVE_ENVIRON */

  #ifdef MR_WIN32
    Status = _wsystem(ML_utf8_to_wide(Command));
  #else
    Status = system(Command);
  #endif

    if (Status == -1) {
        Success = MR_NO;
        ML_maybe_make_err_msg(MR_TRUE, errno,
            "error invoking system command: ",
            MR_ALLOC_ID, Msg);
    } else {
        Success = MR_YES;
    }

#endif  /* !MR_THREAD_SAFE || !MR_HAVE_POSIX_SPAWN || !MR_HAVE_ENVIRON */


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_27  = Status;
	 mercury__io__Success_28  = Success;
	 mercury__io__Msg_29  = Msg;
}
    switch (mercury__io__Success_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__io__V_31_31 = (MR_Word) mercury__io__Msg_29;

          {
            mercury__io__Result0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__io__Result0_8, 0) = ((MR_Box) (mercury__io__V_31_31));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__Result0_8 = mercury__io__decode_system_command_exit_code_1_f_0(mercury__io__Code_27);
        }
        break;
    }
    if (((MR_tag((MR_Word) mercury__io__Result0_8)) == (MR_mktag((MR_Integer) 1))))
      *mercury__io__Result_6 = (MR_Word) mercury__io__Result0_8;
    else
      {
        MR_Word mercury__io__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Result0_8, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__io__V_21_21)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Integer mercury__io__Code_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__io__V_21_21, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__io__Result_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__Code_9));
            }
          }
        else
          {
            MR_Integer mercury__io__Signal_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__V_21_21, (MR_Integer) 0)));
            MR_String mercury__io__SignalStr_11;
            MR_String mercury__io__ErrMsg_12;
            MR_Word mercury__io__V_19_19;

            {
              mercury__string__int_to_base_string_3_p_0(mercury__io__Signal_10, (MR_Integer) 10, &mercury__io__SignalStr_11);
            }
            {
              mercury__string__append_3_p_2((MR_String) "system command killed by signal number ", mercury__io__SignalStr_11, &mercury__io__ErrMsg_12);
            }
            mercury__io__V_19_19 = (MR_Word) mercury__io__ErrMsg_12;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Result_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_19_19));
            }
          }
      }
  }
}

void MR_CALL 
mercury__io__report_stats_3_p_0(
  MR_String mercury__io__Selector_4)
{
  {
    MR_bool mercury__io__succeeded = (strcmp(mercury__io__Selector_4, (MR_String) "standard") == 0);

    if (mercury__io__succeeded)
      {
        mercury__benchmarking__report_stats_0_p_0();
      }
    else
      {
        mercury__io__succeeded = (strcmp(mercury__io__Selector_4, (MR_String) "full_memory_stats") == 0);
        if (mercury__io__succeeded)
          {
            mercury__benchmarking__report_full_memory_stats_0_p_0();
          }
        else
          {
            mercury__io__succeeded = (strcmp(mercury__io__Selector_4, (MR_String) "tabling") == 0);
            if (mercury__io__succeeded)
              {
                mercury__table_builtin__table_report_statistics_0_p_0();
              }
            else
              {
                MR_String mercury__io__Message_6;
                MR_String mercury__io__V_14_14;

                {
                  mercury__string__append_3_p_2(mercury__io__Selector_4, (MR_String) "\' not understood", &mercury__io__V_14_14);
                }
                {
                  mercury__string__append_3_p_2((MR_String) "io.report_stats: selector \140", mercury__io__V_14_14, &mercury__io__Message_6);
                }
                {
                  mercury__require__error_1_p_0(mercury__io__Message_6);
                  return;
                }
              }
          }
      }
  }
}

void MR_CALL 
mercury__io__report_stats_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

    {
      mercury__io__report_stats_3_p_0((MR_String) "standard");
    }
  }
}

void MR_CALL 
mercury__io__file_modification_time_4_p_0(
  MR_String mercury__io__File_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Status_8;
    MR_String mercury__io__Msg_9;
    MR_Word mercury__io__Time_10;

{
#define MR_PROC_LABEL mercury__io__file_modification_time_4_p_0

	MR_String FileName;
	MR_Integer Status;
	MR_String Msg;
	MR_Word Time;

	FileName =  mercury__io__File_5 ;
		{

#ifdef MR_HAVE_STAT
  #ifdef MR_WIN32
    struct _stat s;
    int stat_result = _wstat(ML_utf8_to_wide(FileName), &s);
  #else
    struct stat s;
    int stat_result = stat(FileName, &s);
  #endif

    if (stat_result == 0) {
        Time = ML_construct_time_t(s.st_mtime);
        Msg = MR_string_const("", 0);
        Status = 1;
    } else {
        ML_maybe_make_err_msg(MR_TRUE, errno, "stat() failed: ",
            MR_ALLOC_ID, Msg);
        Status = 0;
        Time = 0;   /* Dummy value -- will not be used. */
    }
#else
    Status = 0;
    Msg = MR_make_string_const(
        "io.file_modification_time not available on this platform");
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__Status_8  = Status;
	 mercury__io__Msg_9  = Msg;
	 mercury__io__Time_10  = Time;
}
    mercury__io__succeeded = (mercury__io__Status_8 == (MR_Integer) 1);
    if (mercury__io__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *mercury__io__Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__Time_10));
      }
    else
      {
        MR_Word mercury__io__V_14_14 = (MR_Word) mercury__io__Msg_9;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_14_14));
        }
      }
  }
}

void MR_CALL 
mercury__io__file_type_5_p_0(
  MR_Word mercury__io__FollowSymLinks_6,
  MR_String mercury__io__FileName_7,
  MR_Word * mercury__io__MaybeType_8)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__file_type_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MR_HAVE_STAT
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__io__succeeded)
      {
        MR_Integer mercury__io__FollowSymLinksInt_10;

        switch (mercury__io__FollowSymLinks_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__FollowSymLinksInt_10 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            mercury__io__FollowSymLinksInt_10 = (MR_Integer) 1;
            break;
        }
{
#define MR_PROC_LABEL mercury__io__file_type_5_p_0

	MR_Integer FollowSymLinks;
	MR_String FileName;
	MR_Word Result;

	FollowSymLinks =  mercury__io__FollowSymLinksInt_10 ;
	FileName =  mercury__io__FileName_7 ;
		{

#ifdef MR_HAVE_STAT
  #ifdef MR_WIN32
    struct _stat s;
    int stat_result = _wstat(ML_utf8_to_wide(FileName), &s);
  #else
    struct stat s;
    int stat_result;

    if (FollowSymLinks == 1) {
        stat_result = stat(FileName, &s);
    } else {
        #ifdef MR_HAVE_LSTAT
            stat_result = lstat(FileName, &s);
        #else
            stat_result = stat(FileName, &s);
        #endif
    }
  #endif

    if (stat_result == 0) {
        MR_Word type;

        #if defined(S_ISREG)
            if (S_ISREG(s.st_mode)) {
                type = ML_file_type_regular();
            } else
        #elif defined(S_IFMT) && defined(S_IFREG)
            if ((s.st_mode & S_IFMT) == S_IFREG) {
                type = ML_file_type_regular();
            } else
        #endif

        #if defined(S_ISDIR)
            if (S_ISDIR(s.st_mode)) {
                type = ML_file_type_directory();
            } else
        #elif defined(S_IFMT) && defined(S_IFDIR)
            if ((s.st_mode & S_IFMT) == S_IFDIR) {
                type = ML_file_type_directory();
            } else
        #endif

        #if defined(S_ISBLK)
            if (S_ISBLK(s.st_mode)) {
                type = ML_file_type_block_device();
            } else
        #elif defined(S_IFMT) && defined(S_IFBLK)
            if ((s.st_mode & S_IFMT) == S_IFBLK) {
                type = ML_file_type_block_device();
            } else
        #endif

        #if defined(S_ISCHR)
            if (S_ISCHR(s.st_mode)) {
                type = ML_file_type_character_device();
            } else
        #elif defined(S_IFMT) && defined(S_IFCHR)
            if ((s.st_mode & S_IFMT) == S_IFCHR) {
                type = ML_file_type_character_device();
            } else
        #endif

        #if defined(S_ISFIFO)
            if (S_ISFIFO(s.st_mode)) {
                type = ML_file_type_fifo();
            } else
        #elif defined(S_IFMT) && defined(S_IFIFO)
            if ((s.st_mode & S_IFMT) == S_IFIFO) {
                type = ML_file_type_fifo();
            } else
        #endif

        #if defined(S_ISLNK)
            if (S_ISLNK(s.st_mode)) {
                type = ML_file_type_symbolic_link();
            } else
        #elif defined(S_IFMT) && defined(S_IFLNK)
            if ((s.st_mode & S_IFMT) == S_IFLNK) {
                type = ML_file_type_symbolic_link();
            } else
        #endif

        #if defined(S_ISSOCK)
            if (S_ISSOCK(s.st_mode)) {
                type = ML_file_type_socket();
            } else
        #elif defined(S_IFMT) && defined(S_IFSOCK)
            if ((s.st_mode & S_IFMT) == S_IFSOCK) {
                type = ML_file_type_socket();
            } else
        #endif

        #ifdef S_TYPEISMQ
            if (S_TYPEISMQ(&s)) {
                type = ML_file_type_message_queue();
            } else
        #endif

        #ifdef S_TYPEISSEM
            if (S_TYPEISSEM(&s)) {
                type = ML_file_type_semaphore();
            } else
        #endif

        #ifdef S_TYPEISSHM
            if (S_TYPEISSHM(&s)) {
                type = ML_file_type_shared_memory();
            } else
        #endif

            {
                type = ML_file_type_unknown();
            }

        Result = ML_make_io_res_1_ok_file_type(type);
    } else {
        /*
        ** We can't just call ML_make_err_msg here because
        ** it uses `hp' and this procedure can call Mercury.
        */
        ML_make_io_res_1_error_file_type(errno,
            MR_make_string_const("io.file_type failed: "), &Result);
    }
#else
    MR_fatal_error(
        "Sorry, io.file_type not implemented on this platform") }
#endif


		;}
#undef MR_PROC_LABEL
	 *mercury__io__MaybeType_8  = Result;
}
      }
    else
      {
        MR_Word mercury__io__V_14_14 = (MR_Word) ((MR_Box) ((MR_String) "Sorry, io.file_type not implemented on this platform"));

        *mercury__io__MaybeType_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_5[6]);
      }
  }
}

void MR_CALL 
mercury__io__check_file_accessibility_5_p_0(
  MR_String mercury__io__FileName_6,
  MR_Word mercury__io__AccessTypes_7,
  MR_Word * mercury__io__Result_8)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__io__succeeded)
      {
        mercury__io__check_file_accessibility_dotnet_5_p_0(mercury__io__FileName_6, mercury__io__AccessTypes_7, mercury__io__Result_8);
      }
    else
      {
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_5_p_0

	MR_String FileName;
	MR_Word AccessTypes;
	MR_Word Result;

	FileName =  mercury__io__FileName_6 ;
	AccessTypes =  mercury__io__AccessTypes_7 ;
		{

#if defined(MR_HAVE_ACCESS)
  #ifdef F_OK
    int mode = F_OK;
  #else
    int mode = 0;
  #endif
    int access_result;

  #if !defined(MR_WIN32) || defined(MR_CYGWIN)
    /*
    ** Earlier versions of MSVCRT ignored flags it doesn't support,
    ** later versions return an error (e.g. on Vista).
    */
    if (ML_access_types_includes_execute(AccessTypes)) {
      #ifdef X_OK
        mode |= X_OK;
      #else
        mode |= 1;
      #endif
    }
  #endif
    if (ML_access_types_includes_write(AccessTypes)) {
  #ifdef W_OK
        mode |= W_OK;
  #else
        mode |= 2;
  #endif
    }
    if (ML_access_types_includes_read(AccessTypes)) {
  #ifdef R_OK
        mode |= R_OK;
  #else
        mode |= 4;
  #endif
    }

  #ifdef MR_WIN32
    access_result = _waccess(ML_utf8_to_wide(FileName), mode);
  #else
    access_result = access(FileName, mode);
  #endif

    if (access_result == 0) {
        Result = ML_make_io_res_0_ok();
    } else {
        ML_make_io_res_0_error(errno,
            MR_make_string_const("file not accessible: "), &Result);
    }
#else /* !MR_HAVE_ACCESS */
    Result = ML_make_io_res_0_error_msg(
        "io.check_file_accessibility not supported on this platform");
#endif


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Result_8  = Result;
}
      }
  }
}

void MR_CALL 
mercury__io__read_symlink_4_p_0(
  MR_String mercury__io__FileName_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__read_symlink_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_HAVE_SYMLINK) && defined(MR_HAVE_READLINK)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__io__succeeded)
      {
        MR_String mercury__io__TargetFileName_8;
        MR_Integer mercury__io__Status_9;
        MR_Box mercury__io__Error_10;

{
#define MR_PROC_LABEL mercury__io__read_symlink_4_p_0

	MR_String FileName;
	MR_String TargetFileName;
	MR_Integer Status;
	MR_Integer Error;

	FileName =  mercury__io__FileName_5 ;
		{

#ifdef MR_HAVE_READLINK
  #ifndef PATH_MAX
    #define PATH_MAX 256
  #endif
    int     num_chars;
    char    *buffer2 = NULL;
    int     buffer_size2 = PATH_MAX;
    char    buffer[PATH_MAX + 1];

    /* readlink() does not null-terminate the buffer */
    num_chars = readlink(FileName, buffer, PATH_MAX);

    if (num_chars == PATH_MAX) {
        do {
            buffer_size2 *= 2;
            buffer2 = MR_RESIZE_ARRAY(buffer2, char, buffer_size2);
            num_chars = readlink(FileName, buffer2, PATH_MAX);
        } while (num_chars == buffer_size2);

        if (num_chars == -1) {
            Error = errno;
            TargetFileName = MR_make_string_const("");
            Status = 0;
        } else {
            buffer2[num_chars] = '\0';
            MR_make_aligned_string_copy_msg(TargetFileName, buffer2,
                MR_ALLOC_ID);
            Status = 1;
        }
        MR_free(buffer2);
    } else if (num_chars == -1) {
        TargetFileName = MR_make_string_const("");
        Error = errno;
        Status = 0;
    } else {
        buffer[num_chars] = '\0';
        MR_make_aligned_string_copy_msg(TargetFileName, buffer, MR_ALLOC_ID);
        Status = 1;
    }
#else /* !MR_HAVE_READLINK */
    /*
    ** We can't just return NULL here, because otherwise mdb will break
    ** when it tries to print the string.
    */
    TargetFileName = MR_make_string_const("");
    Status = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__TargetFileName_8  = TargetFileName;
	 mercury__io__Status_9  = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_10 );
}
        mercury__io__succeeded = (mercury__io__Status_9 == (MR_Integer) 0);
        if (mercury__io__succeeded)
          {
            MR_String mercury__io__Msg_11;
            MR_Word mercury__io__V_17_17;

{
#define MR_PROC_LABEL mercury__io__read_symlink_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_10 , Error);
	Msg0 =  (MR_String) "io.read_symlink failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_11  = Msg;
}
            mercury__io__V_17_17 = (MR_Word) mercury__io__Msg_11;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Result_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_17_17));
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mercury__io__Result_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__TargetFileName_8));
          }
      }
    else
      {
        MR_Word mercury__io__V_18_18 = (MR_Word) ((MR_Box) ((MR_String) "io.read_symlink not supported on this platform"));

        *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_5[5]);
      }
  }
}

void MR_CALL 
mercury__io__make_symlink_5_p_0(
  MR_String mercury__io__FileName_6,
  MR_String mercury__io__LinkFileName_7,
  MR_Word * mercury__io__Result_8)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__make_symlink_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_HAVE_SYMLINK) && defined(MR_HAVE_READLINK)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__io__succeeded)
      {
        MR_Integer mercury__io__Status_10;

{
#define MR_PROC_LABEL mercury__io__make_symlink_5_p_0

	MR_String FileName;
	MR_String LinkFileName;
	MR_Integer Status;

	FileName =  mercury__io__FileName_6 ;
	LinkFileName =  mercury__io__LinkFileName_7 ;
		{

#ifdef MR_HAVE_SYMLINK
    Status = (symlink(FileName, LinkFileName) == 0);
#else
    Status = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__Status_10  = Status;
}
        mercury__io__succeeded = (mercury__io__Status_10 == (MR_Integer) 0);
        if (mercury__io__succeeded)
          {
            MR_String mercury__io__Msg_11;
            MR_Word mercury__io__V_17_17;
            MR_Box mercury__io__Error_25;

{
#define MR_PROC_LABEL mercury__io__make_symlink_5_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_25 );
}
{
#define MR_PROC_LABEL mercury__io__make_symlink_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_25 , Error);
	Msg0 =  (MR_String) "io.make_symlink failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_11  = Msg;
}
            mercury__io__V_17_17 = (MR_Word) mercury__io__Msg_11;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Result_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_17_17));
            }
          }
        else
          *mercury__io__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word mercury__io__V_18_18 = (MR_Word) ((MR_Box) ((MR_String) "io.make_symlink not supported on this platform"));

        *mercury__io__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_5[4]);
      }
  }
}

MR_bool MR_CALL 
mercury__io__have_symlinks_0_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

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
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io__rename_file_5_p_0(
  MR_String mercury__io__OldFileName_6,
  MR_String mercury__io__NewFileName_7,
  MR_Word * mercury__io__Result_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Res_11;
    MR_String mercury__io__ResString_12;

{
#define MR_PROC_LABEL mercury__io__rename_file_5_p_0

	MR_String OldFileName;
	MR_String NewFileName;
	MR_Integer RetVal;
	MR_String RetStr;

	OldFileName =  mercury__io__OldFileName_6 ;
	NewFileName =  mercury__io__NewFileName_7 ;
		{

#ifdef MR_WIN32
    RetVal = _wrename(ML_utf8_to_wide(OldFileName),
        ML_utf8_to_wide(NewFileName));
#else
    RetVal = rename(OldFileName, NewFileName);
#endif
    ML_maybe_make_err_msg(RetVal != 0, errno, "rename failed: ",
        MR_ALLOC_ID, RetStr);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Res_11  = RetVal;
	 mercury__io__ResString_12  = RetStr;
}
    mercury__io__succeeded = (mercury__io__Res_11 == (MR_Integer) 0);
    if (mercury__io__succeeded)
      *mercury__io__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__io__V_13_13 = (MR_Word) mercury__io__ResString_12;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_13_13));
        }
      }
  }
}

void MR_CALL 
mercury__io__remove_file_recursively_4_p_0(
  MR_String mercury__io__FileName_5,
  MR_Word * mercury__io__Res_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__ResFileType_9;

    {
      mercury__io__file_type_5_p_0((MR_Integer) 0, mercury__io__FileName_5, &mercury__io__ResFileType_9);
    }
    if (((MR_tag((MR_Word) mercury__io__ResFileType_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__io__Error_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__ResFileType_9, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Res_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Error_24));
        }
      }
    else
      {
        MR_Word mercury__io__FileType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__ResFileType_9, (MR_Integer) 0)));

        switch (mercury__io__FileType_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 6:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
          case (MR_Integer) 3:
          case (MR_Integer) 0:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 4:
          case (MR_Integer) 2:
          case (MR_Integer) 10:
            {
              MR_Integer mercury__io__Res_39;
              MR_String mercury__io__ResString_40;

{
#define MR_PROC_LABEL mercury__io__remove_file_recursively_4_p_0

	MR_String FileName;
	MR_Integer RetVal;
	MR_String RetStr;

	FileName =  mercury__io__FileName_5 ;
		{

#ifdef MR_WIN32
    RetVal = _wremove(ML_utf8_to_wide(FileName));
#else
    RetVal = remove(FileName);
#endif
    ML_maybe_make_err_msg(RetVal != 0, errno, "remove failed: ",
        MR_ALLOC_ID, RetStr);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Res_39  = RetVal;
	 mercury__io__ResString_40  = RetStr;
}
              mercury__io__succeeded = (mercury__io__Res_39 == (MR_Integer) 0);
              if (mercury__io__succeeded)
                *mercury__io__Res_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word mercury__io__V_42_42 = (MR_Word) mercury__io__ResString_40;

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__io__Res_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_42_42));
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__io__Res0_11;
              MR_Word mercury__io__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                mercury__io__foldl2__ho6_6_p_in__dir_0(mercury__io__FileName_5, mercury__io__V_20_20, &mercury__io__Res0_11);
              }
              if (((MR_tag((MR_Word) mercury__io__Res0_11)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word mercury__io__Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Res0_11, (MR_Integer) 1)));
                  MR_Word mercury__io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Res0_11, (MR_Integer) 0)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__io__Res_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Error_23));
                  }
                }
              else
                {
                  MR_Word mercury__io__MaybeError_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Res0_11, (MR_Integer) 0)));

                  if ((mercury__io__MaybeError_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Integer mercury__io__Res_48;
                      MR_String mercury__io__ResString_49;

{
#define MR_PROC_LABEL mercury__io__remove_file_recursively_4_p_0

	MR_String FileName;
	MR_Integer RetVal;
	MR_String RetStr;

	FileName =  mercury__io__FileName_5 ;
		{

#ifdef MR_WIN32
    RetVal = _wremove(ML_utf8_to_wide(FileName));
#else
    RetVal = remove(FileName);
#endif
    ML_maybe_make_err_msg(RetVal != 0, errno, "remove failed: ",
        MR_ALLOC_ID, RetStr);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Res_48  = RetVal;
	 mercury__io__ResString_49  = RetStr;
}
                      mercury__io__succeeded = (mercury__io__Res_48 == (MR_Integer) 0);
                      if (mercury__io__succeeded)
                        *mercury__io__Res_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      else
                        {
                          MR_Word mercury__io__V_51_51 = (MR_Word) mercury__io__ResString_49;

                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *mercury__io__Res_6 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_51_51));
                          }
                        }
                    }
                  else
                    *mercury__io__Res_6 = mercury__io__MaybeError_12;
                }
            }
            break;
        }
      }
  }
}

void MR_CALL 
mercury__io__remove_file_4_p_0(
  MR_String mercury__io__FileName_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Res_8;
    MR_String mercury__io__ResString_9;

{
#define MR_PROC_LABEL mercury__io__remove_file_4_p_0

	MR_String FileName;
	MR_Integer RetVal;
	MR_String RetStr;

	FileName =  mercury__io__FileName_5 ;
		{

#ifdef MR_WIN32
    RetVal = _wremove(ML_utf8_to_wide(FileName));
#else
    RetVal = remove(FileName);
#endif
    ML_maybe_make_err_msg(RetVal != 0, errno, "remove failed: ",
        MR_ALLOC_ID, RetStr);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Res_8  = RetVal;
	 mercury__io__ResString_9  = RetStr;
}
    mercury__io__succeeded = (mercury__io__Res_8 == (MR_Integer) 0);
    if (mercury__io__succeeded)
      *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__io__V_13_13 = (MR_Word) mercury__io__ResString_9;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_13_13));
        }
      }
  }
}

void MR_CALL 
mercury__io__get_temp_directory_3_p_0(
  MR_String * mercury__io__Dir_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__Var_8;
    MR_Word mercury__io__Result_9;
    MR_Char mercury__io__V_1_17;
    MR_String mercury__io__Value_24;

{
#define MR_PROC_LABEL mercury__io__get_temp_directory_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__io__succeeded)
      mercury__io__V_1_17 = (MR_Char) 92;
    else
      mercury__io__V_1_17 = (MR_Char) 47;
    mercury__io__succeeded = (mercury__io__V_1_17 == (MR_Char) 92);
    if (mercury__io__succeeded)
      mercury__io__Var_8 = (MR_String) "TMP";
    else
      mercury__io__Var_8 = (MR_String) "TMPDIR";
{
#define MR_PROC_LABEL mercury__io__get_temp_directory_3_p_0

	MR_String Var;
	MR_String Value;
	MR_bool SUCCESS_INDICATOR;

	Var =  mercury__io__Var_8 ;
		{

#ifdef MR_WIN32
    wchar_t *ValueW = _wgetenv(ML_utf8_to_wide(Var));
    if (ValueW != NULL) {
        Value = ML_wide_to_utf8(ValueW, MR_ALLOC_ID);
    } else {
        Value = NULL;
    }
#else
    Value = getenv(Var);
#endif
    SUCCESS_INDICATOR = (Value != 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Value_24  = Value;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__io__succeeded)
      {
        mercury__io__Result_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__io__Result_9, 0) = ((MR_Box) (mercury__io__Value_24));
      }
    else
      mercury__io__Result_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    if ((mercury__io__Result_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Char mercury__io__V_1_26;

{
#define MR_PROC_LABEL mercury__io__get_temp_directory_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__io__succeeded)
          mercury__io__V_1_26 = (MR_Char) 92;
        else
          mercury__io__V_1_26 = (MR_Char) 47;
        mercury__io__succeeded = (mercury__io__V_1_26 == (MR_Char) 92);
        if (mercury__io__succeeded)
          *mercury__io__Dir_4 = (MR_String) ".";
        else
          *mercury__io__Dir_4 = (MR_String) "/tmp";
      }
    else
      *mercury__io__Dir_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__io__Result_9, (MR_Integer) 0)));
  }
}

MR_bool MR_CALL 
mercury__io__have_make_temp_directory_0_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

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
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io__make_temp_directory_6_p_0(
  MR_String mercury__io__Dir_7,
  MR_String mercury__io__Prefix_8,
  MR_String mercury__io__Suffix_9,
  MR_Word * mercury__io__Result_10)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__DirName_12;
    MR_Word mercury__io__Okay_13;
    MR_String mercury__io__Message_14;
    MR_String mercury__io__V_17_17;
    MR_Char mercury__io__V_19_19;
    MR_Word mercury__io__V_5_26;
    MR_Word mercury__io__V_6_27;

{
#define MR_PROC_LABEL mercury__io__make_temp_directory_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__io__succeeded)
      mercury__io__V_19_19 = (MR_Char) 92;
    else
      mercury__io__V_19_19 = (MR_Char) 47;
    mercury__io__V_6_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__io__V_5_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__io__V_5_26, 0) = ((MR_Box) (MR_Word) (mercury__io__V_19_19));
      MR_hl_field(MR_mktag(1), mercury__io__V_5_26, 1) = ((MR_Box) (mercury__io__V_6_27));
    }
    {
      mercury__string__to_char_list_2_p_1(&mercury__io__V_17_17, mercury__io__V_5_26);
    }
{
#define MR_PROC_LABEL mercury__io__make_temp_directory_6_p_0

	MR_String Dir;
	MR_String Prefix;
	MR_String Suffix;
	MR_String Sep;
	MR_String DirName;
	MR_Word Okay;
	MR_String ErrorMessage;

	Dir =  mercury__io__Dir_7 ;
	Prefix =  mercury__io__Prefix_8 ;
	Suffix =  mercury__io__Suffix_9 ;
	Sep =  mercury__io__V_17_17 ;
		{

#ifdef MR_HAVE_MKDTEMP
    int err;

    DirName = MR_make_string(MR_ALLOC_ID, "%s%s%.5sXXXXXX%s",
        Dir, Sep, Prefix, Suffix);
    DirName = mkdtemp(DirName);
    if (DirName == NULL) {
        ML_maybe_make_err_msg(MR_TRUE, errno,
            "error creating temporary directory: ", MR_ALLOC_ID,
            ErrorMessage);
        Okay = MR_NO;
    } else {
        ErrorMessage = MR_make_string_const("");
        Okay = MR_YES;
    }
#else
    #warning "Your system does not have mkdtemp"
    Okay = MR_NO;
    ErrorMessage =
        MR_make_string_const("Your system does not have mkdtemp");
    DirName = MR_make_string_const("");
#endif /* HAVE_MKDTEMP */


		;}
#undef MR_PROC_LABEL
	 mercury__io__DirName_12  = DirName;
	 mercury__io__Okay_13  = Okay;
	 mercury__io__Message_14  = ErrorMessage;
}
    switch (mercury__io__Okay_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__io__V_20_20 = (MR_Word) mercury__io__Message_14;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Result_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_20_20));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__io__Result_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__DirName_12));
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__make_temp_directory_3_p_0(
  MR_Word * mercury__io__Result_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__Dir_6;

    {
      mercury__io__get_temp_directory_3_p_0(&mercury__io__Dir_6);
    }
    {
      mercury__io__make_temp_directory_6_p_0(mercury__io__Dir_6, (MR_String) "mtmp", (MR_String) "", mercury__io__Result_4);
    }
  }
}

void MR_CALL 
mercury__io__make_temp_5_p_0(
  MR_String mercury__io__Dir_6,
  MR_String mercury__io__Prefix_7,
  MR_String * mercury__io__Name_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Result_10;

    {
      mercury__io__make_temp_file_6_p_0(mercury__io__Dir_6, mercury__io__Prefix_7, (MR_String) "", &mercury__io__Result_10);
    }
    if (((MR_tag((MR_Word) mercury__io__Result_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__io__TypeCtorInfo_16_16 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
        MR_Word mercury__io__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Result_10, (MR_Integer) 0)));

        {
          mercury__exception__throw_1_p_0(mercury__io__TypeCtorInfo_16_16, ((MR_Box) (mercury__io__Error_11)));
          return;
        }
      }
    else
      *mercury__io__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__io__Result_10, (MR_Integer) 0)));
  }
}

void MR_CALL 
mercury__io__make_temp_file_6_p_0(
  MR_String mercury__io__Dir_7,
  MR_String mercury__io__Prefix_8,
  MR_String mercury__io__Suffix_9,
  MR_Word * mercury__io__Result_10)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__Name_12;
    MR_Word mercury__io__Okay_13;
    MR_String mercury__io__Message_14;
    MR_String mercury__io__V_17_17;
    MR_Char mercury__io__V_19_19;
    MR_Word mercury__io__V_5_26;
    MR_Word mercury__io__V_6_27;

{
#define MR_PROC_LABEL mercury__io__make_temp_file_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__io__succeeded)
      mercury__io__V_19_19 = (MR_Char) 92;
    else
      mercury__io__V_19_19 = (MR_Char) 47;
    mercury__io__V_6_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__io__V_5_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__io__V_5_26, 0) = ((MR_Box) (MR_Word) (mercury__io__V_19_19));
      MR_hl_field(MR_mktag(1), mercury__io__V_5_26, 1) = ((MR_Box) (mercury__io__V_6_27));
    }
    {
      mercury__string__to_char_list_2_p_1(&mercury__io__V_17_17, mercury__io__V_5_26);
    }
{
#define MR_PROC_LABEL mercury__io__make_temp_file_6_p_0

	MR_String Dir;
	MR_String Prefix;
	MR_String Suffix;
	MR_String Sep;
	MR_String FileName;
	MR_Word Okay;
	MR_String ErrorMessage;

	Dir =  mercury__io__Dir_7 ;
	Prefix =  mercury__io__Prefix_8 ;
	Suffix =  mercury__io__Suffix_9 ;
	Sep =  mercury__io__V_17_17 ;
		{

#ifdef MR_HAVE_MKSTEMP
    int err, fd;

    FileName = MR_make_string(MR_ALLOC_ID, "%s%s%.5sXXXXXX%s",
        Dir, Sep, Prefix, Suffix);
    fd = mkstemp(FileName);
    if (fd == -1) {
        ML_maybe_make_err_msg(MR_TRUE, errno,
            "error opening temporary file: ", MR_ALLOC_ID,
            ErrorMessage);
        Okay = MR_NO;
    } else {
        do {
            err = close(fd);
        } while (err == -1 && MR_is_eintr(errno));
        ML_maybe_make_err_msg(err, errno,
            "error closing temporary file: ", MR_ALLOC_ID,
            ErrorMessage);
        Okay = err == 0 ? MR_YES : MR_NO;
    }
#else
    /*
    ** Constructs a temporary name by concatenating Dir, `/', the first 5 chars
    ** of Prefix, six hex digits, and Suffix. The six digit hex number is
    ** generated by starting with the pid of this process.  Uses
    ** `open(..., O_CREATE | O_EXCL, ...)' to create the file, checking that
    ** there was no existing file with that name.
    */
    int     len, err, fd, num_tries;
    char    countstr[256];
    MR_Word filename_word;
    int     flags;

    len = strlen(Dir) + 1 + 5 + 6 + strlen(Suffix) + 1;
    /* Dir + / + Prefix + counter + Suffix + \0 */
    MR_offset_incr_hp_atomic_msg(filename_word, 0,
        (len + sizeof(MR_Word)) / sizeof(MR_Word),
        MR_ALLOC_ID, "string.string/0");
    FileName = (MR_String) filename_word;
    if (ML_io_tempnam_counter == 0) {
        ML_io_tempnam_counter = getpid();
    }
    num_tries = 0;
    do {
        sprintf(countstr, "%06lX", ML_io_tempnam_counter & 0xffffffL);
        strcpy(FileName, Dir);
        strcat(FileName, Sep);
        strncat(FileName, Prefix, 5);
        strncat(FileName, countstr, 6);
        strcat(FileName, Suffix);
        flags = O_WRONLY | O_CREAT | O_EXCL;
        do {
            #ifdef MR_WIN32
                fd = _wopen(ML_utf8_to_wide(FileName), flags, 0600);
            #else
                fd = open(FileName, flags, 0600);
            #endif
        } while (fd == -1 && MR_is_eintr(errno));
        num_tries++;
        ML_io_tempnam_counter += (1 << num_tries);
    } while (fd == -1 && errno == EEXIST &&
        num_tries < ML_MAX_TEMPNAME_TRIES);
    if (fd == -1) {
        ML_maybe_make_err_msg(MR_TRUE, errno,
            "error opening temporary file: ", MR_ALLOC_ID,
            ErrorMessage);
        Okay = MR_NO;
    }  else {
        do {
            err = close(fd);
        } while (err == -1 && MR_is_eintr(errno));
        ML_maybe_make_err_msg(err, errno,
            "error closing temporary file: ", MR_ALLOC_ID,
            ErrorMessage);
        Okay = err == 0 ? MR_YES : MR_NO;
    }
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__Name_12  = FileName;
	 mercury__io__Okay_13  = Okay;
	 mercury__io__Message_14  = ErrorMessage;
}
    switch (mercury__io__Okay_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__io__V_20_20 = (MR_Word) mercury__io__Message_14;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Result_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_20_20));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__io__Result_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__Name_12));
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__make_temp_3_p_0(
  MR_String * mercury__io__Name_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Result_6;
    MR_String mercury__io__Dir_16;

    {
      mercury__io__get_temp_directory_3_p_0(&mercury__io__Dir_16);
    }
    {
      mercury__io__make_temp_file_6_p_0(mercury__io__Dir_16, (MR_String) "mtmp", (MR_String) "", &mercury__io__Result_6);
    }
    if (((MR_tag((MR_Word) mercury__io__Result_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__io__TypeCtorInfo_11_11 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
        MR_Word mercury__io__Error_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Result_6, (MR_Integer) 0)));

        {
          mercury__exception__throw_1_p_0(mercury__io__TypeCtorInfo_11_11, ((MR_Box) (mercury__io__Error_7)));
          return;
        }
      }
    else
      *mercury__io__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__io__Result_6, (MR_Integer) 0)));
  }
}

void MR_CALL 
mercury__io__make_temp_file_3_p_0(
  MR_Word * mercury__io__Result_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__Dir_6;

    {
      mercury__io__get_temp_directory_3_p_0(&mercury__io__Dir_6);
    }
    {
      mercury__io__make_temp_file_6_p_0(mercury__io__Dir_6, (MR_String) "mtmp", (MR_String) "", mercury__io__Result_4);
    }
  }
}

MR_bool MR_CALL 
mercury__io__have_set_environment_var_0_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__have_set_environment_var_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__io__succeeded;
  }
}

void MR_CALL 
mercury__io__set_environment_var_4_p_0(
  MR_String mercury__io__Var_5,
  MR_String mercury__io__Value_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Res_9;

    {
      mercury__io__set_environment_var_5_p_0(mercury__io__Var_5, mercury__io__Value_6, &mercury__io__Res_9);
    }
    if ((mercury__io__Res_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word mercury__io__ErrorCode_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Res_9, (MR_Integer) 0)));
        MR_String mercury__io__V_12_12 = (MR_String) mercury__io__ErrorCode_11;

        {
          mercury__require__error_1_p_0(mercury__io__V_12_12);
          return;
        }
      }
  }
}

void MR_CALL 
mercury__io__set_environment_var_5_p_0(
  MR_String mercury__io__Var_6,
  MR_String mercury__io__Value_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__set_environment_var_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__io__succeeded)
      {
{
#define MR_PROC_LABEL mercury__io__set_environment_var_5_p_0

	MR_String Var;
	MR_String Value;
	MR_bool SUCCESS_INDICATOR;

	Var =  mercury__io__Var_6 ;
	Value =  mercury__io__Value_7 ;
		{

#ifdef MR_WIN32
    SUCCESS_INDICATOR =
        (_wputenv_s(ML_utf8_to_wide(Var), ML_utf8_to_wide(Value)) == 0);
#else
    SUCCESS_INDICATOR = (setenv(Var, Value, 1) == 0);
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__io__succeeded)
          *mercury__io__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_String mercury__io__Message_10;
            MR_Word mercury__io__V_17_17;
            MR_String mercury__io__V_21_21;

            {
              mercury__string__append_3_p_2(mercury__io__Var_6, (MR_String) "\'", &mercury__io__V_21_21);
            }
            {
              mercury__string__append_3_p_2((MR_String) "Could not set environment variable \140", mercury__io__V_21_21, &mercury__io__Message_10);
            }
            mercury__io__V_17_17 = (MR_Word) mercury__io__Message_10;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Res_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_17_17));
            }
          }
      }
    else
      {
        MR_Word mercury__io__V_18_18 = (MR_Word) ((MR_Box) ((MR_String) "Cannot set environment variables on this platform"));

        *mercury__io__Res_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_5[3]);
      }
  }
}

void MR_CALL 
mercury__io__get_environment_var_4_p_0(
  MR_String mercury__io__Var_5,
  MR_Word * mercury__io__OptValue_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__Value_8;

{
#define MR_PROC_LABEL mercury__io__get_environment_var_4_p_0

	MR_String Var;
	MR_String Value;
	MR_bool SUCCESS_INDICATOR;

	Var =  mercury__io__Var_5 ;
		{

#ifdef MR_WIN32
    wchar_t *ValueW = _wgetenv(ML_utf8_to_wide(Var));
    if (ValueW != NULL) {
        Value = ML_wide_to_utf8(ValueW, MR_ALLOC_ID);
    } else {
        Value = NULL;
    }
#else
    Value = getenv(Var);
#endif
    SUCCESS_INDICATOR = (Value != 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Value_8  = Value;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__io__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mercury__io__OptValue_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Value_8));
      }
    else
      *mercury__io__OptValue_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
mercury__io__update_globals_3_p_0_1(
  MR_Box mercury__io__closure_arg,
  MR_Box * mercury__io__wrapper_arg_1)
{
  {
    MR_Box mercury__io__closure = mercury__io__closure_arg;
    MR_Word mercury__io__conv0_LambdaHeadVar__1_16;

    {
      mercury__io__IntroducedFrom__pred__update_globals__5530__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__closure, (MR_Integer) 4))), &mercury__io__conv0_LambdaHeadVar__1_16);
    }
    *mercury__io__wrapper_arg_1 = ((MR_Box) (mercury__io__conv0_LambdaHeadVar__1_16));
  }
}

void MR_CALL 
mercury__io__update_globals_3_p_0(
  MR_Word mercury__io__UpdatePred_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Globals0_6;
    MR_Word mercury__io__TypeCtorInfo_20_20;
    MR_Word mercury__io__Update_7;
    MR_Word mercury__io__UpdateResult_9;

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
	 mercury__io__Globals0_6  = Globals;
}
    {
      mercury__io__Update_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__io__Update_7, 0) = ((MR_Box) (&mercury__io_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), mercury__io__Update_7, 1) = ((MR_Box) (mercury__io__update_globals_3_p_0_1));
      MR_hl_field(MR_mktag(0), mercury__io__Update_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mercury__io__Update_7, 3) = ((MR_Box) (mercury__io__UpdatePred_4));
      MR_hl_field(MR_mktag(0), mercury__io__Update_7, 4) = ((MR_Box) (mercury__io__Globals0_6));
    }
    mercury__io__TypeCtorInfo_20_20 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
    {
      mercury__exception__try_2_p_0(mercury__io__TypeCtorInfo_20_20, mercury__io__Update_7, &mercury__io__UpdateResult_9);
    }
    if (((MR_tag((MR_Word) mercury__io__UpdateResult_9)) == (MR_mktag((MR_Integer) 2))))
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
          mercury__exception__rethrow_1_p_0(mercury__io__TypeCtorInfo_20_20, mercury__io__UpdateResult_9);
          return;
        }
      }
    else
      {
        MR_Word mercury__io__Globals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__UpdateResult_9, (MR_Integer) 0)));

{
#define MR_PROC_LABEL mercury__io__update_globals_3_p_0

	MR_Word Globals;

	Globals =  mercury__io__Globals_10 ;
		{

    /* XXX need to globalize the memory */
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
}

void MR_CALL 
mercury__io__set_globals_3_p_0(
  MR_Word mercury__io__Globals_4)
{
  {
    MR_bool mercury__io__succeeded;

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

	Globals =  mercury__io__Globals_4 ;
		{

    /* XXX need to globalize the memory */
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
}

void MR_CALL 
mercury__io__get_globals_3_p_0(
  MR_Word * mercury__io__Globals_4)
{
  {
    MR_bool mercury__io__succeeded;

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
	 *mercury__io__Globals_4  = Globals;
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
}

void MR_CALL 
mercury__io__set_exit_status_3_p_0(
  MR_Integer mercury__io__ExitStatus_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__set_exit_status_3_p_0

	MR_Integer ExitStatus;

	ExitStatus =  mercury__io__ExitStatus_1 ;
		{

    mercury_exit_status = (int) ExitStatus;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__get_exit_status_3_p_0(
  MR_Integer * mercury__io__ExitStatus_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__get_exit_status_3_p_0

	MR_Integer ExitStatus;

		{

    ExitStatus = mercury_exit_status;


		;}
#undef MR_PROC_LABEL
	 *mercury__io__ExitStatus_1  = ExitStatus;
}
  }
}

void MR_CALL 
mercury__io__command_line_arguments_3_p_0(
  MR_Word * mercury__io__Args_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__command_line_arguments_3_p_0

	MR_Word Args;

		{
{
    int i;

    /*
    ** Convert mercury_argv from a vector to a list.
    */
    i = mercury_argc;
    Args = MR_list_empty_msg(MR_ALLOC_ID);
    while (--i >= 0) {
        Args = MR_string_list_cons_msg((MR_Word) mercury_argv[i], Args,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	 *mercury__io__Args_1  = Args;
}
  }
}

void MR_CALL 
mercury__io__progname_base_4_p_0(
  MR_String mercury__io__DefaultName_5,
  MR_String * mercury__io__PrognameBase_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__Progname_8;

    {
      mercury__io__progname_4_p_0(mercury__io__DefaultName_5, &mercury__io__Progname_8);
    }
    {
      *mercury__io__PrognameBase_6 = mercury__dir__det_basename_1_f_0(mercury__io__Progname_8);
    }
  }
}

void MR_CALL 
mercury__io__progname_4_p_0(
  MR_String mercury__io__DefaultProgname_1,
  MR_String * mercury__io__PrognameOut_2)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__progname_4_p_0

	MR_String DefaultProgname;
	MR_String PrognameOut;

	DefaultProgname =  mercury__io__DefaultProgname_1 ;
		{

    if (MR_progname) {
        MR_make_aligned_string(PrognameOut, MR_progname);
    } else {
        PrognameOut = DefaultProgname;
    }


		;}
#undef MR_PROC_LABEL
	 *mercury__io__PrognameOut_2  = PrognameOut;
}
  }
}

void MR_CALL 
mercury__io__binary_output_stream_name_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_String * mercury__io__Name_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__stream_name_4_p_0(mercury__io__Stream_5, mercury__io__Name_6);
    }
  }
}

void MR_CALL 
mercury__io__binary_output_stream_name_3_p_0(
  MR_String * mercury__io__Name_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_6;

{
#define MR_PROC_LABEL mercury__io__binary_output_stream_name_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_6  = (MR_Box) Stream;
}
    {
      mercury__io__stream_name_4_p_0(mercury__io__Stream_6, mercury__io__Name_4);
    }
  }
}

void MR_CALL 
mercury__io__set_binary_output_stream_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word * mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__NewStream_5 = (MR_Box) mercury__io__HeadVar__1_1;
    MR_Box mercury__io__OutStream_6;

{
#define MR_PROC_LABEL mercury__io__set_binary_output_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_5 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_6  = (MR_Box) OutStream;
}
    *mercury__io__HeadVar__2_2 = (MR_Word) mercury__io__OutStream_6;
  }
}

void MR_CALL 
mercury__io__stdout_binary_stream_3_p_0(
  MR_Word * mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4;

{
#define MR_PROC_LABEL mercury__io__stdout_binary_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout_binary;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_4  = (MR_Box) Stream;
}
    *mercury__io__HeadVar__1_1 = (MR_Word) mercury__io__Stream_4;
  }
}

void MR_CALL 
mercury__io__binary_output_stream_3_p_0(
  MR_Word * mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4;

{
#define MR_PROC_LABEL mercury__io__binary_output_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_4  = (MR_Box) Stream;
}
    *mercury__io__HeadVar__1_1 = (MR_Word) mercury__io__Stream_4;
  }
}

void MR_CALL 
mercury__io__close_binary_output_3_p_0(
  MR_Word mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__maybe_delete_stream_info_3_p_0(mercury__io__Stream_4);
    }
{
#define MR_PROC_LABEL mercury__io__close_binary_output_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_4 ;
		{

    mercury_close(Stream);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__open_binary_append_4_p_0(
  MR_String mercury__io__FileName_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Result0_8;
    MR_Integer mercury__io__OpenCount_9;
    MR_Box mercury__io__NewStream_10;

{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer ResultCode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;

	FileName =  mercury__io__FileName_5 ;
	Mode =  (MR_String) "ab" ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        ResultCode = 0;
        StreamId = mercury_next_stream_id();
    } else {
        ResultCode = -1;
        StreamId = -1;
    }


		;}
#undef MR_PROC_LABEL
	 mercury__io__Result0_8  = ResultCode;
	 mercury__io__OpenCount_9  = StreamId;
	 mercury__io__NewStream_10  = (MR_Box) Stream;
}
    mercury__io__succeeded = (mercury__io__Result0_8 == (MR_Integer) -1);
    if (mercury__io__succeeded)
      {
        MR_String mercury__io__Msg_11;
        MR_Word mercury__io__V_18_18;
        MR_Box mercury__io__Error_30;

{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_30 );
}
{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_30 , Error);
	Msg0 =  (MR_String) "can\'t append to file: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_11  = Msg;
}
        mercury__io__V_18_18 = (MR_Word) mercury__io__Msg_11;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_18_18));
        }
      }
    else
      {
        MR_Word mercury__io__TypeCtorInfo_18_46;
        MR_Word mercury__io__TypeInfo_for_K_54;
        MR_Word mercury__io__V_19_19 = (MR_Word) mercury__io__NewStream_10;
        MR_Word mercury__io__V_20_20;
        MR_Word mercury__io__V_24_24;
        MR_Word mercury__io__StreamDb0_38;
        MR_Word mercury__io__StreamDb_39;
        MR_Integer mercury__io__V_42_42;

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__V_19_19));
        }
        {
          mercury__io__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__io__V_24_24, 0) = ((MR_Box) (mercury__io__FileName_5));
        }
        {
          mercury__io__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 0) = ((MR_Box) (mercury__io__OpenCount_9));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 1) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 3) = ((MR_Box) (mercury__io__V_24_24));
        }
{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	 mercury__io__StreamDb0_38  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) mercury__io__NewStream_10 ;
		{

#ifndef MR_NATIVE_GC
    /*
    ** Most of the time, we can just use the pointer to the stream
    ** as a unique identifier.
    */
    Id = (MR_Word) Stream;
#else
    /*
    ** For accurate GC we embed an ID in the MercuryFile
    ** and retrieve it here.
    */
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_42_42  = Id;
}
        mercury__io__TypeCtorInfo_18_46 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
        mercury__io__TypeInfo_for_K_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__tree234__set_4_p_0(mercury__io__TypeInfo_for_K_54, mercury__io__TypeCtorInfo_18_46, ((MR_Box) (mercury__io__V_42_42)), ((MR_Box) (mercury__io__V_20_20)), mercury__io__StreamDb0_38, &mercury__io__StreamDb_39);
        }
{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0

	MR_Word StreamDb;

	StreamDb =  mercury__io__StreamDb_39 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
      }
  }
}

void MR_CALL 
mercury__io__open_binary_output_4_p_0(
  MR_String mercury__io__FileName_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Result0_8;
    MR_Integer mercury__io__OpenCount_9;
    MR_Box mercury__io__NewStream_10;

{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer ResultCode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;

	FileName =  mercury__io__FileName_5 ;
	Mode =  (MR_String) "wb" ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        ResultCode = 0;
        StreamId = mercury_next_stream_id();
    } else {
        ResultCode = -1;
        StreamId = -1;
    }


		;}
#undef MR_PROC_LABEL
	 mercury__io__Result0_8  = ResultCode;
	 mercury__io__OpenCount_9  = StreamId;
	 mercury__io__NewStream_10  = (MR_Box) Stream;
}
    mercury__io__succeeded = (mercury__io__Result0_8 == (MR_Integer) -1);
    if (mercury__io__succeeded)
      {
        MR_String mercury__io__Msg_11;
        MR_Word mercury__io__V_18_18;
        MR_Box mercury__io__Error_30;

{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_30 );
}
{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_30 , Error);
	Msg0 =  (MR_String) "can\'t open output file: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_11  = Msg;
}
        mercury__io__V_18_18 = (MR_Word) mercury__io__Msg_11;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_18_18));
        }
      }
    else
      {
        MR_Word mercury__io__TypeCtorInfo_18_46;
        MR_Word mercury__io__TypeInfo_for_K_54;
        MR_Word mercury__io__V_19_19 = (MR_Word) mercury__io__NewStream_10;
        MR_Word mercury__io__V_20_20;
        MR_Word mercury__io__V_24_24;
        MR_Word mercury__io__StreamDb0_38;
        MR_Word mercury__io__StreamDb_39;
        MR_Integer mercury__io__V_42_42;

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__V_19_19));
        }
        {
          mercury__io__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__io__V_24_24, 0) = ((MR_Box) (mercury__io__FileName_5));
        }
        {
          mercury__io__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 0) = ((MR_Box) (mercury__io__OpenCount_9));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 3) = ((MR_Box) (mercury__io__V_24_24));
        }
{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	 mercury__io__StreamDb0_38  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) mercury__io__NewStream_10 ;
		{

#ifndef MR_NATIVE_GC
    /*
    ** Most of the time, we can just use the pointer to the stream
    ** as a unique identifier.
    */
    Id = (MR_Word) Stream;
#else
    /*
    ** For accurate GC we embed an ID in the MercuryFile
    ** and retrieve it here.
    */
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_42_42  = Id;
}
        mercury__io__TypeCtorInfo_18_46 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
        mercury__io__TypeInfo_for_K_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__tree234__set_4_p_0(mercury__io__TypeInfo_for_K_54, mercury__io__TypeCtorInfo_18_46, ((MR_Box) (mercury__io__V_42_42)), ((MR_Box) (mercury__io__V_20_20)), mercury__io__StreamDb0_38, &mercury__io__StreamDb_39);
        }
{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0

	MR_Word StreamDb;

	StreamDb =  mercury__io__StreamDb_39 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
      }
  }
}

void MR_CALL 
mercury__io__told_binary_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__NewStream_18;
    MR_Box mercury__io__Stream_24;

{
#define MR_PROC_LABEL mercury__io__told_binary_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout_binary;


		;}
#undef MR_PROC_LABEL
	 mercury__io__NewStream_18  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__told_binary_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_18 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_24  = (MR_Box) OutStream;
}
    {
      mercury__io__maybe_delete_stream_info_3_p_0(mercury__io__Stream_24);
    }
{
#define MR_PROC_LABEL mercury__io__told_binary_2_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_24 ;
		{

    mercury_close(Stream);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__tell_binary_4_p_0(
  MR_String mercury__io__File_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Result0_8;

    {
      mercury__io__open_binary_output_4_p_0(mercury__io__File_5, &mercury__io__Result0_8);
    }
    if (((MR_tag((MR_Word) mercury__io__Result0_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__io__Msg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Result0_8, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Msg_11));
        }
      }
    else
      {
        MR_Word mercury__io__Stream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Result0_8, (MR_Integer) 0)));
        MR_Box mercury__io__NewStream_18 = (MR_Box) mercury__io__Stream_9;
        MR_Box mercury__io__OutStream_19;

{
#define MR_PROC_LABEL mercury__io__tell_binary_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_18 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_19  = (MR_Box) OutStream;
}
        *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_name_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_String * mercury__io__Name_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__stream_name_4_p_0(mercury__io__Stream_5, mercury__io__Name_6);
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_name_3_p_0(
  MR_String * mercury__io__Name_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_6;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_name_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_6  = (MR_Box) Stream;
}
    {
      mercury__io__stream_name_4_p_0(mercury__io__Stream_6, mercury__io__Name_4);
    }
  }
}

void MR_CALL 
mercury__io__stdin_binary_stream_3_p_0(
  MR_Word * mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4;

{
#define MR_PROC_LABEL mercury__io__stdin_binary_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin_binary;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_4  = (MR_Box) Stream;
}
    *mercury__io__HeadVar__1_1 = (MR_Word) mercury__io__Stream_4;
  }
}

void MR_CALL 
mercury__io__set_binary_input_stream_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word * mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__NewStream_5 = (MR_Box) mercury__io__HeadVar__1_1;
    MR_Box mercury__io__OutStream_6;

{
#define MR_PROC_LABEL mercury__io__set_binary_input_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_5 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_6  = (MR_Box) OutStream;
}
    *mercury__io__HeadVar__2_2 = (MR_Word) mercury__io__OutStream_6;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_3_p_0(
  MR_Word * mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_4  = (MR_Box) Stream;
}
    *mercury__io__HeadVar__1_1 = (MR_Word) mercury__io__Stream_4;
  }
}

void MR_CALL 
mercury__io__close_binary_input_3_p_0(
  MR_Word mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__maybe_delete_stream_info_3_p_0(mercury__io__Stream_4);
    }
{
#define MR_PROC_LABEL mercury__io__close_binary_input_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_4 ;
		{

    mercury_close(Stream);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__open_binary_input_4_p_0(
  MR_String mercury__io__FileName_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Result0_8;
    MR_Integer mercury__io__OpenCount_9;
    MR_Box mercury__io__NewStream_10;

{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer ResultCode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;

	FileName =  mercury__io__FileName_5 ;
	Mode =  (MR_String) "rb" ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        ResultCode = 0;
        StreamId = mercury_next_stream_id();
    } else {
        ResultCode = -1;
        StreamId = -1;
    }


		;}
#undef MR_PROC_LABEL
	 mercury__io__Result0_8  = ResultCode;
	 mercury__io__OpenCount_9  = StreamId;
	 mercury__io__NewStream_10  = (MR_Box) Stream;
}
    mercury__io__succeeded = (mercury__io__Result0_8 == (MR_Integer) -1);
    if (mercury__io__succeeded)
      {
        MR_String mercury__io__Msg_11;
        MR_Word mercury__io__V_18_18;
        MR_Box mercury__io__Error_30;

{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_30 );
}
{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_30 , Error);
	Msg0 =  (MR_String) "can\'t open input file: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_11  = Msg;
}
        mercury__io__V_18_18 = (MR_Word) mercury__io__Msg_11;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_18_18));
        }
      }
    else
      {
        MR_Word mercury__io__TypeCtorInfo_18_46;
        MR_Word mercury__io__TypeInfo_for_K_54;
        MR_Word mercury__io__V_19_19 = (MR_Word) mercury__io__NewStream_10;
        MR_Word mercury__io__V_20_20;
        MR_Word mercury__io__V_24_24;
        MR_Word mercury__io__StreamDb0_38;
        MR_Word mercury__io__StreamDb_39;
        MR_Integer mercury__io__V_42_42;

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__V_19_19));
        }
        {
          mercury__io__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__io__V_24_24, 0) = ((MR_Box) (mercury__io__FileName_5));
        }
        {
          mercury__io__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 0) = ((MR_Box) (mercury__io__OpenCount_9));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 3) = ((MR_Box) (mercury__io__V_24_24));
        }
{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	 mercury__io__StreamDb0_38  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) mercury__io__NewStream_10 ;
		{

#ifndef MR_NATIVE_GC
    /*
    ** Most of the time, we can just use the pointer to the stream
    ** as a unique identifier.
    */
    Id = (MR_Word) Stream;
#else
    /*
    ** For accurate GC we embed an ID in the MercuryFile
    ** and retrieve it here.
    */
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_42_42  = Id;
}
        mercury__io__TypeCtorInfo_18_46 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
        mercury__io__TypeInfo_for_K_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__tree234__set_4_p_0(mercury__io__TypeInfo_for_K_54, mercury__io__TypeCtorInfo_18_46, ((MR_Box) (mercury__io__V_42_42)), ((MR_Box) (mercury__io__V_20_20)), mercury__io__StreamDb0_38, &mercury__io__StreamDb_39);
        }
{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0

	MR_Word StreamDb;

	StreamDb =  mercury__io__StreamDb_39 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
      }
  }
}

void MR_CALL 
mercury__io__seen_binary_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__NewStream_18;
    MR_Box mercury__io__Stream_24;

{
#define MR_PROC_LABEL mercury__io__seen_binary_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin_binary;


		;}
#undef MR_PROC_LABEL
	 mercury__io__NewStream_18  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__seen_binary_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_18 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_24  = (MR_Box) OutStream;
}
    {
      mercury__io__maybe_delete_stream_info_3_p_0(mercury__io__Stream_24);
    }
{
#define MR_PROC_LABEL mercury__io__seen_binary_2_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_24 ;
		{

    mercury_close(Stream);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__see_binary_4_p_0(
  MR_String mercury__io__File_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Result0_8;

    {
      mercury__io__open_binary_input_4_p_0(mercury__io__File_5, &mercury__io__Result0_8);
    }
    if (((MR_tag((MR_Word) mercury__io__Result0_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__io__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Result0_8, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Error_11));
        }
      }
    else
      {
        MR_Word mercury__io__Stream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Result0_8, (MR_Integer) 0)));
        MR_Box mercury__io__NewStream_18 = (MR_Box) mercury__io__Stream_9;
        MR_Box mercury__io__OutStream_19;

{
#define MR_PROC_LABEL mercury__io__see_binary_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_18 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_19  = (MR_Box) OutStream;
}
        *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

void MR_CALL 
mercury__io__binary_output_stream_offset_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer * mercury__io__Offset_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__binary_output_stream_offset_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Offset;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
		{

    /* XXX should check for failure */
    /* XXX should check if the stream is tellable */
    if (MR_IS_FILE_STREAM(*Stream)) {
        Offset = ftell(MR_file(*Stream));
    } else {
        mercury_io_error(Stream,
            "io.primitive_binary_stream_offset: untellable stream");
    }


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Offset_6  = Offset;
}
  }
}

void MR_CALL 
mercury__io__binary_input_stream_offset_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer * mercury__io__Offset_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_offset_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Offset;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
		{

    /* XXX should check for failure */
    /* XXX should check if the stream is tellable */
    if (MR_IS_FILE_STREAM(*Stream)) {
        Offset = ftell(MR_file(*Stream));
    } else {
        mercury_io_error(Stream,
            "io.primitive_binary_stream_offset: untellable stream");
    }


		;}
#undef MR_PROC_LABEL
	 *mercury__io__Offset_6  = Offset;
}
  }
}

void MR_CALL 
mercury__io__seek_binary_output_5_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__Whence_7,
  MR_Integer mercury__io__Offset_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_6 = (MR_Box) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__Flag_10;

    switch (mercury__io__Whence_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__Flag_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        mercury__io__Flag_10 = (MR_Integer) 2;
        break;
      case (MR_Integer) 0:
        mercury__io__Flag_10 = (MR_Integer) 0;
        break;
    }
{
#define MR_PROC_LABEL mercury__io__seek_binary_output_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	MR_Integer Off;

	Stream = (MercuryFilePtr) mercury__io__Stream_6 ;
	Flag =  mercury__io__Flag_10 ;
	Off =  mercury__io__Offset_8 ;
		{

    static const int seek_flags[] = { SEEK_SET, SEEK_CUR, SEEK_END };

    /* XXX should check for failure */
    /* XXX should also check if the stream is seekable */
    if (MR_IS_FILE_STREAM(*Stream)) {
        fseek(MR_file(*Stream), Off, seek_flags[Flag]);
    } else {
        mercury_io_error(Stream, "io.seek_binary_2: unseekable stream");
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__seek_binary_input_5_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__Whence_7,
  MR_Integer mercury__io__Offset_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_6 = (MR_Box) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__Flag_10;

    switch (mercury__io__Whence_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__Flag_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        mercury__io__Flag_10 = (MR_Integer) 2;
        break;
      case (MR_Integer) 0:
        mercury__io__Flag_10 = (MR_Integer) 0;
        break;
    }
{
#define MR_PROC_LABEL mercury__io__seek_binary_input_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	MR_Integer Off;

	Stream = (MercuryFilePtr) mercury__io__Stream_6 ;
	Flag =  mercury__io__Flag_10 ;
	Off =  mercury__io__Offset_8 ;
		{

    static const int seek_flags[] = { SEEK_SET, SEEK_CUR, SEEK_END };

    /* XXX should check for failure */
    /* XXX should also check if the stream is seekable */
    if (MR_IS_FILE_STREAM(*Stream)) {
        fseek(MR_file(*Stream), Off, seek_flags[Flag]);
    } else {
        mercury_io_error(Stream, "io.seek_binary_2: unseekable stream");
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__flush_binary_output_3_p_0(
  MR_Word mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__flush_binary_output_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_4 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__flush_binary_output_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__flush_binary_output_2_p_0


		{

    MercuryFilePtr out = mercury_current_binary_output();
    if (MR_FLUSH(*out) < 0) {
        mercury_output_error(out, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_bitmap_6_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Box mercury__io__Bitmap_8,
  MR_Integer mercury__io__Start_9,
  MR_Integer mercury__io__NumBytes_10)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_7 = (MR_Box) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__V_14_14;
    MR_Integer mercury__io__V_15_15;
    MR_Integer mercury__io__V_16_16;

    {
      mercury__io__succeeded = mercury__bitmap__byte_in_range_2_p_0(mercury__io__Bitmap_8, mercury__io__Start_9);
    }
    if (mercury__io__succeeded)
      {
        mercury__io__V_15_15 = (mercury__io__Start_9 + mercury__io__NumBytes_10);
        mercury__io__V_16_16 = (MR_Integer) 1;
        mercury__io__V_14_14 = (mercury__io__V_15_15 - mercury__io__V_16_16);
        {
          mercury__io__succeeded = mercury__bitmap__byte_in_range_2_p_0(mercury__io__Bitmap_8, mercury__io__V_14_14);
        }
      }
    if (mercury__io__succeeded)
      {
{
#define MR_PROC_LABEL mercury__io__write_bitmap_6_p_0

	MercuryFilePtr Stream;
	MR_BitmapPtr Bitmap;
	MR_Integer Start;
	MR_Integer Length;

	Stream = (MercuryFilePtr) mercury__io__Stream_7 ;
	Bitmap = (MR_BitmapPtr) mercury__io__Bitmap_8 ;
	Start =  mercury__io__Start_9 ;
	Length =  mercury__io__NumBytes_10 ;
		{

    MR_Integer bytes_written =
        (MR_Integer)MR_WRITE(*Stream, Bitmap->elements + Start, Length);
    if (bytes_written != Length) {
        mercury_io_error(Stream, "Error writing bitmap.");
    }


		;}
#undef MR_PROC_LABEL
}
      }
    else
      {
        MR_Integer mercury__io__V_19_19 = (mercury__io__Start_9 * (MR_Integer) 8);
        MR_Integer mercury__io__V_20_20 = (mercury__io__NumBytes_10 * (MR_Integer) 8);

        {
          mercury__bitmap__throw_bounds_error_4_p_0(mercury__io__Bitmap_8, (MR_String) "io.write_bitmap", mercury__io__V_19_19, mercury__io__V_20_20);
          return;
        }
      }
  }
}

void MR_CALL 
mercury__io__write_bitmap_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Box mercury__io__Bitmap_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__NumBytes_8;

    {
      mercury__io__succeeded = mercury__bitmap__num_bytes_1_f_0(mercury__io__Bitmap_6, &mercury__io__NumBytes_8);
    }
    if (mercury__io__succeeded)
      {
{
#define MR_PROC_LABEL mercury__io__write_bitmap_4_p_0

	MercuryFilePtr Stream;
	MR_BitmapPtr Bitmap;
	MR_Integer Start;
	MR_Integer Length;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
	Bitmap = (MR_BitmapPtr) mercury__io__Bitmap_6 ;
	Start =  (MR_Integer) 0 ;
	Length =  mercury__io__NumBytes_8 ;
		{

    MR_Integer bytes_written =
        (MR_Integer)MR_WRITE(*Stream, Bitmap->elements + Start, Length);
    if (bytes_written != Length) {
        mercury_io_error(Stream, "Error writing bitmap.");
    }


		;}
#undef MR_PROC_LABEL
}
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "io.write_bitmap: bitmap contains partial final byte");
          return;
        }
      }
  }
}

void MR_CALL 
mercury__io__write_bitmap_5_p_0(
  MR_Box mercury__io__Bitmap_6,
  MR_Integer mercury__io__Start_7,
  MR_Integer mercury__io__NumBytes_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_10;
    MR_Box mercury__io__Stream_17;

{
#define MR_PROC_LABEL mercury__io__write_bitmap_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_17  = (MR_Box) Stream;
}
    mercury__io__Stream_10 = (MR_Word) mercury__io__Stream_17;
    {
      mercury__io__write_bitmap_6_p_0(mercury__io__Stream_10, mercury__io__Bitmap_6, mercury__io__Start_7, mercury__io__NumBytes_8);
    }
  }
}

void MR_CALL 
mercury__io__write_bitmap_3_p_0(
  MR_Box mercury__io__Bitmap_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_19;
    MR_Integer mercury__io__NumBytes_21;

{
#define MR_PROC_LABEL mercury__io__write_bitmap_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_19  = (MR_Box) Stream;
}
    {
      mercury__io__succeeded = mercury__bitmap__num_bytes_1_f_0(mercury__io__Bitmap_4, &mercury__io__NumBytes_21);
    }
    if (mercury__io__succeeded)
      {
{
#define MR_PROC_LABEL mercury__io__write_bitmap_3_p_0

	MercuryFilePtr Stream;
	MR_BitmapPtr Bitmap;
	MR_Integer Start;
	MR_Integer Length;

	Stream = (MercuryFilePtr) mercury__io__Stream_19 ;
	Bitmap = (MR_BitmapPtr) mercury__io__Bitmap_4 ;
	Start =  (MR_Integer) 0 ;
	Length =  mercury__io__NumBytes_21 ;
		{

    MR_Integer bytes_written =
        (MR_Integer)MR_WRITE(*Stream, Bitmap->elements + Start, Length);
    if (bytes_written != Length) {
        mercury_io_error(Stream, "Error writing bitmap.");
    }


		;}
#undef MR_PROC_LABEL
}
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "io.write_bitmap: bitmap contains partial final byte");
          return;
        }
      }
  }
}

void MR_CALL 
mercury__io__write_byte_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer mercury__io__Byte_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__write_byte_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
	Byte =  mercury__io__Byte_6 ;
		{

    /* call putc with a strictly non-negative byte-sized integer */
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_byte_3_p_0(
  MR_Integer mercury__io__Byte_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__write_byte_3_p_0

	MR_Integer Byte;

	Byte =  mercury__io__Byte_1 ;
		{

    /* call putc with a strictly non-negative byte-sized integer */
    if (MR_PUTCH(*mercury_current_binary_output(),
        (int) ((unsigned char) Byte)) < 0)
    {
        mercury_output_error(mercury_current_text_output(), errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_binary_4_p_0(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Stream_5,
  MR_Box mercury__io__Term_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__OrigStream_8;
    MR_Box mercury__io__NewStream_18 = (MR_Box) mercury__io__Stream_5;
    MR_Box mercury__io__OutStream_19;
    MR_Box mercury__io__NewStream_24;
    MR_Box mercury__io__OutStream_25;

{
#define MR_PROC_LABEL mercury__io__write_binary_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_18 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_19  = (MR_Box) OutStream;
}
    mercury__io__OrigStream_8 = (MR_Word) mercury__io__OutStream_19;
    {
      mercury__io__write_binary_3_p_0(mercury__io__TypeInfo_for_T_15, mercury__io__Term_6);
    }
    mercury__io__NewStream_24 = (MR_Box) mercury__io__OrigStream_8;
{
#define MR_PROC_LABEL mercury__io__write_binary_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_24 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_25  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__write_binary_3_p_0(
  MR_Word mercury__io__TypeInfo_for_T_16,
  MR_Box mercury__io__Term_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_29;
    MR_Word mercury__io__TypeClassInfo_for_writer_30;
    MR_Box mercury__io__Stream_6;
    MR_Word mercury__io__V_11_11;
    MR_Word mercury__io__V_10_36;
    MR_Box mercury__io__Stream_40;

{
#define MR_PROC_LABEL mercury__io__write_binary_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_6  = (MR_Box) Stream;
}
    mercury__io__V_11_11 = (MR_Word) mercury__io__Stream_6;
    mercury__io__TypeClassInfo_for_writer_29 = (MR_Word) &mercury__io_scalar_common_3[0];
    mercury__io__TypeClassInfo_for_writer_30 = (MR_Word) &mercury__io_scalar_common_3[1];
    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_16, mercury__io__Term_4, &mercury__io__V_10_36);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(mercury__io__TypeClassInfo_for_writer_29, mercury__io__TypeClassInfo_for_writer_30, mercury__io__V_11_11, (MR_Integer) 1, mercury__io__V_10_36);
    }
    mercury__io__Stream_40 = (MR_Box) mercury__io__V_11_11;
{
#define MR_PROC_LABEL mercury__io__write_binary_3_p_0

	MercuryFilePtr Stream;
	MR_String Message;

	Stream = (MercuryFilePtr) mercury__io__Stream_40 ;
	Message =  (MR_String) ".\n" ;
		{

    mercury_print_string(Stream, Message);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__putback_byte_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer mercury__io__Character_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__putback_byte_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
	Character =  mercury__io__Character_6 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_byte: ungetc failed");
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__putback_byte_3_p_0(
  MR_Integer mercury__io__Char_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_19;

{
#define MR_PROC_LABEL mercury__io__putback_byte_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__putback_byte_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_19 ;
	Character =  mercury__io__Char_4 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, Character) == EOF) {
        mercury_io_error(mf, "io.putback_byte: ungetc failed");
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_1(
  MR_Word mercury__io__TypeInfo_for_T_17,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__ShouldReduce_12;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_1

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_TRUE;
#else
    ShouldReduce = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__ShouldReduce_12  = ShouldReduce;
}
    switch (mercury__io__ShouldReduce_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1(mercury__io__TypeInfo_for_T_17, mercury__io__Stream_7, mercury__io__Pred_8, mercury__io__T0_9, mercury__io__Res_10);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_1(mercury__io__TypeInfo_for_T_17, mercury__io__Stream_7, mercury__io__Pred_8, mercury__io__T0_9, mercury__io__Res_10);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_0(
  MR_Word mercury__io__TypeInfo_for_T_17,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__ShouldReduce_12;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_TRUE;
#else
    ShouldReduce = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__ShouldReduce_12  = ShouldReduce;
}
    switch (mercury__io__ShouldReduce_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0(mercury__io__TypeInfo_for_T_17, mercury__io__Stream_7, mercury__io__Pred_8, mercury__io__T0_9, mercury__io__Res_10);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_0(mercury__io__TypeInfo_for_T_17, mercury__io__Stream_7, mercury__io__Pred_8, mercury__io__T0_9, mercury__io__Res_10);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_6_p_1(
  MR_Word mercury__io__TypeInfo_for_T_17,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__ShouldReduce_12;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_6_p_1

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_TRUE;
#else
    ShouldReduce = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__ShouldReduce_12  = ShouldReduce;
}
    switch (mercury__io__ShouldReduce_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__binary_input_stream_foldl2_io_plain_6_p_1(mercury__io__TypeInfo_for_T_17, mercury__io__Stream_7, mercury__io__Pred_8, mercury__io__T0_9, mercury__io__Res_10);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__binary_input_stream_foldl2_io_chunk_6_p_1(mercury__io__TypeInfo_for_T_17, mercury__io__Stream_7, mercury__io__Pred_8, mercury__io__T0_9, mercury__io__Res_10);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_6_p_0(
  MR_Word mercury__io__TypeInfo_for_T_17,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__ShouldReduce_12;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_6_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_TRUE;
#else
    ShouldReduce = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__ShouldReduce_12  = ShouldReduce;
}
    switch (mercury__io__ShouldReduce_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__binary_input_stream_foldl2_io_plain_6_p_0(mercury__io__TypeInfo_for_T_17, mercury__io__Stream_7, mercury__io__Pred_8, mercury__io__T0_9, mercury__io__Res_10);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__binary_input_stream_foldl2_io_chunk_6_p_0(mercury__io__TypeInfo_for_T_17, mercury__io__Stream_7, mercury__io__Pred_8, mercury__io__T0_9, mercury__io__Res_10);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_5_p_1(
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__Pred_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__ShouldReduce_10;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_5_p_1

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_TRUE;
#else
    ShouldReduce = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__ShouldReduce_10  = ShouldReduce;
}
    switch (mercury__io__ShouldReduce_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__binary_input_stream_foldl_io_plain_5_p_1(mercury__io__Stream_6, mercury__io__Pred_7, mercury__io__Res_8);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__binary_input_stream_foldl_io_chunk_5_p_1(mercury__io__Stream_6, mercury__io__Pred_7, mercury__io__Res_8);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_5_p_0(
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__Pred_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__ShouldReduce_10;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_5_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_TRUE;
#else
    ShouldReduce = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__ShouldReduce_10  = ShouldReduce;
}
    switch (mercury__io__ShouldReduce_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__binary_input_stream_foldl_io_plain_5_p_0(mercury__io__Stream_6, mercury__io__Pred_7, mercury__io__Res_8);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__binary_input_stream_foldl_io_chunk_5_p_0(mercury__io__Stream_6, mercury__io__Pred_7, mercury__io__Res_8);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_6_p_1(
  MR_Word mercury__io__TypeInfo_for_T_20,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__ByteResult_12;
        MR_Integer mercury__io__Code_26;
        MR_Box mercury__io__Stream_37 = (MR_Box) mercury__io__Stream_7;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_1

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_37 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_26  = ByteVal;
}
        mercury__io__succeeded = (mercury__io__Code_26 >= (MR_Integer) 0);
        if (mercury__io__succeeded)
          {
            mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__Code_26));
          }
        else
          {
            mercury__io__succeeded = (mercury__io__Code_26 == (MR_Integer) -1);
            if (mercury__io__succeeded)
              mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_String mercury__io__Msg_27;
                MR_Word mercury__io__V_33_33;
                MR_Box mercury__io__Error_45;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_1

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_45 );
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_45 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_27  = Msg;
}
                mercury__io__V_33_33 = (MR_Word) mercury__io__Msg_27;
                {
                  mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__V_33_33));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__ByteResult_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__io__Res_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_9;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mercury__io__Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, (MR_Integer) 0)));
              MR_Box mercury__io__T1_14;
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_8, (MR_Integer) 1)));

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_8), ((MR_Box) (mercury__io__Byte_13)), mercury__io__T0_9, &mercury__io__T1_14);
              }
              /* direct tailcall eliminated */
              {
                MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_14;

                mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_9;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_15));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_6_p_0(
  MR_Word mercury__io__TypeInfo_for_T_20,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__ByteResult_12;
        MR_Integer mercury__io__Code_26;
        MR_Box mercury__io__Stream_37 = (MR_Box) mercury__io__Stream_7;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_0

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_37 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_26  = ByteVal;
}
        mercury__io__succeeded = (mercury__io__Code_26 >= (MR_Integer) 0);
        if (mercury__io__succeeded)
          {
            mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__Code_26));
          }
        else
          {
            mercury__io__succeeded = (mercury__io__Code_26 == (MR_Integer) -1);
            if (mercury__io__succeeded)
              mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_String mercury__io__Msg_27;
                MR_Word mercury__io__V_33_33;
                MR_Box mercury__io__Error_45;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_45 );
}
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_45 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_27  = Msg;
}
                mercury__io__V_33_33 = (MR_Word) mercury__io__Msg_27;
                {
                  mercury__io__ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, 0) = ((MR_Box) (mercury__io__V_33_33));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__ByteResult_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__io__Res_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_9;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mercury__io__Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__ByteResult_12, (MR_Integer) 0)));
              MR_Box mercury__io__T1_14;
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_8, (MR_Integer) 1)));

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_8), ((MR_Box) (mercury__io__Byte_13)), mercury__io__T0_9, &mercury__io__T1_14);
              }
              /* direct tailcall eliminated */
              {
                MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_14;

                mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__ByteResult_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_9;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_15));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_1(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Pred_6,
  MR_Box mercury__io__T0_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_10;
    MR_Box mercury__io__Stream_18;
    MR_Word mercury__io__ShouldReduce_28;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_18  = (MR_Box) Stream;
}
    mercury__io__Stream_10 = (MR_Word) mercury__io__Stream_18;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_1

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_TRUE;
#else
    ShouldReduce = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__ShouldReduce_28  = ShouldReduce;
}
    switch (mercury__io__ShouldReduce_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_1(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_0(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Pred_6,
  MR_Box mercury__io__T0_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_10;
    MR_Box mercury__io__Stream_18;
    MR_Word mercury__io__ShouldReduce_28;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_18  = (MR_Box) Stream;
}
    mercury__io__Stream_10 = (MR_Word) mercury__io__Stream_18;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_TRUE;
#else
    ShouldReduce = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__ShouldReduce_28  = ShouldReduce;
}
    switch (mercury__io__ShouldReduce_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_0(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_5_p_1(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Pred_6,
  MR_Box mercury__io__T0_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_10;
    MR_Box mercury__io__Stream_18;
    MR_Word mercury__io__ShouldReduce_28;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_18  = (MR_Box) Stream;
}
    mercury__io__Stream_10 = (MR_Word) mercury__io__Stream_18;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_5_p_1

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_TRUE;
#else
    ShouldReduce = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__ShouldReduce_28  = ShouldReduce;
}
    switch (mercury__io__ShouldReduce_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__binary_input_stream_foldl2_io_plain_6_p_1(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__binary_input_stream_foldl2_io_chunk_6_p_1(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_5_p_0(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Pred_6,
  MR_Box mercury__io__T0_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_10;
    MR_Box mercury__io__Stream_18;
    MR_Word mercury__io__ShouldReduce_28;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_18  = (MR_Box) Stream;
}
    mercury__io__Stream_10 = (MR_Word) mercury__io__Stream_18;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_5_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_TRUE;
#else
    ShouldReduce = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__ShouldReduce_28  = ShouldReduce;
}
    switch (mercury__io__ShouldReduce_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__binary_input_stream_foldl2_io_plain_6_p_0(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__binary_input_stream_foldl2_io_chunk_6_p_0(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_4_p_1(
  MR_Word mercury__io__Pred_5,
  MR_Word * mercury__io__Res_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_8;
    MR_Box mercury__io__Stream_15;
    MR_Word mercury__io__ShouldReduce_24;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_4_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_15  = (MR_Box) Stream;
}
    mercury__io__Stream_8 = (MR_Word) mercury__io__Stream_15;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_4_p_1

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_TRUE;
#else
    ShouldReduce = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__ShouldReduce_24  = ShouldReduce;
}
    switch (mercury__io__ShouldReduce_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__binary_input_stream_foldl_io_plain_5_p_1(mercury__io__Stream_8, mercury__io__Pred_5, mercury__io__Res_6);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__binary_input_stream_foldl_io_chunk_5_p_1(mercury__io__Stream_8, mercury__io__Pred_5, mercury__io__Res_6);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_4_p_0(
  MR_Word mercury__io__Pred_5,
  MR_Word * mercury__io__Res_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_8;
    MR_Box mercury__io__Stream_15;
    MR_Word mercury__io__ShouldReduce_24;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_15  = (MR_Box) Stream;
}
    mercury__io__Stream_8 = (MR_Word) mercury__io__Stream_15;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_4_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_TRUE;
#else
    ShouldReduce = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__ShouldReduce_24  = ShouldReduce;
}
    switch (mercury__io__ShouldReduce_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__binary_input_stream_foldl_io_plain_5_p_0(mercury__io__Stream_8, mercury__io__Pred_5, mercury__io__Res_6);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__binary_input_stream_foldl_io_chunk_5_p_0(mercury__io__Stream_8, mercury__io__Pred_5, mercury__io__Res_6);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_5_p_1(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Pred_6,
  MR_Box mercury__io__T0_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_10;
    MR_Box mercury__io__Stream_18;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_18  = (MR_Box) Stream;
}
    mercury__io__Stream_10 = (MR_Word) mercury__io__Stream_18;
    {
      mercury__io__binary_input_stream_foldl_6_p_1(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_5_p_0(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Pred_6,
  MR_Box mercury__io__T0_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_10;
    MR_Box mercury__io__Stream_18;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_18  = (MR_Box) Stream;
}
    mercury__io__Stream_10 = (MR_Word) mercury__io__Stream_18;
    {
      mercury__io__binary_input_stream_foldl_6_p_0(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
    }
  }
}

void MR_CALL 
mercury__io__read_binary_file_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__io__read_binary_file_2_5_p_0(mercury__io__Stream_5, mercury__io__V_10_10, mercury__io__Result_6);
    }
  }
}

void MR_CALL 
mercury__io__read_binary_file_3_p_0(
  MR_Word * mercury__io__Result_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_6;
    MR_Box mercury__io__Stream_13;
    MR_Word mercury__io__V_21_21;

{
#define MR_PROC_LABEL mercury__io__read_binary_file_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_13  = (MR_Box) Stream;
}
    mercury__io__Stream_6 = (MR_Word) mercury__io__Stream_13;
    mercury__io__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__io__read_binary_file_2_5_p_0(mercury__io__Stream_6, mercury__io__V_21_21, mercury__io__Result_4);
    }
  }
}

void MR_CALL 
mercury__io__read_binary_file_as_bitmap_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__FileSize_8;
    MR_Box mercury__io__Stream_39 = (MR_Box) mercury__io__Stream_5;

{
#define MR_PROC_LABEL mercury__io__read_binary_file_as_bitmap_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Size;

	Stream = (MercuryFilePtr) mercury__io__Stream_39 ;
		{

#if defined(MR_HAVE_FSTAT) &&         (defined(MR_HAVE_FILENO) || defined(fileno)) && defined(S_ISREG)
    struct stat s;
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (fstat(fileno(MR_file(*Stream)), &s) == 0 && S_ISREG(s.st_mode)) {
            Size = s.st_size;
        } else {
            Size = -1;
        }
    } else {
        Size = -1;
    }
#else
    Size = -1;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__FileSize_8  = Size;
}
    mercury__io__succeeded = (mercury__io__FileSize_8 >= (MR_Integer) 0);
    if (mercury__io__succeeded)
      {
        MR_Integer mercury__io__BytesRead_10;
        MR_Word mercury__io__ReadResult_11;
        MR_Box mercury__io__STATE_VARIABLE_BM_20_20;
        MR_Integer mercury__io__V_21_21 = (mercury__io__FileSize_8 * (MR_Integer) 8);
        MR_Box mercury__io__STATE_VARIABLE_BM_24_24;

        {
          mercury__io__STATE_VARIABLE_BM_20_20 = mercury__bitmap__init_2_f_0(mercury__io__V_21_21, (MR_Integer) 0);
        }
        {
          mercury__io__read_bitmap_9_p_0(mercury__io__Stream_5, (MR_Integer) 0, mercury__io__FileSize_8, mercury__io__STATE_VARIABLE_BM_20_20, &mercury__io__STATE_VARIABLE_BM_24_24, &mercury__io__BytesRead_10, &mercury__io__ReadResult_11);
        }
        if ((mercury__io__ReadResult_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__io__succeeded = (mercury__io__BytesRead_10 == mercury__io__FileSize_8);
            if (mercury__io__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__io__Result_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__STATE_VARIABLE_BM_24_24));
              }
            else
              {
                MR_Word mercury__io__V_26_26 = (MR_Word) ((MR_Box) ((MR_String) "io.read_binary_file_as_bitmap: incorrect file size"));

                *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_5[2]);
              }
          }
        else
          {
            MR_Word mercury__io__Msg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__ReadResult_11, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Result_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Msg_12));
            }
          }
      }
    else
      {
        MR_Word mercury__io__Res_14;
        MR_Word mercury__io__RevBitmaps_15;
        MR_Word mercury__io__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_98_105_110_97_114_121_95_102_105_108_101_95_97_115_95_98_105_116_109_97_112_95_50_95_95_91_49_93_95_48_7_p_0((MR_Integer) 4000, &mercury__io__Res_14, mercury__io__V_28_28, &mercury__io__RevBitmaps_15);
        }
        if ((mercury__io__Res_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mercury__io__TypeCtorInfo_35_35 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
            MR_Box mercury__io__V_30_30;
            MR_Word mercury__io__V_31_31;

            {
              mercury__list__reverse_2_p_0(mercury__io__TypeCtorInfo_35_35, mercury__io__RevBitmaps_15, &mercury__io__V_31_31);
            }
            {
              mercury__io__V_30_30 = mercury__bitmap__append_list_1_f_0(mercury__io__V_31_31);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__io__Result_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__V_30_30));
            }
          }
        else
          {
            MR_Word mercury__io__Msg_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Res_14, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Result_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Msg_32));
            }
          }
      }
  }
}

void MR_CALL 
mercury__io__read_binary_file_as_bitmap_3_p_0(
  MR_Word * mercury__io__Result_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_6;
    MR_Box mercury__io__Stream_13;

{
#define MR_PROC_LABEL mercury__io__read_binary_file_as_bitmap_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_13  = (MR_Box) Stream;
}
    mercury__io__Stream_6 = (MR_Word) mercury__io__Stream_13;
    {
      mercury__io__read_binary_file_as_bitmap_4_p_0(mercury__io__Stream_6, mercury__io__Result_4);
    }
  }
}

void MR_CALL 
mercury__io__read_bitmap_9_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer mercury__io__Start_11,
  MR_Integer mercury__io__NumBytes_12,
  MR_Box mercury__io__STATE_VARIABLE_Bitmap_0_19,
  MR_Box * mercury__io__STATE_VARIABLE_Bitmap_20,
  MR_Integer * mercury__io__BytesRead_14,
  MR_Word * mercury__io__Result_15)
{
  {
    MR_bool mercury__io__succeeded = (mercury__io__NumBytes_12 > (MR_Integer) 0);
    MR_Box mercury__io__Stream_10 = (MR_Box) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__V_24_24;
    MR_Integer mercury__io__V_25_25;
    MR_Integer mercury__io__V_26_26;

    if (mercury__io__succeeded)
      {
        {
          mercury__io__succeeded = mercury__bitmap__byte_in_range_2_p_0(mercury__io__STATE_VARIABLE_Bitmap_0_19, mercury__io__Start_11);
        }
        if (mercury__io__succeeded)
          {
            mercury__io__V_25_25 = (mercury__io__Start_11 + mercury__io__NumBytes_12);
            mercury__io__V_26_26 = (MR_Integer) 1;
            mercury__io__V_24_24 = (mercury__io__V_25_25 - mercury__io__V_26_26);
            {
              mercury__io__succeeded = mercury__bitmap__byte_in_range_2_p_0(mercury__io__STATE_VARIABLE_Bitmap_0_19, mercury__io__V_24_24);
            }
          }
      }
    if (mercury__io__succeeded)
      {
        MR_Integer mercury__io__ErrInt_17;
        MR_String mercury__io__ErrMsg_18;

{
#define MR_PROC_LABEL mercury__io__read_bitmap_9_p_0

	MercuryFilePtr Stream;
	MR_Integer StartByte;
	MR_Integer NumBytes;
	MR_BitmapPtr Bitmap0;
	MR_BitmapPtr Bitmap;
	MR_Integer BytesRead0;
	MR_Integer BytesRead;

	Stream = (MercuryFilePtr) mercury__io__Stream_10 ;
	StartByte =  mercury__io__Start_11 ;
	NumBytes =  mercury__io__NumBytes_12 ;
	Bitmap0 = (MR_BitmapPtr) mercury__io__STATE_VARIABLE_Bitmap_0_19 ;
	BytesRead0 =  (MR_Integer) 0 ;
		{

    Bitmap = Bitmap0,
    BytesRead = BytesRead0 +
                    MR_READ(*Stream, Bitmap->elements + StartByte, NumBytes);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__STATE_VARIABLE_Bitmap_20  = (MR_Box) Bitmap;
	 *mercury__io__BytesRead_14  = BytesRead;
}
{
#define MR_PROC_LABEL mercury__io__read_bitmap_9_p_0

	MercuryFilePtr Stream;
	MR_Integer RetVal;
	MR_String RetStr;

	Stream = (MercuryFilePtr) mercury__io__Stream_10 ;
		{

    if (MR_IS_FILE_STREAM(*Stream)) {
        RetVal = ferror(MR_file(*Stream));
    } else {
        RetVal = -1;
    }

    ML_maybe_make_err_msg(RetVal != 0, errno, "read failed: ",
        MR_ALLOC_ID, RetStr);


		;}
#undef MR_PROC_LABEL
	 mercury__io__ErrInt_17  = RetVal;
	 mercury__io__ErrMsg_18  = RetStr;
}
        mercury__io__succeeded = (mercury__io__ErrInt_17 == (MR_Integer) 0);
        if (mercury__io__succeeded)
          *mercury__io__Result_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word mercury__io__V_31_31 = (MR_Word) mercury__io__ErrMsg_18;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Result_15 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_31_31));
            }
          }
      }
    else
      {
        mercury__io__succeeded = (mercury__io__NumBytes_12 == (MR_Integer) 0);
        if (mercury__io__succeeded)
          {
            mercury__io__succeeded = mercury__bitmap__byte_in_range_2_p_0(mercury__io__STATE_VARIABLE_Bitmap_0_19, mercury__io__Start_11);
          }
        if (mercury__io__succeeded)
          {
            *mercury__io__Result_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__io__BytesRead_14 = (MR_Integer) 0;
          }
        else
          {
            MR_Integer mercury__io__V_33_33 = (mercury__io__Start_11 * (MR_Integer) 8);
            MR_Integer mercury__io__V_34_34 = (mercury__io__NumBytes_12 * (MR_Integer) 8);

            {
              mercury__bitmap__throw_bounds_error_4_p_0(mercury__io__STATE_VARIABLE_Bitmap_0_19, (MR_String) "io.read_bitmap", mercury__io__V_33_33, mercury__io__V_34_34);
              return;
            }
          }
        *mercury__io__STATE_VARIABLE_Bitmap_20 = mercury__io__STATE_VARIABLE_Bitmap_0_19;
      }
  }
}

void MR_CALL 
mercury__io__read_bitmap_8_p_0(
  MR_Integer mercury__io__StartByte_9,
  MR_Integer mercury__io__NumBytes_10,
  MR_Box mercury__io__STATE_VARIABLE_Bitmap_0_16,
  MR_Box * mercury__io__STATE_VARIABLE_Bitmap_17,
  MR_Integer * mercury__io__BytesRead_12,
  MR_Word * mercury__io__Result_13)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_15;
    MR_Box mercury__io__Stream_25;

{
#define MR_PROC_LABEL mercury__io__read_bitmap_8_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_25  = (MR_Box) Stream;
}
    mercury__io__Stream_15 = (MR_Word) mercury__io__Stream_25;
    {
      mercury__io__read_bitmap_9_p_0(mercury__io__Stream_15, mercury__io__StartByte_9, mercury__io__NumBytes_10, mercury__io__STATE_VARIABLE_Bitmap_0_16, mercury__io__STATE_VARIABLE_Bitmap_17, mercury__io__BytesRead_12, mercury__io__Result_13);
    }
  }
}

void MR_CALL 
mercury__io__read_bitmap_7_p_0(
  MR_Word mercury__io__Stream_8,
  MR_Box mercury__io__STATE_VARIABLE_Bitmap_0_14,
  MR_Box * mercury__io__STATE_VARIABLE_Bitmap_15,
  MR_Integer * mercury__io__BytesRead_10,
  MR_Word * mercury__io__Result_11)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__NumBytes_13;

    {
      mercury__io__succeeded = mercury__bitmap__num_bytes_1_f_0(mercury__io__STATE_VARIABLE_Bitmap_0_14, &mercury__io__NumBytes_13);
    }
    if (mercury__io__succeeded)
      {
        {
          mercury__io__read_bitmap_9_p_0(mercury__io__Stream_8, (MR_Integer) 0, mercury__io__NumBytes_13, mercury__io__STATE_VARIABLE_Bitmap_0_14, mercury__io__STATE_VARIABLE_Bitmap_15, mercury__io__BytesRead_10, mercury__io__Result_11);
        }
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "io.read_bitmap: bitmap contains partial final byte");
          return;
        }
      }
  }
}

void MR_CALL 
mercury__io__read_bitmap_6_p_0(
  MR_Box mercury__io__STATE_VARIABLE_Bitmap_0_12,
  MR_Box * mercury__io__STATE_VARIABLE_Bitmap_13,
  MR_Integer * mercury__io__BytesRead_8,
  MR_Word * mercury__io__Result_9)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_11;
    MR_Box mercury__io__Stream_21;
    MR_Integer mercury__io__NumBytes_33;

{
#define MR_PROC_LABEL mercury__io__read_bitmap_6_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_21  = (MR_Box) Stream;
}
    mercury__io__Stream_11 = (MR_Word) mercury__io__Stream_21;
    {
      mercury__io__succeeded = mercury__bitmap__num_bytes_1_f_0(mercury__io__STATE_VARIABLE_Bitmap_0_12, &mercury__io__NumBytes_33);
    }
    if (mercury__io__succeeded)
      {
        {
          mercury__io__read_bitmap_9_p_0(mercury__io__Stream_11, (MR_Integer) 0, mercury__io__NumBytes_33, mercury__io__STATE_VARIABLE_Bitmap_0_12, mercury__io__STATE_VARIABLE_Bitmap_13, mercury__io__BytesRead_8, mercury__io__Result_9);
        }
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "io.read_bitmap: bitmap contains partial final byte");
          return;
        }
      }
  }
}

void MR_CALL 
mercury__io__read_byte_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Code_8;
    MR_Box mercury__io__Stream_21 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__read_byte_4_p_0

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_21 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_8  = ByteVal;
}
    mercury__io__succeeded = (mercury__io__Code_8 >= (MR_Integer) 0);
    if (mercury__io__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mercury__io__Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Code_8));
      }
    else
      {
        mercury__io__succeeded = (mercury__io__Code_8 == (MR_Integer) -1);
        if (mercury__io__succeeded)
          *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_String mercury__io__Msg_9;
            MR_Word mercury__io__V_17_17;
            MR_Box mercury__io__Error_29;

{
#define MR_PROC_LABEL mercury__io__read_byte_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_29 );
}
{
#define MR_PROC_LABEL mercury__io__read_byte_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_29 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_9  = Msg;
}
            mercury__io__V_17_17 = (MR_Word) mercury__io__Msg_9;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Result_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__io__V_17_17));
            }
          }
      }
  }
}

void MR_CALL 
mercury__io__read_byte_3_p_0(
  MR_Word * mercury__io__Result_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Code_21;
    MR_Box mercury__io__Stream_32;

{
#define MR_PROC_LABEL mercury__io__read_byte_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_32  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__read_byte_3_p_0

	MercuryFilePtr Stream;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr) mercury__io__Stream_32 ;
		{

    ByteVal = mercury_get_byte(Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Code_21  = ByteVal;
}
    mercury__io__succeeded = (mercury__io__Code_21 >= (MR_Integer) 0);
    if (mercury__io__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mercury__io__Result_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Code_21));
      }
    else
      {
        mercury__io__succeeded = (mercury__io__Code_21 == (MR_Integer) -1);
        if (mercury__io__succeeded)
          *mercury__io__Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_String mercury__io__Msg_22;
            MR_Word mercury__io__V_28_28;
            MR_Box mercury__io__Error_40;

{
#define MR_PROC_LABEL mercury__io__read_byte_3_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_40 );
}
{
#define MR_PROC_LABEL mercury__io__read_byte_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_40 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_22  = Msg;
}
            mercury__io__V_28_28 = (MR_Word) mercury__io__Msg_22;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Result_4 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__io__V_28_28));
            }
          }
      }
  }
}

void MR_CALL 
mercury__io__read_binary_4_p_0(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__OrigStream_8;
    MR_Box mercury__io__NewStream_18 = (MR_Box) mercury__io__Stream_5;
    MR_Box mercury__io__OutStream_19;
    MR_Box mercury__io__NewStream_24;
    MR_Box mercury__io__OutStream_25;

{
#define MR_PROC_LABEL mercury__io__read_binary_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_18 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_19  = (MR_Box) OutStream;
}
    mercury__io__OrigStream_8 = (MR_Word) mercury__io__OutStream_19;
    {
      mercury__io__read_binary_3_p_0(mercury__io__TypeInfo_for_T_15, mercury__io__Result_6);
    }
    mercury__io__NewStream_24 = (MR_Box) mercury__io__OrigStream_8;
{
#define MR_PROC_LABEL mercury__io__read_binary_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_24 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_25  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__read_binary_3_p_0(
  MR_Word mercury__io__TypeInfo_for_T_27,
  MR_Word * mercury__io__Result_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__ReadResult_7;
    MR_Word mercury__io__V_18_18;
    MR_Word mercury__io__OrigStream_38;
    MR_Box mercury__io__NewStream_45;
    MR_Box mercury__io__OutStream_46;
    MR_Box mercury__io__NewStream_51;
    MR_Box mercury__io__OutStream_52;

{
#define MR_PROC_LABEL mercury__io__read_binary_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__NewStream_45  = (MR_Box) Stream;
}
    mercury__io__V_18_18 = (MR_Word) mercury__io__NewStream_45;
{
#define MR_PROC_LABEL mercury__io__read_binary_3_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_45 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_46  = (MR_Box) OutStream;
}
    mercury__io__OrigStream_38 = (MR_Word) mercury__io__OutStream_46;
    {
      mercury__io__read_3_p_0(mercury__io__TypeInfo_for_T_27, &mercury__io__ReadResult_7);
    }
    mercury__io__NewStream_51 = (MR_Box) mercury__io__OrigStream_38;
{
#define MR_PROC_LABEL mercury__io__read_binary_3_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_51 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_52  = (MR_Box) OutStream;
}
    switch (MR_tag((MR_Word) mercury__io__ReadResult_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__io__Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__io__T_8 = (MR_hl_field(MR_mktag(1), mercury__io__ReadResult_7, (MR_Integer) 0));
          MR_Word mercury__io__NewLineRes_9;
          MR_Integer mercury__io__Code_60;
          MR_Box mercury__io__Stream_70 = (MR_Box) mercury__io__V_18_18;

          {
            mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_70, &mercury__io__Code_60);
          }
          mercury__io__succeeded = (mercury__io__Code_60 == (MR_Integer) -1);
          if (mercury__io__succeeded)
            mercury__io__NewLineRes_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Char mercury__io__Char_61;

{
#define MR_PROC_LABEL mercury__io__read_binary_3_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_60 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_61  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
              if (mercury__io__succeeded)
                {
                  mercury__io__NewLineRes_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__io__NewLineRes_9, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_61));
                }
              else
                {
                  MR_String mercury__io__Msg_62;
                  MR_Word mercury__io__V_66_66;
                  MR_Box mercury__io__Error_78;

{
#define MR_PROC_LABEL mercury__io__read_binary_3_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_78 );
}
{
#define MR_PROC_LABEL mercury__io__read_binary_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_78 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_62  = Msg;
}
                  mercury__io__V_66_66 = (MR_Word) mercury__io__Msg_62;
                  {
                    mercury__io__NewLineRes_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__io__NewLineRes_9, 0) = ((MR_Box) (mercury__io__V_66_66));
                  }
                }
            }
          switch (MR_tag((MR_Word) mercury__io__NewLineRes_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mercury__io__V_23_23 = (MR_Word) ((MR_Box) ((MR_String) "io.read_binary: missing newline"));

                *mercury__io__Result_4 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__io_scalar_common_5[1]);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Char mercury__io__NewLineChar_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__NewLineRes_9, (MR_Integer) 0)));

                mercury__io__succeeded = (mercury__io__NewLineChar_11 == (MR_Char) 10);
                if (mercury__io__succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__io__Result_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T_8;
                  }
                else
                  {
                    MR_Word mercury__io__V_25_25 = (MR_Word) ((MR_Box) ((MR_String) "io.read_binary: missing newline"));

                    *mercury__io__Result_4 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__io_scalar_common_5[1]);
                  }
              }
              break;
            case (MR_Integer) 2:
              *mercury__io__Result_4 = mercury__io__NewLineRes_9;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String mercury__io__ErrorMsg_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__io__ReadResult_7, (MR_Integer) 0)));
          MR_Word mercury__io__V_20_20 = (MR_Word) mercury__io__ErrorMsg_12;
          MR_Integer mercury__io___Line_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__io__ReadResult_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Result_4 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__io__V_20_20));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__set_output_line_number_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer mercury__io__LineNum_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__set_output_line_number_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
	LineNum =  mercury__io__LineNum_6 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__set_output_line_number_3_p_0(
  MR_Integer mercury__io__LineNum_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__set_output_line_number_3_p_0

	MR_Integer LineNum;

	LineNum =  mercury__io__LineNum_1 ;
		{

    MR_line_number(*mercury_current_text_output()) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__get_output_line_number_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer * mercury__io__LineNum_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__get_output_line_number_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__LineNum_6  = LineNum;
}
  }
}

void MR_CALL 
mercury__io__get_output_line_number_3_p_0(
  MR_Integer * mercury__io__LineNum_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__get_output_line_number_3_p_0

	MR_Integer LineNum;

		{

    LineNum = MR_line_number(*mercury_current_text_output());


		;}
#undef MR_PROC_LABEL
	 *mercury__io__LineNum_1  = LineNum;
}
  }
}

void MR_CALL 
mercury__io__output_stream_name_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_String * mercury__io__Name_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__stream_name_4_p_0(mercury__io__Stream_5, mercury__io__Name_6);
    }
  }
}

void MR_CALL 
mercury__io__output_stream_name_3_p_0(
  MR_String * mercury__io__Name_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_6;

{
#define MR_PROC_LABEL mercury__io__output_stream_name_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_6  = (MR_Box) Stream;
}
    {
      mercury__io__stream_name_4_p_0(mercury__io__Stream_6, mercury__io__Name_4);
    }
  }
}

void MR_CALL 
mercury__io__stderr_stream_3_p_0(
  MR_Word * mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4;

{
#define MR_PROC_LABEL mercury__io__stderr_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_4  = (MR_Box) Stream;
}
    *mercury__io__HeadVar__1_1 = (MR_Word) mercury__io__Stream_4;
  }
}

MR_Word MR_CALL 
mercury__io__stderr_stream_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__HeadVar__1_1;
    MR_Box mercury__io__V_2_2;

{
#define MR_PROC_LABEL mercury__io__stderr_stream_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_2_2  = (MR_Box) Stream;
}
    mercury__io__HeadVar__1_1 = (MR_Word) mercury__io__V_2_2;
    return mercury__io__HeadVar__1_1;
  }
}

void MR_CALL 
mercury__io__stdout_stream_3_p_0(
  MR_Word * mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4;

{
#define MR_PROC_LABEL mercury__io__stdout_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_4  = (MR_Box) Stream;
}
    *mercury__io__HeadVar__1_1 = (MR_Word) mercury__io__Stream_4;
  }
}

MR_Word MR_CALL 
mercury__io__stdout_stream_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__HeadVar__1_1;
    MR_Box mercury__io__V_2_2;

{
#define MR_PROC_LABEL mercury__io__stdout_stream_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_2_2  = (MR_Box) Stream;
}
    mercury__io__HeadVar__1_1 = (MR_Word) mercury__io__V_2_2;
    return mercury__io__HeadVar__1_1;
  }
}

void MR_CALL 
mercury__io__set_output_stream_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word * mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__NewStream_5 = (MR_Box) mercury__io__HeadVar__1_1;
    MR_Box mercury__io__OutStream_6;

{
#define MR_PROC_LABEL mercury__io__set_output_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_5 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_6  = (MR_Box) OutStream;
}
    *mercury__io__HeadVar__2_2 = (MR_Word) mercury__io__OutStream_6;
  }
}

void MR_CALL 
mercury__io__output_stream_3_p_0(
  MR_Word * mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4;

{
#define MR_PROC_LABEL mercury__io__output_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_4  = (MR_Box) Stream;
}
    *mercury__io__HeadVar__1_1 = (MR_Word) mercury__io__Stream_4;
  }
}

void MR_CALL 
mercury__io__close_output_3_p_0(
  MR_Word mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__maybe_delete_stream_info_3_p_0(mercury__io__Stream_4);
    }
{
#define MR_PROC_LABEL mercury__io__close_output_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_4 ;
		{

    mercury_close(Stream);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__open_append_4_p_0(
  MR_String mercury__io__FileName_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Result0_8;
    MR_Integer mercury__io__OpenCount_9;
    MR_Box mercury__io__NewStream_10;

{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer ResultCode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;

	FileName =  mercury__io__FileName_5 ;
	Mode =  (MR_String) "a" ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        ResultCode = 0;
        StreamId = mercury_next_stream_id();
    } else {
        ResultCode = -1;
        StreamId = -1;
    }


		;}
#undef MR_PROC_LABEL
	 mercury__io__Result0_8  = ResultCode;
	 mercury__io__OpenCount_9  = StreamId;
	 mercury__io__NewStream_10  = (MR_Box) Stream;
}
    mercury__io__succeeded = (mercury__io__Result0_8 == (MR_Integer) -1);
    if (mercury__io__succeeded)
      {
        MR_String mercury__io__Msg_11;
        MR_Word mercury__io__V_18_18;
        MR_Box mercury__io__Error_30;

{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_30 );
}
{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_30 , Error);
	Msg0 =  (MR_String) "can\'t append to file: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_11  = Msg;
}
        mercury__io__V_18_18 = (MR_Word) mercury__io__Msg_11;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_18_18));
        }
      }
    else
      {
        MR_Word mercury__io__TypeCtorInfo_18_46;
        MR_Word mercury__io__TypeInfo_for_K_54;
        MR_Word mercury__io__V_19_19 = (MR_Word) mercury__io__NewStream_10;
        MR_Word mercury__io__V_20_20;
        MR_Word mercury__io__V_24_24;
        MR_Word mercury__io__StreamDb0_38;
        MR_Word mercury__io__StreamDb_39;
        MR_Integer mercury__io__V_42_42;

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__V_19_19));
        }
        {
          mercury__io__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__io__V_24_24, 0) = ((MR_Box) (mercury__io__FileName_5));
        }
        {
          mercury__io__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 0) = ((MR_Box) (mercury__io__OpenCount_9));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 1) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 3) = ((MR_Box) (mercury__io__V_24_24));
        }
{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	 mercury__io__StreamDb0_38  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) mercury__io__NewStream_10 ;
		{

#ifndef MR_NATIVE_GC
    /*
    ** Most of the time, we can just use the pointer to the stream
    ** as a unique identifier.
    */
    Id = (MR_Word) Stream;
#else
    /*
    ** For accurate GC we embed an ID in the MercuryFile
    ** and retrieve it here.
    */
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_42_42  = Id;
}
        mercury__io__TypeCtorInfo_18_46 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
        mercury__io__TypeInfo_for_K_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__tree234__set_4_p_0(mercury__io__TypeInfo_for_K_54, mercury__io__TypeCtorInfo_18_46, ((MR_Box) (mercury__io__V_42_42)), ((MR_Box) (mercury__io__V_20_20)), mercury__io__StreamDb0_38, &mercury__io__StreamDb_39);
        }
{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0

	MR_Word StreamDb;

	StreamDb =  mercury__io__StreamDb_39 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
      }
  }
}

void MR_CALL 
mercury__io__open_output_4_p_0(
  MR_String mercury__io__FileName_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Result0_8;
    MR_Integer mercury__io__OpenCount_9;
    MR_Box mercury__io__NewStream_10;

{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer ResultCode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;

	FileName =  mercury__io__FileName_5 ;
	Mode =  (MR_String) "w" ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        ResultCode = 0;
        StreamId = mercury_next_stream_id();
    } else {
        ResultCode = -1;
        StreamId = -1;
    }


		;}
#undef MR_PROC_LABEL
	 mercury__io__Result0_8  = ResultCode;
	 mercury__io__OpenCount_9  = StreamId;
	 mercury__io__NewStream_10  = (MR_Box) Stream;
}
    mercury__io__succeeded = (mercury__io__Result0_8 == (MR_Integer) -1);
    if (mercury__io__succeeded)
      {
        MR_String mercury__io__Msg_11;
        MR_Word mercury__io__V_18_18;
        MR_Box mercury__io__Error_30;

{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_30 );
}
{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_30 , Error);
	Msg0 =  (MR_String) "can\'t open output file: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_11  = Msg;
}
        mercury__io__V_18_18 = (MR_Word) mercury__io__Msg_11;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_18_18));
        }
      }
    else
      {
        MR_Word mercury__io__TypeCtorInfo_18_46;
        MR_Word mercury__io__TypeInfo_for_K_54;
        MR_Word mercury__io__V_19_19 = (MR_Word) mercury__io__NewStream_10;
        MR_Word mercury__io__V_20_20;
        MR_Word mercury__io__V_24_24;
        MR_Word mercury__io__StreamDb0_38;
        MR_Word mercury__io__StreamDb_39;
        MR_Integer mercury__io__V_42_42;

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__V_19_19));
        }
        {
          mercury__io__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__io__V_24_24, 0) = ((MR_Box) (mercury__io__FileName_5));
        }
        {
          mercury__io__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 0) = ((MR_Box) (mercury__io__OpenCount_9));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 3) = ((MR_Box) (mercury__io__V_24_24));
        }
{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	 mercury__io__StreamDb0_38  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) mercury__io__NewStream_10 ;
		{

#ifndef MR_NATIVE_GC
    /*
    ** Most of the time, we can just use the pointer to the stream
    ** as a unique identifier.
    */
    Id = (MR_Word) Stream;
#else
    /*
    ** For accurate GC we embed an ID in the MercuryFile
    ** and retrieve it here.
    */
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_42_42  = Id;
}
        mercury__io__TypeCtorInfo_18_46 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
        mercury__io__TypeInfo_for_K_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__tree234__set_4_p_0(mercury__io__TypeInfo_for_K_54, mercury__io__TypeCtorInfo_18_46, ((MR_Box) (mercury__io__V_42_42)), ((MR_Box) (mercury__io__V_20_20)), mercury__io__StreamDb0_38, &mercury__io__StreamDb_39);
        }
{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0

	MR_Word StreamDb;

	StreamDb =  mercury__io__StreamDb_39 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
      }
  }
}

void MR_CALL 
mercury__io__told_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__NewStream_18;
    MR_Box mercury__io__Stream_24;

{
#define MR_PROC_LABEL mercury__io__told_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	 mercury__io__NewStream_18  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__told_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_18 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_24  = (MR_Box) OutStream;
}
    {
      mercury__io__maybe_delete_stream_info_3_p_0(mercury__io__Stream_24);
    }
{
#define MR_PROC_LABEL mercury__io__told_2_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_24 ;
		{

    mercury_close(Stream);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__tell_4_p_0(
  MR_String mercury__io__File_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Result0_8;

    {
      mercury__io__open_output_4_p_0(mercury__io__File_5, &mercury__io__Result0_8);
    }
    if (((MR_tag((MR_Word) mercury__io__Result0_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__io__Msg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Result0_8, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Msg_11));
        }
      }
    else
      {
        MR_Word mercury__io__Stream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Result0_8, (MR_Integer) 0)));
        MR_Box mercury__io__NewStream_18 = (MR_Box) mercury__io__Stream_9;
        MR_Box mercury__io__OutStream_19;

{
#define MR_PROC_LABEL mercury__io__tell_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_18 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_19  = (MR_Box) OutStream;
}
        *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

void MR_CALL 
mercury__io__set_line_number_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer mercury__io__LineNum_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__set_line_number_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
	LineNum =  mercury__io__LineNum_6 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__set_line_number_3_p_0(
  MR_Integer mercury__io__LineNum_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__set_line_number_3_p_0

	MR_Integer LineNum;

	LineNum =  mercury__io__LineNum_1 ;
		{

    MR_line_number(*mercury_current_text_input()) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__get_line_number_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer * mercury__io__LineNum_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__get_line_number_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__io__LineNum_6  = LineNum;
}
  }
}

void MR_CALL 
mercury__io__get_line_number_3_p_0(
  MR_Integer * mercury__io__LineNum_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__get_line_number_3_p_0

	MR_Integer LineNum;

		{

    LineNum = MR_line_number(*mercury_current_text_input());


		;}
#undef MR_PROC_LABEL
	 *mercury__io__LineNum_1  = LineNum;
}
  }
}

void MR_CALL 
mercury__io__input_stream_name_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_String * mercury__io__Name_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__stream_name_4_p_0(mercury__io__Stream_5, mercury__io__Name_6);
    }
  }
}

void MR_CALL 
mercury__io__input_stream_name_3_p_0(
  MR_String * mercury__io__Name_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_6;

{
#define MR_PROC_LABEL mercury__io__input_stream_name_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_6  = (MR_Box) Stream;
}
    {
      mercury__io__stream_name_4_p_0(mercury__io__Stream_6, mercury__io__Name_4);
    }
  }
}

void MR_CALL 
mercury__io__stdin_stream_3_p_0(
  MR_Word * mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4;

{
#define MR_PROC_LABEL mercury__io__stdin_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_4  = (MR_Box) Stream;
}
    *mercury__io__HeadVar__1_1 = (MR_Word) mercury__io__Stream_4;
  }
}

MR_Word MR_CALL 
mercury__io__stdin_stream_0_f_0(void)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__HeadVar__1_1;
    MR_Box mercury__io__V_2_2;

{
#define MR_PROC_LABEL mercury__io__stdin_stream_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_2_2  = (MR_Box) Stream;
}
    mercury__io__HeadVar__1_1 = (MR_Word) mercury__io__V_2_2;
    return mercury__io__HeadVar__1_1;
  }
}

void MR_CALL 
mercury__io__set_input_stream_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word * mercury__io__HeadVar__2_2)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__NewStream_5 = (MR_Box) mercury__io__HeadVar__1_1;
    MR_Box mercury__io__OutStream_6;

{
#define MR_PROC_LABEL mercury__io__set_input_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_5 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_6  = (MR_Box) OutStream;
}
    *mercury__io__HeadVar__2_2 = (MR_Word) mercury__io__OutStream_6;
  }
}

void MR_CALL 
mercury__io__input_stream_3_p_0(
  MR_Word * mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4;

{
#define MR_PROC_LABEL mercury__io__input_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_4  = (MR_Box) Stream;
}
    *mercury__io__HeadVar__1_1 = (MR_Word) mercury__io__Stream_4;
  }
}

void MR_CALL 
mercury__io__close_input_3_p_0(
  MR_Word mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__maybe_delete_stream_info_3_p_0(mercury__io__Stream_4);
    }
{
#define MR_PROC_LABEL mercury__io__close_input_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_4 ;
		{

    mercury_close(Stream);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__open_input_4_p_0(
  MR_String mercury__io__FileName_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Result0_8;
    MR_Integer mercury__io__OpenCount_9;
    MR_Box mercury__io__NewStream_10;

{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer ResultCode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;

	FileName =  mercury__io__FileName_5 ;
	Mode =  (MR_String) "r" ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        ResultCode = 0;
        StreamId = mercury_next_stream_id();
    } else {
        ResultCode = -1;
        StreamId = -1;
    }


		;}
#undef MR_PROC_LABEL
	 mercury__io__Result0_8  = ResultCode;
	 mercury__io__OpenCount_9  = StreamId;
	 mercury__io__NewStream_10  = (MR_Box) Stream;
}
    mercury__io__succeeded = (mercury__io__Result0_8 == (MR_Integer) -1);
    if (mercury__io__succeeded)
      {
        MR_String mercury__io__Msg_11;
        MR_Word mercury__io__V_18_18;
        MR_Box mercury__io__Error_30;

{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_30 );
}
{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_30 , Error);
	Msg0 =  (MR_String) "can\'t open input file: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_11  = Msg;
}
        mercury__io__V_18_18 = (MR_Word) mercury__io__Msg_11;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_18_18));
        }
      }
    else
      {
        MR_Word mercury__io__TypeCtorInfo_18_46;
        MR_Word mercury__io__TypeInfo_for_K_54;
        MR_Word mercury__io__V_19_19 = (MR_Word) mercury__io__NewStream_10;
        MR_Word mercury__io__V_20_20;
        MR_Word mercury__io__V_24_24;
        MR_Word mercury__io__StreamDb0_38;
        MR_Word mercury__io__StreamDb_39;
        MR_Integer mercury__io__V_42_42;

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__V_19_19));
        }
        {
          mercury__io__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__io__V_24_24, 0) = ((MR_Box) (mercury__io__FileName_5));
        }
        {
          mercury__io__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 0) = ((MR_Box) (mercury__io__OpenCount_9));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), mercury__io__V_20_20, 3) = ((MR_Box) (mercury__io__V_24_24));
        }
{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	 mercury__io__StreamDb0_38  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) mercury__io__NewStream_10 ;
		{

#ifndef MR_NATIVE_GC
    /*
    ** Most of the time, we can just use the pointer to the stream
    ** as a unique identifier.
    */
    Id = (MR_Word) Stream;
#else
    /*
    ** For accurate GC we embed an ID in the MercuryFile
    ** and retrieve it here.
    */
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__V_42_42  = Id;
}
        mercury__io__TypeCtorInfo_18_46 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
        mercury__io__TypeInfo_for_K_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__tree234__set_4_p_0(mercury__io__TypeInfo_for_K_54, mercury__io__TypeCtorInfo_18_46, ((MR_Box) (mercury__io__V_42_42)), ((MR_Box) (mercury__io__V_20_20)), mercury__io__StreamDb0_38, &mercury__io__StreamDb_39);
        }
{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0

	MR_Word StreamDb;

	StreamDb =  mercury__io__StreamDb_39 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
      }
  }
}

void MR_CALL 
mercury__io__seen_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__NewStream_18;
    MR_Box mercury__io__Stream_24;

{
#define MR_PROC_LABEL mercury__io__seen_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	 mercury__io__NewStream_18  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__seen_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_18 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_24  = (MR_Box) OutStream;
}
    {
      mercury__io__maybe_delete_stream_info_3_p_0(mercury__io__Stream_24);
    }
{
#define MR_PROC_LABEL mercury__io__seen_2_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_24 ;
		{

    mercury_close(Stream);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__see_4_p_0(
  MR_String mercury__io__File_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Result0_8;

    {
      mercury__io__open_input_4_p_0(mercury__io__File_5, &mercury__io__Result0_8);
    }
    if (((MR_tag((MR_Word) mercury__io__Result0_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__io__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Result0_8, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__io__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Error_11));
        }
      }
    else
      {
        MR_Word mercury__io__Stream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__io__Result0_8, (MR_Integer) 0)));
        MR_Box mercury__io__NewStream_18 = (MR_Box) mercury__io__Stream_9;
        MR_Box mercury__io__OutStream_19;

{
#define MR_PROC_LABEL mercury__io__see_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_18 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_19  = (MR_Box) OutStream;
}
        *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

void MR_CALL 
mercury__io__flush_output_3_p_0(
  MR_Word mercury__io__HeadVar__1_1)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_4 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__flush_output_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_4 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__flush_output_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__flush_output_2_p_0


		{

    MercuryFilePtr out = mercury_current_text_output();
    if (MR_FLUSH(*out) < 0) {
        mercury_output_error(out, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_array_6_p_1(
  MR_Word mercury__io__TypeInfo_for_T_19,
  MR_Word mercury__io__Stream_7,
  MR_ArrayPtr mercury__io__Array_8,
  MR_String mercury__io__Separator_9,
  MR_Word mercury__io__OutputPred_10)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__OrigStream_12;
    MR_Box mercury__io__NewStream_22 = (MR_Box) mercury__io__Stream_7;
    MR_Box mercury__io__OutStream_23;
    MR_Box mercury__io__NewStream_28;
    MR_Box mercury__io__OutStream_29;

{
#define MR_PROC_LABEL mercury__io__write_array_6_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_22 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_23  = (MR_Box) OutStream;
}
    mercury__io__OrigStream_12 = (MR_Word) mercury__io__OutStream_23;
    {
      mercury__io__write_array_5_p_1(mercury__io__TypeInfo_for_T_19, mercury__io__Array_8, mercury__io__Separator_9, mercury__io__OutputPred_10);
    }
    mercury__io__NewStream_28 = (MR_Box) mercury__io__OrigStream_12;
{
#define MR_PROC_LABEL mercury__io__write_array_6_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_28 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_29  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__write_array_6_p_0(
  MR_Word mercury__io__TypeInfo_for_T_19,
  MR_Word mercury__io__Stream_7,
  MR_ArrayPtr mercury__io__Array_8,
  MR_String mercury__io__Separator_9,
  MR_Word mercury__io__OutputPred_10)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__OrigStream_12;
    MR_Box mercury__io__NewStream_22 = (MR_Box) mercury__io__Stream_7;
    MR_Box mercury__io__OutStream_23;
    MR_Box mercury__io__NewStream_28;
    MR_Box mercury__io__OutStream_29;

{
#define MR_PROC_LABEL mercury__io__write_array_6_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_22 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_23  = (MR_Box) OutStream;
}
    mercury__io__OrigStream_12 = (MR_Word) mercury__io__OutStream_23;
    {
      mercury__io__write_array_5_p_0(mercury__io__TypeInfo_for_T_19, mercury__io__Array_8, mercury__io__Separator_9, mercury__io__OutputPred_10);
    }
    mercury__io__NewStream_28 = (MR_Box) mercury__io__OrigStream_12;
{
#define MR_PROC_LABEL mercury__io__write_array_6_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_28 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_29  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__write_array_5_p_1(
  MR_Word mercury__io__TypeInfo_for_T_19,
  MR_ArrayPtr mercury__io__Array_6,
  MR_String mercury__io__Separator_7,
  MR_Word mercury__io__OutputPred_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Lo_10;
    MR_Integer mercury__io__Hi_11;
    MR_Word mercury__io__TypeInfo_for_T_23;
    MR_Word mercury__io__TypeInfo_for_T_24;

{
#define MR_PROC_LABEL mercury__io__write_array_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__io__Array_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Lo_10  = Min;
}
{
#define MR_PROC_LABEL mercury__io__write_array_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__io__Array_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Hi_11  = Max;
}
    mercury__io__succeeded = (mercury__io__Lo_10 <= mercury__io__Hi_11);
    if (mercury__io__succeeded)
      {
        MR_Box mercury__io__E_12;
        MR_Integer mercury__io__V_16_16;
        MR_Word mercury__io__TypeInfo_for_T_25;
        void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box mercury__io__conv1_STATE_VARIABLE_IO_15_15;

{
#define MR_PROC_LABEL mercury__io__write_array_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__io__Array_6 , Array);
	Index =  mercury__io__Lo_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__io__E_12  = (MR_Box) Item;
}
        mercury__io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__OutputPred_8, (MR_Integer) 1)));
        {
          mercury__io__func_0(((MR_Box) mercury__io__OutputPred_8), mercury__io__E_12, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_15_15);
        }
        mercury__io__V_16_16 = (mercury__io__Lo_10 + (MR_Integer) 1);
        {
          mercury__io__do_write_array_7_p_1(mercury__io__TypeInfo_for_T_19, mercury__io__Array_6, mercury__io__Separator_7, mercury__io__OutputPred_8, mercury__io__V_16_16, mercury__io__Hi_11);
        }
      }
    else
      {
      }
  }
}

void MR_CALL 
mercury__io__write_array_5_p_0(
  MR_Word mercury__io__TypeInfo_for_T_19,
  MR_ArrayPtr mercury__io__Array_6,
  MR_String mercury__io__Separator_7,
  MR_Word mercury__io__OutputPred_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Lo_10;
    MR_Integer mercury__io__Hi_11;
    MR_Word mercury__io__TypeInfo_for_T_23;
    MR_Word mercury__io__TypeInfo_for_T_24;

{
#define MR_PROC_LABEL mercury__io__write_array_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__io__Array_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Lo_10  = Min;
}
{
#define MR_PROC_LABEL mercury__io__write_array_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__io__Array_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__io__Hi_11  = Max;
}
    mercury__io__succeeded = (mercury__io__Lo_10 <= mercury__io__Hi_11);
    if (mercury__io__succeeded)
      {
        MR_Box mercury__io__E_12;
        MR_Integer mercury__io__V_16_16;
        MR_Word mercury__io__TypeInfo_for_T_25;
        void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box mercury__io__conv1_STATE_VARIABLE_IO_15_15;

{
#define MR_PROC_LABEL mercury__io__write_array_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__io__Array_6 , Array);
	Index =  mercury__io__Lo_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__io__E_12  = (MR_Box) Item;
}
        mercury__io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__OutputPred_8, (MR_Integer) 1)));
        {
          mercury__io__func_0(((MR_Box) mercury__io__OutputPred_8), mercury__io__E_12, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_15_15);
        }
        mercury__io__V_16_16 = (mercury__io__Lo_10 + (MR_Integer) 1);
        {
          mercury__io__do_write_array_7_p_0(mercury__io__TypeInfo_for_T_19, mercury__io__Array_6, mercury__io__Separator_7, mercury__io__OutputPred_8, mercury__io__V_16_16, mercury__io__Hi_11);
        }
      }
    else
      {
      }
  }
}

void MR_CALL 
mercury__io__write_list_6_p_1(
  MR_Word mercury__io__TypeInfo_for_T_19,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__List_8,
  MR_String mercury__io__Separator_9,
  MR_Word mercury__io__OutputPred_10)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__OrigStream_12;
    MR_Box mercury__io__NewStream_22 = (MR_Box) mercury__io__Stream_7;
    MR_Box mercury__io__OutStream_23;
    MR_Box mercury__io__NewStream_28;
    MR_Box mercury__io__OutStream_29;

{
#define MR_PROC_LABEL mercury__io__write_list_6_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_22 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_23  = (MR_Box) OutStream;
}
    mercury__io__OrigStream_12 = (MR_Word) mercury__io__OutStream_23;
    {
      mercury__io__write_list_5_p_1(mercury__io__TypeInfo_for_T_19, mercury__io__List_8, mercury__io__Separator_9, mercury__io__OutputPred_10);
    }
    mercury__io__NewStream_28 = (MR_Box) mercury__io__OrigStream_12;
{
#define MR_PROC_LABEL mercury__io__write_list_6_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_28 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_29  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__write_list_6_p_0(
  MR_Word mercury__io__TypeInfo_for_T_19,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__List_8,
  MR_String mercury__io__Separator_9,
  MR_Word mercury__io__OutputPred_10)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__OrigStream_12;
    MR_Box mercury__io__NewStream_22 = (MR_Box) mercury__io__Stream_7;
    MR_Box mercury__io__OutStream_23;
    MR_Box mercury__io__NewStream_28;
    MR_Box mercury__io__OutStream_29;

{
#define MR_PROC_LABEL mercury__io__write_list_6_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_22 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_23  = (MR_Box) OutStream;
}
    mercury__io__OrigStream_12 = (MR_Word) mercury__io__OutStream_23;
    {
      mercury__io__write_list_5_p_0(mercury__io__TypeInfo_for_T_19, mercury__io__List_8, mercury__io__Separator_9, mercury__io__OutputPred_10);
    }
    mercury__io__NewStream_28 = (MR_Box) mercury__io__OrigStream_12;
{
#define MR_PROC_LABEL mercury__io__write_list_6_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_28 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_29  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__write_list_5_p_1(
  MR_Word mercury__io__TypeInfo_for_T_22,
  MR_Word mercury__io__HeadVar__1_1,
  MR_String mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;

    if ((mercury__io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Box mercury__io__Head_11 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__io__Tail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 1)));
        void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__3_3, (MR_Integer) 1)));
        MR_Box mercury__io__conv1_STATE_VARIABLE_IO_20_20;

        {
          mercury__io__func_0(((MR_Box) mercury__io__HeadVar__3_3), mercury__io__Head_11, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_20_20);
        }
        if ((mercury__io__Tail_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Box mercury__io__TailHead_16 = (MR_hl_field(MR_mktag(1), mercury__io__Tail_12, (MR_Integer) 0));
            MR_Word mercury__io__TailTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Tail_12, (MR_Integer) 1)));

            {
              mercury__io__write_list_lag_6_p_1(mercury__io__TypeInfo_for_T_22, mercury__io__TailHead_16, mercury__io__TailTail_17, mercury__io__HeadVar__2_2, mercury__io__HeadVar__3_3);
            }
          }
      }
  }
}

void MR_CALL 
mercury__io__write_list_5_p_0(
  MR_Word mercury__io__TypeInfo_for_T_22,
  MR_Word mercury__io__HeadVar__1_1,
  MR_String mercury__io__HeadVar__2_2,
  MR_Word mercury__io__HeadVar__3_3)
{
  {
    MR_bool mercury__io__succeeded;

    if ((mercury__io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Box mercury__io__Head_11 = (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__io__Tail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__1_1, (MR_Integer) 1)));
        void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__HeadVar__3_3, (MR_Integer) 1)));
        MR_Box mercury__io__conv1_STATE_VARIABLE_IO_20_20;

        {
          mercury__io__func_0(((MR_Box) mercury__io__HeadVar__3_3), mercury__io__Head_11, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_20_20);
        }
        if ((mercury__io__Tail_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Box mercury__io__TailHead_16 = (MR_hl_field(MR_mktag(1), mercury__io__Tail_12, (MR_Integer) 0));
            MR_Word mercury__io__TailTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Tail_12, (MR_Integer) 1)));

            {
              mercury__io__write_list_lag_6_p_0(mercury__io__TypeInfo_for_T_22, mercury__io__TailHead_16, mercury__io__TailTail_17, mercury__io__HeadVar__2_2, mercury__io__HeadVar__3_3);
            }
          }
      }
  }
}

void MR_CALL 
mercury__io__write_many_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;

        if ((mercury__io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word mercury__io__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__io__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__io__V_46_46)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Float mercury__io__F_37 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__io__V_46_46, (MR_Integer) 0)));
                  MR_Box mercury__io__Stream_56 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__write_many_4_p_0

	MercuryFilePtr Stream;
	MR_Float Val;

	Stream = (MercuryFilePtr) mercury__io__Stream_56 ;
	Val =  mercury__io__F_37 ;
		{

    char buf[MR_SPRINTF_FLOAT_BUF_SIZE];
    MR_sprintf_float(buf, Val);
    if (ML_fprintf(Stream, "%s", buf) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__io__HeadVar__2__tmp_copy_2 = mercury__io__V_45_45;

                    mercury__io__HeadVar__2_2 = mercury__io__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__io__I_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__io__V_46_46, (MR_Integer) 0)));
                  MR_Box mercury__io__Stream_69 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__write_many_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;

	Stream = (MercuryFilePtr) mercury__io__Stream_69 ;
	Val =  mercury__io__I_19 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__io__HeadVar__2__tmp_copy_2 = mercury__io__V_45_45;

                    mercury__io__HeadVar__2_2 = mercury__io__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String mercury__io__S_28 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__io__V_46_46, (MR_Integer) 0)));
                  MR_Box mercury__io__Stream_75 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__write_many_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;

	Stream = (MercuryFilePtr) mercury__io__Stream_75 ;
	Message =  mercury__io__S_28 ;
		{

    mercury_print_string(Stream, Message);


		;}
#undef MR_PROC_LABEL
}
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__io__HeadVar__2__tmp_copy_2 = mercury__io__V_45_45;

                    mercury__io__HeadVar__2_2 = mercury__io__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Char mercury__io__C_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__io__V_46_46, (MR_Integer) 0)));
                  MR_Box mercury__io__Stream_50 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__write_many_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_50 ;
	Character =  mercury__io__C_10 ;
		{

    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            mercury_output_error(Stream, errno);
        }
        if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                mercury_output_error(Stream, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__io__HeadVar__2__tmp_copy_2 = mercury__io__V_45_45;

                    mercury__io__HeadVar__2_2 = mercury__io__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
                break;
            }
          }
      }
      break;
    }
}

void MR_CALL 
mercury__io__write_many_3_p_0(
  MR_Word mercury__io__Poly_list_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_6;
    MR_Box mercury__io__Stream_13;

{
#define MR_PROC_LABEL mercury__io__write_many_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_13  = (MR_Box) Stream;
}
    mercury__io__Stream_6 = (MR_Word) mercury__io__Stream_13;
    {
      mercury__io__write_many_4_p_0(mercury__io__Stream_6, mercury__io__Poly_list_4);
    }
  }
}

void MR_CALL 
mercury__io__format_5_p_0(
  MR_Word mercury__io__Stream_6,
  MR_String mercury__io__FormatString_7,
  MR_Word mercury__io__Arguments_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_String mercury__io__String_10;
    MR_Box mercury__io__Stream_20;

    {
      mercury__string__format__format_impl_3_p_0(mercury__io__FormatString_7, mercury__io__Arguments_8, &mercury__io__String_10);
    }
    mercury__io__Stream_20 = (MR_Box) mercury__io__Stream_6;
{
#define MR_PROC_LABEL mercury__io__format_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;

	Stream = (MercuryFilePtr) mercury__io__Stream_20 ;
	Message =  mercury__io__String_10 ;
		{

    mercury_print_string(Stream, Message);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__format_4_p_0(
  MR_String mercury__io__FormatString_5,
  MR_Word mercury__io__Arguments_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_8;
    MR_Box mercury__io__Stream_15;
    MR_String mercury__io__String_24;
    MR_Box mercury__io__Stream_32;

{
#define MR_PROC_LABEL mercury__io__format_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_15  = (MR_Box) Stream;
}
    mercury__io__Stream_8 = (MR_Word) mercury__io__Stream_15;
    {
      mercury__string__format__format_impl_3_p_0(mercury__io__FormatString_5, mercury__io__Arguments_6, &mercury__io__String_24);
    }
    mercury__io__Stream_32 = (MR_Box) mercury__io__Stream_8;
{
#define MR_PROC_LABEL mercury__io__format_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;

	Stream = (MercuryFilePtr) mercury__io__Stream_32 ;
	Message =  mercury__io__String_24 ;
		{

    mercury_print_string(Stream, Message);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_float_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Float mercury__io__Val_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__write_float_4_p_0

	MercuryFilePtr Stream;
	MR_Float Val;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
	Val =  mercury__io__Val_6 ;
		{

    char buf[MR_SPRINTF_FLOAT_BUF_SIZE];
    MR_sprintf_float(buf, Val);
    if (ML_fprintf(Stream, "%s", buf) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_float_3_p_0(
  MR_Float mercury__io__Val_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__write_float_3_p_0

	MR_Float Val;

	Val =  mercury__io__Val_1 ;
		{

    char buf[MR_SPRINTF_FLOAT_BUF_SIZE];
    MercuryFilePtr out;

    MR_sprintf_float(buf, Val);
    out = mercury_current_text_output();
    if (ML_fprintf(out, "%s", buf) < 0) {
        mercury_output_error(out, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_int_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Integer mercury__io__Val_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__write_int_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
	Val =  mercury__io__Val_6 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        mercury_output_error(Stream, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_int_3_p_0(
  MR_Integer mercury__io__Val_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__write_int_3_p_0

	MR_Integer Val;

	Val =  mercury__io__Val_1 ;
		{

    MercuryFilePtr out = mercury_current_text_output();
    if (ML_fprintf(out, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        mercury_output_error(out, errno);
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_char_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Char mercury__io__Character_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__write_char_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
	Character =  mercury__io__Character_6 ;
		{

    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            mercury_output_error(Stream, errno);
        }
        if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                mercury_output_error(Stream, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_char_3_p_0(
  MR_Char mercury__io__Character_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__write_char_3_p_0

	MR_Char Character;

	Character =  mercury__io__Character_1 ;
		{

    MercuryFilePtr out = mercury_current_text_output();
    char    buf[5];
    size_t  len;
    size_t  i;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*out, Character) < 0) {
            mercury_output_error(out, errno);
        }
        if (Character == '\n') {
            MR_line_number(*out)++;
        }
    } else {
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*out, buf[i]) < 0) {
                mercury_output_error(out, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_strings_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word mercury__io__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;

        if ((mercury__io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String mercury__io__S_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__io__Ss_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__io__Stream_20 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__write_strings_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;

	Stream = (MercuryFilePtr) mercury__io__Stream_20 ;
	Message =  mercury__io__S_10 ;
		{

    mercury_print_string(Stream, Message);


		;}
#undef MR_PROC_LABEL
}
            /* direct tailcall eliminated */
            {
              MR_Word mercury__io__HeadVar__2__tmp_copy_2 = mercury__io__Ss_11;

              mercury__io__HeadVar__2_2 = mercury__io__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__io__write_strings_3_p_0(
  MR_Word mercury__io__Strings_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_6;
    MR_Box mercury__io__Stream_13;

{
#define MR_PROC_LABEL mercury__io__write_strings_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_13  = (MR_Box) Stream;
}
    mercury__io__Stream_6 = (MR_Word) mercury__io__Stream_13;
    {
      mercury__io__write_strings_4_p_0(mercury__io__Stream_6, mercury__io__Strings_4);
    }
  }
}

void MR_CALL 
mercury__io__write_string_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_String mercury__io__Message_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__write_string_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
	Message =  mercury__io__Message_6 ;
		{

    mercury_print_string(Stream, Message);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_string_3_p_0(
  MR_String mercury__io__Message_1)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__write_string_3_p_0

	MR_String Message;

	Message =  mercury__io__Message_1 ;
		{

    mercury_print_string(mercury_current_text_output(), Message);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__nl_3_p_0(
  MR_Word mercury__io__Stream_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_13 = (MR_Box) mercury__io__Stream_4;

{
#define MR_PROC_LABEL mercury__io__nl_3_p_0

	MercuryFilePtr Stream;
	MR_Char Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_13 ;
	Character =  (MR_Char) 10 ;
		{

    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            mercury_output_error(Stream, errno);
        }
        if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                mercury_output_error(Stream, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__nl_2_p_0(void)
{
  {
    MR_bool mercury__io__succeeded;

{
#define MR_PROC_LABEL mercury__io__nl_2_p_0

	MR_Char Character;

	Character =  (MR_Char) 10 ;
		{

    MercuryFilePtr out = mercury_current_text_output();
    char    buf[5];
    size_t  len;
    size_t  i;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*out, Character) < 0) {
            mercury_output_error(out, errno);
        }
        if (Character == '\n') {
            MR_line_number(*out)++;
        }
    } else {
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*out, buf[i]) < 0) {
                mercury_output_error(out, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_line_cc_3_p_0(
  MR_Word mercury__io__TypeInfo_for_T_10,
  MR_Box mercury__io__X_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_19;
    MR_Word mercury__io__TypeClassInfo_for_writer_20;
    MR_Word mercury__io__Stream_15;
    MR_Box mercury__io__Stream_23;
    MR_Word mercury__io__V_10_31;

{
#define MR_PROC_LABEL mercury__io__write_line_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_23  = (MR_Box) Stream;
}
    mercury__io__Stream_15 = (MR_Word) mercury__io__Stream_23;
    mercury__io__TypeClassInfo_for_writer_19 = (MR_Word) &mercury__io_scalar_common_3[0];
    mercury__io__TypeClassInfo_for_writer_20 = (MR_Word) &mercury__io_scalar_common_3[1];
    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_10, mercury__io__X_4, &mercury__io__V_10_31);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(mercury__io__TypeClassInfo_for_writer_19, mercury__io__TypeClassInfo_for_writer_20, mercury__io__Stream_15, (MR_Integer) 2, mercury__io__V_10_31);
    }
{
#define MR_PROC_LABEL mercury__io__write_line_cc_3_p_0

	MR_Char Character;

	Character =  (MR_Char) 10 ;
		{

    MercuryFilePtr out = mercury_current_text_output();
    char    buf[5];
    size_t  len;
    size_t  i;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*out, Character) < 0) {
            mercury_output_error(out, errno);
        }
        if (Character == '\n') {
            MR_line_number(*out)++;
        }
    } else {
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*out, buf[i]) < 0) {
                mercury_output_error(out, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_line_5_p_3(
  MR_Word mercury__io__TypeInfo_for_T_14,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__X_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word mercury__io__V_10_29;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_14, mercury__io__X_8, &mercury__io__V_10_29);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(mercury__io__TypeClassInfo_for_writer_22, mercury__io__TypeClassInfo_for_writer_23, mercury__io__Stream_6, mercury__io__NonCanon_7, mercury__io__V_10_29);
    }
{
#define MR_PROC_LABEL mercury__io__write_line_5_p_3

	MR_Char Character;

	Character =  (MR_Char) 10 ;
		{

    MercuryFilePtr out = mercury_current_text_output();
    char    buf[5];
    size_t  len;
    size_t  i;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*out, Character) < 0) {
            mercury_output_error(out, errno);
        }
        if (Character == '\n') {
            MR_line_number(*out)++;
        }
    } else {
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*out, buf[i]) < 0) {
                mercury_output_error(out, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_line_5_p_2(
  MR_Word mercury__io__TypeInfo_for_T_14,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__X_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word mercury__io__V_10_29;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_14, mercury__io__X_8, &mercury__io__V_10_29);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(mercury__io__TypeClassInfo_for_writer_22, mercury__io__TypeClassInfo_for_writer_23, mercury__io__Stream_6, mercury__io__NonCanon_7, mercury__io__V_10_29);
    }
{
#define MR_PROC_LABEL mercury__io__write_line_5_p_2

	MR_Char Character;

	Character =  (MR_Char) 10 ;
		{

    MercuryFilePtr out = mercury_current_text_output();
    char    buf[5];
    size_t  len;
    size_t  i;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*out, Character) < 0) {
            mercury_output_error(out, errno);
        }
        if (Character == '\n') {
            MR_line_number(*out)++;
        }
    } else {
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*out, buf[i]) < 0) {
                mercury_output_error(out, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_line_5_p_1(
  MR_Word mercury__io__TypeInfo_for_T_14,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__X_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word mercury__io__V_10_29;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_14, mercury__io__X_8, &mercury__io__V_10_29);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(mercury__io__TypeClassInfo_for_writer_22, mercury__io__TypeClassInfo_for_writer_23, mercury__io__Stream_6, mercury__io__NonCanon_7, mercury__io__V_10_29);
    }
{
#define MR_PROC_LABEL mercury__io__write_line_5_p_1

	MR_Char Character;

	Character =  (MR_Char) 10 ;
		{

    MercuryFilePtr out = mercury_current_text_output();
    char    buf[5];
    size_t  len;
    size_t  i;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*out, Character) < 0) {
            mercury_output_error(out, errno);
        }
        if (Character == '\n') {
            MR_line_number(*out)++;
        }
    } else {
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*out, buf[i]) < 0) {
                mercury_output_error(out, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_line_5_p_0(
  MR_Word mercury__io__TypeInfo_for_T_14,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__X_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word mercury__io__V_10_29;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_14, mercury__io__X_8, &mercury__io__V_10_29);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__io__TypeClassInfo_for_writer_22, mercury__io__TypeClassInfo_for_writer_23, mercury__io__Stream_6, mercury__io__NonCanon_7, mercury__io__V_10_29);
    }
{
#define MR_PROC_LABEL mercury__io__write_line_5_p_0

	MR_Char Character;

	Character =  (MR_Char) 10 ;
		{

    MercuryFilePtr out = mercury_current_text_output();
    char    buf[5];
    size_t  len;
    size_t  i;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*out, Character) < 0) {
            mercury_output_error(out, errno);
        }
        if (Character == '\n') {
            MR_line_number(*out)++;
        }
    } else {
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*out, buf[i]) < 0) {
                mercury_output_error(out, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_line_4_p_0(
  MR_Word mercury__io__TypeInfo_for_T_12,
  MR_Word mercury__io__Stream_5,
  MR_Box mercury__io__X_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_20 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_21 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word mercury__io__V_10_27;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_12, mercury__io__X_6, &mercury__io__V_10_27);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(mercury__io__TypeClassInfo_for_writer_20, mercury__io__TypeClassInfo_for_writer_21, mercury__io__Stream_5, (MR_Integer) 1, mercury__io__V_10_27);
    }
{
#define MR_PROC_LABEL mercury__io__write_line_4_p_0

	MR_Char Character;

	Character =  (MR_Char) 10 ;
		{

    MercuryFilePtr out = mercury_current_text_output();
    char    buf[5];
    size_t  len;
    size_t  i;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*out, Character) < 0) {
            mercury_output_error(out, errno);
        }
        if (Character == '\n') {
            MR_line_number(*out)++;
        }
    } else {
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*out, buf[i]) < 0) {
                mercury_output_error(out, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_line_3_p_0(
  MR_Word mercury__io__TypeInfo_for_T_10,
  MR_Box mercury__io__X_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_19;
    MR_Word mercury__io__TypeClassInfo_for_writer_20;
    MR_Word mercury__io__Stream_15;
    MR_Box mercury__io__Stream_23;
    MR_Word mercury__io__V_10_31;

{
#define MR_PROC_LABEL mercury__io__write_line_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_23  = (MR_Box) Stream;
}
    mercury__io__Stream_15 = (MR_Word) mercury__io__Stream_23;
    mercury__io__TypeClassInfo_for_writer_19 = (MR_Word) &mercury__io_scalar_common_3[0];
    mercury__io__TypeClassInfo_for_writer_20 = (MR_Word) &mercury__io_scalar_common_3[1];
    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_10, mercury__io__X_4, &mercury__io__V_10_31);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(mercury__io__TypeClassInfo_for_writer_19, mercury__io__TypeClassInfo_for_writer_20, mercury__io__Stream_15, (MR_Integer) 1, mercury__io__V_10_31);
    }
{
#define MR_PROC_LABEL mercury__io__write_line_3_p_0

	MR_Char Character;

	Character =  (MR_Char) 10 ;
		{

    MercuryFilePtr out = mercury_current_text_output();
    char    buf[5];
    size_t  len;
    size_t  i;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*out, Character) < 0) {
            mercury_output_error(out, errno);
        }
        if (Character == '\n') {
            MR_line_number(*out)++;
        }
    } else {
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*out, buf[i]) < 0) {
                mercury_output_error(out, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__write_cc_3_p_0(
  MR_Word mercury__io__TypeInfo_for_T_12,
  MR_Box mercury__io__X_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_13;
    MR_Word mercury__io__TypeClassInfo_for_writer_14;
    MR_Word mercury__io__Stream_6;
    MR_Box mercury__io__Stream_17;
    MR_Word mercury__io__V_10_25;

{
#define MR_PROC_LABEL mercury__io__write_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_17  = (MR_Box) Stream;
}
    mercury__io__Stream_6 = (MR_Word) mercury__io__Stream_17;
    mercury__io__TypeClassInfo_for_writer_13 = (MR_Word) &mercury__io_scalar_common_3[0];
    mercury__io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[1];
    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_12, mercury__io__X_4, &mercury__io__V_10_25);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(mercury__io__TypeClassInfo_for_writer_13, mercury__io__TypeClassInfo_for_writer_14, mercury__io__Stream_6, (MR_Integer) 2, mercury__io__V_10_25);
    }
  }
}

void MR_CALL 
mercury__io__write_5_p_3(
  MR_Word mercury__io__TypeInfo_for_T_13,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__X_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word mercury__io__V_10_21;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_13, mercury__io__X_8, &mercury__io__V_10_21);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(mercury__io__TypeClassInfo_for_writer_14, mercury__io__TypeClassInfo_for_writer_15, mercury__io__Stream_6, mercury__io__NonCanon_7, mercury__io__V_10_21);
    }
  }
}

void MR_CALL 
mercury__io__write_5_p_2(
  MR_Word mercury__io__TypeInfo_for_T_13,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__X_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word mercury__io__V_10_21;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_13, mercury__io__X_8, &mercury__io__V_10_21);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(mercury__io__TypeClassInfo_for_writer_14, mercury__io__TypeClassInfo_for_writer_15, mercury__io__Stream_6, mercury__io__NonCanon_7, mercury__io__V_10_21);
    }
  }
}

void MR_CALL 
mercury__io__write_5_p_1(
  MR_Word mercury__io__TypeInfo_for_T_13,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__X_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word mercury__io__V_10_21;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_13, mercury__io__X_8, &mercury__io__V_10_21);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(mercury__io__TypeClassInfo_for_writer_14, mercury__io__TypeClassInfo_for_writer_15, mercury__io__Stream_6, mercury__io__NonCanon_7, mercury__io__V_10_21);
    }
  }
}

void MR_CALL 
mercury__io__write_5_p_0(
  MR_Word mercury__io__TypeInfo_for_T_13,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__X_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word mercury__io__V_10_21;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_13, mercury__io__X_8, &mercury__io__V_10_21);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__io__TypeClassInfo_for_writer_14, mercury__io__TypeClassInfo_for_writer_15, mercury__io__Stream_6, mercury__io__NonCanon_7, mercury__io__V_10_21);
    }
  }
}

void MR_CALL 
mercury__io__write_4_p_0(
  MR_Word mercury__io__TypeInfo_for_T_12,
  MR_Word mercury__io__Stream_5,
  MR_Box mercury__io__X_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_13 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word mercury__io__V_10_20;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_12, mercury__io__X_6, &mercury__io__V_10_20);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(mercury__io__TypeClassInfo_for_writer_13, mercury__io__TypeClassInfo_for_writer_14, mercury__io__Stream_5, (MR_Integer) 1, mercury__io__V_10_20);
    }
  }
}

void MR_CALL 
mercury__io__write_3_p_0(
  MR_Word mercury__io__TypeInfo_for_T_12,
  MR_Box mercury__io__X_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_13;
    MR_Word mercury__io__TypeClassInfo_for_writer_14;
    MR_Word mercury__io__Stream_6;
    MR_Box mercury__io__Stream_17;
    MR_Word mercury__io__V_10_25;

{
#define MR_PROC_LABEL mercury__io__write_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_17  = (MR_Box) Stream;
}
    mercury__io__Stream_6 = (MR_Word) mercury__io__Stream_17;
    mercury__io__TypeClassInfo_for_writer_13 = (MR_Word) &mercury__io_scalar_common_3[0];
    mercury__io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[1];
    {
      mercury__univ__type_to_univ_2_p_1(mercury__io__TypeInfo_for_T_12, mercury__io__X_4, &mercury__io__V_10_25);
    }
    {
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(mercury__io__TypeClassInfo_for_writer_13, mercury__io__TypeClassInfo_for_writer_14, mercury__io__Stream_6, (MR_Integer) 1, mercury__io__V_10_25);
    }
  }
}

void MR_CALL 
mercury__io__print_line_cc_3_p_0(
  MR_Word mercury__io__TypeInfo_for_T_10,
  MR_Box mercury__io__Term_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_18;
    MR_Word mercury__io__TypeClassInfo_for_writer_19;
    MR_Word mercury__io__Stream_15;
    MR_Box mercury__io__Stream_22;
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_8_8;

{
#define MR_PROC_LABEL mercury__io__print_line_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_22  = (MR_Box) Stream;
}
    mercury__io__Stream_15 = (MR_Word) mercury__io__Stream_22;
    mercury__io__TypeClassInfo_for_writer_18 = (MR_Word) &mercury__io_scalar_common_3[0];
    mercury__io__TypeClassInfo_for_writer_19 = (MR_Word) &mercury__io_scalar_common_3[1];
    {
      mercury__stream__string_writer__print_5_p_2(mercury__io__TypeInfo_for_T_10, mercury__io__TypeClassInfo_for_writer_18, mercury__io__TypeClassInfo_for_writer_19, ((MR_Box) (mercury__io__Stream_15)), (MR_Integer) 2, mercury__io__Term_4, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_8_8);
    }
{
#define MR_PROC_LABEL mercury__io__print_line_cc_3_p_0

	MR_Char Character;

	Character =  (MR_Char) 10 ;
		{

    MercuryFilePtr out = mercury_current_text_output();
    char    buf[5];
    size_t  len;
    size_t  i;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*out, Character) < 0) {
            mercury_output_error(out, errno);
        }
        if (Character == '\n') {
            MR_line_number(*out)++;
        }
    } else {
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*out, buf[i]) < 0) {
                mercury_output_error(out, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__print_line_5_p_3(
  MR_Word mercury__io__TypeInfo_for_T_14,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__Term_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box mercury__io__Stream_33;
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_12_12;

    {
      mercury__stream__string_writer__print_5_p_3(mercury__io__TypeInfo_for_T_14, mercury__io__TypeClassInfo_for_writer_22, mercury__io__TypeClassInfo_for_writer_23, ((MR_Box) (mercury__io__Stream_6)), mercury__io__NonCanon_7, mercury__io__Term_8, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_12_12);
    }
    mercury__io__Stream_33 = (MR_Box) mercury__io__Stream_6;
{
#define MR_PROC_LABEL mercury__io__print_line_5_p_3

	MercuryFilePtr Stream;
	MR_Char Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_33 ;
	Character =  (MR_Char) 10 ;
		{

    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            mercury_output_error(Stream, errno);
        }
        if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                mercury_output_error(Stream, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__print_line_5_p_2(
  MR_Word mercury__io__TypeInfo_for_T_14,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__Term_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box mercury__io__Stream_33;
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_12_12;

    {
      mercury__stream__string_writer__print_5_p_2(mercury__io__TypeInfo_for_T_14, mercury__io__TypeClassInfo_for_writer_22, mercury__io__TypeClassInfo_for_writer_23, ((MR_Box) (mercury__io__Stream_6)), mercury__io__NonCanon_7, mercury__io__Term_8, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_12_12);
    }
    mercury__io__Stream_33 = (MR_Box) mercury__io__Stream_6;
{
#define MR_PROC_LABEL mercury__io__print_line_5_p_2

	MercuryFilePtr Stream;
	MR_Char Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_33 ;
	Character =  (MR_Char) 10 ;
		{

    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            mercury_output_error(Stream, errno);
        }
        if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                mercury_output_error(Stream, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__print_line_5_p_1(
  MR_Word mercury__io__TypeInfo_for_T_14,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__Term_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box mercury__io__Stream_33;
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_12_12;

    {
      mercury__stream__string_writer__print_5_p_1(mercury__io__TypeInfo_for_T_14, mercury__io__TypeClassInfo_for_writer_22, mercury__io__TypeClassInfo_for_writer_23, ((MR_Box) (mercury__io__Stream_6)), mercury__io__NonCanon_7, mercury__io__Term_8, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_12_12);
    }
    mercury__io__Stream_33 = (MR_Box) mercury__io__Stream_6;
{
#define MR_PROC_LABEL mercury__io__print_line_5_p_1

	MercuryFilePtr Stream;
	MR_Char Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_33 ;
	Character =  (MR_Char) 10 ;
		{

    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            mercury_output_error(Stream, errno);
        }
        if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                mercury_output_error(Stream, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__print_line_5_p_0(
  MR_Word mercury__io__TypeInfo_for_T_14,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__Term_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box mercury__io__Stream_33;
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_12_12;

    {
      mercury__stream__string_writer__print_5_p_0(mercury__io__TypeInfo_for_T_14, mercury__io__TypeClassInfo_for_writer_22, mercury__io__TypeClassInfo_for_writer_23, ((MR_Box) (mercury__io__Stream_6)), mercury__io__NonCanon_7, mercury__io__Term_8, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_12_12);
    }
    mercury__io__Stream_33 = (MR_Box) mercury__io__Stream_6;
{
#define MR_PROC_LABEL mercury__io__print_line_5_p_0

	MercuryFilePtr Stream;
	MR_Char Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_33 ;
	Character =  (MR_Char) 10 ;
		{

    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            mercury_output_error(Stream, errno);
        }
        if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                mercury_output_error(Stream, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__print_line_4_p_0(
  MR_Word mercury__io__TypeInfo_for_T_12,
  MR_Word mercury__io__Stream_5,
  MR_Box mercury__io__Term_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_20 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_21 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box mercury__io__Stream_31;
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_10_10;

    {
      mercury__stream__string_writer__print_5_p_1(mercury__io__TypeInfo_for_T_12, mercury__io__TypeClassInfo_for_writer_20, mercury__io__TypeClassInfo_for_writer_21, ((MR_Box) (mercury__io__Stream_5)), (MR_Integer) 1, mercury__io__Term_6, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_10_10);
    }
    mercury__io__Stream_31 = (MR_Box) mercury__io__Stream_5;
{
#define MR_PROC_LABEL mercury__io__print_line_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;

	Stream = (MercuryFilePtr) mercury__io__Stream_31 ;
	Character =  (MR_Char) 10 ;
		{

    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            mercury_output_error(Stream, errno);
        }
        if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                mercury_output_error(Stream, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__print_line_3_p_0(
  MR_Word mercury__io__TypeInfo_for_T_10,
  MR_Box mercury__io__Term_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_19;
    MR_Word mercury__io__TypeClassInfo_for_writer_20;
    MR_Word mercury__io__Stream_15;
    MR_Box mercury__io__Stream_23;
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_8_8;

{
#define MR_PROC_LABEL mercury__io__print_line_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_23  = (MR_Box) Stream;
}
    mercury__io__Stream_15 = (MR_Word) mercury__io__Stream_23;
    mercury__io__TypeClassInfo_for_writer_19 = (MR_Word) &mercury__io_scalar_common_3[0];
    mercury__io__TypeClassInfo_for_writer_20 = (MR_Word) &mercury__io_scalar_common_3[1];
    {
      mercury__stream__string_writer__print_5_p_1(mercury__io__TypeInfo_for_T_10, mercury__io__TypeClassInfo_for_writer_19, mercury__io__TypeClassInfo_for_writer_20, ((MR_Box) (mercury__io__Stream_15)), (MR_Integer) 1, mercury__io__Term_4, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_8_8);
    }
{
#define MR_PROC_LABEL mercury__io__print_line_3_p_0

	MR_Char Character;

	Character =  (MR_Char) 10 ;
		{

    MercuryFilePtr out = mercury_current_text_output();
    char    buf[5];
    size_t  len;
    size_t  i;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*out, Character) < 0) {
            mercury_output_error(out, errno);
        }
        if (Character == '\n') {
            MR_line_number(*out)++;
        }
    } else {
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*out, buf[i]) < 0) {
                mercury_output_error(out, errno);
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__print_cc_3_p_0(
  MR_Word mercury__io__TypeInfo_for_T_11,
  MR_Box mercury__io__Term_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_12;
    MR_Word mercury__io__TypeClassInfo_for_writer_13;
    MR_Word mercury__io__Stream_6;
    MR_Box mercury__io__Stream_16;
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_8;

{
#define MR_PROC_LABEL mercury__io__print_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_16  = (MR_Box) Stream;
}
    mercury__io__Stream_6 = (MR_Word) mercury__io__Stream_16;
    mercury__io__TypeClassInfo_for_writer_12 = (MR_Word) &mercury__io_scalar_common_3[0];
    mercury__io__TypeClassInfo_for_writer_13 = (MR_Word) &mercury__io_scalar_common_3[1];
    {
      mercury__stream__string_writer__print_5_p_2(mercury__io__TypeInfo_for_T_11, mercury__io__TypeClassInfo_for_writer_12, mercury__io__TypeClassInfo_for_writer_13, ((MR_Box) (mercury__io__Stream_6)), (MR_Integer) 2, mercury__io__Term_4, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_8);
    }
  }
}

void MR_CALL 
mercury__io__print_5_p_3(
  MR_Word mercury__io__TypeInfo_for_T_13,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__Term_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_11;

    {
      mercury__stream__string_writer__print_5_p_3(mercury__io__TypeInfo_for_T_13, mercury__io__TypeClassInfo_for_writer_14, mercury__io__TypeClassInfo_for_writer_15, ((MR_Box) (mercury__io__Stream_6)), mercury__io__NonCanon_7, mercury__io__Term_8, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

void MR_CALL 
mercury__io__print_5_p_2(
  MR_Word mercury__io__TypeInfo_for_T_13,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__Term_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_11;

    {
      mercury__stream__string_writer__print_5_p_2(mercury__io__TypeInfo_for_T_13, mercury__io__TypeClassInfo_for_writer_14, mercury__io__TypeClassInfo_for_writer_15, ((MR_Box) (mercury__io__Stream_6)), mercury__io__NonCanon_7, mercury__io__Term_8, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

void MR_CALL 
mercury__io__print_5_p_1(
  MR_Word mercury__io__TypeInfo_for_T_13,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__Term_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_11;

    {
      mercury__stream__string_writer__print_5_p_1(mercury__io__TypeInfo_for_T_13, mercury__io__TypeClassInfo_for_writer_14, mercury__io__TypeClassInfo_for_writer_15, ((MR_Box) (mercury__io__Stream_6)), mercury__io__NonCanon_7, mercury__io__Term_8, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

void MR_CALL 
mercury__io__print_5_p_0(
  MR_Word mercury__io__TypeInfo_for_T_13,
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__NonCanon_7,
  MR_Box mercury__io__Term_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_11;

    {
      mercury__stream__string_writer__print_5_p_0(mercury__io__TypeInfo_for_T_13, mercury__io__TypeClassInfo_for_writer_14, mercury__io__TypeClassInfo_for_writer_15, ((MR_Box) (mercury__io__Stream_6)), mercury__io__NonCanon_7, mercury__io__Term_8, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

void MR_CALL 
mercury__io__print_4_p_0(
  MR_Word mercury__io__TypeInfo_for_T_12,
  MR_Word mercury__io__Stream_5,
  MR_Box mercury__io__Term_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_13 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word mercury__io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_9;

    {
      mercury__stream__string_writer__print_5_p_1(mercury__io__TypeInfo_for_T_12, mercury__io__TypeClassInfo_for_writer_13, mercury__io__TypeClassInfo_for_writer_14, ((MR_Box) (mercury__io__Stream_5)), (MR_Integer) 1, mercury__io__Term_6, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_9);
    }
  }
}

void MR_CALL 
mercury__io__print_3_p_0(
  MR_Word mercury__io__TypeInfo_for_T_12,
  MR_Box mercury__io__Term_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeClassInfo_for_writer_13;
    MR_Word mercury__io__TypeClassInfo_for_writer_14;
    MR_Word mercury__io__Stream_6;
    MR_Box mercury__io__Stream_17;
    MR_Box mercury__io__conv0_STATE_VARIABLE_IO_8;

{
#define MR_PROC_LABEL mercury__io__print_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_17  = (MR_Box) Stream;
}
    mercury__io__Stream_6 = (MR_Word) mercury__io__Stream_17;
    mercury__io__TypeClassInfo_for_writer_13 = (MR_Word) &mercury__io_scalar_common_3[0];
    mercury__io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[1];
    {
      mercury__stream__string_writer__print_5_p_1(mercury__io__TypeInfo_for_T_12, mercury__io__TypeClassInfo_for_writer_13, mercury__io__TypeClassInfo_for_writer_14, ((MR_Box) (mercury__io__Stream_6)), (MR_Integer) 1, mercury__io__Term_4, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv0_STATE_VARIABLE_IO_8);
    }
  }
}

void MR_CALL 
mercury__io__ignore_whitespace_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__CharResult_8;
        MR_Integer mercury__io__Code_21;
        MR_Box mercury__io__Stream_31 = (MR_Box) mercury__io__Stream_5;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_31, &mercury__io__Code_21);
        }
        mercury__io__succeeded = (mercury__io__Code_21 == (MR_Integer) -1);
        if (mercury__io__succeeded)
          mercury__io__CharResult_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Char mercury__io__Char_22;

{
#define MR_PROC_LABEL mercury__io__ignore_whitespace_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_21 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_22  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__io__succeeded)
              {
                mercury__io__CharResult_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__CharResult_8, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_22));
              }
            else
              {
                MR_String mercury__io__Msg_23;
                MR_Word mercury__io__V_27_27;
                MR_Box mercury__io__Error_39;

{
#define MR_PROC_LABEL mercury__io__ignore_whitespace_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_39 );
}
{
#define MR_PROC_LABEL mercury__io__ignore_whitespace_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_39 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_23  = Msg;
}
                mercury__io__V_27_27 = (MR_Word) mercury__io__Msg_23;
                {
                  mercury__io__CharResult_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__CharResult_8, 0) = ((MR_Box) (mercury__io__V_27_27));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__CharResult_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
          case (MR_Integer) 1:
            {
              MR_Char mercury__io__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__CharResult_8, (MR_Integer) 0)));

              {
                mercury__io__succeeded = mercury__char__is_whitespace_1_p_0(mercury__io__Char_10);
              }
              if (mercury__io__succeeded)
                {
                  /* direct tailcall eliminated */
                  continue;
                }
              else
                {
                  MR_Box mercury__io__Stream_45 = (MR_Box) mercury__io__Stream_5;

                  {
                    mercury__io__putback_char_2_4_p_0(mercury__io__Stream_45, mercury__io__Char_10);
                  }
                  *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__CharResult_8, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Result_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Error_9));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__ignore_whitespace_3_p_0(
  MR_Word * mercury__io__Result_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_6;
    MR_Box mercury__io__Stream_13;

{
#define MR_PROC_LABEL mercury__io__ignore_whitespace_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_13  = (MR_Box) Stream;
}
    mercury__io__Stream_6 = (MR_Word) mercury__io__Stream_13;
    {
      mercury__io__ignore_whitespace_4_p_0(mercury__io__Stream_6, mercury__io__Result_4);
    }
  }
}

void MR_CALL 
mercury__io__read_from_string_6_p_0(
  MR_Word mercury__io__TypeInfo_for_T_19,
  MR_String mercury__io__FileName_7,
  MR_String mercury__io__String_8,
  MR_Integer mercury__io__Len_9,
  MR_Word * mercury__io__Result_10,
  MR_Word mercury__io__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__io__STATE_VARIABLE_Posn_17)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word mercury__io__TypeClassInfo_for_op_table_28;
    MR_Word mercury__io__ReadResult_12;
    MR_Integer mercury__io__LineNumber_13;
    MR_Word mercury__io__V_15_36;
    MR_Integer mercury__io__V_14_14;
    MR_Integer mercury__io__V_15_15;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__io__TypeClassInfo_for_op_table_28 = (MR_Word) &mercury__io_scalar_common_4[1];
    {
      mercury__lexer__string_get_token_list_max_5_p_0(mercury__io__String_8, mercury__io__Len_9, &mercury__io__V_15_36, mercury__io__STATE_VARIABLE_Posn_0_16, mercury__io__STATE_VARIABLE_Posn_17);
    }
    {
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__io__TypeCtorInfo_20_20, mercury__io__TypeClassInfo_for_op_table_28, ((MR_Box) ((MR_Integer) 0)), mercury__io__FileName_7, mercury__io__V_15_36, &mercury__io__ReadResult_12);
    }
    mercury__io__LineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__io__STATE_VARIABLE_Posn_17, (MR_Integer) 0)));
    mercury__io__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__io__STATE_VARIABLE_Posn_17, (MR_Integer) 1)));
    mercury__io__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__io__STATE_VARIABLE_Posn_17, (MR_Integer) 2)));
    {
      mercury__io__process_read_term_3_p_0(mercury__io__TypeInfo_for_T_19, mercury__io__ReadResult_12, mercury__io__LineNumber_13, mercury__io__Result_10);
    }
  }
}

void MR_CALL 
mercury__io__read_4_p_0(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__OrigStream_8;
    MR_Box mercury__io__NewStream_18 = (MR_Box) mercury__io__Stream_5;
    MR_Box mercury__io__OutStream_19;
    MR_Box mercury__io__NewStream_24;
    MR_Box mercury__io__OutStream_25;

{
#define MR_PROC_LABEL mercury__io__read_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_18 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_19  = (MR_Box) OutStream;
}
    mercury__io__OrigStream_8 = (MR_Word) mercury__io__OutStream_19;
    {
      mercury__io__read_3_p_0(mercury__io__TypeInfo_for_T_15, mercury__io__Result_6);
    }
    mercury__io__NewStream_24 = (MR_Box) mercury__io__OrigStream_8;
{
#define MR_PROC_LABEL mercury__io__read_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) mercury__io__NewStream_24 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 mercury__io__OutStream_25  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__read_3_p_0(
  MR_Word mercury__io__TypeInfo_for_T_12,
  MR_Word * mercury__io__Result_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word mercury__io__TypeClassInfo_for_op_table_19;
    MR_Word mercury__io__ReadResult_6;
    MR_Integer mercury__io__LineNumber_7;
    MR_String mercury__io__V_8_31;
    MR_Box mercury__io__Stream_37;
    MR_Word mercury__io__V_10_51;
    MR_Word mercury__io__V_6_55;
    MR_Word mercury__io__V_7_57;
    MR_Integer mercury__io__V_8_58;
    MR_Box mercury__io__Stream_62;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__io__TypeClassInfo_for_op_table_19 = (MR_Word) &mercury__io_scalar_common_4[1];
{
#define MR_PROC_LABEL mercury__io__read_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_37  = (MR_Box) Stream;
}
    {
      mercury__io__stream_name_4_p_0(mercury__io__Stream_37, &mercury__io__V_8_31);
    }
{
#define MR_PROC_LABEL mercury__io__read_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_62  = (MR_Box) Stream;
}
    mercury__io__V_6_55 = (MR_Word) mercury__io__Stream_62;
    {
      mercury__lexer__get_token_5_p_0(mercury__io__V_6_55, &mercury__io__V_7_57, &mercury__io__V_8_58);
    }
    {
      mercury__lexer__get_token_list_2_6_p_0(mercury__io__V_6_55, mercury__io__V_7_57, mercury__io__V_8_58, &mercury__io__V_10_51);
    }
    {
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__io__TypeCtorInfo_13_13, mercury__io__TypeClassInfo_for_op_table_19, ((MR_Box) ((MR_Integer) 0)), mercury__io__V_8_31, mercury__io__V_10_51, &mercury__io__ReadResult_6);
    }
{
#define MR_PROC_LABEL mercury__io__read_3_p_0

	MR_Integer LineNum;

		{

    LineNum = MR_line_number(*mercury_current_text_input());


		;}
#undef MR_PROC_LABEL
	 mercury__io__LineNumber_7  = LineNum;
}
    {
      mercury__io__process_read_term_3_p_0(mercury__io__TypeInfo_for_T_12, mercury__io__ReadResult_6, mercury__io__LineNumber_7, mercury__io__Result_4);
    }
  }
}

void MR_CALL 
mercury__io__putback_char_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Char mercury__io__Character_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;

    {
      mercury__io__putback_char_2_4_p_0(mercury__io__Stream_5, mercury__io__Character_6);
    }
  }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_maybe_stop_6_p_1(
  MR_Word mercury__io__TypeInfo_for_T_22,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__CharResult_12;
        MR_Integer mercury__io__Code_28;
        MR_Box mercury__io__Stream_38 = (MR_Box) mercury__io__Stream_7;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_38, &mercury__io__Code_28);
        }
        mercury__io__succeeded = (mercury__io__Code_28 == (MR_Integer) -1);
        if (mercury__io__succeeded)
          mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Char mercury__io__Char_29;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_6_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_28 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_29  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__io__succeeded)
              {
                mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__CharResult_12, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_29));
              }
            else
              {
                MR_String mercury__io__Msg_30;
                MR_Word mercury__io__V_34_34;
                MR_Box mercury__io__Error_46;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_6_p_1

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_46 );
}
{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_46 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_30  = Msg;
}
                mercury__io__V_34_34 = (MR_Word) mercury__io__Msg_30;
                {
                  mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__CharResult_12, 0) = ((MR_Box) (mercury__io__V_34_34));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__CharResult_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__io__Res_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_9;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Char mercury__io__Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__CharResult_12, (MR_Integer) 0)));
              MR_Word mercury__io__Continue_14;
              MR_Box mercury__io__T1_15;
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_8, (MR_Integer) 1)));
              MR_Box mercury__io__conv2_Continue_14;
              MR_Box mercury__io__conv1_STATE_VARIABLE_IO_20_20;

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_8), ((MR_Box) (MR_Word) (mercury__io__Char_13)), &mercury__io__conv2_Continue_14, mercury__io__T0_9, &mercury__io__T1_15, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_20_20);
              }
              mercury__io__Continue_14 = ((MR_Word) mercury__io__conv2_Continue_14);
              switch (mercury__io__Continue_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *mercury__io__Res_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T1_15;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_15;

                      mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
                    }
                    continue;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__CharResult_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_9;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_16));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_maybe_stop_6_p_0(
  MR_Word mercury__io__TypeInfo_for_T_22,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__CharResult_12;
        MR_Integer mercury__io__Code_28;
        MR_Box mercury__io__Stream_38 = (MR_Box) mercury__io__Stream_7;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_38, &mercury__io__Code_28);
        }
        mercury__io__succeeded = (mercury__io__Code_28 == (MR_Integer) -1);
        if (mercury__io__succeeded)
          mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Char mercury__io__Char_29;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_6_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_28 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_29  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__io__succeeded)
              {
                mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__CharResult_12, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_29));
              }
            else
              {
                MR_String mercury__io__Msg_30;
                MR_Word mercury__io__V_34_34;
                MR_Box mercury__io__Error_46;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_6_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_46 );
}
{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_46 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_30  = Msg;
}
                mercury__io__V_34_34 = (MR_Word) mercury__io__Msg_30;
                {
                  mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__CharResult_12, 0) = ((MR_Box) (mercury__io__V_34_34));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__CharResult_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__io__Res_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_9;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Char mercury__io__Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__CharResult_12, (MR_Integer) 0)));
              MR_Word mercury__io__Continue_14;
              MR_Box mercury__io__T1_15;
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_8, (MR_Integer) 1)));
              MR_Box mercury__io__conv2_Continue_14;
              MR_Box mercury__io__conv1_STATE_VARIABLE_IO_20_20;

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_8), ((MR_Box) (MR_Word) (mercury__io__Char_13)), &mercury__io__conv2_Continue_14, mercury__io__T0_9, &mercury__io__T1_15, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_20_20);
              }
              mercury__io__Continue_14 = ((MR_Word) mercury__io__conv2_Continue_14);
              switch (mercury__io__Continue_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *mercury__io__Res_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T1_15;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_15;

                      mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
                    }
                    continue;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__CharResult_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_9;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_16));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_6_p_1(
  MR_Word mercury__io__TypeInfo_for_T_21,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__CharResult_12;
        MR_Integer mercury__io__Code_27;
        MR_Box mercury__io__Stream_37 = (MR_Box) mercury__io__Stream_7;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_37, &mercury__io__Code_27);
        }
        mercury__io__succeeded = (mercury__io__Code_27 == (MR_Integer) -1);
        if (mercury__io__succeeded)
          mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Char mercury__io__Char_28;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_6_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_27 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_28  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__io__succeeded)
              {
                mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__CharResult_12, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_28));
              }
            else
              {
                MR_String mercury__io__Msg_29;
                MR_Word mercury__io__V_33_33;
                MR_Box mercury__io__Error_45;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_6_p_1

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_45 );
}
{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_45 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_29  = Msg;
}
                mercury__io__V_33_33 = (MR_Word) mercury__io__Msg_29;
                {
                  mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__CharResult_12, 0) = ((MR_Box) (mercury__io__V_33_33));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__CharResult_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__io__Res_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_9;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Char mercury__io__Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__CharResult_12, (MR_Integer) 0)));
              MR_Box mercury__io__T1_14;
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_8, (MR_Integer) 1)));
              MR_Box mercury__io__conv1_STATE_VARIABLE_IO_19_19;

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_8), ((MR_Box) (MR_Word) (mercury__io__Char_13)), mercury__io__T0_9, &mercury__io__T1_14, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_19_19);
              }
              /* direct tailcall eliminated */
              {
                MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_14;

                mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__CharResult_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_9;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_15));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_6_p_0(
  MR_Word mercury__io__TypeInfo_for_T_21,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__CharResult_12;
        MR_Integer mercury__io__Code_27;
        MR_Box mercury__io__Stream_37 = (MR_Box) mercury__io__Stream_7;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_37, &mercury__io__Code_27);
        }
        mercury__io__succeeded = (mercury__io__Code_27 == (MR_Integer) -1);
        if (mercury__io__succeeded)
          mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Char mercury__io__Char_28;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_6_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_27 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_28  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__io__succeeded)
              {
                mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__CharResult_12, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_28));
              }
            else
              {
                MR_String mercury__io__Msg_29;
                MR_Word mercury__io__V_33_33;
                MR_Box mercury__io__Error_45;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_6_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_45 );
}
{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_45 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_29  = Msg;
}
                mercury__io__V_33_33 = (MR_Word) mercury__io__Msg_29;
                {
                  mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__CharResult_12, 0) = ((MR_Box) (mercury__io__V_33_33));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__CharResult_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__io__Res_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_9;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Char mercury__io__Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__CharResult_12, (MR_Integer) 0)));
              MR_Box mercury__io__T1_14;
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_8, (MR_Integer) 1)));
              MR_Box mercury__io__conv1_STATE_VARIABLE_IO_19_19;

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_8), ((MR_Box) (MR_Word) (mercury__io__Char_13)), mercury__io__T0_9, &mercury__io__T1_14, ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_19_19);
              }
              /* direct tailcall eliminated */
              {
                MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_14;

                mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__CharResult_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_9;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_15));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__input_stream_foldl_io_5_p_1(
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__Pred_7,
  MR_Word * mercury__io__Res_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__CharResult_10;
        MR_Integer mercury__io__Code_23;
        MR_Box mercury__io__Stream_33 = (MR_Box) mercury__io__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_33, &mercury__io__Code_23);
        }
        mercury__io__succeeded = (mercury__io__Code_23 == (MR_Integer) -1);
        if (mercury__io__succeeded)
          mercury__io__CharResult_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Char mercury__io__Char_24;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_5_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_23 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_24  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__io__succeeded)
              {
                mercury__io__CharResult_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__CharResult_10, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_24));
              }
            else
              {
                MR_String mercury__io__Msg_25;
                MR_Word mercury__io__V_29_29;
                MR_Box mercury__io__Error_41;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_5_p_1

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_41 );
}
{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_5_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_41 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_25  = Msg;
}
                mercury__io__V_29_29 = (MR_Word) mercury__io__Msg_25;
                {
                  mercury__io__CharResult_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__CharResult_10, 0) = ((MR_Box) (mercury__io__V_29_29));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__CharResult_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__io__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Char mercury__io__Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__CharResult_10, (MR_Integer) 0)));
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_7, (MR_Integer) 1)));
              MR_Box mercury__io__conv1_STATE_VARIABLE_IO_16_16;

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_7), ((MR_Box) (MR_Word) (mercury__io__Char_11)), ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_16_16);
              }
              /* direct tailcall eliminated */
              {
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__CharResult_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__input_stream_foldl_io_5_p_0(
  MR_Word mercury__io__Stream_6,
  MR_Word mercury__io__Pred_7,
  MR_Word * mercury__io__Res_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__CharResult_10;
        MR_Integer mercury__io__Code_23;
        MR_Box mercury__io__Stream_33 = (MR_Box) mercury__io__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_33, &mercury__io__Code_23);
        }
        mercury__io__succeeded = (mercury__io__Code_23 == (MR_Integer) -1);
        if (mercury__io__succeeded)
          mercury__io__CharResult_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Char mercury__io__Char_24;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_23 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_24  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__io__succeeded)
              {
                mercury__io__CharResult_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__CharResult_10, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_24));
              }
            else
              {
                MR_String mercury__io__Msg_25;
                MR_Word mercury__io__V_29_29;
                MR_Box mercury__io__Error_41;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_5_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_41 );
}
{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_41 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_25  = Msg;
}
                mercury__io__V_29_29 = (MR_Word) mercury__io__Msg_25;
                {
                  mercury__io__CharResult_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__CharResult_10, 0) = ((MR_Box) (mercury__io__V_29_29));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__CharResult_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__io__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Char mercury__io__Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__CharResult_10, (MR_Integer) 0)));
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_7, (MR_Integer) 1)));
              MR_Box mercury__io__conv1_STATE_VARIABLE_IO_16_16;

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_7), ((MR_Box) (MR_Word) (mercury__io__Char_11)), ((MR_Box) ((MR_Integer) 0)), &mercury__io__conv1_STATE_VARIABLE_IO_16_16);
              }
              /* direct tailcall eliminated */
              {
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__CharResult_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__input_stream_foldl_6_p_1(
  MR_Word mercury__io__TypeInfo_for_T_20,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__CharResult_12;
        MR_Integer mercury__io__Code_26;
        MR_Box mercury__io__Stream_36 = (MR_Box) mercury__io__Stream_7;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_36, &mercury__io__Code_26);
        }
        mercury__io__succeeded = (mercury__io__Code_26 == (MR_Integer) -1);
        if (mercury__io__succeeded)
          mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Char mercury__io__Char_27;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_6_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_26 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_27  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__io__succeeded)
              {
                mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__CharResult_12, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_27));
              }
            else
              {
                MR_String mercury__io__Msg_28;
                MR_Word mercury__io__V_32_32;
                MR_Box mercury__io__Error_44;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_6_p_1

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_44 );
}
{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_44 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_28  = Msg;
}
                mercury__io__V_32_32 = (MR_Word) mercury__io__Msg_28;
                {
                  mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__CharResult_12, 0) = ((MR_Box) (mercury__io__V_32_32));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__CharResult_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__io__Res_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_9;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Char mercury__io__Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__CharResult_12, (MR_Integer) 0)));
              MR_Box mercury__io__T1_14;
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_8, (MR_Integer) 1)));

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_8), ((MR_Box) (MR_Word) (mercury__io__Char_13)), mercury__io__T0_9, &mercury__io__T1_14);
              }
              /* direct tailcall eliminated */
              {
                MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_14;

                mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__CharResult_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_9;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_15));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__input_stream_foldl_6_p_0(
  MR_Word mercury__io__TypeInfo_for_T_20,
  MR_Word mercury__io__Stream_7,
  MR_Word mercury__io__Pred_8,
  MR_Box mercury__io__T0_9,
  MR_Word * mercury__io__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__io__succeeded;
        MR_Word mercury__io__CharResult_12;
        MR_Integer mercury__io__Code_26;
        MR_Box mercury__io__Stream_36 = (MR_Box) mercury__io__Stream_7;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_36, &mercury__io__Code_26);
        }
        mercury__io__succeeded = (mercury__io__Code_26 == (MR_Integer) -1);
        if (mercury__io__succeeded)
          mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Char mercury__io__Char_27;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_6_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_26 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_27  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__io__succeeded)
              {
                mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__io__CharResult_12, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_27));
              }
            else
              {
                MR_String mercury__io__Msg_28;
                MR_Word mercury__io__V_32_32;
                MR_Box mercury__io__Error_44;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_6_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_44 );
}
{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_44 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_28  = Msg;
}
                mercury__io__V_32_32 = (MR_Word) mercury__io__Msg_28;
                {
                  mercury__io__CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__io__CharResult_12, 0) = ((MR_Box) (mercury__io__V_32_32));
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__io__CharResult_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__io__Res_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = mercury__io__T0_9;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Char mercury__io__Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__CharResult_12, (MR_Integer) 0)));
              MR_Box mercury__io__T1_14;
              void MR_CALL (* mercury__io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__io__Pred_8, (MR_Integer) 1)));

              {
                mercury__io__func_0(((MR_Box) mercury__io__Pred_8), ((MR_Box) (MR_Word) (mercury__io__Char_13)), mercury__io__T0_9, &mercury__io__T1_14);
              }
              /* direct tailcall eliminated */
              {
                MR_Box mercury__io__T0__tmp_copy_9 = mercury__io__T1_14;

                mercury__io__T0_9 = mercury__io__T0__tmp_copy_9;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__io__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__io__CharResult_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__io__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__io__T0_9;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_15));
              }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__io__read_file_as_string_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__FileSize_8;
    MR_Integer mercury__io__BufferSize0_9;
    MR_Box mercury__io__Buffer0_10;
    MR_Box mercury__io__Buffer_12;
    MR_Integer mercury__io__Pos_13;
    MR_Integer mercury__io__BufferSize_14;
    MR_Box mercury__io__Stream_34 = (MR_Box) mercury__io__Stream_5;
    MR_Box mercury__io__Stream_43;
    MR_String mercury__io__String_15;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Size;

	Stream = (MercuryFilePtr) mercury__io__Stream_34 ;
		{

#if defined(MR_HAVE_FSTAT) &&         (defined(MR_HAVE_FILENO) || defined(fileno)) && defined(S_ISREG)
    struct stat s;
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (fstat(fileno(MR_file(*Stream)), &s) == 0 && S_ISREG(s.st_mode)) {
            Size = s.st_size;
        } else {
            Size = -1;
        }
    } else {
        Size = -1;
    }
#else
    Size = -1;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__io__FileSize_8  = Size;
}
    mercury__io__succeeded = (mercury__io__FileSize_8 >= (MR_Integer) 0);
    if (mercury__io__succeeded)
      {
        mercury__io__BufferSize0_9 = (mercury__io__FileSize_8 + (MR_Integer) 1);
      }
    else
      mercury__io__BufferSize0_9 = (MR_Integer) 4000;
{
#define MR_PROC_LABEL mercury__io__read_file_as_string_4_p_0

	MR_Integer Size;
	char * Buffer;

	Size =  mercury__io__BufferSize0_9 ;
		{
{
    MR_Word buf;
    MR_offset_incr_hp_atomic_msg(buf, 0,
        (Size * sizeof(char) + sizeof(MR_Word) - 1) / sizeof(MR_Word),
        MR_ALLOC_ID, "io.buffer/0");
    Buffer = (char *) buf;
}

		;}
#undef MR_PROC_LABEL
	 mercury__io__Buffer0_10  = (MR_Box) Buffer;
}
    mercury__io__Stream_43 = (MR_Box) mercury__io__Stream_5;
{
#define MR_PROC_LABEL mercury__io__read_file_as_string_4_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__io__Stream_43 ;
		{

    if (MR_IS_FILE_STREAM(*Stream)) {
        clearerr(MR_file(*Stream));
    } else {
        /* Not a file stream so do nothing */
    }


		;}
#undef MR_PROC_LABEL
}
    {
      mercury__io__read_file_as_string_2_9_p_0(mercury__io__Stream_5, mercury__io__Buffer0_10, &mercury__io__Buffer_12, (MR_Integer) 0, &mercury__io__Pos_13, mercury__io__BufferSize0_9, &mercury__io__BufferSize_14);
    }
    mercury__io__succeeded = (mercury__io__Pos_13 < mercury__io__BufferSize_14);
    if (mercury__io__succeeded)
      {
      }
    else
      {
        mercury__require__error_1_p_0((MR_String) "io.read_file_as_string: overflow");
        return;
      }
{
#define MR_PROC_LABEL mercury__io__read_file_as_string_4_p_0

	char * Buffer;
	MR_Integer Len;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Buffer = (char *) mercury__io__Buffer_12 ;
	Len =  mercury__io__Pos_13 ;
		{
{
    Str = Buffer;
    Str[Len] = '\0';

    /* Check that the string doesn't contain null characters. */
    if (strlen(Str) != Len) {
        SUCCESS_INDICATOR= MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__String_15  = Str;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__io__succeeded)
      {
        MR_Word mercury__io__Result0_16;
        MR_Box mercury__io__Stream_60 = (MR_Box) mercury__io__Stream_5;
        MR_Integer mercury__io__Int_68;
        MR_String mercury__io__Msg_69;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_4_p_0

	MercuryFilePtr Stream;
	MR_Integer RetVal;
	MR_String RetStr;

	Stream = (MercuryFilePtr) mercury__io__Stream_60 ;
		{

    if (MR_IS_FILE_STREAM(*Stream)) {
        RetVal = ferror(MR_file(*Stream));
    } else {
        RetVal = -1;
    }

    ML_maybe_make_err_msg(RetVal != 0, errno, "read failed: ",
        MR_ALLOC_ID, RetStr);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Int_68  = RetVal;
	 mercury__io__Msg_69  = RetStr;
}
        mercury__io__succeeded = (mercury__io__Int_68 == (MR_Integer) 0);
        if (mercury__io__succeeded)
          mercury__io__Result0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word mercury__io__V_71_71 = (MR_Word) mercury__io__Msg_69;

            {
              mercury__io__Result0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__io__Result0_16, 0) = ((MR_Box) (mercury__io__V_71_71));
            }
          }
        if ((mercury__io__Result0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mercury__io__Result_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__io__String_15));
          }
        else
          {
            MR_Word mercury__io__Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__Result0_16, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Result_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__String_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__io__Error_17));
            }
          }
      }
    else
      {
        MR_Word mercury__io__V_29_29 = (MR_Word) ((MR_Box) ((MR_String) "null character in input"));

        *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_4[2]);
      }
  }
}

void MR_CALL 
mercury__io__read_file_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__io__read_file_2_5_p_0(mercury__io__Stream_5, mercury__io__V_10_10, mercury__io__Result_6);
    }
  }
}

void MR_CALL 
mercury__io__read_line_as_string_4_p_0(
  MR_Word mercury__io__HeadVar__1_1,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_5 = (MR_Box) mercury__io__HeadVar__1_1;
    MR_Integer mercury__io__Res_8;
    MR_String mercury__io__String_9;

{
#define MR_PROC_LABEL mercury__io__read_line_as_string_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Res;
	MR_String RetString;

	Stream = (MercuryFilePtr) mercury__io__Stream_5 ;
		{

#define ML_IO_READ_LINE_GROW(n) ((n) * 3 / 2)
#define ML_IO_BYTES_TO_WORDS(n) (((n) + sizeof(MR_Word) - 1) / sizeof(MR_Word))
#define ML_IO_READ_LINE_START   1024

    char initial_read_buffer[ML_IO_READ_LINE_START];
    char *read_buffer = initial_read_buffer;
    size_t read_buf_size = ML_IO_READ_LINE_START;
    size_t i;
    int char_code = '\0';

    Res = 0;
    for (i = 0; char_code != '\n'; ) {
        char_code = mercury_get_byte(Stream);
        if (char_code == EOF) {
            if (i == 0) {
                Res = -1;
            }
            break;
        }
        if (char_code == 0) {
            Res = -2;
            break;
        }
        read_buffer[i++] = (char) char_code;
        MR_assert(i <= read_buf_size);
        if (i == read_buf_size) {
            /* Grow the read buffer */
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
    if (Res == 0) {
        MR_Word ret_string_word;
        MR_offset_incr_hp_atomic_msg(ret_string_word,
            0, ML_IO_BYTES_TO_WORDS((i + 1) * sizeof(char)),
            MR_ALLOC_ID, "string.string/0");
        RetString = (MR_String) ret_string_word;
        MR_memcpy(RetString, read_buffer, i * sizeof(char));
        RetString[i] = '\0';
    } else {
        /*
        ** We can't just return NULL here, because otherwise mdb will break
        ** when it tries to print the string.
        */
        RetString = MR_make_string_const("");
    }
    if (read_buffer != initial_read_buffer) {
        MR_free(read_buffer);
    }


		;}
#undef MR_PROC_LABEL
	 mercury__io__Res_8  = Res;
	 mercury__io__String_9  = RetString;
}
    mercury__io__succeeded = (mercury__io__Res_8 < (MR_Integer) 0);
    if (mercury__io__succeeded)
      {
        mercury__io__succeeded = (mercury__io__Res_8 == (MR_Integer) -1);
        if (mercury__io__succeeded)
          *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            mercury__io__succeeded = (mercury__io__Res_8 == (MR_Integer) -2);
            if (mercury__io__succeeded)
              {
                MR_Word mercury__io__V_16_16 = (MR_Word) ((MR_Box) ((MR_String) "null character in input"));

                *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__io_scalar_common_5[0]);
              }
            else
              {
                MR_String mercury__io__Msg_10;
                MR_Word mercury__io__V_20_20;
                MR_Box mercury__io__Error_42;

{
#define MR_PROC_LABEL mercury__io__read_line_as_string_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_42 );
}
{
#define MR_PROC_LABEL mercury__io__read_line_as_string_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_42 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_10  = Msg;
}
                mercury__io__V_20_20 = (MR_Word) mercury__io__Msg_10;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__io__Result_6 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__io__V_20_20));
                }
              }
          }
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mercury__io__Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__String_9));
      }
  }
}

void MR_CALL 
mercury__io__read_line_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Code_8;
    MR_Box mercury__io__Stream_25 = (MR_Box) mercury__io__Stream_5;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_25, &mercury__io__Code_8);
    }
    mercury__io__succeeded = (mercury__io__Code_8 == (MR_Integer) -1);
    if (mercury__io__succeeded)
      *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Char mercury__io__Char_9;

{
#define MR_PROC_LABEL mercury__io__read_line_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_8 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_9  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__io__succeeded)
          {
            mercury__io__succeeded = (mercury__io__Char_9 == (MR_Char) 10);
            if (mercury__io__succeeded)
              {
                MR_Word mercury__io__V_15_15;
                MR_Word mercury__io__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__io__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__io__V_15_15, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_9));
                  MR_hl_field(MR_mktag(1), mercury__io__V_15_15, 1) = ((MR_Box) (mercury__io__V_16_16));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__io__Result_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_15_15));
                }
              }
            else
              {
                MR_Word mercury__io__Result0_10;
                MR_Word mercury__io__V_18_18;

                {
                  mercury__io__read_line_2_4_p_0(mercury__io__Stream_5, &mercury__io__Result0_10);
                }
                {
                  mercury__io__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__io__V_18_18, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_9));
                  MR_hl_field(MR_mktag(1), mercury__io__V_18_18, 1) = ((MR_Box) (mercury__io__Result0_10));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__io__Result_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_18_18));
                }
              }
          }
        else
          {
            MR_String mercury__io__Msg_11;
            MR_Word mercury__io__V_21_21;
            MR_Box mercury__io__Error_33;

{
#define MR_PROC_LABEL mercury__io__read_line_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_33 );
}
{
#define MR_PROC_LABEL mercury__io__read_line_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_33 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_11  = Msg;
}
            mercury__io__V_21_21 = (MR_Word) mercury__io__Msg_11;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Result_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__io__V_21_21));
            }
          }
      }
  }
}

void MR_CALL 
mercury__io__read_word_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__WSResult_8;

    {
      mercury__io__ignore_whitespace_4_p_0(mercury__io__Stream_5, &mercury__io__WSResult_8);
    }
    switch (MR_tag((MR_Word) mercury__io__WSResult_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__io__WSResult_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__read_word_2_4_p_0(mercury__io__Stream_5, mercury__io__Result_6);
            }
            break;
          case (MR_Integer) 1:
            *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__io__Error_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__io__WSResult_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__io__Error_9));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__read_char_unboxed_5_p_0(
  MR_Word mercury__io__Stream_6,
  MR_Word * mercury__io__Result_7,
  MR_Char * mercury__io__Char_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Code_10;
    MR_Box mercury__io__Stream_24 = (MR_Box) mercury__io__Stream_6;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_24, &mercury__io__Code_10);
    }
    mercury__io__succeeded = (mercury__io__Code_10 == (MR_Integer) -1);
    if (mercury__io__succeeded)
      {
        *mercury__io__Result_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, mercury__io__Char_8);
        }
      }
    else
      {
        MR_Char mercury__io__Char0_11;

{
#define MR_PROC_LABEL mercury__io__read_char_unboxed_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_10 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char0_11  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__io__succeeded)
          {
            *mercury__io__Result_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__io__Char_8 = mercury__io__Char0_11;
          }
        else
          {
            MR_String mercury__io__Msg_12;
            MR_Word mercury__io__V_19_19;
            MR_Box mercury__io__Error_34;

{
#define MR_PROC_LABEL mercury__io__read_char_unboxed_5_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_34 );
}
{
#define MR_PROC_LABEL mercury__io__read_char_unboxed_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_34 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_12  = Msg;
}
            mercury__io__V_19_19 = (MR_Word) mercury__io__Msg_12;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Result_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__io__V_19_19));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, mercury__io__Char_8);
            }
          }
      }
  }
}

void MR_CALL 
mercury__io__read_char_4_p_0(
  MR_Word mercury__io__Stream_5,
  MR_Word * mercury__io__Result_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Code_8;
    MR_Box mercury__io__Stream_20 = (MR_Box) mercury__io__Stream_5;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_20, &mercury__io__Code_8);
    }
    mercury__io__succeeded = (mercury__io__Code_8 == (MR_Integer) -1);
    if (mercury__io__succeeded)
      *mercury__io__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Char mercury__io__Char_9;

{
#define MR_PROC_LABEL mercury__io__read_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_8 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_9  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__io__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_9));
          }
        else
          {
            MR_String mercury__io__Msg_10;
            MR_Word mercury__io__V_16_16;
            MR_Box mercury__io__Error_28;

{
#define MR_PROC_LABEL mercury__io__read_char_4_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_28 );
}
{
#define MR_PROC_LABEL mercury__io__read_char_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_28 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_10  = Msg;
}
            mercury__io__V_16_16 = (MR_Word) mercury__io__Msg_10;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Result_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__io__V_16_16));
            }
          }
      }
  }
}

void MR_CALL 
mercury__io__putback_char_3_p_0(
  MR_Char mercury__io__Char_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Box mercury__io__Stream_19;

{
#define MR_PROC_LABEL mercury__io__putback_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_19  = (MR_Box) Stream;
}
    {
      mercury__io__putback_char_2_4_p_0(mercury__io__Stream_19, mercury__io__Char_4);
    }
  }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_maybe_stop_5_p_1(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Pred_6,
  MR_Box mercury__io__T0_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_10;
    MR_Box mercury__io__Stream_18;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_18  = (MR_Box) Stream;
}
    mercury__io__Stream_10 = (MR_Word) mercury__io__Stream_18;
    {
      mercury__io__input_stream_foldl2_io_maybe_stop_6_p_1(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
    }
  }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_maybe_stop_5_p_0(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Pred_6,
  MR_Box mercury__io__T0_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_10;
    MR_Box mercury__io__Stream_18;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_18  = (MR_Box) Stream;
}
    mercury__io__Stream_10 = (MR_Word) mercury__io__Stream_18;
    {
      mercury__io__input_stream_foldl2_io_maybe_stop_6_p_0(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
    }
  }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_5_p_1(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Pred_6,
  MR_Box mercury__io__T0_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_10;
    MR_Box mercury__io__Stream_18;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_18  = (MR_Box) Stream;
}
    mercury__io__Stream_10 = (MR_Word) mercury__io__Stream_18;
    {
      mercury__io__input_stream_foldl2_io_6_p_1(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
    }
  }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_5_p_0(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Pred_6,
  MR_Box mercury__io__T0_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_10;
    MR_Box mercury__io__Stream_18;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_18  = (MR_Box) Stream;
}
    mercury__io__Stream_10 = (MR_Word) mercury__io__Stream_18;
    {
      mercury__io__input_stream_foldl2_io_6_p_0(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
    }
  }
}

void MR_CALL 
mercury__io__input_stream_foldl_io_4_p_1(
  MR_Word mercury__io__Pred_5,
  MR_Word * mercury__io__Res_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_8;
    MR_Box mercury__io__Stream_15;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_4_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_15  = (MR_Box) Stream;
}
    mercury__io__Stream_8 = (MR_Word) mercury__io__Stream_15;
    {
      mercury__io__input_stream_foldl_io_5_p_1(mercury__io__Stream_8, mercury__io__Pred_5, mercury__io__Res_6);
    }
  }
}

void MR_CALL 
mercury__io__input_stream_foldl_io_4_p_0(
  MR_Word mercury__io__Pred_5,
  MR_Word * mercury__io__Res_6)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_8;
    MR_Box mercury__io__Stream_15;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_15  = (MR_Box) Stream;
}
    mercury__io__Stream_8 = (MR_Word) mercury__io__Stream_15;
    {
      mercury__io__input_stream_foldl_io_5_p_0(mercury__io__Stream_8, mercury__io__Pred_5, mercury__io__Res_6);
    }
  }
}

void MR_CALL 
mercury__io__input_stream_foldl_5_p_1(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Pred_6,
  MR_Box mercury__io__T0_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_10;
    MR_Box mercury__io__Stream_18;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_18  = (MR_Box) Stream;
}
    mercury__io__Stream_10 = (MR_Word) mercury__io__Stream_18;
    {
      mercury__io__input_stream_foldl_6_p_1(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
    }
  }
}

void MR_CALL 
mercury__io__input_stream_foldl_5_p_0(
  MR_Word mercury__io__TypeInfo_for_T_15,
  MR_Word mercury__io__Pred_6,
  MR_Box mercury__io__T0_7,
  MR_Word * mercury__io__Res_8)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_10;
    MR_Box mercury__io__Stream_18;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_18  = (MR_Box) Stream;
}
    mercury__io__Stream_10 = (MR_Word) mercury__io__Stream_18;
    {
      mercury__io__input_stream_foldl_6_p_0(mercury__io__TypeInfo_for_T_15, mercury__io__Stream_10, mercury__io__Pred_6, mercury__io__T0_7, mercury__io__Res_8);
    }
  }
}

void MR_CALL 
mercury__io__read_file_as_string_3_p_0(
  MR_Word * mercury__io__Result_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_6;
    MR_Box mercury__io__Stream_13;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_13  = (MR_Box) Stream;
}
    mercury__io__Stream_6 = (MR_Word) mercury__io__Stream_13;
    {
      mercury__io__read_file_as_string_4_p_0(mercury__io__Stream_6, mercury__io__Result_4);
    }
  }
}

void MR_CALL 
mercury__io__read_file_3_p_0(
  MR_Word * mercury__io__Result_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_6;
    MR_Box mercury__io__Stream_13;
    MR_Word mercury__io__V_21_21;

{
#define MR_PROC_LABEL mercury__io__read_file_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_13  = (MR_Box) Stream;
}
    mercury__io__Stream_6 = (MR_Word) mercury__io__Stream_13;
    mercury__io__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__io__read_file_2_5_p_0(mercury__io__Stream_6, mercury__io__V_21_21, mercury__io__Result_4);
    }
  }
}

void MR_CALL 
mercury__io__read_line_as_string_3_p_0(
  MR_Word * mercury__io__Result_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_6;
    MR_Box mercury__io__Stream_13;

{
#define MR_PROC_LABEL mercury__io__read_line_as_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_13  = (MR_Box) Stream;
}
    mercury__io__Stream_6 = (MR_Word) mercury__io__Stream_13;
    {
      mercury__io__read_line_as_string_4_p_0(mercury__io__Stream_6, mercury__io__Result_4);
    }
  }
}

void MR_CALL 
mercury__io__read_line_3_p_0(
  MR_Word * mercury__io__Result_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_6;
    MR_Box mercury__io__Stream_13;

{
#define MR_PROC_LABEL mercury__io__read_line_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_13  = (MR_Box) Stream;
}
    mercury__io__Stream_6 = (MR_Word) mercury__io__Stream_13;
    {
      mercury__io__read_line_4_p_0(mercury__io__Stream_6, mercury__io__Result_4);
    }
  }
}

void MR_CALL 
mercury__io__read_word_3_p_0(
  MR_Word * mercury__io__Result_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Word mercury__io__Stream_6;
    MR_Box mercury__io__Stream_13;

{
#define MR_PROC_LABEL mercury__io__read_word_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_13  = (MR_Box) Stream;
}
    mercury__io__Stream_6 = (MR_Word) mercury__io__Stream_13;
    {
      mercury__io__read_word_4_p_0(mercury__io__Stream_6, mercury__io__Result_4);
    }
  }
}

void MR_CALL 
mercury__io__read_char_3_p_0(
  MR_Word * mercury__io__Result_4)
{
  {
    MR_bool mercury__io__succeeded;
    MR_Integer mercury__io__Code_21;
    MR_Box mercury__io__Stream_31;

{
#define MR_PROC_LABEL mercury__io__read_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__io__Stream_31  = (MR_Box) Stream;
}
    {
      mercury__io__read_char_code_2_4_p_0(mercury__io__Stream_31, &mercury__io__Code_21);
    }
    mercury__io__succeeded = (mercury__io__Code_21 == (MR_Integer) -1);
    if (mercury__io__succeeded)
      *mercury__io__Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Char mercury__io__Char_22;

{
#define MR_PROC_LABEL mercury__io__read_char_3_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__io__Code_21 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__io__Char_22  = Character;
	}
mercury__io__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__io__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__io__Result_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__io__Char_22));
          }
        else
          {
            MR_String mercury__io__Msg_23;
            MR_Word mercury__io__V_27_27;
            MR_Box mercury__io__Error_39;

{
#define MR_PROC_LABEL mercury__io__read_char_3_p_0

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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__io__Error_39 );
}
{
#define MR_PROC_LABEL mercury__io__read_char_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__io__Error_39 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__io__Msg_23  = Msg;
}
            mercury__io__V_27_27 = (MR_Word) mercury__io__Msg_23;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__io__Result_4 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__io__V_27_27));
            }
          }
      }
  }
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
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_buffer_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_chunk_inner_res_1);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_chunk_inner_res0_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_error_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_file_id_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_file_type_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_input_stream_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_io_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_maybe_partial_res_1);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_maybe_stream_info_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_output_stream_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_poly_type_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_posn_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_read_result_1);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_res_1);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_res_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_result_1);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_result_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_state_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_stream_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_stream_content_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_stream_db_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_stream_id_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_stream_info_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_stream_mode_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_stream_source_0);
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module io. */
