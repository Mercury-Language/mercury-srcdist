/*
** Automatically generated from `io.m'
** by the Mercury compiler,
** version rotd-2022-06-19
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
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

static const MR_EnumFunctorDescPtr mercury__io__io__enum_ordinal_ordered_file_type_0[11];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_file_type_0[11];

static const MR_Integer mercury__io__io__functor_number_map_file_type_0[11];

static const MR_Integer mercury__io__io__functor_number_map_input_stream_0[1];

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_input_stream_0;

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

static const MR_Integer mercury__io__io__functor_number_map_output_stream_0[1];

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_output_stream_0;

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

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_1;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_whence_0_2;

static const MR_EnumFunctorDescPtr mercury__io__io__enum_ordinal_ordered_whence_0[3];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_whence_0[3];

static const MR_Integer mercury__io__io__functor_number_map_whence_0[3];

static void MR_CALL 
mercury__io__IntroducedFrom__pred__update_globals__4687__1_3_p_0(
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
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint64__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int64__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
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
mercury__io__ClassMethod_for_stream__unboxed_reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0_10001(
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
mercury__io__ClassMethod_for_stream__stream____io__output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
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
mercury__io__ClassMethod_for_stream__stream____io__input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
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
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
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
mercury__io__ClassMethod_for_stream__putback____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
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
mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
mercury__io__ClassMethod_for_stream__error____io__error__arity0______stream__error_message_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box mercury__io_scalar_common_1[7][3];

static /* final */ const MR_Box mercury__io_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__io_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__io_scalar_common_4[4][2];

static /* final */ const MR_Box mercury__io_scalar_common_5[2][1];

static /* final */ const MR_Integer mercury__io_scalar_common_6[1][2];

static /* final */ const MR_Box mercury__io_scalar_common_7[2][9];

static /* final */ const MR_Box mercury__io_scalar_common_8[1][7];

static /* final */ const MR_Box mercury__io_scalar_common_9[1][8];

static /* final */ const MR_Box mercury__io_scalar_common_10[1][6];




static /* final */ const MR_Box mercury__io_scalar_common_1[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (((MR_Box) ((MR_String) "null character in input"))))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    (MR_Box) (((((MR_Unsigned) 0U << 2)) | (MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    (MR_Box) (((((MR_Unsigned) 1U << 2)) | (MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    (MR_Box) (((((MR_Unsigned) 1U << 2)) | (MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
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
    ((MR_Box) (((MR_Box) ((MR_String) "null character in input"))))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_5[2][1] = {
  /* row   0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "null character in input"))))
  },
  /* row   1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "io.read_binary: missing newline"))))
  },
};

static /* final */ const MR_Integer mercury__io_scalar_common_6[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_7[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mercury__io_scalar_common_6[0])),
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
    ((MR_Box) (&mercury__io_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__array__pti_array_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_8[1][7] = {
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

static /* final */ const MR_Box mercury__io_scalar_common_9[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_10[1][6] = {
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
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"
#line 5902 "io.m"

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

#ifdef MR_WIN32

// Accessing Unicode file names on Windows requires that we use the functions
// taking wide character strings.
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

#endif // MR_WIN32


#line 3658 "io.m"
void 
ML_io_print_to_stream(
  MR_Word TypeInfo_for_T_12,
  MercuryFilePtr Stream_5,
  MR_Word Term_6)
#line 3658 "io.m"
{
#line 3658 "io.m"
	MR_Box boxed_Stream_5;
	MR_MAYBE_BOX_FOREIGN_TYPE(MercuryFilePtr, Stream_5, boxed_Stream_5);
	mercury__io__print_to_stream_4_p_0((MR_Word) TypeInfo_for_T_12, boxed_Stream_5, (MR_Box) Term_6);
}


static const MR_FA_PseudoTypeInfo_Struct1 mercury__io__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
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
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
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

static const MR_Integer mercury__io__io__functor_number_map_binary_input_stream_0[1] = {
  (MR_Integer) 0
};

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

static const MR_Integer mercury__io__io__functor_number_map_binary_output_stream_0[1] = {
  (MR_Integer) 0
};

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res_1_2[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res0_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

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

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_chunk_inner_res0_0_1[1] = {
  &mercury__io__io__du_functor_desc_chunk_inner_res0_0_1
};

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

static const MR_Integer mercury__io__io__functor_number_map_error_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_error_0 = {
  (MR_String) "io_error",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__io____Unify____error_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____error_0_0_10001)),
  (MR_String) "io",
  (MR_String) "error",
  { &mercury__io__io__notag_functor_desc_error_0 },
  { &mercury__io__io__notag_functor_desc_error_0 },
  (MR_Integer) 1,
  UINT16_C(4),
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

static const MR_Integer mercury__io__io__functor_number_map_input_stream_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_input_stream_0 = {
  (MR_String) "input_stream",
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_stream_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_input_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__io____Unify____input_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____input_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "input_stream",
  { &mercury__io__io__notag_functor_desc_input_stream_0 },
  { &mercury__io__io__notag_functor_desc_input_stream_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__io__io__functor_number_map_input_stream_0,

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_incomplete_result_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

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
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0)
  }
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_incomplete_result_1_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__list__ti_list_1builtin__type_ctor_info_uint8_0)
};

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_incomplete_result_1_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

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

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_0[1] = {
  &mercury__io__io__du_functor_desc_maybe_incomplete_result_1_1
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_1[1] = {
  &mercury__io__io__du_functor_desc_maybe_incomplete_result_1_0
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_2[1] = {
  &mercury__io__io__du_functor_desc_maybe_incomplete_result_1_2
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_incomplete_result_1_3[1] = {
  &mercury__io__io__du_functor_desc_maybe_incomplete_result_1_3
};

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_partial_res_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

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

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_1_0[1] = {
  &mercury__io__io__du_functor_desc_maybe_partial_res_1_0
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_1_1[1] = {
  &mercury__io__io__du_functor_desc_maybe_partial_res_1_1
};

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

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_2_2_0[1] = {
  &mercury__io__io__du_functor_desc_maybe_partial_res_2_2_0
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_maybe_partial_res_2_2_1[1] = {
  &mercury__io__io__du_functor_desc_maybe_partial_res_2_2_1
};

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

static const MR_Integer mercury__io__io__functor_number_map_output_stream_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__io__io__notag_functor_desc_output_stream_0 = {
  (MR_String) "output_stream",
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_stream_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_output_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__io____Unify____output_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____output_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "output_stream",
  { &mercury__io__io__notag_functor_desc_output_stream_0 },
  { &mercury__io__io__notag_functor_desc_output_stream_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__io__io__functor_number_map_output_stream_0,

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

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_posn_0_0[1] = {
  &mercury__io__io__du_functor_desc_posn_0_0
};

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

static const MR_DuFunctorDescPtr mercury__io__io__du_name_ordered_posn_0[1] = {
  &mercury__io__io__du_functor_desc_posn_0_0
};

static const MR_Integer mercury__io__io__functor_number_map_posn_0[1] = {
  (MR_Integer) 0
};

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_read_result_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_res_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_res_1_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

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

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_1_0[1] = {
  &mercury__io__io__du_functor_desc_res_1_0
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_1_1[1] = {
  &mercury__io__io__du_functor_desc_res_1_1
};

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_res_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

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

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_0_0[1] = {
  &mercury__io__io__du_functor_desc_res_0_0
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_res_0_1[1] = {
  &mercury__io__io__du_functor_desc_res_0_1
};

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_result_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_result_1_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_result_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

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

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_result_0_1[1] = {
  &mercury__io__io__du_functor_desc_result_0_2
};

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_system_result_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo mercury__io__io__field_types_system_result_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_system_result_0_0[1] = {
  &mercury__io__io__du_functor_desc_system_result_0_0
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_system_result_0_1[1] = {
  &mercury__io__io__du_functor_desc_system_result_0_1
};

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

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_text_input_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io____Unify____text_input_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____text_input_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "text_input_stream",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_input_stream_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_text_output_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io____Unify____text_output_stream_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____text_output_stream_0_0_10001)),
  (MR_String) "io",
  (MR_String) "text_output_stream",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__univ__univ__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__uint64__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint64__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__uint32__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__uint16__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__uint8__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__uint__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__int64__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int64__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__int32__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__int16__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__int8__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__int__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__float__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
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

const MR_BaseTypeclassInfo base_typeclass_info_stream__unboxed_reader__arity4__io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__unboxed_reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__io__binary_output_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__stream____io__output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__io__binary_input_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__io__input_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__stream____io__input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
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

const MR_BaseTypeclassInfo base_typeclass_info_stream__reader__arity4__io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__reader__arity4__io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__reader__arity4__io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001))
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

const MR_BaseTypeclassInfo base_typeclass_info_stream__putback__arity4__io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__putback____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__io__binary_output_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__line_oriented__arity2__io__output_stream__arity0__io__state__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__line_oriented__arity2__io__input_stream__arity0__io__state__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__input__arity2__io__binary_input_stream__arity0__io__state__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__input__arity2__io__input_stream__arity0__io__state__arity0__[5] = {
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
mercury__io__IntroducedFrom__pred__update_globals__4687__1_3_p_0(
  MR_Word UpdatePred_4,
  MR_Word Globals0_6,
  MR_Word * LambdaHeadVar__1_16)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), UpdatePred_4, (MR_Integer) 1))));
  MR_Box conv1_LambdaHeadVar__1_16;

  func_0(((MR_Box) (UpdatePred_4)), ((MR_Box) (Globals0_6)), &conv1_LambdaHeadVar__1_16);
  *LambdaHeadVar__1_16 = ((MR_Word) (conv1_LambdaHeadVar__1_16));
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Char HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Character = HeadVar__2_2 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Float HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Val = HeadVar__2_2 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Val = HeadVar__2_2 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	int8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Val = HeadVar__2_2 ;
		{

    if (ML_fprintf(Stream, "%" PRId8, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  int16_t HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	int16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Val = HeadVar__2_2 ;
		{

    if (ML_fprintf(Stream, "%" PRId16, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	int32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Val = HeadVar__2_2 ;
		{

    if (ML_fprintf(Stream, "%" PRId32, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int64__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int64__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	int64_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Val = HeadVar__2_2 ;
		{

    if (ML_fprintf(Stream, "%" PRId64, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Unsigned Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Val = HeadVar__2_2 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "u", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	uint8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Val = HeadVar__2_2 ;
		{

    if (ML_fprintf(Stream, "%" PRIu8, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	uint16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Val = HeadVar__2_2 ;
		{

    if (ML_fprintf(Stream, "%" PRIu16, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	uint32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Val = HeadVar__2_2 ;
		{

    if (ML_fprintf(Stream, "%" PRIu32, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint64__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint64__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	uint64_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Val = HeadVar__2_2 ;
		{

    if (ML_fprintf(Stream, "%" PRIu64, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Message = HeadVar__2_2 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), HeadVar__1_1, (MR_Integer) 1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Byte = HeadVar__2_2 ;
		{

    // Call putc with a strictly non-negative byte-sized integer.
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  uint8_t UInt8_10;
  MR_Integer Int_11;
  MR_Box Error_12;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0

	int8_t I8;
	uint8_t U8;

	I8 = HeadVar__2_2 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	UInt8_10  = U8;
}
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = UInt8_10 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Int_11  = I;
}
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Byte = Int_11 ;
		{

    // Call putc with a strictly non-negative byte-sized integer.
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_12 );
}
  mercury__io__throw_on_error_4_p_0(Error_12, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Integer Int_10;
  MR_Box Error_11;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = HeadVar__2_2 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Int_10  = I;
}
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_8 ;
	Byte = Int_10 ;
		{

    // Call putc with a strictly non-negative byte-sized integer.
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_11 );
}
  mercury__io__throw_on_error_4_p_0(Error_11, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__unboxed_reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0(
  MR_Word Stream_6,
  MR_Word * Result_7,
  MR_Char * Char_8)
{
  MR_Word Result0_10;
  MR_Word ResultCode_19;
  MR_Box Error_20;
  MR_Box Var_27 = (MR_Box) (Stream_6);

  mercury__io__primitives_read__read_char_code_2_6_p_0(Var_27, &ResultCode_19, &Error_20, Char_8);
  switch (ResultCode_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Result0_10 = (MR_Word) ((MR_Unsigned) 4U);
      break;
    case (MR_Integer) 2:
      {
        MR_String Msg_34;
        MR_Word Var_37;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__unboxed_reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_20 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_34  = Msg;
}
        Var_37 = (MR_Word) (Msg_34);
        {
          Result0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Result0_10, 0) = ((MR_Box) (Var_37));
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
        MR_Word Error_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_10, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_38));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__unboxed_reader____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0(
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
        MR_Word Error_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_10, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_13));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__unboxed_reader____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0(
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
        MR_Word Error_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_10, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_13));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);

  mercury__io__stream_db__stream_name_4_p_0(Stream_8, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);

  mercury__io__stream_db__stream_name_4_p_0(Stream_8, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);

  mercury__io__stream_db__stream_name_4_p_0(Stream_8, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);

  mercury__io__stream_db__stream_name_4_p_0(Stream_8, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek64_5_5_p_0(
  MR_Word Stream_6,
  MR_Word Whence0_7,
  int64_t OffSet_8)
{
  MR_Word Whence_10;
  MR_Box Stream_17;
  MR_Integer Flag_19;
  MR_Box Error_20;

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
  Stream_17 = (MR_Box) (Stream_6);
  mercury__io__stream_ops__whence_to_int_2_p_0(Whence_10, &Flag_19);
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek64_5_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	int64_t Off;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Flag = Flag_19 ;
	Off = OffSet_8 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_20 );
}
  mercury__io__throw_on_error_4_p_0(Error_20, (MR_String) "error seeking in file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0(
  MR_Word Stream_6,
  MR_Word Whence0_7,
  MR_Integer OffSet_8)
{
  MR_Word Whence_10;
  MR_Box Stream_17;
  MR_Integer Flag_19;
  MR_Box Error_20;
  int64_t Var_21;

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
  Stream_17 = (MR_Box) (Stream_6);
  mercury__io__stream_ops__whence_to_int_2_p_0(Whence_10, &Flag_19);
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0

	MR_Integer I;
	int64_t I64;

	I = OffSet_8 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_21  = I64;
}
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	int64_t Off;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Flag = Flag_19 ;
	Off = Var_21 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_20 );
}
  mercury__io__throw_on_error_4_p_0(Error_20, (MR_String) "error seeking in file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek64_5_5_p_0(
  MR_Word Stream_6,
  MR_Word Whence0_7,
  int64_t Offset_11)
{
  MR_Word Whence_10;
  MR_Box Stream_18;
  MR_Integer Flag_20;
  MR_Box Error_21;

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
  Stream_18 = (MR_Box) (Stream_6);
  mercury__io__stream_ops__whence_to_int_2_p_0(Whence_10, &Flag_20);
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek64_5_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	int64_t Off;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_18 ;
	Flag = Flag_20 ;
	Off = Offset_11 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_21 );
}
  mercury__io__throw_on_error_4_p_0(Error_21, (MR_String) "error seeking in file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0(
  MR_Word Stream_6,
  MR_Word Whence0_7,
  MR_Integer OffSet_8)
{
  MR_Word Whence_10;
  MR_Box Stream_18;
  MR_Integer Flag_20;
  MR_Box Error_21;
  int64_t Var_22;

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
  Stream_18 = (MR_Box) (Stream_6);
  mercury__io__stream_ops__whence_to_int_2_p_0(Whence_10, &Flag_20);
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0

	MR_Integer I;
	int64_t I64;

	I = OffSet_8 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_22  = I64;
}
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	int64_t Off;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_18 ;
	Flag = Flag_20 ;
	Off = Var_22 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_21 );
}
  mercury__io__throw_on_error_4_p_0(Error_21, (MR_String) "error seeking in file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;
  MR_Word ResultCode_17;
  MR_Box Error_18;
  MR_Char Char_19;
  MR_Box Var_27 = (MR_Box) (Stream_5);

  mercury__io__primitives_read__read_char_code_2_6_p_0(Var_27, &ResultCode_17, &Error_18, &Char_19);
  switch (ResultCode_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Result0_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_String Msg_35;
        MR_Word Var_38;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_18 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_35  = Msg;
}
        Var_38 = (MR_Word) (Msg_35);
        {
          Result0_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Result0_8, 0) = ((MR_Box) (Var_38));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        Result0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Result0_8, 0) = ((MR_Box) (MR_Word) (Char_19));
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
        MR_Char T_39 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (T_39));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result0_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_40));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
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
        MR_String String_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0))));
        MR_Word Var_14 = (MR_Word) (String_9);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result0_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_10));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;

  mercury__io__read_file_as_string_4_p_0(Stream_5, &Result0_8);
  if (((MR_tag((MR_Word) Result0_8)) == (MR_Integer) 1))
  {
    MR_Word Error_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 1))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_11));
    }
  }
  else
  {
    MR_String String_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Result0_8, (MR_Integer) 0))));
    MR_Word Var_15 = (MR_Word) (String_9);

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;
  MR_Box Stream_15 = (MR_Box) (Stream_5);
  MR_Word ResultCode_17;
  MR_Box Error_18;
  MR_Integer Byte_19;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_15 ;
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
	ResultCode_17  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_18 );
	Byte_19  = ByteVal;
}
  switch (ResultCode_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Result0_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_String Msg_36;
        MR_Word Var_39;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_18 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_36  = Msg;
}
        Var_39 = (MR_Word) (Msg_36);
        {
          Result0_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Result0_8, 0) = ((MR_Box) (Var_39));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        Result0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Result0_8, 0) = ((MR_Box) (Byte_19));
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
        MR_Integer T_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (T_40));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result0_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_41));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
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
        int8_t T_12 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (T_12));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result0_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_13));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
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
        uint8_t T_12 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (T_12));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result0_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_13));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Char HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Word Ok_10;

  mercury__io__primitives_read__putback_char_2_5_p_0(Stream_8, HeadVar__2_2, &Ok_10);
  switch (Ok_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (((MR_Box) ((MR_String) "failed to put back character")))));
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
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  uint8_t UInt8_10;
  MR_Word Ok_11;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0

	int8_t I8;
	uint8_t U8;

	I8 = HeadVar__2_2 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	UInt8_10  = U8;
}
{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0

	MercuryFilePtr Stream;
	uint8_t UInt8;
	MR_Word Ok;

	Stream = (MercuryFilePtr)Stream_8 ;
	UInt8 = UInt8_10 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, UInt8) == EOF) {
        Ok = MR_FALSE;
    } else {
        Ok = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	Ok_11  = Ok;
}
  switch (Ok_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (((MR_Box) ((MR_String) "failed to put back int8")))));
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
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);
  MR_Word Ok_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0

	MercuryFilePtr Stream;
	uint8_t UInt8;
	MR_Word Ok;

	Stream = (MercuryFilePtr)Stream_8 ;
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
	Ok_10  = Ok;
}
  switch (Ok_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (((MR_Box) ((MR_String) "failed to put back uint8")))));
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
mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(
  MR_Word HeadVar__1_1)
{
  MR_Box Stream_6 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_6 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(
  MR_Word HeadVar__1_1)
{
  MR_Box Stream_6 = (MR_Box) (HeadVar__1_1);
  MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_6 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_8 ;
	LineNum = HeadVar__2_2 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_8 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = LineNum;
}
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_8 ;
	LineNum = HeadVar__2_2 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  MR_Box Stream_8 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_8 ;
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
  MR_String HeadVar__2_2 = (MR_String) (HeadVar__1_1);

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
mercury__io____Compare____text_output_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__io____Compare____output_stream_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__io____Unify____text_output_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__io____Unify____output_stream_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____text_input_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__io____Compare____input_stream_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__io____Unify____text_input_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__io____Unify____input_stream_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____system_result_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

      succeeded = (Var_16 < ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_16 == ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Integer ArgY1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      succeeded = (Var_17 < ArgY1_11);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_17 == ArgY1_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  else
  {
    MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
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
  MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_10 == CastY_11);
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
        {
          MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                MR_String Var_14 = (MR_String) (Var_13);
                MR_String Var_15 = (MR_String) (ArgY1_9);
                MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__io____Compare____result_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_14 ;
	S2 = Var_15 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_19  = Res;
}
                succeeded = (Var_19 < (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_19 == (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
                }
              }
              break;
          }
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
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;
          MR_Integer CastX_13;
          MR_Integer CastY_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            CastX_13 = (MR_Integer) (ArgX1_7);
            CastY_14 = (MR_Integer) (ArgY1_8);
            succeeded = (CastX_13 == CastY_14);
            if (succeeded)
              succeeded = MR_TRUE;
            else
            {
              MR_String ArgX1_11 = (MR_String) (ArgX1_7);
              MR_String ArgY1_12 = (MR_String) (ArgY1_8);

              succeeded = (strcmp(ArgX1_11, ArgY1_12) == 0);
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____result_1_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_16 == CastY_17);
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
        {
          MR_Box Var_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_18, HeadVar__1_1, Var_21, ArgY1_5);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                MR_String Var_22 = (MR_String) (Var_20);
                MR_String Var_23 = (MR_String) (ArgY1_15);
                MR_Integer Var_27;

{
#define MR_PROC_LABEL mercury__io____Compare____result_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_22 ;
	S2 = Var_23 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_27  = Res;
}
                succeeded = (Var_27 < (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_27 == (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
                }
              }
              break;
          }
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
          MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;
          MR_Integer CastX_14;
          MR_Integer CastY_15;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            CastX_14 = (MR_Integer) (ArgX1_7);
            CastY_15 = (MR_Integer) (ArgY1_8);
            succeeded = (CastX_14 == CastY_15);
            if (succeeded)
              succeeded = MR_TRUE;
            else
            {
              MR_String ArgX1_12 = (MR_String) (ArgX1_7);
              MR_String ArgY1_13 = (MR_String) (ArgY1_8);

              succeeded = (strcmp(ArgX1_12, ArgY1_13) == 0);
            }
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
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_String Var_12 = (MR_String) (Var_11);
      MR_String Var_13 = (MR_String) (ArgY1_7);
      MR_Integer Var_17;

{
#define MR_PROC_LABEL mercury__io____Compare____res_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_12 ;
	S2 = Var_13 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_17  = Res;
}
      succeeded = (Var_17 < (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_17 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Integer CastX_11;
    MR_Integer CastY_12;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      CastX_11 = (MR_Integer) (ArgX1_5);
      CastY_12 = (MR_Integer) (ArgY1_6);
      succeeded = (CastX_11 == CastY_12);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_String ArgX1_9 = (MR_String) (ArgX1_5);
        MR_String ArgY1_10 = (MR_String) (ArgY1_6);

        succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____res_1_0(
  MR_Word TypeInfo_for_T_14,
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_String Var_18 = (MR_String) (Var_16);
      MR_String Var_19 = (MR_String) (ArgY1_11);
      MR_Integer Var_23;

{
#define MR_PROC_LABEL mercury__io____Compare____res_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_18 ;
	S2 = Var_19 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_23  = Res;
}
      succeeded = (Var_23 < (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_23 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Box Var_17 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, HeadVar__1_1, Var_17, ArgY1_5);
    }
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Integer CastX_12;
    MR_Integer CastY_13;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      CastX_12 = (MR_Integer) (ArgX1_5);
      CastY_13 = (MR_Integer) (ArgY1_6);
      succeeded = (CastX_12 == CastY_13);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_String ArgX1_10 = (MR_String) (ArgX1_5);
        MR_String ArgY1_11 = (MR_String) (ArgY1_6);

        succeeded = (strcmp(ArgX1_10, ArgY1_11) == 0);
      }
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____read_result_1_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_23 == CastY_24);
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
        {
          MR_Box Var_30 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_25, HeadVar__1_1, Var_30, ArgY1_5);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_29 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgY1_19 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_20;
                MR_Integer Var_34;

{
#define MR_PROC_LABEL mercury__io____Compare____read_result_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_29 ;
	S2 = ArgY1_19 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_34  = Res;
}
                succeeded = (Var_34 < (MR_Integer) 0);
                if (succeeded)
                  SubResult1_20 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_34 == (MR_Integer) 0);
                  if (succeeded)
                    SubResult1_20 = (MR_Integer) 0;
                  else
                    SubResult1_20 = (MR_Integer) 2;
                }
                succeeded = (SubResult1_20 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_20;
                else
                {
                  succeeded = (Var_28 < ArgY2_22);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_28 == ArgY2_22);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
              }
              break;
          }
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
          MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;
          MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

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
  MR_Word TypeInfo_for_T1_29,
  MR_Word TypeInfo_for_T2_30,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
    MR_Box Var_33 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
    MR_Box Var_34 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Box ArgY1_20 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
      MR_Box ArgY2_23 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
      MR_Word ArgY3_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_21;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T1_29, &SubResult1_21, Var_34, ArgY1_20);
      succeeded = (SubResult1_21 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_21;
      else
      {
        MR_Word SubResult2_24;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T2_30, &SubResult2_24, Var_33, ArgY2_23);
        succeeded = (SubResult2_24 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_24;
        else
        {
          MR_String Var_37 = (MR_String) (Var_32);
          MR_String Var_38 = (MR_String) (ArgY3_26);
          MR_Integer Var_42;

{
#define MR_PROC_LABEL mercury__io____Compare____maybe_partial_res_2_2_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_37 ;
	S2 = Var_38 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_42  = Res;
}
          succeeded = (Var_42 < (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_42 == (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 0;
            else
              *HeadVar__1_1 = (MR_Integer) 2;
          }
        }
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Box Var_35 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
    MR_Box Var_36 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
      MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T1_29, &SubResult1_6, Var_36, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0(TypeInfo_for_T2_30, HeadVar__1_1, Var_35, ArgY2_8);
    }
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
    MR_Box ArgX1_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_8;
    MR_Box ArgX2_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_10;
    MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_12;
    MR_Integer CastX_19;
    MR_Integer CastY_20;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      ArgY2_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      ArgY3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_15, ArgX1_7, ArgY1_8);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T2_16, ArgX2_9, ArgY2_10);
        if (succeeded)
        {
          CastX_19 = (MR_Integer) (ArgX3_11);
          CastY_20 = (MR_Integer) (ArgY3_12);
          succeeded = (CastX_19 == CastY_20);
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_String ArgX1_17 = (MR_String) (ArgX3_11);
            MR_String ArgY1_18 = (MR_String) (ArgY3_12);

            succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
          }
        }
      }
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;
    MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T1_15, ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T2_16, ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____maybe_partial_res_1_0(
  MR_Word TypeInfo_for_T_19,
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
  {
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box Var_22 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Box ArgY1_13 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_14;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_19, &SubResult1_14, Var_22, ArgY1_13);
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
      {
        MR_String Var_24 = (MR_String) (Var_21);
        MR_String Var_25 = (MR_String) (ArgY2_16);
        MR_Integer Var_29;

{
#define MR_PROC_LABEL mercury__io____Compare____maybe_partial_res_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_24 ;
	S2 = Var_25 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_29  = Res;
}
        succeeded = (Var_29 < (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_29 == (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 0;
          else
            *HeadVar__1_1 = (MR_Integer) 2;
        }
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Box Var_23 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_19, HeadVar__1_1, Var_23, ArgY1_5);
    }
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
    MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Integer CastX_14;
    MR_Integer CastY_15;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        CastX_14 = (MR_Integer) (ArgX2_7);
        CastY_15 = (MR_Integer) (ArgY2_8);
        succeeded = (CastX_14 == CastY_15);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_String ArgX1_12 = (MR_String) (ArgX2_7);
          MR_String ArgY1_13 = (MR_String) (ArgY2_8);

          succeeded = (strcmp(ArgX1_12, ArgY1_13) == 0);
        }
      }
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
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
  MR_Word TypeInfo_for_T_30,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_28 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_29 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_28 == CastY_29);
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
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_35 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_30, HeadVar__1_1, Var_35, ArgY1_5);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&mercury__io_scalar_common_4[2]), HeadVar__1_1, ((MR_Box) (Var_34)), ((MR_Box) (ArgY1_18)));
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgY1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                MR_String Var_36 = (MR_String) (Var_33);
                MR_String Var_37 = (MR_String) (ArgY1_27);
                MR_Integer Var_41;

