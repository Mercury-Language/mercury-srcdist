/*
** Automatically generated from `read_modules.m'
** by the Mercury compiler,
** version rotd-2024-11-26
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


// :- module parse_tree.read_modules.
// :- implementation.

/*
INIT mercury__parse_tree__read_modules__init
ENDINIT
*/

#include "parse_tree.read_modules.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__io__ti_res_1libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__maybe__ti_maybe_1io__ti_res_1libs__timestamp__type_ctor_info_timestamp_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_do_read_file_result_0_0[3];

static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_do_read_file_result_0_0[3];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_do_read_file_result_0_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_do_read_file_result_0_1[2];

static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_do_read_file_result_0_1[2];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_do_read_file_result_0_1;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_do_read_file_result_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_do_read_file_result_0_1[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_do_read_file_result_0[2];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_do_read_file_result_0[2];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_do_read_file_result_0[2];

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_module_1_0[3];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_module_1_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_module_1_1[2];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_module_1_1;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_module_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_module_1_1[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_module_1[2];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_module_1[2];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_module_1[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_parse_tree_key_1_0[2];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_key_1_0;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_key_1_0[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_parse_tree_key_1[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_parse_tree_key_1[1];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_parse_tree_key_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_module_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_parse_tree__read_modules__pti_have_module_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_parse_tree_maps_0_0[8];

static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_have_parse_tree_maps_0_0[8];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_maps_0_0;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_maps_0_0[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_parse_tree_maps_0[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_parse_tree_maps_0[1];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_parse_tree_maps_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_parse_tree_read_0_0[2];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_read_0_0;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_read_0_1[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_parse_tree_read_0[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_parse_tree_read_0[1];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_parse_tree_read_0[1];

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_parse_tree_source_0_0[2];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_source_0_0;

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_source_0_1;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_source_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_source_0_1[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_parse_tree_source_0[2];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_parse_tree_source_0[2];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_parse_tree_source_0[2];

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[3];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_1[2];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_1;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_1[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1[2];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1[2];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1[2];

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_maybe_file_and_stream_0_0[1];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_maybe_file_and_stream_0_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_maybe_file_and_stream_0_1[1];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_maybe_file_and_stream_0_1;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_maybe_file_and_stream_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_maybe_file_and_stream_0_1[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_maybe_file_and_stream_0[2];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_maybe_file_and_stream_0[2];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_file_and_stream_0[2];

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0;

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1;

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_ordinal_ordered_maybe_ignore_errors_0[2];

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[2];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[2];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_read_done_msg_0_1[1];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_1;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_done_msg_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_done_msg_0_1[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_read_done_msg_0[2];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_read_done_msg_0[2];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_read_done_msg_0[2];

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_0;

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_1;

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_2;

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_3;

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_ordinal_ordered_read_reason_msg_0[4];

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_read_reason_msg_0[4];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_read_reason_msg_0[4];

static void MR_CALL 
parse_tree__read_modules____Compare____read_done_msg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____read_done_msg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__read_modules____Compare____maybe_file_and_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_file_and_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__read_modules____Compare____do_read_file_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____do_read_file_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__read_modules__read_module_end_file_10_p_0(
  MR_Word Globals_11,
  MR_Word FileKind_12,
  MR_Word ReadDoneMsg_13,
  MR_String FileName_14,
  MR_Word MaybeTimestampRes_15,
  MR_Word * MaybeTimestamp_16,
  MR_Word Errors0_17,
  MR_Word * Errors_18);

static MR_Word MR_CALL 
parse_tree__read_modules__no_file_errors_2_f_0(
  MR_Word IgnoreErrors_4,
  MR_Word Errors0_5);

static void MR_CALL 
parse_tree__read_modules__read_module_end_module_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word Globals_16,
  MR_Word MaybeFileNameAndStream_17,
  MR_Word IgnoreErrors_18,
  MR_Word FileKind_19,
  MR_Word ReadDoneMsg_20,
  MR_String FileName0_21,
  MR_String * FileName_22,
  MR_Word MaybeTimestampRes_23,
  MR_Word * MaybeTimestamp_24,
  MR_Word Errors0_25,
  MR_Word * Errors_26);

static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
  MR_Word FileKind_8,
  MR_Word ReadDoneMsg_9,
  MR_Word IgnoreErrors_10,
  MR_Word Errors0_11,
  MR_Word * Errors_12);

static void MR_CALL 
parse_tree__read_modules__read_module_begin_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word ReadReasonMsg_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_Word FileKind_17,
  MR_String * FileName_18,
  MR_Word * ReadDoneMsg_19,
  MR_Word * SearchAuthDirs_20);

static void MR_CALL 
parse_tree__read_modules__do_actually_read_file_5_p_0(
  MR_Word FileNameAndStream_6,
  MR_Word ReadModuleAndTimestamps_7,
  MR_Word * Result_8);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____do_read_file_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____do_read_file_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_module_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__read_modules____Compare____have_module_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_int0_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_int0_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_int1_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_int1_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_int2_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_int2_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_int3_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_int3_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_msrc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_msrc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_plain_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_plain_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_read_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_read_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_src_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_src_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_trans_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_trans_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_file_and_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____maybe_file_and_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____read_done_msg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____read_done_msg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____read_reason_msg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____read_reason_msg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[20][2];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_2[8][3];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_3[5][1];




static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[20][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int1_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int2_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int3_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_1)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[7]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: cannot find modification time for"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Smart recompilation will not work."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__read_modules_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__read_modules_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__read_modules_scalar_common_1[17])))
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[2]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[3]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[4]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[0]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[6]))
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_3[5][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   4 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__io__ti_res_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__io__io__type_ctor_info_res_1,
  { (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__maybe__ti_maybe_1io__ti_res_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__read_modules__io__ti_res_1libs__timestamp__type_ctor_info_timestamp_0) }
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_do_read_file_result_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__maybe__ti_maybe_1io__ti_res_1libs__timestamp__type_ctor_info_timestamp_0)
};

static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_do_read_file_result_0_0[3] = {
  (MR_String) "drfro_file_contents",
  (MR_String) "drfro_num_code_units",
  (MR_String) "drfro_maybe_file_timestamp"
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_do_read_file_result_0_0 = {
  (MR_String) "drfr_ok",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__read_modules__parse_tree__read_modules__field_types_do_read_file_result_0_0,
  parse_tree__read_modules__parse_tree__read_modules__field_names_do_read_file_result_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_do_read_file_result_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__maybe__ti_maybe_1io__ti_res_1libs__timestamp__type_ctor_info_timestamp_0)
};

static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_do_read_file_result_0_1[2] = {
  (MR_String) "drfre_errors",
  (MR_String) "drfre_maybe_file_timestamp"
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_do_read_file_result_0_1 = {
  (MR_String) "drfr_error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__read_modules__parse_tree__read_modules__field_types_do_read_file_result_0_1,
  parse_tree__read_modules__parse_tree__read_modules__field_names_do_read_file_result_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_do_read_file_result_0_0[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_do_read_file_result_0_0 };

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_do_read_file_result_0_1[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_do_read_file_result_0_1 };

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_do_read_file_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_do_read_file_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_do_read_file_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_do_read_file_result_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_do_read_file_result_0_1,
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_do_read_file_result_0_0
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_do_read_file_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_do_read_file_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____do_read_file_result_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____do_read_file_result_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "do_read_file_result",
  { parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_do_read_file_result_0 },
  { parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_do_read_file_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_do_read_file_result_0,

};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_module_1_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_source_0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_module_1_0 = {
  (MR_String) "have_module",
  INT16_C(3),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_module_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_module_1_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_module_1_1 = {
  (MR_String) "have_not_read_module",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_module_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_module_1_0[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_module_1_0 };

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_module_1_1[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_module_1_1 };

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_module_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_module_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_module_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_module_1[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_module_1_0,
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_module_1_1
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_module_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_module_1_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_module_1_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_module",
  { parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_module_1 },
  { parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_module_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_module_1,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_int0_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_parse_tree_int0_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_parse_tree_int0_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_parse_tree_int0_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int1_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_int1_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_parse_tree_int1_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_parse_tree_int1_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_parse_tree_int1_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int2_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_int2_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_parse_tree_int2_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_parse_tree_int2_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_parse_tree_int2_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int3_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_int3_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_parse_tree_int3_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_parse_tree_int3_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_parse_tree_int3_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_parse_tree_key_1_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_key_1_0 = {
  (MR_String) "have_parse_tree_key",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_parse_tree_key_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_key_1_0[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_key_1_0 };

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_parse_tree_key_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_key_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_parse_tree_key_1[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_key_1_0 };

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_parse_tree_key_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_key_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_parse_tree_key_1_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_parse_tree_key_1_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_parse_tree_key",
  { parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_parse_tree_key_1 },
  { parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_parse_tree_key_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_parse_tree_key_1,

};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_module_1__pseudo_1 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_parse_tree__read_modules__pti_have_module_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__pti_have_module_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__read_modules____Unify____have_parse_tree_map_1_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_parse_tree_map_1_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_parse_tree_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_parse_tree__read_modules__pti_have_module_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_parse_tree_maps_0_0[8] = {
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)
};

static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_have_parse_tree_maps_0_0[8] = {
  (MR_String) "hptm_src",
  (MR_String) "hptm_module_src",
  (MR_String) "hptm_int0",
  (MR_String) "hptm_int1",
  (MR_String) "hptm_int2",
  (MR_String) "hptm_int3",
  (MR_String) "hptm_plain_opt",
  (MR_String) "hptm_trans_opt"
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_maps_0_0 = {
  (MR_String) "have_parse_tree_maps",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_parse_tree_maps_0_0,
  parse_tree__read_modules__parse_tree__read_modules__field_names_have_parse_tree_maps_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_maps_0_0[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_maps_0_0 };

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_parse_tree_maps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_maps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_parse_tree_maps_0[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_maps_0_0 };

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_parse_tree_maps_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_parse_tree_maps_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_parse_tree_maps_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_parse_tree_maps",
  { parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_parse_tree_maps_0 },
  { parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_parse_tree_maps_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_parse_tree_maps_0,

};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_msrc_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_parse_tree_msrc_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_parse_tree_msrc_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_parse_tree_msrc_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_plain_opt_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_parse_tree_plain_opt_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_parse_tree_plain_opt_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_parse_tree_plain_opt_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0) }
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_parse_tree_read_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_read_0_0 = {
  (MR_String) "was_read",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_parse_tree_read_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_read_0_1[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_read_0_0 };

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_parse_tree_read_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_read_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_parse_tree_read_0[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_read_0_0 };

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_parse_tree_read_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_read_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_parse_tree_read_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_parse_tree_read_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_parse_tree_read",
  { parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_parse_tree_read_0 },
  { parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_parse_tree_read_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_parse_tree_read_0,

};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_parse_tree_source_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_source_0_0 = {
  (MR_String) "was_read",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_parse_tree_source_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_source_0_1 = {
  (MR_String) "was_constructed",
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

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_source_0_0[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_source_0_1 };

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_source_0_1[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_source_0_0 };

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_parse_tree_source_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_source_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_parse_tree_source_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_parse_tree_source_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_source_0_1,
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_parse_tree_source_0_0
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_parse_tree_source_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_parse_tree_source_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_parse_tree_source_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_parse_tree_source",
  { parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_parse_tree_source_0 },
  { parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_parse_tree_source_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_parse_tree_source_0,

};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_src_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_parse_tree_src_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_parse_tree_src_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_parse_tree_src_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_trans_opt_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_parse_tree_trans_opt_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_parse_tree_trans_opt_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_parse_tree_trans_opt_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_read_0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0 = {
  (MR_String) "have_module",
  INT16_C(3),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_1 = {
  (MR_String) "have_not_read_module",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0 };

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_1[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_1 };

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0,
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_1
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_1_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_1_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module",
  { parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1 },
  { parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1,

};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_maybe_file_and_stream_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__parse_tree__find_module__type_ctor_info_path_name_and_stream_0) };

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_maybe_file_and_stream_0_0 = {
  (MR_String) "mfas_ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__read_modules__parse_tree__read_modules__field_types_maybe_file_and_stream_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_maybe_file_and_stream_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0) };

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_maybe_file_and_stream_0_1 = {
  (MR_String) "mfas_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__read_modules__parse_tree__read_modules__field_types_maybe_file_and_stream_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_maybe_file_and_stream_0_0[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_maybe_file_and_stream_0_0 };

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_maybe_file_and_stream_0_1[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_maybe_file_and_stream_0_1 };

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_maybe_file_and_stream_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_maybe_file_and_stream_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_maybe_file_and_stream_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_maybe_file_and_stream_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_maybe_file_and_stream_0_1,
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_maybe_file_and_stream_0_0
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_file_and_stream_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_maybe_file_and_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____maybe_file_and_stream_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____maybe_file_and_stream_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "maybe_file_and_stream",
  { parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_maybe_file_and_stream_0 },
  { parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_maybe_file_and_stream_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_file_and_stream_0,

};

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0 = {
  (MR_String) "ignore_errors",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1 = {
  (MR_String) "do_not_ignore_errors",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_ordinal_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_maybe_ignore_errors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "maybe_ignore_errors",
  { parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0 },
  { parse_tree__read_modules__parse_tree__read_modules__enum_ordinal_ordered_maybe_ignore_errors_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0,

};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_0 = {
  (MR_String) "rdm_none",
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

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_read_done_msg_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0) };

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_1 = {
  (MR_String) "rdm_progress",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__read_modules__parse_tree__read_modules__field_types_read_done_msg_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_done_msg_0_0[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_0 };

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_done_msg_0_1[1] = { &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_1 };

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_read_done_msg_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_done_msg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_done_msg_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_read_done_msg_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_0,
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_1
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_read_done_msg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_read_done_msg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____read_done_msg_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____read_done_msg_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "read_done_msg",
  { parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_read_done_msg_0 },
  { parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_read_done_msg_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_read_done_msg_0,

};

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_0 = {
  (MR_String) "rrm_file",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_1 = {
  (MR_String) "rrm_std",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_2 = {
  (MR_String) "rrm_old",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_3 = {
  (MR_String) "rrm_get_deps",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_ordinal_ordered_read_reason_msg_0[4] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_0,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_1,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_2,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_read_reason_msg_0[4] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_0,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_3,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_2,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_read_reason_msg_0_1
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_read_reason_msg_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_read_reason_msg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__read_modules____Unify____read_reason_msg_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____read_reason_msg_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "read_reason_msg",
  { parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_read_reason_msg_0 },
  { parse_tree__read_modules__parse_tree__read_modules__enum_ordinal_ordered_read_reason_msg_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_read_reason_msg_0,

};

void MR_CALL 
parse_tree__read_modules____Compare____read_reason_msg_0_0(
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
parse_tree__read_modules____Unify____read_reason_msg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____read_done_msg_0_0(
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

    mercury__io____Compare____text_output_stream_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____read_done_msg_0_0(
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
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mercury__io____Unify____text_output_stream_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(
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
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____maybe_file_and_stream_0_0(
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
      MR_Word ArgX1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
      MR_Word ArgY1_7 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

      parse_tree__parse_error____Compare____read_module_errors_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
    MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

    parse_tree__find_module____Compare____path_name_and_stream_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_file_and_stream_0_0(
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
    MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
      succeeded = parse_tree__parse_error____Unify____read_module_errors_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = parse_tree__find_module____Unify____path_name_and_stream_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0(
  MR_Word TypeInfo_for_PT_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  parse_tree__read_modules____Compare____have_module_1_0(TypeInfo_for_PT_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0(
  MR_Word TypeInfo_for_PT_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = parse_tree__read_modules____Unify____have_module_1_0(TypeInfo_for_PT_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_trans_opt_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_trans_opt_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_src_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_src_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_read_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  parse_tree__read_modules____Compare____have_parse_tree_source_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_read_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = parse_tree__read_modules____Unify____have_parse_tree_source_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_plain_opt_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_plain_opt_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_msrc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_msrc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_maps_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[3]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[6]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_22_22 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_23_23 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_24_24 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_25_25 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_26_26 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_27_27 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[6]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_28_28 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[7]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_map_1_0(
  MR_Word TypeInfo_for_PT_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_PT_6));
  }
  mercury__tree234____Compare____tree234_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_9_9, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_map_1_0(
  MR_Word TypeInfo_for_PT_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_PT_5));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_8_8, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_key_1_0(
  MR_Word TypeInfo_for_Kind_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0(TypeInfo_for_Kind_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_key_1_0(
  MR_Word TypeInfo_for_Kind_9,
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Kind_9, ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_int3_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_int3_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_int2_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_int2_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_int1_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_int1_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_int0_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_int0_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_module_1_0(
  MR_Word TypeInfo_for_PT_19,
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
      MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0(TypeInfo_for_PT_19, &SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          parse_tree__read_modules____Compare____have_parse_tree_source_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_12 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_13 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_14;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_14, ArgX1_12, ArgY1_13);
    succeeded = (SubResult1_14 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_14;
    else
      parse_tree__parse_error____Compare____read_module_errors_0_0(HeadVar__1_1, ArgX2_15, ArgY2_16);
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_1[9]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__parse_error____Compare____read_module_errors_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_module_1_0(
  MR_Word TypeInfo_for_PT_15,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_PT_15, ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = parse_tree__read_modules____Unify____have_parse_tree_source_0_0(ArgX3_7, ArgY3_8);
      }
    }
  }
  else
  {
    MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_10;
    MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
      if (succeeded)
        succeeded = parse_tree__parse_error____Unify____read_module_errors_0_0(ArgX2_11, ArgY2_12);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_source_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      TypeInfo_11_11 = (MR_Word) (&parse_tree__read_modules_scalar_common_1[9]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = parse_tree__parse_error____Unify____read_module_errors_0_0(ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____do_read_file_result_0_0(
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
      MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_14;

      parse_tree__parse_error____Compare____read_module_errors_0_0(&SubResult1_14, ArgX1_12, ArgY1_13);
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX2_15)), ((MR_Box) (ArgY2_16)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____do_read_file_result_0_0(
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
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_10;
    MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = parse_tree__parse_error____Unify____read_module_errors_0_0(ArgX1_9, ArgY1_10);
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&parse_tree__read_modules_scalar_common_1[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
      }
    }
  }
  else
  {
    MR_Word TypeInfo_17_17;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&parse_tree__read_modules_scalar_common_1[8]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules__return_timestamp_if_needed_3_p_0(
  MR_Word ReturnTimestamp_4,
  MR_Word MaybeTimestamp0_5,
  MR_Word * MaybeTimestamp_6)
{
  switch (ReturnTimestamp_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaybeTimestamp_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      if ((MaybeTimestamp0_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
          return;
        }
      else
        *MaybeTimestamp_6 = MaybeTimestamp0_5;
      break;
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_trans_opt_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * HaveModule_10)
{
  MR_String FileName0_16;
  MR_Word ReadDoneMsg_17;
  MR_Word SearchAuthDirs_18;
  MR_Word RawMaybeFileNameAndStream_51;
  MR_Word _SearchDirs_50;

  parse_tree__read_modules__read_module_begin_11_p_0(ProgressStream_7, Globals_8, (MR_Integer) 1, (MR_Integer) 1, ModuleName_9, (MR_Word) (MR_mkword(2, &parse_tree__read_modules_scalar_common_3[1])), &FileName0_16, &ReadDoneMsg_17, &SearchAuthDirs_18);
  parse_tree__find_module__search_for_file_and_stream_6_p_0(SearchAuthDirs_18, FileName0_16, &_SearchDirs_50, &RawMaybeFileNameAndStream_51);
  if (((MR_tag((MR_Word) RawMaybeFileNameAndStream_51)) == (MR_Integer) 1))
  {
    MR_Word MaybeFileNameAndStream_19;
    MR_Word Errors0_46;
    MR_String FileName_47;
    MR_Word Errors_49;
    MR_String ErrorMsg_53 = ((MR_String) ((MR_hl_field(1, RawMaybeFileNameAndStream_51, (MR_Integer) 0))));
    MR_Word Var_57;
    MR_Word _MaybeTimestamp_45;

    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (FileName0_16));
    }
    parse_tree__parse_error__io_error_to_read_module_errors_6_p_0((MR_Integer) 0, Var_57, ErrorMsg_53, &Errors0_46);
    MaybeFileNameAndStream_19 = (MR_Word) (MR_mkword(1, (MR_Word) (Errors0_46)));
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_7, Globals_8, MaybeFileNameAndStream_19, (MR_Integer) 1, (MR_Word) (MR_mkword(2, &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_17, FileName0_16, &FileName_47, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_45, Errors0_46, &Errors_49);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveModule_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_47));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_49));
    }
  }
  else
  {
    MR_Word FileNameAndStream_20 = ((MR_Word) ((MR_hl_field(0, RawMaybeFileNameAndStream_51, (MR_Integer) 0))));
    MR_Word FileStream_27;
    MR_Word Var_36;
    MR_Word ReadFileResult_59;
    MR_Word MaybeFileNameAndStream_73 = (MR_Word) ((MR_Word) (FileNameAndStream_20));

    parse_tree__read_modules__do_actually_read_file_5_p_0(FileNameAndStream_20, (MR_Word) (&parse_tree__read_modules_scalar_common_3[0]), &ReadFileResult_59);
    Var_36 = (MR_Word) (MR_mkword(2, &parse_tree__read_modules_scalar_common_3[1]));
    if (((MR_tag((MR_Word) ReadFileResult_59)) == (MR_Integer) 1))
    {
      MR_Word Errors0_22 = ((MR_Word) ((MR_hl_field(1, ReadFileResult_59, (MR_Integer) 0))));
      MR_String FileName_23;
      MR_Word Errors_25;
      MR_Word _MaybeTimestamp_24;

      parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_7, Globals_8, MaybeFileNameAndStream_73, (MR_Integer) 1, Var_36, ReadDoneMsg_17, FileName0_16, &FileName_23, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_24, Errors0_22, &Errors_25);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveModule_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileName_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors_25));
      }
    }
    else
    {
      MR_String FileStr_60 = ((MR_String) ((MR_hl_field(0, ReadFileResult_59, (MR_Integer) 0))));
      MR_Integer FileStrLen_61 = ((MR_Integer) ((MR_hl_field(0, ReadFileResult_59, (MR_Integer) 1))));
      MR_String FileName_63 = ((MR_String) ((MR_hl_field(0, FileNameAndStream_20, (MR_Integer) 0))));
      MR_Word MaybeParseTreeTransOpt_68;
      MR_Word Errors0_69;
      MR_String FileName_70;
      MR_Word Errors_72;
      MR_Word _MaybeTimestamp_67;

      parse_tree__parse_module__parse_trans_opt_file_6_p_0(FileName_63, FileStr_60, FileStrLen_61, ModuleName_9, &MaybeParseTreeTransOpt_68, &Errors0_69);
      parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_7, Globals_8, MaybeFileNameAndStream_73, (MR_Integer) 1, Var_36, ReadDoneMsg_17, FileName0_16, &FileName_70, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_67, Errors0_69, &Errors_72);
      if ((MaybeParseTreeTransOpt_68 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HaveModule_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FileName_70));
          MR_hl_field(1, base, 1) = ((MR_Box) (Errors_72));
        }
      else
      {
        MR_Word ParseTreeTransOpt_28 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeTransOpt_68, (MR_Integer) 0))));
        MR_Word Var_40;

        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) (Errors_72));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *HaveModule_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (FileName_70));
          MR_hl_field(0, base, 1) = ((MR_Box) (ParseTreeTransOpt_28));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_40));
        }
      }
    }
    FileStream_27 = ((MR_Word) ((MR_hl_field(0, FileNameAndStream_20, (MR_Integer) 1))));
    mercury__io__close_input_3_p_0(FileStream_27);
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_plain_opt_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * HaveModule_10)
{
  MR_String FileName0_16;
  MR_Word ReadDoneMsg_17;
  MR_Word SearchDirs_18;
  MR_Word RawMaybeFileNameAndStream_51;
  MR_Word _SearchDirs_50;

  parse_tree__read_modules__read_module_begin_11_p_0(ProgressStream_7, Globals_8, (MR_Integer) 1, (MR_Integer) 1, ModuleName_9, (MR_Word) (MR_mkword(2, &parse_tree__read_modules_scalar_common_3[0])), &FileName0_16, &ReadDoneMsg_17, &SearchDirs_18);
  parse_tree__find_module__search_for_file_and_stream_6_p_0(SearchDirs_18, FileName0_16, &_SearchDirs_50, &RawMaybeFileNameAndStream_51);
  if (((MR_tag((MR_Word) RawMaybeFileNameAndStream_51)) == (MR_Integer) 1))
  {
    MR_Word MaybeFileNameAndStream_19;
    MR_Word Errors0_46;
    MR_String FileName_47;
    MR_Word Errors_49;
    MR_String ErrorMsg_53 = ((MR_String) ((MR_hl_field(1, RawMaybeFileNameAndStream_51, (MR_Integer) 0))));
    MR_Word Var_57;
    MR_Word _MaybeTimestamp_45;

    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (FileName0_16));
    }
    parse_tree__parse_error__io_error_to_read_module_errors_6_p_0((MR_Integer) 0, Var_57, ErrorMsg_53, &Errors0_46);
    MaybeFileNameAndStream_19 = (MR_Word) (MR_mkword(1, (MR_Word) (Errors0_46)));
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_7, Globals_8, MaybeFileNameAndStream_19, (MR_Integer) 1, (MR_Word) (MR_mkword(2, &parse_tree__read_modules_scalar_common_3[0])), ReadDoneMsg_17, FileName0_16, &FileName_47, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_45, Errors0_46, &Errors_49);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveModule_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_47));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_49));
    }
  }
  else
  {
    MR_Word FileNameAndStream_20 = ((MR_Word) ((MR_hl_field(0, RawMaybeFileNameAndStream_51, (MR_Integer) 0))));
    MR_Word FileStream_27;
    MR_Word Var_36;
    MR_Word ReadFileResult_59;
    MR_Word MaybeFileNameAndStream_73 = (MR_Word) ((MR_Word) (FileNameAndStream_20));

    parse_tree__read_modules__do_actually_read_file_5_p_0(FileNameAndStream_20, (MR_Word) (&parse_tree__read_modules_scalar_common_3[0]), &ReadFileResult_59);
    Var_36 = (MR_Word) (MR_mkword(2, &parse_tree__read_modules_scalar_common_3[0]));
    if (((MR_tag((MR_Word) ReadFileResult_59)) == (MR_Integer) 1))
    {
      MR_Word Errors0_22 = ((MR_Word) ((MR_hl_field(1, ReadFileResult_59, (MR_Integer) 0))));
      MR_String FileName_23;
      MR_Word Errors_25;
      MR_Word _MaybeTimestamp_24;

      parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_7, Globals_8, MaybeFileNameAndStream_73, (MR_Integer) 1, Var_36, ReadDoneMsg_17, FileName0_16, &FileName_23, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_24, Errors0_22, &Errors_25);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveModule_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileName_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors_25));
      }
    }
    else
    {
      MR_String FileStr_60 = ((MR_String) ((MR_hl_field(0, ReadFileResult_59, (MR_Integer) 0))));
      MR_Integer FileStrLen_61 = ((MR_Integer) ((MR_hl_field(0, ReadFileResult_59, (MR_Integer) 1))));
      MR_String FileName_63 = ((MR_String) ((MR_hl_field(0, FileNameAndStream_20, (MR_Integer) 0))));
      MR_Word MaybeParseTreePlainOpt_68;
      MR_Word Errors0_69;
      MR_String FileName_70;
      MR_Word Errors_72;
      MR_Word _MaybeTimestamp_67;

      parse_tree__parse_module__parse_plain_opt_file_6_p_0(FileName_63, FileStr_60, FileStrLen_61, ModuleName_9, &MaybeParseTreePlainOpt_68, &Errors0_69);
      parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_7, Globals_8, MaybeFileNameAndStream_73, (MR_Integer) 1, Var_36, ReadDoneMsg_17, FileName0_16, &FileName_70, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_67, Errors0_69, &Errors_72);
      if ((MaybeParseTreePlainOpt_68 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HaveModule_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FileName_70));
          MR_hl_field(1, base, 1) = ((MR_Box) (Errors_72));
        }
      else
      {
        MR_Word ParseTreePlainOpt_28 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreePlainOpt_68, (MR_Integer) 0))));
        MR_Word Var_40;

        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) (Errors_72));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *HaveModule_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (FileName_70));
          MR_hl_field(0, base, 1) = ((MR_Box) (ParseTreePlainOpt_28));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_40));
        }
      }
    }
    FileStream_27 = ((MR_Word) ((MR_hl_field(0, FileNameAndStream_20, (MR_Integer) 1))));
    mercury__io__close_input_3_p_0(FileStream_27);
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int3_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word ReturnTimestamp_15,
  MR_Word * HaveModule_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_23)
{
  MR_bool succeeded;
  MR_Word OrigHPTM_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 5))));
  MR_Word HaveReadModulePrime_20;
  MR_Word HaveReadModule0_47;
  MR_String FN_48;
  MR_Word PT_49;
  MR_Word Source0_50;
  MR_Word Source_54;
  MR_Box conv0_HaveReadModule0_47;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]), OrigHPTM_19, ((MR_Box) (ModuleName_14)), &conv0_HaveReadModule0_47);
  if (succeeded)
  {
    HaveReadModule0_47 = ((MR_Word) (conv0_HaveReadModule0_47));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) HaveReadModule0_47)) == (MR_Integer) 0);
    if (succeeded)
    {
      FN_48 = ((MR_String) ((MR_hl_field(0, HaveReadModule0_47, (MR_Integer) 0))));
      PT_49 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_47, (MR_Integer) 1))));
      Source0_50 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_47, (MR_Integer) 2))));
      if ((Source0_50 == (MR_Word) ((MR_Unsigned) 0U)))
        switch (ReturnTimestamp_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Source_54 = Source0_50;
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.search_module_name_timestamp_if_needed\'/4", (MR_String) "was_constructed");
              return;
            }
            break;
        }
      else
      {
        MR_Word MaybeTimeStamp0_51 = ((MR_Word) ((MR_hl_field(1, Source0_50, (MR_Integer) 0))));
        MR_Word E_52 = ((MR_Word) ((MR_hl_field(1, Source0_50, (MR_Integer) 1))));
        MR_Word MaybeTimeStamp_53;

        switch (ReturnTimestamp_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeTimeStamp_53 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            if ((MaybeTimeStamp0_51 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
                return;
              }
            else
              MaybeTimeStamp_53 = MaybeTimeStamp0_51;
            break;
        }
        {
          Source_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Source_54, 0) = ((MR_Box) (MaybeTimeStamp_53));
          MR_hl_field(1, Source_54, 1) = ((MR_Box) (E_52));
        }
      }
      {
        HaveReadModulePrime_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HaveReadModulePrime_20, 0) = ((MR_Box) (FN_48));
        MR_hl_field(0, HaveReadModulePrime_20, 1) = ((MR_Box) (PT_49));
        MR_hl_field(0, HaveReadModulePrime_20, 2) = ((MR_Box) (Source_54));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    *HaveModule_16 = HaveReadModulePrime_20;
    *STATE_VARIABLE_HaveParseTreeMaps_23 = STATE_VARIABLE_HaveParseTreeMaps_0_22;
  }
  else
  {
    MR_Word HPTM_21;
    MR_Word Var_28;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_15));
    }
    parse_tree__read_modules__read_module_int3_10_p_0(ProgressStream_11, Globals_12, (MR_Integer) 1, (MR_Integer) 1, Search_13, ModuleName_14, Var_28, HaveModule_16);
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]), ((MR_Box) (ModuleName_14)), ((MR_Box) (*HaveModule_16)), OrigHPTM_19, &HPTM_21);
    Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 0))));
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 1))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 2))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 3))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 4))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 6))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HaveParseTreeMaps_23 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_39));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_40));
      MR_hl_field(0, base, 5) = ((MR_Box) (HPTM_21));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_43));
    }
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int3_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word ReadReasonMsg_13,
  MR_Word IgnoreErrors_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_Word ReadModuleAndTimestamps_17,
  MR_Word * HaveModule_18)
{
  MR_String FileName0_20;
  MR_Word ReadDoneMsg_21;
  MR_Word SearchDirs_22;
  MR_Word RawMaybeFileNameAndStream_58;
  MR_Word _SearchDirs_57;

  parse_tree__read_modules__read_module_begin_11_p_0(ProgressStream_11, Globals_12, ReadReasonMsg_13, Search_15, ModuleName_16, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[3])), &FileName0_20, &ReadDoneMsg_21, &SearchDirs_22);
  parse_tree__find_module__search_for_file_and_stream_6_p_0(SearchDirs_22, FileName0_20, &_SearchDirs_57, &RawMaybeFileNameAndStream_58);
  if (((MR_tag((MR_Word) RawMaybeFileNameAndStream_58)) == (MR_Integer) 1))
  {
    MR_Word MaybeFileNameAndStream_23;
    MR_Word Errors0_53;
    MR_String FileName_54;
    MR_Word Errors1_55;
    MR_Word Errors_56;
    MR_String ErrorMsg_60 = ((MR_String) ((MR_hl_field(1, RawMaybeFileNameAndStream_58, (MR_Integer) 0))));
    MR_Word Var_64;
    MR_Word _MaybeTimestamp_35;

    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (FileName0_20));
    }
    parse_tree__parse_error__io_error_to_read_module_errors_6_p_0((MR_Integer) 0, Var_64, ErrorMsg_60, &Errors0_53);
    MaybeFileNameAndStream_23 = (MR_Word) (MR_mkword(1, (MR_Word) (Errors0_53)));
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_23, IgnoreErrors_14, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[3])), ReadDoneMsg_21, FileName0_20, &FileName_54, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_35, Errors0_53, &Errors1_55);
    Errors_56 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_14, Errors1_55);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveModule_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_54));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_56));
    }
  }
  else
  {
    MR_Word FileNameAndStream_24 = ((MR_Word) ((MR_hl_field(0, RawMaybeFileNameAndStream_58, (MR_Integer) 0))));
    MR_Word FileStream_32;
    MR_Word Var_44;
    MR_Word ReadFileResult_65;
    MR_Word MaybeFileNameAndStream_79 = (MR_Word) ((MR_Word) (FileNameAndStream_24));

    parse_tree__read_modules__do_actually_read_file_5_p_0(FileNameAndStream_24, ReadModuleAndTimestamps_17, &ReadFileResult_65);
    Var_44 = (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[3]));
    if (((MR_tag((MR_Word) ReadFileResult_65)) == (MR_Integer) 1))
    {
      MR_Word MaybeTimestampRes_25 = ((MR_Word) ((MR_hl_field(1, ReadFileResult_65, (MR_Integer) 1))));
      MR_Word Errors0_27 = ((MR_Word) ((MR_hl_field(1, ReadFileResult_65, (MR_Integer) 0))));
      MR_String FileName_28;
      MR_Word Errors1_30;
      MR_Word Errors_34;
      MR_Word MaybeTimestamp_29;

      parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_79, IgnoreErrors_14, Var_44, ReadDoneMsg_21, FileName0_20, &FileName_28, MaybeTimestampRes_25, &MaybeTimestamp_29, Errors0_27, &Errors1_30);
      Errors_34 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_14, Errors1_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveModule_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileName_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors_34));
      }
    }
    else
    {
      MR_String FileStr_66 = ((MR_String) ((MR_hl_field(0, ReadFileResult_65, (MR_Integer) 0))));
      MR_Integer FileStrLen_67 = ((MR_Integer) ((MR_hl_field(0, ReadFileResult_65, (MR_Integer) 1))));
      MR_String FileName_68 = ((MR_String) ((MR_hl_field(0, FileNameAndStream_24, (MR_Integer) 0))));
      MR_Word MaybeTimestampRes_72 = ((MR_Word) ((MR_hl_field(0, ReadFileResult_65, (MR_Integer) 2))));
      MR_Word MaybeParseTreeInt3_73;
      MR_Word Errors0_74;
      MR_String FileName_75;
      MR_Word MaybeTimestamp_76;
      MR_Word Errors1_77;

      parse_tree__parse_module__parse_int3_file_8_p_0(Globals_12, FileName_68, FileStr_66, FileStrLen_67, ModuleName_16, (MR_Word) ((MR_Unsigned) 0U), &MaybeParseTreeInt3_73, &Errors0_74);
      parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_79, IgnoreErrors_14, Var_44, ReadDoneMsg_21, FileName0_20, &FileName_75, MaybeTimestampRes_72, &MaybeTimestamp_76, Errors0_74, &Errors1_77);
      if ((MaybeParseTreeInt3_73 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Errors_70;

        Errors_70 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_14, Errors1_77);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HaveModule_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FileName_75));
          MR_hl_field(1, base, 1) = ((MR_Box) (Errors_70));
        }
      }
      else
      {
        MR_Word ParseTreeInt3_33 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt3_73, (MR_Integer) 0))));
        MR_Word Var_48;

        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (MaybeTimestamp_76));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Errors1_77));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *HaveModule_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (FileName_75));
          MR_hl_field(0, base, 1) = ((MR_Box) (ParseTreeInt3_33));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_48));
        }
      }
    }
    FileStream_32 = ((MR_Word) ((MR_hl_field(0, FileNameAndStream_24, (MR_Integer) 1))));
    mercury__io__close_input_3_p_0(FileStream_32);
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int2_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word ReturnTimestamp_15,
  MR_Word * HaveModule_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_23)
{
  MR_bool succeeded;
  MR_Word OrigHPTM_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 4))));
  MR_Word HaveReadModulePrime_20;
  MR_Word HaveReadModule0_47;
  MR_String FN_48;
  MR_Word PT_49;
  MR_Word Source0_50;
  MR_Word Source_54;
  MR_Box conv0_HaveReadModule0_47;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]), OrigHPTM_19, ((MR_Box) (ModuleName_14)), &conv0_HaveReadModule0_47);
  if (succeeded)
  {
    HaveReadModule0_47 = ((MR_Word) (conv0_HaveReadModule0_47));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) HaveReadModule0_47)) == (MR_Integer) 0);
    if (succeeded)
    {
      FN_48 = ((MR_String) ((MR_hl_field(0, HaveReadModule0_47, (MR_Integer) 0))));
      PT_49 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_47, (MR_Integer) 1))));
      Source0_50 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_47, (MR_Integer) 2))));
      if ((Source0_50 == (MR_Word) ((MR_Unsigned) 0U)))
        switch (ReturnTimestamp_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Source_54 = Source0_50;
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.search_module_name_timestamp_if_needed\'/4", (MR_String) "was_constructed");
              return;
            }
            break;
        }
      else
      {
        MR_Word MaybeTimeStamp0_51 = ((MR_Word) ((MR_hl_field(1, Source0_50, (MR_Integer) 0))));
        MR_Word E_52 = ((MR_Word) ((MR_hl_field(1, Source0_50, (MR_Integer) 1))));
        MR_Word MaybeTimeStamp_53;

        switch (ReturnTimestamp_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeTimeStamp_53 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            if ((MaybeTimeStamp0_51 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
                return;
              }
            else
              MaybeTimeStamp_53 = MaybeTimeStamp0_51;
            break;
        }
        {
          Source_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Source_54, 0) = ((MR_Box) (MaybeTimeStamp_53));
          MR_hl_field(1, Source_54, 1) = ((MR_Box) (E_52));
        }
      }
      {
        HaveReadModulePrime_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HaveReadModulePrime_20, 0) = ((MR_Box) (FN_48));
        MR_hl_field(0, HaveReadModulePrime_20, 1) = ((MR_Box) (PT_49));
        MR_hl_field(0, HaveReadModulePrime_20, 2) = ((MR_Box) (Source_54));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    *HaveModule_16 = HaveReadModulePrime_20;
    *STATE_VARIABLE_HaveParseTreeMaps_23 = STATE_VARIABLE_HaveParseTreeMaps_0_22;
  }
  else
  {
    MR_Word HPTM_21;
    MR_Word Var_28;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_15));
    }
    parse_tree__read_modules__read_module_int2_10_p_0(ProgressStream_11, Globals_12, (MR_Integer) 1, (MR_Integer) 1, Search_13, ModuleName_14, Var_28, HaveModule_16);
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]), ((MR_Box) (ModuleName_14)), ((MR_Box) (*HaveModule_16)), OrigHPTM_19, &HPTM_21);
    Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 0))));
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 1))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 2))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 3))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 5))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 6))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HaveParseTreeMaps_23 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_39));
      MR_hl_field(0, base, 4) = ((MR_Box) (HPTM_21));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_41));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_43));
    }
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int2_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word ReadReasonMsg_13,
  MR_Word IgnoreErrors_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_Word ReadModuleAndTimestamps_17,
  MR_Word * HaveModule_18)
{
  MR_String FileName0_20;
  MR_Word ReadDoneMsg_21;
  MR_Word SearchDirs_22;
  MR_Word RawMaybeFileNameAndStream_58;
  MR_Word _SearchDirs_57;

  parse_tree__read_modules__read_module_begin_11_p_0(ProgressStream_11, Globals_12, ReadReasonMsg_13, Search_15, ModuleName_16, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[2])), &FileName0_20, &ReadDoneMsg_21, &SearchDirs_22);
  parse_tree__find_module__search_for_file_and_stream_6_p_0(SearchDirs_22, FileName0_20, &_SearchDirs_57, &RawMaybeFileNameAndStream_58);
  if (((MR_tag((MR_Word) RawMaybeFileNameAndStream_58)) == (MR_Integer) 1))
  {
    MR_Word MaybeFileNameAndStream_23;
    MR_Word Errors0_53;
    MR_String FileName_54;
    MR_Word Errors1_55;
    MR_Word Errors_56;
    MR_String ErrorMsg_60 = ((MR_String) ((MR_hl_field(1, RawMaybeFileNameAndStream_58, (MR_Integer) 0))));
    MR_Word Var_64;
    MR_Word _MaybeTimestamp_35;

    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (FileName0_20));
    }
    parse_tree__parse_error__io_error_to_read_module_errors_6_p_0((MR_Integer) 0, Var_64, ErrorMsg_60, &Errors0_53);
    MaybeFileNameAndStream_23 = (MR_Word) (MR_mkword(1, (MR_Word) (Errors0_53)));
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_23, IgnoreErrors_14, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[2])), ReadDoneMsg_21, FileName0_20, &FileName_54, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_35, Errors0_53, &Errors1_55);
    Errors_56 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_14, Errors1_55);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveModule_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_54));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_56));
    }
  }
  else
  {
    MR_Word FileNameAndStream_24 = ((MR_Word) ((MR_hl_field(0, RawMaybeFileNameAndStream_58, (MR_Integer) 0))));
    MR_Word FileStream_32;
    MR_Word Var_44;
    MR_Word ReadFileResult_65;
    MR_Word MaybeFileNameAndStream_79 = (MR_Word) ((MR_Word) (FileNameAndStream_24));

    parse_tree__read_modules__do_actually_read_file_5_p_0(FileNameAndStream_24, ReadModuleAndTimestamps_17, &ReadFileResult_65);
    Var_44 = (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[2]));
    if (((MR_tag((MR_Word) ReadFileResult_65)) == (MR_Integer) 1))
    {
      MR_Word MaybeTimestampRes_25 = ((MR_Word) ((MR_hl_field(1, ReadFileResult_65, (MR_Integer) 1))));
      MR_Word Errors0_27 = ((MR_Word) ((MR_hl_field(1, ReadFileResult_65, (MR_Integer) 0))));
      MR_String FileName_28;
      MR_Word Errors1_30;
      MR_Word Errors_34;
      MR_Word MaybeTimestamp_29;

      parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_79, IgnoreErrors_14, Var_44, ReadDoneMsg_21, FileName0_20, &FileName_28, MaybeTimestampRes_25, &MaybeTimestamp_29, Errors0_27, &Errors1_30);
      Errors_34 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_14, Errors1_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveModule_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileName_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors_34));
      }
    }
    else
    {
      MR_String FileStr_66 = ((MR_String) ((MR_hl_field(0, ReadFileResult_65, (MR_Integer) 0))));
      MR_Integer FileStrLen_67 = ((MR_Integer) ((MR_hl_field(0, ReadFileResult_65, (MR_Integer) 1))));
      MR_String FileName_68 = ((MR_String) ((MR_hl_field(0, FileNameAndStream_24, (MR_Integer) 0))));
      MR_Word MaybeTimestampRes_72 = ((MR_Word) ((MR_hl_field(0, ReadFileResult_65, (MR_Integer) 2))));
      MR_Word MaybeParseTreeInt2_73;
      MR_Word Errors0_74;
      MR_String FileName_75;
      MR_Word MaybeTimestamp_76;
      MR_Word Errors1_77;

      parse_tree__parse_module__parse_int2_file_8_p_0(Globals_12, FileName_68, FileStr_66, FileStrLen_67, ModuleName_16, (MR_Word) ((MR_Unsigned) 0U), &MaybeParseTreeInt2_73, &Errors0_74);
      parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_79, IgnoreErrors_14, Var_44, ReadDoneMsg_21, FileName0_20, &FileName_75, MaybeTimestampRes_72, &MaybeTimestamp_76, Errors0_74, &Errors1_77);
      if ((MaybeParseTreeInt2_73 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Errors_70;

        Errors_70 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_14, Errors1_77);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HaveModule_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FileName_75));
          MR_hl_field(1, base, 1) = ((MR_Box) (Errors_70));
        }
      }
      else
      {
        MR_Word ParseTreeInt2_33 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt2_73, (MR_Integer) 0))));
        MR_Word Var_48;

        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (MaybeTimestamp_76));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Errors1_77));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *HaveModule_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (FileName_75));
          MR_hl_field(0, base, 1) = ((MR_Box) (ParseTreeInt2_33));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_48));
        }
      }
    }
    FileStream_32 = ((MR_Word) ((MR_hl_field(0, FileNameAndStream_24, (MR_Integer) 1))));
    mercury__io__close_input_3_p_0(FileStream_32);
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int1_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word ReturnTimestamp_15,
  MR_Word * HaveModule_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_23)
{
  MR_bool succeeded;
  MR_Word OrigHPTM_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 3))));
  MR_Word HaveReadModulePrime_20;
  MR_Word HaveReadModule0_47;
  MR_String FN_48;
  MR_Word PT_49;
  MR_Word Source0_50;
  MR_Word Source_54;
  MR_Box conv0_HaveReadModule0_47;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[2]), OrigHPTM_19, ((MR_Box) (ModuleName_14)), &conv0_HaveReadModule0_47);
  if (succeeded)
  {
    HaveReadModule0_47 = ((MR_Word) (conv0_HaveReadModule0_47));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) HaveReadModule0_47)) == (MR_Integer) 0);
    if (succeeded)
    {
      FN_48 = ((MR_String) ((MR_hl_field(0, HaveReadModule0_47, (MR_Integer) 0))));
      PT_49 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_47, (MR_Integer) 1))));
      Source0_50 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_47, (MR_Integer) 2))));
      if ((Source0_50 == (MR_Word) ((MR_Unsigned) 0U)))
        switch (ReturnTimestamp_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Source_54 = Source0_50;
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.search_module_name_timestamp_if_needed\'/4", (MR_String) "was_constructed");
              return;
            }
            break;
        }
      else
      {
        MR_Word MaybeTimeStamp0_51 = ((MR_Word) ((MR_hl_field(1, Source0_50, (MR_Integer) 0))));
        MR_Word E_52 = ((MR_Word) ((MR_hl_field(1, Source0_50, (MR_Integer) 1))));
        MR_Word MaybeTimeStamp_53;

        switch (ReturnTimestamp_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeTimeStamp_53 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            if ((MaybeTimeStamp0_51 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
                return;
              }
            else
              MaybeTimeStamp_53 = MaybeTimeStamp0_51;
            break;
        }
        {
          Source_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Source_54, 0) = ((MR_Box) (MaybeTimeStamp_53));
          MR_hl_field(1, Source_54, 1) = ((MR_Box) (E_52));
        }
      }
      {
        HaveReadModulePrime_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HaveReadModulePrime_20, 0) = ((MR_Box) (FN_48));
        MR_hl_field(0, HaveReadModulePrime_20, 1) = ((MR_Box) (PT_49));
        MR_hl_field(0, HaveReadModulePrime_20, 2) = ((MR_Box) (Source_54));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    *HaveModule_16 = HaveReadModulePrime_20;
    *STATE_VARIABLE_HaveParseTreeMaps_23 = STATE_VARIABLE_HaveParseTreeMaps_0_22;
  }
  else
  {
    MR_Word HPTM_21;
    MR_Word Var_28;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_15));
    }
    parse_tree__read_modules__read_module_int1_10_p_0(ProgressStream_11, Globals_12, (MR_Integer) 1, (MR_Integer) 1, Search_13, ModuleName_14, Var_28, HaveModule_16);
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[2]), ((MR_Box) (ModuleName_14)), ((MR_Box) (*HaveModule_16)), OrigHPTM_19, &HPTM_21);
    Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 0))));
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 1))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 2))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 4))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 5))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 6))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HaveParseTreeMaps_23 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 3) = ((MR_Box) (HPTM_21));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_40));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_41));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_43));
    }
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int1_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word ReadReasonMsg_13,
  MR_Word IgnoreErrors_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_Word ReadModuleAndTimestamps_17,
  MR_Word * HaveModule_18)
{
  MR_String FileName0_20;
  MR_Word ReadDoneMsg_21;
  MR_Word SearchDirs_22;
  MR_Word RawMaybeFileNameAndStream_58;
  MR_Word _SearchDirs_57;

  parse_tree__read_modules__read_module_begin_11_p_0(ProgressStream_11, Globals_12, ReadReasonMsg_13, Search_15, ModuleName_16, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[1])), &FileName0_20, &ReadDoneMsg_21, &SearchDirs_22);
  parse_tree__find_module__search_for_file_and_stream_6_p_0(SearchDirs_22, FileName0_20, &_SearchDirs_57, &RawMaybeFileNameAndStream_58);
  if (((MR_tag((MR_Word) RawMaybeFileNameAndStream_58)) == (MR_Integer) 1))
  {
    MR_Word MaybeFileNameAndStream_23;
    MR_Word Errors0_53;
    MR_String FileName_54;
    MR_Word Errors1_55;
    MR_Word Errors_56;
    MR_String ErrorMsg_60 = ((MR_String) ((MR_hl_field(1, RawMaybeFileNameAndStream_58, (MR_Integer) 0))));
    MR_Word Var_64;
    MR_Word _MaybeTimestamp_35;

    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (FileName0_20));
    }
    parse_tree__parse_error__io_error_to_read_module_errors_6_p_0((MR_Integer) 0, Var_64, ErrorMsg_60, &Errors0_53);
    MaybeFileNameAndStream_23 = (MR_Word) (MR_mkword(1, (MR_Word) (Errors0_53)));
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_23, IgnoreErrors_14, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_21, FileName0_20, &FileName_54, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_35, Errors0_53, &Errors1_55);
    Errors_56 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_14, Errors1_55);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveModule_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_54));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_56));
    }
  }
  else
  {
    MR_Word FileNameAndStream_24 = ((MR_Word) ((MR_hl_field(0, RawMaybeFileNameAndStream_58, (MR_Integer) 0))));
    MR_Word FileStream_32;
    MR_Word Var_44;
    MR_Word ReadFileResult_65;
    MR_Word MaybeFileNameAndStream_79 = (MR_Word) ((MR_Word) (FileNameAndStream_24));

    parse_tree__read_modules__do_actually_read_file_5_p_0(FileNameAndStream_24, ReadModuleAndTimestamps_17, &ReadFileResult_65);
    Var_44 = (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[1]));
    if (((MR_tag((MR_Word) ReadFileResult_65)) == (MR_Integer) 1))
    {
      MR_Word MaybeTimestampRes_25 = ((MR_Word) ((MR_hl_field(1, ReadFileResult_65, (MR_Integer) 1))));
      MR_Word Errors0_27 = ((MR_Word) ((MR_hl_field(1, ReadFileResult_65, (MR_Integer) 0))));
      MR_String FileName_28;
      MR_Word Errors1_30;
      MR_Word Errors_34;
      MR_Word MaybeTimestamp_29;

      parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_79, IgnoreErrors_14, Var_44, ReadDoneMsg_21, FileName0_20, &FileName_28, MaybeTimestampRes_25, &MaybeTimestamp_29, Errors0_27, &Errors1_30);
      Errors_34 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_14, Errors1_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveModule_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileName_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors_34));
      }
    }
    else
    {
      MR_String FileStr_66 = ((MR_String) ((MR_hl_field(0, ReadFileResult_65, (MR_Integer) 0))));
      MR_Integer FileStrLen_67 = ((MR_Integer) ((MR_hl_field(0, ReadFileResult_65, (MR_Integer) 1))));
      MR_String FileName_68 = ((MR_String) ((MR_hl_field(0, FileNameAndStream_24, (MR_Integer) 0))));
      MR_Word MaybeTimestampRes_72 = ((MR_Word) ((MR_hl_field(0, ReadFileResult_65, (MR_Integer) 2))));
      MR_Word MaybeParseTreeInt1_73;
      MR_Word Errors0_74;
      MR_String FileName_75;
      MR_Word MaybeTimestamp_76;
      MR_Word Errors1_77;

      parse_tree__parse_module__parse_int1_file_8_p_0(Globals_12, FileName_68, FileStr_66, FileStrLen_67, ModuleName_16, (MR_Word) ((MR_Unsigned) 0U), &MaybeParseTreeInt1_73, &Errors0_74);
      parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_79, IgnoreErrors_14, Var_44, ReadDoneMsg_21, FileName0_20, &FileName_75, MaybeTimestampRes_72, &MaybeTimestamp_76, Errors0_74, &Errors1_77);
      if ((MaybeParseTreeInt1_73 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Errors_70;

        Errors_70 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_14, Errors1_77);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HaveModule_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FileName_75));
          MR_hl_field(1, base, 1) = ((MR_Box) (Errors_70));
        }
      }
      else
      {
        MR_Word ParseTreeInt1_33 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt1_73, (MR_Integer) 0))));
        MR_Word Var_48;

        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (MaybeTimestamp_76));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Errors1_77));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *HaveModule_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (FileName_75));
          MR_hl_field(0, base, 1) = ((MR_Box) (ParseTreeInt1_33));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_48));
        }
      }
    }
    FileStream_32 = ((MR_Word) ((MR_hl_field(0, FileNameAndStream_24, (MR_Integer) 1))));
    mercury__io__close_input_3_p_0(FileStream_32);
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int0_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word ReturnTimestamp_15,
  MR_Word * HaveModule_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_23)
{
  MR_bool succeeded;
  MR_Word OrigHPTM_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 2))));
  MR_Word HaveReadModulePrime_20;
  MR_Word HaveReadModule0_47;
  MR_String FN_48;
  MR_Word PT_49;
  MR_Word Source0_50;
  MR_Word Source_54;
  MR_Box conv0_HaveReadModule0_47;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[1]), OrigHPTM_19, ((MR_Box) (ModuleName_14)), &conv0_HaveReadModule0_47);
  if (succeeded)
  {
    HaveReadModule0_47 = ((MR_Word) (conv0_HaveReadModule0_47));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) HaveReadModule0_47)) == (MR_Integer) 0);
    if (succeeded)
    {
      FN_48 = ((MR_String) ((MR_hl_field(0, HaveReadModule0_47, (MR_Integer) 0))));
      PT_49 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_47, (MR_Integer) 1))));
      Source0_50 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_47, (MR_Integer) 2))));
      if ((Source0_50 == (MR_Word) ((MR_Unsigned) 0U)))
        switch (ReturnTimestamp_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Source_54 = Source0_50;
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.search_module_name_timestamp_if_needed\'/4", (MR_String) "was_constructed");
              return;
            }
            break;
        }
      else
      {
        MR_Word MaybeTimeStamp0_51 = ((MR_Word) ((MR_hl_field(1, Source0_50, (MR_Integer) 0))));
        MR_Word E_52 = ((MR_Word) ((MR_hl_field(1, Source0_50, (MR_Integer) 1))));
        MR_Word MaybeTimeStamp_53;

        switch (ReturnTimestamp_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeTimeStamp_53 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            if ((MaybeTimeStamp0_51 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
                return;
              }
            else
              MaybeTimeStamp_53 = MaybeTimeStamp0_51;
            break;
        }
        {
          Source_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Source_54, 0) = ((MR_Box) (MaybeTimeStamp_53));
          MR_hl_field(1, Source_54, 1) = ((MR_Box) (E_52));
        }
      }
      {
        HaveReadModulePrime_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HaveReadModulePrime_20, 0) = ((MR_Box) (FN_48));
        MR_hl_field(0, HaveReadModulePrime_20, 1) = ((MR_Box) (PT_49));
        MR_hl_field(0, HaveReadModulePrime_20, 2) = ((MR_Box) (Source_54));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    *HaveModule_16 = HaveReadModulePrime_20;
    *STATE_VARIABLE_HaveParseTreeMaps_23 = STATE_VARIABLE_HaveParseTreeMaps_0_22;
  }
  else
  {
    MR_Word HPTM_21;
    MR_Word Var_28;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_15));
    }
    parse_tree__read_modules__read_module_int0_10_p_0(ProgressStream_11, Globals_12, (MR_Integer) 1, (MR_Integer) 1, Search_13, ModuleName_14, Var_28, HaveModule_16);
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[1]), ((MR_Box) (ModuleName_14)), ((MR_Box) (*HaveModule_16)), OrigHPTM_19, &HPTM_21);
    Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 0))));
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 1))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 3))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 4))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 5))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 6))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_22, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HaveParseTreeMaps_23 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 2) = ((MR_Box) (HPTM_21));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_39));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_40));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_41));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_43));
    }
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int0_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word ReadReasonMsg_13,
  MR_Word IgnoreErrors_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_Word ReadModuleAndTimestamps_17,
  MR_Word * HaveModule_18)
{
  MR_String FileName0_20;
  MR_Word ReadDoneMsg_21;
  MR_Word SearchDirs_22;
  MR_Word RawMaybeFileNameAndStream_58;
  MR_Word _SearchDirs_57;

  parse_tree__read_modules__read_module_begin_11_p_0(ProgressStream_11, Globals_12, ReadReasonMsg_13, Search_15, ModuleName_16, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[0])), &FileName0_20, &ReadDoneMsg_21, &SearchDirs_22);
  parse_tree__find_module__search_for_file_and_stream_6_p_0(SearchDirs_22, FileName0_20, &_SearchDirs_57, &RawMaybeFileNameAndStream_58);
  if (((MR_tag((MR_Word) RawMaybeFileNameAndStream_58)) == (MR_Integer) 1))
  {
    MR_Word MaybeFileNameAndStream_23;
    MR_Word Errors0_53;
    MR_String FileName_54;
    MR_Word Errors1_55;
    MR_Word Errors_56;
    MR_String ErrorMsg_60 = ((MR_String) ((MR_hl_field(1, RawMaybeFileNameAndStream_58, (MR_Integer) 0))));
    MR_Word Var_64;
    MR_Word _MaybeTimestamp_35;

    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (FileName0_20));
    }
    parse_tree__parse_error__io_error_to_read_module_errors_6_p_0((MR_Integer) 0, Var_64, ErrorMsg_60, &Errors0_53);
    MaybeFileNameAndStream_23 = (MR_Word) (MR_mkword(1, (MR_Word) (Errors0_53)));
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_23, IgnoreErrors_14, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[0])), ReadDoneMsg_21, FileName0_20, &FileName_54, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_35, Errors0_53, &Errors1_55);
    Errors_56 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_14, Errors1_55);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveModule_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_54));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_56));
    }
  }
  else
  {
    MR_Word FileNameAndStream_24 = ((MR_Word) ((MR_hl_field(0, RawMaybeFileNameAndStream_58, (MR_Integer) 0))));
    MR_Word FileStream_32;
    MR_Word Var_44;
    MR_Word ReadFileResult_65;
    MR_Word MaybeFileNameAndStream_79 = (MR_Word) ((MR_Word) (FileNameAndStream_24));

    parse_tree__read_modules__do_actually_read_file_5_p_0(FileNameAndStream_24, ReadModuleAndTimestamps_17, &ReadFileResult_65);
    Var_44 = (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[0]));
    if (((MR_tag((MR_Word) ReadFileResult_65)) == (MR_Integer) 1))
    {
      MR_Word MaybeTimestampRes_25 = ((MR_Word) ((MR_hl_field(1, ReadFileResult_65, (MR_Integer) 1))));
      MR_Word Errors0_27 = ((MR_Word) ((MR_hl_field(1, ReadFileResult_65, (MR_Integer) 0))));
      MR_String FileName_28;
      MR_Word Errors1_30;
      MR_Word Errors_34;
      MR_Word MaybeTimestamp_29;

      parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_79, IgnoreErrors_14, Var_44, ReadDoneMsg_21, FileName0_20, &FileName_28, MaybeTimestampRes_25, &MaybeTimestamp_29, Errors0_27, &Errors1_30);
      Errors_34 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_14, Errors1_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveModule_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileName_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors_34));
      }
    }
    else
    {
      MR_String FileStr_66 = ((MR_String) ((MR_hl_field(0, ReadFileResult_65, (MR_Integer) 0))));
      MR_Integer FileStrLen_67 = ((MR_Integer) ((MR_hl_field(0, ReadFileResult_65, (MR_Integer) 1))));
      MR_String FileName_68 = ((MR_String) ((MR_hl_field(0, FileNameAndStream_24, (MR_Integer) 0))));
      MR_Word MaybeTimestampRes_72 = ((MR_Word) ((MR_hl_field(0, ReadFileResult_65, (MR_Integer) 2))));
      MR_Word MaybeParseTreeInt0_73;
      MR_Word Errors0_74;
      MR_String FileName_75;
      MR_Word MaybeTimestamp_76;
      MR_Word Errors1_77;

      parse_tree__parse_module__parse_int0_file_8_p_0(Globals_12, FileName_68, FileStr_66, FileStrLen_67, ModuleName_16, (MR_Word) ((MR_Unsigned) 0U), &MaybeParseTreeInt0_73, &Errors0_74);
      parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_79, IgnoreErrors_14, Var_44, ReadDoneMsg_21, FileName0_20, &FileName_75, MaybeTimestampRes_72, &MaybeTimestamp_76, Errors0_74, &Errors1_77);
      if ((MaybeParseTreeInt0_73 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Errors_70;

        Errors_70 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_14, Errors1_77);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HaveModule_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FileName_75));
          MR_hl_field(1, base, 1) = ((MR_Box) (Errors_70));
        }
      }
      else
      {
        MR_Word ParseTreeInt0_33 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt0_73, (MR_Integer) 0))));
        MR_Word Var_48;

        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (MaybeTimestamp_76));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Errors1_77));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *HaveModule_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (FileName_75));
          MR_hl_field(0, base, 1) = ((MR_Box) (ParseTreeInt0_33));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_48));
        }
      }
    }
    FileStream_32 = ((MR_Word) ((MR_hl_field(0, FileNameAndStream_24, (MR_Integer) 1))));
    mercury__io__close_input_3_p_0(FileStream_32);
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_src_from_file_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_String FileName_13,
  MR_String FileNameDotM_14,
  MR_Word ReadReasonMsg_15,
  MR_Word Search_16,
  MR_Word ReadModuleAndTimestamps_17,
  MR_Word * HaveModule_18)
{
  MR_Word DefaultModuleName_20;
  MR_Word ReadDoneMsg_21;
  MR_Word SearchWhichDirs_22;
  MR_Word MaybeFileNameAndStream_24;
  MR_Word VeryVerbose_56;
  MR_Word _SearchDirs_23;

  parse_tree__read_modules__get_default_module_name_for_file_5_p_0(FileName_13, FileNameDotM_14, &DefaultModuleName_20);
  switch (Search_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      SearchWhichDirs_22 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      SearchWhichDirs_22 = parse_tree__find_module__get_search_auth_normal_dirs_2_f_0((MR_Integer) 5, Globals_12);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 77, &VeryVerbose_56);
  switch (VeryVerbose_56) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ReadDoneMsg_21 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_String Msg_57;

        switch (ReadReasonMsg_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_86;

              Var_86 = mercury__string__f_43_43_2_f_0(FileNameDotM_14, (MR_String) "\'... ");
              Msg_57 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_86);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_83;

              Var_83 = mercury__string__f_43_43_2_f_0(FileNameDotM_14, (MR_String) "\'... ");
              Msg_57 = mercury__string__f_43_43_2_f_0((MR_String) "% Getting dependencies for \140", Var_83);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Var_80;

              Var_80 = mercury__string__f_43_43_2_f_0(FileNameDotM_14, (MR_String) "\'... ");
              Msg_57 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading old version of \140", Var_80);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_77;

              Var_77 = mercury__string__f_43_43_2_f_0(FileNameDotM_14, (MR_String) "\'... ");
              Msg_57 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_77);
            }
            break;
        }
        {
          ReadDoneMsg_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ReadDoneMsg_21, 0) = ((MR_Box) (ProgressStream_11));
        }
        mercury__io__write_string_4_p_0(ProgressStream_11, Msg_57);
        mercury__io__flush_output_3_p_0(ProgressStream_11);
      }
      break;
  }
  parse_tree__find_module__search_for_file_and_stream_6_p_0(SearchWhichDirs_22, FileNameDotM_14, &_SearchDirs_23, &MaybeFileNameAndStream_24);
  if (((MR_tag((MR_Word) MaybeFileNameAndStream_24)) == (MR_Integer) 1))
  {
    MR_String ErrorMsg_34 = ((MR_String) ((MR_hl_field(1, MaybeFileNameAndStream_24, (MR_Integer) 0))));
    MR_Word Errors_36;
    MR_Word Var_49;
    MR_Word Errors0_54;
    MR_Word _MaybeTimestamp_35;

    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (FileNameDotM_14));
    }
    parse_tree__parse_error__io_error_to_read_module_errors_6_p_0((MR_Integer) 1, Var_49, ErrorMsg_34, &Errors0_54);
    parse_tree__read_modules__read_module_end_file_10_p_0(Globals_12, (MR_Word) ((MR_Unsigned) 0U), ReadDoneMsg_21, FileNameDotM_14, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_35, Errors0_54, &Errors_36);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveModule_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileNameDotM_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_36));
    }
  }
  else
  {
    MR_Word FileNameAndStream_25 = ((MR_Word) ((MR_hl_field(0, MaybeFileNameAndStream_24, (MR_Integer) 0))));
    MR_Word FileStream_32;
    MR_Word ReadFileResult_88;

    parse_tree__read_modules__do_actually_read_file_5_p_0(FileNameAndStream_25, ReadModuleAndTimestamps_17, &ReadFileResult_88);
    if (((MR_tag((MR_Word) ReadFileResult_88)) == (MR_Integer) 1))
    {
      MR_Word MaybeTimestampRes_26 = ((MR_Word) ((MR_hl_field(1, ReadFileResult_88, (MR_Integer) 1))));
      MR_Word Errors0_28 = ((MR_Word) ((MR_hl_field(1, ReadFileResult_88, (MR_Integer) 0))));
      MR_Word Errors1_30;
      MR_Word MaybeTimestamp_29;

      parse_tree__read_modules__read_module_end_file_10_p_0(Globals_12, (MR_Word) ((MR_Unsigned) 0U), ReadDoneMsg_21, FileNameDotM_14, MaybeTimestampRes_26, &MaybeTimestamp_29, Errors0_28, &Errors1_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveModule_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileNameDotM_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors1_30));
      }
    }
    else
    {
      MR_String FileStr_89 = ((MR_String) ((MR_hl_field(0, ReadFileResult_88, (MR_Integer) 0))));
      MR_Integer FileStrLen_90 = ((MR_Integer) ((MR_hl_field(0, ReadFileResult_88, (MR_Integer) 1))));
      MR_String FileName_91 = ((MR_String) ((MR_hl_field(0, FileNameAndStream_25, (MR_Integer) 0))));
      MR_Word MaybeTimestampRes_93 = ((MR_Word) ((MR_hl_field(0, ReadFileResult_88, (MR_Integer) 2))));
      MR_Word MaybeParseTreeSrc_94;
      MR_Word Errors0_95;
      MR_Word MaybeTimestamp_96;
      MR_Word Errors1_97;

      parse_tree__parse_module__parse_src_file_7_p_0(FileName_91, FileStr_89, FileStrLen_90, DefaultModuleName_20, (MR_Word) ((MR_Unsigned) 0U), &MaybeParseTreeSrc_94, &Errors0_95);
      parse_tree__read_modules__read_module_end_file_10_p_0(Globals_12, (MR_Word) ((MR_Unsigned) 0U), ReadDoneMsg_21, FileNameDotM_14, MaybeTimestampRes_93, &MaybeTimestamp_96, Errors0_95, &Errors1_97);
      if ((MaybeParseTreeSrc_94 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HaveModule_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FileNameDotM_14));
          MR_hl_field(1, base, 1) = ((MR_Box) (Errors1_97));
        }
      else
      {
        MR_Word ParseTreeSrc_33 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeSrc_94, (MR_Integer) 0))));
        MR_Word Var_47;

        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (MaybeTimestamp_96));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Errors1_97));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *HaveModule_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (FileNameDotM_14));
          MR_hl_field(0, base, 1) = ((MR_Box) (ParseTreeSrc_33));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_47));
        }
      }
    }
    FileStream_32 = ((MR_Word) ((MR_hl_field(0, FileNameAndStream_25, (MR_Integer) 1))));
    mercury__io__close_input_3_p_0(FileStream_32);
  }
}

