/*
** Automatically generated from `io.m'
** by the Mercury compiler,
** version rotd-2018-01-05
** configured for x86_64-pc-linux-gnu.
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
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int8.mih"
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











static const MR_FA_PseudoTypeInfo_Struct1 mercury__io__io__pti_read_result_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct3 mercury__io____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__io__list__pti_list_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct2 mercury__io____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct0 mercury__io____vpti_tuple_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__io__array__pti_array_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__io__io__pti_result_1__pseudo_1;

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

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_read_line_as_string_result_0_0;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_read_line_as_string_result_0_1;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_read_line_as_string_result_0_2;

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_read_line_as_string_result_0_3;

static const MR_EnumFunctorDescPtr mercury__io__io__enum_value_ordered_read_line_as_string_result_0[4];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_read_line_as_string_result_0[4];

static const MR_Integer mercury__io__io__functor_number_map_read_line_as_string_result_0[4];

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

static const MR_EnumFunctorDescPtr mercury__io__io__enum_value_ordered_result_code_0[3];

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_result_code_0[3];

static const MR_Integer mercury__io__io__functor_number_map_result_code_0[3];

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

static MR_Integer MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__io__IntroducedFrom__pred__update_globals__5210__1_3_p_0(
  MR_Word UpdatePred_4,
  MR_Word Globals0_6,
  MR_Word * LambdaHeadVar__1_16);

static void MR_CALL 
mercury__io__read_symlink_2_5_p_0(
  MR_String FileName_1,
  MR_String * TargetFileName_2,
  MR_Box * Error_3);

static void MR_CALL 
mercury__io__make_symlink_2_5_p_0(
  MR_String FileName_1,
  MR_String LinkFileName_2,
  MR_Box * Error_3);

static void MR_CALL 
mercury__io__remove_directory_entry_8_p_0(
  MR_String DirName_9,
  MR_String FileName_10,
  MR_Word _FileType_11,
  MR_Word * Continue_12,
  MR_Word HeadVar__5_13,
  MR_Word * Res_14);

static void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_100_105_114_101_99_116_111_114_121_95_101_110_116_114_121_95_95_91_51_44_32_53_93_95_48_8_p_0(
  MR_String DirName_9,
  MR_String FileName_10,
  MR_Word * Continue_12,
  MR_Word * Res_14);

static void MR_CALL 
mercury__io__decode_system_command_exit_code_5_p_0(
  MR_Integer Status0_1,
  MR_Word * Exited_2,
  MR_Integer * Status_3,
  MR_Word * Signalled_4,
  MR_Integer * Signal_5);

static void MR_CALL 
mercury__io__do_open_text_7_p_0(
  MR_String FileName_1,
  MR_String Mode_2,
  MR_Integer * StreamId_3,
  MR_Box * Stream_4,
  MR_Box * Error_5);

static void MR_CALL 
mercury__io__do_open_binary_7_p_0(
  MR_String FileName_1,
  MR_String Mode_2,
  MR_Integer * StreamId_3,
  MR_Box * Stream_4,
  MR_Box * Error_5);

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
mercury__io__with_input_stream_5_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__with_input_stream_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__do_write_bitmap_7_p_0(
  MR_Box Stream_1,
  MR_Box Bitmap_2,
  MR_Integer Start_3,
  MR_Integer Length_4,
  MR_Box * Error_5);

static MR_Box MR_CALL 
mercury__io__no_error_0_f_0(void);

static void MR_CALL 
mercury__io__unlock_globals_0_p_0(void);

static void MR_CALL 
mercury__io__may_delete_stream_info_3_p_0(
  MR_Integer * MayDelete_1);

static void MR_CALL 
mercury__io__set_stream_db_3_p_0(
  MR_Word StreamDb_1);

static void MR_CALL 
mercury__io__print_to_stream_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box Stream_5,
  MR_Box Term_6);

static void MR_CALL 
mercury__io__read_into_buffer_9_p_0(
  MR_Box Stream_1,
  MR_Box Buffer0_2,
  MR_Box * Buffer_3,
  MR_Integer Pos0_4,
  MR_Integer * Pos_5,
  MR_Integer Size_6,
  MR_Box * Error_7);

static MR_bool MR_CALL 
mercury__io__buffer_to_string_3_p_0(
  MR_Box Buffer_1,
  MR_Integer Len_2,
  MR_String * Str_3);

static void MR_CALL 
mercury__io__resize_buffer_4_p_0(
  MR_Integer OldSize_1,
  MR_Integer NewSize_2,
  MR_Box Buffer0_3,
  MR_Box * Buffer_4);

static void MR_CALL 
mercury__io__alloc_buffer_2_p_0(
  MR_Integer Size_1,
  MR_Box * Buffer_2);

static void MR_CALL 
mercury__io__compare_file_id_2_3_p_0(
  MR_Integer * Res_1,
  MR_Box FileId1_2,
  MR_Box FileId2_3);

static void MR_CALL 
mercury__io__check_file_accessibility_2_7_p_0(
  MR_String FileName_1,
  MR_Word CheckRead_2,
  MR_Word CheckWrite_3,
  MR_Word CheckExecute_4,
  MR_Box * Error_5);

static void MR_CALL 
mercury__io__file_type_2_6_p_0(
  MR_Integer FollowSymLinks_1,
  MR_String FileName_2,
  MR_Word * FileType_3,
  MR_Box * Error_4);

static void MR_CALL 
mercury__io__stream_file_size_4_p_0(
  MR_Box Stream_1,
  MR_Integer * Size_2);

static void MR_CALL 
mercury__io__read_line_as_string_2_7_p_0(
  MR_Box Stream_1,
  MR_Word _FirstCall_2,
  MR_Word * Res_3,
  MR_String * RetString_4,
  MR_Box * Error_5);

static void MR_CALL 
mercury__io__do_read_bitmap_10_p_0(
  MR_Box Stream_1,
  MR_Integer StartByte_2,
  MR_Integer NumBytes_3,
  MR_Box Bitmap0_4,
  MR_Box * Bitmap_5,
  MR_Integer BytesRead0_6,
  MR_Integer * BytesRead_7,
  MR_Box * Error_8);

static void MR_CALL 
mercury__io__gc_init_4_p_0(
  MR_Word StreamDbType_1,
  MR_Word UserGlobalsType_2);

static MR_bool MR_CALL 
mercury__io__setenv_2_p_0(
  MR_String Var_1,
  MR_String Value_2);

static void MR_CALL 
mercury__io__insert_std_stream_names_2_p_0(void);

static void MR_CALL 
mercury__io__insert_stream_info_4_p_0(
  MR_Box Stream_5,
  MR_Word Name_6);

static MR_Word MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_57_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6);

static void MR_CALL 
mercury__io__check_file_accessibility_dotnet_5_p_0(
  MR_String FileName_6,
  MR_Word AccessTypes_7,
  MR_Word * Result_8);

static MR_Word MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_55_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6);

static MR_Word MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_54_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6);

static MR_Word MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_53_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6);

static void MR_CALL 
mercury__io__remove_file_recursively_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
mercury__io__update_globals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
mercury__io__read_binary_file_as_bitmap_2_7_p_0(
  MR_Word Stream_8,
  MR_Integer BufferSize_9,
  MR_Word * Res_10,
  MR_Word STATE_VARIABLE_BMs_0_17,
  MR_Word * STATE_VARIABLE_BMs_18);

static void MR_CALL 
mercury__io__read_binary_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__read_binary_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__read_binary_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__read_binary_3_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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

static void MR_CALL 
mercury__io__read_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__read_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__io__read_file_as_string_loop_10_p_0(
  MR_Word Stream_11,
  MR_Box STATE_VARIABLE_Buffer_0_20,
  MR_Box * STATE_VARIABLE_Buffer_21,
  MR_Integer STATE_VARIABLE_Pos_0_22,
  MR_Integer * STATE_VARIABLE_Pos_23,
  MR_Integer STATE_VARIABLE_Size_0_24,
  MR_Integer * STATE_VARIABLE_Size_25,
  MR_Box * Error_15);

static void MR_CALL 
mercury__io__read_line_2_6_p_0(
  MR_Word Stream_7,
  MR_Word * Result_8,
  MR_Word * Chars_9,
  MR_Box * Error_10);

static void MR_CALL 
mercury__io__read_word_2_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6);

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
mercury__io____Unify____buffer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____buffer_0_0_10001(
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
mercury__io____Unify____maybe_stream_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____maybe_stream_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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
mercury__io____Unify____read_line_as_string_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____read_line_as_string_result_0_0_10001(
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
mercury__io____Unify____stream_content_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____stream_content_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____stream_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____stream_db_0_0_10001(
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
mercury__io____Unify____stream_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____stream_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____stream_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____stream_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io____Unify____stream_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io____Compare____stream_source_0_0_10001(
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
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
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
mercury__io__ClassMethod_for_stream__stream____io__output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
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
mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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

static void MR_CALL 
mercury__io__ClassMethod_for_stream__bulk_reader____io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0______stream__bulk_get_9_9_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);


static /* final */ const MR_Box mercury__io_scalar_common_1[3][3];

static /* final */ const MR_Box mercury__io_scalar_common_2[4][4];

static /* final */ const MR_Box mercury__io_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__io_scalar_common_4[3][2];

static /* final */ const MR_Box mercury__io_scalar_common_5[8][1];

static /* final */ const MR_Integer mercury__io_scalar_common_6[1][2];

static /* final */ const MR_Box mercury__io_scalar_common_7[3][7];

static /* final */ const MR_Box mercury__io_scalar_common_8[3][9];

static /* final */ const MR_Box mercury__io_scalar_common_9[1][8];

static /* final */ const MR_Box mercury__io_scalar_common_10[1][6];

static /* final */ const MR_Box mercury__io_scalar_common_11[1][11];




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
    ((MR_Box) (&mercury__io_scalar_common_11[0])),
    ((MR_Box) (mercury__io__remove_file_recursively_4_p_0_1)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 0))
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

static /* final */ const MR_Box mercury__io_scalar_common_5[8][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "null character in input"))))
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
    ((MR_Box) (((MR_Box) ((MR_String) "unknown result code from system command"))))
  },
  /* row 7 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "io.read_binary: missing newline"))))
  },
};

static /* final */ const MR_Integer mercury__io_scalar_common_6[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_7[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__io_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__io__pti_read_result_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io____vpti_tuple_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mercury__io_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__io__pti_result_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_8[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__io_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_input_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mercury__io_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mercury__io_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__array__pti_array_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_9[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io_scalar_common_10[1][6] = {
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

static /* final */ const MR_Box mercury__io_scalar_common_11[1][11] = {
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
#include "int16.mh"
#include "int32.mh"
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
#include "uint8.mh"
#include "version_array.mh"
#line 1958 "io.m"

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

#line 6125 "io.m"


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

#line 6777 "io.m"


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

    /*
    ** Check if the opened file is actually a directory.
    ** If fileno or fstat are not available then we assume the OS would not
    ** let us open a directory as a file anyway.
    */
#if defined(MR_HAVE_FSTAT) &&         (defined(MR_HAVE_FILENO) || defined(fileno)) && defined(S_ISDIR)
    {
        struct stat stat_info;
        int         stat_errno;

        if (0 != fstat(fileno(f), &stat_info)) {
            stat_errno = errno;
            fclose(f);
            errno = stat_errno;
            return NULL;
        }
        if (S_ISDIR(stat_info.st_mode)) {
            fclose(f);
            errno = EISDIR;
            return NULL;
        }
    }
#endif

    MR_incr_hp_type_msg(mf, MercuryFile, alloc_id, "MercuryFile");
    MR_mercuryfile_init(f, 1, mf);
    return mf;
}


#line 6924 "io.m"


int
mercury_get_byte(MercuryFilePtr mf)
{
    int c = MR_GETCH(*mf);
    if (c == '\n') {
        MR_line_number(*mf)++;
    }
    return c;
}


#line 7024 "io.m"


#include <errno.h>

#ifdef EBADF
  #define MR_CLOSED_FILE_ERROR  EBADF
#else
  /* ANSI/ISO C guarantees that EDOM will exist */
  #define MR_CLOSED_FILE_ERROR  EDOM
#endif

#ifdef MR_NEW_MERCURYFILE_STRUCT

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

static int
ME_closed_stream_ferror(MR_StreamInfo *info)
{
    return 0;
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
    /* putc     = */    ME_closed_stream_putch,
    /* ferror   = */    ME_closed_stream_ferror
};

#endif /* MR_NEW_MERCURYFILE_STRUCT */

int
mercury_close(MercuryFilePtr mf)
{
    /*
    ** On some systems attempting to close a file stream that has been
    ** previously closed will lead to a segmentation fault. We check
    ** that we have not previously closed the file stream here so we
    ** can give the user some idea about what has happened.
    */
    if (MR_file(*mf) == NULL) {
        errno = MR_CLOSED_FILE_ERROR;
        return EOF;
    }

    if (MR_CLOSE(*mf) < 0) {
        return EOF;
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

    return 0;
}


#line 7232 "io.m"


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

#line 7248 "io.m"

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

#line 11288 "io.m"

    long    ML_io_tempnam_counter = 0;

#line 4571 "io.m"
void 
ML_io_print_to_stream(
  MR_Word TypeInfo_for_T_13,
  MercuryFilePtr Stream_5,
  MR_Word Term_6)
#line 4571 "io.m"
{
#line 4571 "io.m"
	MR_Box boxed_Stream_5;
	MR_MAYBE_BOX_FOREIGN_TYPE(MercuryFilePtr, Stream_5, boxed_Stream_5);
	mercury__io__print_to_stream_4_p_0((MR_Word) TypeInfo_for_T_13, boxed_Stream_5, (MR_Box) Term_6);
}

#line 9453 "io.m"
void 
ML_io_stdin_stream(
  MercuryFilePtr * Stream_1)
#line 9453 "io.m"
{
#line 9453 "io.m"
	MR_Box boxed_Stream_1;
	mercury__io__stdin_stream_2_3_p_0(&boxed_Stream_1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MercuryFilePtr, boxed_Stream_1, *Stream_1);
}

#line 9455 "io.m"
void 
ML_io_stdout_stream(
  MercuryFilePtr * Stream_1)
#line 9455 "io.m"
{
#line 9455 "io.m"
	MR_Box boxed_Stream_1;
	mercury__io__stdout_stream_2_3_p_0(&boxed_Stream_1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MercuryFilePtr, boxed_Stream_1, *Stream_1);
}

#line 9457 "io.m"
void 
ML_io_stderr_stream(
  MercuryFilePtr * Stream_1)
#line 9457 "io.m"
{
#line 9457 "io.m"
	MR_Box boxed_Stream_1;
	mercury__io__stderr_stream_2_3_p_0(&boxed_Stream_1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MercuryFilePtr, boxed_Stream_1, *Stream_1);
}


static const MR_FA_PseudoTypeInfo_Struct1 mercury__io__io__pti_read_result_1__pseudo_1 = {
  &mercury__io__io__type_ctor_info_read_result_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 mercury__io____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__io__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__io____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
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
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__io__io__pti_result_1__pseudo_1 = {
  &mercury__io__io__type_ctor_info_result_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_binary_input_stream_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_binary_output_stream_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_chunk_inner_res_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res_1_1 = {
  (MR_String) "error",
  (MR_Integer) 2,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__io__io__field_types_chunk_inner_res_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res_1_2 = {
  (MR_String) "more",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__io__io__field_types_chunk_inner_res_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_chunk_inner_res_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_chunk_inner_res_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
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

static const MR_PseudoTypeInfo mercury__io__io__field_types_chunk_inner_res0_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res0_0_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__io__io__field_types_chunk_inner_res0_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_chunk_inner_res0_0_2 = {
  (MR_String) "more",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    mercury__io__io__du_stag_ordered_chunk_inner_res0_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_input_stream_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_maybe_partial_res_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_maybe_partial_res_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_partial_res_1_1 = {
  (MR_String) "error",
  (MR_Integer) 2,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__io__io__field_types_maybe_partial_res_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_maybe_partial_res_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_maybe_stream_info_0_0,
  mercury__io__io__field_names_maybe_stream_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_maybe_stream_info_0_1 = {
  (MR_String) "unknown_stream",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    mercury__io__io__du_stag_ordered_maybe_stream_info_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_output_stream_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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

static const MR_PseudoTypeInfo mercury__io__io__field_types_posn_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_posn_0_0 = {
  (MR_String) "posn",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_posn_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_posn_0_0[1] = {
  &mercury__io__io__du_functor_desc_posn_0_0
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_posn_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_read_line_as_string_result_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_read_line_as_string_result_0_1 = {
  (MR_String) "eof",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_read_line_as_string_result_0_2 = {
  (MR_String) "null_char",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_read_line_as_string_result_0_3 = {
  (MR_String) "error",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_value_ordered_read_line_as_string_result_0[4] = {
  &mercury__io__io__enum_functor_desc_read_line_as_string_result_0_0,
  &mercury__io__io__enum_functor_desc_read_line_as_string_result_0_1,
  &mercury__io__io__enum_functor_desc_read_line_as_string_result_0_2,
  &mercury__io__io__enum_functor_desc_read_line_as_string_result_0_3
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_name_ordered_read_line_as_string_result_0[4] = {
  &mercury__io__io__enum_functor_desc_read_line_as_string_result_0_1,
  &mercury__io__io__enum_functor_desc_read_line_as_string_result_0_3,
  &mercury__io__io__enum_functor_desc_read_line_as_string_result_0_2,
  &mercury__io__io__enum_functor_desc_read_line_as_string_result_0_0
};

static const MR_Integer mercury__io__io__functor_number_map_read_line_as_string_result_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_read_line_as_string_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io____Unify____read_line_as_string_result_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____read_line_as_string_result_0_0_10001)),
  (MR_String) "io",
  (MR_String) "read_line_as_string_result",
  {     mercury__io__io__enum_name_ordered_read_line_as_string_result_0 },
  {     mercury__io__io__enum_value_ordered_read_line_as_string_result_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_read_line_as_string_result_0
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_read_result_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_read_result_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_read_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_read_result_1_1 = {
  (MR_String) "eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_read_result_1_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_read_result_1_2 = {
  (MR_String) "error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__io__io__field_types_read_result_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    mercury__io__io__du_stag_ordered_read_result_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_read_result_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_res_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_res_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_res_1_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__io__io__field_types_res_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_res_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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

static const MR_PseudoTypeInfo mercury__io__io__field_types_res_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_res_0_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__io__io__field_types_res_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    mercury__io__io__du_stag_ordered_res_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_1_1 = {
  (MR_String) "eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_result_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_1_2 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__io__io__field_types_result_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    mercury__io__io__du_stag_ordered_result_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_result_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
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

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_0_1 = {
  (MR_String) "eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_result_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_result_0_2 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__io__io__field_types_result_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    mercury__io__io__du_stag_ordered_result_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_result_code_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_result_code_0_1 = {
  (MR_String) "eof",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__io__io__enum_functor_desc_result_code_0_2 = {
  (MR_String) "error",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mercury__io__io__enum_value_ordered_result_code_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io____Unify____result_code_0_0_10001)),
  ((MR_Box) (mercury__io____Compare____result_code_0_0_10001)),
  (MR_String) "io",
  (MR_String) "result_code",
  {     mercury__io__io__enum_name_ordered_result_code_0 },
  {     mercury__io__io__enum_value_ordered_result_code_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__io__io__functor_number_map_result_code_0
};

const MR_TypeCtorInfo_Struct mercury__io__io__type_ctor_info_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_stream_info_0_0,
  mercury__io__io__field_names_stream_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__io__io__du_stag_ordered_stream_info_0_0[1] = {
  &mercury__io__io__du_functor_desc_stream_info_0_0
};

static const MR_DuPtagLayout mercury__io__io__du_ptag_ordered_stream_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_stream_source_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_stream_source_0_1 = {
  (MR_String) "stdin",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_stream_source_0_2 = {
  (MR_String) "stdout",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_stream_source_0_3 = {
  (MR_String) "stderr",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    mercury__io__io__du_stag_ordered_stream_source_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__io__io__field_types_system_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__io__io__field_types_system_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__io__io__du_functor_desc_system_result_0_1 = {
  (MR_String) "signalled",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__io__io__field_types_system_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_NONE,
    mercury__io__io__du_stag_ordered_system_result_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__binary_output_stream__arity0__uint8__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__binary_output_stream__arity0__int8__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
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

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__uint32__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__uint16__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__uint8__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__uint__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__int32__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__int16__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__int8__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
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

static MR_Integer MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__io__IntroducedFrom__pred__update_globals__5210__1_3_p_0(
  MR_Word UpdatePred_4,
  MR_Word Globals0_6,
  MR_Word * LambdaHeadVar__1_16)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), UpdatePred_4, (MR_Integer) 1)));
    MR_Box conv1_LambdaHeadVar__1_16;

    func_0(((MR_Box) UpdatePred_4), ((MR_Box) (Globals0_6)), &conv1_LambdaHeadVar__1_16);
    *LambdaHeadVar__1_16 = ((MR_Word) conv1_LambdaHeadVar__1_16);
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Char HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_8 ;
	Character =  HeadVar__2_2 ;
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Float HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_8 ;
	Val =  HeadVar__2_2 ;
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_8 ;
	Val =  HeadVar__2_2 ;
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	int8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_8 ;
	Val =  HeadVar__2_2 ;
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  int16_t HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	int16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_8 ;
	Val =  HeadVar__2_2 ;
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	int32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_8 ;
	Val =  HeadVar__2_2 ;
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Unsigned Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_8 ;
	Val =  HeadVar__2_2 ;
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	uint8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_8 ;
	Val =  HeadVar__2_2 ;
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	uint16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_8 ;
	Val =  HeadVar__2_2 ;
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	uint32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_8 ;
	Val =  HeadVar__2_2 ;
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_8 ;
	Message =  HeadVar__2_2 ;
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word TypeClassInfo_for_writer_5 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_6 = (MR_Word) &mercury__io_scalar_common_3[1];

    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeClassInfo_for_writer_5, TypeClassInfo_for_writer_6, HeadVar__1_1, (MR_Integer) 1, HeadVar__2_2);
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_8 ;
	Byte =  HeadVar__2_2 ;
		{

    /* call putc with a strictly non-negative byte-sized integer */
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    uint8_t UInt8_10;
    MR_Integer Int_11;
    MR_Box Error_12;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0

	int8_t I8;
	uint8_t U8;

	I8 =  HeadVar__2_2 ;
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

	U8 =  UInt8_10 ;
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

	Stream = (MercuryFilePtr) Stream_8 ;
	Byte =  Int_11 ;
		{

    /* call putc with a strictly non-negative byte-sized integer */
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Integer Int_10;
    MR_Box Error_11;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0

	uint8_t U8;
	MR_Integer I;

	U8 =  HeadVar__2_2 ;
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

	Stream = (MercuryFilePtr) Stream_8 ;
	Byte =  Int_10 ;
		{

    /* call putc with a strictly non-negative byte-sized integer */
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  mercury__io__write_bitmap_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word Stream_5,
  MR_Word Slice_6)
{
  {
    MR_Integer Var_11;
    MR_Integer Var_12;
    MR_Integer V_5_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Slice_6, (MR_Integer) 1)));
    MR_Box V_4_24 = ((MR_Box) (MR_hl_field(MR_mktag(0), Slice_6, (MR_Integer) 0)));
    MR_Integer V_5_29;
    MR_Integer V_5_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Slice_6, (MR_Integer) 2)));
    MR_Box V_4_32;
    MR_Integer V_5_33;

    Var_11 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_start_byte_index", V_5_21);
    V_4_32 = ((MR_Box) (MR_hl_field(MR_mktag(0), Slice_6, (MR_Integer) 0)));
    V_5_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Slice_6, (MR_Integer) 1)));
    V_5_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Slice_6, (MR_Integer) 2)));
    Var_12 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_num_bytes", V_5_29);
    mercury__io__write_bitmap_6_p_0(Stream_5, V_4_24, Var_11, Var_12);
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;

    mercury__io__stream_name_4_p_0(Stream_8, HeadVar__2_2);
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;

    mercury__io__stream_name_4_p_0(Stream_8, HeadVar__2_2);
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;

    mercury__io__stream_name_4_p_0(Stream_8, HeadVar__2_2);
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;

    mercury__io__stream_name_4_p_0(Stream_8, HeadVar__2_2);
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0(
  MR_Word Stream_6,
  MR_Word Whence0_7,
  MR_Integer OffSet_8)
{
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0(
  MR_Word Stream_6,
  MR_Word Whence0_7,
  MR_Integer OffSet_8)
{
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  {
    MR_Word Result0_8;
    MR_Word Result0_18;
    MR_Char Char_19;
    MR_Box Error_20;
    MR_Box Stream_30 = (MR_Box) Stream_5;

    mercury__io__read_char_code_2_6_p_0(Stream_30, &Result0_18, &Char_19, &Error_20);
    switch (Result0_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Result0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_21;
          MR_Word Var_24;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_20 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_21  = Msg;
}
          Var_24 = (MR_Word) Msg_21;
          {
            Result0_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Result0_8, 0) = ((MR_Box) (Var_24));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          Result0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Result0_8, 0) = ((MR_Box) (MR_Word) (Char_19));
        }
        break;
    }
    switch (MR_tag((MR_Word) Result0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Char T_33 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (T_33));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), Result0_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_34));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  {
    MR_Word Result0_8;

    mercury__io__read_line_as_string_4_p_0(Stream_5, &Result0_8);
    switch (MR_tag((MR_Word) Result0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_String String_9 = ((MR_String) (MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0)));
          MR_Word Var_14 = (MR_Word) String_9;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), Result0_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_10));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  {
    MR_Word Result0_8;

    mercury__io__read_file_as_string_4_p_0(Stream_5, &Result0_8);
    if (((MR_tag((MR_Word) Result0_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 1)));
      MR_String _PartialString_10 = ((MR_String) (MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_11));
      }
    }
    else
    {
      MR_String String_9 = ((MR_String) (MR_hl_field(MR_mktag(0), Result0_8, (MR_Integer) 0)));
      MR_Word Var_15 = (MR_Word) String_9;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
      }
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  {
    MR_Word Result0_8;
    MR_Word Result0_18;
    MR_Integer Byte_19;
    MR_Box Error_20;
    MR_Box Stream_31 = (MR_Box) Stream_5;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_31 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_18  = Result;
	 Byte_19  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_20 );
}
    switch (Result0_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Result0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_21;
          MR_Word Var_25;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_20 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_21  = Msg;
}
          Var_25 = (MR_Word) Msg_21;
          {
            Result0_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Result0_8, 0) = ((MR_Box) (Var_25));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          Result0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Result0_8, 0) = ((MR_Box) (Byte_19));
        }
        break;
    }
    switch (MR_tag((MR_Word) Result0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Integer T_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (T_34));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), Result0_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_35));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Char HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Word Ok_10;

    mercury__io__putback_char_2_5_p_0(Stream_8, HeadVar__2_2, &Ok_10);
    switch (Ok_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_14_14 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
          MR_Word Var_12 = (MR_Word) ((MR_Box) ((MR_String) "failed to put back character"));

          {
            mercury__exception__throw_1_p_0(TypeCtorInfo_14_14, ((MR_Box) (Var_12)));
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;
    MR_Word Ok_10;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Character;
	MR_Word Ok;

	Stream = (MercuryFilePtr) Stream_8 ;
	Character =  HeadVar__2_2 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, Character) == EOF) {
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
          MR_Word TypeCtorInfo_14_14 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
          MR_Word Var_12 = (MR_Word) ((MR_Box) ((MR_String) "failed to put back byte"));

          {
            mercury__exception__throw_1_p_0(TypeCtorInfo_14_14, ((MR_Box) (Var_12)));
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Box Stream_6 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_6 ;
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Box Stream_6 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_6 ;
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
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_8 ;
	LineNum =  HeadVar__2_2 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_8 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = LineNum;
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_8 ;
	LineNum =  HeadVar__2_2 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  {
    MR_Box Stream_8 = (MR_Box) HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_8 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = LineNum;
}
  }
}

MR_String MR_CALL 
mercury__io__ClassMethod_for_stream__error____io__error__arity0______stream__error_message_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = (MR_String) HeadVar__1_1;

    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__io__ClassMethod_for_stream__bulk_reader____io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0______stream__bulk_get_9_9_p_0(
  MR_Word Stream_10,
  MR_Integer Index_11,
  MR_Integer Int_12,
  MR_Box STATE_VARIABLE_Store_0_18,
  MR_Box * STATE_VARIABLE_Store_19,
  MR_Integer * NumRead_14,
  MR_Word * Result_15)
{
  {
    MR_Word Result0_17;

    mercury__io__read_bitmap_9_p_0(Stream_10, Index_11, Int_12, STATE_VARIABLE_Store_0_18, STATE_VARIABLE_Store_19, NumRead_14, &Result0_17);
    if ((Result0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Result_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word E_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_17, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (E_24));
      }
    }
  }
}

void MR_CALL 
mercury__io____Compare____whence_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

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
}

MR_bool MR_CALL 
mercury__io____Unify____whence_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____text_output_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__io____Compare____output_stream_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__io____Unify____text_output_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__io____Unify____output_stream_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____text_input_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__io____Compare____input_stream_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__io____Unify____text_input_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__io____Unify____input_stream_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____system_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

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
      MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

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
}

MR_bool MR_CALL 
mercury__io____Unify____system_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (ArgX1_3 == ArgY1_4);
      }
    }
    else
    {
      MR_Integer ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____system_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = (MR_Word) HeadVar__3_3;

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__io____Unify____system_error_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = (MR_Word) HeadVar__2_2;

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____stream_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

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
}

MR_bool MR_CALL 
mercury__io____Unify____stream_mode_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____stream_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        Var_12 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          Var_12 = (MR_Integer) 0;
        else
          Var_12 = (MR_Integer) 2;
      }
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;
        MR_Integer Var_21 = (MR_Integer) ArgX2_6;
        MR_Integer Var_22 = (MR_Integer) ArgY2_7;

        succeeded = (Var_21 < Var_22);
        if (succeeded)
          Var_13 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_21 == Var_22);
          if (succeeded)
            Var_13 = (MR_Integer) 0;
          else
            Var_13 = (MR_Integer) 2;
        }
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;
          MR_Integer Var_23 = (MR_Integer) ArgX3_8;
          MR_Integer Var_24 = (MR_Integer) ArgY3_9;

          succeeded = (Var_23 < Var_24);
          if (succeeded)
            Var_14 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_23 == Var_24);
            if (succeeded)
              Var_14 = (MR_Integer) 0;
            else
              Var_14 = (MR_Integer) 2;
          }
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            mercury__io____Compare____stream_source_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____stream_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = mercury__io____Unify____stream_source_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____stream_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
mercury__io____Unify____stream_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____stream_db_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_6_6 = (MR_Word) &mercury__io_scalar_common_1[1];
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0(TypeInfo_6_6, HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__io____Unify____stream_db_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_5_5 = (MR_Word) &mercury__io_scalar_common_1[1];
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_5_5, ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____stream_content_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

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
}

MR_bool MR_CALL 
mercury__io____Unify____stream_content_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = (MR_Word) HeadVar__3_3;

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__io____Unify____stream_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = (MR_Word) HeadVar__2_2;

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____state_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_105_111_95_95_115_116_97_116_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_105_111_95_95_115_116_97_116_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__io____Unify____state_0_0(void)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_105_111_95_95_115_116_97_116_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
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
mercury__io____Compare____result_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

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
}

MR_bool MR_CALL 
mercury__io____Unify____result_code_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____result_1_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_17 = (MR_Integer) HeadVar__3_3;

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
            MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));
                  MR_String Var_22 = (MR_String) Var_20;
                  MR_String Var_23 = (MR_String) ArgY1_15;
                  MR_Integer V_7_27;

{
#define MR_PROC_LABEL mercury__io____Compare____result_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_22 ;
	S2 =  Var_23 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_27  = Res;
}
                  succeeded = (V_7_27 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_27 == (MR_Integer) 0);
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
}

MR_bool MR_CALL 
mercury__io____Unify____result_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
            MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

            succeeded = (CastY_6 == CastX_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_4 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;
            MR_Integer CastX_14;
            MR_Integer CastY_15;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              CastX_14 = (MR_Integer) ArgX1_7;
              CastY_15 = (MR_Integer) ArgY1_8;
              succeeded = (CastX_14 == CastY_15);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_String ArgX1_12 = (MR_String) ArgX1_7;
                MR_String ArgY1_13 = (MR_String) ArgY1_8;

                succeeded = (strcmp(ArgX1_12, ArgY1_13) == 0);
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_11 = (MR_Integer) HeadVar__3_3;

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
            MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_String Var_14 = (MR_String) Var_13;
                  MR_String Var_15 = (MR_String) ArgY1_9;
                  MR_Integer V_7_19;

{
#define MR_PROC_LABEL mercury__io____Compare____result_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_14 ;
	S2 =  Var_15 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_19  = Res;
}
                  succeeded = (V_7_19 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_19 == (MR_Integer) 0);
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
}

MR_bool MR_CALL 
mercury__io____Unify____result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

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
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_6 == CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;
            MR_Integer CastX_13;
            MR_Integer CastY_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              CastX_13 = (MR_Integer) ArgX1_7;
              CastY_14 = (MR_Integer) ArgY1_8;
              succeeded = (CastX_13 == CastY_14);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_String ArgX1_11 = (MR_String) ArgX1_7;
                MR_String ArgY1_12 = (MR_String) ArgY1_8;

                succeeded = (strcmp(ArgX1_11, ArgY1_12) == 0);
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____res_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_String Var_18 = (MR_String) Var_16;
        MR_String Var_19 = (MR_String) ArgY1_11;
        MR_Integer V_7_23;

{
#define MR_PROC_LABEL mercury__io____Compare____res_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_18 ;
	S2 =  Var_19 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_23  = Res;
}
        succeeded = (V_7_23 < (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (V_7_23 == (MR_Integer) 0);
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

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, HeadVar__1_1, Var_17, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____res_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;
      MR_Integer CastX_12;
      MR_Integer CastY_13;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        CastX_12 = (MR_Integer) ArgX1_5;
        CastY_13 = (MR_Integer) ArgY1_6;
        succeeded = (CastX_12 == CastY_13);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_String ArgX1_10 = (MR_String) ArgX1_5;
          MR_String ArgY1_11 = (MR_String) ArgY1_6;

          succeeded = (strcmp(ArgX1_10, ArgY1_11) == 0);
        }
      }
    }
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____res_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_9 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_String Var_12 = (MR_String) Var_11;
        MR_String Var_13 = (MR_String) ArgY1_7;
        MR_Integer V_7_17;

{
#define MR_PROC_LABEL mercury__io____Compare____res_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_12 ;
	S2 =  Var_13 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_17  = Res;
}
        succeeded = (V_7_17 < (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (V_7_17 == (MR_Integer) 0);
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
mercury__io____Unify____res_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;
      MR_Integer CastX_11;
      MR_Integer CastY_12;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        CastX_11 = (MR_Integer) ArgX1_5;
        CastY_12 = (MR_Integer) ArgY1_6;
        succeeded = (CastX_11 == CastY_12);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_String ArgX1_9 = (MR_String) ArgX1_5;
          MR_String ArgY1_10 = (MR_String) ArgY1_6;

          succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____read_result_1_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_24 = (MR_Integer) HeadVar__3_3;

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
            MR_Integer Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
            MR_String Var_29 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_String ArgY1_19 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer ArgY2_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word Var_22;
                  MR_Integer V_7_34;

{
#define MR_PROC_LABEL mercury__io____Compare____read_result_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_29 ;
	S2 =  ArgY1_19 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_34  = Res;
}
                  succeeded = (V_7_34 < (MR_Integer) 0);
                  if (succeeded)
                    Var_22 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_34 == (MR_Integer) 0);
                    if (succeeded)
                      Var_22 = (MR_Integer) 0;
                    else
                      Var_22 = (MR_Integer) 2;
                  }
                  succeeded = (Var_22 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_22;
                  else
                  {
                    succeeded = (Var_28 < ArgY2_21);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_28 == ArgY2_21);
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
}

MR_bool MR_CALL 
mercury__io____Unify____read_result_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
            MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

            succeeded = (CastY_6 == CastX_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_4 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_String ArgY1_8;
            MR_Integer ArgX2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
              if (succeeded)
                succeeded = (ArgX2_9 == ArgY2_10);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____read_line_as_string_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

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
}

MR_bool MR_CALL 
mercury__io____Unify____read_line_as_string_result_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____posn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        Var_10 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          Var_10 = (MR_Integer) 0;
        else
          Var_10 = (MR_Integer) 2;
      }
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        succeeded = (ArgX2_6 < ArgY2_7);
        if (succeeded)
          Var_11 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_6 == ArgY2_7);
          if (succeeded)
            Var_11 = (MR_Integer) 0;
          else
            Var_11 = (MR_Integer) 2;
        }
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          succeeded = (ArgX3_8 < ArgY3_9);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX3_8 == ArgY3_9);
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

MR_bool MR_CALL 
mercury__io____Unify____posn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

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
}

void MR_CALL 
mercury__io____Compare____output_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = (MR_Box) HeadVar__2_2;
      MR_Box ArgY1_5 = (MR_Box) HeadVar__3_3;
      MR_Word Cast_HeadVar1_9 = (MR_Word) ArgX1_4;
      MR_Word Cast_HeadVar2_10 = (MR_Word) ArgY1_5;

      mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_9, Cast_HeadVar2_10);
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____output_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box ArgX1_3 = (MR_Box) HeadVar__1_1;
      MR_Box ArgY1_4 = (MR_Box) HeadVar__2_2;
      MR_Word Cast_HeadVar1_7 = (MR_Word) ArgX1_3;
      MR_Word Cast_HeadVar2_8 = (MR_Word) ArgY1_4;

      succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_7, Cast_HeadVar2_8);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____maybe_stream_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_24 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3)));
        MR_Word Var_12;

        succeeded = (Var_32 < ArgY1_5);
        if (succeeded)
          Var_12 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_32 == ArgY1_5);
          if (succeeded)
            Var_12 = (MR_Integer) 0;
          else
            Var_12 = (MR_Integer) 2;
        }
        succeeded = (Var_12 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_12;
        else
        {
          MR_Word Var_13;
          MR_Integer Var_33 = (MR_Integer) Var_31;
          MR_Integer Var_34 = (MR_Integer) ArgY2_7;

          succeeded = (Var_33 < Var_34);
          if (succeeded)
            Var_13 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_33 == Var_34);
            if (succeeded)
              Var_13 = (MR_Integer) 0;
            else
              Var_13 = (MR_Integer) 2;
          }
          succeeded = (Var_13 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_13;
          else
          {
            MR_Word Var_14;
            MR_Integer Var_35 = (MR_Integer) Var_30;
            MR_Integer Var_36 = (MR_Integer) ArgY3_9;

            succeeded = (Var_35 < Var_36);
            if (succeeded)
              Var_14 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_35 == Var_36);
              if (succeeded)
                Var_14 = (MR_Integer) 0;
              else
                Var_14 = (MR_Integer) 2;
            }
            succeeded = (Var_14 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_14;
            else
              mercury__io____Compare____stream_source_0_0(HeadVar__1_1, Var_29, ArgY4_11);
          }
        }
      }
    }
  }
}

void MR_CALL 
mercury__io____Compare____stream_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
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
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
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
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
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
                    case (MR_Integer) 2:
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
            MR_String Var_15 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer V_7_19;

{
#define MR_PROC_LABEL mercury__io____Compare____stream_source_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_15 ;
	S2 =  ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_19  = Res;
}
                  succeeded = (V_7_19 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_19 == (MR_Integer) 0);
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
}

MR_bool MR_CALL 
mercury__io____Unify____maybe_stream_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_12 == CastX_11);
    }
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8;
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
        ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
        succeeded = (ArgX1_3 == ArgY1_4);
        if (succeeded)
        {
          succeeded = (ArgX2_5 == ArgY2_6);
          if (succeeded)
          {
            succeeded = (ArgX3_7 == ArgY3_8);
            if (succeeded)
              succeeded = mercury__io____Unify____stream_source_0_0(ArgX4_9, ArgY4_10);
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__io____Unify____stream_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
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
                MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_10 == CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_String ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____maybe_partial_res_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Box Var_22 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box ArgY1_13 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Word ArgY2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_16;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_19, &Var_16, Var_22, ArgY1_13);
        succeeded = (Var_16 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_16;
        else
        {
          MR_String Var_24 = (MR_String) Var_21;
          MR_String Var_25 = (MR_String) ArgY2_15;
          MR_Integer V_7_29;

{
#define MR_PROC_LABEL mercury__io____Compare____maybe_partial_res_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_24 ;
	S2 =  Var_25 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_29  = Res;
}
          succeeded = (V_7_29 < (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (V_7_29 == (MR_Integer) 0);
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

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_19, HeadVar__1_1, Var_23, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____maybe_partial_res_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_8;
      MR_Integer CastX_14;
      MR_Integer CastY_15;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_5, ArgY1_6);
        if (succeeded)
        {
          CastX_14 = (MR_Integer) ArgX2_7;
          CastY_15 = (MR_Integer) ArgY2_8;
          succeeded = (CastX_14 == CastY_15);
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_String ArgX1_12 = (MR_String) ArgX2_7;
            MR_String ArgY1_13 = (MR_String) ArgY2_8;

            succeeded = (strcmp(ArgX1_12, ArgY1_13) == 0);
          }
        }
      }
    }
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
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
  {
    MR_bool succeeded;

    succeeded = mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_105_111_95_95_105_111_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_105_111_95_95_105_111_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

void MR_CALL 
mercury__io____Compare____input_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = (MR_Box) HeadVar__2_2;
      MR_Box ArgY1_5 = (MR_Box) HeadVar__3_3;
      MR_Word Cast_HeadVar1_9 = (MR_Word) ArgX1_4;
      MR_Word Cast_HeadVar2_10 = (MR_Word) ArgY1_5;

      mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_9, Cast_HeadVar2_10);
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____input_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box ArgX1_3 = (MR_Box) HeadVar__1_1;
      MR_Box ArgY1_4 = (MR_Box) HeadVar__2_2;
      MR_Word Cast_HeadVar1_7 = (MR_Word) ArgX1_3;
      MR_Word Cast_HeadVar2_8 = (MR_Word) ArgY1_4;

      succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_7, Cast_HeadVar2_8);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____file_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

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
}

MR_bool MR_CALL 
mercury__io____Unify____file_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____file_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_5 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_4 == CastY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      mercury__io__compare_file_id_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
  }
}

MR_bool MR_CALL 
mercury__io____Unify____file_id_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_4 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_5 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_4 == CastY_5);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word Var_3;

      mercury__io__compare_file_id_3_p_0(&Var_3, HeadVar__1_1, HeadVar__2_2);
      succeeded = (Var_3 == (MR_Integer) 0);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = (MR_String) HeadVar__2_2;
      MR_String ArgY1_5 = (MR_String) HeadVar__3_3;
      MR_Integer V_7_12;

{
#define MR_PROC_LABEL mercury__io____Compare____error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  ArgX1_4 ;
	S2 =  ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_12  = Res;
}
      succeeded = (V_7_12 < (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (V_7_12 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = (MR_String) HeadVar__1_1;
      MR_String ArgY1_4 = (MR_String) HeadVar__2_2;

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____chunk_inner_res0_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_11 = (MR_Integer) HeadVar__3_3;

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
            MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_String Var_14 = (MR_String) Var_13;
                  MR_String Var_15 = (MR_String) ArgY1_7;
                  MR_Integer V_7_19;

{
#define MR_PROC_LABEL mercury__io____Compare____chunk_inner_res0_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_14 ;
	S2 =  Var_15 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_19  = Res;
}
                  succeeded = (V_7_19 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_19 == (MR_Integer) 0);
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
}

MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res0_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

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
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_6;
            MR_Integer CastX_13;
            MR_Integer CastY_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              CastX_13 = (MR_Integer) ArgX1_5;
              CastY_14 = (MR_Integer) ArgY1_6;
              succeeded = (CastX_13 == CastY_14);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_String ArgX1_11 = (MR_String) ArgX1_5;
                MR_String ArgY1_12 = (MR_String) ArgY1_6;

                succeeded = (strcmp(ArgX1_11, ArgY1_12) == 0);
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____chunk_inner_res_1_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_29 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_30 = (MR_Integer) HeadVar__3_3;

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
            MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
            MR_Box Var_34 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_15 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                  MR_Word ArgY2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word Var_18;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_31, &Var_18, Var_34, ArgY1_15);
                  succeeded = (Var_18 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_18;
                  else
                  {
                    MR_String Var_37 = (MR_String) Var_33;
                    MR_String Var_38 = (MR_String) ArgY2_17;
                    MR_Integer V_7_42;

{
#define MR_PROC_LABEL mercury__io____Compare____chunk_inner_res_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_37 ;
	S2 =  Var_38 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_42  = Res;
}
                    succeeded = (V_7_42 < (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (V_7_42 == (MR_Integer) 0);
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
}

MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

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

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
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
            MR_Word ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_8;
            MR_Integer CastX_16;
            MR_Integer CastY_17;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_5, ArgY1_6);
              if (succeeded)
              {
                CastX_16 = (MR_Integer) ArgX2_7;
                CastY_17 = (MR_Integer) ArgY2_8;
                succeeded = (CastX_16 == CastY_17);
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_String ArgX1_14 = (MR_String) ArgX2_7;
                  MR_String ArgY1_15 = (MR_String) ArgY2_8;

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

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
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
}

void MR_CALL 
mercury__io____Compare____buffer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = (MR_Word) HeadVar__3_3;

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__io____Unify____buffer_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = (MR_Word) HeadVar__2_2;

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____binary_output_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = (MR_Box) HeadVar__2_2;
      MR_Box ArgY1_5 = (MR_Box) HeadVar__3_3;
      MR_Word Cast_HeadVar1_9 = (MR_Word) ArgX1_4;
      MR_Word Cast_HeadVar2_10 = (MR_Word) ArgY1_5;

      mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_9, Cast_HeadVar2_10);
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____binary_output_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box ArgX1_3 = (MR_Box) HeadVar__1_1;
      MR_Box ArgY1_4 = (MR_Box) HeadVar__2_2;
      MR_Word Cast_HeadVar1_7 = (MR_Word) ArgX1_3;
      MR_Word Cast_HeadVar2_8 = (MR_Word) ArgY1_4;

      succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_7, Cast_HeadVar2_8);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____binary_input_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = (MR_Box) HeadVar__2_2;
      MR_Box ArgY1_5 = (MR_Box) HeadVar__3_3;
      MR_Word Cast_HeadVar1_9 = (MR_Word) ArgX1_4;
      MR_Word Cast_HeadVar2_10 = (MR_Word) ArgY1_5;

      mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_9, Cast_HeadVar2_10);
    }
  }
}

MR_bool MR_CALL 
mercury__io____Unify____binary_input_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box ArgX1_3 = (MR_Box) HeadVar__1_1;
      MR_Box ArgY1_4 = (MR_Box) HeadVar__2_2;
      MR_Word Cast_HeadVar1_7 = (MR_Word) ArgX1_3;
      MR_Word Cast_HeadVar2_8 = (MR_Word) ArgY1_4;

      succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_7, Cast_HeadVar2_8);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__io____Compare____access_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

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
}

MR_bool MR_CALL 
mercury__io____Unify____access_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mercury__io__read_symlink_2_5_p_0(
  MR_String FileName_1,
  MR_String * TargetFileName_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__read_symlink_2_5_p_0

	MR_String FileName;
	MR_String TargetFileName;
	MR_Integer Error;

	FileName =  FileName_1 ;
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
            num_chars = readlink(FileName, buffer2, buffer_size2);
        } while (num_chars == buffer_size2);

        /* Invariant: num_chars < buffer_size2 */

        if (num_chars == -1) {
            TargetFileName = MR_make_string_const("");
            Error = errno;
        } else {
            buffer2[num_chars] = '\0';
            MR_make_aligned_string_copy_msg(TargetFileName, buffer2,
                MR_ALLOC_ID);
            Error = 0;
        }
        MR_free(buffer2);
    } else if (num_chars == -1) {
        TargetFileName = MR_make_string_const("");
        Error = errno;
    } else {
        buffer[num_chars] = '\0';
        MR_make_aligned_string_copy_msg(TargetFileName, buffer, MR_ALLOC_ID);
        Error = 0;
    }
#else /* !MR_HAVE_READLINK */
    TargetFileName = MR_make_string_const("");
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	 *TargetFileName_2  = TargetFileName;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

static void MR_CALL 
mercury__io__make_symlink_2_5_p_0(
  MR_String FileName_1,
  MR_String LinkFileName_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__make_symlink_2_5_p_0

	MR_String FileName;
	MR_String LinkFileName;
	MR_Integer Error;

	FileName =  FileName_1 ;
	LinkFileName =  LinkFileName_2 ;
		{

#ifdef MR_HAVE_SYMLINK
    if (symlink(FileName, LinkFileName) == 0) {
        Error = 0;
    } else {
        Error = errno;
    }
#else
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__rename_file_2_5_p_0(
  MR_String OldFileName_1,
  MR_String NewFileName_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__rename_file_2_5_p_0

	MR_String OldFileName;
	MR_String NewFileName;
	MR_Integer Error;

	OldFileName =  OldFileName_1 ;
	NewFileName =  NewFileName_2 ;
		{

    int rc;
#ifdef MR_WIN32
    rc = _wrename(ML_utf8_to_wide(OldFileName),
        ML_utf8_to_wide(NewFileName));
#else
    rc = rename(OldFileName, NewFileName);
#endif
    if (rc == 0) {
        Error = 0;
    } else {
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

static void MR_CALL 
mercury__io__remove_directory_entry_8_p_0(
  MR_String DirName_9,
  MR_String FileName_10,
  MR_Word _FileType_11,
  MR_Word * Continue_12,
  MR_Word HeadVar__5_13,
  MR_Word * Res_14)
{
  mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_100_105_114_101_99_116_111_114_121_95_101_110_116_114_121_95_95_91_51_44_32_53_93_95_48_8_p_0(DirName_9, FileName_10, Continue_12, Res_14);
}

static void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_100_105_114_101_99_116_111_114_121_95_101_110_116_114_121_95_95_91_51_44_32_53_93_95_48_8_p_0(
  MR_String DirName_9,
  MR_String FileName_10,
  MR_Word * Continue_12,
  MR_Word * Res_14)
{
  {
    MR_Word Res0_16;
    MR_String Var_20;

    Var_20 = mercury__dir__f_slash_2_f_0(DirName_9, FileName_10);
    mercury__io__remove_file_recursively_4_p_0(Var_20, &Res0_16);
    if ((Res0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Res_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Continue_12 = (MR_Integer) 1;
    }
    else
    {
      *Res_14 = Res0_16;
      *Continue_12 = (MR_Integer) 0;
    }
  }
}

void MR_CALL 
mercury__io__remove_file_2_4_p_0(
  MR_String FileName_1,
  MR_Box * Error_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__remove_file_2_4_p_0

	MR_String FileName;
	MR_Integer Error;

	FileName =  FileName_1 ;
		{

    int rc;
#ifdef MR_WIN32
    rc = _wremove(ML_utf8_to_wide(FileName));
#else
    rc = remove(FileName);
#endif
    if (rc == 0) {
        Error = 0;
    } else {
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_2 );
}
  }
}

void MR_CALL 
mercury__io__do_make_temp_directory_8_p_0(
  MR_String Dir_1,
  MR_String Prefix_2,
  MR_String Suffix_3,
  MR_String Sep_4,
  MR_String * DirName_5,
  MR_Box * Error_6)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_make_temp_directory_8_p_0

	MR_String Dir;
	MR_String Prefix;
	MR_String Suffix;
	MR_String Sep;
	MR_String DirName;
	MR_Integer Error;

	Dir =  Dir_1 ;
	Prefix =  Prefix_2 ;
	Suffix =  Suffix_3 ;
	Sep =  Sep_4 ;
		{

#ifdef MR_HAVE_MKDTEMP
    int err;

    /*
    ** We cannot append Suffix because the last six chars in the argument
    ** to mkdtemp() must be XXXXXX.
    */
    DirName = MR_make_string(MR_ALLOC_ID, "%s%s%.5sXXXXXX",
        Dir, Sep, Prefix);
    DirName = mkdtemp(DirName);
    if (DirName == NULL) {
        Error = errno;
    } else {
        Error = 0;
    }
#else
    Error = ENOSYS;
    DirName = MR_make_string_const("");
#endif /* HAVE_MKDTEMP */


		;}
#undef MR_PROC_LABEL
	 *DirName_5  = DirName;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_6 );
}
  }
}

void MR_CALL 
mercury__io__do_make_temp_8_p_0(
  MR_String Dir_1,
  MR_String Prefix_2,
  MR_String Suffix_3,
  MR_String Sep_4,
  MR_String * FileName_5,
  MR_Box * Error_6)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_make_temp_8_p_0

	MR_String Dir;
	MR_String Prefix;
	MR_String Suffix;
	MR_String Sep;
	MR_String FileName;
	MR_Integer Error;

	Dir =  Dir_1 ;
	Prefix =  Prefix_2 ;
	Suffix =  Suffix_3 ;
	Sep =  Sep_4 ;
		{

#ifdef MR_HAVE_MKSTEMP
    int err, fd;

    /*
    ** We cannot append Suffix because the last six chars in the argument
    ** to mkstemp() must be XXXXXX.
    */
    FileName = MR_make_string(MR_ALLOC_ID, "%s%s%.5sXXXXXX",
        Dir, Sep, Prefix);
    fd = mkstemp(FileName);
    if (fd == -1) {
        Error = errno;
    } else {
        do {
            err = close(fd);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == 0) {
            Error = 0;
        } else {
            Error = errno;
        }
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
        Error = errno;
    }  else {
        do {
            err = close(fd);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == 0) {
            Error = 0;
        } else {
            Error = errno;
        }
    }
#endif


		;}
#undef MR_PROC_LABEL
	 *FileName_5  = FileName;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_6 );
}
  }
}

static void MR_CALL 
mercury__io__decode_system_command_exit_code_5_p_0(
  MR_Integer Status0_1,
  MR_Word * Exited_2,
  MR_Integer * Status_3,
  MR_Word * Signalled_4,
  MR_Integer * Signal_5)
{
  {
{
#define MR_PROC_LABEL mercury__io__decode_system_command_exit_code_5_p_0

	MR_Integer Status0;
	MR_Word Exited;
	MR_Integer Status;
	MR_Word Signalled;
	MR_Integer Signal;

	Status0 =  Status0_1 ;
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
	 *Exited_2  = Exited;
	 *Status_3  = Status;
	 *Signalled_4  = Signalled;
	 *Signal_5  = Signal;
}
  }
}

void MR_CALL 
mercury__io__close_stream_4_p_0(
  MR_Box Stream_1,
  MR_Box * Error_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__close_stream_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_2 );
}
  }
}

static void MR_CALL 
mercury__io__do_open_text_7_p_0(
  MR_String FileName_1,
  MR_String Mode_2,
  MR_Integer * StreamId_3,
  MR_Box * Stream_4,
  MR_Box * Error_5)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_open_text_7_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName =  FileName_1 ;
	Mode =  Mode_2 ;
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
	 *StreamId_3  = StreamId;
	 *Stream_4  = (MR_Box) Stream;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_5 );
}
  }
}

static void MR_CALL 
mercury__io__do_open_binary_7_p_0(
  MR_String FileName_1,
  MR_String Mode_2,
  MR_Integer * StreamId_3,
  MR_Box * Stream_4,
  MR_Box * Error_5)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_open_binary_7_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName =  FileName_1 ;
	Mode =  Mode_2 ;
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
	 *StreamId_3  = StreamId;
	 *Stream_4  = (MR_Box) Stream;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_5 );
}
  }
}

void MR_CALL 
mercury__io__restore_output_stream_5_p_1(
  MR_Word _DummyPred_6,
  MR_Word Stream_7,
  MR_Word * HeadVar__3_3)
{
  mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_111_114_101_95_111_117_116_112_117_116_95_115_116_114_101_97_109_95_95_91_49_93_95_49_5_p_1(Stream_7, HeadVar__3_3);
}

void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_111_114_101_95_111_117_116_112_117_116_95_115_116_114_101_97_109_95_95_91_49_93_95_49_5_p_1(
  MR_Word Stream_7,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Box NewStream_15;
    MR_Box OutStream_16;

    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    NewStream_15 = (MR_Box) Stream_7;
{
#define MR_PROC_LABEL mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_111_114_101_95_111_117_116_112_117_116_95_115_116_114_101_97_109_95_95_91_49_93_95_49_5_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_15 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_16  = (MR_Box) OutStream;
}
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
  {
    MR_Box NewStream_15;
    MR_Box OutStream_16;

    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    NewStream_15 = (MR_Box) Stream_7;
{
#define MR_PROC_LABEL mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_111_114_101_95_111_117_116_112_117_116_95_115_116_114_101_97_109_95_95_91_49_93_95_48_5_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_15 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_16  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__restore_input_stream_5_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word _DummyPred_6,
  MR_Word Stream_7,
  MR_Word * HeadVar__3_3)
{
  mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_111_114_101_95_105_110_112_117_116_95_115_116_114_101_97_109_95_95_91_49_44_32_50_93_95_49_5_p_1(Stream_7, HeadVar__3_3);
}

void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_111_114_101_95_105_110_112_117_116_95_115_116_114_101_97_109_95_95_91_49_44_32_50_93_95_49_5_p_1(
  MR_Word Stream_7,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Box NewStream_16;
    MR_Box OutStream_17;

    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    NewStream_16 = (MR_Box) Stream_7;
{
#define MR_PROC_LABEL mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_111_114_101_95_105_110_112_117_116_95_115_116_114_101_97_109_95_95_91_49_44_32_50_93_95_49_5_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_16 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_17  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__restore_input_stream_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word _DummyPred_6,
  MR_Word Stream_7,
  MR_Word * HeadVar__3_3)
{
  mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_111_114_101_95_105_110_112_117_116_95_115_116_114_101_97_109_95_95_91_49_44_32_50_93_95_48_5_p_0(Stream_7, HeadVar__3_3);
}

void MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_111_114_101_95_105_110_112_117_116_95_115_116_114_101_97_109_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Box NewStream_16;
    MR_Box OutStream_17;

    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    NewStream_16 = (MR_Box) Stream_7;
{
#define MR_PROC_LABEL mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_111_114_101_95_105_110_112_117_116_95_115_116_114_101_97_109_95_95_91_49_44_32_50_93_95_48_5_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_16 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_17  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__call_pred_no_result_4_p_1(
  MR_Word Pred_5,
  MR_Tuple * HeadVar__2_2)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_8;

    *HeadVar__2_2 = (MR_Integer) 0;
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_5, (MR_Integer) 1)));
    func_0(((MR_Box) Pred_5), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_8);
  }
}

void MR_CALL 
mercury__io__call_pred_no_result_4_p_0(
  MR_Word Pred_5,
  MR_Tuple * HeadVar__2_2)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_8;

    *HeadVar__2_2 = (MR_Integer) 0;
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_5, (MR_Integer) 1)));
    func_0(((MR_Box) Pred_5), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_8);
  }
}

static void MR_CALL 
mercury__io__with_output_stream_4_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    mercury__io__restore_output_stream_5_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &conv1_HeadVar__3_3);
    *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__io__with_output_stream_4_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Tuple conv0_HeadVar__2_2;

    mercury__io__call_pred_no_result_4_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv0_HeadVar__2_2);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
mercury__io__with_output_stream_4_p_1(
  MR_Word Stream_5,
  MR_Word Pred_6)
{
  {
    MR_Word TypeInfo_for_T_42;
    MR_Word OrigStream_8;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Box NewStream_26 = (MR_Box) Stream_5;
    MR_Box OutStream_27;
    MR_Tuple _Result_9;
    MR_Word _CleanupRes_10;
    MR_Box conv2__Result_9;

{
#define MR_PROC_LABEL mercury__io__with_output_stream_4_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_26 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_27  = (MR_Box) OutStream;
}
    OrigStream_8 = (MR_Word) OutStream_27;
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mercury__io__with_output_stream_4_p_1_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Pred_6));
    }
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&mercury__io_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (mercury__io__with_output_stream_4_p_1_2));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Pred_6));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (OrigStream_8));
    }
    TypeInfo_for_T_42 = (MR_Word) &mercury__io_scalar_common_4[0];
    mercury__exception__finally_2_6_p_1(TypeInfo_for_T_42, Var_14, Var_15, &conv2__Result_9, &_CleanupRes_10);
    _Result_9 = ((MR_Tuple) conv2__Result_9);
  }
}

static void MR_CALL 
mercury__io__with_output_stream_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    mercury__io__restore_output_stream_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &conv1_HeadVar__3_3);
    *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__io__with_output_stream_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Tuple conv0_HeadVar__2_2;

    mercury__io__call_pred_no_result_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv0_HeadVar__2_2);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
mercury__io__with_output_stream_4_p_0(
  MR_Word Stream_5,
  MR_Word Pred_6)
{
  {
    MR_Word TypeInfo_for_T_42;
    MR_Word OrigStream_8;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Box NewStream_26 = (MR_Box) Stream_5;
    MR_Box OutStream_27;
    MR_Tuple _Result_9;
    MR_Word _CleanupRes_10;
    MR_Box conv2__Result_9;

{
#define MR_PROC_LABEL mercury__io__with_output_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_26 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_27  = (MR_Box) OutStream;
}
    OrigStream_8 = (MR_Word) OutStream_27;
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mercury__io__with_output_stream_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Pred_6));
    }
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&mercury__io_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (mercury__io__with_output_stream_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Pred_6));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (OrigStream_8));
    }
    TypeInfo_for_T_42 = (MR_Word) &mercury__io_scalar_common_4[0];
    mercury__exception__finally_2_6_p_0(TypeInfo_for_T_42, Var_14, Var_15, &conv2__Result_9, &_CleanupRes_10);
    _Result_9 = ((MR_Tuple) conv2__Result_9);
  }
}

static void MR_CALL 
mercury__io__with_input_stream_5_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    mercury__io__restore_input_stream_5_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv0_HeadVar__3_3);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
mercury__io__with_input_stream_5_p_1(
  MR_Word TypeInfo_for_T_17,
  MR_Word Stream_6,
  MR_Word Pred_7,
  MR_Box * Result_8)
{
  {
    MR_Word OrigStream_10;
    MR_Word Var_15;
    MR_Box NewStream_23 = (MR_Box) Stream_6;
    MR_Box OutStream_24;
    MR_Word _CleanupRes_11;

{
#define MR_PROC_LABEL mercury__io__with_input_stream_5_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_23 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_24  = (MR_Box) OutStream;
}
    OrigStream_10 = (MR_Word) OutStream_24;
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&mercury__io_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (mercury__io__with_input_stream_5_p_1_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (TypeInfo_for_T_17));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Pred_7));
      MR_hl_field(MR_mktag(0), Var_15, 5) = ((MR_Box) (OrigStream_10));
    }
    mercury__exception__finally_2_6_p_1(TypeInfo_for_T_17, Pred_7, Var_15, Result_8, &_CleanupRes_11);
  }
}

static void MR_CALL 
mercury__io__with_input_stream_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    mercury__io__restore_input_stream_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv0_HeadVar__3_3);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
mercury__io__with_input_stream_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Stream_6,
  MR_Word Pred_7,
  MR_Box * Result_8)
{
  {
    MR_Word OrigStream_10;
    MR_Word Var_15;
    MR_Box NewStream_23 = (MR_Box) Stream_6;
    MR_Box OutStream_24;
    MR_Word _CleanupRes_11;

{
#define MR_PROC_LABEL mercury__io__with_input_stream_5_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_23 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_24  = (MR_Box) OutStream;
}
    OrigStream_10 = (MR_Word) OutStream_24;
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&mercury__io_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (mercury__io__with_input_stream_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (TypeInfo_for_T_17));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Pred_7));
      MR_hl_field(MR_mktag(0), Var_15, 5) = ((MR_Box) (OrigStream_10));
    }
    mercury__exception__finally_2_6_p_0(TypeInfo_for_T_17, Pred_7, Var_15, Result_8, &_CleanupRes_11);
  }
}

void MR_CALL 
mercury__io__set_binary_output_stream_2_4_p_0(
  MR_Box NewStream_1,
  MR_Box * OutStream_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__set_binary_output_stream_2_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_1 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	 *OutStream_2  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__set_binary_input_stream_2_4_p_0(
  MR_Box NewStream_1,
  MR_Box * OutStream_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__set_binary_input_stream_2_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_1 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	 *OutStream_2  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__set_output_stream_2_4_p_0(
  MR_Box NewStream_1,
  MR_Box * OutStream_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__set_output_stream_2_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_1 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 *OutStream_2  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__set_input_stream_2_4_p_0(
  MR_Box NewStream_1,
  MR_Box * OutStream_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__set_input_stream_2_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_1 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 *OutStream_2  = (MR_Box) OutStream;
}
  }
}

void MR_CALL 
mercury__io__set_output_line_number_2_4_p_0(
  MR_Box Stream_1,
  MR_Integer LineNum_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__set_output_line_number_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_1 ;
	LineNum =  LineNum_2 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__get_output_line_number_2_4_p_0(
  MR_Box Stream_1,
  MR_Integer * LineNum_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__get_output_line_number_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *LineNum_2  = LineNum;
}
  }
}

void MR_CALL 
mercury__io__set_line_number_2_4_p_0(
  MR_Box Stream_1,
  MR_Integer LineNum_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__set_line_number_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_1 ;
	LineNum =  LineNum_2 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__get_line_number_2_4_p_0(
  MR_Box Stream_1,
  MR_Integer * LineNum_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__get_line_number_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *LineNum_2  = LineNum;
}
  }
}

void MR_CALL 
mercury__io__binary_output_stream_2_3_p_0(
  MR_Box * Stream_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__binary_output_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 *Stream_1  = (MR_Box) Stream;
}
  }
}

void MR_CALL 
mercury__io__binary_input_stream_2_3_p_0(
  MR_Box * Stream_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 *Stream_1  = (MR_Box) Stream;
}
  }
}

void MR_CALL 
mercury__io__output_stream_2_3_p_0(
  MR_Box * Stream_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__output_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 *Stream_1  = (MR_Box) Stream;
}
  }
}

void MR_CALL 
mercury__io__input_stream_2_3_p_0(
  MR_Box * Stream_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__input_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 *Stream_1  = (MR_Box) Stream;
}
  }
}

void MR_CALL 
mercury__io__stdout_binary_stream_2_3_p_0(
  MR_Box * Stream_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__stdout_binary_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout_binary;


		;}
#undef MR_PROC_LABEL
	 *Stream_1  = (MR_Box) Stream;
}
  }
}

void MR_CALL 
mercury__io__stdin_binary_stream_2_3_p_0(
  MR_Box * Stream_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__stdin_binary_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin_binary;


		;}
#undef MR_PROC_LABEL
	 *Stream_1  = (MR_Box) Stream;
}
  }
}

void MR_CALL 
mercury__io__stderr_stream_2_3_p_0(
  MR_Box * Stream_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__stderr_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	 *Stream_1  = (MR_Box) Stream;
}
  }
}

MR_Box MR_CALL 
mercury__io__stderr_stream_2_0_f_0(void)
{
  {
    MR_Box Stream_1;

{
#define MR_PROC_LABEL mercury__io__stderr_stream_2_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	 Stream_1  = (MR_Box) Stream;
}
    return Stream_1;
  }
}

void MR_CALL 
mercury__io__stdout_stream_2_3_p_0(
  MR_Box * Stream_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__stdout_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	 *Stream_1  = (MR_Box) Stream;
}
  }
}

MR_Box MR_CALL 
mercury__io__stdout_stream_2_0_f_0(void)
{
  {
    MR_Box Stream_1;

{
#define MR_PROC_LABEL mercury__io__stdout_stream_2_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	 Stream_1  = (MR_Box) Stream;
}
    return Stream_1;
  }
}

void MR_CALL 
mercury__io__stdin_stream_2_3_p_0(
  MR_Box * Stream_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__stdin_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	 *Stream_1  = (MR_Box) Stream;
}
  }
}

MR_Box MR_CALL 
mercury__io__stdin_stream_2_0_f_0(void)
{
  {
    MR_Box Stream_1;

{
#define MR_PROC_LABEL mercury__io__stdin_stream_2_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	 Stream_1  = (MR_Box) Stream;
}
    return Stream_1;
  }
}

void MR_CALL 
mercury__io__flush_binary_output_2_4_p_0(
  MR_Box Stream_1,
  MR_Box * Error_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__flush_binary_output_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_2 );
}
  }
}

void MR_CALL 
mercury__io__flush_output_2_4_p_0(
  MR_Box Stream_1,
  MR_Box * Error_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__flush_output_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_2 );
}
  }
}

static void MR_CALL 
mercury__io__do_write_bitmap_7_p_0(
  MR_Box Stream_1,
  MR_Box Bitmap_2,
  MR_Integer Start_3,
  MR_Integer Length_4,
  MR_Box * Error_5)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_bitmap_7_p_0

	MercuryFilePtr Stream;
	MR_BitmapPtr Bitmap;
	MR_Integer Start;
	MR_Integer Length;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Bitmap = (MR_BitmapPtr) Bitmap_2 ;
	Start =  Start_3 ;
	Length =  Length_4 ;
		{

    MR_Integer bytes_written =
        (MR_Integer)MR_WRITE(*Stream, Bitmap->elements + Start, Length);
    if (bytes_written != Length) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_5 );
}
  }
}

void MR_CALL 
mercury__io__do_write_binary_uint32_be_5_p_0(
  MR_Box Stream_1,
  uint32_t U32_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_binary_uint32_be_5_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	U32 =  U32_2 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U32 = MR_uint32_reverse_bytes(U32);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_binary_uint32_le_5_p_0(
  MR_Box Stream_1,
  uint32_t U32_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_binary_uint32_le_5_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	U32 =  U32_2 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U32 = MR_uint32_reverse_bytes(U32);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_binary_uint32_5_p_0(
  MR_Box Stream_1,
  uint32_t U32_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_binary_uint32_5_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	U32 =  U32_2 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_binary_uint16_be_5_p_0(
  MR_Box Stream_1,
  uint16_t U16_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_binary_uint16_be_5_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	U16 =  U16_2 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U16 = MR_uint16_reverse_bytes(U16);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_binary_uint16_le_5_p_0(
  MR_Box Stream_1,
  uint16_t U16_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_binary_uint16_le_5_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	U16 =  U16_2 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U16 = MR_uint16_reverse_bytes(U16);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_binary_uint16_5_p_0(
  MR_Box Stream_1,
  uint16_t U16_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_binary_uint16_5_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	U16 =  U16_2 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_byte_5_p_0(
  MR_Box Stream_1,
  MR_Integer Byte_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_byte_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Byte =  Byte_2 ;
		{

    /* call putc with a strictly non-negative byte-sized integer */
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_float_5_p_0(
  MR_Box Stream_1,
  MR_Float Val_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_float_5_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Val =  Val_2 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_uint32_5_p_0(
  MR_Box Stream_1,
  uint32_t Val_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_uint32_5_p_0

	MercuryFilePtr Stream;
	uint32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Val =  Val_2 ;
		{

    if (ML_fprintf(Stream, "%" PRIu32, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_uint16_5_p_0(
  MR_Box Stream_1,
  uint16_t Val_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_uint16_5_p_0

	MercuryFilePtr Stream;
	uint16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Val =  Val_2 ;
		{

    if (ML_fprintf(Stream, "%" PRIu16, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_uint8_5_p_0(
  MR_Box Stream_1,
  uint8_t Val_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_uint8_5_p_0

	MercuryFilePtr Stream;
	uint8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Val =  Val_2 ;
		{

    if (ML_fprintf(Stream, "%" PRIu8, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_uint_5_p_0(
  MR_Box Stream_1,
  MR_Unsigned Val_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_uint_5_p_0

	MercuryFilePtr Stream;
	MR_Unsigned Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Val =  Val_2 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "u", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_int32_5_p_0(
  MR_Box Stream_1,
  int32_t Val_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_int32_5_p_0

	MercuryFilePtr Stream;
	int32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Val =  Val_2 ;
		{

    if (ML_fprintf(Stream, "%" PRId32, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_int16_5_p_0(
  MR_Box Stream_1,
  int16_t Val_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_int16_5_p_0

	MercuryFilePtr Stream;
	int16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Val =  Val_2 ;
		{

    if (ML_fprintf(Stream, "%" PRId16, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_int8_5_p_0(
  MR_Box Stream_1,
  int8_t Val_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_int8_5_p_0

	MercuryFilePtr Stream;
	int8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Val =  Val_2 ;
		{

    if (ML_fprintf(Stream, "%" PRId8, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_int_5_p_0(
  MR_Box Stream_1,
  MR_Integer Val_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_int_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Val =  Val_2 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_char_5_p_0(
  MR_Box Stream_1,
  MR_Char Character_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_char_5_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Character =  Character_2 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__do_write_string_5_p_0(
  MR_Box Stream_1,
  MR_String Message_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_write_string_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Message =  Message_2 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__binary_stream_offset_2_5_p_0(
  MR_Box Stream_1,
  MR_Integer * Offset_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__binary_stream_offset_2_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Offset;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

    /* XXX should check if the stream is tellable */
    if (MR_IS_FILE_STREAM(*Stream)) {
        Offset = ftell(MR_file(*Stream));
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
	 *Offset_2  = Offset;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__seek_binary_2_6_p_0(
  MR_Box Stream_1,
  MR_Integer Flag_2,
  MR_Integer Off_3,
  MR_Box * Error_4)
{
  {
{
#define MR_PROC_LABEL mercury__io__seek_binary_2_6_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	MR_Integer Off;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Flag =  Flag_2 ;
	Off =  Off_3 ;
		{

    static const int seek_flags[] = { SEEK_SET, SEEK_CUR, SEEK_END };

    /* XXX check if the stream is seekable */
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (fseek(MR_file(*Stream), Off, seek_flags[Flag]) < 0) {
            Error = errno;
        } else {
            Error = 0;
        }
    } else {
        Error = EINVAL;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_4 );
}
  }
}

void MR_CALL 
mercury__io__whence_to_int_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
  }
}

void MR_CALL 
mercury__io__putback_byte_2_5_p_0(
  MR_Box Stream_1,
  MR_Integer Character_2,
  MR_Word * Ok_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__putback_byte_2_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Character;
	MR_Word Ok;

	Stream = (MercuryFilePtr) Stream_1 ;
	Character =  Character_2 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, Character) == EOF) {
        Ok = MR_FALSE;
    } else {
        Ok = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	 *Ok_3  = Ok;
}
  }
}

void MR_CALL 
mercury__io__read_byte_val_2_6_p_0(
  MR_Box Stream_1,
  MR_Word * Result_2,
  MR_Integer * ByteVal_3,
  MR_Box * Error_4)
{
  {
{
#define MR_PROC_LABEL mercury__io__read_byte_val_2_6_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 *Result_2  = Result;
	 *ByteVal_3  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_4 );
}
  }
}

void MR_CALL 
mercury__io__throw_on_close_error_3_p_0(
  MR_Box Error_4)
{
  {
    mercury__io__throw_on_error_4_p_0(Error_4, (MR_String) "error closing file: ");
  }
}

void MR_CALL 
mercury__io__throw_on_output_error_3_p_0(
  MR_Box Error_4)
{
  {
    mercury__io__throw_on_error_4_p_0(Error_4, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__make_win32_err_msg_3_p_0(
  MR_Box Error_1,
  MR_String Msg0_2,
  MR_String * Msg_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__make_win32_err_msg_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_1 , Error);
	Msg0 =  Msg0_2 ;
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
}

MR_bool MR_CALL 
mercury__io__is_success_1_p_0(
  MR_Box Error_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__is_success_1_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_1 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static MR_Box MR_CALL 
mercury__io__no_error_0_f_0(void)
{
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
}

void MR_CALL 
mercury__io__unsafe_set_globals_3_p_0(
  MR_Word Globals_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__unsafe_set_globals_3_p_0

	MR_Word Globals;

	Globals =  Globals_1 ;
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
  MR_Word * Globals_1)
{
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
}

static void MR_CALL 
mercury__io__unlock_globals_0_p_0(void)
{
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
}

void MR_CALL 
mercury__io__unlock_globals_2_p_0(void)
{
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
}

void MR_CALL 
mercury__io__lock_globals_2_p_0(void)
{
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
}

static void MR_CALL 
mercury__io__may_delete_stream_info_3_p_0(
  MR_Integer * MayDelete_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__may_delete_stream_info_3_p_0

	MR_Integer MayDelete;

		{

    MayDelete = !MR_debug_ever_enabled;


		;}
#undef MR_PROC_LABEL
	 *MayDelete_1  = MayDelete;
}
  }
}

void MR_CALL 
mercury__io__unlock_stream_db_2_p_0(void)
{
  {
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
  MR_Word StreamDb_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__set_stream_db_3_p_0

	MR_Word StreamDb;

	StreamDb =  StreamDb_1 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
  }
}

MR_String MR_CALL 
mercury__io__source_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_String) "<standard input>";
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "<standard output>";
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_String) "<standard error>";
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        break;
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__io__read_binary_from_current_input_stream_3_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word * Result_4)
{
  {
    MR_bool succeeded;
    MR_Word ReadResult_6;

    mercury__io__read_3_p_0(TypeInfo_for_T_22, &ReadResult_6);
    switch (MR_tag((MR_Word) ReadResult_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box T_7 = (MR_hl_field(MR_mktag(1), ReadResult_6, (MR_Integer) 0));
          MR_Word NewLineRes_8;
          MR_Word Result0_40;
          MR_Char Char_41;
          MR_Box Error_42;
          MR_Box Stream_52;

{
#define MR_PROC_LABEL mercury__io__read_binary_from_current_input_stream_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_52  = (MR_Box) Stream;
}
          mercury__io__read_char_code_2_6_p_0(Stream_52, &Result0_40, &Char_41, &Error_42);
          switch (Result0_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              NewLineRes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 2:
              {
                MR_String Msg_43;
                MR_Word Var_46;

{
#define MR_PROC_LABEL mercury__io__read_binary_from_current_input_stream_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_42 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_43  = Msg;
}
                Var_46 = (MR_Word) Msg_43;
                {
                  NewLineRes_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), NewLineRes_8, 0) = ((MR_Box) (Var_46));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                NewLineRes_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NewLineRes_8, 0) = ((MR_Box) (MR_Word) (Char_41));
              }
              break;
          }
          switch (MR_tag((MR_Word) NewLineRes_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_18 = (MR_Word) ((MR_Box) ((MR_String) "io.read_binary: missing newline"));

                *Result_4 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__io_scalar_common_5[7]);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Char NewLineChar_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), NewLineRes_8, (MR_Integer) 0)));

                succeeded = (NewLineChar_10 == (MR_Char) 10);
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *Result_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = T_7;
                  }
                else
                {
                  MR_Word Var_20 = (MR_Word) ((MR_Box) ((MR_String) "io.read_binary: missing newline"));

                  *Result_4 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__io_scalar_common_5[7]);
                }
              }
              break;
            case (MR_Integer) 2:
              *Result_4 = NewLineRes_8;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ErrorMsg_11 = ((MR_String) (MR_hl_field(MR_mktag(2), ReadResult_6, (MR_Integer) 0)));
          MR_Word Var_16 = (MR_Word) ErrorMsg_11;
          MR_Integer _Line_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ReadResult_6, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_4 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_16));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__io__print_to_stream_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box Stream_5,
  MR_Box Term_6)
{
  {
    MR_Word TypeClassInfo_for_writer_21 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word Var_10 = (MR_Word) Stream_5;
    MR_Box conv0_STATE_VARIABLE_IO_9;

    mercury__stream__string_writer__print_5_p_1(TypeInfo_for_T_13, TypeClassInfo_for_writer_21, TypeClassInfo_for_writer_22, ((MR_Box) (Var_10)), (MR_Integer) 1, Term_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

MR_Integer MR_CALL 
mercury__io__chunk_size_0_f_0(void)
{
  {
    return (MR_Integer) 1000;
  }
}

void MR_CALL 
mercury__io__should_reduce_stack_usage_1_p_0(
  MR_Word * ShouldReduce_1)
{
  {
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
	 *ShouldReduce_1  = ShouldReduce;
}
  }
}

static void MR_CALL 
mercury__io__read_into_buffer_9_p_0(
  MR_Box Stream_1,
  MR_Box Buffer0_2,
  MR_Box * Buffer_3,
  MR_Integer Pos0_4,
  MR_Integer * Pos_5,
  MR_Integer Size_6,
  MR_Box * Error_7)
{
  {
{
#define MR_PROC_LABEL mercury__io__read_into_buffer_9_p_0

	MercuryFilePtr Stream;
	char * Buffer0;
	char * Buffer;
	MR_Integer Pos0;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Buffer0 = (char *) Buffer0_2 ;
	Pos0 =  Pos0_4 ;
	Size =  Size_6 ;
		{

    size_t bytes_to_read;
    size_t bytes_read;

    MR_CHECK_EXPR_TYPE(Buffer0, char *);
    MR_CHECK_EXPR_TYPE(Buffer, char *);

    bytes_to_read = Size - Pos0;
    bytes_read = MR_READ(*Stream, Buffer0 + Pos0, bytes_to_read);

    Buffer = Buffer0;
    Pos = Pos0 + bytes_read;

    if (bytes_read < bytes_to_read && MR_FERROR(*Stream)) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 *Buffer_3  = (MR_Box) Buffer;
	 *Pos_5  = Pos;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_7 );
}
  }
}

static MR_bool MR_CALL 
mercury__io__buffer_to_string_3_p_0(
  MR_Box Buffer_1,
  MR_Integer Len_2,
  MR_String * Str_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__buffer_to_string_3_p_0

	char * Buffer;
	MR_Integer Len;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Buffer = (char *) Buffer_1 ;
	Len =  Len_2 ;
		{
{
    Str = Buffer;
    Str[Len] = '\0';

    /* Check that the string doesn't contain null characters. */
    if (strlen(Str) != Len) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *Str_3  = Str;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static void MR_CALL 
mercury__io__resize_buffer_4_p_0(
  MR_Integer OldSize_1,
  MR_Integer NewSize_2,
  MR_Box Buffer0_3,
  MR_Box * Buffer_4)
{
  {
{
#define MR_PROC_LABEL mercury__io__resize_buffer_4_p_0

	MR_Integer OldSize;
	MR_Integer NewSize;
	char * Buffer0;
	char * Buffer;

	OldSize =  OldSize_1 ;
	NewSize =  NewSize_2 ;
	Buffer0 = (char *) Buffer0_3 ;
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
	 *Buffer_4  = (MR_Box) Buffer;
}
  }
}

static void MR_CALL 
mercury__io__alloc_buffer_2_p_0(
  MR_Integer Size_1,
  MR_Box * Buffer_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__alloc_buffer_2_p_0

	MR_Integer Size;
	char * Buffer;

	Size =  Size_1 ;
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
	 *Buffer_2  = (MR_Box) Buffer;
}
  }
}

void MR_CALL 
mercury__io__file_id_2_5_p_0(
  MR_String FileName_1,
  MR_Box * FileId_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__file_id_2_5_p_0

	MR_String FileName;
	ML_File_Id FileId;
	MR_Integer Error;

	FileName =  FileName_1 ;
		{

    /* Win32 returns junk in the st_ino field of `struct stat'. */
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
}

static void MR_CALL 
mercury__io__compare_file_id_2_3_p_0(
  MR_Integer * Res_1,
  MR_Box FileId1_2,
  MR_Box FileId2_3)
{
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
	 *Res_1  = Res;
}
  }
}

void MR_CALL 
mercury__io__compare_file_id_3_p_0(
  MR_Word * Result_4,
  MR_Box FileId1_5,
  MR_Box FileId2_6)
{
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
}

static void MR_CALL 
mercury__io__check_file_accessibility_2_7_p_0(
  MR_String FileName_1,
  MR_Word CheckRead_2,
  MR_Word CheckWrite_3,
  MR_Word CheckExecute_4,
  MR_Box * Error_5)
{
  {
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_2_7_p_0

	MR_String FileName;
	MR_Word CheckRead;
	MR_Word CheckWrite;
	MR_Word CheckExecute;
	MR_Integer Error;

	FileName =  FileName_1 ;
	CheckRead =  CheckRead_2 ;
	CheckWrite =  CheckWrite_3 ;
	CheckExecute =  CheckExecute_4 ;
		{

#if defined(MR_HAVE_ACCESS)
  #ifdef F_OK
    const int MODE_EXISTS = F_OK;
  #else
    const int MODE_EXISTS = 0;
  #endif
  #ifdef X_OK
    const int MODE_EXECUTE = X_OK;
  #else
    const int MODE_EXECUTE = 1;
  #endif
  #ifdef W_OK
    const int MODE_WRITE = W_OK;
  #else
    const int MODE_WRITE = 2;
  #endif
  #ifdef R_OK
    const int MODE_READ = R_OK;
  #else
    const int MODE_READ = 4;
  #endif

    int mode = MODE_EXISTS;
    int access_result;

  #if !defined(MR_WIN32) || defined(MR_CYGWIN)
    /*
    ** Earlier versions of MSVCRT ignored flags it doesn't support,
    ** later versions return an error (e.g. on Vista).
    */
    if (CheckExecute) {
        mode |= MODE_EXECUTE;
    }
  #endif
    if (CheckWrite) {
        mode |= MODE_WRITE;
    }
    if (CheckRead) {
        mode |= MODE_READ;
    }

  #ifdef MR_WIN32
    access_result = _waccess(ML_utf8_to_wide(FileName), mode);
  #else
    access_result = access(FileName, mode);
  #endif

    if (access_result == 0) {
        Error = 0;
    } else {
        Error = errno;
    }
#else /* !MR_HAVE_ACCESS */
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_5 );
}
  }
}

static void MR_CALL 
mercury__io__file_type_2_6_p_0(
  MR_Integer FollowSymLinks_1,
  MR_String FileName_2,
  MR_Word * FileType_3,
  MR_Box * Error_4)
{
  {
{
#define MR_PROC_LABEL mercury__io__file_type_2_6_p_0

	MR_Integer FollowSymLinks;
	MR_String FileName;
	MR_Word FileType;
	MR_Integer Error;

	FollowSymLinks =  FollowSymLinks_1 ;
	FileName =  FileName_2 ;
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
        /* Do we still need the non-POSIX S_IFMT style? */
        if
            #if defined(S_ISREG)
                (S_ISREG(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFREG)
                ((s.st_mode & S_IFMT) == S_IFREG)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_REGULAR_FILE;
        }
        else if
            #if defined(S_ISDIR)
                (S_ISDIR(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFDIR)
                ((s.st_mode & S_IFMT) == S_IFDIR)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_DIRECTORY;
        }
        else if
            #if defined(S_ISBLK)
                (S_ISBLK(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFBLK)
                ((s.st_mode & S_IFMT) == S_IFBLK)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_BLOCK_DEVICE;
        }
        else if
            #if defined(S_ISCHR)
                (S_ISCHR(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFCHR)
                ((s.st_mode & S_IFMT) == S_IFCHR)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_CHARACTER_DEVICE;
        }
        else if
            #if defined(S_ISFIFO)
                (S_ISFIFO(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFIFO)
                ((s.st_mode & S_IFMT) == S_IFIFO)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_NAMED_PIPE;
        }
        else if
            #if defined(S_ISLNK)
                (S_ISLNK(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFLNK)
                ((s.st_mode & S_IFMT) == S_IFLNK)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_SYMBOLIC_LINK;
        }
        else if
            #if defined(S_ISSOCK)
                (S_ISSOCK(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFSOCK)
                ((s.st_mode & S_IFMT) == S_IFSOCK)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_SOCKET;
        } else {

        #ifdef S_TYPEISMQ
            if (S_TYPEISMQ(&s)) {
                FileType = ML_FILE_TYPE_MESSAGE_QUEUE;
            } else
        #endif

        #ifdef S_TYPEISSEM
            if (S_TYPEISSEM(&s)) {
                FileType = ML_FILE_TYPE_SEMAPHORE;
            } else
        #endif

        #ifdef S_TYPEISSHM
            if (S_TYPEISSHM(&s)) {
                FileType = ML_FILE_TYPE_SHARED_MEMORY;
            } else
        #endif

            {
                FileType = ML_FILE_TYPE_UNKNOWN;
            }
        }
        Error = 0;
    } else {
        FileType = ML_FILE_TYPE_UNKNOWN;
        Error = errno;
    }
#else
    FileType = ML_FILE_TYPE_UNKNOWN;
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	 *FileType_3  = FileType;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_4 );
}
  }
}

void MR_CALL 
mercury__io__file_modification_time_2_5_p_0(
  MR_String FileName_1,
  MR_Word * Time_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__file_modification_time_2_5_p_0

	MR_String FileName;
	MR_Word Time;
	MR_Integer Error;

	FileName =  FileName_1 ;
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
        /* XXX avoid ML_construct_time_t by returning time_t_rep? */
        Time = ML_construct_time_t(s.st_mtime);
        Error = 0;
    } else {
        Error = errno;
        Time = 0;
    }
#else
    Error = ENOSYS;
    Time = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 *Time_2  = Time;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

static void MR_CALL 
mercury__io__stream_file_size_4_p_0(
  MR_Box Stream_1,
  MR_Integer * Size_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__stream_file_size_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Size;

	Stream = (MercuryFilePtr) Stream_1 ;
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
	 *Size_2  = Size;
}
  }
}

static void MR_CALL 
mercury__io__read_line_as_string_2_7_p_0(
  MR_Box Stream_1,
  MR_Word _FirstCall_2,
  MR_Word * Res_3,
  MR_String * RetString_4,
  MR_Box * Error_5)
{
  {
{
#define MR_PROC_LABEL mercury__io__read_line_as_string_2_7_p_0

	MercuryFilePtr Stream;
	MR_Word Res;
	MR_String RetString;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

#define ML_IO_READ_LINE_GROW(n) ((n) * 3 / 2)
#define ML_IO_BYTES_TO_WORDS(n) (((n) + sizeof(MR_Word) - 1) / sizeof(MR_Word))
#define ML_IO_READ_LINE_START   1024

    char initial_read_buffer[ML_IO_READ_LINE_START];
    char *read_buffer = initial_read_buffer;
    size_t read_buf_size = ML_IO_READ_LINE_START;
    size_t i;
    int char_code = '\0';

    Res = ML_READ_LINE_AS_STRING_OK;
    Error = 0;
    for (i = 0; char_code != '\n'; ) {
        char_code = mercury_get_byte(Stream);
        if (char_code == EOF) {
            if (i == 0) {
                if (MR_FERROR(*Stream)) {
                    Res = ML_READ_LINE_AS_STRING_ERROR;
                    Error = errno;
                } else {
                    Res = ML_READ_LINE_AS_STRING_EOF;
                }
            }
            break;
        }
        if (char_code == 0) {
            Res = ML_READ_LINE_AS_STRING_NULL_CHAR;
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
    if (Res == ML_READ_LINE_AS_STRING_OK) {
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
	 *Res_3  = Res;
	 *RetString_4  = RetString;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_5 );
}
  }
}

static void MR_CALL 
mercury__io__do_read_bitmap_10_p_0(
  MR_Box Stream_1,
  MR_Integer StartByte_2,
  MR_Integer NumBytes_3,
  MR_Box Bitmap0_4,
  MR_Box * Bitmap_5,
  MR_Integer BytesRead0_6,
  MR_Integer * BytesRead_7,
  MR_Box * Error_8)
{
  {
{
#define MR_PROC_LABEL mercury__io__do_read_bitmap_10_p_0

	MercuryFilePtr Stream;
	MR_Integer StartByte;
	MR_Integer NumBytes;
	MR_BitmapPtr Bitmap0;
	MR_BitmapPtr Bitmap;
	MR_Integer BytesRead0;
	MR_Integer BytesRead;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	StartByte =  StartByte_2 ;
	NumBytes =  NumBytes_3 ;
	Bitmap0 = (MR_BitmapPtr) Bitmap0_4 ;
	BytesRead0 =  BytesRead0_6 ;
		{

    size_t nread;

    Bitmap = Bitmap0;
    nread = MR_READ(*Stream, Bitmap->elements + StartByte, NumBytes);
    BytesRead = BytesRead0 + nread;
    if (nread < NumBytes && MR_FERROR(*Stream)) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 *Bitmap_5  = (MR_Box) Bitmap;
	 *BytesRead_7  = BytesRead;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_8 );
}
  }
}

static void MR_CALL 
mercury__io__gc_init_4_p_0(
  MR_Word StreamDbType_1,
  MR_Word UserGlobalsType_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__gc_init_4_p_0

	MR_Word StreamDbType;
	MR_Word UserGlobalsType;

	StreamDbType =  StreamDbType_1 ;
	UserGlobalsType =  UserGlobalsType_2 ;
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
  MR_String Var_1,
  MR_String Value_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__setenv_2_p_0

	MR_String Var;
	MR_String Value;
	MR_bool SUCCESS_INDICATOR;

	Var =  Var_1 ;
	Value =  Value_2 ;
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
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__io__getenv_2_p_0(
  MR_String Var_1,
  MR_String * Value_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__getenv_2_p_0

	MR_String Var;
	MR_String Value;
	MR_bool SUCCESS_INDICATOR;

	Var =  Var_1 ;
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
	 *Value_2  = Value;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__io__call_system_code_5_p_0(
  MR_String Command_1,
  MR_Integer * Status_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__call_system_code_5_p_0

	MR_String Command;
	MR_Integer Status;
	MR_Integer Error;

	Command =  Command_1 ;
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
        Error = errno;
    } else {
        /* Wait for the spawned process to exit. */
        do {
            err = waitpid(pid, &st, 0);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == -1) {
            Error = errno;
        } else {
            Status = st;
            Error = 0;
        }
    }

#else   /* !MR_THREAD_SAFE || !MR_HAVE_POSIX_SPAWN || !MR_HAVE_ENVIRON */

  #ifdef MR_WIN32
    Status = _wsystem(ML_utf8_to_wide(Command));
  #else
    Status = system(Command);
  #endif

    if (Status == -1) {
        Error = errno;
    } else {
        Error = 0;
    }

#endif  /* !MR_THREAD_SAFE || !MR_HAVE_POSIX_SPAWN || !MR_HAVE_ENVIRON */


		;}
#undef MR_PROC_LABEL
	 *Status_2  = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__io__read_byte_val_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_8,
  MR_Integer * ByteVal_9,
  MR_Box * Error_10)
{
  {
    MR_Box Stream_7 = (MR_Box) HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__read_byte_val_6_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_7 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 *Result_8  = Result;
	 *ByteVal_9  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_10 );
}
  }
}

void MR_CALL 
mercury__io__read_char_code_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_8,
  MR_Char * Char_9,
  MR_Box * Error_10)
{
  {
    MR_Box Stream_7 = (MR_Box) HeadVar__1_1;

    mercury__io__read_char_code_2_6_p_0(Stream_7, Result_8, Char_9, Error_10);
  }
}

MR_Integer MR_CALL 
mercury__io__get_stream_id_1_f_0(
  MR_Box Stream_1)
{
  {
    MR_Integer Id_2;

{
#define MR_PROC_LABEL mercury__io__get_stream_id_1_f_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) Stream_1 ;
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
	 Id_2  = Id;
}
    return Id_2;
  }
}

void MR_CALL 
mercury__io__unsafe_set_io_state_1_p_0(void)
{
  {
  }
}

void MR_CALL 
mercury__io__unsafe_get_io_state_1_p_0(void)
{
  {
  }
}

MR_bool MR_CALL 
mercury__io__get_io_stream_info_2_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word StreamDB_4,
  MR_Box Stream_5,
  MR_Word * StreamInfo_6)
{
  {
    MR_bool succeeded;
    MR_Box IOStream_8;
    MR_Box IOStream0_7;
    MR_Word TypeCtorInfo_18_18 = (MR_Word) &mercury__io__io__type_ctor_info_input_stream_0;
    MR_Word Var_9;
    MR_Box conv0_Var_9;

    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_17, TypeCtorInfo_18_18, Stream_5, &conv0_Var_9);
    if (succeeded)
    {
      Var_9 = ((MR_Word) conv0_Var_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOStream0_7 = (MR_Box) Var_9;
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOStream_8 = IOStream0_7;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box IOStream0_16;
      MR_Word TypeCtorInfo_19_19 = (MR_Word) &mercury__io__io__type_ctor_info_output_stream_0;
      MR_Word Var_10;
      MR_Box conv1_Var_10;

      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_17, TypeCtorInfo_19_19, Stream_5, &conv1_Var_10);
      if (succeeded)
      {
        Var_10 = ((MR_Word) conv1_Var_10);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        IOStream0_16 = (MR_Box) Var_10;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        IOStream_8 = IOStream0_16;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Box IOStream0_15;
        MR_Word TypeCtorInfo_20_20 = (MR_Word) &mercury__io__io__type_ctor_info_binary_input_stream_0;
        MR_Word Var_11;
        MR_Box conv2_Var_11;

        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_17, TypeCtorInfo_20_20, Stream_5, &conv2_Var_11);
        if (succeeded)
        {
          Var_11 = ((MR_Word) conv2_Var_11);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          IOStream0_15 = (MR_Box) Var_11;
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          IOStream_8 = IOStream0_15;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Box IOStream0_14;
          MR_Word TypeCtorInfo_21_21 = (MR_Word) &mercury__io__io__type_ctor_info_binary_output_stream_0;
          MR_Word Var_12;
          MR_Box conv3_Var_12;

          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_17, TypeCtorInfo_21_21, Stream_5, &conv3_Var_12);
          if (succeeded)
          {
            Var_12 = ((MR_Word) conv3_Var_12);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            IOStream0_14 = (MR_Box) Var_12;
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            IOStream_8 = IOStream0_14;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word TypeCtorInfo_22_22 = (MR_Word) &mercury__io__io__type_ctor_info_stream_0;
            MR_Box conv4_IOStream_8;

            succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_17, TypeCtorInfo_22_22, Stream_5, &conv4_IOStream_8);
            if (succeeded)
            {
              IOStream_8 = ((MR_Box) conv4_IOStream_8);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    if (succeeded)
    {
      *StreamInfo_6 = mercury__io__maybe_stream_info_2_f_0(StreamDB_4, IOStream_8);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__io__binary_output_stream_info_2_f_0(
  MR_Word StreamDb_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Box Stream_5 = (MR_Box) HeadVar__2_2;

    HeadVar__3_3 = mercury__io__maybe_stream_info_2_f_0(StreamDb_4, Stream_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__io__binary_input_stream_info_2_f_0(
  MR_Word StreamDb_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Box Stream_5 = (MR_Box) HeadVar__2_2;

    HeadVar__3_3 = mercury__io__maybe_stream_info_2_f_0(StreamDb_4, Stream_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__io__output_stream_info_2_f_0(
  MR_Word StreamDb_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Box Stream_5 = (MR_Box) HeadVar__2_2;

    HeadVar__3_3 = mercury__io__maybe_stream_info_2_f_0(StreamDb_4, Stream_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__io__input_stream_info_2_f_0(
  MR_Word StreamDb_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Box Stream_5 = (MR_Box) HeadVar__2_2;

    HeadVar__3_3 = mercury__io__maybe_stream_info_2_f_0(StreamDb_4, Stream_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__io__maybe_stream_info_2_f_0(
  MR_Word StreamDb_4,
  MR_Box Stream_5)
{
  {
    MR_bool succeeded;
    MR_Word Info_6;
    MR_Word Info0_7;
    MR_Word TypeCtorInfo_14_14;
    MR_Integer Var_12;
    MR_Box conv0_Info0_7;

{
#define MR_PROC_LABEL mercury__io__maybe_stream_info_2_f_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) Stream_5 ;
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
	 Var_12  = Id;
}
    TypeCtorInfo_14_14 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeCtorInfo_14_14, StreamDb_4, Var_12, &conv0_Info0_7);
    if (succeeded)
    {
      Info0_7 = ((MR_Word) conv0_Info0_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer Id_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 0)));
      MR_Word Mode_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 1)));
      MR_Word Content_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 2)));
      MR_Word Source_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 3)));

      {
        Info_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Info_6, 0) = ((MR_Box) (Id_8));
        MR_hl_field(MR_mktag(1), Info_6, 1) = ((MR_Box) (Mode_9));
        MR_hl_field(MR_mktag(1), Info_6, 2) = ((MR_Box) (Content_10));
        MR_hl_field(MR_mktag(1), Info_6, 3) = ((MR_Box) (Source_11));
      }
    }
    else
      Info_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return Info_6;
  }
}

void MR_CALL 
mercury__io__get_stream_db_with_locking_1_p_0(
  MR_Word * StreamDb_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__get_stream_db_with_locking_1_p_0

	MR_Word StreamDb;

		{

    MR_LOCK(&ML_io_stream_db_lock, "io.get_stream_db/1");
    StreamDb = ML_io_stream_db;
    MR_UNLOCK(&ML_io_stream_db_lock, "io.get_stream_db/1");


		;}
#undef MR_PROC_LABEL
	 *StreamDb_1  = StreamDb;
}
  }
}

void MR_CALL 
mercury__io__get_stream_db_3_p_0(
  MR_Word * StreamDb_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__get_stream_db_3_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	 *StreamDb_1  = StreamDb;
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
  {
  }
}

void MR_CALL 
mercury__io__get_op_table_3_p_0(void)
{
  {
  }
}

void MR_CALL 
mercury__io__file_id_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Box FileId_8;
    MR_Box Error_9;
    MR_Word IOError_10;
    MR_String Message_17;

{
#define MR_PROC_LABEL mercury__io__file_id_4_p_0

	MR_String FileName;
	ML_File_Id FileId;
	MR_Integer Error;

	FileName =  FileName_5 ;
		{

    /* Win32 returns junk in the st_ino field of `struct stat'. */
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

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__file_id_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 =  (MR_String) "cannot get file id: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_17  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_10 = (MR_Word) Message_17;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_10));
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FileId_8));
      }
  }
}

void MR_CALL 
mercury__io__make_maybe_win32_err_msg_3_p_0(
  MR_Box Error_4,
  MR_String Msg0_5,
  MR_String * Msg_6)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__make_maybe_win32_err_msg_3_p_0

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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__io__make_maybe_win32_err_msg_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_4 , Error);
	Msg0 =  Msg0_5 ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 *Msg_6  = Msg;
}
    }
    else
    {
{
#define MR_PROC_LABEL mercury__io__make_maybe_win32_err_msg_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_4 , Error);
	Msg0 =  Msg0_5 ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 *Msg_6  = Msg;
}
    }
  }
}

void MR_CALL 
mercury__io__make_err_msg_3_p_0(
  MR_Box Error_1,
  MR_String Msg0_2,
  MR_String * Msg_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__make_err_msg_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_1 , Error);
	Msg0 =  Msg0_2 ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 *Msg_3  = Msg;
}
  }
}

MR_bool MR_CALL 
mercury__io__is_maybe_win32_error_3_p_0(
  MR_Box Error_4,
  MR_String Prefix_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_String Message_6;

{
#define MR_PROC_LABEL mercury__io__is_maybe_win32_error_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_4 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__is_maybe_win32_error_3_p_0

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
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__io__is_maybe_win32_error_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_4 , Error);
	Msg0 =  Prefix_5 ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 Message_6  = Msg;
}
      }
      else
      {
{
#define MR_PROC_LABEL mercury__io__is_maybe_win32_error_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_4 , Error);
	Msg0 =  Prefix_5 ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_6  = Msg;
}
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *HeadVar__3_3 = (MR_Word) Message_6;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__io__is_error_3_p_0(
  MR_Box Error_4,
  MR_String Prefix_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_String Message_6;

{
#define MR_PROC_LABEL mercury__io__is_error_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_4 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__is_error_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_4 , Error);
	Msg0 =  Prefix_5 ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_6  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *HeadVar__3_3 = (MR_Word) Message_6;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__io__have_dotnet_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__have_dotnet_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__io__have_cygwin_0_p_0(void)
{
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
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__io__have_win32_0_p_0(void)
{
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
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__io__finalize_state_2_p_0(void)
{
  {
  }
}

void MR_CALL 
mercury__io__init_state_2_p_0(void)
{
  {
    MR_Word TypeInfo_19_19;
    MR_Word TypeCtorInfo_20_20;
    MR_Word TypeCtorInfo_23_23;
    MR_Word StreamDb_4;
    MR_Word Globals_5;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word StdinBinary_32;
    MR_Word StdoutBinary_33;
    MR_Box NewStream_47;
    MR_Box NewStream_54;
    MR_Box Stream_60;
    MR_Box Stream_65;
    MR_Box NewStream_70;
    MR_Box NewStream_76;
    MR_Box OutStream_48;
    MR_Box OutStream_55;
    MR_Box OutStream_71;
    MR_Box OutStream_77;

{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	 NewStream_47  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_47 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_48  = (MR_Box) OutStream;
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	 NewStream_54  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_54 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_55  = (MR_Box) OutStream;
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin_binary;


		;}
#undef MR_PROC_LABEL
	 Stream_60  = (MR_Box) Stream;
}
    StdinBinary_32 = (MR_Word) Stream_60;
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout_binary;


		;}
#undef MR_PROC_LABEL
	 Stream_65  = (MR_Box) Stream;
}
    StdoutBinary_33 = (MR_Word) Stream_65;
    NewStream_70 = (MR_Box) StdinBinary_32;
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_70 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_71  = (MR_Box) OutStream;
}
    NewStream_76 = (MR_Box) StdoutBinary_33;
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_76 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_77  = (MR_Box) OutStream;
}
    TypeInfo_19_19 = (MR_Word) &mercury__io_scalar_common_1[1];
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_19_19 ;
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
	 Var_10  = TypeInfo;
}
    TypeCtorInfo_20_20 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeCtorInfo_20_20 ;
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
	 Var_11  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MR_Word StreamDbType;
	MR_Word UserGlobalsType;

	StreamDbType =  Var_10 ;
	UserGlobalsType =  Var_11 ;
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
    StreamDb_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__univ__type_to_univ_2_p_0(TypeCtorInfo_23_23, ((MR_Box) ((MR_String) "<globals>")), &Globals_5);
{
#define MR_PROC_LABEL mercury__io__init_state_2_p_0

	MR_Word StreamDb;

	StreamDb =  StreamDb_4 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
    mercury__io__set_globals_3_p_0(Globals_5);
    mercury__io__insert_std_stream_names_2_p_0();
  }
}

static void MR_CALL 
mercury__io__insert_std_stream_names_2_p_0(void)
{
  {
    MR_Word TypeCtorInfo_18_51;
    MR_Word TypeInfo_for_K_59;
    MR_Word TypeCtorInfo_18_81;
    MR_Word TypeInfo_for_K_89;
    MR_Box Stdin_4;
    MR_Box Stdout_5;
    MR_Box Stderr_6;
    MR_Word Var_11;
    MR_Word Var_19;
    MR_Word Var_27;
    MR_Word StreamDb0_43;
    MR_Word StreamDb_44;
    MR_Integer Var_47;
    MR_Word StreamDb0_73;
    MR_Word StreamDb_74;
    MR_Integer Var_77;

{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	 Stdin_4  = (MR_Box) Stream;
}
    Var_11 = (MR_Word) &mercury__io_scalar_common_2[1];
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
	 StreamDb0_43  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) Stdin_4 ;
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
	 Var_47  = Id;
}
    TypeCtorInfo_18_51 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
    TypeInfo_for_K_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__tree234__set_4_p_0(TypeInfo_for_K_59, TypeCtorInfo_18_51, ((MR_Box) (Var_47)), ((MR_Box) (Var_11)), StreamDb0_43, &StreamDb_44);
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MR_Word StreamDb;

	StreamDb =  StreamDb_44 ;
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
	 Stdout_5  = (MR_Box) Stream;
}
    Var_19 = (MR_Word) &mercury__io_scalar_common_2[2];
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
	 StreamDb0_73  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) Stdout_5 ;
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
	 Var_77  = Id;
}
    TypeCtorInfo_18_81 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
    TypeInfo_for_K_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__tree234__set_4_p_0(TypeInfo_for_K_89, TypeCtorInfo_18_81, ((MR_Box) (Var_77)), ((MR_Box) (Var_19)), StreamDb0_73, &StreamDb_74);
{
#define MR_PROC_LABEL mercury__io__insert_std_stream_names_2_p_0

	MR_Word StreamDb;

	StreamDb =  StreamDb_74 ;
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
	 Stderr_6  = (MR_Box) Stream;
}
    Var_27 = (MR_Word) &mercury__io_scalar_common_2[3];
    mercury__io__insert_stream_info_4_p_0(Stderr_6, Var_27);
  }
}

static void MR_CALL 
mercury__io__insert_stream_info_4_p_0(
  MR_Box Stream_5,
  MR_Word Name_6)
{
  {
    MR_Word TypeCtorInfo_18_18;
    MR_Word TypeInfo_for_K_26;
    MR_Word StreamDb0_8;
    MR_Word StreamDb_9;
    MR_Integer Var_14;

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
	 StreamDb0_8  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__insert_stream_info_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) Stream_5 ;
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
	 Var_14  = Id;
}
    TypeCtorInfo_18_18 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
    TypeInfo_for_K_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__tree234__set_4_p_0(TypeInfo_for_K_26, TypeCtorInfo_18_18, ((MR_Box) (Var_14)), ((MR_Box) (Name_6)), StreamDb0_8, &StreamDb_9);
{
#define MR_PROC_LABEL mercury__io__insert_stream_info_4_p_0

	MR_Word StreamDb;

	StreamDb =  StreamDb_9 ;
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
mercury__io__error_message_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Error_3)
{
  *Error_3 = (MR_String) HeadVar__1_1;
}

MR_String MR_CALL 
mercury__io__error_message_1_f_0(
  MR_Word Error_3)
{
  {
    MR_String Msg_4 = (MR_String) Error_3;

    return Msg_4;
  }
}

MR_Word MR_CALL 
mercury__io__make_io_error_1_f_0(
  MR_String Error_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) Error_3;

    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__io__call_system_4_p_0(
  MR_String Command_5,
  MR_Word * Result_6)
{
  {
    MR_Word Result0_8;

    mercury__io__call_system_return_signal_4_p_0(Command_5, &Result0_8);
    if (((MR_tag((MR_Word) Result0_8)) == (MR_mktag((MR_Integer) 1))))
      *Result_6 = (MR_Word) Result0_8;
    else
    {
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_8, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer Code_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Code_9));
        }
      }
      else
      {
        MR_Integer Signal_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0)));
        MR_String SignalStr_11;
        MR_String ErrMsg_12;
        MR_Word Var_19;

        mercury__string__int_to_base_string_3_p_0(Signal_10, (MR_Integer) 10, &SignalStr_11);
        mercury__string__append_3_p_2((MR_String) "system command killed by signal number ", SignalStr_11, &ErrMsg_12);
        Var_19 = (MR_Word) ErrMsg_12;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
        }
      }
    }
  }
}

void MR_CALL 
mercury__io__call_system_return_signal_4_p_0(
  MR_String Command_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Integer Status_8;
    MR_Box Error_9;
    MR_Word IOError_10;
    MR_String Message_17;

{
#define MR_PROC_LABEL mercury__io__call_system_return_signal_4_p_0

	MR_String Command;
	MR_Integer Status;
	MR_Integer Error;

	Command =  Command_5 ;
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
        Error = errno;
    } else {
        /* Wait for the spawned process to exit. */
        do {
            err = waitpid(pid, &st, 0);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == -1) {
            Error = errno;
        } else {
            Status = st;
            Error = 0;
        }
    }

#else   /* !MR_THREAD_SAFE || !MR_HAVE_POSIX_SPAWN || !MR_HAVE_ENVIRON */

  #ifdef MR_WIN32
    Status = _wsystem(ML_utf8_to_wide(Command));
  #else
    Status = system(Command);
  #endif

    if (Status == -1) {
        Error = errno;
    } else {
        Error = 0;
    }

#endif  /* !MR_THREAD_SAFE || !MR_HAVE_POSIX_SPAWN || !MR_HAVE_ENVIRON */


		;}
#undef MR_PROC_LABEL
	 Status_8  = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
}
{
#define MR_PROC_LABEL mercury__io__call_system_return_signal_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__call_system_return_signal_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 =  (MR_String) "error invoking system command: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_17  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_10 = (MR_Word) Message_17;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_10));
      }
    else
      *Result_6 = mercury__io__decode_system_command_exit_code_1_f_0(Status_8);
  }
}

MR_Word MR_CALL 
mercury__io__decode_system_command_exit_code_1_f_0(
  MR_Integer Code0_3)
{
  {
    MR_Word Status_4;
    MR_Word Exited_5;
    MR_Integer ExitCode_6;
    MR_Word Signalled_7;
    MR_Integer Signal_8;

{
#define MR_PROC_LABEL mercury__io__decode_system_command_exit_code_1_f_0

	MR_Integer Status0;
	MR_Word Exited;
	MR_Integer Status;
	MR_Word Signalled;
	MR_Integer Signal;

	Status0 =  Code0_3 ;
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
	 Exited_5  = Exited;
	 ExitCode_6  = Status;
	 Signalled_7  = Signalled;
	 Signal_8  = Signal;
}
    switch (Exited_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (Signalled_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_9 = (MR_Word) ((MR_Box) ((MR_String) "unknown result code from system command"));

              Status_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_5[6]);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_11;

              {
                Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Signal_8));
              }
              {
                Status_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Status_4, 0) = ((MR_Box) (Var_11));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_12;

          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (ExitCode_6));
          }
          {
            Status_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Status_4, 0) = ((MR_Box) (Var_12));
          }
        }
        break;
    }
    return Status_4;
  }
}

void MR_CALL 
mercury__io__report_stats_2_p_0(void)
{
  {
    mercury__io__report_stats_3_p_0((MR_String) "standard");
  }
}

void MR_CALL 
mercury__io__report_stats_3_p_0(
  MR_String Selector_4)
{
  {
    MR_bool succeeded = (strcmp(Selector_4, (MR_String) "standard") == 0);

    if (succeeded)
      mercury__benchmarking__report_stats_0_p_0();
    else
    {
      succeeded = (strcmp(Selector_4, (MR_String) "full_memory_stats") == 0);
      if (succeeded)
        mercury__benchmarking__report_full_memory_stats_0_p_0();
      else
      {
        succeeded = (strcmp(Selector_4, (MR_String) "tabling") == 0);
        if (succeeded)
          mercury__table_builtin__table_report_statistics_0_p_0();
        else
        {
          MR_String Message_6;
          MR_String Var_14;

          mercury__string__append_3_p_2(Selector_4, (MR_String) "\' not understood", &Var_14);
          mercury__string__append_3_p_2((MR_String) "io.report_stats: selector \140", Var_14, &Message_6);
          {
            mercury__require__error_1_p_0(Message_6);
            return;
          }
        }
      }
    }
  }
}

void MR_CALL 
mercury__io__file_modification_time_4_p_0(
  MR_String File_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Word Time_8;
    MR_Box Error_9;
    MR_Word IOError_10;
    MR_String Message_17;

{
#define MR_PROC_LABEL mercury__io__file_modification_time_4_p_0

	MR_String FileName;
	MR_Word Time;
	MR_Integer Error;

	FileName =  File_5 ;
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
        /* XXX avoid ML_construct_time_t by returning time_t_rep? */
        Time = ML_construct_time_t(s.st_mtime);
        Error = 0;
    } else {
        Error = errno;
        Time = 0;
    }
#else
    Error = ENOSYS;
    Time = 0;
#endif


		;}
#undef MR_PROC_LABEL
	 Time_8  = Time;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
}
{
#define MR_PROC_LABEL mercury__io__file_modification_time_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__file_modification_time_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 =  (MR_String) "can\'t get file modification time: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_17  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_10 = (MR_Word) Message_17;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_10));
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Time_8));
      }
  }
}

void MR_CALL 
mercury__io__check_file_accessibility_5_p_0(
  MR_String FileName_6,
  MR_Word AccessTypes_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      mercury__io__check_file_accessibility_dotnet_5_p_0(FileName_6, AccessTypes_7, Result_8);
    else
    {
      MR_Word CheckRead_10;
      MR_Word CheckWrite_11;
      MR_Word CheckExecute_12;
      MR_Box Error_13;
      MR_Word TypeCtorInfo_26_54 = (MR_Word) &mercury__io__io__type_ctor_info_access_type_0;
      MR_Word TypeCtorInfo_27_85;
      MR_Word IOError_14;
      MR_String Message_91;

      succeeded = mercury__list__member_2_p_0(TypeCtorInfo_26_54, ((MR_Box) ((MR_Integer) 0)), AccessTypes_7);
      if (succeeded)
        CheckRead_10 = (MR_Integer) 1;
      else
        CheckRead_10 = (MR_Integer) 0;
      TypeCtorInfo_27_85 = (MR_Word) &mercury__io__io__type_ctor_info_access_type_0;
      succeeded = mercury__list__member_2_p_0(TypeCtorInfo_27_85, ((MR_Box) ((MR_Integer) 1)), AccessTypes_7);
      if (succeeded)
        CheckWrite_11 = (MR_Integer) 1;
      else
        CheckWrite_11 = (MR_Integer) 0;
      CheckExecute_12 = mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_57_95_95_91_51_93_95_48_1_f_in__bool_0(AccessTypes_7, (MR_Integer) 2);
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_5_p_0

	MR_String FileName;
	MR_Word CheckRead;
	MR_Word CheckWrite;
	MR_Word CheckExecute;
	MR_Integer Error;

	FileName =  FileName_6 ;
	CheckRead =  CheckRead_10 ;
	CheckWrite =  CheckWrite_11 ;
	CheckExecute =  CheckExecute_12 ;
		{

#if defined(MR_HAVE_ACCESS)
  #ifdef F_OK
    const int MODE_EXISTS = F_OK;
  #else
    const int MODE_EXISTS = 0;
  #endif
  #ifdef X_OK
    const int MODE_EXECUTE = X_OK;
  #else
    const int MODE_EXECUTE = 1;
  #endif
  #ifdef W_OK
    const int MODE_WRITE = W_OK;
  #else
    const int MODE_WRITE = 2;
  #endif
  #ifdef R_OK
    const int MODE_READ = R_OK;
  #else
    const int MODE_READ = 4;
  #endif

    int mode = MODE_EXISTS;
    int access_result;

  #if !defined(MR_WIN32) || defined(MR_CYGWIN)
    /*
    ** Earlier versions of MSVCRT ignored flags it doesn't support,
    ** later versions return an error (e.g. on Vista).
    */
    if (CheckExecute) {
        mode |= MODE_EXECUTE;
    }
  #endif
    if (CheckWrite) {
        mode |= MODE_WRITE;
    }
    if (CheckRead) {
        mode |= MODE_READ;
    }

  #ifdef MR_WIN32
    access_result = _waccess(ML_utf8_to_wide(FileName), mode);
  #else
    access_result = access(FileName, mode);
  #endif

    if (access_result == 0) {
        Error = 0;
    } else {
        Error = errno;
    }
#else /* !MR_HAVE_ACCESS */
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_13 );
}
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_13 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_13 , Error);
	Msg0 =  (MR_String) "file not accessible: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_91  = Msg;
}
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        IOError_14 = (MR_Word) Message_91;
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_14));
        }
      else
        *Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
}

static MR_Word MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_57_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6)
{
  {
    MR_bool succeeded;
    MR_Word V_2_4;
    MR_Word TypeCtorInfo_28_32 = (MR_Word) &mercury__io__io__type_ctor_info_access_type_0;

    succeeded = mercury__list__member_2_p_0(TypeCtorInfo_28_32, ((MR_Box) (Var_6)), Var_5);
    if (succeeded)
      V_2_4 = (MR_Integer) 1;
    else
      V_2_4 = (MR_Integer) 0;
    return V_2_4;
  }
}

static void MR_CALL 
mercury__io__check_file_accessibility_dotnet_5_p_0(
  MR_String FileName_6,
  MR_Word AccessTypes_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;
    MR_Word CheckRead0_10;
    MR_Word CheckWrite_11;
    MR_Word CheckExec_12;
    MR_Word CheckRead_13;
    MR_Word FileTypeRes_14;

    CheckRead0_10 = mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_55_95_95_91_51_93_95_48_1_f_in__bool_0(AccessTypes_7, (MR_Integer) 0);
    CheckWrite_11 = mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_54_95_95_91_51_93_95_48_1_f_in__bool_0(AccessTypes_7, (MR_Integer) 1);
    CheckExec_12 = mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_53_95_95_91_51_93_95_48_1_f_in__bool_0(AccessTypes_7, (MR_Integer) 2);
    switch (CheckRead0_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CheckRead_13 = CheckExec_12;
        break;
      case (MR_Integer) 1:
        CheckRead_13 = (MR_Integer) 1;
        break;
    }
    mercury__io__file_type_5_p_0((MR_Integer) 1, FileName_6, &FileTypeRes_14);
    if (((MR_tag((MR_Word) FileTypeRes_14)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word FileTypeError_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), FileTypeRes_14, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileTypeError_26));
      }
    }
    else
    {
      MR_Word FileType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FileTypeRes_14, (MR_Integer) 0)));

      succeeded = (FileType_15 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Box Error_16;
        MR_Word IOError_17;
        MR_String Message_72;

{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_dotnet_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          {
            mercury__require__error_1_p_0((MR_String) "io.check_directory_accessibility_dotnet called for non-.NET CLI backend");
            return;
          }
        }
        else
        {
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_dotnet_5_p_0

	MR_Integer Error;

		{

    Error = 0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_16 );
}
        }
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_dotnet_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_16 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          succeeded = MR_FALSE;
        else
        {
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_dotnet_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_16 , Error);
	Msg0 =  (MR_String) "file not accessible: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_72  = Msg;
}
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          IOError_17 = (MR_Word) Message_72;
          succeeded = MR_TRUE;
        }
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_17));
          }
        else
          *Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Word CheckReadRes_20;
        MR_Word CheckWriteRes_24;

        switch (CheckRead_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            CheckReadRes_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word InputRes_18;

              mercury__io__open_input_4_p_0(FileName_6, &InputRes_18);
              if (((MR_tag((MR_Word) InputRes_18)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word InputError_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), InputRes_18, (MR_Integer) 0)));

                {
                  CheckReadRes_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), CheckReadRes_20, 0) = ((MR_Box) (InputError_21));
                }
              }
              else
              {
                MR_Word InputStream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), InputRes_18, (MR_Integer) 0)));
                MR_Box Stream_75 = (MR_Box) InputStream_19;
                MR_Box Error_77;

                mercury__io__maybe_delete_stream_info_3_p_0(Stream_75);
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_dotnet_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_75 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_77 );
}
                mercury__io__throw_on_error_4_p_0(Error_77, (MR_String) "error closing file: ");
                CheckReadRes_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            }
            break;
        }
        succeeded = (CheckReadRes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          succeeded = (CheckWrite_11 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word OutputRes_22;

          mercury__io__open_append_4_p_0(FileName_6, &OutputRes_22);
          if (((MR_tag((MR_Word) OutputRes_22)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word OutputError_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), OutputRes_22, (MR_Integer) 0)));

            {
              CheckWriteRes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CheckWriteRes_24, 0) = ((MR_Box) (OutputError_25));
            }
          }
          else
          {
            MR_Word OutputStream_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutputRes_22, (MR_Integer) 0)));

            mercury__io__close_output_3_p_0(OutputStream_23);
            CheckWriteRes_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        }
        else
          CheckWriteRes_24 = CheckReadRes_20;
        succeeded = (CheckWriteRes_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          succeeded = (CheckExec_12 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Box Error_46;
          MR_Word IOError_45;
          MR_String Message_96;

{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_dotnet_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
            {
              mercury__require__error_1_p_0((MR_String) "io.have_dotnet_exec_permission invoked for non-.NET CLI backend");
              return;
            }
          }
          else
          {
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_dotnet_5_p_0

	MR_Integer Error;

		{

    Error = 0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_46 );
}
          }
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_dotnet_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_46 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
            succeeded = MR_FALSE;
          else
          {
{
#define MR_PROC_LABEL mercury__io__check_file_accessibility_dotnet_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_46 , Error);
	Msg0 =  (MR_String) "file not accessible: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_96  = Msg;
}
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            IOError_45 = (MR_Word) Message_96;
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *Result_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_45));
            }
          else
            *Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        else
          *Result_8 = CheckWriteRes_24;
      }
    }
  }
}

static MR_Word MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_55_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6)
{
  {
    MR_bool succeeded;
    MR_Word V_2_4;
    MR_Word TypeCtorInfo_52_56 = (MR_Word) &mercury__io__io__type_ctor_info_access_type_0;

    succeeded = mercury__list__member_2_p_0(TypeCtorInfo_52_56, ((MR_Box) (Var_6)), Var_5);
    if (succeeded)
      V_2_4 = (MR_Integer) 1;
    else
      V_2_4 = (MR_Integer) 0;
    return V_2_4;
  }
}

static MR_Word MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_54_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6)
{
  {
    MR_bool succeeded;
    MR_Word V_2_4;
    MR_Word TypeCtorInfo_53_57 = (MR_Word) &mercury__io__io__type_ctor_info_access_type_0;

    succeeded = mercury__list__member_2_p_0(TypeCtorInfo_53_57, ((MR_Box) (Var_6)), Var_5);
    if (succeeded)
      V_2_4 = (MR_Integer) 1;
    else
      V_2_4 = (MR_Integer) 0;
    return V_2_4;
  }
}

static MR_Word MR_CALL 
mercury__io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_53_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6)
{
  {
    MR_bool succeeded;
    MR_Word V_2_4;
    MR_Word TypeCtorInfo_54_58 = (MR_Word) &mercury__io__io__type_ctor_info_access_type_0;

    succeeded = mercury__list__member_2_p_0(TypeCtorInfo_54_58, ((MR_Box) (Var_6)), Var_5);
    if (succeeded)
      V_2_4 = (MR_Integer) 1;
    else
      V_2_4 = (MR_Integer) 0;
    return V_2_4;
  }
}

void MR_CALL 
mercury__io__read_symlink_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;

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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String TargetFileName_8;
      MR_Box Error_9;
      MR_Word IOError_10;
      MR_String Message_19;

{
#define MR_PROC_LABEL mercury__io__read_symlink_4_p_0

	MR_String FileName;
	MR_String TargetFileName;
	MR_Integer Error;

	FileName =  FileName_5 ;
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
            num_chars = readlink(FileName, buffer2, buffer_size2);
        } while (num_chars == buffer_size2);

        /* Invariant: num_chars < buffer_size2 */

        if (num_chars == -1) {
            TargetFileName = MR_make_string_const("");
            Error = errno;
        } else {
            buffer2[num_chars] = '\0';
            MR_make_aligned_string_copy_msg(TargetFileName, buffer2,
                MR_ALLOC_ID);
            Error = 0;
        }
        MR_free(buffer2);
    } else if (num_chars == -1) {
        TargetFileName = MR_make_string_const("");
        Error = errno;
    } else {
        buffer[num_chars] = '\0';
        MR_make_aligned_string_copy_msg(TargetFileName, buffer, MR_ALLOC_ID);
        Error = 0;
    }
#else /* !MR_HAVE_READLINK */
    TargetFileName = MR_make_string_const("");
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	 TargetFileName_8  = TargetFileName;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
}
{
#define MR_PROC_LABEL mercury__io__read_symlink_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__io__read_symlink_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 =  (MR_String) "io.read_symlink failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_19  = Msg;
}
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        IOError_10 = (MR_Word) Message_19;
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_10));
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TargetFileName_8));
        }
    }
    else
    {
      MR_Word Var_15 = (MR_Word) ((MR_Box) ((MR_String) "io.read_symlink not supported on this platform"));

      *Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_5[5]);
    }
  }
}

void MR_CALL 
mercury__io__make_symlink_5_p_0(
  MR_String FileName_6,
  MR_String LinkFileName_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;

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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Box Error_10;
      MR_Word IOError_11;
      MR_String Message_20;

{
#define MR_PROC_LABEL mercury__io__make_symlink_5_p_0

	MR_String FileName;
	MR_String LinkFileName;
	MR_Integer Error;

	FileName =  FileName_6 ;
	LinkFileName =  LinkFileName_7 ;
		{

#ifdef MR_HAVE_SYMLINK
    if (symlink(FileName, LinkFileName) == 0) {
        Error = 0;
    } else {
        Error = errno;
    }
#else
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
{
#define MR_PROC_LABEL mercury__io__make_symlink_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__io__make_symlink_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 =  (MR_String) "io.make_symlink failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_20  = Msg;
}
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        IOError_11 = (MR_Word) Message_20;
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_11));
        }
      else
        *Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word Var_16 = (MR_Word) ((MR_Box) ((MR_String) "io.make_symlink not supported on this platform"));

      *Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_5[4]);
    }
  }
}

MR_bool MR_CALL 
mercury__io__have_symlinks_0_p_0(void)
{
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
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__io__rename_file_5_p_0(
  MR_String OldFileName_6,
  MR_String NewFileName_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;
    MR_Box Error_10;
    MR_Word IOError_11;
    MR_String Message_18;

{
#define MR_PROC_LABEL mercury__io__rename_file_5_p_0

	MR_String OldFileName;
	MR_String NewFileName;
	MR_Integer Error;

	OldFileName =  OldFileName_6 ;
	NewFileName =  NewFileName_7 ;
		{

    int rc;
#ifdef MR_WIN32
    rc = _wrename(ML_utf8_to_wide(OldFileName),
        ML_utf8_to_wide(NewFileName));
#else
    rc = rename(OldFileName, NewFileName);
#endif
    if (rc == 0) {
        Error = 0;
    } else {
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
{
#define MR_PROC_LABEL mercury__io__rename_file_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__rename_file_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 =  (MR_String) "rename failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_18  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_11 = (MR_Word) Message_18;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_11));
      }
    else
      *Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
mercury__io__remove_file_recursively_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Continue_12;
    MR_Word conv0_Res_14;

    mercury__io__remove_directory_entry_8_p_0(((MR_String) wrapper_arg_1), ((MR_String) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv1_Continue_12, ((MR_Word) wrapper_arg_5), &conv0_Res_14);
    *wrapper_arg_4 = ((MR_Box) (conv1_Continue_12));
    *wrapper_arg_6 = ((MR_Box) (conv0_Res_14));
  }
}

void MR_CALL 
mercury__io__remove_file_recursively_4_p_0(
  MR_String FileName_5,
  MR_Word * Res_6)
{
  {
    MR_Word ResFileType_9;

    mercury__io__file_type_5_p_0((MR_Integer) 0, FileName_5, &ResFileType_9);
    if (((MR_tag((MR_Word) ResFileType_9)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ResFileType_9, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Res_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_24));
      }
    }
    else
    {
      MR_Word FileType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ResFileType_9, (MR_Integer) 0)));

      switch (FileType_10) {
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
          mercury__io__remove_file_4_p_0(FileName_5, Res_6);
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_for_T_51 = (MR_Word) &mercury__io__io__type_ctor_info_res_0;
            MR_Word Res0_11;
            MR_Word Var_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word V_7_40 = (MR_Word) &mercury__io_scalar_common_1[2];
            MR_String V_19_42;
            MR_Word V_20_43;
            MR_Word V_13_47;
            MR_Word V_14_48;
            MR_Word V_12_46;
            MR_Box conv2_V_14_48;

            V_19_42 = mercury__dir__fixup_dirname_1_f_0(FileName_5);
            V_20_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__dir__foldl2_process_dir_12_p_0(TypeInfo_for_T_51, (MR_Integer) 0, V_7_40, V_19_42, V_20_43, (MR_Integer) 0, (MR_Integer) 0, &V_12_46, &V_13_47, ((MR_Box) (Var_20)), &conv2_V_14_48);
            V_14_48 = ((MR_Word) conv2_V_14_48);
            if ((V_13_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                Res0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Res0_11, 0) = ((MR_Box) (V_14_48));
              }
            else
            {
              MR_Word V_15_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_13_47, (MR_Integer) 0)));

              {
                Res0_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Res0_11, 0) = ((MR_Box) (V_14_48));
                MR_hl_field(MR_mktag(1), Res0_11, 1) = ((MR_Box) (V_15_50));
              }
            }
            if (((MR_tag((MR_Word) Res0_11)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Res0_11, (MR_Integer) 1)));
              MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Res0_11, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *Res_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_23));
              }
            }
            else
            {
              MR_Word MaybeError_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Res0_11, (MR_Integer) 0)));

              if ((MaybeError_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                mercury__io__remove_file_4_p_0(FileName_5, Res_6);
              else
                *Res_6 = MaybeError_12;
            }
          }
          break;
      }
    }
  }
}

void MR_CALL 
mercury__io__file_type_5_p_0(
  MR_Word FollowSymLinks_6,
  MR_String FileName_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;
    MR_Integer FollowSymLinksInt_10;
    MR_Word FileType_11;
    MR_Box Error_12;
    MR_Word IOError_13;
    MR_String Message_20;

    switch (FollowSymLinks_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FollowSymLinksInt_10 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        FollowSymLinksInt_10 = (MR_Integer) 1;
        break;
    }
{
#define MR_PROC_LABEL mercury__io__file_type_5_p_0

	MR_Integer FollowSymLinks;
	MR_String FileName;
	MR_Word FileType;
	MR_Integer Error;

	FollowSymLinks =  FollowSymLinksInt_10 ;
	FileName =  FileName_7 ;
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
        /* Do we still need the non-POSIX S_IFMT style? */
        if
            #if defined(S_ISREG)
                (S_ISREG(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFREG)
                ((s.st_mode & S_IFMT) == S_IFREG)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_REGULAR_FILE;
        }
        else if
            #if defined(S_ISDIR)
                (S_ISDIR(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFDIR)
                ((s.st_mode & S_IFMT) == S_IFDIR)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_DIRECTORY;
        }
        else if
            #if defined(S_ISBLK)
                (S_ISBLK(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFBLK)
                ((s.st_mode & S_IFMT) == S_IFBLK)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_BLOCK_DEVICE;
        }
        else if
            #if defined(S_ISCHR)
                (S_ISCHR(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFCHR)
                ((s.st_mode & S_IFMT) == S_IFCHR)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_CHARACTER_DEVICE;
        }
        else if
            #if defined(S_ISFIFO)
                (S_ISFIFO(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFIFO)
                ((s.st_mode & S_IFMT) == S_IFIFO)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_NAMED_PIPE;
        }
        else if
            #if defined(S_ISLNK)
                (S_ISLNK(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFLNK)
                ((s.st_mode & S_IFMT) == S_IFLNK)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_SYMBOLIC_LINK;
        }
        else if
            #if defined(S_ISSOCK)
                (S_ISSOCK(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFSOCK)
                ((s.st_mode & S_IFMT) == S_IFSOCK)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_SOCKET;
        } else {

        #ifdef S_TYPEISMQ
            if (S_TYPEISMQ(&s)) {
                FileType = ML_FILE_TYPE_MESSAGE_QUEUE;
            } else
        #endif

        #ifdef S_TYPEISSEM
            if (S_TYPEISSEM(&s)) {
                FileType = ML_FILE_TYPE_SEMAPHORE;
            } else
        #endif

        #ifdef S_TYPEISSHM
            if (S_TYPEISSHM(&s)) {
                FileType = ML_FILE_TYPE_SHARED_MEMORY;
            } else
        #endif

            {
                FileType = ML_FILE_TYPE_UNKNOWN;
            }
        }
        Error = 0;
    } else {
        FileType = ML_FILE_TYPE_UNKNOWN;
        Error = errno;
    }
#else
    FileType = ML_FILE_TYPE_UNKNOWN;
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	 FileType_11  = FileType;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_12 );
}
{
#define MR_PROC_LABEL mercury__io__file_type_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_12 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__file_type_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_12 , Error);
	Msg0 =  (MR_String) "can\'t find file type: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_20  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_13 = (MR_Word) Message_20;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_13));
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FileType_11));
      }
  }
}

void MR_CALL 
mercury__io__remove_file_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Box Error_8;
    MR_Word IOError_9;
    MR_String Message_16;

{
#define MR_PROC_LABEL mercury__io__remove_file_4_p_0

	MR_String FileName;
	MR_Integer Error;

	FileName =  FileName_5 ;
		{

    int rc;
#ifdef MR_WIN32
    rc = _wremove(ML_utf8_to_wide(FileName));
#else
    rc = remove(FileName);
#endif
    if (rc == 0) {
        Error = 0;
    } else {
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
{
#define MR_PROC_LABEL mercury__io__remove_file_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_8 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__remove_file_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_8 , Error);
	Msg0 =  (MR_String) "remove failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_16  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_9 = (MR_Word) Message_16;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_9));
      }
    else
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_bool MR_CALL 
mercury__io__have_make_temp_directory_0_p_0(void)
{
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
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__io__make_temp_directory_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_String Dir_6;

    mercury__io__get_temp_directory_3_p_0(&Dir_6);
    mercury__io__make_temp_directory_6_p_0(Dir_6, (MR_String) "mtmp", (MR_String) "", Result_4);
  }
}

void MR_CALL 
mercury__io__make_temp_directory_6_p_0(
  MR_String Dir_7,
  MR_String Prefix_8,
  MR_String Suffix_9,
  MR_Word * Result_10)
{
  {
    MR_bool succeeded;
    MR_String DirName_12;
    MR_Box Error_13;
    MR_String Var_17;
    MR_Char Var_19;
    MR_Word V_5_26;
    MR_Word V_6_27;
    MR_Word IOError_14;
    MR_String Message_30;

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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_19 = (MR_Char) 92;
    else
      Var_19 = (MR_Char) 47;
    V_6_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      V_5_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), V_5_26, 0) = ((MR_Box) (MR_Word) (Var_19));
      MR_hl_field(MR_mktag(1), V_5_26, 1) = ((MR_Box) (V_6_27));
    }
    mercury__string__to_char_list_2_p_1(&Var_17, V_5_26);
{
#define MR_PROC_LABEL mercury__io__make_temp_directory_6_p_0

	MR_String Dir;
	MR_String Prefix;
	MR_String Suffix;
	MR_String Sep;
	MR_String DirName;
	MR_Integer Error;

	Dir =  Dir_7 ;
	Prefix =  Prefix_8 ;
	Suffix =  Suffix_9 ;
	Sep =  Var_17 ;
		{

#ifdef MR_HAVE_MKDTEMP
    int err;

    /*
    ** We cannot append Suffix because the last six chars in the argument
    ** to mkdtemp() must be XXXXXX.
    */
    DirName = MR_make_string(MR_ALLOC_ID, "%s%s%.5sXXXXXX",
        Dir, Sep, Prefix);
    DirName = mkdtemp(DirName);
    if (DirName == NULL) {
        Error = errno;
    } else {
        Error = 0;
    }
#else
    Error = ENOSYS;
    DirName = MR_make_string_const("");
#endif /* HAVE_MKDTEMP */


		;}
#undef MR_PROC_LABEL
	 DirName_12  = DirName;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_13 );
}
{
#define MR_PROC_LABEL mercury__io__make_temp_directory_6_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_13 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__make_temp_directory_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_13 , Error);
	Msg0 =  (MR_String) "error creating temporary directory: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_30  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_14 = (MR_Word) Message_30;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_14));
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DirName_12));
      }
  }
}

void MR_CALL 
mercury__io__make_temp_5_p_0(
  MR_String Dir_6,
  MR_String Prefix_7,
  MR_String * Name_8)
{
  {
    MR_Word Result_10;

    mercury__io__make_temp_file_6_p_0(Dir_6, Prefix_7, (MR_String) "", &Result_10);
    if (((MR_tag((MR_Word) Result_10)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TypeCtorInfo_16_16 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
      MR_Word Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result_10, (MR_Integer) 0)));

      {
        mercury__exception__throw_1_p_0(TypeCtorInfo_16_16, ((MR_Box) (Error_11)));
        return;
      }
    }
    else
      *Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), Result_10, (MR_Integer) 0)));
  }
}

void MR_CALL 
mercury__io__make_temp_3_p_0(
  MR_String * Name_4)
{
  {
    MR_Word Result_6;
    MR_String Dir_16;

    mercury__io__get_temp_directory_3_p_0(&Dir_16);
    mercury__io__make_temp_file_6_p_0(Dir_16, (MR_String) "mtmp", (MR_String) "", &Result_6);
    if (((MR_tag((MR_Word) Result_6)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
      MR_Word Error_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result_6, (MR_Integer) 0)));

      {
        mercury__exception__throw_1_p_0(TypeCtorInfo_11_11, ((MR_Box) (Error_7)));
        return;
      }
    }
    else
      *Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), Result_6, (MR_Integer) 0)));
  }
}

void MR_CALL 
mercury__io__make_temp_file_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_String Dir_6;

    mercury__io__get_temp_directory_3_p_0(&Dir_6);
    mercury__io__make_temp_file_6_p_0(Dir_6, (MR_String) "mtmp", (MR_String) "", Result_4);
  }
}

void MR_CALL 
mercury__io__get_temp_directory_3_p_0(
  MR_String * Dir_4)
{
  {
    MR_bool succeeded;
    MR_String Var_8;
    MR_Word Result_9;
    MR_Char V_1_17;
    MR_String Value_24;

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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      V_1_17 = (MR_Char) 92;
    else
      V_1_17 = (MR_Char) 47;
    succeeded = (V_1_17 == (MR_Char) 92);
    if (succeeded)
      Var_8 = (MR_String) "TMP";
    else
      Var_8 = (MR_String) "TMPDIR";
{
#define MR_PROC_LABEL mercury__io__get_temp_directory_3_p_0

	MR_String Var;
	MR_String Value;
	MR_bool SUCCESS_INDICATOR;

	Var =  Var_8 ;
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
	 Value_24  = Value;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      {
        Result_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Result_9, 0) = ((MR_Box) (Value_24));
      }
    else
      Result_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    if ((Result_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Char V_1_26;

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
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        V_1_26 = (MR_Char) 92;
      else
        V_1_26 = (MR_Char) 47;
      succeeded = (V_1_26 == (MR_Char) 92);
      if (succeeded)
        *Dir_4 = (MR_String) ".";
      else
        *Dir_4 = (MR_String) "/tmp";
    }
    else
      *Dir_4 = ((MR_String) (MR_hl_field(MR_mktag(1), Result_9, (MR_Integer) 0)));
  }
}

void MR_CALL 
mercury__io__make_temp_file_6_p_0(
  MR_String Dir_7,
  MR_String Prefix_8,
  MR_String Suffix_9,
  MR_Word * Result_10)
{
  {
    MR_bool succeeded;
    MR_String Name_12;
    MR_Box Error_13;
    MR_String Var_17;
    MR_Char Var_19;
    MR_Word V_5_26;
    MR_Word V_6_27;
    MR_Word IOError_14;
    MR_String Message_30;

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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_19 = (MR_Char) 92;
    else
      Var_19 = (MR_Char) 47;
    V_6_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      V_5_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), V_5_26, 0) = ((MR_Box) (MR_Word) (Var_19));
      MR_hl_field(MR_mktag(1), V_5_26, 1) = ((MR_Box) (V_6_27));
    }
    mercury__string__to_char_list_2_p_1(&Var_17, V_5_26);
{
#define MR_PROC_LABEL mercury__io__make_temp_file_6_p_0

	MR_String Dir;
	MR_String Prefix;
	MR_String Suffix;
	MR_String Sep;
	MR_String FileName;
	MR_Integer Error;

	Dir =  Dir_7 ;
	Prefix =  Prefix_8 ;
	Suffix =  Suffix_9 ;
	Sep =  Var_17 ;
		{

#ifdef MR_HAVE_MKSTEMP
    int err, fd;

    /*
    ** We cannot append Suffix because the last six chars in the argument
    ** to mkstemp() must be XXXXXX.
    */
    FileName = MR_make_string(MR_ALLOC_ID, "%s%s%.5sXXXXXX",
        Dir, Sep, Prefix);
    fd = mkstemp(FileName);
    if (fd == -1) {
        Error = errno;
    } else {
        do {
            err = close(fd);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == 0) {
            Error = 0;
        } else {
            Error = errno;
        }
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
        Error = errno;
    }  else {
        do {
            err = close(fd);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == 0) {
            Error = 0;
        } else {
            Error = errno;
        }
    }
#endif


		;}
#undef MR_PROC_LABEL
	 Name_12  = FileName;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_13 );
}
{
#define MR_PROC_LABEL mercury__io__make_temp_file_6_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_13 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__make_temp_file_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_13 , Error);
	Msg0 =  (MR_String) "error creating temporary file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_30  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_14 = (MR_Word) Message_30;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_14));
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_12));
      }
  }
}

MR_bool MR_CALL 
mercury__io__have_set_environment_var_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__have_set_environment_var_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__io__set_environment_var_4_p_0(
  MR_String Var_5,
  MR_String Value_6)
{
  {
    MR_Word Res_9;

    mercury__io__set_environment_var_5_p_0(Var_5, Value_6, &Res_9);
    if (!((Res_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word ErrorCode_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Res_9, (MR_Integer) 0)));
      MR_String Var_12 = (MR_String) ErrorCode_11;

      {
        mercury__require__error_1_p_0(Var_12);
        return;
      }
    }
  }
}

void MR_CALL 
mercury__io__set_environment_var_5_p_0(
  MR_String Var_6,
  MR_String Value_7,
  MR_Word * Res_8)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__set_environment_var_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__io__set_environment_var_5_p_0

	MR_String Var;
	MR_String Value;
	MR_bool SUCCESS_INDICATOR;

	Var =  Var_6 ;
	Value =  Value_7 ;
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
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        *Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_String Message_10;
        MR_Word Var_17;
        MR_String Var_21;

        mercury__string__append_3_p_2(Var_6, (MR_String) "\'", &Var_21);
        mercury__string__append_3_p_2((MR_String) "Could not set environment variable \140", Var_21, &Message_10);
        Var_17 = (MR_Word) Message_10;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Res_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
        }
      }
    }
    else
    {
      MR_Word Var_18 = (MR_Word) ((MR_Box) ((MR_String) "Cannot set environment variables on this platform"));

      *Res_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_5[3]);
    }
  }
}

void MR_CALL 
mercury__io__get_environment_var_4_p_0(
  MR_String Var_5,
  MR_Word * OptValue_6)
{
  {
    MR_bool succeeded;
    MR_String Value_8;

{
#define MR_PROC_LABEL mercury__io__get_environment_var_4_p_0

	MR_String Var;
	MR_String Value;
	MR_bool SUCCESS_INDICATOR;

	Var =  Var_5 ;
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
	 Value_8  = Value;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *OptValue_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Value_8));
      }
    else
      *OptValue_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
mercury__io__update_globals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__1_16;

    mercury__io__IntroducedFrom__pred__update_globals__5210__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &conv0_LambdaHeadVar__1_16);
    *wrapper_arg_1 = ((MR_Box) (conv0_LambdaHeadVar__1_16));
  }
}

void MR_CALL 
mercury__io__update_globals_3_p_0(
  MR_Word UpdatePred_4)
{
  {
    MR_Word Globals0_6;
    MR_Word TypeCtorInfo_20_20;
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
      Update_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Update_7, 0) = ((MR_Box) (&mercury__io_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Update_7, 1) = ((MR_Box) (mercury__io__update_globals_3_p_0_1));
      MR_hl_field(MR_mktag(0), Update_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Update_7, 3) = ((MR_Box) (UpdatePred_4));
      MR_hl_field(MR_mktag(0), Update_7, 4) = ((MR_Box) (Globals0_6));
    }
    TypeCtorInfo_20_20 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
    mercury__exception__try_2_p_0(TypeCtorInfo_20_20, Update_7, &UpdateResult_9);
    if (((MR_tag((MR_Word) UpdateResult_9)) == (MR_mktag((MR_Integer) 2))))
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
        mercury__exception__rethrow_1_p_0(TypeCtorInfo_20_20, UpdateResult_9);
        return;
      }
    }
    else
    {
      MR_Word Globals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), UpdateResult_9, (MR_Integer) 0)));

{
#define MR_PROC_LABEL mercury__io__update_globals_3_p_0

	MR_Word Globals;

	Globals =  Globals_10 ;
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
  MR_Word Globals_4)
{
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

	Globals =  Globals_4 ;
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
  MR_Word * Globals_4)
{
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
}

void MR_CALL 
mercury__io__set_exit_status_3_p_0(
  MR_Integer ExitStatus_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__set_exit_status_3_p_0

	MR_Integer ExitStatus;

	ExitStatus =  ExitStatus_1 ;
		{

    mercury_exit_status = (int) ExitStatus;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__get_exit_status_3_p_0(
  MR_Integer * ExitStatus_1)
{
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
}

void MR_CALL 
mercury__io__command_line_arguments_3_p_0(
  MR_Word * Args_1)
{
  {
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
	 *Args_1  = Args;
}
  }
}

void MR_CALL 
mercury__io__progname_base_4_p_0(
  MR_String DefaultName_5,
  MR_String * PrognameBase_6)
{
  {
    MR_String Progname_8;

    mercury__io__progname_4_p_0(DefaultName_5, &Progname_8);
    *PrognameBase_6 = mercury__dir__det_basename_1_f_0(Progname_8);
  }
}

void MR_CALL 
mercury__io__progname_4_p_0(
  MR_String DefaultProgname_1,
  MR_String * PrognameOut_2)
{
  {
{
#define MR_PROC_LABEL mercury__io__progname_4_p_0

	MR_String DefaultProgname;
	MR_String PrognameOut;

	DefaultProgname =  DefaultProgname_1 ;
		{

    if (MR_progname) {
        MR_make_aligned_string(PrognameOut, MR_progname);
    } else {
        PrognameOut = DefaultProgname;
    }


		;}
#undef MR_PROC_LABEL
	 *PrognameOut_2  = PrognameOut;
}
  }
}

void MR_CALL 
mercury__io__binary_output_stream_name_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Name_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;

    mercury__io__stream_name_4_p_0(Stream_5, Name_6);
  }
}

void MR_CALL 
mercury__io__binary_output_stream_name_3_p_0(
  MR_String * Name_4)
{
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
    mercury__io__stream_name_4_p_0(Stream_6, Name_4);
  }
}

void MR_CALL 
mercury__io__set_binary_output_stream_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Box NewStream_5 = (MR_Box) HeadVar__1_1;
    MR_Box OutStream_6;

{
#define MR_PROC_LABEL mercury__io__set_binary_output_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_5 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_6  = (MR_Box) OutStream;
}
    *HeadVar__2_2 = (MR_Word) OutStream_6;
  }
}

void MR_CALL 
mercury__io__stdout_binary_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
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
    *HeadVar__1_1 = (MR_Word) Stream_4;
  }
}

void MR_CALL 
mercury__io__binary_output_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
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
    *HeadVar__1_1 = (MR_Word) Stream_4;
  }
}

void MR_CALL 
mercury__io__close_binary_output_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Box Stream_4 = (MR_Box) HeadVar__1_1;
    MR_Box Error_6;

    mercury__io__maybe_delete_stream_info_3_p_0(Stream_4);
{
#define MR_PROC_LABEL mercury__io__close_binary_output_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_4 ;
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
}

void MR_CALL 
mercury__io__open_binary_append_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Integer OpenCount_8;
    MR_Box NewStream_9;
    MR_Box Error_10;
    MR_Word IOError_11;
    MR_String Message_25;

{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName =  FileName_5 ;
	Mode =  (MR_String) "ab" ;
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

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 =  (MR_String) "can\'t append to file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_25  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_11 = (MR_Word) Message_25;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_11));
      }
    else
    {
      MR_Word TypeCtorInfo_18_39;
      MR_Word TypeInfo_for_K_47;
      MR_Word Var_17 = (MR_Word) NewStream_9;
      MR_Word Var_18;
      MR_Word Var_22;
      MR_Word StreamDb0_31;
      MR_Word StreamDb_32;
      MR_Integer Var_35;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (FileName_5));
      }
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (OpenCount_8));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Var_22));
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
	 StreamDb0_31  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) NewStream_9 ;
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
	 Var_35  = Id;
}
      TypeCtorInfo_18_39 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
      TypeInfo_for_K_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__tree234__set_4_p_0(TypeInfo_for_K_47, TypeCtorInfo_18_39, ((MR_Box) (Var_35)), ((MR_Box) (Var_18)), StreamDb0_31, &StreamDb_32);
{
#define MR_PROC_LABEL mercury__io__open_binary_append_4_p_0

	MR_Word StreamDb;

	StreamDb =  StreamDb_32 ;
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
mercury__io__told_binary_2_p_0(void)
{
  {
    MR_Box NewStream_18;
    MR_Box Stream_24;
    MR_Box Error_26;

{
#define MR_PROC_LABEL mercury__io__told_binary_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout_binary;


		;}
#undef MR_PROC_LABEL
	 NewStream_18  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__told_binary_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_18 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	 Stream_24  = (MR_Box) OutStream;
}
    mercury__io__maybe_delete_stream_info_3_p_0(Stream_24);
{
#define MR_PROC_LABEL mercury__io__told_binary_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_24 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_26 );
}
    mercury__io__throw_on_error_4_p_0(Error_26, (MR_String) "error closing file: ");
  }
}

void MR_CALL 
mercury__io__tell_binary_4_p_0(
  MR_String File_5,
  MR_Word * Result_6)
{
  {
    MR_Word Result0_8;

    mercury__io__open_binary_output_4_p_0(File_5, &Result0_8);
    if (((MR_tag((MR_Word) Result0_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Msg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_11));
      }
    }
    else
    {
      MR_Word Stream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_8, (MR_Integer) 0)));
      MR_Box NewStream_18 = (MR_Box) Stream_9;
      MR_Box OutStream_19;

{
#define MR_PROC_LABEL mercury__io__tell_binary_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_18 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_19  = (MR_Box) OutStream;
}
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
}

void MR_CALL 
mercury__io__open_binary_output_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Integer OpenCount_8;
    MR_Box NewStream_9;
    MR_Box Error_10;
    MR_Word IOError_11;
    MR_String Message_25;

{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName =  FileName_5 ;
	Mode =  (MR_String) "wb" ;
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

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 =  (MR_String) "can\'t open output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_25  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_11 = (MR_Word) Message_25;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_11));
      }
    else
    {
      MR_Word TypeCtorInfo_18_39;
      MR_Word TypeInfo_for_K_47;
      MR_Word Var_17 = (MR_Word) NewStream_9;
      MR_Word Var_18;
      MR_Word Var_22;
      MR_Word StreamDb0_31;
      MR_Word StreamDb_32;
      MR_Integer Var_35;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (FileName_5));
      }
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (OpenCount_8));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Var_22));
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
	 StreamDb0_31  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) NewStream_9 ;
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
	 Var_35  = Id;
}
      TypeCtorInfo_18_39 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
      TypeInfo_for_K_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__tree234__set_4_p_0(TypeInfo_for_K_47, TypeCtorInfo_18_39, ((MR_Box) (Var_35)), ((MR_Box) (Var_18)), StreamDb0_31, &StreamDb_32);
{
#define MR_PROC_LABEL mercury__io__open_binary_output_4_p_0

	MR_Word StreamDb;

	StreamDb =  StreamDb_32 ;
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
mercury__io__binary_input_stream_name_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Name_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;

    mercury__io__stream_name_4_p_0(Stream_5, Name_6);
  }
}

void MR_CALL 
mercury__io__binary_input_stream_name_3_p_0(
  MR_String * Name_4)
{
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
    mercury__io__stream_name_4_p_0(Stream_6, Name_4);
  }
}

void MR_CALL 
mercury__io__stdin_binary_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
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
    *HeadVar__1_1 = (MR_Word) Stream_4;
  }
}

void MR_CALL 
mercury__io__set_binary_input_stream_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Box NewStream_5 = (MR_Box) HeadVar__1_1;
    MR_Box OutStream_6;

{
#define MR_PROC_LABEL mercury__io__set_binary_input_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_5 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_6  = (MR_Box) OutStream;
}
    *HeadVar__2_2 = (MR_Word) OutStream_6;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
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
    *HeadVar__1_1 = (MR_Word) Stream_4;
  }
}

void MR_CALL 
mercury__io__close_binary_input_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Box Stream_4 = (MR_Box) HeadVar__1_1;
    MR_Box Error_6;

    mercury__io__maybe_delete_stream_info_3_p_0(Stream_4);
{
#define MR_PROC_LABEL mercury__io__close_binary_input_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_4 ;
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
}

void MR_CALL 
mercury__io__seen_binary_2_p_0(void)
{
  {
    MR_Box NewStream_18;
    MR_Box Stream_24;
    MR_Box Error_26;

{
#define MR_PROC_LABEL mercury__io__seen_binary_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin_binary;


		;}
#undef MR_PROC_LABEL
	 NewStream_18  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__seen_binary_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_18 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	 Stream_24  = (MR_Box) OutStream;
}
    mercury__io__maybe_delete_stream_info_3_p_0(Stream_24);
{
#define MR_PROC_LABEL mercury__io__seen_binary_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_24 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_26 );
}
    mercury__io__throw_on_error_4_p_0(Error_26, (MR_String) "error closing file: ");
  }
}

void MR_CALL 
mercury__io__see_binary_4_p_0(
  MR_String File_5,
  MR_Word * Result_6)
{
  {
    MR_Word Result0_8;

    mercury__io__open_binary_input_4_p_0(File_5, &Result0_8);
    if (((MR_tag((MR_Word) Result0_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_11));
      }
    }
    else
    {
      MR_Word Stream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_8, (MR_Integer) 0)));
      MR_Box NewStream_18 = (MR_Box) Stream_9;
      MR_Box OutStream_19;

{
#define MR_PROC_LABEL mercury__io__see_binary_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_18 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_19  = (MR_Box) OutStream;
}
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
}

void MR_CALL 
mercury__io__open_binary_input_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Integer OpenCount_8;
    MR_Box NewStream_9;
    MR_Box Error_10;
    MR_Word IOError_11;
    MR_String Message_25;

{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName =  FileName_5 ;
	Mode =  (MR_String) "rb" ;
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

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 =  (MR_String) "can\'t open input file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_25  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_11 = (MR_Word) Message_25;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_11));
      }
    else
    {
      MR_Word TypeCtorInfo_18_39;
      MR_Word TypeInfo_for_K_47;
      MR_Word Var_17 = (MR_Word) NewStream_9;
      MR_Word Var_18;
      MR_Word Var_22;
      MR_Word StreamDb0_31;
      MR_Word StreamDb_32;
      MR_Integer Var_35;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (FileName_5));
      }
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (OpenCount_8));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Var_22));
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
	 StreamDb0_31  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) NewStream_9 ;
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
	 Var_35  = Id;
}
      TypeCtorInfo_18_39 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
      TypeInfo_for_K_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__tree234__set_4_p_0(TypeInfo_for_K_47, TypeCtorInfo_18_39, ((MR_Box) (Var_35)), ((MR_Box) (Var_18)), StreamDb0_31, &StreamDb_32);
{
#define MR_PROC_LABEL mercury__io__open_binary_input_4_p_0

	MR_Word StreamDb;

	StreamDb =  StreamDb_32 ;
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
mercury__io__binary_output_stream_offset_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Offset_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__binary_output_stream_offset_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Offset;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
		{

    /* XXX should check if the stream is tellable */
    if (MR_IS_FILE_STREAM(*Stream)) {
        Offset = ftell(MR_file(*Stream));
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
}

void MR_CALL 
mercury__io__binary_input_stream_offset_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Offset_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_offset_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Offset;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
		{

    /* XXX should check if the stream is tellable */
    if (MR_IS_FILE_STREAM(*Stream)) {
        Offset = ftell(MR_file(*Stream));
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
}

void MR_CALL 
mercury__io__seek_binary_output_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Whence_7,
  MR_Integer Offset_8)
{
  {
    MR_Box Stream_6 = (MR_Box) HeadVar__1_1;
    MR_Integer Flag_10;
    MR_Box Error_11;

    switch (Whence_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Flag_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        Flag_10 = (MR_Integer) 2;
        break;
      case (MR_Integer) 0:
        Flag_10 = (MR_Integer) 0;
        break;
    }
{
#define MR_PROC_LABEL mercury__io__seek_binary_output_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	MR_Integer Off;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_6 ;
	Flag =  Flag_10 ;
	Off =  Offset_8 ;
		{

    static const int seek_flags[] = { SEEK_SET, SEEK_CUR, SEEK_END };

    /* XXX check if the stream is seekable */
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (fseek(MR_file(*Stream), Off, seek_flags[Flag]) < 0) {
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
}

void MR_CALL 
mercury__io__seek_binary_input_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Whence_7,
  MR_Integer Offset_8)
{
  {
    MR_Box Stream_6 = (MR_Box) HeadVar__1_1;
    MR_Integer Flag_10;
    MR_Box Error_11;

    switch (Whence_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Flag_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        Flag_10 = (MR_Integer) 2;
        break;
      case (MR_Integer) 0:
        Flag_10 = (MR_Integer) 0;
        break;
    }
{
#define MR_PROC_LABEL mercury__io__seek_binary_input_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	MR_Integer Off;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_6 ;
	Flag =  Flag_10 ;
	Off =  Offset_8 ;
		{

    static const int seek_flags[] = { SEEK_SET, SEEK_CUR, SEEK_END };

    /* XXX check if the stream is seekable */
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (fseek(MR_file(*Stream), Off, seek_flags[Flag]) < 0) {
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
}

void MR_CALL 
mercury__io__flush_binary_output_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Box Stream_4 = (MR_Box) HeadVar__1_1;
    MR_Box Error_6;

{
#define MR_PROC_LABEL mercury__io__flush_binary_output_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_4 ;
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
}

void MR_CALL 
mercury__io__flush_binary_output_2_p_0(void)
{
  {
    MR_Box Stream_16;
    MR_Box Error_18;

{
#define MR_PROC_LABEL mercury__io__flush_binary_output_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 Stream_16  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__flush_binary_output_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_16 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_18 );
}
    mercury__io__throw_on_error_4_p_0(Error_18, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_bitmap_5_p_0(
  MR_Box Bitmap_6,
  MR_Integer Start_7,
  MR_Integer NumBytes_8)
{
  {
    MR_Word Stream_10;
    MR_Box Stream_17;

{
#define MR_PROC_LABEL mercury__io__write_bitmap_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 Stream_17  = (MR_Box) Stream;
}
    Stream_10 = (MR_Word) Stream_17;
    mercury__io__write_bitmap_6_p_0(Stream_10, Bitmap_6, Start_7, NumBytes_8);
  }
}

void MR_CALL 
mercury__io__write_bitmap_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Box Bitmap_8,
  MR_Integer Start_9,
  MR_Integer NumBytes_10)
{
  {
    MR_bool succeeded = (NumBytes_10 == (MR_Integer) 0);
    MR_Box Stream_7 = (MR_Box) HeadVar__1_1;

    if (!(succeeded))
    {
      MR_Integer Var_16;
      MR_Integer Var_17;
      MR_Integer Var_18;

      succeeded = (NumBytes_10 > (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = mercury__bitmap__byte_in_range_2_p_0(Bitmap_8, Start_9);
        if (succeeded)
        {
          Var_17 = (Start_9 + NumBytes_10);
          Var_18 = (MR_Integer) 1;
          Var_16 = (Var_17 - Var_18);
          succeeded = mercury__bitmap__byte_in_range_2_p_0(Bitmap_8, Var_16);
        }
      }
      if (succeeded)
      {
        MR_Box Error_12;

{
#define MR_PROC_LABEL mercury__io__write_bitmap_6_p_0

	MercuryFilePtr Stream;
	MR_BitmapPtr Bitmap;
	MR_Integer Start;
	MR_Integer Length;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_7 ;
	Bitmap = (MR_BitmapPtr) Bitmap_8 ;
	Start =  Start_9 ;
	Length =  NumBytes_10 ;
		{

    MR_Integer bytes_written =
        (MR_Integer)MR_WRITE(*Stream, Bitmap->elements + Start, Length);
    if (bytes_written != Length) {
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
      else
      {
        MR_Integer Var_22 = (Start_9 * (MR_Integer) 8);
        MR_Integer Var_23 = (NumBytes_10 * (MR_Integer) 8);

        {
          mercury__bitmap__throw_bounds_error_4_p_0(Bitmap_8, (MR_String) "io.write_bitmap", Var_22, Var_23);
          return;
        }
      }
    }
  }
}

void MR_CALL 
mercury__io__write_bitmap_3_p_0(
  MR_Box Bitmap_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_13;

{
#define MR_PROC_LABEL mercury__io__write_bitmap_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 Stream_13  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_13;
    mercury__io__write_bitmap_4_p_0(Stream_6, Bitmap_4);
  }
}

void MR_CALL 
mercury__io__write_bitmap_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Box Bitmap_6)
{
  {
    MR_bool succeeded;
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Integer NumBytes_8;

    succeeded = mercury__bitmap__num_bytes_1_f_0(Bitmap_6, &NumBytes_8);
    if (succeeded)
    {
      MR_Box Error_9;

{
#define MR_PROC_LABEL mercury__io__write_bitmap_4_p_0

	MercuryFilePtr Stream;
	MR_BitmapPtr Bitmap;
	MR_Integer Start;
	MR_Integer Length;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	Bitmap = (MR_BitmapPtr) Bitmap_6 ;
	Start =  (MR_Integer) 0 ;
	Length =  NumBytes_8 ;
		{

    MR_Integer bytes_written =
        (MR_Integer)MR_WRITE(*Stream, Bitmap->elements + Start, Length);
    if (bytes_written != Length) {
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
mercury__io__write_binary_uint32_be_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t UInt32_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_be_4_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	U32 =  UInt32_6 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U32 = MR_uint32_reverse_bytes(U32);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
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
}

void MR_CALL 
mercury__io__write_binary_uint32_be_3_p_0(
  uint32_t UInt32_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_be_3_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	U32 =  UInt32_4 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U32 = MR_uint32_reverse_bytes(U32);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
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
}

void MR_CALL 
mercury__io__write_binary_uint32_le_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t UInt32_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_le_4_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	U32 =  UInt32_6 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U32 = MR_uint32_reverse_bytes(U32);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
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
}

void MR_CALL 
mercury__io__write_binary_uint32_le_3_p_0(
  uint32_t UInt32_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_le_3_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	U32 =  UInt32_4 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U32 = MR_uint32_reverse_bytes(U32);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
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
}

void MR_CALL 
mercury__io__write_binary_uint32_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t UInt32_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_4_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	U32 =  UInt32_6 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
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
}

void MR_CALL 
mercury__io__write_binary_uint32_3_p_0(
  uint32_t UInt32_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint32_3_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	U32 =  UInt32_4 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
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
}

void MR_CALL 
mercury__io__write_binary_int32_be_4_p_0(
  MR_Word Stream_5,
  int32_t Int32_6)
{
  {
    uint32_t UInt32_8;
    MR_Box Stream_15;
    MR_Box Error_17;

{
#define MR_PROC_LABEL mercury__io__write_binary_int32_be_4_p_0

	int32_t I32;
	uint32_t U32;

	I32 =  Int32_6 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	 UInt32_8  = U32;
}
    Stream_15 = (MR_Box) Stream_5;
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_be_4_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_15 ;
	U32 =  UInt32_8 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U32 = MR_uint32_reverse_bytes(U32);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_17 );
}
    mercury__io__throw_on_error_4_p_0(Error_17, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_binary_int32_be_3_p_0(
  int32_t Int32_4)
{
  {
    uint32_t UInt32_6;
    MR_Box Stream_25;
    MR_Box Error_27;

{
#define MR_PROC_LABEL mercury__io__write_binary_int32_be_3_p_0

	int32_t I32;
	uint32_t U32;

	I32 =  Int32_4 ;
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
	 Stream_25  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_be_3_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_25 ;
	U32 =  UInt32_6 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U32 = MR_uint32_reverse_bytes(U32);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_27 );
}
    mercury__io__throw_on_error_4_p_0(Error_27, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_binary_int32_le_4_p_0(
  MR_Word Stream_5,
  int32_t Int32_6)
{
  {
    uint32_t UInt32_8;
    MR_Box Stream_15;
    MR_Box Error_17;

{
#define MR_PROC_LABEL mercury__io__write_binary_int32_le_4_p_0

	int32_t I32;
	uint32_t U32;

	I32 =  Int32_6 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	 UInt32_8  = U32;
}
    Stream_15 = (MR_Box) Stream_5;
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_le_4_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_15 ;
	U32 =  UInt32_8 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U32 = MR_uint32_reverse_bytes(U32);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_17 );
}
    mercury__io__throw_on_error_4_p_0(Error_17, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_binary_int32_le_3_p_0(
  int32_t Int32_4)
{
  {
    uint32_t UInt32_6;
    MR_Box Stream_25;
    MR_Box Error_27;

{
#define MR_PROC_LABEL mercury__io__write_binary_int32_le_3_p_0

	int32_t I32;
	uint32_t U32;

	I32 =  Int32_4 ;
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
	 Stream_25  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_le_3_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_25 ;
	U32 =  UInt32_6 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U32 = MR_uint32_reverse_bytes(U32);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_27 );
}
    mercury__io__throw_on_error_4_p_0(Error_27, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_binary_int32_4_p_0(
  MR_Word Stream_5,
  int32_t Int32_6)
{
  {
    uint32_t UInt32_8;
    MR_Box Stream_15;
    MR_Box Error_17;

{
#define MR_PROC_LABEL mercury__io__write_binary_int32_4_p_0

	int32_t I32;
	uint32_t U32;

	I32 =  Int32_6 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	 UInt32_8  = U32;
}
    Stream_15 = (MR_Box) Stream_5;
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_4_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_15 ;
	U32 =  UInt32_8 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_17 );
}
    mercury__io__throw_on_error_4_p_0(Error_17, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_binary_int32_3_p_0(
  int32_t Int32_4)
{
  {
    uint32_t UInt32_6;
    MR_Box Stream_25;
    MR_Box Error_27;

{
#define MR_PROC_LABEL mercury__io__write_binary_int32_3_p_0

	int32_t I32;
	uint32_t U32;

	I32 =  Int32_4 ;
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
	 Stream_25  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int32_3_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_25 ;
	U32 =  UInt32_6 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *)(&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_27 );
}
    mercury__io__throw_on_error_4_p_0(Error_27, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_binary_uint16_be_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t UInt16_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_be_4_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	U16 =  UInt16_6 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U16 = MR_uint16_reverse_bytes(U16);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
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
}

void MR_CALL 
mercury__io__write_binary_uint16_be_3_p_0(
  uint16_t UInt16_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_be_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_be_3_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	U16 =  UInt16_4 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U16 = MR_uint16_reverse_bytes(U16);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
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
}

void MR_CALL 
mercury__io__write_binary_uint16_le_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t UInt16_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_le_4_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	U16 =  UInt16_6 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U16 = MR_uint16_reverse_bytes(U16);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
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
}

void MR_CALL 
mercury__io__write_binary_uint16_le_3_p_0(
  uint16_t UInt16_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_le_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_le_3_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	U16 =  UInt16_4 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U16 = MR_uint16_reverse_bytes(U16);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
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
}

void MR_CALL 
mercury__io__write_binary_uint16_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t UInt16_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_4_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	U16 =  UInt16_6 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
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
}

void MR_CALL 
mercury__io__write_binary_uint16_3_p_0(
  uint16_t UInt16_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint16_3_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	U16 =  UInt16_4 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
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
}

void MR_CALL 
mercury__io__write_binary_int16_be_4_p_0(
  MR_Word Stream_5,
  int16_t Int16_6)
{
  {
    uint16_t UInt16_8;
    MR_Box Stream_15;
    MR_Box Error_17;

{
#define MR_PROC_LABEL mercury__io__write_binary_int16_be_4_p_0

	int16_t I16;
	uint16_t U16;

	I16 =  Int16_6 ;
		{

    U16 = (uint16_t) I16;


		;}
#undef MR_PROC_LABEL
	 UInt16_8  = U16;
}
    Stream_15 = (MR_Box) Stream_5;
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_be_4_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_15 ;
	U16 =  UInt16_8 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U16 = MR_uint16_reverse_bytes(U16);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_17 );
}
    mercury__io__throw_on_error_4_p_0(Error_17, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_binary_int16_be_3_p_0(
  int16_t Int16_4)
{
  {
    uint16_t UInt16_6;
    MR_Box Stream_25;
    MR_Box Error_27;

{
#define MR_PROC_LABEL mercury__io__write_binary_int16_be_3_p_0

	int16_t I16;
	uint16_t U16;

	I16 =  Int16_4 ;
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
	 Stream_25  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_be_3_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_25 ;
	U16 =  UInt16_6 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U16 = MR_uint16_reverse_bytes(U16);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_27 );
}
    mercury__io__throw_on_error_4_p_0(Error_27, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_binary_int16_le_4_p_0(
  MR_Word Stream_5,
  int16_t Int16_6)
{
  {
    uint16_t UInt16_8;
    MR_Box Stream_15;
    MR_Box Error_17;

{
#define MR_PROC_LABEL mercury__io__write_binary_int16_le_4_p_0

	int16_t I16;
	uint16_t U16;

	I16 =  Int16_6 ;
		{

    U16 = (uint16_t) I16;


		;}
#undef MR_PROC_LABEL
	 UInt16_8  = U16;
}
    Stream_15 = (MR_Box) Stream_5;
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_le_4_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_15 ;
	U16 =  UInt16_8 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U16 = MR_uint16_reverse_bytes(U16);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_17 );
}
    mercury__io__throw_on_error_4_p_0(Error_17, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_binary_int16_le_3_p_0(
  int16_t Int16_4)
{
  {
    uint16_t UInt16_6;
    MR_Box Stream_25;
    MR_Box Error_27;

{
#define MR_PROC_LABEL mercury__io__write_binary_int16_le_3_p_0

	int16_t I16;
	uint16_t U16;

	I16 =  Int16_4 ;
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
	 Stream_25  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_le_3_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_25 ;
	U16 =  UInt16_6 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U16 = MR_uint16_reverse_bytes(U16);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_27 );
}
    mercury__io__throw_on_error_4_p_0(Error_27, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_binary_int16_4_p_0(
  MR_Word Stream_5,
  int16_t Int16_6)
{
  {
    uint16_t UInt16_8;
    MR_Box Stream_15;
    MR_Box Error_17;

{
#define MR_PROC_LABEL mercury__io__write_binary_int16_4_p_0

	int16_t I16;
	uint16_t U16;

	I16 =  Int16_6 ;
		{

    U16 = (uint16_t) I16;


		;}
#undef MR_PROC_LABEL
	 UInt16_8  = U16;
}
    Stream_15 = (MR_Box) Stream_5;
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_4_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_15 ;
	U16 =  UInt16_8 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_17 );
}
    mercury__io__throw_on_error_4_p_0(Error_17, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_binary_int16_3_p_0(
  int16_t Int16_4)
{
  {
    uint16_t UInt16_6;
    MR_Box Stream_25;
    MR_Box Error_27;

{
#define MR_PROC_LABEL mercury__io__write_binary_int16_3_p_0

	int16_t I16;
	uint16_t U16;

	I16 =  Int16_4 ;
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
	 Stream_25  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int16_3_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_25 ;
	U16 =  UInt16_6 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *)(&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_27 );
}
    mercury__io__throw_on_error_4_p_0(Error_27, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_binary_uint8_4_p_0(
  MR_Word HeadVar__1_1,
  uint8_t UInt8_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Integer Int_8;
    MR_Box Error_9;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint8_4_p_0

	uint8_t U8;
	MR_Integer I;

	U8 =  UInt8_6 ;
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

	Stream = (MercuryFilePtr) Stream_5 ;
	Byte =  Int_8 ;
		{

    /* call putc with a strictly non-negative byte-sized integer */
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
}

void MR_CALL 
mercury__io__write_binary_uint8_3_p_0(
  uint8_t UInt8_4)
{
  {
    MR_Box Stream_19;
    MR_Integer Int_21;
    MR_Box Error_22;

{
#define MR_PROC_LABEL mercury__io__write_binary_uint8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint8_3_p_0

	uint8_t U8;
	MR_Integer I;

	U8 =  UInt8_4 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	 Int_21  = I;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_uint8_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	Byte =  Int_21 ;
		{

    /* call putc with a strictly non-negative byte-sized integer */
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_22 );
}
    mercury__io__throw_on_error_4_p_0(Error_22, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_binary_int8_4_p_0(
  MR_Word HeadVar__1_1,
  int8_t Int8_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    uint8_t UInt8_8;
    MR_Integer Int_9;
    MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__write_binary_int8_4_p_0

	int8_t I8;
	uint8_t U8;

	I8 =  Int8_6 ;
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

	U8 =  UInt8_8 ;
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

	Stream = (MercuryFilePtr) Stream_5 ;
	Byte =  Int_9 ;
		{

    /* call putc with a strictly non-negative byte-sized integer */
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
}

void MR_CALL 
mercury__io__write_binary_int8_3_p_0(
  int8_t Int8_4)
{
  {
    MR_Box Stream_19;
    uint8_t UInt8_21;
    MR_Integer Int_22;
    MR_Box Error_23;

{
#define MR_PROC_LABEL mercury__io__write_binary_int8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int8_3_p_0

	int8_t I8;
	uint8_t U8;

	I8 =  Int8_4 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	 UInt8_21  = U8;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int8_3_p_0

	uint8_t U8;
	MR_Integer I;

	U8 =  UInt8_21 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	 Int_22  = I;
}
{
#define MR_PROC_LABEL mercury__io__write_binary_int8_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	Byte =  Int_22 ;
		{

    /* call putc with a strictly non-negative byte-sized integer */
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_23 );
}
    mercury__io__throw_on_error_4_p_0(Error_23, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_byte_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Byte_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_byte_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	Byte =  Byte_6 ;
		{

    /* call putc with a strictly non-negative byte-sized integer */
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
}

void MR_CALL 
mercury__io__write_byte_3_p_0(
  MR_Integer Byte_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_byte_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_byte_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	Byte =  Byte_4 ;
		{

    /* call putc with a strictly non-negative byte-sized integer */
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
}

void MR_CALL 
mercury__io__write_binary_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box Term_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_14;

{
#define MR_PROC_LABEL mercury__io__write_binary_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	 Stream_14  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_14;
    mercury__io__write_binary_4_p_0(TypeInfo_for_T_11, Stream_6, Term_4);
  }
}

void MR_CALL 
mercury__io__write_binary_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Box Term_6)
{
  {
    MR_Word TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_24 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Word Var_10 = (MR_Word) Stream_5;
    MR_Word V_10_30;
    MR_Box Stream_34;
    MR_Box Error_36;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_15, Term_6, &V_10_30);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeClassInfo_for_writer_23, TypeClassInfo_for_writer_24, Var_10, (MR_Integer) 1, V_10_30);
    Stream_34 = (MR_Box) Var_10;
{
#define MR_PROC_LABEL mercury__io__write_binary_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_34 ;
	Message =  (MR_String) ".\n" ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_36 );
}
    mercury__io__throw_on_error_4_p_0(Error_36, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__putback_byte_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Character_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Word Ok_8;

{
#define MR_PROC_LABEL mercury__io__putback_byte_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Character;
	MR_Word Ok;

	Stream = (MercuryFilePtr) Stream_5 ;
	Character =  Character_6 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, Character) == EOF) {
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
          MR_Word TypeCtorInfo_14_14 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
          MR_Word Var_12 = (MR_Word) ((MR_Box) ((MR_String) "failed to put back byte"));

          {
            mercury__exception__throw_1_p_0(TypeCtorInfo_14_14, ((MR_Box) (Var_12)));
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__putback_byte_3_p_0(
  MR_Integer Char_4)
{
  {
    MR_Box Stream_19;
    MR_Word Ok_21;

{
#define MR_PROC_LABEL mercury__io__putback_byte_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__putback_byte_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Character;
	MR_Word Ok;

	Stream = (MercuryFilePtr) Stream_19 ;
	Character =  Char_4 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, Character) == EOF) {
        Ok = MR_FALSE;
    } else {
        Ok = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	 Ok_21  = Ok;
}
    switch (Ok_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_14_25 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
          MR_Word Var_23 = (MR_Word) ((MR_Box) ((MR_String) "failed to put back byte"));

          {
            mercury__exception__throw_1_p_0(TypeCtorInfo_14_25, ((MR_Box) (Var_23)));
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_1(
  MR_Word TypeInfo_for_T_17,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  {
    MR_Word ShouldReduce_12;

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
	 ShouldReduce_12  = ShouldReduce;
}
    switch (ShouldReduce_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1(TypeInfo_for_T_17, Stream_7, Pred_8, T0_9, Res_10);
        break;
      case (MR_Integer) 1:
        mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_1(TypeInfo_for_T_17, Stream_7, Pred_8, T0_9, Res_10);
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  {
    MR_Word ShouldReduce_12;

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
	 ShouldReduce_12  = ShouldReduce;
}
    switch (ShouldReduce_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0(TypeInfo_for_T_17, Stream_7, Pred_8, T0_9, Res_10);
        break;
      case (MR_Integer) 1:
        mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_0(TypeInfo_for_T_17, Stream_7, Pred_8, T0_9, Res_10);
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_6_p_1(
  MR_Word TypeInfo_for_T_17,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  {
    MR_Word ShouldReduce_12;

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
	 ShouldReduce_12  = ShouldReduce;
}
    switch (ShouldReduce_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__binary_input_stream_foldl2_io_plain_6_p_1(TypeInfo_for_T_17, Stream_7, Pred_8, T0_9, Res_10);
        break;
      case (MR_Integer) 1:
        mercury__io__binary_input_stream_foldl2_io_chunk_6_p_1(TypeInfo_for_T_17, Stream_7, Pred_8, T0_9, Res_10);
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  {
    MR_Word ShouldReduce_12;

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
	 ShouldReduce_12  = ShouldReduce;
}
    switch (ShouldReduce_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__binary_input_stream_foldl2_io_plain_6_p_0(TypeInfo_for_T_17, Stream_7, Pred_8, T0_9, Res_10);
        break;
      case (MR_Integer) 1:
        mercury__io__binary_input_stream_foldl2_io_chunk_6_p_0(TypeInfo_for_T_17, Stream_7, Pred_8, T0_9, Res_10);
        break;
    }
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_5_p_1(
  MR_Word Stream_6,
  MR_Word Pred_7,
  MR_Word * Res_8)
{
  {
    MR_Word ShouldReduce_10;

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
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_io_5_p_0(
  MR_Word Stream_6,
  MR_Word Pred_7,
  MR_Word * Res_8)
{
  {
    MR_Word ShouldReduce_10;

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
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  {
    MR_Word Stream_10;
    MR_Box Stream_18;
    MR_Word ShouldReduce_28;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_18  = (MR_Box) Stream;
}
    Stream_10 = (MR_Word) Stream_18;
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
	 ShouldReduce_28  = ShouldReduce;
}
    switch (ShouldReduce_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
        break;
      case (MR_Integer) 1:
        mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_1(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
        break;
    }
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
    mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_1(TypeInfo_for_T_22, (MR_Integer) 1000, Stream_7, Pred_8, T0_9, &InnerRes_12);
    switch (MR_tag((MR_Word) InnerRes_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box T_13 = (MR_hl_field(MR_mktag(0), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T_13;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 1)));
          MR_Box T_21 = (MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    if (succeeded)
    {
      MR_Word ByteResult_14;
      MR_Word Result0_33;
      MR_Integer Byte_34;
      MR_Box Error_35;
      MR_Box Stream_46 = (MR_Box) Stream_9;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_1

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_46 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_33  = Result;
	 Byte_34  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_35 );
}
      switch (Result0_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 2:
          {
            MR_String Msg_36;
            MR_Word Var_40;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_35 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_36  = Msg;
}
            Var_40 = (MR_Word) Msg_36;
            {
              ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ByteResult_14, 0) = ((MR_Box) (Var_40));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ByteResult_14, 0) = ((MR_Box) (Byte_34));
          }
          break;
      }
      switch (MR_tag((MR_Word) ByteResult_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Res_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T0_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ByteResult_14, (MR_Integer) 0)));
            MR_Word Continue_16;
            MR_Box T1_17;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1)));
            MR_Box conv2_Continue_16;
            MR_Box conv1_STATE_VARIABLE_IO_23_23;

            func_0(((MR_Box) Pred_10), ((MR_Box) (Byte_15)), &conv2_Continue_16, T0_11, &T1_17, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
            Continue_16 = ((MR_Word) conv2_Continue_16);
            switch (Continue_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *Res_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = T1_17;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Var_24 = (Left_8 - (MR_Integer) 1);
                  MR_Integer next_value_of_Left_8 = Var_24;
                  MR_Box next_value_of_T0_11 = T1_17;

                  // direct tailcall eliminated
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
            MR_Word Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ByteResult_14, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Res_12 = base;
        MR_hl_field(MR_mktag(2), base, 0) = T0_11;
      }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1(
  MR_Word TypeInfo_for_T_22,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_12;
    MR_Word Result0_28;
    MR_Integer Byte_29;
    MR_Box Error_30;
    MR_Box Stream_41 = (MR_Box) Stream_7;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_41 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_28  = Result;
	 Byte_29  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_30 );
}
    switch (Result0_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_31;
          MR_Word Var_35;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_30 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_31  = Msg;
}
          Var_35 = (MR_Word) Msg_31;
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_35));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_29));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0)));
          MR_Word Continue_14;
          MR_Box T1_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Box conv2_Continue_14;
          MR_Box conv1_STATE_VARIABLE_IO_20_20;

          func_0(((MR_Box) Pred_8), ((MR_Box) (Byte_13)), &conv2_Continue_14, T0_9, &T1_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
          Continue_14 = ((MR_Word) conv2_Continue_14);
          switch (Continue_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *Res_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = T1_15;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box next_value_of_T0_9 = T1_15;

                // direct tailcall eliminated
                T0_9 = next_value_of_T0_9;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
  MR_Word TypeInfo_for_T_15,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  {
    MR_Word Stream_10;
    MR_Box Stream_18;
    MR_Word ShouldReduce_28;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_18  = (MR_Box) Stream;
}
    Stream_10 = (MR_Word) Stream_18;
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
	 ShouldReduce_28  = ShouldReduce;
}
    switch (ShouldReduce_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
        break;
      case (MR_Integer) 1:
        mercury__io__binary_input_stream_foldl2_io_maybe_stop_chunk_6_p_0(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
        break;
    }
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
    mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_0(TypeInfo_for_T_22, (MR_Integer) 1000, Stream_7, Pred_8, T0_9, &InnerRes_12);
    switch (MR_tag((MR_Word) InnerRes_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box T_13 = (MR_hl_field(MR_mktag(0), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T_13;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 1)));
          MR_Box T_21 = (MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    if (succeeded)
    {
      MR_Word ByteResult_14;
      MR_Word Result0_33;
      MR_Integer Byte_34;
      MR_Box Error_35;
      MR_Box Stream_46 = (MR_Box) Stream_9;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_46 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_33  = Result;
	 Byte_34  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_35 );
}
      switch (Result0_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 2:
          {
            MR_String Msg_36;
            MR_Word Var_40;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_inner_7_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_35 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_36  = Msg;
}
            Var_40 = (MR_Word) Msg_36;
            {
              ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ByteResult_14, 0) = ((MR_Box) (Var_40));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ByteResult_14, 0) = ((MR_Box) (Byte_34));
          }
          break;
      }
      switch (MR_tag((MR_Word) ByteResult_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Res_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T0_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ByteResult_14, (MR_Integer) 0)));
            MR_Word Continue_16;
            MR_Box T1_17;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1)));
            MR_Box conv2_Continue_16;
            MR_Box conv1_STATE_VARIABLE_IO_23_23;

            func_0(((MR_Box) Pred_10), ((MR_Box) (Byte_15)), &conv2_Continue_16, T0_11, &T1_17, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
            Continue_16 = ((MR_Word) conv2_Continue_16);
            switch (Continue_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *Res_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = T1_17;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Var_24 = (Left_8 - (MR_Integer) 1);
                  MR_Integer next_value_of_Left_8 = Var_24;
                  MR_Box next_value_of_T0_11 = T1_17;

                  // direct tailcall eliminated
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
            MR_Word Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ByteResult_14, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Res_12 = base;
        MR_hl_field(MR_mktag(2), base, 0) = T0_11;
      }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_12;
    MR_Word Result0_28;
    MR_Integer Byte_29;
    MR_Box Error_30;
    MR_Box Stream_41 = (MR_Box) Stream_7;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_41 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_28  = Result;
	 Byte_29  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_30 );
}
    switch (Result0_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_31;
          MR_Word Var_35;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_maybe_stop_plain_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_30 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_31  = Msg;
}
          Var_35 = (MR_Word) Msg_31;
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_35));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_29));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0)));
          MR_Word Continue_14;
          MR_Box T1_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Box conv2_Continue_14;
          MR_Box conv1_STATE_VARIABLE_IO_20_20;

          func_0(((MR_Box) Pred_8), ((MR_Box) (Byte_13)), &conv2_Continue_14, T0_9, &T1_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
          Continue_14 = ((MR_Word) conv2_Continue_14);
          switch (Continue_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *Res_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = T1_15;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box next_value_of_T0_9 = T1_15;

                // direct tailcall eliminated
                T0_9 = next_value_of_T0_9;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
mercury__io__binary_input_stream_foldl2_io_5_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  {
    MR_Word Stream_10;
    MR_Box Stream_18;
    MR_Word ShouldReduce_28;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_18  = (MR_Box) Stream;
}
    Stream_10 = (MR_Word) Stream_18;
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
	 ShouldReduce_28  = ShouldReduce;
}
    switch (ShouldReduce_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__binary_input_stream_foldl2_io_plain_6_p_1(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
        break;
      case (MR_Integer) 1:
        mercury__io__binary_input_stream_foldl2_io_chunk_6_p_1(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
        break;
    }
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
    mercury__io__binary_input_stream_foldl2_io_inner_7_p_1(TypeInfo_for_T_22, (MR_Integer) 1000, Stream_7, Pred_8, T0_9, &InnerRes_12);
    switch (MR_tag((MR_Word) InnerRes_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box T_13 = (MR_hl_field(MR_mktag(0), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T_13;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 1)));
          MR_Box T_21 = (MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    if (succeeded)
    {
      MR_Word ByteResult_14;
      MR_Word Result0_32;
      MR_Integer Byte_33;
      MR_Box Error_34;
      MR_Box Stream_45 = (MR_Box) Stream_9;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_1

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_45 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_32  = Result;
	 Byte_33  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_34 );
}
      switch (Result0_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 2:
          {
            MR_String Msg_35;
            MR_Word Var_39;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_34 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_35  = Msg;
}
            Var_39 = (MR_Word) Msg_35;
            {
              ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ByteResult_14, 0) = ((MR_Box) (Var_39));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ByteResult_14, 0) = ((MR_Box) (Byte_33));
          }
          break;
      }
      switch (MR_tag((MR_Word) ByteResult_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Res_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T0_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ByteResult_14, (MR_Integer) 0)));
            MR_Box T1_16;
            MR_Integer Var_23;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1)));
            MR_Box conv1_STATE_VARIABLE_IO_22_22;
            MR_Integer next_value_of_Left_8;
            MR_Box next_value_of_T0_11;

            func_0(((MR_Box) Pred_10), ((MR_Box) (Byte_15)), T0_11, &T1_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_22_22);
            Var_23 = (Left_8 - (MR_Integer) 1);
            // direct tailcall eliminated
            next_value_of_Left_8 = Var_23;
            next_value_of_T0_11 = T1_16;
            Left_8 = next_value_of_Left_8;
            T0_11 = next_value_of_T0_11;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ByteResult_14, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Res_12 = base;
        MR_hl_field(MR_mktag(2), base, 0) = T0_11;
      }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_plain_6_p_1(
  MR_Word TypeInfo_for_T_21,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_12;
    MR_Word Result0_27;
    MR_Integer Byte_28;
    MR_Box Error_29;
    MR_Box Stream_40 = (MR_Box) Stream_7;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_1

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_40 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_27  = Result;
	 Byte_28  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_29 );
}
    switch (Result0_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_30;
          MR_Word Var_34;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_29 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_30  = Msg;
}
          Var_34 = (MR_Word) Msg_30;
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_34));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_28));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Box conv1_STATE_VARIABLE_IO_19_19;
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) Pred_8), ((MR_Box) (Byte_13)), T0_9, &T1_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
          // direct tailcall eliminated
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
  MR_Word TypeInfo_for_T_15,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  {
    MR_Word Stream_10;
    MR_Box Stream_18;
    MR_Word ShouldReduce_28;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_18  = (MR_Box) Stream;
}
    Stream_10 = (MR_Word) Stream_18;
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
	 ShouldReduce_28  = ShouldReduce;
}
    switch (ShouldReduce_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__binary_input_stream_foldl2_io_plain_6_p_0(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
        break;
      case (MR_Integer) 1:
        mercury__io__binary_input_stream_foldl2_io_chunk_6_p_0(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
        break;
    }
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
    mercury__io__binary_input_stream_foldl2_io_inner_7_p_0(TypeInfo_for_T_22, (MR_Integer) 1000, Stream_7, Pred_8, T0_9, &InnerRes_12);
    switch (MR_tag((MR_Word) InnerRes_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box T_13 = (MR_hl_field(MR_mktag(0), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T_13;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 1)));
          MR_Box T_21 = (MR_hl_field(MR_mktag(1), InnerRes_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    if (succeeded)
    {
      MR_Word ByteResult_14;
      MR_Word Result0_32;
      MR_Integer Byte_33;
      MR_Box Error_34;
      MR_Box Stream_45 = (MR_Box) Stream_9;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_45 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_32  = Result;
	 Byte_33  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_34 );
}
      switch (Result0_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 2:
          {
            MR_String Msg_35;
            MR_Word Var_39;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_inner_7_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_34 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_35  = Msg;
}
            Var_39 = (MR_Word) Msg_35;
            {
              ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ByteResult_14, 0) = ((MR_Box) (Var_39));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ByteResult_14, 0) = ((MR_Box) (Byte_33));
          }
          break;
      }
      switch (MR_tag((MR_Word) ByteResult_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Res_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T0_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ByteResult_14, (MR_Integer) 0)));
            MR_Box T1_16;
            MR_Integer Var_23;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1)));
            MR_Box conv1_STATE_VARIABLE_IO_22_22;
            MR_Integer next_value_of_Left_8;
            MR_Box next_value_of_T0_11;

            func_0(((MR_Box) Pred_10), ((MR_Box) (Byte_15)), T0_11, &T1_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_22_22);
            Var_23 = (Left_8 - (MR_Integer) 1);
            // direct tailcall eliminated
            next_value_of_Left_8 = Var_23;
            next_value_of_T0_11 = T1_16;
            Left_8 = next_value_of_Left_8;
            T0_11 = next_value_of_T0_11;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ByteResult_14, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Res_12 = base;
        MR_hl_field(MR_mktag(2), base, 0) = T0_11;
      }
    break;
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl2_io_plain_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_12;
    MR_Word Result0_27;
    MR_Integer Byte_28;
    MR_Box Error_29;
    MR_Box Stream_40 = (MR_Box) Stream_7;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_40 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_27  = Result;
	 Byte_28  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_29 );
}
    switch (Result0_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_30;
          MR_Word Var_34;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl2_io_plain_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_29 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_30  = Msg;
}
          Var_34 = (MR_Word) Msg_30;
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_34));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_28));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Box conv1_STATE_VARIABLE_IO_19_19;
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) Pred_8), ((MR_Box) (Byte_13)), T0_9, &T1_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
          // direct tailcall eliminated
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
mercury__io__binary_input_stream_foldl_io_4_p_1(
  MR_Word Pred_5,
  MR_Word * Res_6)
{
  {
    MR_Word Stream_8;
    MR_Box Stream_15;
    MR_Word ShouldReduce_24;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_4_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_15  = (MR_Box) Stream;
}
    Stream_8 = (MR_Word) Stream_15;
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
	 ShouldReduce_24  = ShouldReduce;
}
    switch (ShouldReduce_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__binary_input_stream_foldl_io_plain_5_p_1(Stream_8, Pred_5, Res_6);
        break;
      case (MR_Integer) 1:
        mercury__io__binary_input_stream_foldl_io_chunk_5_p_1(Stream_8, Pred_5, Res_6);
        break;
    }
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
    mercury__io__binary_input_stream_foldl_io_inner_6_p_1((MR_Integer) 1000, Stream_6, Pred_7, &InnerRes_10);
    switch (MR_tag((MR_Word) InnerRes_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InnerRes_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              // direct tailcall eliminated
              continue;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), InnerRes_10, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
    if (succeeded)
    {
      MR_Word ByteResult_12;
      MR_Word Result0_28;
      MR_Integer Byte_29;
      MR_Box Error_30;
      MR_Box Stream_41 = (MR_Box) Stream_8;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_1

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_41 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_28  = Result;
	 Byte_29  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_30 );
}
      switch (Result0_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 2:
          {
            MR_String Msg_31;
            MR_Word Var_35;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_30 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_31  = Msg;
}
            Var_35 = (MR_Word) Msg_31;
            {
              ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_35));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_29));
          }
          break;
      }
      switch (MR_tag((MR_Word) ByteResult_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0)));
            MR_Integer Var_20;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_9, (MR_Integer) 1)));
            MR_Box conv1_STATE_VARIABLE_IO_19_19;
            MR_Integer next_value_of_Left_7;

            func_0(((MR_Box) Pred_9), ((MR_Box) (Byte_13)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
            Var_20 = (Left_7 - (MR_Integer) 1);
            // direct tailcall eliminated
            next_value_of_Left_7 = Var_20;
            Left_7 = next_value_of_Left_7;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *Res_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_14));
            }
          }
          break;
      }
    }
    else
      *Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
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
    MR_Word Result0_23;
    MR_Integer Byte_24;
    MR_Box Error_25;
    MR_Box Stream_36 = (MR_Box) Stream_6;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_1

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_36 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_23  = Result;
	 Byte_24  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_25 );
}
    switch (Result0_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_26;
          MR_Word Var_30;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_25 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_26  = Msg;
}
          Var_30 = (MR_Word) Msg_26;
          {
            ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_10, 0) = ((MR_Box) (Var_30));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_10, 0) = ((MR_Box) (Byte_24));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ByteResult_10, (MR_Integer) 0)));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1)));
          MR_Box conv1_STATE_VARIABLE_IO_16_16;

          func_0(((MR_Box) Pred_7), ((MR_Box) (Byte_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
          // direct tailcall eliminated
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ByteResult_10, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
  {
    MR_Word Stream_8;
    MR_Box Stream_15;
    MR_Word ShouldReduce_24;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_15  = (MR_Box) Stream;
}
    Stream_8 = (MR_Word) Stream_15;
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
	 ShouldReduce_24  = ShouldReduce;
}
    switch (ShouldReduce_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__binary_input_stream_foldl_io_plain_5_p_0(Stream_8, Pred_5, Res_6);
        break;
      case (MR_Integer) 1:
        mercury__io__binary_input_stream_foldl_io_chunk_5_p_0(Stream_8, Pred_5, Res_6);
        break;
    }
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
    mercury__io__binary_input_stream_foldl_io_inner_6_p_0((MR_Integer) 1000, Stream_6, Pred_7, &InnerRes_10);
    switch (MR_tag((MR_Word) InnerRes_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InnerRes_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              // direct tailcall eliminated
              continue;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), InnerRes_10, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
    if (succeeded)
    {
      MR_Word ByteResult_12;
      MR_Word Result0_28;
      MR_Integer Byte_29;
      MR_Box Error_30;
      MR_Box Stream_41 = (MR_Box) Stream_8;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_41 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_28  = Result;
	 Byte_29  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_30 );
}
      switch (Result0_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 2:
          {
            MR_String Msg_31;
            MR_Word Var_35;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_inner_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_30 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_31  = Msg;
}
            Var_35 = (MR_Word) Msg_31;
            {
              ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_35));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_29));
          }
          break;
      }
      switch (MR_tag((MR_Word) ByteResult_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0)));
            MR_Integer Var_20;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_9, (MR_Integer) 1)));
            MR_Box conv1_STATE_VARIABLE_IO_19_19;
            MR_Integer next_value_of_Left_7;

            func_0(((MR_Box) Pred_9), ((MR_Box) (Byte_13)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
            Var_20 = (Left_7 - (MR_Integer) 1);
            // direct tailcall eliminated
            next_value_of_Left_7 = Var_20;
            Left_7 = next_value_of_Left_7;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *Res_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_14));
            }
          }
          break;
      }
    }
    else
      *Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
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
    MR_Word Result0_23;
    MR_Integer Byte_24;
    MR_Box Error_25;
    MR_Box Stream_36 = (MR_Box) Stream_6;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_36 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_23  = Result;
	 Byte_24  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_25 );
}
    switch (Result0_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_26;
          MR_Word Var_30;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_io_plain_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_25 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_26  = Msg;
}
          Var_30 = (MR_Word) Msg_26;
          {
            ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_10, 0) = ((MR_Box) (Var_30));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_10, 0) = ((MR_Box) (Byte_24));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ByteResult_10, (MR_Integer) 0)));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1)));
          MR_Box conv1_STATE_VARIABLE_IO_16_16;

          func_0(((MR_Box) Pred_7), ((MR_Box) (Byte_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
          // direct tailcall eliminated
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ByteResult_10, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
  MR_Word TypeInfo_for_T_15,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  {
    MR_Word Stream_10;
    MR_Box Stream_18;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_18  = (MR_Box) Stream;
}
    Stream_10 = (MR_Word) Stream_18;
    mercury__io__binary_input_stream_foldl_6_p_1(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_6_p_1(
  MR_Word TypeInfo_for_T_20,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_12;
    MR_Word Result0_26;
    MR_Integer Byte_27;
    MR_Box Error_28;
    MR_Box Stream_39 = (MR_Box) Stream_7;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_1

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_39 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_26  = Result;
	 Byte_27  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_28 );
}
    switch (Result0_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_29;
          MR_Word Var_33;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_28 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_29  = Msg;
}
          Var_33 = (MR_Word) Msg_29;
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_33));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_27));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) Pred_8), ((MR_Box) (Byte_13)), T0_9, &T1_14);
          // direct tailcall eliminated
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
  MR_Word TypeInfo_for_T_15,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  {
    MR_Word Stream_10;
    MR_Box Stream_18;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_18  = (MR_Box) Stream;
}
    Stream_10 = (MR_Word) Stream_18;
    mercury__io__binary_input_stream_foldl_6_p_0(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
  }
}

void MR_CALL 
mercury__io__binary_input_stream_foldl_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_12;
    MR_Word Result0_26;
    MR_Integer Byte_27;
    MR_Box Error_28;
    MR_Box Stream_39 = (MR_Box) Stream_7;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_39 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_26  = Result;
	 Byte_27  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_28 );
}
    switch (Result0_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_29;
          MR_Word Var_33;

{
#define MR_PROC_LABEL mercury__io__binary_input_stream_foldl_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_28 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_29  = Msg;
}
          Var_33 = (MR_Word) Msg_29;
          {
            ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ByteResult_12, 0) = ((MR_Box) (Var_33));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          ByteResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ByteResult_12, 0) = ((MR_Box) (Byte_27));
        }
        break;
    }
    switch (MR_tag((MR_Word) ByteResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ByteResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) Pred_8), ((MR_Box) (Byte_13)), T0_9, &T1_14);
          // direct tailcall eliminated
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ByteResult_12, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
mercury__io__read_binary_file_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  {
    MR_Word Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__io__read_binary_file_2_5_p_0(Stream_5, Var_10, Result_6);
  }
}

void MR_CALL 
mercury__io__read_binary_file_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_13;
    MR_Word Var_21;

{
#define MR_PROC_LABEL mercury__io__read_binary_file_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_13  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_13;
    Var_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__io__read_binary_file_2_5_p_0(Stream_6, Var_21, Result_4);
  }
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
    MR_Word Result0_25;
    MR_Integer Byte_26;
    MR_Box Error_27;
    MR_Box Stream_38 = (MR_Box) Stream_6;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mercury__io__read_binary_file_2_5_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_38 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_25  = Result;
	 Byte_26  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_27 );
}
    switch (Result0_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Result0_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_28;
          MR_Word Var_32;

{
#define MR_PROC_LABEL mercury__io__read_binary_file_2_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_27 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_28  = Msg;
}
          Var_32 = (MR_Word) Msg_28;
          {
            Result0_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Result0_10, 0) = ((MR_Box) (Var_32));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          Result0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Result0_10, 0) = ((MR_Box) (Byte_26));
        }
        break;
    }
    switch (MR_tag((MR_Word) Result0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          MR_Word Bytes_11;

          mercury__list__reverse_2_p_0(TypeCtorInfo_19_19, Bytes0_7, &Bytes_11);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Bytes_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Byte_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Result0_10, (MR_Integer) 0)));
          MR_Word Var_17;
          MR_Word next_value_of_Bytes0_7;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Byte_13));
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Bytes0_7));
          }
          // direct tailcall eliminated
          next_value_of_Bytes0_7 = Var_17;
          Bytes0_7 = next_value_of_Bytes0_7;
          continue;
        }
        break;
      case (MR_Integer) 2:
        *Result_8 = (MR_Word) Result0_10;
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__read_binary_file_as_bitmap_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_13;

{
#define MR_PROC_LABEL mercury__io__read_binary_file_as_bitmap_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_13  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_13;
    mercury__io__read_binary_file_as_bitmap_4_p_0(Stream_6, Result_4);
  }
}

void MR_CALL 
mercury__io__read_binary_file_as_bitmap_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Integer FileSize_8;
    MR_Box Stream_39 = (MR_Box) Stream_5;

{
#define MR_PROC_LABEL mercury__io__read_binary_file_as_bitmap_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Size;

	Stream = (MercuryFilePtr) Stream_39 ;
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
	 FileSize_8  = Size;
}
    succeeded = (FileSize_8 >= (MR_Integer) 0);
    if (succeeded)
    {
      MR_Integer BytesRead_10;
      MR_Word ReadResult_11;
      MR_Box STATE_VARIABLE_BM_20_20;
      MR_Integer Var_21 = (FileSize_8 * (MR_Integer) 8);
      MR_Box STATE_VARIABLE_BM_24_24;

      STATE_VARIABLE_BM_20_20 = mercury__bitmap__init_2_f_0(Var_21, (MR_Integer) 0);
      mercury__io__read_bitmap_9_p_0(Stream_5, (MR_Integer) 0, FileSize_8, STATE_VARIABLE_BM_20_20, &STATE_VARIABLE_BM_24_24, &BytesRead_10, &ReadResult_11);
      if ((ReadResult_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        succeeded = (BytesRead_10 == FileSize_8);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Result_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_BM_24_24));
          }
        else
        {
          MR_Word Var_26 = (MR_Word) ((MR_Box) ((MR_String) "io.read_binary_file_as_bitmap: incorrect file size"));

          *Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_5[2]);
        }
      }
      else
      {
        MR_Word Msg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReadResult_11, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_12));
        }
      }
    }
    else
    {
      MR_Word Res_14;
      MR_Word RevBitmaps_15;
      MR_Word Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      mercury__io__read_binary_file_as_bitmap_2_7_p_0(Stream_5, (MR_Integer) 4000, &Res_14, Var_28, &RevBitmaps_15);
      if ((Res_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word TypeCtorInfo_35_35 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
        MR_Box Var_30;
        MR_Word Var_31;

        mercury__list__reverse_2_p_0(TypeCtorInfo_35_35, RevBitmaps_15, &Var_31);
        Var_30 = mercury__bitmap__append_list_1_f_0(Var_31);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
        }
      }
      else
      {
        MR_Word Msg_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Res_14, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_32));
        }
      }
    }
  }
}

static void MR_CALL 
mercury__io__read_binary_file_as_bitmap_2_7_p_0(
  MR_Word Stream_8,
  MR_Integer BufferSize_9,
  MR_Word * Res_10,
  MR_Word STATE_VARIABLE_BMs_0_17,
  MR_Word * STATE_VARIABLE_BMs_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NumBytesRead_14;
    MR_Word ReadRes_15;
    MR_Box STATE_VARIABLE_BM_21_21;
    MR_Integer Var_22 = (BufferSize_9 * (MR_Integer) 8);
    MR_Box STATE_VARIABLE_BM_25_25;

    // setup for model_det tailcalls optimized into a loop
    STATE_VARIABLE_BM_21_21 = mercury__bitmap__init_2_f_0(Var_22, (MR_Integer) 0);
    mercury__io__read_bitmap_9_p_0(Stream_8, (MR_Integer) 0, BufferSize_9, STATE_VARIABLE_BM_21_21, &STATE_VARIABLE_BM_25_25, &NumBytesRead_14, &ReadRes_15);
    if ((ReadRes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      succeeded = (NumBytesRead_14 < BufferSize_9);
      if (succeeded)
      {
        MR_Box STATE_VARIABLE_BM_27_27;
        MR_Integer Var_28 = (NumBytesRead_14 * (MR_Integer) 8);

        STATE_VARIABLE_BM_27_27 = mercury__bitmap__shrink_without_copying_2_f_0(STATE_VARIABLE_BM_25_25, Var_28);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_BMs_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (STATE_VARIABLE_BM_27_27));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_BMs_0_17));
        }
        *Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Word STATE_VARIABLE_BMs_31_31;
        MR_Integer Var_32;
        MR_Integer next_value_of_BufferSize_9;
        MR_Word next_value_of_STATE_VARIABLE_BMs_0_17;

        {
          STATE_VARIABLE_BMs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_BMs_31_31, 0) = ((MR_Box) (STATE_VARIABLE_BM_25_25));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_BMs_31_31, 1) = ((MR_Box) (STATE_VARIABLE_BMs_0_17));
        }
        Var_32 = (BufferSize_9 * (MR_Integer) 2);
        // direct tailcall eliminated
        next_value_of_BufferSize_9 = Var_32;
        next_value_of_STATE_VARIABLE_BMs_0_17 = STATE_VARIABLE_BMs_31_31;
        BufferSize_9 = next_value_of_BufferSize_9;
        STATE_VARIABLE_BMs_0_17 = next_value_of_STATE_VARIABLE_BMs_0_17;
        continue;
      }
    }
    else
    {
      *Res_10 = ReadRes_15;
      *STATE_VARIABLE_BMs_18 = STATE_VARIABLE_BMs_0_17;
    }
    break;
  }
}

void MR_CALL 
mercury__io__read_bitmap_8_p_0(
  MR_Integer StartByte_9,
  MR_Integer NumBytes_10,
  MR_Box STATE_VARIABLE_Bitmap_0_16,
  MR_Box * STATE_VARIABLE_Bitmap_17,
  MR_Integer * BytesRead_12,
  MR_Word * Result_13)
{
  {
    MR_Word Stream_15;
    MR_Box Stream_25;

{
#define MR_PROC_LABEL mercury__io__read_bitmap_8_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_25  = (MR_Box) Stream;
}
    Stream_15 = (MR_Word) Stream_25;
    mercury__io__read_bitmap_9_p_0(Stream_15, StartByte_9, NumBytes_10, STATE_VARIABLE_Bitmap_0_16, STATE_VARIABLE_Bitmap_17, BytesRead_12, Result_13);
  }
}

void MR_CALL 
mercury__io__read_bitmap_7_p_0(
  MR_Word Stream_8,
  MR_Box STATE_VARIABLE_Bitmap_0_14,
  MR_Box * STATE_VARIABLE_Bitmap_15,
  MR_Integer * BytesRead_10,
  MR_Word * Result_11)
{
  {
    MR_bool succeeded;
    MR_Integer NumBytes_13;

    succeeded = mercury__bitmap__num_bytes_1_f_0(STATE_VARIABLE_Bitmap_0_14, &NumBytes_13);
    if (succeeded)
    {
      mercury__io__read_bitmap_9_p_0(Stream_8, (MR_Integer) 0, NumBytes_13, STATE_VARIABLE_Bitmap_0_14, STATE_VARIABLE_Bitmap_15, BytesRead_10, Result_11);
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
  MR_Box STATE_VARIABLE_Bitmap_0_12,
  MR_Box * STATE_VARIABLE_Bitmap_13,
  MR_Integer * BytesRead_8,
  MR_Word * Result_9)
{
  {
    MR_bool succeeded;
    MR_Word Stream_11;
    MR_Box Stream_21;
    MR_Integer NumBytes_33;

{
#define MR_PROC_LABEL mercury__io__read_bitmap_6_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_21  = (MR_Box) Stream;
}
    Stream_11 = (MR_Word) Stream_21;
    succeeded = mercury__bitmap__num_bytes_1_f_0(STATE_VARIABLE_Bitmap_0_12, &NumBytes_33);
    if (succeeded)
    {
      mercury__io__read_bitmap_9_p_0(Stream_11, (MR_Integer) 0, NumBytes_33, STATE_VARIABLE_Bitmap_0_12, STATE_VARIABLE_Bitmap_13, BytesRead_8, Result_9);
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
mercury__io__read_bitmap_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Start_11,
  MR_Integer NumBytes_12,
  MR_Box STATE_VARIABLE_Bitmap_0_19,
  MR_Box * STATE_VARIABLE_Bitmap_20,
  MR_Integer * BytesRead_14,
  MR_Word * Result_15)
{
  {
    MR_bool succeeded = (NumBytes_12 > (MR_Integer) 0);
    MR_Box Stream_10 = (MR_Box) HeadVar__1_1;
    MR_Integer Var_24;
    MR_Integer Var_25;
    MR_Integer Var_26;

    if (succeeded)
    {
      succeeded = mercury__bitmap__byte_in_range_2_p_0(STATE_VARIABLE_Bitmap_0_19, Start_11);
      if (succeeded)
      {
        Var_25 = (Start_11 + NumBytes_12);
        Var_26 = (MR_Integer) 1;
        Var_24 = (Var_25 - Var_26);
        succeeded = mercury__bitmap__byte_in_range_2_p_0(STATE_VARIABLE_Bitmap_0_19, Var_24);
      }
    }
    if (succeeded)
    {
      MR_Box Error_17;
      MR_Word IOError_18;
      MR_String Message_67;

{
#define MR_PROC_LABEL mercury__io__read_bitmap_9_p_0

	MercuryFilePtr Stream;
	MR_Integer StartByte;
	MR_Integer NumBytes;
	MR_BitmapPtr Bitmap0;
	MR_BitmapPtr Bitmap;
	MR_Integer BytesRead0;
	MR_Integer BytesRead;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_10 ;
	StartByte =  Start_11 ;
	NumBytes =  NumBytes_12 ;
	Bitmap0 = (MR_BitmapPtr) STATE_VARIABLE_Bitmap_0_19 ;
	BytesRead0 =  (MR_Integer) 0 ;
		{

    size_t nread;

    Bitmap = Bitmap0;
    nread = MR_READ(*Stream, Bitmap->elements + StartByte, NumBytes);
    BytesRead = BytesRead0 + nread;
    if (nread < NumBytes && MR_FERROR(*Stream)) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_Bitmap_20  = (MR_Box) Bitmap;
	 *BytesRead_14  = BytesRead;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_17 );
}
{
#define MR_PROC_LABEL mercury__io__read_bitmap_9_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_17 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__io__read_bitmap_9_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_17 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_67  = Msg;
}
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        IOError_18 = (MR_Word) Message_67;
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_15 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_18));
        }
      else
        *Result_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      succeeded = (NumBytes_12 == (MR_Integer) 0);
      if (succeeded)
        succeeded = mercury__bitmap__byte_in_range_2_p_0(STATE_VARIABLE_Bitmap_0_19, Start_11);
      if (succeeded)
      {
        *Result_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *BytesRead_14 = (MR_Integer) 0;
      }
      else
      {
        MR_Integer Var_32 = (Start_11 * (MR_Integer) 8);
        MR_Integer Var_33 = (NumBytes_12 * (MR_Integer) 8);

        {
          mercury__bitmap__throw_bounds_error_4_p_0(STATE_VARIABLE_Bitmap_0_19, (MR_String) "io.read_bitmap", Var_32, Var_33);
          return;
        }
      }
      *STATE_VARIABLE_Bitmap_20 = STATE_VARIABLE_Bitmap_0_19;
    }
  }
}

void MR_CALL 
mercury__io__read_binary_uint8_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_13;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_13  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_13;
    mercury__io__read_binary_uint8_4_p_0(Stream_6, Result_4);
  }
}

void MR_CALL 
mercury__io__read_binary_uint8_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  {
    MR_Word Result0_8;
    MR_Integer Int_9;
    MR_Box Error_10;
    MR_Box Stream_24 = (MR_Box) HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint8_4_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_24 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_8  = Result;
	 Int_9  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
    switch (Result0_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_12;
          MR_Word Var_18;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint8_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_12  = Msg;
}
          Var_18 = (MR_Word) Msg_12;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_18));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          uint8_t UInt8_11;

{
#define MR_PROC_LABEL mercury__io__read_binary_uint8_4_p_0

	MR_Integer I;
	uint8_t U8;

	I =  Int_9 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	 UInt8_11  = U8;
}
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (UInt8_11));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__read_binary_int8_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_13;

{
#define MR_PROC_LABEL mercury__io__read_binary_int8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_13  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_13;
    mercury__io__read_binary_int8_4_p_0(Stream_6, Result_4);
  }
}

void MR_CALL 
mercury__io__read_binary_int8_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  {
    MR_Word Result0_8;
    MR_Integer Int_9;
    MR_Box Error_10;
    MR_Box Stream_24 = (MR_Box) HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__read_binary_int8_4_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_24 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_8  = Result;
	 Int_9  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
    switch (Result0_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_12;
          MR_Word Var_18;

{
#define MR_PROC_LABEL mercury__io__read_binary_int8_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_12  = Msg;
}
          Var_18 = (MR_Word) Msg_12;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_18));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          int8_t Int8_11;

{
#define MR_PROC_LABEL mercury__io__read_binary_int8_4_p_0

	MR_Integer I;
	int8_t I8;

	I =  Int_9 ;
		{

    I8 = (int8_t) I;


		;}
#undef MR_PROC_LABEL
	 Int8_11  = I8;
}
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Int8_11));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__read_byte_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  {
    MR_Word Result0_8;
    MR_Integer Byte_9;
    MR_Box Error_10;
    MR_Box Stream_23 = (MR_Box) HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__read_byte_4_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_23 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_8  = Result;
	 Byte_9  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
    switch (Result0_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_11;
          MR_Word Var_17;

{
#define MR_PROC_LABEL mercury__io__read_byte_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_11  = Msg;
}
          Var_17 = (MR_Word) Msg_11;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_17));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Byte_9));
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__read_byte_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_Word Result0_21;
    MR_Integer Byte_22;
    MR_Box Error_23;
    MR_Box Stream_34;

{
#define MR_PROC_LABEL mercury__io__read_byte_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 Stream_34  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__read_byte_3_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Integer ByteVal;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_34 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        Result = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 Result0_21  = Result;
	 Byte_22  = ByteVal;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_23 );
}
    switch (Result0_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_24;
          MR_Word Var_28;

{
#define MR_PROC_LABEL mercury__io__read_byte_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_23 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_24  = Msg;
}
          Var_28 = (MR_Word) Msg_24;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_4 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_28));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Byte_22));
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__io__read_binary_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    mercury__io__restore_input_stream_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv1_HeadVar__3_3);
    *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__io__read_binary_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_4;

    mercury__io__read_binary_from_current_input_stream_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv0_Result_4);
    *wrapper_arg_1 = ((MR_Box) (conv0_Result_4));
  }
}

void MR_CALL 
mercury__io__read_binary_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  {
    MR_Word TypeCtorInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word Var_11;
    MR_Word OrigStream_25;
    MR_Word Var_28;
    MR_Box NewStream_36 = (MR_Box) HeadVar__1_1;
    MR_Box OutStream_37;
    MR_Word _CleanupRes_26;
    MR_Box conv2_Result_6;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&mercury__io_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (mercury__io__read_binary_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (TypeInfo_for_T_13));
    }
    TypeCtorInfo_17_17 = (MR_Word) &mercury__io__io__type_ctor_info_result_1;
    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
{
#define MR_PROC_LABEL mercury__io__read_binary_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_36 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_37  = (MR_Box) OutStream;
}
    OrigStream_25 = (MR_Word) OutStream_37;
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&mercury__io_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (mercury__io__read_binary_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (TypeInfo_18_18));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) (OrigStream_25));
    }
    mercury__exception__finally_2_6_p_0(TypeInfo_18_18, (MR_Word) Var_11, Var_28, &conv2_Result_6, &_CleanupRes_26);
    *Result_6 = ((MR_Word) conv2_Result_6);
  }
}

static void MR_CALL 
mercury__io__read_binary_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    mercury__io__restore_input_stream_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv1_HeadVar__3_3);
    *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__io__read_binary_3_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_4;

    mercury__io__read_binary_from_current_input_stream_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv0_Result_4);
    *wrapper_arg_1 = ((MR_Box) (conv0_Result_4));
  }
}

void MR_CALL 
mercury__io__read_binary_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * Result_4)
{
  {
    MR_Word TypeCtorInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word Var_12;
    MR_Word OrigStream_31;
    MR_Word Var_34;
    MR_Box NewStream_42;
    MR_Box OutStream_43;
    MR_Word _CleanupRes_32;
    MR_Box conv2_Result_4;

{
#define MR_PROC_LABEL mercury__io__read_binary_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	 NewStream_42  = (MR_Box) Stream;
}
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&mercury__io_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (mercury__io__read_binary_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (TypeInfo_for_T_14));
    }
    TypeCtorInfo_18_18 = (MR_Word) &mercury__io__io__type_ctor_info_result_1;
    {
      TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_19_19, 0) = ((MR_Box) (TypeCtorInfo_18_18));
      MR_hl_field(MR_mktag(0), TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_14));
    }
{
#define MR_PROC_LABEL mercury__io__read_binary_3_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_42 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_43  = (MR_Box) OutStream;
}
    OrigStream_31 = (MR_Word) OutStream_43;
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&mercury__io_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (mercury__io__read_binary_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (TypeInfo_19_19));
      MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), Var_34, 5) = ((MR_Box) (OrigStream_31));
    }
    mercury__exception__finally_2_6_p_0(TypeInfo_19_19, (MR_Word) Var_12, Var_34, &conv2_Result_4, &_CleanupRes_32);
    *Result_4 = ((MR_Word) conv2_Result_4);
  }
}

void MR_CALL 
mercury__io__set_output_line_number_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer LineNum_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__set_output_line_number_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_5 ;
	LineNum =  LineNum_6 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__set_output_line_number_3_p_0(
  MR_Integer LineNum_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__set_output_line_number_3_p_0

	MR_Integer LineNum;

	LineNum =  LineNum_1 ;
		{

    MR_line_number(*mercury_current_text_output()) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__get_output_line_number_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * LineNum_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__get_output_line_number_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_5 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *LineNum_6  = LineNum;
}
  }
}

void MR_CALL 
mercury__io__get_output_line_number_3_p_0(
  MR_Integer * LineNum_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__get_output_line_number_3_p_0

	MR_Integer LineNum;

		{

    LineNum = MR_line_number(*mercury_current_text_output());


		;}
#undef MR_PROC_LABEL
	 *LineNum_1  = LineNum;
}
  }
}

void MR_CALL 
mercury__io__output_stream_name_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Name_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;

    mercury__io__stream_name_4_p_0(Stream_5, Name_6);
  }
}

void MR_CALL 
mercury__io__output_stream_name_3_p_0(
  MR_String * Name_4)
{
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
    mercury__io__stream_name_4_p_0(Stream_6, Name_4);
  }
}

void MR_CALL 
mercury__io__stderr_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
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
    *HeadVar__1_1 = (MR_Word) Stream_4;
  }
}

MR_Word MR_CALL 
mercury__io__stderr_stream_0_f_0(void)
{
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
    HeadVar__1_1 = (MR_Word) Var_2;
    return HeadVar__1_1;
  }
}

void MR_CALL 
mercury__io__stdout_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
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
    *HeadVar__1_1 = (MR_Word) Stream_4;
  }
}

MR_Word MR_CALL 
mercury__io__stdout_stream_0_f_0(void)
{
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
    HeadVar__1_1 = (MR_Word) Var_2;
    return HeadVar__1_1;
  }
}

void MR_CALL 
mercury__io__set_output_stream_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Box NewStream_5 = (MR_Box) HeadVar__1_1;
    MR_Box OutStream_6;

{
#define MR_PROC_LABEL mercury__io__set_output_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_5 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_6  = (MR_Box) OutStream;
}
    *HeadVar__2_2 = (MR_Word) OutStream_6;
  }
}

void MR_CALL 
mercury__io__output_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
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
    *HeadVar__1_1 = (MR_Word) Stream_4;
  }
}

void MR_CALL 
mercury__io__close_output_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Box Stream_4 = (MR_Box) HeadVar__1_1;
    MR_Box Error_6;

    mercury__io__maybe_delete_stream_info_3_p_0(Stream_4);
{
#define MR_PROC_LABEL mercury__io__close_output_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_4 ;
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
}

void MR_CALL 
mercury__io__open_append_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Integer OpenCount_8;
    MR_Box NewStream_9;
    MR_Box Error_10;
    MR_Word IOError_11;
    MR_String Message_25;

{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName =  FileName_5 ;
	Mode =  (MR_String) "a" ;
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

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 =  (MR_String) "can\'t append to file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_25  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_11 = (MR_Word) Message_25;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_11));
      }
    else
    {
      MR_Word TypeCtorInfo_18_39;
      MR_Word TypeInfo_for_K_47;
      MR_Word Var_17 = (MR_Word) NewStream_9;
      MR_Word Var_18;
      MR_Word Var_22;
      MR_Word StreamDb0_31;
      MR_Word StreamDb_32;
      MR_Integer Var_35;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (FileName_5));
      }
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (OpenCount_8));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Var_22));
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
	 StreamDb0_31  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) NewStream_9 ;
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
	 Var_35  = Id;
}
      TypeCtorInfo_18_39 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
      TypeInfo_for_K_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__tree234__set_4_p_0(TypeInfo_for_K_47, TypeCtorInfo_18_39, ((MR_Box) (Var_35)), ((MR_Box) (Var_18)), StreamDb0_31, &StreamDb_32);
{
#define MR_PROC_LABEL mercury__io__open_append_4_p_0

	MR_Word StreamDb;

	StreamDb =  StreamDb_32 ;
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
mercury__io__told_2_p_0(void)
{
  {
    MR_Box NewStream_18;
    MR_Box Stream_24;
    MR_Box Error_26;

{
#define MR_PROC_LABEL mercury__io__told_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	 NewStream_18  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__told_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_18 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 Stream_24  = (MR_Box) OutStream;
}
    mercury__io__maybe_delete_stream_info_3_p_0(Stream_24);
{
#define MR_PROC_LABEL mercury__io__told_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_24 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_26 );
}
    mercury__io__throw_on_error_4_p_0(Error_26, (MR_String) "error closing file: ");
  }
}

void MR_CALL 
mercury__io__tell_4_p_0(
  MR_String File_5,
  MR_Word * Result_6)
{
  {
    MR_Word Result0_8;

    mercury__io__open_output_4_p_0(File_5, &Result0_8);
    if (((MR_tag((MR_Word) Result0_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Msg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_11));
      }
    }
    else
    {
      MR_Word Stream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_8, (MR_Integer) 0)));
      MR_Box NewStream_18 = (MR_Box) Stream_9;
      MR_Box OutStream_19;

{
#define MR_PROC_LABEL mercury__io__tell_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_18 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_19  = (MR_Box) OutStream;
}
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
}

void MR_CALL 
mercury__io__open_output_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Integer OpenCount_8;
    MR_Box NewStream_9;
    MR_Box Error_10;
    MR_Word IOError_11;
    MR_String Message_25;

{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName =  FileName_5 ;
	Mode =  (MR_String) "w" ;
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

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 =  (MR_String) "can\'t open output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_25  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_11 = (MR_Word) Message_25;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_11));
      }
    else
    {
      MR_Word TypeCtorInfo_18_39;
      MR_Word TypeInfo_for_K_47;
      MR_Word Var_17 = (MR_Word) NewStream_9;
      MR_Word Var_18;
      MR_Word Var_22;
      MR_Word StreamDb0_31;
      MR_Word StreamDb_32;
      MR_Integer Var_35;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (FileName_5));
      }
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (OpenCount_8));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Var_22));
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
	 StreamDb0_31  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) NewStream_9 ;
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
	 Var_35  = Id;
}
      TypeCtorInfo_18_39 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
      TypeInfo_for_K_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__tree234__set_4_p_0(TypeInfo_for_K_47, TypeCtorInfo_18_39, ((MR_Box) (Var_35)), ((MR_Box) (Var_18)), StreamDb0_31, &StreamDb_32);
{
#define MR_PROC_LABEL mercury__io__open_output_4_p_0

	MR_Word StreamDb;

	StreamDb =  StreamDb_32 ;
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
mercury__io__set_line_number_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer LineNum_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__set_line_number_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_5 ;
	LineNum =  LineNum_6 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__set_line_number_3_p_0(
  MR_Integer LineNum_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__set_line_number_3_p_0

	MR_Integer LineNum;

	LineNum =  LineNum_1 ;
		{

    MR_line_number(*mercury_current_text_input()) = LineNum;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__get_line_number_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * LineNum_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__io__get_line_number_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_5 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *LineNum_6  = LineNum;
}
  }
}

void MR_CALL 
mercury__io__get_line_number_3_p_0(
  MR_Integer * LineNum_1)
{
  {
{
#define MR_PROC_LABEL mercury__io__get_line_number_3_p_0

	MR_Integer LineNum;

		{

    LineNum = MR_line_number(*mercury_current_text_input());


		;}
#undef MR_PROC_LABEL
	 *LineNum_1  = LineNum;
}
  }
}

void MR_CALL 
mercury__io__input_stream_name_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Name_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;

    mercury__io__stream_name_4_p_0(Stream_5, Name_6);
  }
}

void MR_CALL 
mercury__io__input_stream_name_3_p_0(
  MR_String * Name_4)
{
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
    mercury__io__stream_name_4_p_0(Stream_6, Name_4);
  }
}

void MR_CALL 
mercury__io__stdin_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
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
    *HeadVar__1_1 = (MR_Word) Stream_4;
  }
}

MR_Word MR_CALL 
mercury__io__stdin_stream_0_f_0(void)
{
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
    HeadVar__1_1 = (MR_Word) Var_2;
    return HeadVar__1_1;
  }
}

void MR_CALL 
mercury__io__set_input_stream_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Box NewStream_5 = (MR_Box) HeadVar__1_1;
    MR_Box OutStream_6;

{
#define MR_PROC_LABEL mercury__io__set_input_stream_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_5 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_6  = (MR_Box) OutStream;
}
    *HeadVar__2_2 = (MR_Word) OutStream_6;
  }
}

void MR_CALL 
mercury__io__input_stream_3_p_0(
  MR_Word * HeadVar__1_1)
{
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
    *HeadVar__1_1 = (MR_Word) Stream_4;
  }
}

void MR_CALL 
mercury__io__close_input_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Box Stream_4 = (MR_Box) HeadVar__1_1;
    MR_Box Error_6;

    mercury__io__maybe_delete_stream_info_3_p_0(Stream_4);
{
#define MR_PROC_LABEL mercury__io__close_input_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_4 ;
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
}

void MR_CALL 
mercury__io__seen_2_p_0(void)
{
  {
    MR_Box NewStream_18;
    MR_Box Stream_24;
    MR_Box Error_26;

{
#define MR_PROC_LABEL mercury__io__seen_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	 NewStream_18  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__seen_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_18 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 Stream_24  = (MR_Box) OutStream;
}
    mercury__io__maybe_delete_stream_info_3_p_0(Stream_24);
{
#define MR_PROC_LABEL mercury__io__seen_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_24 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_26 );
}
    mercury__io__throw_on_error_4_p_0(Error_26, (MR_String) "error closing file: ");
  }
}

void MR_CALL 
mercury__io__maybe_delete_stream_info_3_p_0(
  MR_Box Stream_4)
{
  {
    MR_bool succeeded;
    MR_Integer MayDeleteStreamInfo_6;

{
#define MR_PROC_LABEL mercury__io__maybe_delete_stream_info_3_p_0

	MR_Integer MayDelete;

		{

    MayDelete = !MR_debug_ever_enabled;


		;}
#undef MR_PROC_LABEL
	 MayDeleteStreamInfo_6  = MayDelete;
}
    succeeded = (MayDeleteStreamInfo_6 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_Word TypeCtorInfo_17_17;
      MR_Word TypeCtorInfo_18_18;
      MR_Word StreamDb0_7;
      MR_Word StreamDb_8;
      MR_Integer Var_14;
      MR_Word V_7_31;

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
	 StreamDb0_7  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__maybe_delete_stream_info_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) Stream_4 ;
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
	 Var_14  = Id;
}
      TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      TypeCtorInfo_18_18 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
      mercury__tree234__delete_2_4_p_0(TypeCtorInfo_17_17, TypeCtorInfo_18_18, StreamDb0_7, ((MR_Box) (Var_14)), &StreamDb_8, &V_7_31);
{
#define MR_PROC_LABEL mercury__io__maybe_delete_stream_info_3_p_0

	MR_Word StreamDb;

	StreamDb =  StreamDb_8 ;
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

void MR_CALL 
mercury__io__see_4_p_0(
  MR_String File_5,
  MR_Word * Result_6)
{
  {
    MR_Word Result0_8;

    mercury__io__open_input_4_p_0(File_5, &Result0_8);
    if (((MR_tag((MR_Word) Result0_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_8, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_11));
      }
    }
    else
    {
      MR_Word Stream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_8, (MR_Integer) 0)));
      MR_Box NewStream_18 = (MR_Box) Stream_9;
      MR_Box OutStream_19;

{
#define MR_PROC_LABEL mercury__io__see_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_18 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_19  = (MR_Box) OutStream;
}
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
}

void MR_CALL 
mercury__io__open_input_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Integer OpenCount_8;
    MR_Box NewStream_9;
    MR_Box Error_10;
    MR_Word IOError_11;
    MR_String Message_25;

{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName =  FileName_5 ;
	Mode =  (MR_String) "r" ;
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

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 =  (MR_String) "can\'t open input file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_25  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_11 = (MR_Word) Message_25;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_11));
      }
    else
    {
      MR_Word TypeCtorInfo_18_39;
      MR_Word TypeInfo_for_K_47;
      MR_Word Var_17 = (MR_Word) NewStream_9;
      MR_Word Var_18;
      MR_Word Var_22;
      MR_Word StreamDb0_31;
      MR_Word StreamDb_32;
      MR_Integer Var_35;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (FileName_5));
      }
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (OpenCount_8));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Var_22));
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
	 StreamDb0_31  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr) NewStream_9 ;
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
	 Var_35  = Id;
}
      TypeCtorInfo_18_39 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
      TypeInfo_for_K_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__tree234__set_4_p_0(TypeInfo_for_K_47, TypeCtorInfo_18_39, ((MR_Box) (Var_35)), ((MR_Box) (Var_18)), StreamDb0_31, &StreamDb_32);
{
#define MR_PROC_LABEL mercury__io__open_input_4_p_0

	MR_Word StreamDb;

	StreamDb =  StreamDb_32 ;
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
mercury__io__flush_output_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Box Stream_4 = (MR_Box) HeadVar__1_1;
    MR_Box Error_6;

{
#define MR_PROC_LABEL mercury__io__flush_output_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_4 ;
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
}

void MR_CALL 
mercury__io__flush_output_2_p_0(void)
{
  {
    MR_Box Stream_16;
    MR_Box Error_18;

{
#define MR_PROC_LABEL mercury__io__flush_output_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_16  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__flush_output_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_16 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_18 );
}
    mercury__io__throw_on_error_4_p_0(Error_18, (MR_String) "error writing to output file: ");
  }
}

static void MR_CALL 
mercury__io__write_array_6_p_1_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    mercury__io__restore_output_stream_5_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &conv1_HeadVar__3_3);
    *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__io__write_array_6_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Tuple conv0_HeadVar__2_2;

    mercury__io__call_pred_no_result_4_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv0_HeadVar__2_2);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__write_array_6_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_array_5_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))));
  }
}

void MR_CALL 
mercury__io__write_array_6_p_1(
  MR_Word TypeInfo_for_T_16,
  MR_Word Stream_7,
  MR_ArrayPtr Array_8,
  MR_String Separator_9,
  MR_Word OutputPred_10)
{
  {
    MR_Word TypeInfo_for_T_56;
    MR_Word Var_14;
    MR_Word OrigStream_24;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Box NewStream_40;
    MR_Box OutStream_41;
    MR_Tuple _Result_25;
    MR_Word _CleanupRes_26;
    MR_Box conv2__Result_25;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mercury__io__write_array_6_p_1_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeInfo_for_T_16));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Array_8));
      MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Separator_9));
      MR_hl_field(MR_mktag(0), Var_14, 6) = ((MR_Box) (OutputPred_10));
    }
    NewStream_40 = (MR_Box) Stream_7;
{
#define MR_PROC_LABEL mercury__io__write_array_6_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_40 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_41  = (MR_Box) OutStream;
}
    OrigStream_24 = (MR_Word) OutStream_41;
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&mercury__io_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (mercury__io__write_array_6_p_1_2));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Var_14));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&mercury__io_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (mercury__io__write_array_6_p_1_3));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (OrigStream_24));
    }
    TypeInfo_for_T_56 = (MR_Word) &mercury__io_scalar_common_4[0];
    mercury__exception__finally_2_6_p_1(TypeInfo_for_T_56, Var_28, Var_29, &conv2__Result_25, &_CleanupRes_26);
    _Result_25 = ((MR_Tuple) conv2__Result_25);
  }
}

static void MR_CALL 
mercury__io__write_array_6_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    mercury__io__restore_output_stream_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &conv1_HeadVar__3_3);
    *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__io__write_array_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Tuple conv0_HeadVar__2_2;

    mercury__io__call_pred_no_result_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv0_HeadVar__2_2);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__write_array_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_array_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))));
  }
}

void MR_CALL 
mercury__io__write_array_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word Stream_7,
  MR_ArrayPtr Array_8,
  MR_String Separator_9,
  MR_Word OutputPred_10)
{
  {
    MR_Word TypeInfo_for_T_56;
    MR_Word Var_14;
    MR_Word OrigStream_24;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Box NewStream_40;
    MR_Box OutStream_41;
    MR_Tuple _Result_25;
    MR_Word _CleanupRes_26;
    MR_Box conv2__Result_25;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mercury__io__write_array_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeInfo_for_T_16));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Array_8));
      MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Separator_9));
      MR_hl_field(MR_mktag(0), Var_14, 6) = ((MR_Box) (OutputPred_10));
    }
    NewStream_40 = (MR_Box) Stream_7;
{
#define MR_PROC_LABEL mercury__io__write_array_6_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_40 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_41  = (MR_Box) OutStream;
}
    OrigStream_24 = (MR_Word) OutStream_41;
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&mercury__io_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (mercury__io__write_array_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Var_14));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&mercury__io_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (mercury__io__write_array_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (OrigStream_24));
    }
    TypeInfo_for_T_56 = (MR_Word) &mercury__io_scalar_common_4[0];
    mercury__exception__finally_2_6_p_0(TypeInfo_for_T_56, Var_28, Var_29, &conv2__Result_25, &_CleanupRes_26);
    _Result_25 = ((MR_Tuple) conv2__Result_25);
  }
}

void MR_CALL 
mercury__io__write_array_5_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_ArrayPtr Array_6,
  MR_String Separator_7,
  MR_Word OutputPred_8)
{
  {
    MR_bool succeeded;
    MR_Integer Lo_10;
    MR_Integer Hi_11;
    MR_Word TypeInfo_for_T_23;
    MR_Word TypeInfo_for_T_24;

{
#define MR_PROC_LABEL mercury__io__write_array_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Array_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Lo_10  = Min;
}
{
#define MR_PROC_LABEL mercury__io__write_array_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Array_6 , Array);
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
      MR_Word TypeInfo_for_T_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_STATE_VARIABLE_IO_15_15;

{
#define MR_PROC_LABEL mercury__io__write_array_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Array_6 , Array);
	Index =  Lo_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 E_12  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), OutputPred_8, (MR_Integer) 1)));
      func_0(((MR_Box) OutputPred_8), E_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_15_15);
      Var_16 = (Lo_10 + (MR_Integer) 1);
      mercury__io__do_write_array_7_p_1(TypeInfo_for_T_19, Array_6, Separator_7, OutputPred_8, Var_16, Hi_11);
    }
    else
    {
    }
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
    if (succeeded)
    {
      MR_Box E_14;
      MR_Integer Var_19;
      MR_Box Stream_38;
      MR_Box Error_40;
      MR_Word TypeInfo_for_T_49;
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
	 Stream_38  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__do_write_array_7_p_1

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_38 ;
	Message =  Separator_9 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_40 );
}
      mercury__io__throw_on_error_4_p_0(Error_40, (MR_String) "error writing to output file: ");
{
#define MR_PROC_LABEL mercury__io__do_write_array_7_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Array_8 , Array);
	Index =  I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 E_14  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), OutputPred_10, (MR_Integer) 1)));
      func_0(((MR_Box) OutputPred_10), E_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18_18);
      Var_19 = (I_11 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_I_11 = Var_19;
      I_11 = next_value_of_I_11;
      continue;
    }
    else
    {
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
  {
    MR_bool succeeded;
    MR_Integer Lo_10;
    MR_Integer Hi_11;
    MR_Word TypeInfo_for_T_23;
    MR_Word TypeInfo_for_T_24;

{
#define MR_PROC_LABEL mercury__io__write_array_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Array_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Lo_10  = Min;
}
{
#define MR_PROC_LABEL mercury__io__write_array_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Array_6 , Array);
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
      MR_Word TypeInfo_for_T_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_STATE_VARIABLE_IO_15_15;

{
#define MR_PROC_LABEL mercury__io__write_array_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Array_6 , Array);
	Index =  Lo_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 E_12  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), OutputPred_8, (MR_Integer) 1)));
      func_0(((MR_Box) OutputPred_8), E_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_15_15);
      Var_16 = (Lo_10 + (MR_Integer) 1);
      mercury__io__do_write_array_7_p_0(TypeInfo_for_T_19, Array_6, Separator_7, OutputPred_8, Var_16, Hi_11);
    }
    else
    {
    }
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
    if (succeeded)
    {
      MR_Box E_14;
      MR_Integer Var_19;
      MR_Box Stream_38;
      MR_Box Error_40;
      MR_Word TypeInfo_for_T_49;
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
	 Stream_38  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__do_write_array_7_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_38 ;
	Message =  Separator_9 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_40 );
}
      mercury__io__throw_on_error_4_p_0(Error_40, (MR_String) "error writing to output file: ");
{
#define MR_PROC_LABEL mercury__io__do_write_array_7_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Array_8 , Array);
	Index =  I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 E_14  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), OutputPred_10, (MR_Integer) 1)));
      func_0(((MR_Box) OutputPred_10), E_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18_18);
      Var_19 = (I_11 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_I_11 = Var_19;
      I_11 = next_value_of_I_11;
      continue;
    }
    else
    {
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    mercury__io__restore_output_stream_5_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &conv1_HeadVar__3_3);
    *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__io__write_list_6_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Tuple conv0_HeadVar__2_2;

    mercury__io__call_pred_no_result_4_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv0_HeadVar__2_2);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__write_list_6_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_list_5_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))));
  }
}

void MR_CALL 
mercury__io__write_list_6_p_1(
  MR_Word TypeInfo_for_T_16,
  MR_Word Stream_7,
  MR_Word List_8,
  MR_String Separator_9,
  MR_Word OutputPred_10)
{
  {
    MR_Word TypeInfo_for_T_56;
    MR_Word Var_14;
    MR_Word OrigStream_24;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Box NewStream_40;
    MR_Box OutStream_41;
    MR_Tuple _Result_25;
    MR_Word _CleanupRes_26;
    MR_Box conv2__Result_25;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mercury__io__write_list_6_p_1_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeInfo_for_T_16));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (List_8));
      MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Separator_9));
      MR_hl_field(MR_mktag(0), Var_14, 6) = ((MR_Box) (OutputPred_10));
    }
    NewStream_40 = (MR_Box) Stream_7;
{
#define MR_PROC_LABEL mercury__io__write_list_6_p_1

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_40 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_41  = (MR_Box) OutStream;
}
    OrigStream_24 = (MR_Word) OutStream_41;
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&mercury__io_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (mercury__io__write_list_6_p_1_2));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Var_14));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&mercury__io_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (mercury__io__write_list_6_p_1_3));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (OrigStream_24));
    }
    TypeInfo_for_T_56 = (MR_Word) &mercury__io_scalar_common_4[0];
    mercury__exception__finally_2_6_p_1(TypeInfo_for_T_56, Var_28, Var_29, &conv2__Result_25, &_CleanupRes_26);
    _Result_25 = ((MR_Tuple) conv2__Result_25);
  }
}

static void MR_CALL 
mercury__io__write_list_6_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    mercury__io__restore_output_stream_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &conv1_HeadVar__3_3);
    *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__io__write_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Tuple conv0_HeadVar__2_2;

    mercury__io__call_pred_no_result_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv0_HeadVar__2_2);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__write_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_list_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))));
  }
}

void MR_CALL 
mercury__io__write_list_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word Stream_7,
  MR_Word List_8,
  MR_String Separator_9,
  MR_Word OutputPred_10)
{
  {
    MR_Word TypeInfo_for_T_56;
    MR_Word Var_14;
    MR_Word OrigStream_24;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Box NewStream_40;
    MR_Box OutStream_41;
    MR_Tuple _Result_25;
    MR_Word _CleanupRes_26;
    MR_Box conv2__Result_25;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mercury__io_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mercury__io__write_list_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeInfo_for_T_16));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (List_8));
      MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Separator_9));
      MR_hl_field(MR_mktag(0), Var_14, 6) = ((MR_Box) (OutputPred_10));
    }
    NewStream_40 = (MR_Box) Stream_7;
{
#define MR_PROC_LABEL mercury__io__write_list_6_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_40 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_41  = (MR_Box) OutStream;
}
    OrigStream_24 = (MR_Word) OutStream_41;
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&mercury__io_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (mercury__io__write_list_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Var_14));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&mercury__io_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (mercury__io__write_list_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (OrigStream_24));
    }
    TypeInfo_for_T_56 = (MR_Word) &mercury__io_scalar_common_4[0];
    mercury__exception__finally_2_6_p_0(TypeInfo_for_T_56, Var_28, Var_29, &conv2__Result_25, &_CleanupRes_26);
    _Result_25 = ((MR_Tuple) conv2__Result_25);
  }
}

void MR_CALL 
mercury__io__write_list_5_p_1(
  MR_Word TypeInfo_for_T_22,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  if (!((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
  {
    MR_Box Head_11 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Word Tail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Box conv1_STATE_VARIABLE_IO_20_20;

    func_0(((MR_Box) HeadVar__3_3), Head_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
    if (!((Tail_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Box TailHead_16 = (MR_hl_field(MR_mktag(1), Tail_12, (MR_Integer) 0));
      MR_Word TailTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Tail_12, (MR_Integer) 1)));

      mercury__io__write_list_lag_6_p_1(TypeInfo_for_T_22, TailHead_16, TailTail_17, HeadVar__2_2, HeadVar__3_3);
    }
  }
}

void MR_CALL 
mercury__io__write_list_lag_6_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_Box Head_7,
  MR_Word Tail_8,
  MR_String Separator_9,
  MR_Word OutputPred_10)
{
  while (MR_TRUE)
  {
    MR_Box Stream_35;
    MR_Box Error_37;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_17_17;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mercury__io__write_list_lag_6_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_35  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_list_lag_6_p_1

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_35 ;
	Message =  Separator_9 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_37 );
}
    mercury__io__throw_on_error_4_p_0(Error_37, (MR_String) "error writing to output file: ");
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), OutputPred_10, (MR_Integer) 1)));
    func_0(((MR_Box) OutputPred_10), Head_7, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17_17);
    if (!((Tail_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Box TailHead_12 = (MR_hl_field(MR_mktag(1), Tail_8, (MR_Integer) 0));
      MR_Word TailTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Tail_8, (MR_Integer) 1)));
      MR_Box next_value_of_Head_7 = TailHead_12;
      MR_Word next_value_of_Tail_8 = TailTail_13;

      // direct tailcall eliminated
      Head_7 = next_value_of_Head_7;
      Tail_8 = next_value_of_Tail_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__io__write_list_5_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  if (!((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
  {
    MR_Box Head_11 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Word Tail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Box conv1_STATE_VARIABLE_IO_20_20;

    func_0(((MR_Box) HeadVar__3_3), Head_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
    if (!((Tail_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Box TailHead_16 = (MR_hl_field(MR_mktag(1), Tail_12, (MR_Integer) 0));
      MR_Word TailTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Tail_12, (MR_Integer) 1)));

      mercury__io__write_list_lag_6_p_0(TypeInfo_for_T_22, TailHead_16, TailTail_17, HeadVar__2_2, HeadVar__3_3);
    }
  }
}

void MR_CALL 
mercury__io__write_list_lag_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Box Head_7,
  MR_Word Tail_8,
  MR_String Separator_9,
  MR_Word OutputPred_10)
{
  while (MR_TRUE)
  {
    MR_Box Stream_35;
    MR_Box Error_37;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_17_17;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mercury__io__write_list_lag_6_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_35  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_list_lag_6_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_35 ;
	Message =  Separator_9 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_37 );
}
    mercury__io__throw_on_error_4_p_0(Error_37, (MR_String) "error writing to output file: ");
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), OutputPred_10, (MR_Integer) 1)));
    func_0(((MR_Box) OutputPred_10), Head_7, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17_17);
    if (!((Tail_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Box TailHead_12 = (MR_hl_field(MR_mktag(1), Tail_8, (MR_Integer) 0));
      MR_Word TailTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Tail_8, (MR_Integer) 1)));
      MR_Box next_value_of_Head_7 = TailHead_12;
      MR_Word next_value_of_Tail_8 = TailTail_13;

      // direct tailcall eliminated
      Head_7 = next_value_of_Head_7;
      Tail_8 = next_value_of_Tail_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__io__write_many_3_p_0(
  MR_Word Poly_list_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_13;

{
#define MR_PROC_LABEL mercury__io__write_many_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_13  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_13;
    mercury__io__write_many_4_p_0(Stream_6, Poly_list_4);
  }
}

void MR_CALL 
mercury__io__write_many_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      switch (MR_tag((MR_Word) Var_46)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float F_37 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 0)));
            MR_Box Stream_64 = (MR_Box) HeadVar__1_1;
            MR_Box Error_66;
            MR_Word next_value_of_HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__io__write_many_4_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_64 ;
	Val =  F_37 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_66 );
}
            mercury__io__throw_on_error_4_p_0(Error_66, (MR_String) "error writing to output file: ");
            // direct tailcall eliminated
            next_value_of_HeadVar__2_2 = Var_45;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer I_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0)));
            MR_Box Stream_86 = (MR_Box) HeadVar__1_1;
            MR_Box Error_88;
            MR_Word next_value_of_HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__io__write_many_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_86 ;
	Val =  I_19 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_88 );
}
            mercury__io__throw_on_error_4_p_0(Error_88, (MR_String) "error writing to output file: ");
            // direct tailcall eliminated
            next_value_of_HeadVar__2_2 = Var_45;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String S_28 = ((MR_String) (MR_hl_field(MR_mktag(2), Var_46, (MR_Integer) 0)));
            MR_Word next_value_of_HeadVar__2_2;

            mercury__io__write_string_4_p_0(HeadVar__1_1, S_28);
            // direct tailcall eliminated
            next_value_of_HeadVar__2_2 = Var_45;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Char C_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 0)));
            MR_Box Stream_50 = (MR_Box) HeadVar__1_1;
            MR_Box Error_52;
            MR_Word next_value_of_HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__io__write_many_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_50 ;
	Character =  C_10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_52 );
}
            mercury__io__throw_on_error_4_p_0(Error_52, (MR_String) "error writing to output file: ");
            // direct tailcall eliminated
            next_value_of_HeadVar__2_2 = Var_45;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
      }
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
  {
    MR_String String_10;
    MR_Box Stream_20;
    MR_Box Error_22;

    mercury__string__format__format_impl_3_p_0(FormatString_7, Arguments_8, &String_10);
    Stream_20 = (MR_Box) Stream_6;
{
#define MR_PROC_LABEL mercury__io__format_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_20 ;
	Message =  String_10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_22 );
}
    mercury__io__throw_on_error_4_p_0(Error_22, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__format_4_p_0(
  MR_String FormatString_5,
  MR_Word Arguments_6)
{
  {
    MR_Word Stream_8;
    MR_Box Stream_15;
    MR_String String_24;
    MR_Box Stream_32;
    MR_Box Error_34;

{
#define MR_PROC_LABEL mercury__io__format_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_15  = (MR_Box) Stream;
}
    Stream_8 = (MR_Word) Stream_15;
    mercury__string__format__format_impl_3_p_0(FormatString_5, Arguments_6, &String_24);
    Stream_32 = (MR_Box) Stream_8;
{
#define MR_PROC_LABEL mercury__io__format_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_32 ;
	Message =  String_24 ;
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
}

void MR_CALL 
mercury__io__write_float_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Float Val_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_float_4_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	Val =  Val_6 ;
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
}

void MR_CALL 
mercury__io__write_float_3_p_0(
  MR_Float Val_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_float_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_float_3_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	Val =  Val_4 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_21 );
}
    mercury__io__throw_on_error_4_p_0(Error_21, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_uint32_4_p_0(
  MR_Word HeadVar__1_1,
  uint32_t Val_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_uint32_4_p_0

	MercuryFilePtr Stream;
	uint32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	Val =  Val_6 ;
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
}

void MR_CALL 
mercury__io__write_uint32_3_p_0(
  uint32_t Val_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_uint32_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_uint32_3_p_0

	MercuryFilePtr Stream;
	uint32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	Val =  Val_4 ;
		{

    if (ML_fprintf(Stream, "%" PRIu32, Val) < 0) {
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
}

void MR_CALL 
mercury__io__write_uint16_4_p_0(
  MR_Word HeadVar__1_1,
  uint16_t Val_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_uint16_4_p_0

	MercuryFilePtr Stream;
	uint16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	Val =  Val_6 ;
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
}

void MR_CALL 
mercury__io__write_uint16_3_p_0(
  uint16_t Val_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_uint16_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_uint16_3_p_0

	MercuryFilePtr Stream;
	uint16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	Val =  Val_4 ;
		{

    if (ML_fprintf(Stream, "%" PRIu16, Val) < 0) {
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
}

void MR_CALL 
mercury__io__write_uint8_4_p_0(
  MR_Word HeadVar__1_1,
  uint8_t Val_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_uint8_4_p_0

	MercuryFilePtr Stream;
	uint8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	Val =  Val_6 ;
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
}

void MR_CALL 
mercury__io__write_uint8_3_p_0(
  uint8_t Val_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_uint8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_uint8_3_p_0

	MercuryFilePtr Stream;
	uint8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	Val =  Val_4 ;
		{

    if (ML_fprintf(Stream, "%" PRIu8, Val) < 0) {
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
}

void MR_CALL 
mercury__io__write_uint_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned Val_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_uint_4_p_0

	MercuryFilePtr Stream;
	MR_Unsigned Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	Val =  Val_6 ;
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
}

void MR_CALL 
mercury__io__write_uint_3_p_0(
  MR_Unsigned Val_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_uint_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_uint_3_p_0

	MercuryFilePtr Stream;
	MR_Unsigned Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	Val =  Val_4 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "u", Val) < 0) {
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
}

void MR_CALL 
mercury__io__write_int32_4_p_0(
  MR_Word HeadVar__1_1,
  int32_t Val_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_int32_4_p_0

	MercuryFilePtr Stream;
	int32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	Val =  Val_6 ;
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
}

void MR_CALL 
mercury__io__write_int32_3_p_0(
  int32_t Val_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_int32_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_int32_3_p_0

	MercuryFilePtr Stream;
	int32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	Val =  Val_4 ;
		{

    if (ML_fprintf(Stream, "%" PRId32, Val) < 0) {
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
}

void MR_CALL 
mercury__io__write_int16_4_p_0(
  MR_Word HeadVar__1_1,
  int16_t Val_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_int16_4_p_0

	MercuryFilePtr Stream;
	int16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	Val =  Val_6 ;
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
}

void MR_CALL 
mercury__io__write_int16_3_p_0(
  int16_t Val_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_int16_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_int16_3_p_0

	MercuryFilePtr Stream;
	int16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	Val =  Val_4 ;
		{

    if (ML_fprintf(Stream, "%" PRId16, Val) < 0) {
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
}

void MR_CALL 
mercury__io__write_int8_4_p_0(
  MR_Word HeadVar__1_1,
  int8_t Val_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_int8_4_p_0

	MercuryFilePtr Stream;
	int8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	Val =  Val_6 ;
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
}

void MR_CALL 
mercury__io__write_int8_3_p_0(
  int8_t Val_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_int8_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_int8_3_p_0

	MercuryFilePtr Stream;
	int8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	Val =  Val_4 ;
		{

    if (ML_fprintf(Stream, "%" PRId8, Val) < 0) {
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
}

void MR_CALL 
mercury__io__write_int_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Val_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_int_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	Val =  Val_6 ;
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
}

void MR_CALL 
mercury__io__write_int_3_p_0(
  MR_Integer Val_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_int_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_int_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	Val =  Val_4 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
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
}

void MR_CALL 
mercury__io__write_char_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Char Character_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_char_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	Character =  Character_6 ;
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
}

void MR_CALL 
mercury__io__write_char_3_p_0(
  MR_Char Character_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_char_3_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	Character =  Character_4 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_21 );
}
    mercury__io__throw_on_error_4_p_0(Error_21, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_strings_3_p_0(
  MR_Word Strings_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_13;

{
#define MR_PROC_LABEL mercury__io__write_strings_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_13  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_13;
    mercury__io__write_strings_4_p_0(Stream_6, Strings_4);
  }
}

void MR_CALL 
mercury__io__write_strings_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_String S_10 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ss_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Box Stream_20 = (MR_Box) HeadVar__1_1;
      MR_Box Error_22;
      MR_Word next_value_of_HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__io__write_strings_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_20 ;
	Message =  S_10 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_22 );
}
      mercury__io__throw_on_error_4_p_0(Error_22, (MR_String) "error writing to output file: ");
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = Ss_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__io__write_string_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String Message_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Box Error_8;

{
#define MR_PROC_LABEL mercury__io__write_string_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
	Message =  Message_6 ;
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
}

void MR_CALL 
mercury__io__write_string_3_p_0(
  MR_String Message_4)
{
  {
    MR_Box Stream_19;
    MR_Box Error_21;

{
#define MR_PROC_LABEL mercury__io__write_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_string_3_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_19 ;
	Message =  Message_4 ;
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
}

void MR_CALL 
mercury__io__nl_3_p_0(
  MR_Word Stream_4)
{
  {
    MR_Box Stream_13 = (MR_Box) Stream_4;
    MR_Box Error_15;

{
#define MR_PROC_LABEL mercury__io__nl_3_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_13 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_15 );
}
    mercury__io__throw_on_error_4_p_0(Error_15, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__nl_2_p_0(void)
{
  {
    MR_Box Stream_23;
    MR_Box Error_25;

{
#define MR_PROC_LABEL mercury__io__nl_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_23  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__nl_2_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_23 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_25 );
}
    mercury__io__throw_on_error_4_p_0(Error_25, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_line_cc_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box X_4)
{
  {
    MR_Word TypeClassInfo_for_writer_30;
    MR_Word TypeClassInfo_for_writer_31;
    MR_Word Stream_15;
    MR_Box Stream_20;
    MR_Word V_10_37;
    MR_Box Stream_58;
    MR_Box Error_60;

{
#define MR_PROC_LABEL mercury__io__write_line_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_20  = (MR_Box) Stream;
}
    Stream_15 = (MR_Word) Stream_20;
    TypeClassInfo_for_writer_30 = (MR_Word) &mercury__io_scalar_common_3[0];
    TypeClassInfo_for_writer_31 = (MR_Word) &mercury__io_scalar_common_3[1];
    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_10, X_4, &V_10_37);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(TypeClassInfo_for_writer_30, TypeClassInfo_for_writer_31, Stream_15, (MR_Integer) 2, V_10_37);
{
#define MR_PROC_LABEL mercury__io__write_line_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_58  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_line_cc_3_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_58 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_60 );
}
    mercury__io__throw_on_error_4_p_0(Error_60, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_line_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_5,
  MR_Box X_6)
{
  {
    MR_Word TypeClassInfo_for_writer_20 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_21 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word V_10_27;
    MR_Box Stream_37;
    MR_Box Error_39;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_12, X_6, &V_10_27);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeClassInfo_for_writer_20, TypeClassInfo_for_writer_21, Stream_5, (MR_Integer) 1, V_10_27);
    Stream_37 = (MR_Box) Stream_5;
{
#define MR_PROC_LABEL mercury__io__write_line_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_37 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_39 );
}
    mercury__io__throw_on_error_4_p_0(Error_39, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_line_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box X_4)
{
  {
    MR_Word TypeClassInfo_for_writer_19;
    MR_Word TypeClassInfo_for_writer_20;
    MR_Word Stream_15;
    MR_Box Stream_23;
    MR_Word V_10_31;
    MR_Box Stream_52;
    MR_Box Error_54;

{
#define MR_PROC_LABEL mercury__io__write_line_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_23  = (MR_Box) Stream;
}
    Stream_15 = (MR_Word) Stream_23;
    TypeClassInfo_for_writer_19 = (MR_Word) &mercury__io_scalar_common_3[0];
    TypeClassInfo_for_writer_20 = (MR_Word) &mercury__io_scalar_common_3[1];
    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_10, X_4, &V_10_31);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeClassInfo_for_writer_19, TypeClassInfo_for_writer_20, Stream_15, (MR_Integer) 1, V_10_31);
{
#define MR_PROC_LABEL mercury__io__write_line_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_52  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__write_line_3_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_52 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_54 );
}
    mercury__io__throw_on_error_4_p_0(Error_54, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_cc_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_5,
  MR_Box X_6)
{
  {
    MR_Word TypeClassInfo_for_writer_13 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word V_10_20;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_12, X_6, &V_10_20);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_5, (MR_Integer) 2, V_10_20);
  }
}

void MR_CALL 
mercury__io__write_cc_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box X_4)
{
  {
    MR_Word TypeClassInfo_for_writer_24;
    MR_Word TypeClassInfo_for_writer_25;
    MR_Word Stream_6;
    MR_Box Stream_14;
    MR_Word V_10_31;

{
#define MR_PROC_LABEL mercury__io__write_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_14  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_14;
    TypeClassInfo_for_writer_24 = (MR_Word) &mercury__io_scalar_common_3[0];
    TypeClassInfo_for_writer_25 = (MR_Word) &mercury__io_scalar_common_3[1];
    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_11, X_4, &V_10_31);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(TypeClassInfo_for_writer_24, TypeClassInfo_for_writer_25, Stream_6, (MR_Integer) 2, V_10_31);
  }
}

void MR_CALL 
mercury__io__write_line_5_p_3(
  MR_Word TypeInfo_for_T_14,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  {
    MR_Word TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word V_10_29;
    MR_Box Stream_39;
    MR_Box Error_41;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_14, X_8, &V_10_29);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, Stream_6, NonCanon_7, V_10_29);
    Stream_39 = (MR_Box) Stream_6;
{
#define MR_PROC_LABEL mercury__io__write_line_5_p_3

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_39 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_41 );
}
    mercury__io__throw_on_error_4_p_0(Error_41, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_line_5_p_2(
  MR_Word TypeInfo_for_T_14,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  {
    MR_Word TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word V_10_29;
    MR_Box Stream_39;
    MR_Box Error_41;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_14, X_8, &V_10_29);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, Stream_6, NonCanon_7, V_10_29);
    Stream_39 = (MR_Box) Stream_6;
{
#define MR_PROC_LABEL mercury__io__write_line_5_p_2

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_39 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_41 );
}
    mercury__io__throw_on_error_4_p_0(Error_41, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_line_5_p_1(
  MR_Word TypeInfo_for_T_14,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  {
    MR_Word TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word V_10_29;
    MR_Box Stream_39;
    MR_Box Error_41;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_14, X_8, &V_10_29);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, Stream_6, NonCanon_7, V_10_29);
    Stream_39 = (MR_Box) Stream_6;
{
#define MR_PROC_LABEL mercury__io__write_line_5_p_1

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_39 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_41 );
}
    mercury__io__throw_on_error_4_p_0(Error_41, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_line_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  {
    MR_Word TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word V_10_29;
    MR_Box Stream_39;
    MR_Box Error_41;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_14, X_8, &V_10_29);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, Stream_6, NonCanon_7, V_10_29);
    Stream_39 = (MR_Box) Stream_6;
{
#define MR_PROC_LABEL mercury__io__write_line_5_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_39 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_41 );
}
    mercury__io__throw_on_error_4_p_0(Error_41, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__write_5_p_3(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  {
    MR_Word TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word V_10_21;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_13, X_8, &V_10_21);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_6, NonCanon_7, V_10_21);
  }
}

void MR_CALL 
mercury__io__write_5_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  {
    MR_Word TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word V_10_21;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_13, X_8, &V_10_21);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_6, NonCanon_7, V_10_21);
  }
}

void MR_CALL 
mercury__io__write_5_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  {
    MR_Word TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word V_10_21;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_13, X_8, &V_10_21);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_6, NonCanon_7, V_10_21);
  }
}

void MR_CALL 
mercury__io__write_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box X_8)
{
  {
    MR_Word TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word V_10_21;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_13, X_8, &V_10_21);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_6, NonCanon_7, V_10_21);
  }
}

void MR_CALL 
mercury__io__write_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_5,
  MR_Box X_6)
{
  {
    MR_Word TypeClassInfo_for_writer_13 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Word V_10_20;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_12, X_6, &V_10_20);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_5, (MR_Integer) 1, V_10_20);
  }
}

void MR_CALL 
mercury__io__write_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box X_4)
{
  {
    MR_Word TypeClassInfo_for_writer_13;
    MR_Word TypeClassInfo_for_writer_14;
    MR_Word Stream_6;
    MR_Box Stream_17;
    MR_Word V_10_25;

{
#define MR_PROC_LABEL mercury__io__write_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_17  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_17;
    TypeClassInfo_for_writer_13 = (MR_Word) &mercury__io_scalar_common_3[0];
    TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[1];
    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_12, X_4, &V_10_25);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_6, (MR_Integer) 1, V_10_25);
  }
}

void MR_CALL 
mercury__io__print_line_cc_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box Term_4)
{
  {
    MR_Word TypeClassInfo_for_writer_18;
    MR_Word TypeClassInfo_for_writer_19;
    MR_Word Stream_15;
    MR_Box Stream_22;
    MR_Box Stream_50;
    MR_Box Error_52;
    MR_Box conv0_STATE_VARIABLE_IO_8_8;

{
#define MR_PROC_LABEL mercury__io__print_line_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_22  = (MR_Box) Stream;
}
    Stream_15 = (MR_Word) Stream_22;
    TypeClassInfo_for_writer_18 = (MR_Word) &mercury__io_scalar_common_3[0];
    TypeClassInfo_for_writer_19 = (MR_Word) &mercury__io_scalar_common_3[1];
    mercury__stream__string_writer__print_5_p_2(TypeInfo_for_T_10, TypeClassInfo_for_writer_18, TypeClassInfo_for_writer_19, ((MR_Box) (Stream_15)), (MR_Integer) 2, Term_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_8_8);
{
#define MR_PROC_LABEL mercury__io__print_line_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_50  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__io__print_line_cc_3_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_50 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_52 );
}
    mercury__io__throw_on_error_4_p_0(Error_52, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__print_line_5_p_3(
  MR_Word TypeInfo_for_T_14,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  {
    MR_Word TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box Stream_33;
    MR_Box Error_35;
    MR_Box conv0_STATE_VARIABLE_IO_12_12;

    mercury__stream__string_writer__print_5_p_3(TypeInfo_for_T_14, TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_12);
    Stream_33 = (MR_Box) Stream_6;
{
#define MR_PROC_LABEL mercury__io__print_line_5_p_3

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_33 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_35 );
}
    mercury__io__throw_on_error_4_p_0(Error_35, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__print_line_5_p_2(
  MR_Word TypeInfo_for_T_14,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  {
    MR_Word TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box Stream_33;
    MR_Box Error_35;
    MR_Box conv0_STATE_VARIABLE_IO_12_12;

    mercury__stream__string_writer__print_5_p_2(TypeInfo_for_T_14, TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_12);
    Stream_33 = (MR_Box) Stream_6;
{
#define MR_PROC_LABEL mercury__io__print_line_5_p_2

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_33 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_35 );
}
    mercury__io__throw_on_error_4_p_0(Error_35, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__print_line_5_p_1(
  MR_Word TypeInfo_for_T_14,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  {
    MR_Word TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box Stream_33;
    MR_Box Error_35;
    MR_Box conv0_STATE_VARIABLE_IO_12_12;

    mercury__stream__string_writer__print_5_p_1(TypeInfo_for_T_14, TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_12);
    Stream_33 = (MR_Box) Stream_6;
{
#define MR_PROC_LABEL mercury__io__print_line_5_p_1

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_33 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_35 );
}
    mercury__io__throw_on_error_4_p_0(Error_35, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__print_line_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  {
    MR_Word TypeClassInfo_for_writer_22 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_23 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box Stream_33;
    MR_Box Error_35;
    MR_Box conv0_STATE_VARIABLE_IO_12_12;

    mercury__stream__string_writer__print_5_p_0(TypeInfo_for_T_14, TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_12);
    Stream_33 = (MR_Box) Stream_6;
{
#define MR_PROC_LABEL mercury__io__print_line_5_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_33 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_35 );
}
    mercury__io__throw_on_error_4_p_0(Error_35, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__print_line_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box Term_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_14;

{
#define MR_PROC_LABEL mercury__io__print_line_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_14  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_14;
    mercury__io__print_line_4_p_0(TypeInfo_for_T_11, Stream_6, Term_4);
  }
}

void MR_CALL 
mercury__io__print_line_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_5,
  MR_Box Term_6)
{
  {
    MR_Word TypeClassInfo_for_writer_20 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_21 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box Stream_31;
    MR_Box Error_33;
    MR_Box conv0_STATE_VARIABLE_IO_10_10;

    mercury__stream__string_writer__print_5_p_1(TypeInfo_for_T_12, TypeClassInfo_for_writer_20, TypeClassInfo_for_writer_21, ((MR_Box) (Stream_5)), (MR_Integer) 1, Term_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_10_10);
    Stream_31 = (MR_Box) Stream_5;
{
#define MR_PROC_LABEL mercury__io__print_line_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_31 ;
	Character =  (MR_Char) 10 ;
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
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_33 );
}
    mercury__io__throw_on_error_4_p_0(Error_33, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__io__throw_on_error_4_p_0(
  MR_Box Error_5,
  MR_String Prefix_6)
{
  {
    MR_bool succeeded;
    MR_Word IOError_8;
    MR_String Message_14;

{
#define MR_PROC_LABEL mercury__io__throw_on_error_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_5 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__throw_on_error_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_5 , Error);
	Msg0 =  Prefix_6 ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_14  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_8 = (MR_Word) Message_14;
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;

      {
        mercury__exception__throw_1_p_0(TypeCtorInfo_11_11, ((MR_Box) (IOError_8)));
        return;
      }
    }
    else
    {
    }
  }
}

void MR_CALL 
mercury__io__print_cc_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box Term_4)
{
  {
    MR_Word TypeClassInfo_for_writer_12;
    MR_Word TypeClassInfo_for_writer_13;
    MR_Word Stream_6;
    MR_Box Stream_16;
    MR_Box conv0_STATE_VARIABLE_IO_8;

{
#define MR_PROC_LABEL mercury__io__print_cc_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_16  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_16;
    TypeClassInfo_for_writer_12 = (MR_Word) &mercury__io_scalar_common_3[0];
    TypeClassInfo_for_writer_13 = (MR_Word) &mercury__io_scalar_common_3[1];
    mercury__stream__string_writer__print_5_p_2(TypeInfo_for_T_11, TypeClassInfo_for_writer_12, TypeClassInfo_for_writer_13, ((MR_Box) (Stream_6)), (MR_Integer) 2, Term_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_8);
  }
}

void MR_CALL 
mercury__io__print_5_p_3(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  {
    MR_Word TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box conv0_STATE_VARIABLE_IO_11;

    mercury__stream__string_writer__print_5_p_3(TypeInfo_for_T_13, TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

void MR_CALL 
mercury__io__print_5_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  {
    MR_Word TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box conv0_STATE_VARIABLE_IO_11;

    mercury__stream__string_writer__print_5_p_2(TypeInfo_for_T_13, TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

void MR_CALL 
mercury__io__print_5_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  {
    MR_Word TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box conv0_STATE_VARIABLE_IO_11;

    mercury__stream__string_writer__print_5_p_1(TypeInfo_for_T_13, TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

void MR_CALL 
mercury__io__print_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  {
    MR_Word TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_15 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box conv0_STATE_VARIABLE_IO_11;

    mercury__stream__string_writer__print_5_p_0(TypeInfo_for_T_13, TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, ((MR_Box) (Stream_6)), NonCanon_7, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

void MR_CALL 
mercury__io__print_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_5,
  MR_Box Term_6)
{
  {
    MR_Word TypeClassInfo_for_writer_13 = (MR_Word) &mercury__io_scalar_common_3[0];
    MR_Word TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[1];
    MR_Box conv0_STATE_VARIABLE_IO_9;

    mercury__stream__string_writer__print_5_p_1(TypeInfo_for_T_12, TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, ((MR_Box) (Stream_5)), (MR_Integer) 1, Term_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

void MR_CALL 
mercury__io__print_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Box Term_4)
{
  {
    MR_Word TypeClassInfo_for_writer_13;
    MR_Word TypeClassInfo_for_writer_14;
    MR_Word Stream_6;
    MR_Box Stream_17;
    MR_Box conv0_STATE_VARIABLE_IO_8;

{
#define MR_PROC_LABEL mercury__io__print_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Stream_17  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_17;
    TypeClassInfo_for_writer_13 = (MR_Word) &mercury__io_scalar_common_3[0];
    TypeClassInfo_for_writer_14 = (MR_Word) &mercury__io_scalar_common_3[1];
    mercury__stream__string_writer__print_5_p_1(TypeInfo_for_T_12, TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, ((MR_Box) (Stream_6)), (MR_Integer) 1, Term_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_8);
  }
}

void MR_CALL 
mercury__io__ignore_whitespace_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_13;

{
#define MR_PROC_LABEL mercury__io__ignore_whitespace_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_13  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_13;
    mercury__io__ignore_whitespace_4_p_0(Stream_6, Result_4);
  }
}

void MR_CALL 
mercury__io__read_from_string_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_String FileName_7,
  MR_String String_8,
  MR_Integer Len_9,
  MR_Word * Result_10,
  MR_Word STATE_VARIABLE_Posn_0_16,
  MR_Word * STATE_VARIABLE_Posn_17)
{
  {
    MR_Word TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word TypeClassInfo_for_op_table_28;
    MR_Word ReadResult_12;
    MR_Integer LineNumber_13;
    MR_Word V_15_36;
    MR_Integer Var_14;
    MR_Integer Var_15;

    TypeClassInfo_for_op_table_28 = (MR_Word) &mercury__io_scalar_common_4[1];
    mercury__lexer__string_get_token_list_max_5_p_0(String_8, Len_9, &V_15_36, STATE_VARIABLE_Posn_0_16, STATE_VARIABLE_Posn_17);
    mercury__parser__parse_tokens_with_op_table_4_p_0(TypeCtorInfo_20_20, TypeClassInfo_for_op_table_28, ((MR_Box) ((MR_Integer) 0)), FileName_7, V_15_36, &ReadResult_12);
    LineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Posn_17, (MR_Integer) 0)));
    Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Posn_17, (MR_Integer) 1)));
    Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Posn_17, (MR_Integer) 2)));
    mercury__io__process_read_term_3_p_0(TypeInfo_for_T_19, ReadResult_12, LineNumber_13, Result_10);
  }
}

static void MR_CALL 
mercury__io__read_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    mercury__io__restore_input_stream_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv1_HeadVar__3_3);
    *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__io__read_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_4;

    mercury__io__read_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), &conv0_Result_4);
    *wrapper_arg_1 = ((MR_Box) (conv0_Result_4));
  }
}

void MR_CALL 
mercury__io__read_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  {
    MR_Word TypeCtorInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word Var_10;
    MR_Word OrigStream_24;
    MR_Word Var_27;
    MR_Box NewStream_35;
    MR_Box OutStream_36;
    MR_Word _CleanupRes_25;
    MR_Box conv2_Result_6;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&mercury__io_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (mercury__io__read_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (TypeInfo_for_T_12));
    }
    TypeCtorInfo_16_16 = (MR_Word) &mercury__io__io__type_ctor_info_read_result_1;
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    NewStream_35 = (MR_Box) Stream_5;
{
#define MR_PROC_LABEL mercury__io__read_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_35 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	 OutStream_36  = (MR_Box) OutStream;
}
    OrigStream_24 = (MR_Word) OutStream_36;
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&mercury__io_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (mercury__io__read_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (TypeInfo_17_17));
      MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), Var_27, 5) = ((MR_Box) (OrigStream_24));
    }
    mercury__exception__finally_2_6_p_0(TypeInfo_17_17, (MR_Word) Var_10, Var_27, &conv2_Result_6, &_CleanupRes_25);
    *Result_6 = ((MR_Word) conv2_Result_6);
  }
}

void MR_CALL 
mercury__io__read_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word * Result_4)
{
  {
    MR_Word TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word TypeClassInfo_for_op_table_30;
    MR_Word ReadResult_6;
    MR_Integer LineNumber_7;
    MR_Word V_6_17;
    MR_String V_10_44;
    MR_Box Stream_49;

{
#define MR_PROC_LABEL mercury__io__read_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_49  = (MR_Box) Stream;
}
    V_6_17 = (MR_Word) Stream_49;
    TypeClassInfo_for_op_table_30 = (MR_Word) &mercury__io_scalar_common_4[1];
    mercury__io__stream_name_4_p_0(Stream_49, &V_10_44);
    mercury__parser__read_term_filename_with_op_table_6_p_0(TypeCtorInfo_13_13, TypeClassInfo_for_op_table_30, V_6_17, ((MR_Box) ((MR_Integer) 0)), V_10_44, &ReadResult_6);
{
#define MR_PROC_LABEL mercury__io__read_3_p_0

	MR_Integer LineNum;

		{

    LineNum = MR_line_number(*mercury_current_text_input());


		;}
#undef MR_PROC_LABEL
	 LineNumber_7  = LineNum;
}
    mercury__io__process_read_term_3_p_0(TypeInfo_for_T_12, ReadResult_6, LineNumber_7, Result_4);
  }
}

void MR_CALL 
mercury__io__stream_name_4_p_0(
  MR_Box Stream_5,
  MR_String * Name_6)
{
  {
    MR_Word MaybeInfo_8;

    mercury__io__stream_info_4_p_0(Stream_5, &MaybeInfo_8);
    if ((MaybeInfo_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Name_6 = (MR_String) "<stream name unavailable>";
    else
    {
      MR_Word Info_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInfo_8, (MR_Integer) 0)));
      MR_Word Source_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 3)));
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0)));
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)));
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 2)));

      switch (MR_tag((MR_Word) Source_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Source_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Name_6 = (MR_String) "<standard input>";
              break;
            case (MR_Integer) 1:
              *Name_6 = (MR_String) "<standard output>";
              break;
            case (MR_Integer) 2:
              *Name_6 = (MR_String) "<standard error>";
              break;
          }
          break;
        case (MR_Integer) 1:
          *Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), Source_13, (MR_Integer) 0)));
          break;
      }
    }
  }
}

void MR_CALL 
mercury__io__stream_info_4_p_0(
  MR_Box Stream_5,
  MR_Word * MaybeInfo_6)
{
  {
    MR_bool succeeded;
    MR_Word StreamDb_8;
    MR_Word Info_9;
    MR_Word TypeCtorInfo_17_17;
    MR_Integer Var_15;
    MR_Box conv0_Info_9;

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
	 StreamDb_8  = StreamDb;
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

	Stream = (MercuryFilePtr) Stream_5 ;
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
	 Var_15  = Id;
}
    TypeCtorInfo_17_17 = (MR_Word) &mercury__io__io__type_ctor_info_stream_info_0;
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeCtorInfo_17_17, StreamDb_8, Var_15, &conv0_Info_9);
    if (succeeded)
    {
      Info_9 = ((MR_Word) conv0_Info_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeInfo_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Info_9));
      }
    else
      *MaybeInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
mercury__io__process_read_term_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word ReadResult_4,
  MR_Integer LineNumber_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ReadResult_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_String String_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ReadResult_4, (MR_Integer) 0)));
          MR_Integer Int_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ReadResult_4, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (String_10));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Int_11));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Term_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ReadResult_4, (MR_Integer) 1)));
          MR_Word _VarSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ReadResult_4, (MR_Integer) 0)));
          MR_Box Type_9;
          MR_Word TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
          MR_Word V_5_19;

          mercury__term_conversion__try_term_to_type_2_p_0(TypeCtorInfo_15_15, TypeInfo_for_T_14, Term_8, &V_5_19);
          succeeded = ((MR_tag((MR_Word) V_5_19)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Type_9 = (MR_hl_field(MR_mktag(0), V_5_19, (MR_Integer) 0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *Result_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = Type_9;
            }
          }
          else
          {
            MR_Word TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
            MR_Word V_3_23;
            MR_Word V_2_22;
            MR_Word V_4_24;

            succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              V_2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0)));
              V_3_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1)));
              V_4_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 2)));
              succeeded = mercury__term__is_ground_list_1_p_0(TypeCtorInfo_16_16, V_3_23);
            }
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Result_6 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((MR_String) "io.read: the term read did not have the right type"));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (LineNumber_5));
              }
            }
            else
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Result_6 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((MR_String) "io.read: the term read was not a ground term"));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (LineNumber_5));
              }
            }
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__read_char_unboxed_5_p_0(
  MR_Word Stream_6,
  MR_Word * Result_7,
  MR_Char * Char_8)
{
  {
    MR_Word Result0_10;
    MR_Box Error_11;
    MR_Box Stream_23 = (MR_Box) Stream_6;

    mercury__io__read_char_code_2_6_p_0(Stream_23, &Result0_10, Char_8, &Error_11);
    switch (Result0_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *Result_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_12;
          MR_Word Var_17;

{
#define MR_PROC_LABEL mercury__io__read_char_unboxed_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_11 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_12  = Msg;
}
          Var_17 = (MR_Word) Msg_12;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
          }
        }
        break;
      case (MR_Integer) 0:
        *Result_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
  }
}

void MR_CALL 
mercury__io__putback_char_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Char Character_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Word Ok_8;

    mercury__io__putback_char_2_5_p_0(Stream_5, Character_6, &Ok_8);
    switch (Ok_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_14_14 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
          MR_Word Var_12 = (MR_Word) ((MR_Box) ((MR_String) "failed to put back character"));

          {
            mercury__exception__throw_1_p_0(TypeCtorInfo_14_14, ((MR_Box) (Var_12)));
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__putback_char_3_p_0(
  MR_Char Char_4)
{
  {
    MR_Box Stream_19;
    MR_Word Ok_21;

{
#define MR_PROC_LABEL mercury__io__putback_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_19  = (MR_Box) Stream;
}
    mercury__io__putback_char_2_5_p_0(Stream_19, Char_4, &Ok_21);
    switch (Ok_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_14_25 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
          MR_Word Var_23 = (MR_Word) ((MR_Box) ((MR_String) "failed to put back character"));

          {
            mercury__exception__throw_1_p_0(TypeCtorInfo_14_25, ((MR_Box) (Var_23)));
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_maybe_stop_5_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  {
    MR_Word Stream_10;
    MR_Box Stream_18;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_18  = (MR_Box) Stream;
}
    Stream_10 = (MR_Word) Stream_18;
    mercury__io__input_stream_foldl2_io_maybe_stop_6_p_1(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
  }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_maybe_stop_6_p_1(
  MR_Word TypeInfo_for_T_22,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word CharResult_12;
    MR_Word Result0_28;
    MR_Char Char_29;
    MR_Box Error_30;
    MR_Box Stream_40 = (MR_Box) Stream_7;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_char_code_2_6_p_0(Stream_40, &Result0_28, &Char_29, &Error_30);
    switch (Result0_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_31;
          MR_Word Var_34;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_30 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_31  = Msg;
}
          Var_34 = (MR_Word) Msg_31;
          {
            CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_12, 0) = ((MR_Box) (Var_34));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_29));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_12, (MR_Integer) 0)));
          MR_Word Continue_14;
          MR_Box T1_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Box conv2_Continue_14;
          MR_Box conv1_STATE_VARIABLE_IO_20_20;

          func_0(((MR_Box) Pred_8), ((MR_Box) (MR_Word) (Char_13)), &conv2_Continue_14, T0_9, &T1_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
          Continue_14 = ((MR_Word) conv2_Continue_14);
          switch (Continue_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *Res_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = T1_15;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box next_value_of_T0_9 = T1_15;

                // direct tailcall eliminated
                T0_9 = next_value_of_T0_9;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), CharResult_12, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
  MR_Word TypeInfo_for_T_15,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  {
    MR_Word Stream_10;
    MR_Box Stream_18;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_18  = (MR_Box) Stream;
}
    Stream_10 = (MR_Word) Stream_18;
    mercury__io__input_stream_foldl2_io_maybe_stop_6_p_0(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
  }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_maybe_stop_6_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word CharResult_12;
    MR_Word Result0_28;
    MR_Char Char_29;
    MR_Box Error_30;
    MR_Box Stream_40 = (MR_Box) Stream_7;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_char_code_2_6_p_0(Stream_40, &Result0_28, &Char_29, &Error_30);
    switch (Result0_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_31;
          MR_Word Var_34;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_maybe_stop_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_30 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_31  = Msg;
}
          Var_34 = (MR_Word) Msg_31;
          {
            CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_12, 0) = ((MR_Box) (Var_34));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_29));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_12, (MR_Integer) 0)));
          MR_Word Continue_14;
          MR_Box T1_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Box conv2_Continue_14;
          MR_Box conv1_STATE_VARIABLE_IO_20_20;

          func_0(((MR_Box) Pred_8), ((MR_Box) (MR_Word) (Char_13)), &conv2_Continue_14, T0_9, &T1_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
          Continue_14 = ((MR_Word) conv2_Continue_14);
          switch (Continue_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *Res_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = T1_15;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box next_value_of_T0_9 = T1_15;

                // direct tailcall eliminated
                T0_9 = next_value_of_T0_9;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), CharResult_12, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
  MR_Word TypeInfo_for_T_15,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  {
    MR_Word Stream_10;
    MR_Box Stream_18;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_18  = (MR_Box) Stream;
}
    Stream_10 = (MR_Word) Stream_18;
    mercury__io__input_stream_foldl2_io_6_p_1(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
  }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_6_p_1(
  MR_Word TypeInfo_for_T_21,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word CharResult_12;
    MR_Word Result0_27;
    MR_Char Char_28;
    MR_Box Error_29;
    MR_Box Stream_39 = (MR_Box) Stream_7;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_char_code_2_6_p_0(Stream_39, &Result0_27, &Char_28, &Error_29);
    switch (Result0_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_30;
          MR_Word Var_33;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_29 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_30  = Msg;
}
          Var_33 = (MR_Word) Msg_30;
          {
            CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_12, 0) = ((MR_Box) (Var_33));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_28));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Box conv1_STATE_VARIABLE_IO_19_19;
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) Pred_8), ((MR_Box) (MR_Word) (Char_13)), T0_9, &T1_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
          // direct tailcall eliminated
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), CharResult_12, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
  MR_Word TypeInfo_for_T_15,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  {
    MR_Word Stream_10;
    MR_Box Stream_18;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_18  = (MR_Box) Stream;
}
    Stream_10 = (MR_Word) Stream_18;
    mercury__io__input_stream_foldl2_io_6_p_0(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
  }
}

void MR_CALL 
mercury__io__input_stream_foldl2_io_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word CharResult_12;
    MR_Word Result0_27;
    MR_Char Char_28;
    MR_Box Error_29;
    MR_Box Stream_39 = (MR_Box) Stream_7;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_char_code_2_6_p_0(Stream_39, &Result0_27, &Char_28, &Error_29);
    switch (Result0_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_30;
          MR_Word Var_33;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl2_io_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_29 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_30  = Msg;
}
          Var_33 = (MR_Word) Msg_30;
          {
            CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_12, 0) = ((MR_Box) (Var_33));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_28));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Box conv1_STATE_VARIABLE_IO_19_19;
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) Pred_8), ((MR_Box) (MR_Word) (Char_13)), T0_9, &T1_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
          // direct tailcall eliminated
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), CharResult_12, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
  {
    MR_Word Stream_8;
    MR_Box Stream_15;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_4_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_15  = (MR_Box) Stream;
}
    Stream_8 = (MR_Word) Stream_15;
    mercury__io__input_stream_foldl_io_5_p_1(Stream_8, Pred_5, Res_6);
  }
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
    MR_Word Result0_23;
    MR_Char Char_24;
    MR_Box Error_25;
    MR_Box Stream_35 = (MR_Box) Stream_6;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_char_code_2_6_p_0(Stream_35, &Result0_23, &Char_24, &Error_25);
    switch (Result0_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_26;
          MR_Word Var_29;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_5_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_25 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_26  = Msg;
}
          Var_29 = (MR_Word) Msg_26;
          {
            CharResult_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_10, 0) = ((MR_Box) (Var_29));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_10, 0) = ((MR_Box) (MR_Word) (Char_24));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_10, (MR_Integer) 0)));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1)));
          MR_Box conv1_STATE_VARIABLE_IO_16_16;

          func_0(((MR_Box) Pred_7), ((MR_Box) (MR_Word) (Char_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
          // direct tailcall eliminated
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), CharResult_10, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
  {
    MR_Word Stream_8;
    MR_Box Stream_15;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_15  = (MR_Box) Stream;
}
    Stream_8 = (MR_Word) Stream_15;
    mercury__io__input_stream_foldl_io_5_p_0(Stream_8, Pred_5, Res_6);
  }
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
    MR_Word Result0_23;
    MR_Char Char_24;
    MR_Box Error_25;
    MR_Box Stream_35 = (MR_Box) Stream_6;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_char_code_2_6_p_0(Stream_35, &Result0_23, &Char_24, &Error_25);
    switch (Result0_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_26;
          MR_Word Var_29;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_io_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_25 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_26  = Msg;
}
          Var_29 = (MR_Word) Msg_26;
          {
            CharResult_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_10, 0) = ((MR_Box) (Var_29));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_10, 0) = ((MR_Box) (MR_Word) (Char_24));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_10, (MR_Integer) 0)));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1)));
          MR_Box conv1_STATE_VARIABLE_IO_16_16;

          func_0(((MR_Box) Pred_7), ((MR_Box) (MR_Word) (Char_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
          // direct tailcall eliminated
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), CharResult_10, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
  MR_Word TypeInfo_for_T_15,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  {
    MR_Word Stream_10;
    MR_Box Stream_18;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_5_p_1

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_18  = (MR_Box) Stream;
}
    Stream_10 = (MR_Word) Stream_18;
    mercury__io__input_stream_foldl_6_p_1(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
  }
}

void MR_CALL 
mercury__io__input_stream_foldl_6_p_1(
  MR_Word TypeInfo_for_T_20,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word CharResult_12;
    MR_Word Result0_26;
    MR_Char Char_27;
    MR_Box Error_28;
    MR_Box Stream_38 = (MR_Box) Stream_7;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_char_code_2_6_p_0(Stream_38, &Result0_26, &Char_27, &Error_28);
    switch (Result0_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_29;
          MR_Word Var_32;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_6_p_1

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_28 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_29  = Msg;
}
          Var_32 = (MR_Word) Msg_29;
          {
            CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_12, 0) = ((MR_Box) (Var_32));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_27));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) Pred_8), ((MR_Box) (MR_Word) (Char_13)), T0_9, &T1_14);
          // direct tailcall eliminated
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), CharResult_12, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
  MR_Word TypeInfo_for_T_15,
  MR_Word Pred_6,
  MR_Box T0_7,
  MR_Word * Res_8)
{
  {
    MR_Word Stream_10;
    MR_Box Stream_18;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_18  = (MR_Box) Stream;
}
    Stream_10 = (MR_Word) Stream_18;
    mercury__io__input_stream_foldl_6_p_0(TypeInfo_for_T_15, Stream_10, Pred_6, T0_7, Res_8);
  }
}

void MR_CALL 
mercury__io__input_stream_foldl_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_Word CharResult_12;
    MR_Word Result0_26;
    MR_Char Char_27;
    MR_Box Error_28;
    MR_Box Stream_38 = (MR_Box) Stream_7;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_char_code_2_6_p_0(Stream_38, &Result0_26, &Char_27, &Error_28);
    switch (Result0_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_29;
          MR_Word Var_32;

{
#define MR_PROC_LABEL mercury__io__input_stream_foldl_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_28 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_29  = Msg;
}
          Var_32 = (MR_Word) Msg_29;
          {
            CharResult_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_12, 0) = ((MR_Box) (Var_32));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_12, 0) = ((MR_Box) (MR_Word) (Char_27));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = T0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_12, (MR_Integer) 0)));
          MR_Box T1_14;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1)));
          MR_Box next_value_of_T0_9;

          func_0(((MR_Box) Pred_8), ((MR_Box) (MR_Word) (Char_13)), T0_9, &T1_14);
          // direct tailcall eliminated
          next_value_of_T0_9 = T1_14;
          T0_9 = next_value_of_T0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), CharResult_12, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
mercury__io__read_file_as_string_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_13;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_13  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_13;
    mercury__io__read_file_as_string_4_p_0(Stream_6, Result_4);
  }
}

void MR_CALL 
mercury__io__read_file_as_string_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_String String_8;
    MR_Box Error_9;
    MR_Word NullCharError_10;
    MR_Integer FileSize_26;
    MR_Integer BufferSize0_27;
    MR_Box Buffer0_28;
    MR_Box Buffer_30;
    MR_Integer Pos_31;
    MR_Integer BufferSize_32;
    MR_Box Stream_45 = (MR_Box) HeadVar__1_1;
    MR_String StringPrime_33;
    MR_Word IOError_11;
    MR_String Message_65;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Size;

	Stream = (MercuryFilePtr) Stream_45 ;
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
	 FileSize_26  = Size;
}
    succeeded = (FileSize_26 >= (MR_Integer) 0);
    if (succeeded)
    {
      BufferSize0_27 = (FileSize_26 + (MR_Integer) 1);
    }
    else
      BufferSize0_27 = (MR_Integer) 4000;
{
#define MR_PROC_LABEL mercury__io__read_file_as_string_4_p_0

	MR_Integer Size;
	char * Buffer;

	Size =  BufferSize0_27 ;
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
	 Buffer0_28  = (MR_Box) Buffer;
}
    mercury__io__read_file_as_string_loop_10_p_0(HeadVar__1_1, Buffer0_28, &Buffer_30, (MR_Integer) 0, &Pos_31, BufferSize0_27, &BufferSize_32, &Error_9);
    succeeded = (Pos_31 < BufferSize_32);
    if (!(succeeded))
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

	Buffer = (char *) Buffer_30 ;
	Len =  Pos_31 ;
		{
{
    Str = Buffer;
    Str[Len] = '\0';

    /* Check that the string doesn't contain null characters. */
    if (strlen(Str) != Len) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 StringPrime_33  = Str;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      String_8 = StringPrime_33;
      NullCharError_10 = (MR_Integer) 0;
    }
    else
    {
      String_8 = (MR_String) "";
      NullCharError_10 = (MR_Integer) 1;
    }
{
#define MR_PROC_LABEL mercury__io__read_file_as_string_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__io__read_file_as_string_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_9 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_65  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_11 = (MR_Word) Message_65;
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (String_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IOError_11));
      }
    else
      switch (NullCharError_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Result_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (String_8));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_17 = (MR_Word) ((MR_Box) ((MR_String) "null character in input"));

            *Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_4[2]);
          }
          break;
      }
  }
}

static void MR_CALL 
mercury__io__read_file_as_string_loop_10_p_0(
  MR_Word Stream_11,
  MR_Box STATE_VARIABLE_Buffer_0_20,
  MR_Box * STATE_VARIABLE_Buffer_21,
  MR_Integer STATE_VARIABLE_Pos_0_22,
  MR_Integer * STATE_VARIABLE_Pos_23,
  MR_Integer STATE_VARIABLE_Size_0_24,
  MR_Integer * STATE_VARIABLE_Size_25,
  MR_Box * Error_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box RealStream_18 = (MR_Box) Stream_11;
    MR_Box Error0_19;
    MR_Box STATE_VARIABLE_Buffer_28_28;
    MR_Integer STATE_VARIABLE_Pos_29_29;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mercury__io__read_file_as_string_loop_10_p_0

	MercuryFilePtr Stream;
	char * Buffer0;
	char * Buffer;
	MR_Integer Pos0;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Integer Error;

	Stream = (MercuryFilePtr) RealStream_18 ;
	Buffer0 = (char *) STATE_VARIABLE_Buffer_0_20 ;
	Pos0 =  STATE_VARIABLE_Pos_0_22 ;
	Size =  STATE_VARIABLE_Size_0_24 ;
		{

    size_t bytes_to_read;
    size_t bytes_read;

    MR_CHECK_EXPR_TYPE(Buffer0, char *);
    MR_CHECK_EXPR_TYPE(Buffer, char *);

    bytes_to_read = Size - Pos0;
    bytes_read = MR_READ(*Stream, Buffer0 + Pos0, bytes_to_read);

    Buffer = Buffer0;
    Pos = Pos0 + bytes_read;

    if (bytes_read < bytes_to_read && MR_FERROR(*Stream)) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_Buffer_28_28  = (MR_Box) Buffer;
	 STATE_VARIABLE_Pos_29_29  = Pos;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error0_19 );
}
    succeeded = (STATE_VARIABLE_Pos_29_29 < STATE_VARIABLE_Size_0_24);
    if (succeeded)
    {
      *Error_15 = Error0_19;
      *STATE_VARIABLE_Size_25 = STATE_VARIABLE_Size_0_24;
      *STATE_VARIABLE_Pos_23 = STATE_VARIABLE_Pos_29_29;
      *STATE_VARIABLE_Buffer_21 = STATE_VARIABLE_Buffer_28_28;
    }
    else
    {
      succeeded = (STATE_VARIABLE_Pos_29_29 == STATE_VARIABLE_Size_0_24);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_Size_31_31 = (STATE_VARIABLE_Size_0_24 * (MR_Integer) 2);
        MR_Box STATE_VARIABLE_Buffer_33_33;
        MR_Box next_value_of_STATE_VARIABLE_Buffer_0_20;
        MR_Integer next_value_of_STATE_VARIABLE_Pos_0_22;
        MR_Integer next_value_of_STATE_VARIABLE_Size_0_24;

{
#define MR_PROC_LABEL mercury__io__read_file_as_string_loop_10_p_0

	MR_Integer OldSize;
	MR_Integer NewSize;
	char * Buffer0;
	char * Buffer;

	OldSize =  STATE_VARIABLE_Size_0_24 ;
	NewSize =  STATE_VARIABLE_Size_31_31 ;
	Buffer0 = (char *) STATE_VARIABLE_Buffer_28_28 ;
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
	 STATE_VARIABLE_Buffer_33_33  = (MR_Box) Buffer;
}
        // direct tailcall eliminated
        next_value_of_STATE_VARIABLE_Buffer_0_20 = STATE_VARIABLE_Buffer_33_33;
        next_value_of_STATE_VARIABLE_Pos_0_22 = STATE_VARIABLE_Pos_29_29;
        next_value_of_STATE_VARIABLE_Size_0_24 = STATE_VARIABLE_Size_31_31;
        STATE_VARIABLE_Buffer_0_20 = next_value_of_STATE_VARIABLE_Buffer_0_20;
        STATE_VARIABLE_Pos_0_22 = next_value_of_STATE_VARIABLE_Pos_0_22;
        STATE_VARIABLE_Size_0_24 = next_value_of_STATE_VARIABLE_Size_0_24;
        continue;
      }
      else
      {
        {
          mercury__require__error_1_p_0((MR_String) "io.read_file_as_string: buffer overflow");
          return;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__io__read_file_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  {
    MR_Word Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__io__read_file_2_5_p_0(Stream_5, Var_10, Result_6);
  }
}

void MR_CALL 
mercury__io__read_file_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_13;
    MR_Word Var_21;

{
#define MR_PROC_LABEL mercury__io__read_file_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_13  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_13;
    Var_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__io__read_file_2_5_p_0(Stream_6, Var_21, Result_4);
  }
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
    MR_Word Result0_27;
    MR_Char Char_28;
    MR_Box Error_29;
    MR_Box Stream_39 = (MR_Box) Stream_6;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_char_code_2_6_p_0(Stream_39, &Result0_27, &Char_28, &Error_29);
    switch (Result0_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Result0_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_30;
          MR_Word Var_33;

{
#define MR_PROC_LABEL mercury__io__read_file_2_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_29 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_30  = Msg;
}
          Var_33 = (MR_Word) Msg_30;
          {
            Result0_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Result0_10, 0) = ((MR_Box) (Var_33));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          Result0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Result0_10, 0) = ((MR_Box) (MR_Word) (Char_28));
        }
        break;
    }
    switch (MR_tag((MR_Word) Result0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
          MR_Word Var_19;

          mercury__list__reverse_2_p_0(TypeCtorInfo_20_20, Chars0_7, &Var_19);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Result_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Result0_10, (MR_Integer) 0)));
          MR_Word Var_16;
          MR_Word next_value_of_Chars0_7;

          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_Word) (Char_12));
            MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Chars0_7));
          }
          // direct tailcall eliminated
          next_value_of_Chars0_7 = Var_16;
          Chars0_7 = next_value_of_Chars0_7;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
          MR_Word Err_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), Result0_10, (MR_Integer) 0)));
          MR_Word Var_18;

          mercury__list__reverse_2_p_0(TypeCtorInfo_21_21, Chars0_7, &Var_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_18));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Err_11));
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__read_line_as_string_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_13;

{
#define MR_PROC_LABEL mercury__io__read_line_as_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_13  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_13;
    mercury__io__read_line_as_string_4_p_0(Stream_6, Result_4);
  }
}

void MR_CALL 
mercury__io__read_line_as_string_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  {
    MR_Box Stream_5 = (MR_Box) HeadVar__1_1;
    MR_Word Res_8;
    MR_String String_9;
    MR_Box Error_10;

{
#define MR_PROC_LABEL mercury__io__read_line_as_string_4_p_0

	MercuryFilePtr Stream;
	MR_Word Res;
	MR_String RetString;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_5 ;
		{

#define ML_IO_READ_LINE_GROW(n) ((n) * 3 / 2)
#define ML_IO_BYTES_TO_WORDS(n) (((n) + sizeof(MR_Word) - 1) / sizeof(MR_Word))
#define ML_IO_READ_LINE_START   1024

    char initial_read_buffer[ML_IO_READ_LINE_START];
    char *read_buffer = initial_read_buffer;
    size_t read_buf_size = ML_IO_READ_LINE_START;
    size_t i;
    int char_code = '\0';

    Res = ML_READ_LINE_AS_STRING_OK;
    Error = 0;
    for (i = 0; char_code != '\n'; ) {
        char_code = mercury_get_byte(Stream);
        if (char_code == EOF) {
            if (i == 0) {
                if (MR_FERROR(*Stream)) {
                    Res = ML_READ_LINE_AS_STRING_ERROR;
                    Error = errno;
                } else {
                    Res = ML_READ_LINE_AS_STRING_EOF;
                }
            }
            break;
        }
        if (char_code == 0) {
            Res = ML_READ_LINE_AS_STRING_NULL_CHAR;
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
    if (Res == ML_READ_LINE_AS_STRING_OK) {
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
	 String_9  = RetString;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
    switch (Res_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 3:
        {
          MR_String Msg_11;
          MR_Word Var_17;

{
#define MR_PROC_LABEL mercury__io__read_line_as_string_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_11  = Msg;
}
          Var_17 = (MR_Word) Msg_11;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_17));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_18 = (MR_Word) ((MR_Box) ((MR_String) "null character in input"));

          *Result_6 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__io_scalar_common_5[1]);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (String_9));
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__read_line_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_13;

{
#define MR_PROC_LABEL mercury__io__read_line_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_13  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_13;
    mercury__io__read_line_4_p_0(Stream_6, Result_4);
  }
}

void MR_CALL 
mercury__io__read_line_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  {
    MR_Word Result0_8;
    MR_Word Chars_9;
    MR_Box Error_10;

    mercury__io__read_line_2_6_p_0(Stream_5, &Result0_8, &Chars_9, &Error_10);
    switch (Result0_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_11;
          MR_Word Var_16;

{
#define MR_PROC_LABEL mercury__io__read_line_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_11  = Msg;
}
          Var_16 = (MR_Word) Msg_11;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_16));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Chars_9));
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__io__read_line_2_6_p_0(
  MR_Word Stream_7,
  MR_Word * Result_8,
  MR_Word * Chars_9,
  MR_Box * Error_10)
{
  {
    MR_bool succeeded;
    MR_Word Result0_12;
    MR_Char Char_13;
    MR_Box Error0_14;
    MR_Box Stream_26 = (MR_Box) Stream_7;

    mercury__io__read_char_code_2_6_p_0(Stream_26, &Result0_12, &Char_13, &Error0_14);
    switch (Result0_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Result_8 = Result0_12;
          *Chars_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *Error_10 = Error0_14;
        }
        break;
      case (MR_Integer) 0:
        {
          succeeded = (Char_13 == (MR_Char) 10);
          if (succeeded)
          {
            MR_Word Var_19;

            *Result_8 = (MR_Integer) 0;
            Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Chars_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Char_13));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_19));
            }
            *Error_10 = Error0_14;
          }
          else
          {
            MR_Word CharsTail_15;

            mercury__io__read_line_2_6_p_0(Stream_7, Result_8, &CharsTail_15, Error_10);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Chars_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Char_13));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CharsTail_15));
            }
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__read_word_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_Word Stream_6;
    MR_Box Stream_13;

{
#define MR_PROC_LABEL mercury__io__read_word_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_13  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) Stream_13;
    mercury__io__read_word_4_p_0(Stream_6, Result_4);
  }
}

void MR_CALL 
mercury__io__read_word_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  {
    MR_Word WSResult_8;

    mercury__io__ignore_whitespace_4_p_0(Stream_5, &WSResult_8);
    switch (MR_tag((MR_Word) WSResult_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(WSResult_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__read_word_2_4_p_0(Stream_5, Result_6);
            break;
          case (MR_Integer) 1:
            *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), WSResult_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_9));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__io__read_word_2_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Word CharResult_8;
    MR_Word Result0_28;
    MR_Char Char_29;
    MR_Box Error_30;
    MR_Box Stream_40 = (MR_Box) Stream_5;

    mercury__io__read_char_code_2_6_p_0(Stream_40, &Result0_28, &Char_29, &Error_30);
    switch (Result0_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_31;
          MR_Word Var_34;

{
#define MR_PROC_LABEL mercury__io__read_word_2_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_30 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_31  = Msg;
}
          Var_34 = (MR_Word) Msg_31;
          {
            CharResult_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_8, 0) = ((MR_Box) (Var_34));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_8, 0) = ((MR_Box) (MR_Word) (Char_29));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_8, (MR_Integer) 0)));

          succeeded = mercury__char__is_whitespace_1_p_0(Char_10);
          if (succeeded)
          {
            MR_Word Var_18;
            MR_Box Stream_46 = (MR_Box) Stream_5;
            MR_Word Ok_48;

            mercury__io__putback_char_2_5_p_0(Stream_46, Char_10, &Ok_48);
            switch (Ok_48) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TypeCtorInfo_14_52 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
                  MR_Word Var_50 = (MR_Word) ((MR_Box) ((MR_String) "failed to put back character"));

                  {
                    mercury__exception__throw_1_p_0(TypeCtorInfo_14_52, ((MR_Box) (Var_50)));
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
            }
            Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__io_scalar_common_5[0]);
          }
          else
          {
            MR_Word Result0_11;

            mercury__io__read_word_2_4_p_0(Stream_5, &Result0_11);
            switch (MR_tag((MR_Word) Result0_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_20;
                  MR_Word Var_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                  {
                    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_Word) (Char_10));
                    MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_21));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *Result_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Chars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_11, (MR_Integer) 0)));
                  MR_Word Var_22;

                  {
                    Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_Word) (Char_10));
                    MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Chars_12));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *Result_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
                  }
                }
                break;
              case (MR_Integer) 2:
                *Result_6 = Result0_11;
                break;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        *Result_6 = (MR_Word) CharResult_8;
        break;
    }
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
    MR_Word Result0_21;
    MR_Char Char_22;
    MR_Box Error_23;
    MR_Box Stream_33 = (MR_Box) Stream_5;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_char_code_2_6_p_0(Stream_33, &Result0_21, &Char_22, &Error_23);
    switch (Result0_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CharResult_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_24;
          MR_Word Var_27;

{
#define MR_PROC_LABEL mercury__io__ignore_whitespace_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_23 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_24  = Msg;
}
          Var_27 = (MR_Word) Msg_24;
          {
            CharResult_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CharResult_8, 0) = ((MR_Box) (Var_27));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          CharResult_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CharResult_8, 0) = ((MR_Box) (MR_Word) (Char_22));
        }
        break;
    }
    switch (MR_tag((MR_Word) CharResult_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_8, (MR_Integer) 0)));

          succeeded = mercury__char__is_whitespace_1_p_0(Char_10);
          if (succeeded)
          {
            // direct tailcall eliminated
            continue;
          }
          else
          {
            MR_Box Stream_39 = (MR_Box) Stream_5;
            MR_Word Ok_41;

            mercury__io__putback_char_2_5_p_0(Stream_39, Char_10, &Ok_41);
            switch (Ok_41) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TypeCtorInfo_14_45 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
                  MR_Word Var_43 = (MR_Word) ((MR_Box) ((MR_String) "failed to put back character"));

                  {
                    mercury__exception__throw_1_p_0(TypeCtorInfo_14_45, ((MR_Box) (Var_43)));
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
            }
            *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), CharResult_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
mercury__io__putback_char_2_5_p_0(
  MR_Box Stream_1,
  MR_Char Character_2,
  MR_Word * Ok_3)
{
  {
{
#define MR_PROC_LABEL mercury__io__putback_char_2_5_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Word Ok;

	Stream = (MercuryFilePtr) Stream_1 ;
	Character =  Character_2 ;
		{

    MercuryFilePtr mf = Stream;
    Ok = MR_TRUE;
    if (Character <= 0x7f) {
        if (MR_UNGETCH(*mf, Character) == EOF) {
            Ok = MR_FALSE;
        } else {
            if (Character == '\n') {
                MR_line_number(*mf)--;
            }
        }
    } else {
        /* This requires multiple pushback in the underlying C library. */
        char        buf[5];
        ML_ssize_t  len;
        len = MR_utf8_encode(buf, Character);
        for (; len > 0; len--) {
            if (MR_UNGETCH(*mf, buf[len - 1]) == EOF) {
                Ok = MR_FALSE;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	 *Ok_3  = Ok;
}
  }
}

void MR_CALL 
mercury__io__read_char_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  {
    MR_Word Result0_8;
    MR_Char Char_9;
    MR_Box Error_10;
    MR_Box Stream_22 = (MR_Box) Stream_5;

    mercury__io__read_char_code_2_6_p_0(Stream_22, &Result0_8, &Char_9, &Error_10);
    switch (Result0_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_11;
          MR_Word Var_16;

{
#define MR_PROC_LABEL mercury__io__read_char_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_10 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_11  = Msg;
}
          Var_16 = (MR_Word) Msg_11;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_16));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Char_9));
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__read_char_3_p_0(
  MR_Word * Result_4)
{
  {
    MR_Word Result0_21;
    MR_Char Char_22;
    MR_Box Error_23;
    MR_Box Stream_33;

{
#define MR_PROC_LABEL mercury__io__read_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Stream_33  = (MR_Box) Stream;
}
    mercury__io__read_char_code_2_6_p_0(Stream_33, &Result0_21, &Char_22, &Error_23);
    switch (Result0_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_String Msg_24;
          MR_Word Var_27;

{
#define MR_PROC_LABEL mercury__io__read_char_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_23 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Msg_24  = Msg;
}
          Var_27 = (MR_Word) Msg_24;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_4 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_27));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Char_22));
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__read_char_code_2_6_p_0(
  MR_Box Stream_1,
  MR_Word * Result_2,
  MR_Char * Char_3,
  MR_Box * Error_4)
{
  {
{
#define MR_PROC_LABEL mercury__io__read_char_code_2_6_p_0

	MercuryFilePtr Stream;
	MR_Word Result;
	MR_Char Char;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

    char    buf[5];
    int     nbytes;
    int     i;
    int     c;
    unsigned int    uc;

    c = mercury_get_byte(Stream);
    uc = c;
    if (uc <= 0x7f) {
        Result = ML_RESULT_CODE_OK;
        Char = uc;
        Error = 0;
    } else if (c == EOF) {
        if (MR_FERROR(*Stream)) {
            Result = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            Result = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        Char = 0;
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
                c = mercury_get_byte(Stream);
                uc = c;
                if (c == EOF) {
                    /* Illegal byte sequence whether EOF or I/O error. */
                    Result = ML_RESULT_CODE_ERROR;
                    Error = MR_FERROR(*Stream) ? errno : EILSEQ;
                    Char = 0;
                    break;
                }
                buf[i] = uc;
            }
            if (i == nbytes) {
                buf[i] = '\0';
                c = MR_utf8_get(buf, 0);
                if (c < 0) {
                    Result = ML_RESULT_CODE_ERROR;
                    Error = EILSEQ;
                    Char = 0;
                } else {
                    Result = ML_RESULT_CODE_OK;
                    Char = c;
                    Error = 0;
                }
            }
        } else {
            /* Invalid lead byte. */
            Result = ML_RESULT_CODE_ERROR;
            Error = EILSEQ;
            Char = 0;
        }
    }


		;}
#undef MR_PROC_LABEL
	 *Result_2  = Result;
	 *Char_3  = Char;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_4 );
}
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____access_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____access_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____access_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____access_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____binary_input_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____binary_input_stream_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____binary_input_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____binary_input_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____binary_output_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____binary_output_stream_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____binary_output_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____binary_output_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____buffer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____buffer_0_0(((MR_Box) wrapper_arg_1), ((MR_Box) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____buffer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____buffer_0_0(&conv0_HeadVar__1_1, ((MR_Box) wrapper_arg_2), ((MR_Box) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____chunk_inner_res_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____chunk_inner_res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____chunk_inner_res_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____chunk_inner_res0_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____chunk_inner_res0_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____chunk_inner_res0_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____chunk_inner_res0_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____error_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____error_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____file_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____file_id_0_0(((MR_Box) wrapper_arg_1), ((MR_Box) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____file_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____file_id_0_0(&conv0_HeadVar__1_1, ((MR_Box) wrapper_arg_2), ((MR_Box) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____file_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____file_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____file_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____file_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____input_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____input_stream_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____input_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____input_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____io_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____io_0_0();
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____io_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____io_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____maybe_partial_res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____maybe_partial_res_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____maybe_partial_res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____maybe_partial_res_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____maybe_stream_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____maybe_stream_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____maybe_stream_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____maybe_stream_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____output_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____output_stream_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____output_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____output_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____posn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____posn_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____posn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____posn_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____read_line_as_string_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____read_line_as_string_result_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____read_line_as_string_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____read_line_as_string_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____read_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____read_result_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____read_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____read_result_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____res_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____res_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____res_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____res_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____res_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____res_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____result_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____result_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____result_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____result_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____result_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____result_code_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____result_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____result_code_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____state_0_0();
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____state_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____stream_0_0(((MR_Box) wrapper_arg_1), ((MR_Box) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____stream_0_0(&conv0_HeadVar__1_1, ((MR_Box) wrapper_arg_2), ((MR_Box) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_content_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____stream_content_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____stream_content_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____stream_content_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____stream_db_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____stream_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____stream_db_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____stream_id_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____stream_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____stream_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____stream_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____stream_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____stream_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____stream_mode_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____stream_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____stream_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____stream_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____stream_source_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____stream_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____stream_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____system_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____system_error_0_0(((MR_Box) wrapper_arg_1), ((MR_Box) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____system_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____system_error_0_0(&conv0_HeadVar__1_1, ((MR_Box) wrapper_arg_2), ((MR_Box) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____system_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____system_result_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____system_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____system_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____text_input_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____text_input_stream_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____text_input_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____text_input_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____text_output_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____text_output_stream_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____text_output_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____text_output_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__io____Unify____whence_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__io____Unify____whence_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__io____Compare____whence_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__io____Compare____whence_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Box) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((uint8_t) (MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((int8_t) (MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__univ__univ__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((MR_String) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint32__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((uint32_t) (MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint16__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((uint16_t) (MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint8__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((uint8_t) (MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__uint__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Unsigned) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int32__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((int32_t) (MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int16__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((int16_t) (MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int8__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((int8_t) (MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__float__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), MR_unbox_float(wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__writer____io__output_stream__arity0__character__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Char) (MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    mercury__io__ClassMethod_for_stream__stream____io__binary_output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    mercury__io__ClassMethod_for_stream__stream____io__binary_input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__output_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    mercury__io__ClassMethod_for_stream__stream____io__output_stream__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__stream____io__input_stream__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    mercury__io__ClassMethod_for_stream__stream____io__input_stream__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
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
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__seekable____io__binary_output_stream__arity0__io__state__arity0______stream__seek_5_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
  }
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
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__seekable____io__binary_input_stream__arity0__io__state__arity0______stream__seek_5_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_6;

    mercury__io__ClassMethod_for_stream__reader____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) wrapper_arg_1), &conv0_Result_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Result_6));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_6;

    mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__text_file__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) wrapper_arg_1), &conv0_Result_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Result_6));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_6;

    mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__string__line__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) wrapper_arg_1), &conv0_Result_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Result_6));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_6;

    mercury__io__ClassMethod_for_stream__reader____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__get_4_4_p_0(((MR_Word) wrapper_arg_1), &conv0_Result_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Result_6));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__putback____io__binary_input_stream__arity0__int__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__putback____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__putback____io__input_stream__arity0__character__arity0__io__state__arity0__io__error__arity0______stream__unget_4_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Char) (MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__output____io__binary_output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__output____io__output_stream__arity0__io__state__arity0______stream__flush_3_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__line_oriented____io__output_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__get_line_4_4_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__ClassMethod_for_stream__line_oriented____io__input_stream__arity0__io__state__arity0______stream__set_line_4_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
  }
}

static MR_Box MR_CALL 
mercury__io__ClassMethod_for_stream__error____io__error__arity0______stream__error_message_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mercury__io__ClassMethod_for_stream__error____io__error__arity0______stream__error_message_1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
mercury__io__ClassMethod_for_stream__bulk_reader____io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0______stream__bulk_get_9_9_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Box conv2_STATE_VARIABLE_Store_19;
    MR_Integer conv1_NumRead_14;
    MR_Word conv0_Result_15;

    mercury__io__ClassMethod_for_stream__bulk_reader____io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0______stream__bulk_get_9_9_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3), ((MR_Box) wrapper_arg_4), &conv2_STATE_VARIABLE_Store_19, &conv1_NumRead_14, &conv0_Result_15);
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Store_19));
    *wrapper_arg_6 = ((MR_Box) (conv1_NumRead_14));
    *wrapper_arg_7 = ((MR_Box) (conv0_Result_15));
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
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_posn_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_read_line_as_string_result_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_read_result_1);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_res_1);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_res_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_result_1);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_result_0);
	MR_register_type_ctor_info(&mercury__io__io__type_ctor_info_result_code_0);
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

// Ensure everything is compiled with the same grade.
const char *mercury__io__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module io.