{
#define MR_PROC_LABEL mercury__io____Compare____maybe_incomplete_result_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_36 ;
	S2 = Var_37 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_41  = Res;
}
                succeeded = (Var_41 < (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_41 == (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
                }
              }
              break;
          }
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
          MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_14_14;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_14_14 = (MR_Word) (&mercury__io_scalar_common_4[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;
          MR_Integer CastX_17;
          MR_Integer CastY_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
            CastX_17 = (MR_Integer) (ArgX1_9);
            CastY_18 = (MR_Integer) (ArgY1_10);
            succeeded = (CastX_17 == CastY_18);
            if (succeeded)
              succeeded = MR_TRUE;
            else
            {
              MR_String ArgX1_15 = (MR_String) (ArgX1_9);
              MR_String ArgY1_16 = (MR_String) (ArgY1_10);

              succeeded = (strcmp(ArgX1_15, ArgY1_16) == 0);
            }
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
mercury__io____Compare____error_0_0(
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
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);
    MR_Integer Var_12;

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
	Var_12  = Res;
}
    succeeded = (Var_12 < (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_12 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____error_0_0(
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
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
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
  MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_10 == CastY_11);
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
        {
          MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                MR_String Var_14 = (MR_String) (Var_13);
                MR_String Var_15 = (MR_String) (ArgY1_7);
                MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__io____Compare____chunk_inner_res0_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_14 ;
	S2 = Var_15 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_19  = Res;
}
                succeeded = (Var_19 < (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_19 == (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
                }
              }
              break;
          }
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
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;
          MR_Integer CastX_13;
          MR_Integer CastY_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            CastX_13 = (MR_Integer) (ArgX1_5);
            CastY_14 = (MR_Integer) (ArgY1_6);
            succeeded = (CastX_13 == CastY_14);
            if (succeeded)
              succeeded = MR_TRUE;
            else
            {
              MR_String ArgX1_11 = (MR_String) (ArgX1_5);
              MR_String ArgY1_12 = (MR_String) (ArgY1_6);

              succeeded = (strcmp(ArgX1_11, ArgY1_12) == 0);
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__io____Compare____chunk_inner_res_1_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_29 == CastY_30);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Var_36 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_31, HeadVar__1_1, Var_36, ArgY1_5);
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_34 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Box ArgY1_15 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_16;

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_31, &SubResult1_16, Var_34, ArgY1_15);
                succeeded = (SubResult1_16 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_16;
                else
                {
                  MR_String Var_37 = (MR_String) (Var_33);
                  MR_String Var_38 = (MR_String) (ArgY2_18);
                  MR_Integer Var_42;

{
#define MR_PROC_LABEL mercury__io____Compare____chunk_inner_res_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_37 ;
	S2 = Var_38 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_42  = Res;
}
                  succeeded = (Var_42 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_42 == (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_35 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Box ArgY1_28 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_31, HeadVar__1_1, Var_35, ArgY1_28);
              }
              break;
          }
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
          MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;
          MR_Integer CastX_16;
          MR_Integer CastY_17;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_5, ArgY1_6);
            if (succeeded)
            {
              CastX_16 = (MR_Integer) (ArgX2_7);
              CastY_17 = (MR_Integer) (ArgY2_8);
              succeeded = (CastX_16 == CastY_17);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_String ArgX1_14 = (MR_String) (ArgX2_7);
                MR_String ArgY1_15 = (MR_String) (ArgY2_8);

                succeeded = (strcmp(ArgX1_14, ArgY1_15) == 0);
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box ArgX1_9 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_9, ArgY1_10);
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
mercury__io__throw_on_close_error_3_p_0(
  MR_Box Error_4)
{
  mercury__io__throw_on_error_4_p_0(Error_4, (MR_String) "error closing file: ");
}

void MR_CALL 
mercury__io__make_win32_err_msg_5_p_0(
  MR_Box Error_1,
  MR_String Msg0_2,
  MR_String * Msg_3)
{
{
#define MR_PROC_LABEL mercury__io__make_win32_err_msg_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_1 , Error);
	Msg0 = Msg0_2 ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	*Msg_3  = Msg;
}
}

MR_bool MR_CALL 
mercury__io__is_success_1_p_0(
  MR_Box Error_1)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__is_success_1_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_1 , Error);
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_Box MR_CALL 
mercury__io__no_error_0_f_0(void)
{
  MR_Box Error_1;

{
#define MR_PROC_LABEL mercury__io__no_error_0_f_0

	MR_Integer Error;

		{

    Error = 0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_1 );
}
  return Error_1;
}

void MR_CALL 
mercury__io__interpret_maybe_incomplete_result_code_7_p_0(
  MR_Word TypeInfo_for_T_20,
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
        MR_String Msg_14;
        MR_Word Var_19;

{
#define MR_PROC_LABEL mercury__io__interpret_maybe_incomplete_result_code_7_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_14  = Msg;
}
        Var_19 = (MR_Word) (Msg_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_12 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_19));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_12 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = Value_11;
      }
      break;
  }
}

void MR_CALL 
mercury__io__interpret_result_code1_6_p_0(
  MR_Word TypeInfo_for_T_18,
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
        MR_String Msg_12;
        MR_Word Var_17;

{
#define MR_PROC_LABEL mercury__io__interpret_result_code1_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_8 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_12  = Msg;
}
        Var_17 = (MR_Word) (Msg_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_10 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_17));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = Value_9;
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
        MR_String Msg_10;
        MR_Word Var_15;