static void MR_CALL 
parse_tree__read_modules__read_module_end_file_10_p_0(
  MR_Word Globals_11,
  MR_Word FileKind_12,
  MR_Word ReadDoneMsg_13,
  MR_String FileName_14,
  MR_Word MaybeTimestampRes_15,
  MR_Word * MaybeTimestamp_16,
  MR_Word Errors0_17,
  MR_Word * Errors_18)
{
  MR_Word Errors1_20;

  if ((MaybeTimestampRes_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeTimestamp_16 = (MR_Word) ((MR_Unsigned) 0U);
    Errors1_20 = Errors0_17;
  }
  else
  {
    MR_Word TimestampRes_25 = ((MR_Word) ((MR_hl_field(1, MaybeTimestampRes_15, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) TimestampRes_25)) == (MR_Integer) 1))
    {
      MR_Word IOError_27 = ((MR_Word) ((MR_hl_field(1, TimestampRes_25, (MR_Integer) 0))));
      MR_Word SmartRecompilation_28;

      *MaybeTimestamp_16 = (MR_Word) ((MR_Unsigned) 0U);
      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 173, &SmartRecompilation_28);
      switch (SmartRecompilation_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Errors1_20 = Errors0_17;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Warn_30;

            libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
            libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
            libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 32, &Warn_30);
            switch (Warn_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Errors1_20 = Errors0_17;
                break;
              case (MR_Integer) 1:
                {
                  MR_String IOErrorMsg_31;
                  MR_Word Pieces_32;
                  MR_Word Spec_33;
                  MR_Word Var_40;
                  MR_Word Var_41;
                  MR_Word Var_42;
                  MR_Word Var_45;
                  MR_Word Var_48;
                  MR_Word Var_49;
                  MR_Word Var_55;

                  mercury__io__error_message_2_p_0(IOError_27, &IOErrorMsg_31);
                  {
                    Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_41, 1) = ((MR_Box) (FileName_14));
                  }
                  {
                    Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, Var_49, 1) = ((MR_Box) (IOErrorMsg_31));
                  }
                  {
                    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
                    MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__read_modules_scalar_common_1[19])));
                  }
                  {
                    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[12])));
                    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
                  }
                  {
                    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[11])));
                    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
                  }
                  {
                    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
                    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
                  }
                  {
                    Pieces_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_32, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[10])));
                    MR_hl_field(1, Pieces_32, 1) = ((MR_Box) (Var_40));
                  }
                  {
                    Spec_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.read_modules.record_and_report_missing_timestamp\'/7"));
                    MR_hl_field(1, Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(1, Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                    MR_hl_field(1, Spec_33, 3) = ((MR_Box) (Pieces_32));
                  }
                  {
                    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Spec_33));
                    MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 7, Var_55, Errors0_17, &Errors1_20);
                }
                break;
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Timestamp_26 = ((MR_Word) ((MR_hl_field(0, TimestampRes_25, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTimestamp_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Timestamp_26));
      }
      Errors1_20 = Errors0_17;
    }
  }
  parse_tree__read_modules__handle_any_read_module_errors_7_p_0(FileKind_12, ReadDoneMsg_13, (MR_Integer) 1, Errors1_20, Errors_18);
}