{
#define MR_PROC_LABEL mercury__io__interpret_result_code0_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_7 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_10  = Msg;
}
        Var_15 = (MR_Word) (Msg_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
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
        MR_Word Error_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Error_3));
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
        MR_Box T_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = T_3;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_4 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));

        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Error_4));
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
  MR_Box NewStream_14;
  MR_Box OutStream_15;

  *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  NewStream_14 = (MR_Box) (Stream_7);
{
#define MR_PROC_LABEL mercury__io__restore_output_stream_5_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_14 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_15  = (MR_Box) OutStream;
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
  MR_Box NewStream_14;
  MR_Box OutStream_15;

  *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  NewStream_14 = (MR_Box) (Stream_7);
{
#define MR_PROC_LABEL mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_111_114_101_95_111_117_116_112_117_116_95_115_116_114_101_97_109_95_95_91_49_93_95_48_5_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_14 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_15  = (MR_Box) OutStream;
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
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_5, (MR_Integer) 1))));
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
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_5, (MR_Integer) 1))));
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

  mercury__io__restore_output_stream_5_p_1(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv1_HeadVar__3_3);
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

  mercury__io__call_pred_no_result_4_p_1(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv0_HeadVar__2_2);
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
  MR_Box NewStream_25 = (MR_Box) (Stream_5);
  MR_Box OutStream_26;
  MR_Word _CleanupRes_10;
  MR_Box conv2__Result_9;

{
#define MR_PROC_LABEL mercury__io__with_output_stream_4_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_25 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_26  = (MR_Box) OutStream;
}
  OrigStream_8 = (MR_Word) (OutStream_26);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mercury__io__with_output_stream_4_p_1_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Pred_6));
  }
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&mercury__io_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (mercury__io__with_output_stream_4_p_1_2));
    MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Pred_6));
    MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (OrigStream_8));
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

  mercury__io__restore_output_stream_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv1_HeadVar__3_3);
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

  mercury__io__call_pred_no_result_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv0_HeadVar__2_2);
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
  MR_Box NewStream_25 = (MR_Box) (Stream_5);
  MR_Box OutStream_26;
  MR_Word _CleanupRes_10;
  MR_Box conv2__Result_9;

{
#define MR_PROC_LABEL mercury__io__with_output_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_25 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_26  = (MR_Box) OutStream;
}
  OrigStream_8 = (MR_Word) (OutStream_26);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mercury__io__with_output_stream_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Pred_6));
  }
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&mercury__io_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (mercury__io__with_output_stream_4_p_0_2));
    MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Pred_6));
    MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (OrigStream_8));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
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
mercury__io__print_to_stream_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box Stream_5,
  MR_Box Term_6)
{
  MR_Word Var_10 = (MR_Word) (Stream_5);
  MR_Box conv0_STATE_VARIABLE_IO_9;

  mercury__stream__string_writer__print_5_p_1(TypeInfo_for_T_12, (MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), ((MR_Box) (Var_10)), (MR_Integer) 1, Term_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
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

void MR_CALL 
mercury__io__throw_on_output_error_3_p_0(
  MR_Box Error_4)
{
  mercury__io__throw_on_error_4_p_0(Error_4, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__make_maybe_win32_err_msg_5_p_0(
  MR_Box Error_6,
  MR_String Msg0_7,
  MR_String * Msg_8)
{
  MR_bool succeeded;

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
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__io__make_maybe_win32_err_msg_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_6 , Error);
	Msg0 = Msg0_7 ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	*Msg_8  = Msg;
}
  }
  else
  {
{
#define MR_PROC_LABEL mercury__io__make_maybe_win32_err_msg_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_6 , Error);
	Msg0 = Msg0_7 ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	*Msg_8  = Msg;
}
  }
}

void MR_CALL 
mercury__io__make_err_msg_5_p_0(
  MR_Box Error_1,
  MR_String Msg0_2,
  MR_String * Msg_3)
{
{
#define MR_PROC_LABEL mercury__io__make_err_msg_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_1 , Error);
	Msg0 = Msg0_2 ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	*Msg_3  = Msg;
}
}

void MR_CALL 
mercury__io__is_maybe_win32_error_5_p_0(
  MR_Box Error_6,
  MR_String Prefix_7,
  MR_Word * MaybeError_8)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__is_maybe_win32_error_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_6 , Error);
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *MaybeError_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Message_10;
    MR_Word IOError_11;

{
#define MR_PROC_LABEL mercury__io__is_maybe_win32_error_5_p_0

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
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__io__is_maybe_win32_error_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_6 , Error);
	Msg0 = Prefix_7 ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	Message_10  = Msg;
}
    }
    else
    {
{
#define MR_PROC_LABEL mercury__io__is_maybe_win32_error_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_6 , Error);
	Msg0 = Prefix_7 ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Message_10  = Msg;
}
    }
    IOError_11 = (MR_Word) (Message_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeError_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_11));
    }
  }
}

void MR_CALL 
mercury__io__is_error_5_p_0(
  MR_Box Error_6,
  MR_String Prefix_7,
  MR_Word * MaybeError_8)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__is_error_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_6 , Error);
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *MaybeError_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Message_10;
    MR_Word IOError_11;

{
#define MR_PROC_LABEL mercury__io__is_error_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_6 , Error);
	Msg0 = Prefix_7 ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Message_10  = Msg;
}
    IOError_11 = (MR_Word) (Message_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeError_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_11));
    }
  }
}

void MR_CALL 
mercury__io__set_op_table_3_p_0(void)
{
  mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_111_112_95_116_97_98_108_101_95_95_91_49_93_95_48_3_p_0();
}

void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_111_112_95_116_97_98_108_101_95_95_91_49_93_95_48_3_p_0(void)
{
}

void MR_CALL 
mercury__io__get_op_table_3_p_0(void)
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
}
{
#define MR_PROC_LABEL mercury__io__file_id_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
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
    MR_String Message_22;
    MR_Word IOError_23;

{
#define MR_PROC_LABEL mercury__io__file_id_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "cannot get file id: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Message_22  = Msg;
}
    IOError_23 = (MR_Word) (Message_22);
    {
      MaybeIOError_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeIOError_10, 0) = ((MR_Box) (IOError_23));
    }
  }
  if ((MaybeIOError_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FileId_8));
    }
  else
  {
    MR_Word IOError_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_10, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_11));
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
  mercury__io__stream_db__insert_stream_info_4_p_0(Stdin_4, (MR_Word) (&mercury__io_scalar_common_1[4]));
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	Stdout_5  = (MR_Box) Stream;
}
  mercury__io__stream_db__insert_stream_info_4_p_0(Stdout_5, (MR_Word) (&mercury__io_scalar_common_1[5]));
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Stderr_6  = (MR_Box) Stream;
}
  mercury__io__stream_db__insert_stream_info_4_p_0(Stderr_6, (MR_Word) (&mercury__io_scalar_common_1[6]));
}

void MR_CALL 
mercury__io__init_current_streams_2_p_0(void)
{
  MR_Word StdinBinary_6;
  MR_Word StdoutBinary_7;
  MR_Box NewStream_22;
  MR_Box NewStream_28;
  MR_Box Stream_33;
  MR_Box Stream_37;
  MR_Box NewStream_41;
  MR_Box NewStream_46;
  MR_Box OutStream_23;
  MR_Box OutStream_29;
  MR_Box OutStream_42;
  MR_Box OutStream_47;

{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	NewStream_22  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_22 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	OutStream_23  = (MR_Box) OutStream;
}
{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	NewStream_28  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_28 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_29  = (MR_Box) OutStream;
}
{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin_binary;


		;}
#undef MR_PROC_LABEL
	Stream_33  = (MR_Box) Stream;
}
  StdinBinary_6 = (MR_Word) (Stream_33);
{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout_binary;


		;}
#undef MR_PROC_LABEL
	Stream_37  = (MR_Box) Stream;
}
  StdoutBinary_7 = (MR_Word) (Stream_37);
  NewStream_41 = (MR_Box) (StdinBinary_6);
{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_41 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	OutStream_42  = (MR_Box) OutStream;
}
  NewStream_46 = (MR_Box) (StdoutBinary_7);
{
#define MR_PROC_LABEL mercury__io__init_current_streams_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_46 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_47  = (MR_Box) OutStream;
}
}

void MR_CALL 
mercury__io__error_message_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Error_3)
{
  *Error_3 = (MR_String) (HeadVar__1_1);
}

MR_String MR_CALL 
mercury__io__error_message_1_f_0(
  MR_Word Error_3)
{
  MR_String Msg_4 = (MR_String) (Error_3);

  return Msg_4;
}

MR_Word MR_CALL 
mercury__io__make_io_error_1_f_0(
  MR_String Error_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (Error_3);

  return HeadVar__2_2;
}

void MR_CALL 
mercury__io__report_tabling_statistics_2_p_0(void)
{
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__report_tabling_statistics_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__report_tabling_statistics_2_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr)Stream_12 ;
		{

    MR_table_report_statistics(MR_file(*Stream));


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__report_tabling_statistics_3_p_0(
  MR_Word HeadVar__1_1)
{
  MR_Box Var_12 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__io__report_tabling_statistics_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr)Var_12 ;
		{

    MR_table_report_statistics(MR_file(*Stream));


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__report_full_memory_stats_2_p_0(void)
{
  MR_Box Stream_12;
  MR_Box Var_21;

{
#define MR_PROC_LABEL mercury__io__report_full_memory_stats_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__report_full_memory_stats_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_12 ;
		{

    Error = MR_report_full_memory_stats(MR_file(*Stream),
        &MR_line_number(*Stream));


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_21 );
}
  mercury__io__throw_on_error_4_p_0(Var_21, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__report_full_memory_stats_3_p_0(
  MR_Word HeadVar__1_1)
{
  MR_Box Var_12 = (MR_Box) (HeadVar__1_1);
  MR_Box Var_13;

{
#define MR_PROC_LABEL mercury__io__report_full_memory_stats_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_12 ;
		{

    Error = MR_report_full_memory_stats(MR_file(*Stream),
        &MR_line_number(*Stream));


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_13 );
}
  mercury__io__throw_on_error_4_p_0(Var_13, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__report_standard_stats_2_p_0(void)
{
  MR_Box Stream_12;
  MR_Box Var_21;

{
#define MR_PROC_LABEL mercury__io__report_standard_stats_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__report_standard_stats_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_12 ;
		{

    Error = MR_report_standard_stats(MR_file(*Stream),
        &MR_line_number(*Stream));


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_21 );
}
  mercury__io__throw_on_error_4_p_0(Var_21, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__report_standard_stats_3_p_0(
  MR_Word HeadVar__1_1)
{
  MR_Box Var_12 = (MR_Box) (HeadVar__1_1);
  MR_Box Var_13;

{
#define MR_PROC_LABEL mercury__io__report_standard_stats_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_12 ;
		{

    Error = MR_report_standard_stats(MR_file(*Stream),
        &MR_line_number(*Stream));


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_13 );
}
  mercury__io__throw_on_error_4_p_0(Var_13, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__report_stats_3_p_0(
  MR_String Selector_4)
{
  MR_Word Var_11;
  MR_Box Stream_15;

{
#define MR_PROC_LABEL mercury__io__report_stats_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Var_11 = (MR_Word) (Stream_15);
  mercury__benchmarking__report_stats_4_p_0(Var_11, Selector_4);
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

  mercury__io__IntroducedFrom__pred__update_globals__4687__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv0_LambdaHeadVar__1_16);
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
    MR_hl_field(MR_mktag(0), Update_7, 0) = ((MR_Box) (&mercury__io_scalar_common_10[0]));
    MR_hl_field(MR_mktag(0), Update_7, 1) = ((MR_Box) (mercury__io__update_globals_3_p_0_1));
    MR_hl_field(MR_mktag(0), Update_7, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Update_7, 3) = ((MR_Box) (UpdatePred_4));
    MR_hl_field(MR_mktag(0), Update_7, 4) = ((MR_Box) (Globals0_6));
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
    MR_Word Globals_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UpdateResult_9, (MR_Integer) 0))));

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
  MR_Word Var_12;

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
	Var_12  = EnvVarAL;
}
  mercury__tree234__assoc_list_to_tree234_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_12, (MR_Word) ((MR_Unsigned) 0U), EnvVarMap_4);
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
  MR_String Var_11;

  mercury__io__file__get_temp_directory_3_p_0(&Var_11);
  mercury__io__file__make_temp_directory_6_p_0(Var_11, (MR_String) "mtmp", (MR_String) "", Result_4);
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
  MR_String Var_11;

  mercury__io__file__get_temp_directory_3_p_0(&Var_11);
  mercury__io__file__make_temp_file_6_p_0(Var_11, (MR_String) "mtmp", (MR_String) "", Result_4);
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
  MR_Box Stream_17;
  MR_Word ShouldReduce_26;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_17);
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
	ShouldReduce_26  = ShouldReduce;
}
  switch (ShouldReduce_26) {
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
          MR_Box T_13 = (MR_hl_field(MR_mktag(0), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T_13;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 1))));
          MR_Box T_21 = (MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T_21;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box T1_15 = (MR_hl_field(MR_mktag(2), InnerRes_12, (MR_Integer) 0));
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
      MR_Box Stream_31 = (MR_Box) (Stream_9);
      MR_Word ResultCode_33;
      MR_Box Error_34;
      MR_Integer Byte_35;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_1

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_31 ;
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
	ResultCode_33  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_34 );
	Byte_35  = ByteVal;
}
      switch (ResultCode_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_String Msg_52;
            MR_Word Var_55;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_34 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_52  = Msg;
}
            Var_55 = (MR_Word) (Msg_52);
            {
              ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ByteResult_14, 0) = ((MR_Box) (Var_55));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ByteResult_14, 0) = ((MR_Box) (Byte_35));
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
            MR_hl_field(MR_mktag(0), base, 0) = T0_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ByteResult_14, (MR_Integer) 0))));
            MR_Word Continue_16;
            MR_Box T1_17;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
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
                  MR_hl_field(MR_mktag(0), base, 0) = T1_17;
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
            MR_Word Error_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ByteResult_14, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Res_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = T0_11;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_18));
            }
          }
          break;
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_12 = base;
        MR_hl_field(MR_mktag(2), base, 0) = T0_11;
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
    MR_Box Stream_25 = (MR_Box) (Stream_7);
    MR_Word ResultCode_27;
    MR_Box Error_28;
    MR_Integer Byte_29;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_25 ;
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
	ResultCode_27  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_28 );
	Byte_29  = ByteVal;
}
    switch (ResultCode_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_46;
          MR_Word Var_49;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_28 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_46  = Msg;
}
          Var_49 = (MR_Word) (Msg_46);
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_49));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_29));
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
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0))));
          MR_Word Continue_14;
          MR_Box T1_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
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
                MR_hl_field(MR_mktag(0), base, 0) = T1_15;
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
          MR_Word Error_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_16));
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
  MR_Box Stream_17;
  MR_Word ShouldReduce_26;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_17);
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
	ShouldReduce_26  = ShouldReduce;
}
  switch (ShouldReduce_26) {
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
          MR_Box T_13 = (MR_hl_field(MR_mktag(0), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T_13;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 1))));
          MR_Box T_21 = (MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T_21;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box T1_15 = (MR_hl_field(MR_mktag(2), InnerRes_12, (MR_Integer) 0));
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
      MR_Box Stream_31 = (MR_Box) (Stream_9);
      MR_Word ResultCode_33;
      MR_Box Error_34;
      MR_Integer Byte_35;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_31 ;
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
	ResultCode_33  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_34 );
	Byte_35  = ByteVal;
}
      switch (ResultCode_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_String Msg_52;
            MR_Word Var_55;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_34 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_52  = Msg;
}
            Var_55 = (MR_Word) (Msg_52);
            {
              ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ByteResult_14, 0) = ((MR_Box) (Var_55));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ByteResult_14, 0) = ((MR_Box) (Byte_35));
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
            MR_hl_field(MR_mktag(0), base, 0) = T0_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ByteResult_14, (MR_Integer) 0))));
            MR_Word Continue_16;
            MR_Box T1_17;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
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
                  MR_hl_field(MR_mktag(0), base, 0) = T1_17;
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
            MR_Word Error_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ByteResult_14, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Res_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = T0_11;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_18));
            }
          }
          break;
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_12 = base;
        MR_hl_field(MR_mktag(2), base, 0) = T0_11;
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
    MR_Box Stream_25 = (MR_Box) (Stream_7);
    MR_Word ResultCode_27;
    MR_Box Error_28;
    MR_Integer Byte_29;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_25 ;
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
	ResultCode_27  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_28 );
	Byte_29  = ByteVal;
}
    switch (ResultCode_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_46;
          MR_Word Var_49;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_28 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_46  = Msg;
}
          Var_49 = (MR_Word) (Msg_46);
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_49));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_29));
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
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0))));
          MR_Word Continue_14;
          MR_Box T1_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
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
                MR_hl_field(MR_mktag(0), base, 0) = T1_15;
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
          MR_Word Error_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_16));
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
  MR_Box Stream_17;
  MR_Word ShouldReduce_26;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_17);
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
	ShouldReduce_26  = ShouldReduce;
}
  switch (ShouldReduce_26) {
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
          MR_Box T_13 = (MR_hl_field(MR_mktag(0), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T_13;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 1))));
          MR_Box T_21 = (MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T_21;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box T1_15 = (MR_hl_field(MR_mktag(2), InnerRes_12, (MR_Integer) 0));
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
      MR_Box Stream_30 = (MR_Box) (Stream_9);
      MR_Word ResultCode_32;
      MR_Box Error_33;
      MR_Integer Byte_34;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_1

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_30 ;
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
	ResultCode_32  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_33 );
	Byte_34  = ByteVal;
}
      switch (ResultCode_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_String Msg_51;
            MR_Word Var_54;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_33 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_51  = Msg;
}
            Var_54 = (MR_Word) (Msg_51);
            {
              ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ByteResult_14, 0) = ((MR_Box) (Var_54));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ByteResult_14, 0) = ((MR_Box) (Byte_34));
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
            MR_hl_field(MR_mktag(0), base, 0) = T0_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ByteResult_14, (MR_Integer) 0))));
            MR_Box T1_16;
            MR_Integer Var_23;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
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
            MR_Word Error_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ByteResult_14, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Res_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = T0_11;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_17));
            }
          }
          break;
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_12 = base;
        MR_hl_field(MR_mktag(2), base, 0) = T0_11;
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
    MR_Box Stream_24 = (MR_Box) (Stream_7);
    MR_Word ResultCode_26;
    MR_Box Error_27;
    MR_Integer Byte_28;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_1

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_24 ;
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
	ResultCode_26  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_27 );
	Byte_28  = ByteVal;
}
    switch (ResultCode_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_45;
          MR_Word Var_48;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_27 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_45  = Msg;
}
          Var_48 = (MR_Word) (Msg_45);
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_48));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_28));
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
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0))));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
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
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_15));
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
  MR_Box Stream_17;
  MR_Word ShouldReduce_26;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_17);
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
	ShouldReduce_26  = ShouldReduce;
}
  switch (ShouldReduce_26) {
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
          MR_Box T_13 = (MR_hl_field(MR_mktag(0), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T_13;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 1))));
          MR_Box T_21 = (MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T_21;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box T1_15 = (MR_hl_field(MR_mktag(2), InnerRes_12, (MR_Integer) 0));
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
      MR_Box Stream_30 = (MR_Box) (Stream_9);
      MR_Word ResultCode_32;
      MR_Box Error_33;
      MR_Integer Byte_34;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_30 ;
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
	ResultCode_32  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_33 );
	Byte_34  = ByteVal;
}
      switch (ResultCode_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_String Msg_51;
            MR_Word Var_54;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_33 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_51  = Msg;
}
            Var_54 = (MR_Word) (Msg_51);
            {
              ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ByteResult_14, 0) = ((MR_Box) (Var_54));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ByteResult_14, 0) = ((MR_Box) (Byte_34));
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
            MR_hl_field(MR_mktag(0), base, 0) = T0_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ByteResult_14, (MR_Integer) 0))));
            MR_Box T1_16;
            MR_Integer Var_23;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
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
            MR_Word Error_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ByteResult_14, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Res_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = T0_11;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_17));
            }
          }
          break;
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_12 = base;
        MR_hl_field(MR_mktag(2), base, 0) = T0_11;
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
    MR_Box Stream_24 = (MR_Box) (Stream_7);
    MR_Word ResultCode_26;
    MR_Box Error_27;
    MR_Integer Byte_28;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_24 ;
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
	ResultCode_26  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_27 );
	Byte_28  = ByteVal;
}
    switch (ResultCode_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_45;
          MR_Word Var_48;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_27 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_45  = Msg;
}
          Var_48 = (MR_Word) (Msg_45);
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_48));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_28));
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
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0))));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
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
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_15));
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
  MR_Box Stream_14;
  MR_Word ShouldReduce_22;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_4_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_14  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Stream_14);
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
	ShouldReduce_22  = ShouldReduce;
}
  switch (ShouldReduce_22) {
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
          MR_Word Error_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InnerRes_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_11));
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
      MR_Box Stream_26 = (MR_Box) (Stream_8);
      MR_Word ResultCode_28;
      MR_Box Error_29;
      MR_Integer Byte_30;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_1

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_26 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_29 );
	Byte_30  = ByteVal;
}
      switch (ResultCode_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_String Msg_47;
            MR_Word Var_50;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_29 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_47  = Msg;
}
            Var_50 = (MR_Word) (Msg_47);
            {
              ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_50));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_30));
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
            MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0))));
            MR_Integer Var_20;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_9, (MR_Integer) 1))));
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
            MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Res_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_14));
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
    MR_Box Stream_20 = (MR_Box) (Stream_6);
    MR_Word ResultCode_22;
    MR_Box Error_23;
    MR_Integer Byte_24;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_1

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
	ResultCode_22  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_23 );
	Byte_24  = ByteVal;
}
    switch (ResultCode_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_41;
          MR_Word Var_44;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_23 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_41  = Msg;
}
          Var_44 = (MR_Word) (Msg_41);
          {
            ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_10, 0) = ((MR_Box) (Var_44));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_10, 0) = ((MR_Box) (Byte_24));
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
          MR_Integer Byte_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ByteResult_10, (MR_Integer) 0))));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_16_16;

          func_0(((MR_Box) (Pred_7)), ((MR_Box) (Byte_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
          // direct tailcall eliminated
          ;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ByteResult_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_12));
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
  MR_Box Stream_14;
  MR_Word ShouldReduce_22;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_14  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Stream_14);
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
	ShouldReduce_22  = ShouldReduce;
}
  switch (ShouldReduce_22) {
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
          MR_Word Error_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InnerRes_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_11));
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
      MR_Box Stream_26 = (MR_Box) (Stream_8);
      MR_Word ResultCode_28;
      MR_Box Error_29;
      MR_Integer Byte_30;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_26 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_29 );
	Byte_30  = ByteVal;
}
      switch (ResultCode_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          {
            MR_String Msg_47;
            MR_Word Var_50;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_29 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_47  = Msg;
}
            Var_50 = (MR_Word) (Msg_47);
            {
              ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_50));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_30));
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
            MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0))));
            MR_Integer Var_20;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_9, (MR_Integer) 1))));
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
            MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Res_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_14));
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
    MR_Box Stream_20 = (MR_Box) (Stream_6);
    MR_Word ResultCode_22;
    MR_Box Error_23;
    MR_Integer Byte_24;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_0

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
	ResultCode_22  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_23 );
	Byte_24  = ByteVal;
}
    switch (ResultCode_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_41;
          MR_Word Var_44;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_23 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_41  = Msg;
}
          Var_44 = (MR_Word) (Msg_41);
          {
            ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_10, 0) = ((MR_Box) (Var_44));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_10, 0) = ((MR_Box) (Byte_24));
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
          MR_Integer Byte_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ByteResult_10, (MR_Integer) 0))));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_16_16;

          func_0(((MR_Box) (Pred_7)), ((MR_Box) (Byte_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
          // direct tailcall eliminated
          ;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ByteResult_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_12));
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
  MR_Box Stream_17;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_17);
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
    MR_Box Stream_23 = (MR_Box) (Stream_7);
    MR_Word ResultCode_25;
    MR_Box Error_26;
    MR_Integer Byte_27;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_1

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
	ResultCode_25  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_26 );
	Byte_27  = ByteVal;
}
    switch (ResultCode_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_44;
          MR_Word Var_47;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_26 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_44  = Msg;
}
          Var_47 = (MR_Word) (Msg_44);
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_47));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_27));
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
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0))));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
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
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_15));
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
  MR_Box Stream_17;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_17);
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
    MR_Box Stream_23 = (MR_Box) (Stream_7);
    MR_Word ResultCode_25;
    MR_Box Error_26;
    MR_Integer Byte_27;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_0

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
	ResultCode_25  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_26 );
	Byte_27  = ByteVal;
}
    switch (ResultCode_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_44;
          MR_Word Var_47;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_26 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_44  = Msg;
}
          Var_47 = (MR_Word) (Msg_44);
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_47));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_27));
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
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0))));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
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
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_15));
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
  MR_Box Stream_17;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_17);
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
    MR_Word ResultCode_27;
    MR_Box Error_28;
    MR_Char Char_29;
    MR_Box Var_37 = (MR_Box) (Stream_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_37, &ResultCode_27, &Error_28, &Char_29);
    switch (ResultCode_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_45;
          MR_Word Var_48;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_28 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_45  = Msg;
}
          Var_48 = (MR_Word) (Msg_45);
          {
            CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_12, 0) = ((MR_Box) (Var_48));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_29));
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
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_12, (MR_Integer) 0)));
          MR_Word Continue_14;
          MR_Box T1_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
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
                MR_hl_field(MR_mktag(0), base, 0) = T1_15;
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
          MR_Word Error_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CharResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_16));
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
  MR_Box Stream_17;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_17);
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
    MR_Word ResultCode_27;
    MR_Box Error_28;
    MR_Char Char_29;
    MR_Box Var_37 = (MR_Box) (Stream_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_37, &ResultCode_27, &Error_28, &Char_29);
    switch (ResultCode_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_45;
          MR_Word Var_48;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_28 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_45  = Msg;
}
          Var_48 = (MR_Word) (Msg_45);
          {
            CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_12, 0) = ((MR_Box) (Var_48));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_29));
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
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_12, (MR_Integer) 0)));
          MR_Word Continue_14;
          MR_Box T1_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
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
                MR_hl_field(MR_mktag(0), base, 0) = T1_15;
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
          MR_Word Error_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CharResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_16));
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
  MR_Box Stream_17;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_17);
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
    MR_Word ResultCode_26;
    MR_Box Error_27;
    MR_Char Char_28;
    MR_Box Var_36 = (MR_Box) (Stream_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_36, &ResultCode_26, &Error_27, &Char_28);
    switch (ResultCode_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_44;
          MR_Word Var_47;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_27 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_44  = Msg;
}
          Var_47 = (MR_Word) (Msg_44);
          {
            CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_12, 0) = ((MR_Box) (Var_47));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_28));
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
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
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
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CharResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_15));
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
  MR_Box Stream_17;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_17);
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
    MR_Word ResultCode_26;
    MR_Box Error_27;
    MR_Char Char_28;
    MR_Box Var_36 = (MR_Box) (Stream_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_36, &ResultCode_26, &Error_27, &Char_28);
    switch (ResultCode_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_44;
          MR_Word Var_47;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_27 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_44  = Msg;
}
          Var_47 = (MR_Word) (Msg_44);
          {
            CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_12, 0) = ((MR_Box) (Var_47));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_28));
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
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
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
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CharResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_15));
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
  MR_Box Stream_14;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_4_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_14  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Stream_14);
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
    MR_Word ResultCode_22;
    MR_Box Error_23;
    MR_Char Char_24;
    MR_Box Var_32 = (MR_Box) (Stream_6);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_32, &ResultCode_22, &Error_23, &Char_24);
    switch (ResultCode_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_40;
          MR_Word Var_43;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_5_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_23 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_40  = Msg;
}
          Var_43 = (MR_Word) (Msg_40);
          {
            CharResult_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_10, 0) = ((MR_Box) (Var_43));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_10, 0) = ((MR_Box) (MR_Word) (Char_24));
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
          MR_Char Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_10, (MR_Integer) 0)));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_16_16;

          func_0(((MR_Box) (Pred_7)), ((MR_Box) (MR_Word) (Char_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
          // direct tailcall eliminated
          ;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CharResult_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_12));
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
  MR_Box Stream_14;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_14  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Stream_14);
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
    MR_Word ResultCode_22;
    MR_Box Error_23;
    MR_Char Char_24;
    MR_Box Var_32 = (MR_Box) (Stream_6);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_32, &ResultCode_22, &Error_23, &Char_24);
    switch (ResultCode_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_40;
          MR_Word Var_43;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_23 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_40  = Msg;
}
          Var_43 = (MR_Word) (Msg_40);
          {
            CharResult_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_10, 0) = ((MR_Box) (Var_43));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_10, 0) = ((MR_Box) (MR_Word) (Char_24));
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
          MR_Char Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_10, (MR_Integer) 0)));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_16_16;

          func_0(((MR_Box) (Pred_7)), ((MR_Box) (MR_Word) (Char_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
          // direct tailcall eliminated
          ;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CharResult_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_12));
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
  MR_Box Stream_17;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_17);
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
    MR_Word ResultCode_25;
    MR_Box Error_26;
    MR_Char Char_27;
    MR_Box Var_35 = (MR_Box) (Stream_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_35, &ResultCode_25, &Error_26, &Char_27);
    switch (ResultCode_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_43;
          MR_Word Var_46;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_26 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_43  = Msg;
}
          Var_46 = (MR_Word) (Msg_43);
          {
            CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_12, 0) = ((MR_Box) (Var_46));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_27));
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
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
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
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CharResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_15));
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
  MR_Box Stream_17;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Stream_17);
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
    MR_Word ResultCode_25;
    MR_Box Error_26;
    MR_Char Char_27;
    MR_Box Var_35 = (MR_Box) (Stream_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_35, &ResultCode_25, &Error_26, &Char_27);
    switch (ResultCode_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_43;
          MR_Word Var_46;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_26 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_43  = Msg;
}
          Var_46 = (MR_Word) (Msg_43);
          {
            CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_12, 0) = ((MR_Box) (Var_46));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_27));
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
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
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
          MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CharResult_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_15));
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
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_file_as_bitmap_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_file_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
    MR_Box Stream_22 = (MR_Box) (Stream_6);
    MR_Word ResultCode_24;
    MR_Box Error_25;
    MR_Integer Byte_26;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__read_binary_file_2_5_p_0

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
	ResultCode_24  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_25 );
	Byte_26  = ByteVal;
}
    switch (ResultCode_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Result0_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_43;
          MR_Word Var_46;

{
#define MR_PROC_LABEL mercury__io__read_binary_file_2_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_25 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_43  = Msg;
}
          Var_46 = (MR_Word) (Msg_43);
          {
            Result0_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Result0_10, 0) = ((MR_Box) (Var_46));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          Result0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Result0_10, 0) = ((MR_Box) (Byte_26));
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
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Bytes_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Result0_10, (MR_Integer) 0))));
          MR_Word Var_17;
          MR_Word next_value_of_Bytes0_7;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Byte_13));
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Bytes0_7));
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
mercury__io__read_file_as_string_and_num_code_units_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_and_num_code_units_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
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
    MR_String Message_25;
    MR_Word IOError_26;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_and_num_code_units_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Message_25  = Msg;
}
    IOError_26 = (MR_Word) (Message_25);
    {
      MaybeIOError_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeIOError_12, 0) = ((MR_Box) (IOError_26));
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (String_8));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NumCUs_9));
        }
        break;
      case (MR_Integer) 1:
        *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__io_scalar_common_1[3]));
        break;
    }
  else
  {
    MR_Word IOError_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_12, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (String_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NumCUs_9));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (IOError_13));
    }
  }
}

void MR_CALL 
mercury__io__read_file_as_string_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
  mercury__io__read_file_as_string_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_file_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  mercury__io__read_file_2_5_p_0(Stream_5, (MR_Word) ((MR_Unsigned) 0U), Result_6);
}

void MR_CALL 
mercury__io__read_file_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_file_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
  mercury__io__read_file_2_5_p_0(Stream_6, (MR_Word) ((MR_Unsigned) 0U), Result_4);
}

void MR_CALL 
mercury__io__read_file_2_5_p_0(
  MR_Word Stream_6,
  MR_Word Chars0_7,
  MR_Word * Result_8)
{
  while (MR_TRUE)
  {
    MR_Word Result0_10;
    MR_Word ResultCode_26;
    MR_Box Error_27;
    MR_Char Char_28;
    MR_Box Var_36 = (MR_Box) (Stream_6);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_36, &ResultCode_26, &Error_27, &Char_28);
    switch (ResultCode_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Result0_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_44;
          MR_Word Var_47;

{
#define MR_PROC_LABEL mercury__io__read_file_2_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_27 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_44  = Msg;
}
          Var_47 = (MR_Word) (Msg_44);
          {
            Result0_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Result0_10, 0) = ((MR_Box) (Var_47));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          Result0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Result0_10, 0) = ((MR_Box) (MR_Word) (Char_28));
        }
        break;
    }
    switch (MR_tag((MR_Word) Result0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_16;

          mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Chars0_7, &Var_16);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Result0_10, (MR_Integer) 0)));
          MR_Word Var_18;
          MR_Word next_value_of_Chars0_7;

          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_Word) (Char_12));
            MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Chars0_7));
          }
          // direct tailcall eliminated
          ;
          next_value_of_Chars0_7 = Var_18;
          Chars0_7 = next_value_of_Chars0_7;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Err_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result0_10, (MR_Integer) 0))));
          MR_Word Var_17;

          mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Chars0_7, &Var_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Err_11));
          }
        }
        break;
    }
    break;
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
    MR_Word FileStream_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_8, (MR_Integer) 0))));
    MR_Word ReadResult_10;
    MR_Box Stream_29;
    MR_Box Error_31;

    mercury__io__read_file_as_string_4_p_0(FileStream_9, &ReadResult_10);
    if (((MR_tag((MR_Word) ReadResult_10)) == (MR_Integer) 1))
    {
      MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadResult_10, (MR_Integer) 1))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_14));
      }
    }
    else
    {
      MR_String String_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), ReadResult_10, (MR_Integer) 0))));
      MR_Word Lines_12;
      MR_Word Var_25;

      mercury__string__split_into_lines_loop_4_p_0(String_11, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Var_25);
      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, &Lines_12);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Lines_12));
      }
    }
    Stream_29 = (MR_Box) (FileStream_9);
    mercury__io__stream_db__maybe_delete_stream_info_3_p_0(Stream_29);
{
#define MR_PROC_LABEL mercury__io__read_named_file_as_lines_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_29 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_31 );
}
    mercury__io__throw_on_error_4_p_0(Error_31, (MR_String) "error closing file: ");
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
    MR_Word FileStream_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_8, (MR_Integer) 0))));
    MR_Word ReadResult_10;
    MR_Box Stream_22;
    MR_Box Error_24;

    mercury__io__read_file_as_string_4_p_0(FileStream_9, &ReadResult_10);
    if (((MR_tag((MR_Word) ReadResult_10)) == (MR_Integer) 1))
    {
      MR_Word Error_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadResult_10, (MR_Integer) 1))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_13));
      }
    }
    else
    {
      MR_String String_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), ReadResult_10, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (String_11));
      }
    }
    Stream_22 = (MR_Box) (FileStream_9);
    mercury__io__stream_db__maybe_delete_stream_info_3_p_0(Stream_22);
{
#define MR_PROC_LABEL mercury__io__read_named_file_as_string_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_22 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_24 );
}
    mercury__io__throw_on_error_4_p_0(Error_24, (MR_String) "error closing file: ");
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

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
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
    MR_String Message_28;
    MR_Word IOError_29;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Message_28  = Msg;
}
    IOError_29 = (MR_Word) (Message_28);
    {
      MaybeIOError_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeIOError_12, 0) = ((MR_Box) (IOError_29));
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (String_8));
        }
        break;
      case (MR_Integer) 1:
        *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__io_scalar_common_4[3]));
        break;
    }
  else
  {
    MR_Word IOError_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_12, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (String_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOError_13));
    }
  }
}