void MR_CALL 
parse_tree__read_modules__get_default_module_name_for_file_5_p_0(
  MR_String FileName_6,
  MR_String FileNameDotM_7,
  MR_Word * DefaultModuleName_8)
{
  MR_bool succeeded;
  MR_String BaseFileName_11;
  MR_Word HaveMap_12;
  MR_String BaseFileNamePrime_10;

  succeeded = mercury__dir__basename_2_p_0(FileName_6, &BaseFileNamePrime_10);
  if (succeeded)
    BaseFileName_11 = BaseFileNamePrime_10;
  else
    BaseFileName_11 = (MR_String) "";
  parse_tree__source_file_map__have_source_file_map_3_p_0(&HaveMap_12);
  switch (HaveMap_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word MaybeModuleName_13;

        parse_tree__source_file_map__lookup_source_file_module_4_p_0(FileNameDotM_7, &MaybeModuleName_13);
        if ((MaybeModuleName_13 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__file_names__file_name_to_module_name_2_p_0(BaseFileName_11, DefaultModuleName_8);
        else
          *DefaultModuleName_8 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_13, (MR_Integer) 0))));
      }
      break;
    case (MR_Integer) 0:
      parse_tree__file_names__file_name_to_module_name_2_p_0(BaseFileName_11, DefaultModuleName_8);
      break;
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_src_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word ReadReasonMsg_14,
  MR_Word IgnoreErrors_15,
  MR_Word Search_16,
  MR_Word ModuleName_17,
  MR_Word ExpectationContexts_18,
  MR_Word ReadModuleAndTimestamps_19,
  MR_Word * HaveModule_20)
{
  MR_String FileName0_22;
  MR_Word ReadDoneMsg_23;
  MR_Word SearchAuthDirs_24;
  MR_Word MaybeFileNameAndStream_26;
  MR_Word _SearchDirs_25;

  parse_tree__read_modules__read_module_begin_11_p_0(ProgressStream_12, Globals_13, ReadReasonMsg_14, Search_16, ModuleName_17, (MR_Word) ((MR_Unsigned) 0U), &FileName0_22, &ReadDoneMsg_23, &SearchAuthDirs_24);
  parse_tree__find_module__search_for_module_source_and_stream_6_p_0(SearchAuthDirs_24, ModuleName_17, &_SearchDirs_25, &MaybeFileNameAndStream_26);
  if (((MR_tag((MR_Word) MaybeFileNameAndStream_26)) == (MR_Integer) 1))
  {
    MR_String ErrorMsg_39 = ((MR_String) ((MR_hl_field(1, MaybeFileNameAndStream_26, (MR_Integer) 0))));
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Errors0_59;
    MR_String FileName_60;
    MR_Word Errors1_61;
    MR_Word Errors_62;
    MR_Word _MaybeTimestamp_40;

    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (FileName0_22));
    }
    parse_tree__parse_error__io_error_to_read_module_errors_6_p_0((MR_Integer) 1, Var_53, ErrorMsg_39, &Errors0_59);
    Var_55 = (MR_Word) (MR_mkword(1, (MR_Word) (Errors0_59)));
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_12, Globals_13, Var_55, IgnoreErrors_15, (MR_Word) ((MR_Unsigned) 0U), ReadDoneMsg_23, FileName0_22, &FileName_60, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_40, Errors0_59, &Errors1_61);
    Errors_62 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_15, Errors1_61);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveModule_20 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_60));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_62));
    }
  }
  else
  {
    MR_Word FileNameAndStream_27 = ((MR_Word) ((MR_hl_field(0, MaybeFileNameAndStream_26, (MR_Integer) 0))));
    MR_Word FileStream_35;
    MR_Word ReadFileResult_66;

    parse_tree__read_modules__do_actually_read_file_5_p_0(FileNameAndStream_27, ReadModuleAndTimestamps_19, &ReadFileResult_66);
    if (((MR_tag((MR_Word) ReadFileResult_66)) == (MR_Integer) 1))
    {
      MR_Word MaybeTimestampRes_28 = ((MR_Word) ((MR_hl_field(1, ReadFileResult_66, (MR_Integer) 1))));
      MR_Word Errors0_30 = ((MR_Word) ((MR_hl_field(1, ReadFileResult_66, (MR_Integer) 0))));
      MR_String FileName_31;
      MR_Word Errors1_33;
      MR_Word Errors_38;
      MR_Word Var_47 = (MR_Word) ((MR_Word) (FileNameAndStream_27));
      MR_Word MaybeTimestamp_32;

      parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_12, Globals_13, Var_47, IgnoreErrors_15, (MR_Word) ((MR_Unsigned) 0U), ReadDoneMsg_23, FileName0_22, &FileName_31, MaybeTimestampRes_28, &MaybeTimestamp_32, Errors0_30, &Errors1_33);
      Errors_38 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_15, Errors1_33);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveModule_20 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileName_31));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors_38));
      }
    }
    else
    {
      MR_String FileStr_67 = ((MR_String) ((MR_hl_field(0, ReadFileResult_66, (MR_Integer) 0))));
      MR_Integer FileStrLen_68 = ((MR_Integer) ((MR_hl_field(0, ReadFileResult_66, (MR_Integer) 1))));
      MR_String FileName_69 = ((MR_String) ((MR_hl_field(0, FileNameAndStream_27, (MR_Integer) 0))));
      MR_Word MaybeTimestampRes_73 = ((MR_Word) ((MR_hl_field(0, ReadFileResult_66, (MR_Integer) 2))));
      MR_Word MaybeParseTreeSrc0_74;
      MR_Word Errors0_75;
      MR_String FileName_76;
      MR_Word MaybeTimestamp_77;
      MR_Word Errors1_78;
      MR_Word Var_80;

      parse_tree__parse_module__parse_src_file_7_p_0(FileName_69, FileStr_67, FileStrLen_68, ModuleName_17, ExpectationContexts_18, &MaybeParseTreeSrc0_74, &Errors0_75);
      Var_80 = (MR_Word) ((MR_Word) (FileNameAndStream_27));
      parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_12, Globals_13, Var_80, IgnoreErrors_15, (MR_Word) ((MR_Unsigned) 0U), ReadDoneMsg_23, FileName0_22, &FileName_76, MaybeTimestampRes_73, &MaybeTimestamp_77, Errors0_75, &Errors1_78);
      if ((MaybeParseTreeSrc0_74 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Errors_71;

        Errors_71 = parse_tree__read_modules__no_file_errors_2_f_0(IgnoreErrors_15, Errors1_78);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HaveModule_20 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FileName_76));
          MR_hl_field(1, base, 1) = ((MR_Box) (Errors_71));
        }
      }
      else
      {
        MR_Word ParseTreeSrc0_36 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeSrc0_74, (MR_Integer) 0))));
        MR_Word ParseTreeSrc_37;
        MR_Word Var_51;
        MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc0_36, (MR_Integer) 1))));
        MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc0_36, (MR_Integer) 2))));

        {
          ParseTreeSrc_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ParseTreeSrc_37, 0) = ((MR_Box) (ModuleName_17));
          MR_hl_field(0, ParseTreeSrc_37, 1) = ((MR_Box) (Var_64));
          MR_hl_field(0, ParseTreeSrc_37, 2) = ((MR_Box) (Var_65));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (MaybeTimestamp_77));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (Errors1_78));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *HaveModule_20 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (FileName_76));
          MR_hl_field(0, base, 1) = ((MR_Box) (ParseTreeSrc_37));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_51));
        }
      }
    }
    FileStream_35 = ((MR_Word) ((MR_hl_field(0, FileNameAndStream_27, (MR_Integer) 1))));
    mercury__io__close_input_3_p_0(FileStream_35);
  }
}