void MR_CALL 
mercury__io__flush_binary_output_3_p_0(
  MR_Word HeadVar__1_1)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_6 );
}
  mercury__io__throw_on_error_4_p_0(Error_6, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__flush_binary_output_2_p_0(void)
{
  MR_Box Stream_14;
  MR_Box Error_16;

{
#define MR_PROC_LABEL mercury__io__flush_binary_output_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_14  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__flush_binary_output_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_14 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_16 );
}
  mercury__io__throw_on_error_4_p_0(Error_16, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__flush_output_3_p_0(
  MR_Word HeadVar__1_1)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_6 );
}
  mercury__io__throw_on_error_4_p_0(Error_6, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__flush_output_2_p_0(void)
{
  MR_Box Stream_14;
  MR_Box Error_16;

{
#define MR_PROC_LABEL mercury__io__flush_output_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_14  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__flush_output_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_14 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_16 );
}
  mercury__io__throw_on_error_4_p_0(Error_16, (MR_String) "error writing to output file: ");
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

  mercury__io__restore_output_stream_5_p_1(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv1_HeadVar__3_3);
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

  mercury__io__call_pred_no_result_4_p_1(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv0_HeadVar__2_2);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__write_array_6_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__write_array_5_p_1(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))));
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
  MR_Word OrigStream_21;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Box NewStream_36;
  MR_Box OutStream_37;
  MR_Word _CleanupRes_23;
  MR_Box conv2__Result_22;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_7[1]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mercury__io__write_array_6_p_1_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Array_8));
    MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Separator_9));
    MR_hl_field(MR_mktag(0), Var_14, 6) = ((MR_Box) (OutputPred_10));
  }
  NewStream_36 = (MR_Box) (Stream_7);
{
#define MR_PROC_LABEL mercury__io__write_array_6_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_36 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_37  = (MR_Box) OutStream;
}
  OrigStream_21 = (MR_Word) (OutStream_37);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&mercury__io_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (mercury__io__write_array_6_p_1_2));
    MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Var_14));
  }
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&mercury__io_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (mercury__io__write_array_6_p_1_3));
    MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (OrigStream_21));
  }
  mercury__exception__finally_2_6_p_1((MR_Word) (&mercury__io_scalar_common_4[0]), Var_25, Var_26, &conv2__Result_22, &_CleanupRes_23);
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

  mercury__io__restore_output_stream_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv1_HeadVar__3_3);
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

  mercury__io__call_pred_no_result_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv0_HeadVar__2_2);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__write_array_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__write_array_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))));
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
  MR_Word OrigStream_21;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Box NewStream_36;
  MR_Box OutStream_37;
  MR_Word _CleanupRes_23;
  MR_Box conv2__Result_22;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_7[1]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mercury__io__write_array_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Array_8));
    MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Separator_9));
    MR_hl_field(MR_mktag(0), Var_14, 6) = ((MR_Box) (OutputPred_10));
  }
  NewStream_36 = (MR_Box) (Stream_7);
{
#define MR_PROC_LABEL mercury__io__write_array_6_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_36 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_37  = (MR_Box) OutStream;
}
  OrigStream_21 = (MR_Word) (OutStream_37);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&mercury__io_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (mercury__io__write_array_6_p_0_2));
    MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Var_14));
  }
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&mercury__io_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (mercury__io__write_array_6_p_0_3));
    MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (OrigStream_21));
  }
  mercury__exception__finally_2_6_p_0((MR_Word) (&mercury__io_scalar_common_4[0]), Var_25, Var_26, &conv2__Result_22, &_CleanupRes_23);
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
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputPred_8, (MR_Integer) 1))));
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
      MR_Box Stream_36;
      MR_Box Error_38;
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
	Stream_36  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__do_write_array_7_p_1

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_36 ;
	Message = Separator_9 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_38 );
}
      mercury__io__throw_on_error_4_p_0(Error_38, (MR_String) "error writing to output file: ");
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
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputPred_10, (MR_Integer) 1))));
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
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputPred_8, (MR_Integer) 1))));
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
      MR_Box Stream_36;
      MR_Box Error_38;
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
	Stream_36  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__do_write_array_7_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_36 ;
	Message = Separator_9 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_38 );
}
      mercury__io__throw_on_error_4_p_0(Error_38, (MR_String) "error writing to output file: ");
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
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputPred_10, (MR_Integer) 1))));
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

  mercury__io__restore_output_stream_5_p_1(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv1_HeadVar__3_3);
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

  mercury__io__call_pred_no_result_4_p_1(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv0_HeadVar__2_2);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__write_list_6_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__write_list_5_p_1(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))));
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
  MR_Word OrigStream_21;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Box NewStream_36;
  MR_Box OutStream_37;
  MR_Word _CleanupRes_23;
  MR_Box conv2__Result_22;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mercury__io__write_list_6_p_1_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (List_8));
    MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Separator_9));
    MR_hl_field(MR_mktag(0), Var_14, 6) = ((MR_Box) (OutputPred_10));
  }
  NewStream_36 = (MR_Box) (Stream_7);
{
#define MR_PROC_LABEL mercury__io__write_list_6_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_36 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_37  = (MR_Box) OutStream;
}
  OrigStream_21 = (MR_Word) (OutStream_37);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&mercury__io_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (mercury__io__write_list_6_p_1_2));
    MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Var_14));
  }
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&mercury__io_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (mercury__io__write_list_6_p_1_3));
    MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (OrigStream_21));
  }
  mercury__exception__finally_2_6_p_1((MR_Word) (&mercury__io_scalar_common_4[0]), Var_25, Var_26, &conv2__Result_22, &_CleanupRes_23);
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

  mercury__io__restore_output_stream_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv1_HeadVar__3_3);
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

  mercury__io__call_pred_no_result_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &conv0_HeadVar__2_2);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__write_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__write_list_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))));
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
  MR_Word OrigStream_21;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Box NewStream_36;
  MR_Box OutStream_37;
  MR_Word _CleanupRes_23;
  MR_Box conv2__Result_22;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mercury__io__write_list_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (List_8));
    MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Separator_9));
    MR_hl_field(MR_mktag(0), Var_14, 6) = ((MR_Box) (OutputPred_10));
  }
  NewStream_36 = (MR_Box) (Stream_7);
{
#define MR_PROC_LABEL mercury__io__write_list_6_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)NewStream_36 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	OutStream_37  = (MR_Box) OutStream;
}
  OrigStream_21 = (MR_Word) (OutStream_37);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&mercury__io_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (mercury__io__write_list_6_p_0_2));
    MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Var_14));
  }
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&mercury__io_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (mercury__io__write_list_6_p_0_3));
    MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (OrigStream_21));
  }
  mercury__exception__finally_2_6_p_0((MR_Word) (&mercury__io_scalar_common_4[0]), Var_25, Var_26, &conv2__Result_22, &_CleanupRes_23);
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
    MR_Box Head_11 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Word Tail_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_IO_20_20;

    func_0(((MR_Box) (HeadVar__3_3)), Head_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
    if (!((Tail_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Box TailHead_16 = (MR_hl_field(MR_mktag(1), Tail_12, (MR_Integer) 0));
      MR_Word TailTail_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tail_12, (MR_Integer) 1))));

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
    MR_Box Stream_32;
    MR_Box Error_34;
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
	Stream_32  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_list_lag_6_p_1

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_32 ;
	Message = Separator_9 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_34 );
}
    mercury__io__throw_on_error_4_p_0(Error_34, (MR_String) "error writing to output file: ");
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputPred_10, (MR_Integer) 1))));
    func_0(((MR_Box) (OutputPred_10)), Head_7, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17_17);
    if (!((Tail_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Box TailHead_12 = (MR_hl_field(MR_mktag(1), Tail_8, (MR_Integer) 0));
      MR_Word TailTail_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tail_8, (MR_Integer) 1))));
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
    MR_Box Head_11 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Word Tail_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_IO_20_20;

    func_0(((MR_Box) (HeadVar__3_3)), Head_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
    if (!((Tail_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Box TailHead_16 = (MR_hl_field(MR_mktag(1), Tail_12, (MR_Integer) 0));
      MR_Word TailTail_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tail_12, (MR_Integer) 1))));

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
    MR_Box Stream_32;
    MR_Box Error_34;
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
	Stream_32  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_list_lag_6_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_32 ;
	Message = Separator_9 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_34 );
}
    mercury__io__throw_on_error_4_p_0(Error_34, (MR_String) "error writing to output file: ");
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputPred_10, (MR_Integer) 1))));
    func_0(((MR_Box) (OutputPred_10)), Head_7, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17_17);
    if (!((Tail_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Box TailHead_12 = (MR_hl_field(MR_mktag(1), Tail_8, (MR_Integer) 0));
      MR_Word TailTail_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tail_8, (MR_Integer) 1))));
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
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__write_many_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
      MR_Word Val_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      switch (MR_tag((MR_Word) Val_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float F_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), Val_10, (MR_Integer) 0)));
            MR_Box Stream_57 = (MR_Box) (HeadVar__1_1);
            MR_Box Error_59;

{
#define MR_PROC_LABEL mercury__io__write_many_4_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_57 ;
	Val = F_17 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_59 );
}
            mercury__io__throw_on_error_4_p_0(Error_59, (MR_String) "error writing to output file: ");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer I_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Val_10, (MR_Integer) 0))));
            MR_Box Stream_69 = (MR_Box) (HeadVar__1_1);
            MR_Box Error_71;

{
#define MR_PROC_LABEL mercury__io__write_many_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_69 ;
	Val = I_14 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_71 );
}
            mercury__io__throw_on_error_4_p_0(Error_71, (MR_String) "error writing to output file: ");
          }
          break;
        case (MR_Integer) 2:
          {
            int8_t I_34 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), Val_10, (MR_Integer) 0)));

            mercury__io__write_int8_4_p_0(HeadVar__1_1, I_34);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Val_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                int16_t I_35 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Val_10, (MR_Integer) 1)));
                MR_Box Stream_81 = (MR_Box) (HeadVar__1_1);
                MR_Box Error_83;

{
#define MR_PROC_LABEL mercury__io__write_many_4_p_0

	MercuryFilePtr Stream;
	int16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_81 ;
	Val = I_35 ;
		{

    if (ML_fprintf(Stream, "%" PRId16, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_83 );
}
                mercury__io__throw_on_error_4_p_0(Error_83, (MR_String) "error writing to output file: ");
              }
              break;
            case (MR_Integer) 1:
              {
                int32_t I_36 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Val_10, (MR_Integer) 1)));

                mercury__io__write_int32_4_p_0(HeadVar__1_1, I_36);
              }
              break;
            case (MR_Integer) 2:
              {
                int64_t I_37 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Val_10, (MR_Integer) 1)));

                mercury__io__write_int64_4_p_0(HeadVar__1_1, I_37);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Unsigned U_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Val_10, (MR_Integer) 1))));

                mercury__io__write_uint_4_p_0(HeadVar__1_1, U_15);
              }
              break;
            case (MR_Integer) 4:
              {
                uint8_t U_38 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Val_10, (MR_Integer) 1)));

                mercury__io__write_uint8_4_p_0(HeadVar__1_1, U_38);
              }
              break;
            case (MR_Integer) 5:
              {
                uint16_t U_39 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Val_10, (MR_Integer) 1)));

                mercury__io__write_uint16_4_p_0(HeadVar__1_1, U_39);
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t U_40 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Val_10, (MR_Integer) 1)));

                mercury__io__write_uint32_4_p_0(HeadVar__1_1, U_40);
              }
              break;
            case (MR_Integer) 7:
              {
                uint64_t U_41 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Val_10, (MR_Integer) 1)));

                mercury__io__write_uint64_4_p_0(HeadVar__1_1, U_41);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_String S_16 = ((MR_String) ((MR_hl_field(MR_mktag(3), Val_10, (MR_Integer) 1))));

                mercury__io__write_string_4_p_0(HeadVar__1_1, S_16);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Char C_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), Val_10, (MR_Integer) 1)));
                MR_Box Stream_45 = (MR_Box) (HeadVar__1_1);
                MR_Box Error_47;

{
#define MR_PROC_LABEL mercury__io__write_many_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_45 ;
	Character = C_13 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_47 );
}
                mercury__io__throw_on_error_4_p_0(Error_47, (MR_String) "error writing to output file: ");
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
mercury__io__write_strings_3_p_0(
  MR_Word Strings_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__write_strings_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
      MR_String S_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Ss_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Stream_19 = (MR_Box) (HeadVar__1_1);
      MR_Box Error_21;
      MR_Word next_value_of_HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__io__write_strings_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_19 ;
	Message = S_10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_21 );
}
      mercury__io__throw_on_error_4_p_0(Error_21, (MR_String) "error writing to output file: ");
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
  MR_Box Stream_19;
  MR_Box Error_21;

  mercury__string__format__format_impl_3_p_0(FormatString_7, Arguments_8, &String_10);
  Stream_19 = (MR_Box) (Stream_6);
{
#define MR_PROC_LABEL mercury__io__format_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_19 ;
	Message = String_10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_21 );
}
  mercury__io__throw_on_error_4_p_0(Error_21, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__format_4_p_0(
  MR_String FormatString_5,
  MR_Word Arguments_6)
{
  MR_Word Stream_8;
  MR_Box Stream_14;
  MR_String String_22;
  MR_Box Stream_29;
  MR_Box Error_31;

{
#define MR_PROC_LABEL mercury__io__format_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_14  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Stream_14);
  mercury__string__format__format_impl_3_p_0(FormatString_5, Arguments_6, &String_22);
  Stream_29 = (MR_Box) (Stream_8);
{
#define MR_PROC_LABEL mercury__io__format_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_29 ;
	Message = String_22 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_31 );
}
  mercury__io__throw_on_error_4_p_0(Error_31, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box Term_4)
{
  MR_Word Stream_6;
  MR_Box Stream_13;

{
#define MR_PROC_LABEL mercury__io__write_binary_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_13  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_13);
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
  MR_Word Var_28;
  MR_Box Stream_32;
  MR_Box Error_34;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_14, Term_6, &Var_28);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Var_10, (MR_Integer) 1, Var_28);
  Stream_32 = (MR_Box) (Var_10);
{
#define MR_PROC_LABEL mercury__io__write_binary_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_32 ;
	Message = (MR_String) ".\n" ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_34 );
}
  mercury__io__throw_on_error_4_p_0(Error_34, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_line_cc_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Stream_5,
  MR_Box X_6)
{
  MR_Word Var_25;
  MR_Box Stream_34;
  MR_Box Error_36;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_11, X_6, &Var_25);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_5, (MR_Integer) 2, Var_25);
  Stream_34 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__write_line_cc_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_34 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_36 );
}
  mercury__io__throw_on_error_4_p_0(Error_36, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_line_cc_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box X_4)
{
  MR_Word Stream_14;
  MR_Box Stream_18;
  MR_Word Var_33;
  MR_Box Stream_51;
  MR_Box Error_53;

{
#define MR_PROC_LABEL mercury__io__write_line_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_18  = (MR_Box) Stream;
}
  Stream_14 = (MR_Word) (Stream_18);
  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_9, X_4, &Var_33);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_14, (MR_Integer) 2, Var_33);
{
#define MR_PROC_LABEL mercury__io__write_line_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_51  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_line_cc_3_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_51 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_53 );
}
  mercury__io__throw_on_error_4_p_0(Error_53, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_line_5_p_3(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  MR_Word Var_27;
  MR_Box Stream_36;
  MR_Box Error_38;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_13, X_8, &Var_27);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_6, NonCanon_7, Var_27);
  Stream_36 = (MR_Box) (Stream_6);
{
#define MR_PROC_LABEL mercury__io__write_line_5_p_3

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_36 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_38 );
}
  mercury__io__throw_on_error_4_p_0(Error_38, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_line_5_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  MR_Word Var_27;
  MR_Box Stream_36;
  MR_Box Error_38;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_13, X_8, &Var_27);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_6, NonCanon_7, Var_27);
  Stream_36 = (MR_Box) (Stream_6);
{
#define MR_PROC_LABEL mercury__io__write_line_5_p_2

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_36 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_38 );
}
  mercury__io__throw_on_error_4_p_0(Error_38, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_line_5_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  MR_Word Var_27;
  MR_Box Stream_36;
  MR_Box Error_38;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_13, X_8, &Var_27);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_6, NonCanon_7, Var_27);
  Stream_36 = (MR_Box) (Stream_6);
{
#define MR_PROC_LABEL mercury__io__write_line_5_p_1

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_36 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_38 );
}
  mercury__io__throw_on_error_4_p_0(Error_38, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_line_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  MR_Word Var_27;
  MR_Box Stream_36;
  MR_Box Error_38;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_13, X_8, &Var_27);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_6, NonCanon_7, Var_27);
  Stream_36 = (MR_Box) (Stream_6);
{
#define MR_PROC_LABEL mercury__io__write_line_5_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_36 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_38 );
}
  mercury__io__throw_on_error_4_p_0(Error_38, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_line_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Stream_5,
  MR_Box X_6)
{
  MR_Word Var_25;
  MR_Box Stream_34;
  MR_Box Error_36;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_11, X_6, &Var_25);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_5, (MR_Integer) 1, Var_25);
  Stream_34 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__write_line_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_34 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_36 );
}
  mercury__io__throw_on_error_4_p_0(Error_36, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_line_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box X_4)
{
  MR_Word Stream_14;
  MR_Box Stream_21;
  MR_Word Var_28;
  MR_Box Stream_46;
  MR_Box Error_48;

{
#define MR_PROC_LABEL mercury__io__write_line_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_21  = (MR_Box) Stream;
}
  Stream_14 = (MR_Word) (Stream_21);
  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_9, X_4, &Var_28);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_14, (MR_Integer) 1, Var_28);
{
#define MR_PROC_LABEL mercury__io__write_line_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_46  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_line_3_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_46 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_48 );
}
  mercury__io__throw_on_error_4_p_0(Error_48, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_cc_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Stream_5,
  MR_Box X_6)
{
  MR_Word Var_19;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_11, X_6, &Var_19);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_5, (MR_Integer) 2, Var_19);
}

void MR_CALL 
mercury__io__write_cc_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box X_4)
{
  MR_Word Stream_6;
  MR_Box Stream_13;
  MR_Word Var_28;

{
#define MR_PROC_LABEL mercury__io__write_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_13  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_13);
  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_10, X_4, &Var_28);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_6, (MR_Integer) 2, Var_28);
}

void MR_CALL 
mercury__io__write_5_p_3(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  MR_Word Var_20;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_12, X_8, &Var_20);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_6, NonCanon_7, Var_20);
}

void MR_CALL 
mercury__io__write_5_p_2(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  MR_Word Var_20;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_12, X_8, &Var_20);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_6, NonCanon_7, Var_20);
}

void MR_CALL 
mercury__io__write_5_p_1(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  MR_Word Var_20;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_12, X_8, &Var_20);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_6, NonCanon_7, Var_20);
}

void MR_CALL 
mercury__io__write_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  MR_Word Var_20;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_12, X_8, &Var_20);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_6, NonCanon_7, Var_20);
}

void MR_CALL 
mercury__io__write_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Stream_5,
  MR_Box X_6)
{
  MR_Word Var_19;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_11, X_6, &Var_19);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_5, (MR_Integer) 1, Var_19);
}

void MR_CALL 
mercury__io__write_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box X_4)
{
  MR_Word Stream_6;
  MR_Box Stream_16;
  MR_Word Var_23;

{
#define MR_PROC_LABEL mercury__io__write_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_16  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_16);
  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_11, X_4, &Var_23);
  mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1((MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), Stream_6, (MR_Integer) 1, Var_23);
}

void MR_CALL 
mercury__io__print_line_cc_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box Term_4)
{
  MR_Word Stream_14;
  MR_Box Stream_20;
  MR_Box Stream_44;
  MR_Box Error_46;
  MR_Box conv0_STATE_VARIABLE_IO_8_8;

{
#define MR_PROC_LABEL mercury__io__print_line_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_20  = (MR_Box) Stream;
}
  Stream_14 = (MR_Word) (Stream_20);
  mercury__stream__string_writer__print_5_p_2(TypeInfo_for_T_9, (MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), ((MR_Box) (Stream_14)), (MR_Integer) 2, Term_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_8_8);
{
#define MR_PROC_LABEL mercury__io__print_line_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_44  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__print_line_cc_3_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_44 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_46 );
}
  mercury__io__throw_on_error_4_p_0(Error_46, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__print_line_5_p_3(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  MR_Box Stream_30;
  MR_Box Error_32;
  MR_Box conv0_STATE_VARIABLE_IO_12_12;

  mercury__stream__string_writer__print_5_p_3(TypeInfo_for_T_13, (MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_12);
  Stream_30 = (MR_Box) (Stream_6);
{
#define MR_PROC_LABEL mercury__io__print_line_5_p_3

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_30 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_32 );
}
  mercury__io__throw_on_error_4_p_0(Error_32, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__print_line_5_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  MR_Box Stream_30;
  MR_Box Error_32;
  MR_Box conv0_STATE_VARIABLE_IO_12_12;

  mercury__stream__string_writer__print_5_p_2(TypeInfo_for_T_13, (MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_12);
  Stream_30 = (MR_Box) (Stream_6);
{
#define MR_PROC_LABEL mercury__io__print_line_5_p_2

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_30 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_32 );
}
  mercury__io__throw_on_error_4_p_0(Error_32, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__print_line_5_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  MR_Box Stream_30;
  MR_Box Error_32;
  MR_Box conv0_STATE_VARIABLE_IO_12_12;

  mercury__stream__string_writer__print_5_p_1(TypeInfo_for_T_13, (MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_12);
  Stream_30 = (MR_Box) (Stream_6);
{
#define MR_PROC_LABEL mercury__io__print_line_5_p_1

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_30 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_32 );
}
  mercury__io__throw_on_error_4_p_0(Error_32, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__print_line_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  MR_Box Stream_30;
  MR_Box Error_32;
  MR_Box conv0_STATE_VARIABLE_IO_12_12;

  mercury__stream__string_writer__print_5_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_12);
  Stream_30 = (MR_Box) (Stream_6);
{
#define MR_PROC_LABEL mercury__io__print_line_5_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_30 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_32 );
}
  mercury__io__throw_on_error_4_p_0(Error_32, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__print_line_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box Term_4)
{
  MR_Word Stream_6;
  MR_Box Stream_13;

{
#define MR_PROC_LABEL mercury__io__print_line_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_13  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_13);
  mercury__io__print_line_4_p_0(TypeInfo_for_T_10, Stream_6, Term_4);
}

void MR_CALL 
mercury__io__print_line_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Stream_5,
  MR_Box Term_6)
{
  MR_Box Stream_28;
  MR_Box Error_30;
  MR_Box conv0_STATE_VARIABLE_IO_10_10;

  mercury__stream__string_writer__print_5_p_1(TypeInfo_for_T_11, (MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), ((MR_Box) (Stream_5)), (MR_Integer) 1, Term_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_10_10);
  Stream_28 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__print_line_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_28 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_30 );
}
  mercury__io__throw_on_error_4_p_0(Error_30, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__print_cc_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box Term_4)
{
  MR_Word Stream_6;
  MR_Box Stream_15;
  MR_Box conv0_STATE_VARIABLE_IO_8;

{
#define MR_PROC_LABEL mercury__io__print_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_15);
  mercury__stream__string_writer__print_5_p_2(TypeInfo_for_T_10, (MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), ((MR_Box) (Stream_6)), (MR_Integer) 2, Term_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_8);
}

void MR_CALL 
mercury__io__print_5_p_3(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  MR_Box conv0_STATE_VARIABLE_IO_11;

  mercury__stream__string_writer__print_5_p_3(TypeInfo_for_T_12, (MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

void MR_CALL 
mercury__io__print_5_p_2(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  MR_Box conv0_STATE_VARIABLE_IO_11;

  mercury__stream__string_writer__print_5_p_2(TypeInfo_for_T_12, (MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

void MR_CALL 
mercury__io__print_5_p_1(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  MR_Box conv0_STATE_VARIABLE_IO_11;

  mercury__stream__string_writer__print_5_p_1(TypeInfo_for_T_12, (MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

void MR_CALL 
mercury__io__print_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  MR_Box conv0_STATE_VARIABLE_IO_11;

  mercury__stream__string_writer__print_5_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

void MR_CALL 
mercury__io__print_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Stream_5,
  MR_Box Term_6)
{
  MR_Box conv0_STATE_VARIABLE_IO_9;

  mercury__stream__string_writer__print_5_p_1(TypeInfo_for_T_11, (MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), ((MR_Box) (Stream_5)), (MR_Integer) 1, Term_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
}

void MR_CALL 
mercury__io__print_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box Term_4)
{
  MR_Word Stream_6;
  MR_Box Stream_16;
  MR_Box conv0_STATE_VARIABLE_IO_8;

{
#define MR_PROC_LABEL mercury__io__print_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_16  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_16);
  mercury__stream__string_writer__print_5_p_1(TypeInfo_for_T_11, (MR_Word) (&mercury__io_scalar_common_3[0]), (MR_Word) (&mercury__io_scalar_common_3[1]), ((MR_Box) (Stream_6)), (MR_Integer) 1, Term_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_8);
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
  MR_Box Stream_20;
  MR_Word TextInputStream_21;

{
#define MR_PROC_LABEL mercury__io__read_binary_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_20  = (MR_Box) Stream;
}
  TextInputStream_21 = (MR_Word) (Stream_20);
  mercury__io__read_binary_from_text_input_stream_4_p_0(TypeInfo_for_T_10, TextInputStream_21, Result_4);
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
        MR_Box T_9 = (MR_hl_field(MR_mktag(1), ReadResult_8, (MR_Integer) 0));
        MR_Word NewLineRes_10;
        MR_Word ResultCode_30;
        MR_Box Error_31;
        MR_Char Char_32;
        MR_Box Var_40 = (MR_Box) (Stream_5);

        mercury__io__primitives_read__read_char_code_2_6_p_0(Var_40, &ResultCode_30, &Error_31, &Char_32);
        switch (ResultCode_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            NewLineRes_10 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_String Msg_48;
              MR_Word Var_51;

{
#define MR_PROC_LABEL mercury__io__read_binary_from_text_input_stream_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_31 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_48  = Msg;
}
              Var_51 = (MR_Word) (Msg_48);
              {
                NewLineRes_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), NewLineRes_10, 0) = ((MR_Box) (Var_51));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              NewLineRes_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), NewLineRes_10, 0) = ((MR_Box) (MR_Word) (Char_32));
            }
            break;
        }
        switch (MR_tag((MR_Word) NewLineRes_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Result_6 = (MR_Word) (MR_mkword(MR_mktag(2), &mercury__io_scalar_common_5[1]));
            break;
          case (MR_Integer) 1:
            {
              MR_Char NewLineChar_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), NewLineRes_10, (MR_Integer) 0)));

              succeeded = (NewLineChar_12 == (MR_Char) 10);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = T_9;
                }
              else
                *Result_6 = (MR_Word) (MR_mkword(MR_mktag(2), &mercury__io_scalar_common_5[1]));
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
        MR_String ErrorMsg_13 = ((MR_String) ((MR_hl_field(MR_mktag(2), ReadResult_8, (MR_Integer) 0))));
        MR_Word Var_23 = (MR_Word) (ErrorMsg_13);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_23));
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
  MR_Word Var_37;

  mercury__mercury_term_lexer__string_get_token_list_max_5_p_0(String_8, Len_9, &Var_37, STATE_VARIABLE_Posn_0_16, STATE_VARIABLE_Posn_17);
  mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&mercury__io_scalar_common_4[1]), ((MR_Box) ((MR_Integer) 0)), FileName_7, Var_37, &ReadResult_12);
  LineNumber_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Posn_17, (MR_Integer) 0))));
  mercury__io__process_read_term_4_p_0(TypeInfo_for_T_20, (MR_String) "predicate \140io.read_from_string\'/6", ReadResult_12, LineNumber_13, Result_10);
}

void MR_CALL 
mercury__io__read_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_Word ReadResult_8;
  MR_Integer LineNumber_9;
  MR_String Var_21;
  MR_Box Stream_28 = (MR_Box) (Stream_5);
  MR_Box Stream_33;

  mercury__io__stream_db__stream_name_4_p_0(Stream_28, &Var_21);
  mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&mercury__io_scalar_common_4[1]), Stream_5, ((MR_Box) ((MR_Integer) 0)), Var_21, &ReadResult_8);
  Stream_33 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__read_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_33 ;
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
  MR_Word Stream_6;
  MR_Word ReadResult_7;
  MR_Integer LineNumber_8;
  MR_String Var_25;
  MR_Box Stream_32;
  MR_Box Stream_37;

{
#define MR_PROC_LABEL mercury__io__read_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_32  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_32);
  mercury__io__stream_db__stream_name_4_p_0(Stream_32, &Var_25);
  mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&mercury__io_scalar_common_4[1]), Stream_6, ((MR_Box) ((MR_Integer) 0)), Var_25, &ReadResult_7);
  Stream_37 = (MR_Box) (Stream_6);
{
#define MR_PROC_LABEL mercury__io__read_3_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Stream_37 ;
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
        MR_Integer LN_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ReadResult_6, (MR_Integer) 1))));
        MR_String Msg_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), ReadResult_6, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Msg_17));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (LN_13));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Term_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadResult_6, (MR_Integer) 1))));
        MR_Box Type_11;
        MR_Word Var_23;

        mercury__term_conversion__try_term_to_type_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeInfo_for_T_18, Term_10, &Var_23);
        succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
        if (succeeded)
        {
          Type_11 = (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = Type_11;
          }
        }
        else
        {
          MR_String Msg_12;
          MR_String Var_14;
          MR_String Var_15;
          MR_Word Var_25;

          succeeded = ((MR_tag((MR_Word) Term_10)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 1))));
            succeeded = mercury__term__is_ground_list_1_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_25);
          }
          if (succeeded)
            Msg_12 = (MR_String) "the term read did not have the right type";
          else
            Msg_12 = (MR_String) "the term read was not a ground term";
          mercury__string__append_3_p_2((MR_String) ": ", Msg_12, &Var_15);
          mercury__string__append_3_p_2(PredId_5, Var_15, &Var_14);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_14));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (LineNumber_7));
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
  MR_Word Var_17;
  MR_Box Stream_21;

{
#define MR_PROC_LABEL mercury__io__write_bitmap_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_21  = (MR_Box) Stream;
}
  Var_17 = (MR_Word) (Stream_21);
  mercury__bitmap__write_bitmap_range_6_p_0(Var_17, Bitmap_6, Start_7, NumBytes_8);
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
  MR_Word Var_11;
  MR_Box Stream_15;

{
#define MR_PROC_LABEL mercury__io__write_bitmap_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_15  = (MR_Box) Stream;
}
  Var_11 = (MR_Word) (Stream_15);
  mercury__bitmap__write_bitmap_4_p_0(Var_11, Bitmap_4);
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
  MR_Word Var_27;
  MR_Box Stream_31;

{
#define MR_PROC_LABEL mercury__io__read_bitmap_8_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_31  = (MR_Box) Stream;
}
  Var_27 = (MR_Word) (Stream_31);
  mercury__bitmap__read_bitmap_range_9_p_0(Var_27, StartByte_9, NumBytes_10, STATE_VARIABLE_Bitmap_0_15, STATE_VARIABLE_Bitmap_16, BytesRead_12, Result_13);
}

void MR_CALL 
mercury__io__read_bitmap_7_p_0(
  MR_Word Stream_8,
  MR_Box STATE_VARIABLE_Bitmap_0_13,
  MR_Box * STATE_VARIABLE_Bitmap_14,
  MR_Integer * BytesRead_10,
  MR_Word * Result_11)
{
  mercury__bitmap__read_bitmap_7_p_0(Stream_8, STATE_VARIABLE_Bitmap_0_13, STATE_VARIABLE_Bitmap_14, BytesRead_10, Result_11);
}

void MR_CALL 
mercury__io__read_bitmap_6_p_0(
  MR_Box STATE_VARIABLE_Bitmap_0_11,
  MR_Box * STATE_VARIABLE_Bitmap_12,
  MR_Integer * BytesRead_8,
  MR_Word * Result_9)
{
  MR_Word Var_21;
  MR_Box Stream_25;

{
#define MR_PROC_LABEL mercury__io__read_bitmap_6_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_25  = (MR_Box) Stream;
}
  Var_21 = (MR_Word) (Stream_25);
  mercury__bitmap__read_bitmap_7_p_0(Var_21, STATE_VARIABLE_Bitmap_0_11, STATE_VARIABLE_Bitmap_12, BytesRead_8, Result_9);
}