static MR_Word MR_CALL 
parse_tree__read_modules__no_file_errors_2_f_0(
  MR_Word IgnoreErrors_4,
  MR_Word Errors0_5)
{
  MR_bool succeeded;
  MR_Word Errors_6;

  switch (IgnoreErrors_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Errors_6 = Errors0_5;
      break;
    case (MR_Integer) 0:
      {
        MR_Word FatalErrors0_7 = ((MR_Word) ((MR_hl_field(0, Errors0_5, (MR_Integer) 0))));
        MR_Word FatalError_8;
        MR_Word Var_15;
        MR_Word Var_17;

        succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors0_7, ((MR_Box) ((MR_Integer) 0)));
        if (succeeded)
          FatalError_8 = (MR_Integer) 0;
        else
          FatalError_8 = (MR_Integer) 1;
        Var_15 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) (FatalError_8)));
        Var_17 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
        {
          Errors_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Errors_6, 0) = ((MR_Box) (Var_15));
          MR_hl_field(0, Errors_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Errors_6, 2) = ((MR_Box) (Var_17));
          MR_hl_field(0, Errors_6, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Errors_6, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  return Errors_6;
}

static void MR_CALL 
parse_tree__read_modules__read_module_end_module_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word Globals_16,
  MR_Word MaybeFileNameAndStream_17,
  MR_Word IgnoreErrors_18,
  MR_Word FileKind_19,
  MR_Word ReadDoneMsg_20,
  MR_String FileName0_21,
  MR_String * FileName_22,
  MR_Word MaybeTimestampRes_23,
  MR_Word * MaybeTimestamp_24,
  MR_Word Errors0_25,
  MR_Word * Errors_26)
{
  MR_Word Errors1_30;
  MR_Word Statistics_31;

  if (((MR_tag((MR_Word) MaybeFileNameAndStream_17)) == (MR_Integer) 1))
    *FileName_22 = FileName0_21;
  else
  {
    MR_Word Var_34 = (MR_Word) ((MR_Word) (MaybeFileNameAndStream_17));

    *FileName_22 = ((MR_String) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
  }
  if ((MaybeTimestampRes_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeTimestamp_24 = (MR_Word) ((MR_Unsigned) 0U);
    Errors1_30 = Errors0_25;
  }
  else
  {
    MR_Word TimestampRes_38 = ((MR_Word) ((MR_hl_field(1, MaybeTimestampRes_23, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) TimestampRes_38)) == (MR_Integer) 1))
    {
      MR_Word IOError_40 = ((MR_Word) ((MR_hl_field(1, TimestampRes_38, (MR_Integer) 0))));
      MR_Word SmartRecompilation_41;

      *MaybeTimestamp_24 = (MR_Word) ((MR_Unsigned) 0U);
      libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 173, &SmartRecompilation_41);
      switch (SmartRecompilation_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Errors1_30 = Errors0_25;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Warn_43;

            libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
            libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
            libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 32, &Warn_43);
            switch (Warn_43) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Errors1_30 = Errors0_25;
                break;
              case (MR_Integer) 1:
                {
                  MR_String IOErrorMsg_44;
                  MR_Word Pieces_45;
                  MR_Word Spec_46;
                  MR_Word Var_53;
                  MR_Word Var_54;
                  MR_Word Var_55;
                  MR_Word Var_58;
                  MR_Word Var_61;
                  MR_Word Var_62;
                  MR_Word Var_68;

                  mercury__io__error_message_2_p_0(IOError_40, &IOErrorMsg_44);
                  {
                    Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_54, 1) = ((MR_Box) (FileName0_21));
                  }
                  {
                    Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, Var_62, 1) = ((MR_Box) (IOErrorMsg_44));
                  }
                  {
                    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
                    MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__read_modules_scalar_common_1[19])));
                  }
                  {
                    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[12])));
                    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
                  }
                  {
                    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[11])));
                    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
                  }
                  {
                    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
                    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
                  }
                  {
                    Pieces_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_45, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[10])));
                    MR_hl_field(1, Pieces_45, 1) = ((MR_Box) (Var_53));
                  }
                  {
                    Spec_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_46, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.read_modules.record_and_report_missing_timestamp\'/7"));
                    MR_hl_field(1, Spec_46, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(1, Spec_46, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                    MR_hl_field(1, Spec_46, 3) = ((MR_Box) (Pieces_45));
                  }
                  {
                    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_68, 0) = ((MR_Box) (Spec_46));
                    MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  parse_tree__parse_error__add_nonfatal_error_4_p_0((MR_Integer) 7, Var_68, Errors0_25, &Errors1_30);
                }
                break;
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Timestamp_39 = ((MR_Word) ((MR_hl_field(0, TimestampRes_38, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTimestamp_24 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Timestamp_39));
      }
      Errors1_30 = Errors0_25;
    }
  }
  parse_tree__read_modules__handle_any_read_module_errors_7_p_0(FileKind_19, ReadDoneMsg_20, IgnoreErrors_18, Errors1_30, Errors_26);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 87, &Statistics_31);
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_15, Statistics_31);
}