void MR_CALL 
mercury__io__ignore_whitespace_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__ignore_whitespace_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
  mercury__io__ignore_whitespace_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_line_as_string_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_line_as_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
	String_10  = RetString;
}
  switch (Res_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      {
        MR_String Msg_11;
        MR_Word Var_20;

{
#define MR_PROC_LABEL mercury__io__read_line_as_string_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_11  = Msg;
}
        Var_20 = (MR_Word) (Msg_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_20));
        }
      }
      break;
    case (MR_Integer) 2:
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(2), &mercury__io_scalar_common_5[0]));
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (String_10));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_line_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_line_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
        MR_String Msg_11;
        MR_Word Var_17;

{
#define MR_PROC_LABEL mercury__io__read_line_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_11  = Msg;
}
        Var_17 = (MR_Word) (Msg_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_17));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Chars_10));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_word_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_word_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
        MR_Word Error_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WSResult_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_9));
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
    MR_Word ResultCode_19;
    MR_Box Error_20;
    MR_Char Char_21;
    MR_Box Var_29 = (MR_Box) (Stream_5);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_29, &ResultCode_19, &Error_20, &Char_21);
    switch (ResultCode_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_37;
          MR_Word Var_40;

{
#define MR_PROC_LABEL mercury__io__ignore_whitespace_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_20 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_37  = Msg;
}
          Var_40 = (MR_Word) (Msg_37);
          {
            CharResult_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_8, 0) = ((MR_Box) (Var_40));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_8, 0) = ((MR_Box) (MR_Word) (Char_21));
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
          MR_Char Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_8, (MR_Integer) 0)));

          succeeded = mercury__char__is_whitespace_1_p_0(Char_10);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            continue;
          }
          else
          {
            MR_Box Stream_44 = (MR_Box) (Stream_5);
            MR_Word Ok_46;

            mercury__io__primitives_read__putback_char_2_5_p_0(Stream_44, Char_10, &Ok_46);
            switch (Ok_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (((MR_Box) ((MR_String) "failed to put back character")))));
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
          MR_Word Error_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CharResult_8, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_9));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__write_binary_string_utf8_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String String_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_string_utf8_3_p_0(
  MR_String String_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_binary_string_utf8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_string_utf8_3_p_0

	MercuryFilePtr Stream;
	MR_String String;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	String = String_4 ;
		{

    size_t len = strlen(String);
    if (MR_WRITE(*Stream, (unsigned char *) String, len) != len) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint64_be_4_p_0(
  MR_Word HeadVar__1_1,
  uint64_t UInt64_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint64_be_3_p_0(
  uint64_t UInt64_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_be_3_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	U64 = UInt64_4 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int64_be_4_p_0(
  MR_Word Stream_5,
  int64_t Int64_6)
{
  uint64_t UInt64_8;
  MR_Box Stream_14;
  MR_Box Error_16;

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
  Stream_14 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__write_binary_int64_be_4_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_14 ;
	U64 = UInt64_8 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_16 );
}
  mercury__io__throw_on_error_4_p_0(Error_16, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int64_be_3_p_0(
  int64_t Int64_4)
{
  uint64_t UInt64_6;
  MR_Box Stream_22;
  MR_Box Error_24;

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
	Stream_22  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int64_be_3_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_22 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_24 );
}
  mercury__io__throw_on_error_4_p_0(Error_24, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint64_le_4_p_0(
  MR_Word HeadVar__1_1,
  uint64_t UInt64_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint64_le_3_p_0(
  uint64_t UInt64_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_le_3_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	U64 = UInt64_4 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int64_le_4_p_0(
  MR_Word Stream_5,
  int64_t Int64_6)
{
  uint64_t UInt64_8;
  MR_Box Stream_14;
  MR_Box Error_16;

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
  Stream_14 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__write_binary_int64_le_4_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_14 ;
	U64 = UInt64_8 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_16 );
}
  mercury__io__throw_on_error_4_p_0(Error_16, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int64_le_3_p_0(
  int64_t Int64_4)
{
  uint64_t UInt64_6;
  MR_Box Stream_22;
  MR_Box Error_24;

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
	Stream_22  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int64_le_3_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_22 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_24 );
}
  mercury__io__throw_on_error_4_p_0(Error_24, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint64_4_p_0(
  MR_Word HeadVar__1_1,
  uint64_t UInt64_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint64_3_p_0(
  uint64_t UInt64_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint64_3_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	U64 = UInt64_4 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U64), 8) != 8) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int64_4_p_0(
  MR_Word Stream_5,
  int64_t Int64_6)
{
  uint64_t UInt64_8;
  MR_Box Stream_14;
  MR_Box Error_16;

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
  Stream_14 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__write_binary_int64_4_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_14 ;
	U64 = UInt64_8 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U64), 8) != 8) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_16 );
}
  mercury__io__throw_on_error_4_p_0(Error_16, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int64_3_p_0(
  int64_t Int64_4)
{
  uint64_t UInt64_6;
  MR_Box Stream_22;
  MR_Box Error_24;

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
	Stream_22  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int64_3_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_22 ;
	U64 = UInt64_6 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U64), 8) != 8) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_24 );
}
  mercury__io__throw_on_error_4_p_0(Error_24, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint32_be_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t UInt32_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint32_be_3_p_0(
  uint32_t UInt32_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_be_3_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	U32 = UInt32_4 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int32_be_4_p_0(
  MR_Word Stream_5,
  int32_t Int32_6)
{
  uint32_t UInt32_8;
  MR_Box Stream_14;
  MR_Box Error_16;

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
  Stream_14 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_be_4_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_14 ;
	U32 = UInt32_8 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_16 );
}
  mercury__io__throw_on_error_4_p_0(Error_16, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int32_be_3_p_0(
  int32_t Int32_4)
{
  uint32_t UInt32_6;
  MR_Box Stream_22;
  MR_Box Error_24;

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
	Stream_22  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_be_3_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_22 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_24 );
}
  mercury__io__throw_on_error_4_p_0(Error_24, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint32_le_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t UInt32_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint32_le_3_p_0(
  uint32_t UInt32_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_le_3_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	U32 = UInt32_4 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int32_le_4_p_0(
  MR_Word Stream_5,
  int32_t Int32_6)
{
  uint32_t UInt32_8;
  MR_Box Stream_14;
  MR_Box Error_16;

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
  Stream_14 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_le_4_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_14 ;
	U32 = UInt32_8 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_16 );
}
  mercury__io__throw_on_error_4_p_0(Error_16, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int32_le_3_p_0(
  int32_t Int32_4)
{
  uint32_t UInt32_6;
  MR_Box Stream_22;
  MR_Box Error_24;

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
	Stream_22  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_le_3_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_22 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_24 );
}
  mercury__io__throw_on_error_4_p_0(Error_24, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint32_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t UInt32_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint32_3_p_0(
  uint32_t UInt32_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_3_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	U32 = UInt32_4 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int32_4_p_0(
  MR_Word Stream_5,
  int32_t Int32_6)
{
  uint32_t UInt32_8;
  MR_Box Stream_14;
  MR_Box Error_16;

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
  Stream_14 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_4_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_14 ;
	U32 = UInt32_8 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_16 );
}
  mercury__io__throw_on_error_4_p_0(Error_16, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int32_3_p_0(
  int32_t Int32_4)
{
  uint32_t UInt32_6;
  MR_Box Stream_22;
  MR_Box Error_24;

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
	Stream_22  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_3_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_22 ;
	U32 = UInt32_6 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_24 );
}
  mercury__io__throw_on_error_4_p_0(Error_24, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint16_be_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t UInt16_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint16_be_3_p_0(
  uint16_t UInt16_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_be_3_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	U16 = UInt16_4 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int16_be_4_p_0(
  MR_Word Stream_5,
  int16_t Int16_6)
{
  uint16_t UInt16_8;
  MR_Box Stream_14;
  MR_Box Error_16;

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
  Stream_14 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_be_4_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_14 ;
	U16 = UInt16_8 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_16 );
}
  mercury__io__throw_on_error_4_p_0(Error_16, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int16_be_3_p_0(
  int16_t Int16_4)
{
  uint16_t UInt16_6;
  MR_Box Stream_22;
  MR_Box Error_24;

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
	Stream_22  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_be_3_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_22 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_24 );
}
  mercury__io__throw_on_error_4_p_0(Error_24, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint16_le_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t UInt16_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint16_le_3_p_0(
  uint16_t UInt16_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_le_3_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	U16 = UInt16_4 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int16_le_4_p_0(
  MR_Word Stream_5,
  int16_t Int16_6)
{
  uint16_t UInt16_8;
  MR_Box Stream_14;
  MR_Box Error_16;

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
  Stream_14 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_le_4_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_14 ;
	U16 = UInt16_8 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_16 );
}
  mercury__io__throw_on_error_4_p_0(Error_16, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int16_le_3_p_0(
  int16_t Int16_4)
{
  uint16_t UInt16_6;
  MR_Box Stream_22;
  MR_Box Error_24;

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
	Stream_22  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_le_3_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_22 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_24 );
}
  mercury__io__throw_on_error_4_p_0(Error_24, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint16_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t UInt16_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint16_3_p_0(
  uint16_t UInt16_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_3_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	U16 = UInt16_4 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int16_4_p_0(
  MR_Word Stream_5,
  int16_t Int16_6)
{
  uint16_t UInt16_8;
  MR_Box Stream_14;
  MR_Box Error_16;

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
  Stream_14 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_4_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_14 ;
	U16 = UInt16_8 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_16 );
}
  mercury__io__throw_on_error_4_p_0(Error_16, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int16_3_p_0(
  int16_t Int16_4)
{
  uint16_t UInt16_6;
  MR_Box Stream_22;
  MR_Box Error_24;

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
	Stream_22  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_3_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_22 ;
	U16 = UInt16_6 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_24 );
}
  mercury__io__throw_on_error_4_p_0(Error_24, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint8_4_p_0(
  MR_Word HeadVar__1_1,
  uint8_t UInt8_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
}
  mercury__io__throw_on_error_4_p_0(Error_9, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_uint8_3_p_0(
  uint8_t UInt8_4)
{
  MR_Box Stream_17;
  MR_Integer Int_19;
  MR_Box Error_20;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint8_3_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = UInt8_4 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Int_19  = I;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint8_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Byte = Int_19 ;
		{

    // Call putc with a strictly non-negative byte-sized integer.
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_20 );
}
  mercury__io__throw_on_error_4_p_0(Error_20, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int8_4_p_0(
  MR_Word HeadVar__1_1,
  int8_t Int8_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__throw_on_error_4_p_0(Error_10, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_binary_int8_3_p_0(
  int8_t Int8_4)
{
  MR_Box Stream_17;
  uint8_t UInt8_19;
  MR_Integer Int_20;
  MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_binary_int8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int8_3_p_0

	int8_t I8;
	uint8_t U8;

	I8 = Int8_4 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	UInt8_19  = U8;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int8_3_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = UInt8_19 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Int_20  = I;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int8_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Byte = Int_20 ;
		{

    // Call putc with a strictly non-negative byte-sized integer.
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_21 );
}
  mercury__io__throw_on_error_4_p_0(Error_21, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_byte_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Byte_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_byte_3_p_0(
  MR_Integer Byte_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_byte_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_byte_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Byte = Byte_4 ;
		{

    // Call putc with a strictly non-negative byte-sized integer.
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__nl_3_p_0(
  MR_Word Stream_4)
{
  MR_Box Stream_12 = (MR_Box) (Stream_4);
  MR_Box Error_14;

{
#define MR_PROC_LABEL mercury__io__nl_3_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_12 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_14 );
}
  mercury__io__throw_on_error_4_p_0(Error_14, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__nl_2_p_0(void)
{
  MR_Box Stream_20;
  MR_Box Error_22;

{
#define MR_PROC_LABEL mercury__io__nl_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_20  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__nl_2_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_20 ;
	Character = (MR_Char) 10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_22 );
}
  mercury__io__throw_on_error_4_p_0(Error_22, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_string_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String Message_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_string_3_p_0(
  MR_String Message_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_string_3_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Message = Message_4 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_float_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Float Val_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_float_3_p_0(
  MR_Float Val_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_float_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_float_3_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Val = Val_4 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_uint64_4_p_0(
  MR_Word HeadVar__1_1,
  uint64_t Val_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_uint64_3_p_0(
  uint64_t Val_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_uint64_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_uint64_3_p_0

	MercuryFilePtr Stream;
	uint64_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Val = Val_4 ;
		{

    if (ML_fprintf(Stream, "%" PRIu64, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_int64_4_p_0(
  MR_Word HeadVar__1_1,
  int64_t Val_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_int64_3_p_0(
  int64_t Val_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_int64_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_int64_3_p_0

	MercuryFilePtr Stream;
	int64_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Val = Val_4 ;
		{

    if (ML_fprintf(Stream, "%" PRId64, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_uint32_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t Val_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_uint32_3_p_0(
  uint32_t Val_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_uint32_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_uint32_3_p_0

	MercuryFilePtr Stream;
	uint32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Val = Val_4 ;
		{

    if (ML_fprintf(Stream, "%" PRIu32, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_int32_4_p_0(
  MR_Word HeadVar__1_1,
  int32_t Val_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_int32_3_p_0(
  int32_t Val_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_int32_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_int32_3_p_0

	MercuryFilePtr Stream;
	int32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Val = Val_4 ;
		{

    if (ML_fprintf(Stream, "%" PRId32, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_uint16_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t Val_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_uint16_3_p_0(
  uint16_t Val_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_uint16_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_uint16_3_p_0

	MercuryFilePtr Stream;
	uint16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Val = Val_4 ;
		{

    if (ML_fprintf(Stream, "%" PRIu16, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_int16_4_p_0(
  MR_Word HeadVar__1_1,
  int16_t Val_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_int16_3_p_0(
  int16_t Val_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_int16_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_int16_3_p_0

	MercuryFilePtr Stream;
	int16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Val = Val_4 ;
		{

    if (ML_fprintf(Stream, "%" PRId16, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_uint8_4_p_0(
  MR_Word HeadVar__1_1,
  uint8_t Val_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_uint8_3_p_0(
  uint8_t Val_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_uint8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_uint8_3_p_0

	MercuryFilePtr Stream;
	uint8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Val = Val_4 ;
		{

    if (ML_fprintf(Stream, "%" PRIu8, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_int8_4_p_0(
  MR_Word HeadVar__1_1,
  int8_t Val_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_int8_3_p_0(
  int8_t Val_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_int8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_int8_3_p_0

	MercuryFilePtr Stream;
	int8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Val = Val_4 ;
		{

    if (ML_fprintf(Stream, "%" PRId8, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_uint_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned Val_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_uint_3_p_0(
  MR_Unsigned Val_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_uint_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_uint_3_p_0

	MercuryFilePtr Stream;
	MR_Unsigned Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Val = Val_4 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "u", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_int_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Val_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_int_3_p_0(
  MR_Integer Val_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_int_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_int_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Val = Val_4 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_char_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Char Character_6)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__write_char_3_p_0(
  MR_Char Character_4)
{
  MR_Box Stream_17;
  MR_Box Error_19;

{
#define MR_PROC_LABEL mercury__io__write_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_char_3_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	Character = Character_4 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_19 );
}
  mercury__io__throw_on_error_4_p_0(Error_19, (MR_String) "error writing to output file: ");
}

void MR_CALL 
mercury__io__read_binary_uint64_be_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint64_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
  mercury__io__read_binary_uint64_be_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_uint64_le_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint64_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint64_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
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
        MR_String Msg_25;
        MR_Word Var_28;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint64_be_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_25  = Msg;
}
        Var_28 = (MR_Word) (Msg_25);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_28));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = MR_box_uint64(UInt64_11);
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
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
        MR_String Msg_25;
        MR_Word Var_28;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint64_le_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_25  = Msg;
}
        Var_28 = (MR_Word) (Msg_25);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_28));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = MR_box_uint64(UInt64_11);
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_int64_be_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int64_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
  mercury__io__read_binary_int64_be_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_int64_le_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int64_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int64_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
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
        MR_String Msg_26;
        MR_Word Var_29;

{
#define MR_PROC_LABEL mercury__io__read_binary_int64_be_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_26  = Msg;
}
        Var_29 = (MR_Word) (Msg_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_29));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = MR_box_int64(Int64_12);
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
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
        MR_String Msg_26;
        MR_Word Var_29;

{
#define MR_PROC_LABEL mercury__io__read_binary_int64_le_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_26  = Msg;
}
        Var_29 = (MR_Word) (Msg_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_29));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = MR_box_int64(Int64_12);
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_uint32_be_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint32_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
  mercury__io__read_binary_uint32_be_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_uint32_le_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint32_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint32_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
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
        MR_String Msg_25;
        MR_Word Var_28;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint32_be_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_25  = Msg;
}
        Var_28 = (MR_Word) (Msg_25);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_28));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (UInt32_11));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
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
        MR_String Msg_25;
        MR_Word Var_28;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint32_le_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_25  = Msg;
}
        Var_28 = (MR_Word) (Msg_25);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_28));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (UInt32_11));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_int32_be_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int32_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
  mercury__io__read_binary_int32_be_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_int32_le_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int32_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int32_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
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
        MR_String Msg_26;
        MR_Word Var_29;

{
#define MR_PROC_LABEL mercury__io__read_binary_int32_be_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_26  = Msg;
}
        Var_29 = (MR_Word) (Msg_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_29));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Int32_12));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
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
        MR_String Msg_26;
        MR_Word Var_29;

{
#define MR_PROC_LABEL mercury__io__read_binary_int32_le_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_26  = Msg;
}
        Var_29 = (MR_Word) (Msg_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_29));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Int32_12));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_uint16_be_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint16_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
  mercury__io__read_binary_uint16_be_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_uint16_le_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint16_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint16_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
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
        MR_String Msg_25;
        MR_Word Var_28;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint16_be_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_25  = Msg;
}
        Var_28 = (MR_Word) (Msg_25);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_28));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (UInt16_11));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
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
        MR_String Msg_25;
        MR_Word Var_28;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint16_le_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_25  = Msg;
}
        Var_28 = (MR_Word) (Msg_25);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_28));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (UInt16_11));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_binary_int16_be_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int16_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
  mercury__io__read_binary_int16_be_4_p_0(Stream_6, Result_4);
}

void MR_CALL 
mercury__io__read_binary_int16_le_3_p_0(
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int16_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int16_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
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
        MR_String Msg_26;
        MR_Word Var_29;

{
#define MR_PROC_LABEL mercury__io__read_binary_int16_be_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_26  = Msg;
}
        Var_29 = (MR_Word) (Msg_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_29));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Int16_12));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
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
        MR_String Msg_26;
        MR_Word Var_29;

{
#define MR_PROC_LABEL mercury__io__read_binary_int16_le_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_26  = Msg;
}
        Var_29 = (MR_Word) (Msg_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_29));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IncompleteBytes_10));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Int16_12));
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
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (((MR_Box) ((MR_String) "failed to put back uint8")))));
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
  MR_Box Stream_17;
  MR_Word Ok_19;

{
#define MR_PROC_LABEL mercury__io__putback_uint8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__putback_uint8_3_p_0

	MercuryFilePtr Stream;
	uint8_t UInt8;
	MR_Word Ok;

	Stream = (MercuryFilePtr)Stream_17 ;
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
	Ok_19  = Ok;
}
  switch (Ok_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (((MR_Box) ((MR_String) "failed to put back uint8")))));
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
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (((MR_Box) ((MR_String) "failed to put back int8")))));
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
  MR_Box Stream_17;
  uint8_t UInt8_19;
  MR_Word Ok_20;

{
#define MR_PROC_LABEL mercury__io__putback_int8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
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
	UInt8_19  = U8;
}
{
#define MR_PROC_LABEL mercury__io__putback_int8_3_p_0

	MercuryFilePtr Stream;
	uint8_t UInt8;
	MR_Word Ok;

	Stream = (MercuryFilePtr)Stream_17 ;
	UInt8 = UInt8_19 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, UInt8) == EOF) {
        Ok = MR_FALSE;
    } else {
        Ok = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	Ok_20  = Ok;
}
  switch (Ok_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (((MR_Box) ((MR_String) "failed to put back int8")))));
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
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__putback_byte_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
  mercury__io__putback_byte_4_p_0(Stream_6, Int_4);
}

void MR_CALL 
mercury__io__putback_byte_4_p_0(
  MR_Word Stream_5,
  MR_Integer Int_6)
{
  uint8_t UInt8_8;
  MR_Integer Var_11 = (Int_6 & (MR_Integer) 255);
  MR_Box Stream_16;
  MR_Word Ok_18;

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
  Stream_16 = (MR_Box) (Stream_5);
{
#define MR_PROC_LABEL mercury__io__putback_byte_4_p_0

	MercuryFilePtr Stream;
	uint8_t UInt8;
	MR_Word Ok;

	Stream = (MercuryFilePtr)Stream_16 ;
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
	Ok_18  = Ok;
}
  switch (Ok_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (((MR_Box) ((MR_String) "failed to put back uint8")))));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_11 );
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
        MR_String Msg_29;
        MR_Word Var_32;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint8_unboxed_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_11 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_29  = Msg;
}
        Var_32 = (MR_Word) (Msg_29);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
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
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
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
        MR_String Msg_30;
        MR_Word Var_33;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint8_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_30  = Msg;
}
        Var_33 = (MR_Word) (Msg_30);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_33));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (UInt8_11));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_11 );
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
        MR_String Msg_29;
        MR_Word Var_32;

{
#define MR_PROC_LABEL mercury__io__read_binary_int8_unboxed_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_11 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_29  = Msg;
}
        Var_32 = (MR_Word) (Msg_29);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
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
  MR_Box Stream_12;

{
#define MR_PROC_LABEL mercury__io__read_binary_int8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Stream_12);
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
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
        MR_String Msg_30;
        MR_Word Var_33;

{
#define MR_PROC_LABEL mercury__io__read_binary_int8_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_30  = Msg;
}
        Var_33 = (MR_Word) (Msg_30);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_33));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Int8_11));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
	Byte_10  = ByteVal;
}
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_String Msg_29;
        MR_Word Var_32;

{
#define MR_PROC_LABEL mercury__io__read_byte_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_29  = Msg;
}
        Var_32 = (MR_Word) (Msg_29);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_32));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Byte_10));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_byte_3_p_0(
  MR_Word * Result_4)
{
  MR_Box Stream_17;
  MR_Word ResultCode_19;
  MR_Box Error_20;
  MR_Integer Byte_21;

{
#define MR_PROC_LABEL mercury__io__read_byte_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__read_byte_3_p_0

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
	ResultCode_19  = ResultCode;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_20 );
	Byte_21  = ByteVal;
}
  switch (ResultCode_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_String Msg_38;
        MR_Word Var_41;

{
#define MR_PROC_LABEL mercury__io__read_byte_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_20 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_38  = Msg;
}
        Var_41 = (MR_Word) (Msg_38);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_41));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Byte_21));
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
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (((MR_Box) ((MR_String) "failed to put back character")))));
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
  MR_Box Stream_17;
  MR_Word Ok_19;

{
#define MR_PROC_LABEL mercury__io__putback_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_17  = (MR_Box) Stream;
}
  mercury__io__primitives_read__putback_char_2_5_p_0(Stream_17, Char_4, &Ok_19);
  switch (Ok_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (((MR_Box) ((MR_String) "failed to put back character")))));
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
  MR_Box Var_20 = (MR_Box) (Stream_6);

  mercury__io__primitives_read__read_char_code_2_6_p_0(Var_20, &ResultCode_10, &Error_11, Char_8);
  switch (ResultCode_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_7 = (MR_Word) ((MR_Unsigned) 4U);
      break;
    case (MR_Integer) 2:
      {
        MR_String Msg_27;
        MR_Word Var_30;

{
#define MR_PROC_LABEL mercury__io__read_char_unboxed_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_11 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_27  = Msg;
}
        Var_30 = (MR_Word) (Msg_27);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
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
  MR_Box Var_20 = (MR_Box) (Stream_5);

  mercury__io__primitives_read__read_char_code_2_6_p_0(Var_20, &ResultCode_8, &Error_9, &Char_10);
  switch (ResultCode_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_String Msg_28;
        MR_Word Var_31;

{
#define MR_PROC_LABEL mercury__io__read_char_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_28  = Msg;
}
        Var_31 = (MR_Word) (Msg_28);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_31));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Char_10));
      }
      break;
  }
}

void MR_CALL 
mercury__io__read_char_3_p_0(
  MR_Word * Result_4)
{
  MR_Box Stream_12;
  MR_Word ResultCode_19;
  MR_Box Error_20;
  MR_Char Char_21;

{
#define MR_PROC_LABEL mercury__io__read_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Stream_12  = (MR_Box) Stream;
}
  mercury__io__primitives_read__read_char_code_2_6_p_0(Stream_12, &ResultCode_19, &Error_20, &Char_21);
  switch (ResultCode_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Result_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_String Msg_37;
        MR_Word Var_40;

{
#define MR_PROC_LABEL mercury__io__read_char_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_20 , Error);
	Msg0 = (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Msg_37  = Msg;
}
        Var_40 = (MR_Word) (Msg_37);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_40));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Char_21));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error getting file offset: ");
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
}
  mercury__io__throw_on_error_4_p_0(Error_9, (MR_String) "error getting file offset: ");
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__throw_on_error_4_p_0(Error_8, (MR_String) "error getting file offset: ");
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
}
  mercury__io__throw_on_error_4_p_0(Error_9, (MR_String) "error getting file offset: ");
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_11 );
}
  mercury__io__throw_on_error_4_p_0(Error_11, (MR_String) "error seeking in file: ");
}

void MR_CALL 
mercury__io__seek_binary_output_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Whence_7,
  MR_Integer Offset_8)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_11 );
}
  mercury__io__throw_on_error_4_p_0(Error_11, (MR_String) "error seeking in file: ");
}

void MR_CALL 
mercury__io__seek_binary_input64_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Whence_7,
  int64_t Offset_8)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_11 );
}
  mercury__io__throw_on_error_4_p_0(Error_11, (MR_String) "error seeking in file: ");
}

void MR_CALL 
mercury__io__seek_binary_input_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Whence_7,
  MR_Integer Offset_8)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_11 );
}
  mercury__io__throw_on_error_4_p_0(Error_11, (MR_String) "error seeking in file: ");
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_6 );
}
  mercury__io__throw_on_error_4_p_0(Error_6, (MR_String) "error closing file: ");
}

void MR_CALL 
mercury__io__close_output_3_p_0(
  MR_Word HeadVar__1_1)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_6 );
}
  mercury__io__throw_on_error_4_p_0(Error_6, (MR_String) "error closing file: ");
}

void MR_CALL 
mercury__io__close_binary_input_3_p_0(
  MR_Word HeadVar__1_1)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_6 );
}
  mercury__io__throw_on_error_4_p_0(Error_6, (MR_String) "error closing file: ");
}

void MR_CALL 
mercury__io__close_input_3_p_0(
  MR_Word HeadVar__1_1)
{
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_6 );
}
  mercury__io__throw_on_error_4_p_0(Error_6, (MR_String) "error closing file: ");
}

void MR_CALL 
mercury__io__throw_on_error_4_p_0(
  MR_Box Error_5,
  MR_String Prefix_6)
{
  MR_bool succeeded;
  MR_Word MaybeIOError_8;

{
#define MR_PROC_LABEL mercury__io__throw_on_error_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_5 , Error);
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    MaybeIOError_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Message_19;
    MR_Word IOError_20;

{
#define MR_PROC_LABEL mercury__io__throw_on_error_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_5 , Error);
	Msg0 = Prefix_6 ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Message_19  = Msg;
}
    IOError_20 = (MR_Word) (Message_19);
    {
      MaybeIOError_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeIOError_8, 0) = ((MR_Box) (IOError_20));
    }
  }
  if (!((MaybeIOError_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word IOError_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_8, (MR_Integer) 0))));

    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (IOError_9)));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
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
    MR_String Message_31;
    MR_Word IOError_32;

{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 = (MR_String) "can\'t append to file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Message_31  = Msg;
}
    IOError_32 = (MR_Word) (Message_31);
    {
      MaybeIOError_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeIOError_11, 0) = ((MR_Box) (IOError_32));
    }
  }
  if ((MaybeIOError_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_19 = (MR_Word) (NewStream_9);
    MR_Word Var_20;
    MR_Word Var_24;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (FileName_5));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (OpenCount_8));
      MR_hl_field(MR_mktag(0), Var_20, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (Var_24));
    }
    mercury__io__stream_db__insert_stream_info_4_p_0(NewStream_9, Var_20);
  }
  else
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_11, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_12));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
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
    MR_String Message_31;
    MR_Word IOError_32;

{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 = (MR_String) "can\'t append to file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Message_31  = Msg;
}
    IOError_32 = (MR_Word) (Message_31);
    {
      MaybeIOError_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeIOError_11, 0) = ((MR_Box) (IOError_32));
    }
  }
  if ((MaybeIOError_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_19 = (MR_Word) (NewStream_9);
    MR_Word Var_20;
    MR_Word Var_24;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (FileName_5));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (OpenCount_8));
      MR_hl_field(MR_mktag(0), Var_20, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (Var_24));
    }
    mercury__io__stream_db__insert_stream_info_4_p_0(NewStream_9, Var_20);
  }
  else
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_11, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_12));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
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
    MR_String Message_31;
    MR_Word IOError_32;

{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 = (MR_String) "can\'t open output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Message_31  = Msg;
}
    IOError_32 = (MR_Word) (Message_31);
    {
      MaybeIOError_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeIOError_11, 0) = ((MR_Box) (IOError_32));
    }
  }
  if ((MaybeIOError_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_19 = (MR_Word) (NewStream_9);
    MR_Word Var_20;
    MR_Word Var_24;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (FileName_5));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (OpenCount_8));
      MR_hl_field(MR_mktag(0), Var_20, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (Var_24));
    }
    mercury__io__stream_db__insert_stream_info_4_p_0(NewStream_9, Var_20);
  }
  else
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_11, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_12));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
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
    MR_String Message_31;
    MR_Word IOError_32;

{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 = (MR_String) "can\'t open output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Message_31  = Msg;
}
    IOError_32 = (MR_Word) (Message_31);
    {
      MaybeIOError_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeIOError_11, 0) = ((MR_Box) (IOError_32));
    }
  }
  if ((MaybeIOError_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_19 = (MR_Word) (NewStream_9);
    MR_Word Var_20;
    MR_Word Var_24;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (FileName_5));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (OpenCount_8));
      MR_hl_field(MR_mktag(0), Var_20, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (Var_24));
    }
    mercury__io__stream_db__insert_stream_info_4_p_0(NewStream_9, Var_20);
  }
  else
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_11, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_12));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
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
    MR_String Message_31;
    MR_Word IOError_32;

{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 = (MR_String) "can\'t open input file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Message_31  = Msg;
}
    IOError_32 = (MR_Word) (Message_31);
    {
      MaybeIOError_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeIOError_11, 0) = ((MR_Box) (IOError_32));
    }
  }
  if ((MaybeIOError_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_19 = (MR_Word) (NewStream_9);
    MR_Word Var_20;
    MR_Word Var_24;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (FileName_5));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (OpenCount_8));
      MR_hl_field(MR_mktag(0), Var_20, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (Var_24));
    }
    mercury__io__stream_db__insert_stream_info_4_p_0(NewStream_9, Var_20);
  }
  else
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_11, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_12));
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
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
    MR_String Message_31;
    MR_Word IOError_32;

{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 = (MR_String) "can\'t open input file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	Message_31  = Msg;
}
    IOError_32 = (MR_Word) (Message_31);
    {
      MaybeIOError_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeIOError_11, 0) = ((MR_Box) (IOError_32));
    }
  }
  if ((MaybeIOError_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_19 = (MR_Word) (NewStream_9);
    MR_Word Var_20;
    MR_Word Var_24;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (FileName_5));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (OpenCount_8));
      MR_hl_field(MR_mktag(0), Var_20, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (Var_24));
    }
    mercury__io__stream_db__insert_stream_info_4_p_0(NewStream_9, Var_20);
  }
  else
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_11, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_12));
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
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint64__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint64__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), MR_unbox_uint64(wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((uint32_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((uint16_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((uint8_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int64__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int64__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), MR_unbox_int64(wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((int32_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((int16_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((int8_t) (MR_Word) wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), MR_unbox_float(wrapper_arg_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Char) (MR_Word) wrapper_arg_2));
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
  MR_Word conv1_Result_7;
  uint8_t conv0_UInt8_8;

  mercury__io__ClassMethod_for_stream__unboxed_reader____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Result_7, &conv0_UInt8_8);
  *wrapper_arg_2 = ((MR_Box) (conv1_Result_7));
  *wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_UInt8_8));
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
  MR_Word conv1_Result_7;
  int8_t conv0_Int8_8;

  mercury__io__ClassMethod_for_stream__unboxed_reader____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Result_7, &conv0_Int8_8);
  *wrapper_arg_2 = ((MR_Box) (conv1_Result_7));
  *wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_Int8_8));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__unboxed_reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Result_7;
  MR_Char conv0_Char_8;

  mercury__io__ClassMethod_for_stream__unboxed_reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unboxed_get_5_5_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Result_7, &conv0_Char_8);
  *wrapper_arg_2 = ((MR_Box) (conv1_Result_7));
  *wrapper_arg_3 = ((MR_Box) (MR_Word) (conv0_Char_8));
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
mercury__io__ClassMethod_for_stream__stream____io__output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__stream____io__output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
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
mercury__io__ClassMethod_for_stream__stream____io__input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__stream____io__input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
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
  MR_Word conv0_Result_6;

  mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__uint8__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Result_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Result_6));
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
  MR_Word conv0_Result_6;

  mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int8__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Result_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Result_6));
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
  MR_Word conv0_Result_6;

  mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Result_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Result_6));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Result_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Result_6));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Result_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Result_6));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Result_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Result_6));
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
mercury__io__ClassMethod_for_stream__putback____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__putback____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Char) (MR_Word) wrapper_arg_2));
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
mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
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