static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
  MR_Word FileKind_8,
  MR_Word ReadDoneMsg_9,
  MR_Word IgnoreErrors_10,
  MR_Word Errors0_11,
  MR_Word * Errors_12)
{
  MR_bool succeeded;
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Errors0_11, (MR_Integer) 2))));
  MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, Errors0_11, (MR_Integer) 0))));

  switch (IgnoreErrors_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_65);
        if (!(succeeded))
          succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_63);
        if (succeeded)
        {
          MR_String Msg_16;

          succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_65);
          if (succeeded)
          {
            succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_65, ((MR_Box) ((MR_Integer) 1)));
            if (succeeded)
              Msg_16 = (MR_String) "not found.\n";
            else
              Msg_16 = (MR_String) "fatal error(s).\n";
          }
          else
          {
            succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_63, ((MR_Box) ((MR_Integer) 1)));
            if (!(succeeded))
            {
              succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_63, ((MR_Box) ((MR_Integer) 2)));
              if (!(succeeded))
              {
                succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_63, ((MR_Box) ((MR_Integer) 3)));
                if (!(succeeded))
                {
                  succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_63, ((MR_Box) ((MR_Integer) 4)));
                  if (!(succeeded))
                  {
                    succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_63, ((MR_Box) ((MR_Integer) 5)));
                    if (!(succeeded))
                      succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_63, ((MR_Box) ((MR_Integer) 6)));
                  }
                }
              }
            }
            if (succeeded)
              Msg_16 = (MR_String) "parse error(s).\n";
            else
              Msg_16 = (MR_String) "nonfatal error(s).\n";
          }
          if (!((ReadDoneMsg_9 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word ProgressStream_66 = ((MR_Word) ((MR_hl_field(1, ReadDoneMsg_9, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(ProgressStream_66, Msg_16);
            mercury__io__flush_output_3_p_0(ProgressStream_66);
          }
          switch (MR_tag((MR_Word) FileKind_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              *Errors_12 = Errors0_11;
              break;
            case (MR_Integer) 2:
              *Errors_12 = Errors0_11;
              break;
          }
        }
        else
        {
          *Errors_12 = Errors0_11;
          if (!((ReadDoneMsg_9 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word ProgressStream_68 = ((MR_Word) ((MR_hl_field(1, ReadDoneMsg_9, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(ProgressStream_68, (MR_String) "successful parse.\n");
            mercury__io__flush_output_3_p_0(ProgressStream_68);
          }
        }
      }
      break;
    case (MR_Integer) 0:
      {
        succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_65, ((MR_Box) ((MR_Integer) 1)));
        if (succeeded)
        {
          MR_Word Var_72;
          MR_Word Var_74;

          if (!((ReadDoneMsg_9 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word ProgressStream_70 = ((MR_Word) ((MR_hl_field(1, ReadDoneMsg_9, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(ProgressStream_70, (MR_String) "not found.\n");
            mercury__io__flush_output_3_p_0(ProgressStream_70);
          }
          Var_72 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) ((MR_Integer) 1)));
          Var_74 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *Errors_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_74));
            MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          if (!((ReadDoneMsg_9 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word ProgressStream_79 = ((MR_Word) ((MR_hl_field(1, ReadDoneMsg_9, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(ProgressStream_79, (MR_String) "done.\n");
            mercury__io__flush_output_3_p_0(ProgressStream_79);
          }
          *Errors_12 = Errors0_11;
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__read_modules__read_module_begin_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word ReadReasonMsg_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_Word FileKind_17,
  MR_String * FileName_18,
  MR_Word * ReadDoneMsg_19,
  MR_Word * SearchAuthDirs_20)
{
  MR_Word VeryVerbose_49;

  switch (MR_tag((MR_Word) FileKind_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_16, FileName_18);
        switch (Search_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *SearchAuthDirs_20 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            *SearchAuthDirs_20 = parse_tree__find_module__get_search_auth_normal_dirs_2_f_0((MR_Integer) 5, Globals_13);
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntFileKind_22 = ((MR_Unsigned) ((MR_hl_field(1, FileKind_17, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word Ext_24;
        MR_String _ExtStr_23;

        parse_tree__file_kind__int_file_kind_to_extension_3_p_0(IntFileKind_22, &_ExtStr_23, &Ext_24);
        switch (Search_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String _FileNameProposed_37;

              parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_13, (MR_String) "predicate \140parse_tree.read_modules.read_module_begin\'/11", Ext_24, ModuleName_16, FileName_18, &_FileNameProposed_37);
              *SearchAuthDirs_20 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String _FileNameProposed_26;

              parse_tree__file_names__module_name_to_search_file_name_8_p_0(Globals_13, (MR_String) "predicate \140parse_tree.read_modules.read_module_begin\'/11", Ext_24, ModuleName_16, (MR_Word) ((MR_Unsigned) 4U), SearchAuthDirs_20, FileName_18, &_FileNameProposed_26);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OptFileKind_27 = ((MR_Unsigned) ((MR_hl_field(2, FileKind_17, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Ext_48;
        MR_String _ExtStr_39;

        parse_tree__file_kind__opt_file_kind_to_extension_3_p_0(OptFileKind_27, &_ExtStr_39, &Ext_48);
        switch (Search_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String _FileNameProposed_43;

              parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_13, (MR_String) "predicate \140parse_tree.read_modules.read_module_begin\'/11", Ext_48, ModuleName_16, FileName_18, &_FileNameProposed_43);
              *SearchAuthDirs_20 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String _FileNameProposed_40;

              parse_tree__file_names__module_name_to_search_file_name_8_p_1(Globals_13, (MR_String) "predicate \140parse_tree.read_modules.read_module_begin\'/11", Ext_48, ModuleName_16, (MR_Word) ((MR_Unsigned) 8U), SearchAuthDirs_20, FileName_18, &_FileNameProposed_40);
            }
            break;
        }
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 77, &VeryVerbose_49);
  switch (VeryVerbose_49) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *ReadDoneMsg_19 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_String Msg_50;

        switch (ReadReasonMsg_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_79;

              Var_79 = mercury__string__f_43_43_2_f_0(*FileName_18, (MR_String) "\'... ");
              Msg_50 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_79);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_76;

              Var_76 = mercury__string__f_43_43_2_f_0(*FileName_18, (MR_String) "\'... ");
              Msg_50 = mercury__string__f_43_43_2_f_0((MR_String) "% Getting dependencies for \140", Var_76);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Var_73;

              Var_73 = mercury__string__f_43_43_2_f_0(*FileName_18, (MR_String) "\'... ");
              Msg_50 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading old version of \140", Var_73);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_70;

              Var_70 = mercury__string__f_43_43_2_f_0(*FileName_18, (MR_String) "\'... ");
              Msg_50 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_70);
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ReadDoneMsg_19 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ProgressStream_12));
        }
        mercury__io__write_string_4_p_0(ProgressStream_12, Msg_50);
        mercury__io__flush_output_3_p_0(ProgressStream_12);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__read_modules__do_actually_read_file_5_p_0(
  MR_Word FileNameAndStream_6,
  MR_Word ReadModuleAndTimestamps_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_String FileName_10 = ((MR_String) ((MR_hl_field(0, FileNameAndStream_6, (MR_Integer) 0))));
  MR_Word FileStream_11 = ((MR_Word) ((MR_hl_field(0, FileNameAndStream_6, (MR_Integer) 1))));
  MR_Word MaybeModuleTimestampRes_15;
  MR_Word OldTimestamp_17;
  MR_Word Var_37;
  MR_Word Var_52;

  if (((MR_tag((MR_Word) ReadModuleAndTimestamps_7)) == (MR_Integer) 0))
  {
    MR_Word Var_69 = ((MR_Unsigned) ((MR_hl_field(0, ReadModuleAndTimestamps_7, (MR_Integer) 0))) & (MR_Integer) 1);

    switch (Var_69) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeModuleTimestampRes_15 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word TimestampResult_13;

          mercury__io__file__file_modification_time_4_p_0(FileName_10, &TimestampResult_13);
          if (((MR_tag((MR_Word) TimestampResult_13)) == (MR_Integer) 1))
            {
              MaybeModuleTimestampRes_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeModuleTimestampRes_15, 0) = ((MR_Box) (TimestampResult_13));
            }
          else
          {
            MR_Word Timestamp_14 = ((MR_Word) ((MR_hl_field(0, TimestampResult_13, (MR_Integer) 0))));
            MR_Word Var_33;
            MR_Word Var_34;

            Var_34 = libs__timestamp__time_t_to_timestamp_1_f_0(Timestamp_14);
            {
              Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_33, 0) = ((MR_Box) (Var_34));
            }
            {
              MaybeModuleTimestampRes_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeModuleTimestampRes_15, 0) = ((MR_Box) (Var_33));
            }
          }
        }
        break;
    }
  }
  else
  {
    MR_Word TimestampResult_63;

    mercury__io__file__file_modification_time_4_p_0(FileName_10, &TimestampResult_63);
    if (((MR_tag((MR_Word) TimestampResult_63)) == (MR_Integer) 1))
    {
      MR_Word Var_54 = (MR_Word) (TimestampResult_63);

      {
        MaybeModuleTimestampRes_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeModuleTimestampRes_15, 0) = ((MR_Box) (Var_54));
      }
    }
    else
    {
      MR_Word Timestamp_55 = ((MR_Word) ((MR_hl_field(0, TimestampResult_63, (MR_Integer) 0))));
      MR_Word Var_56;
      MR_Word Var_57;

      Var_57 = libs__timestamp__time_t_to_timestamp_1_f_0(Timestamp_55);
      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_56, 0) = ((MR_Box) (Var_57));
      }
      {
        MaybeModuleTimestampRes_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeModuleTimestampRes_15, 0) = ((MR_Box) (Var_56));
      }
    }
  }
  succeeded = ((MR_tag((MR_Word) ReadModuleAndTimestamps_7)) == (MR_Integer) 1);
  if (succeeded)
  {
    OldTimestamp_17 = ((MR_Word) ((MR_hl_field(1, ReadModuleAndTimestamps_7, (MR_Integer) 0))));
    succeeded = (MaybeModuleTimestampRes_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_37 = ((MR_Word) ((MR_hl_field(1, MaybeModuleTimestampRes_15, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_52 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
        succeeded = libs__timestamp____Unify____timestamp_0_0(OldTimestamp_17, Var_52);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_38;

    Var_38 = parse_tree__parse_error__init_read_module_errors_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Result_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, base, 1) = ((MR_Box) (MaybeModuleTimestampRes_15));
    }
  }
  else
  {
    MR_Word MaybeResult_18;

    mercury__io__read_file_as_string_and_num_code_units_4_p_0(FileStream_11, &MaybeResult_18);
    if (((MR_tag((MR_Word) MaybeResult_18)) == (MR_Integer) 1))
    {
      MR_Word ErrorCode_25 = ((MR_Word) ((MR_hl_field(1, MaybeResult_18, (MR_Integer) 2))));
      MR_String ErrorMsg0_26;
      MR_String ErrorMsg_27;
      MR_Word Errors_28;

      mercury__io__error_message_2_p_0(ErrorCode_25, &ErrorMsg0_26);
      ErrorMsg_27 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", ErrorMsg0_26);
      parse_tree__parse_error__io_error_to_read_module_errors_6_p_0((MR_Integer) 2, (MR_Word) ((MR_Unsigned) 16U), ErrorMsg_27, &Errors_28);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Errors_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (MaybeModuleTimestampRes_15));
      }
    }
    else
    {
      MR_String FileString_19 = ((MR_String) ((MR_hl_field(0, MaybeResult_18, (MR_Integer) 0))));
      MR_Integer NumCodeUnits_20 = ((MR_Integer) ((MR_hl_field(0, MaybeResult_18, (MR_Integer) 1))));
      MR_Integer FileStringLen_21;

      FileStringLen_21 = mercury__string__length_1_f_0(FileString_19);
      succeeded = (NumCodeUnits_20 == FileStringLen_21);
      if (!(succeeded))
      {
        MR_String Msg_22;
        MR_String Var_71;
        MR_String Var_73;
        MR_String Var_74;
        MR_String Var_81;
        MR_String Var_83;
        MR_String Var_84;
        MR_String Var_91;

        Var_71 = mercury__string__f_43_43_2_f_0(FileString_19, (MR_String) ">>>\n");
        Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "\n<<<\n", Var_71);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_3[4]), FileStringLen_21, &Var_74);
        Var_81 = mercury__string__f_43_43_2_f_0(Var_74, Var_73);
        Var_83 = mercury__string__f_43_43_2_f_0((MR_String) ", FileStringLen = ", Var_81);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_3[4]), NumCodeUnits_20, &Var_84);
        Var_91 = mercury__string__f_43_43_2_f_0(Var_84, Var_83);
        Msg_22 = mercury__string__f_43_43_2_f_0((MR_String) "NumCodeUnits = ", Var_91);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.do_actually_read_file\'/5", Msg_22);
          return;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (FileString_19));
        MR_hl_field(0, base, 1) = ((MR_Box) (NumCodeUnits_20));
        MR_hl_field(0, base, 2) = ((MR_Box) (MaybeModuleTimestampRes_15));
      }
    }
  }
}

void MR_CALL 
parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(
  MR_Word Source_4,
  MR_Word * MaybeTimestamp_5,
  MR_Word * Errors_6)
{
  if ((Source_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_7;
    MR_Word Var_9;

    *MaybeTimestamp_5 = (MR_Word) ((MR_Unsigned) 0U);
    Var_7 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0));
    Var_9 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Errors_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_7));
      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_9));
      MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    *MaybeTimestamp_5 = ((MR_Word) ((MR_hl_field(1, Source_4, (MR_Integer) 0))));
    *Errors_6 = ((MR_Word) ((MR_hl_field(1, Source_4, (MR_Integer) 1))));
  }
}

MR_Word MR_CALL 
parse_tree__read_modules__init_have_parse_tree_maps_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;
  MR_Word Var_3;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_9;

  Var_2 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[0]));
  Var_3 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0));
  Var_4 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[1]));
  Var_5 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[2]));
  Var_6 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]));
  Var_7 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]));
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[5]));
  Var_9 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[6]));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__1_1, 3) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__1_1, 4) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__1_1, 5) = ((MR_Box) (Var_7));
    MR_hl_field(0, HeadVar__1_1, 6) = ((MR_Box) (Var_8));
    MR_hl_field(0, HeadVar__1_1, 7) = ((MR_Box) (Var_9));
  }
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____do_read_file_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____do_read_file_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____do_read_file_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____do_read_file_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_module_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_module_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_module_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_module_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_int0_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_parse_tree_int0_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_int0_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_parse_tree_int0_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_int1_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_parse_tree_int1_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_int1_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_parse_tree_int1_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_int2_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_parse_tree_int2_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_int2_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_parse_tree_int2_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_int3_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_parse_tree_int3_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_int3_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_parse_tree_int3_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_parse_tree_key_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_parse_tree_key_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_parse_tree_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_parse_tree_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_parse_tree_maps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_parse_tree_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_msrc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_parse_tree_msrc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_msrc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_parse_tree_msrc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_plain_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_parse_tree_plain_opt_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_plain_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_parse_tree_plain_opt_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_read_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_parse_tree_read_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_read_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_parse_tree_read_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_parse_tree_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_parse_tree_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_src_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_parse_tree_src_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_src_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_parse_tree_src_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_parse_tree_trans_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_parse_tree_trans_opt_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_parse_tree_trans_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_parse_tree_trans_opt_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_read_module_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_read_module_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_file_and_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____maybe_file_and_stream_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____maybe_file_and_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____maybe_file_and_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____read_done_msg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____read_done_msg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____read_done_msg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____read_done_msg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____read_reason_msg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____read_reason_msg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____read_reason_msg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____read_reason_msg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__read_modules__init(void)
{
}

void mercury__parse_tree__read_modules__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_do_read_file_result_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_int0_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_int1_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_int2_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_int3_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_key_1);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_map_1);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_msrc_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_plain_opt_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_read_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_source_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_src_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_trans_opt_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_maybe_file_and_stream_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_maybe_ignore_errors_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_read_done_msg_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_read_reason_msg_0);
}

void mercury__parse_tree__read_modules__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__read_modules__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.read_modules.
