/*
** Automatically generated from `read_modules.m'
** by the Mercury compiler,
** version rotd-2022-12-09
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
#include "bimap.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
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
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[4];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_1[2];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_1;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_1[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1[2];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1[2];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0[2];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1[1];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0[8];

static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0[8];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0[1];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0[1];

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

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_1;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_read_done_msg_0_2[1];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_2;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_done_msg_0_0[2];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_done_msg_0_1[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_read_done_msg_0[2];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_read_done_msg_0[3];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_read_done_msg_0[3];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_read_reason_msg_0_1[1];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_1;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_read_reason_msg_0_2[1];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_2;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_read_reason_msg_0_3[1];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_3;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_reason_msg_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_reason_msg_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_reason_msg_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_reason_msg_0_3[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_read_reason_msg_0[4];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_read_reason_msg_0[4];

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
parse_tree__read_modules__read_module_end_file_10_p_0(
  MR_Word Globals_11,
  MR_Word FileKind_12,
  MR_Word ReadDoneMsg_13,
  MR_String FileName_14,
  MR_Word MaybeTimestampRes_15,
  MR_Word * MaybeTimestamp_16,
  MR_Word Errors0_17,
  MR_Word * Errors_18);

static void MR_CALL 
parse_tree__read_modules__read_module_end_module_14_p_0(
  MR_Word MaybeProgressStream_15,
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
parse_tree__read_modules__handle_any_read_module_errors_8_p_0(
  MR_Word Globals_9,
  MR_Word FileKind_10,
  MR_Word ReadDoneMsg_11,
  MR_Word IgnoreErrors_12,
  MR_Word Errors0_13,
  MR_Word * Errors_14);

static void MR_CALL 
parse_tree__read_modules__output_read_done_msg_4_p_0(
  MR_Word ReadDoneMsg_5,
  MR_String Msg_6);

static MR_Word MR_CALL 
parse_tree__read_modules__no_file_errors_ignored_0_f_0(void);

static void MR_CALL 
parse_tree__read_modules__read_module_begin_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadReasonMsg_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word FileKind_15,
  MR_String * FileName_16,
  MR_Word * ReadDoneMsg_17,
  MR_Word * SearchDirs_18);

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
parse_tree__read_modules____Unify____have_read_module_int0_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int0_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int1_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int1_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int2_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int2_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int3_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int3_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_msrc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_msrc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_plain_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_plain_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_trans_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_trans_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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


static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[16][2];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_2[8][3];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_3[4][1];




static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[16][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int1_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int2_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int3_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: cannot find modification time for"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Smart recompilation will not work."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__read_modules_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__read_modules_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__read_modules_scalar_common_1[13])))
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

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_3[4][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   2 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   3 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0 = {
  (MR_String) "have_read_module",
  INT16_C(4),
  UINT16_C(4),
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

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_1
};

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
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_1,
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
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

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int0_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_int0_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_int0_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_int0_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int1_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int1_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_int1_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_int1_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_int1_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int2_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int2_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_int2_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_int2_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_int2_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int3_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int3_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_int3_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_int3_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_int3_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0 = {
  (MR_String) "have_read_module_key",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0
};

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_key_1_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_key_1_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_key",
  { parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1 },
  { parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1,

};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_1 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_map_1_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_map_1_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0[8] = {
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)
};

static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0[8] = {
  (MR_String) "hrmm_src",
  (MR_String) "hrmm_module_src",
  (MR_String) "hrmm_int0",
  (MR_String) "hrmm_int1",
  (MR_String) "hrmm_int2",
  (MR_String) "hrmm_int3",
  (MR_String) "hrmm_plain_opt",
  (MR_String) "hrmm_trans_opt"
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0 = {
  (MR_String) "have_read_module_maps",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0,
  parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0
};

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_maps",
  { parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0 },
  { parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0,

};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_msrc_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_msrc_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_msrc_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_msrc_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_plain_opt_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_plain_opt_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_plain_opt_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_plain_opt_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_src_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_src_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_trans_opt_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_trans_opt_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_trans_opt_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_trans_opt_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_maybe_file_and_stream_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__find_module__parse_tree__find_module__type_ctor_info_path_name_and_stream_0)
};

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

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_maybe_file_and_stream_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0)
};

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

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_maybe_file_and_stream_0_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_maybe_file_and_stream_0_0
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_maybe_file_and_stream_0_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_maybe_file_and_stream_0_1
};

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

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_1 = {
  (MR_String) "rdm_current",
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

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_read_done_msg_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_2 = {
  (MR_String) "rdm_progress",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__read_modules__parse_tree__read_modules__field_types_read_done_msg_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_done_msg_0_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_0,
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_1
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_done_msg_0_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_2
};

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_read_done_msg_0[2] = {
  {
    UINT32_C(2),
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

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_read_done_msg_0[3] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_1,
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_0,
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_done_msg_0_2
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_read_done_msg_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
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
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_read_done_msg_0,

};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_0 = {
  (MR_String) "rrm_file",
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

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_read_reason_msg_0_1[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_1 = {
  (MR_String) "rrm_std",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__read_modules__parse_tree__read_modules__field_types_read_reason_msg_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_read_reason_msg_0_2[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_2 = {
  (MR_String) "rrm_old",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__read_modules__parse_tree__read_modules__field_types_read_reason_msg_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_read_reason_msg_0_3[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_3 = {
  (MR_String) "rrm_get_deps",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  parse_tree__read_modules__parse_tree__read_modules__field_types_read_reason_msg_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_reason_msg_0_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_0
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_reason_msg_0_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_1
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_reason_msg_0_2[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_2
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_reason_msg_0_3[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_3
};

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_read_reason_msg_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_reason_msg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_reason_msg_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_reason_msg_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_read_reason_msg_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_read_reason_msg_0[4] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_0,
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_3,
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_2,
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_read_reason_msg_0_1
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
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____read_reason_msg_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____read_reason_msg_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "read_reason_msg",
  { parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_read_reason_msg_0 },
  { parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_read_reason_msg_0 },
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
            *HeadVar__1_1 = (MR_Integer) 1;
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
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Var_35, ArgY1_9);
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
          MR_Word Var_34 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Var_34, ArgY1_18);
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
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

                mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Var_33, ArgY1_27);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____read_reason_msg_0_0(
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
          MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_4 == CastX_3);
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
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
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
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_7, ArgY1_8);
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
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_9, ArgY1_10);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____read_done_msg_0_0(
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
          MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mercury__io____Compare____output_stream_0_0(HeadVar__1_1, Var_13, ArgY1_9);
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____read_done_msg_0_0(
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
            succeeded = mercury__io____Unify____output_stream_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
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
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

      parse_tree__parse_error____Compare____read_module_errors_0_0(HeadVar__1_1, Var_16, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = (MR_Word) ((MR_Word) (HeadVar__2_2));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      parse_tree__find_module____Compare____path_name_and_stream_0_0(HeadVar__1_1, Var_17, ArgY1_5);
    }
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
parse_tree__read_modules____Compare____have_read_module_trans_opt_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_trans_opt_map_0_0(
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
parse_tree__read_modules____Compare____have_read_module_src_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0(
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
parse_tree__read_modules____Compare____have_read_module_plain_opt_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_plain_opt_map_0_0(
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
parse_tree__read_modules____Compare____have_read_module_msrc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_msrc_map_0_0(
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
parse_tree__read_modules____Compare____have_read_module_maps_0_0(
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
parse_tree__read_modules____Unify____have_read_module_maps_0_0(
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
parse_tree__read_modules____Compare____have_read_module_map_1_0(
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
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_PT_6));
  }
  mercury__tree234____Compare____tree234_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_9_9, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_1_0(
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
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_PT_5));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_8_8, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0(
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
parse_tree__read_modules____Unify____have_read_module_key_1_0(
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
parse_tree__read_modules____Compare____have_read_module_int3_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int3_map_0_0(
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
parse_tree__read_modules____Compare____have_read_module_int2_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int2_map_0_0(
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
parse_tree__read_modules____Compare____have_read_module_int1_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int1_map_0_0(
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
parse_tree__read_modules____Compare____have_read_module_int0_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int0_map_0_0(
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
parse_tree__read_modules____Compare____have_read_module_1_0(
  MR_Word TypeInfo_for_PT_34,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_32 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_33 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_32 == CastY_33);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_41 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_String ArgY1_28 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_29;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_29, Var_41, ArgY1_28);
      succeeded = (SubResult1_29 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_29;
      else
        parse_tree__parse_error____Compare____read_module_errors_0_0(HeadVar__1_1, Var_40, ArgY2_31);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Box Var_43 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_45 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
      MR_Box ArgY3_11 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_45, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_1[7]), &SubResult2_9, ((MR_Box) (Var_44)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0(TypeInfo_for_PT_34, &SubResult3_12, Var_43, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            parse_tree__parse_error____Compare____read_module_errors_0_0(HeadVar__1_1, Var_42, ArgY4_14);
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0(
  MR_Word TypeInfo_for_PT_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_12;
    MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_14;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_12 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (strcmp(ArgX1_11, ArgY1_12) == 0);
      if (succeeded)
        succeeded = parse_tree__parse_error____Unify____read_module_errors_0_0(ArgX2_13, ArgY2_14);
    }
  }
  else
  {
    MR_Word TypeInfo_19_19;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;
    MR_Box ArgX3_7 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2));
    MR_Box ArgY3_8;
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_8 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2));
      ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_19_19 = (MR_Word) (&parse_tree__read_modules_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_PT_17, ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = parse_tree__parse_error____Unify____read_module_errors_0_0(ArgX4_9, ArgY4_10);
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
      if ((MaybeTimestamp0_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
          return;
        }
      else
        *MaybeTimestamp_6 = MaybeTimestamp0_5;
      break;
    case (MR_Integer) 1:
      *MaybeTimestamp_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int3_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word ReturnTimestamp_15,
  MR_Word * HaveReadModule_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_23)
{
  MR_bool succeeded;
  MR_Word OrigHRMM_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 5))));
  MR_Word HaveReadModulePrime_20;
  MR_Word HaveReadModule0_48;
  MR_String FN_49;
  MR_Word MaybeTimeStamp0_50;
  MR_Word PT_51;
  MR_Word E_52;
  MR_Word MaybeTimeStamp_53;
  MR_Box conv0_HaveReadModule0_48;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]), OrigHRMM_19, ((MR_Box) (ModuleName_14)), &conv0_HaveReadModule0_48);
  if (succeeded)
  {
    HaveReadModule0_48 = ((MR_Word) (conv0_HaveReadModule0_48));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) HaveReadModule0_48)) == (MR_Integer) 0);
    if (succeeded)
    {
      FN_49 = ((MR_String) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 0))));
      MaybeTimeStamp0_50 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 1))));
      PT_51 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 2))));
      E_52 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 3))));
      switch (ReturnTimestamp_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((MaybeTimeStamp0_50 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
              return;
            }
          else
            MaybeTimeStamp_53 = MaybeTimeStamp0_50;
          break;
        case (MR_Integer) 1:
          MaybeTimeStamp_53 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      {
        HaveReadModulePrime_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HaveReadModulePrime_20, 0) = ((MR_Box) (FN_49));
        MR_hl_field(0, HaveReadModulePrime_20, 1) = ((MR_Box) (MaybeTimeStamp_53));
        MR_hl_field(0, HaveReadModulePrime_20, 2) = ((MR_Box) (PT_51));
        MR_hl_field(0, HaveReadModulePrime_20, 3) = ((MR_Box) (E_52));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    *HaveReadModule_16 = HaveReadModulePrime_20;
    *STATE_VARIABLE_HaveReadModuleMaps_23 = STATE_VARIABLE_HaveReadModuleMaps_0_22;
  }
  else
  {
    MR_Word HRMM_21;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;

    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (ProgressStream_11));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (ModuleName_14));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_15));
    }
    parse_tree__read_modules__read_module_int3_10_p_0(Var_26, Globals_12, Var_27, (MR_Integer) 1, Search_13, ModuleName_14, Var_29, HaveReadModule_16);
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]), ((MR_Box) (ModuleName_14)), ((MR_Box) (*HaveReadModule_16)), OrigHRMM_19, &HRMM_21);
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 1))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 2))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 3))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 4))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 6))));
    Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HaveReadModuleMaps_23 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_39));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_40));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_41));
      MR_hl_field(0, base, 5) = ((MR_Box) (HRMM_21));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_44));
    }
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int2_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word ReturnTimestamp_15,
  MR_Word * HaveReadModule_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_23)
{
  MR_bool succeeded;
  MR_Word OrigHRMM_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 4))));
  MR_Word HaveReadModulePrime_20;
  MR_Word HaveReadModule0_48;
  MR_String FN_49;
  MR_Word MaybeTimeStamp0_50;
  MR_Word PT_51;
  MR_Word E_52;
  MR_Word MaybeTimeStamp_53;
  MR_Box conv0_HaveReadModule0_48;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]), OrigHRMM_19, ((MR_Box) (ModuleName_14)), &conv0_HaveReadModule0_48);
  if (succeeded)
  {
    HaveReadModule0_48 = ((MR_Word) (conv0_HaveReadModule0_48));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) HaveReadModule0_48)) == (MR_Integer) 0);
    if (succeeded)
    {
      FN_49 = ((MR_String) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 0))));
      MaybeTimeStamp0_50 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 1))));
      PT_51 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 2))));
      E_52 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 3))));
      switch (ReturnTimestamp_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((MaybeTimeStamp0_50 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
              return;
            }
          else
            MaybeTimeStamp_53 = MaybeTimeStamp0_50;
          break;
        case (MR_Integer) 1:
          MaybeTimeStamp_53 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      {
        HaveReadModulePrime_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HaveReadModulePrime_20, 0) = ((MR_Box) (FN_49));
        MR_hl_field(0, HaveReadModulePrime_20, 1) = ((MR_Box) (MaybeTimeStamp_53));
        MR_hl_field(0, HaveReadModulePrime_20, 2) = ((MR_Box) (PT_51));
        MR_hl_field(0, HaveReadModulePrime_20, 3) = ((MR_Box) (E_52));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    *HaveReadModule_16 = HaveReadModulePrime_20;
    *STATE_VARIABLE_HaveReadModuleMaps_23 = STATE_VARIABLE_HaveReadModuleMaps_0_22;
  }
  else
  {
    MR_Word HRMM_21;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;

    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (ProgressStream_11));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (ModuleName_14));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_15));
    }
    parse_tree__read_modules__read_module_int2_10_p_0(Var_26, Globals_12, Var_27, (MR_Integer) 1, Search_13, ModuleName_14, Var_29, HaveReadModule_16);
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]), ((MR_Box) (ModuleName_14)), ((MR_Box) (*HaveReadModule_16)), OrigHRMM_19, &HRMM_21);
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 1))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 2))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 3))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 5))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 6))));
    Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HaveReadModuleMaps_23 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_39));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_40));
      MR_hl_field(0, base, 4) = ((MR_Box) (HRMM_21));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_44));
    }
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int1_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word ReturnTimestamp_15,
  MR_Word * HaveReadModule_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_23)
{
  MR_bool succeeded;
  MR_Word OrigHRMM_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 3))));
  MR_Word HaveReadModulePrime_20;
  MR_Word HaveReadModule0_48;
  MR_String FN_49;
  MR_Word MaybeTimeStamp0_50;
  MR_Word PT_51;
  MR_Word E_52;
  MR_Word MaybeTimeStamp_53;
  MR_Box conv0_HaveReadModule0_48;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[2]), OrigHRMM_19, ((MR_Box) (ModuleName_14)), &conv0_HaveReadModule0_48);
  if (succeeded)
  {
    HaveReadModule0_48 = ((MR_Word) (conv0_HaveReadModule0_48));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) HaveReadModule0_48)) == (MR_Integer) 0);
    if (succeeded)
    {
      FN_49 = ((MR_String) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 0))));
      MaybeTimeStamp0_50 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 1))));
      PT_51 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 2))));
      E_52 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 3))));
      switch (ReturnTimestamp_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((MaybeTimeStamp0_50 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
              return;
            }
          else
            MaybeTimeStamp_53 = MaybeTimeStamp0_50;
          break;
        case (MR_Integer) 1:
          MaybeTimeStamp_53 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      {
        HaveReadModulePrime_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HaveReadModulePrime_20, 0) = ((MR_Box) (FN_49));
        MR_hl_field(0, HaveReadModulePrime_20, 1) = ((MR_Box) (MaybeTimeStamp_53));
        MR_hl_field(0, HaveReadModulePrime_20, 2) = ((MR_Box) (PT_51));
        MR_hl_field(0, HaveReadModulePrime_20, 3) = ((MR_Box) (E_52));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    *HaveReadModule_16 = HaveReadModulePrime_20;
    *STATE_VARIABLE_HaveReadModuleMaps_23 = STATE_VARIABLE_HaveReadModuleMaps_0_22;
  }
  else
  {
    MR_Word HRMM_21;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;

    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (ProgressStream_11));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (ModuleName_14));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_15));
    }
    parse_tree__read_modules__read_module_int1_10_p_0(Var_26, Globals_12, Var_27, (MR_Integer) 1, Search_13, ModuleName_14, Var_29, HaveReadModule_16);
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[2]), ((MR_Box) (ModuleName_14)), ((MR_Box) (*HaveReadModule_16)), OrigHRMM_19, &HRMM_21);
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 1))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 2))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 4))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 5))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 6))));
    Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HaveReadModuleMaps_23 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_39));
      MR_hl_field(0, base, 3) = ((MR_Box) (HRMM_21));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_41));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_44));
    }
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int0_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word ReturnTimestamp_15,
  MR_Word * HaveReadModule_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_23)
{
  MR_bool succeeded;
  MR_Word OrigHRMM_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 2))));
  MR_Word HaveReadModulePrime_20;
  MR_Word HaveReadModule0_48;
  MR_String FN_49;
  MR_Word MaybeTimeStamp0_50;
  MR_Word PT_51;
  MR_Word E_52;
  MR_Word MaybeTimeStamp_53;
  MR_Box conv0_HaveReadModule0_48;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[1]), OrigHRMM_19, ((MR_Box) (ModuleName_14)), &conv0_HaveReadModule0_48);
  if (succeeded)
  {
    HaveReadModule0_48 = ((MR_Word) (conv0_HaveReadModule0_48));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) HaveReadModule0_48)) == (MR_Integer) 0);
    if (succeeded)
    {
      FN_49 = ((MR_String) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 0))));
      MaybeTimeStamp0_50 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 1))));
      PT_51 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 2))));
      E_52 = ((MR_Word) ((MR_hl_field(0, HaveReadModule0_48, (MR_Integer) 3))));
      switch (ReturnTimestamp_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((MaybeTimeStamp0_50 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
              return;
            }
          else
            MaybeTimeStamp_53 = MaybeTimeStamp0_50;
          break;
        case (MR_Integer) 1:
          MaybeTimeStamp_53 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      {
        HaveReadModulePrime_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HaveReadModulePrime_20, 0) = ((MR_Box) (FN_49));
        MR_hl_field(0, HaveReadModulePrime_20, 1) = ((MR_Box) (MaybeTimeStamp_53));
        MR_hl_field(0, HaveReadModulePrime_20, 2) = ((MR_Box) (PT_51));
        MR_hl_field(0, HaveReadModulePrime_20, 3) = ((MR_Box) (E_52));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    *HaveReadModule_16 = HaveReadModulePrime_20;
    *STATE_VARIABLE_HaveReadModuleMaps_23 = STATE_VARIABLE_HaveReadModuleMaps_0_22;
  }
  else
  {
    MR_Word HRMM_21;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;

    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (ProgressStream_11));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (ModuleName_14));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_15));
    }
    parse_tree__read_modules__read_module_int0_10_p_0(Var_26, Globals_12, Var_27, (MR_Integer) 1, Search_13, ModuleName_14, Var_29, HaveReadModule_16);
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[1]), ((MR_Box) (ModuleName_14)), ((MR_Box) (*HaveReadModule_16)), OrigHRMM_19, &HRMM_21);
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 1))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 3))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 4))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 5))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 6))));
    Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_22, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HaveReadModuleMaps_23 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 2) = ((MR_Box) (HRMM_21));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_40));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_41));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_44));
    }
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_trans_opt_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * HaveReadModule_10)
{
  MR_Word ReadReasonMsg_12;
  MR_String FileName0_16;
  MR_Word ReadDoneMsg_17;
  MR_Word SearchDirs_18;
  MR_Word RawMaybeFileNameAndStream_48;

  {
    ReadReasonMsg_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ReadReasonMsg_12, 0) = ((MR_Box) (ModuleName_9));
  }
  parse_tree__read_modules__read_module_begin_10_p_0(Globals_8, ReadReasonMsg_12, (MR_Integer) 0, ModuleName_9, (MR_Word) (MR_mkword(2, &parse_tree__read_modules_scalar_common_3[2])), &FileName0_16, &ReadDoneMsg_17, &SearchDirs_18);
  parse_tree__find_module__search_for_file_and_stream_5_p_0(SearchDirs_18, FileName0_16, &RawMaybeFileNameAndStream_48);
  if (((MR_tag((MR_Word) RawMaybeFileNameAndStream_48)) == (MR_Integer) 1))
  {
    MR_Word MaybeFileNameAndStream_19;
    MR_Word Var_39;
    MR_Word Errors0_44;
    MR_String FileName_45;
    MR_Word Errors_47;
    MR_String ErrorMsg_50 = ((MR_String) ((MR_hl_field(1, RawMaybeFileNameAndStream_48, (MR_Integer) 0))));
    MR_Word _MaybeTimestamp_43;

    parse_tree__parse_error__io_error_to_read_module_errors_5_p_0(ErrorMsg_50, (MR_Integer) 0, &Errors0_44);
    MaybeFileNameAndStream_19 = (MR_Word) (MR_mkword(1, (MR_Word) (Errors0_44)));
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (ProgressStream_7));
    }
    parse_tree__read_modules__read_module_end_module_14_p_0(Var_39, Globals_8, MaybeFileNameAndStream_19, (MR_Integer) 1, (MR_Word) (MR_mkword(2, &parse_tree__read_modules_scalar_common_3[2])), ReadDoneMsg_17, FileName0_16, &FileName_45, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_43, Errors0_44, &Errors_47);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveReadModule_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_45));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_47));
    }
  }
  else
  {
    MR_Word FileNameAndStream_20 = ((MR_Word) ((MR_hl_field(0, RawMaybeFileNameAndStream_48, (MR_Integer) 0))));
    MR_Word MaybeParseTreeTransOpt_21;
    MR_Word Errors0_22;
    MR_String FileName_23;
    MR_Word Errors_25;
    MR_Word Var_34;
    MR_Word MaybeFileNameAndStream_54 = (MR_Word) ((MR_Word) (FileNameAndStream_20));
    MR_Word _MaybeTimestamp_24;

    parse_tree__parse_module__actually_read_module_trans_opt_7_p_0(Globals_8, FileNameAndStream_20, ModuleName_9, &MaybeParseTreeTransOpt_21, &Errors0_22);
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (ProgressStream_7));
    }
    parse_tree__read_modules__read_module_end_module_14_p_0(Var_34, Globals_8, MaybeFileNameAndStream_54, (MR_Integer) 1, (MR_Word) (MR_mkword(2, &parse_tree__read_modules_scalar_common_3[2])), ReadDoneMsg_17, FileName0_16, &FileName_23, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_24, Errors0_22, &Errors_25);
    if ((MaybeParseTreeTransOpt_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveReadModule_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileName_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors_25));
      }
    else
    {
      MR_Word ParseTreeTransOpt_26 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeTransOpt_21, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *HaveReadModule_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (FileName_23));
        MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, base, 2) = ((MR_Box) (ParseTreeTransOpt_26));
        MR_hl_field(0, base, 3) = ((MR_Box) (Errors_25));
      }
    }
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_plain_opt_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * HaveReadModule_10)
{
  MR_Word ReadReasonMsg_12;
  MR_String FileName0_16;
  MR_Word ReadDoneMsg_17;
  MR_Word SearchDirs_18;
  MR_Word RawMaybeFileNameAndStream_48;

  {
    ReadReasonMsg_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ReadReasonMsg_12, 0) = ((MR_Box) (ModuleName_9));
  }
  parse_tree__read_modules__read_module_begin_10_p_0(Globals_8, ReadReasonMsg_12, (MR_Integer) 0, ModuleName_9, (MR_Word) (MR_mkword(2, &parse_tree__read_modules_scalar_common_3[0])), &FileName0_16, &ReadDoneMsg_17, &SearchDirs_18);
  parse_tree__find_module__search_for_file_and_stream_5_p_0(SearchDirs_18, FileName0_16, &RawMaybeFileNameAndStream_48);
  if (((MR_tag((MR_Word) RawMaybeFileNameAndStream_48)) == (MR_Integer) 1))
  {
    MR_Word MaybeFileNameAndStream_19;
    MR_Word Var_39;
    MR_Word Errors0_44;
    MR_String FileName_45;
    MR_Word Errors_47;
    MR_String ErrorMsg_50 = ((MR_String) ((MR_hl_field(1, RawMaybeFileNameAndStream_48, (MR_Integer) 0))));
    MR_Word _MaybeTimestamp_43;

    parse_tree__parse_error__io_error_to_read_module_errors_5_p_0(ErrorMsg_50, (MR_Integer) 0, &Errors0_44);
    MaybeFileNameAndStream_19 = (MR_Word) (MR_mkword(1, (MR_Word) (Errors0_44)));
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (ProgressStream_7));
    }
    parse_tree__read_modules__read_module_end_module_14_p_0(Var_39, Globals_8, MaybeFileNameAndStream_19, (MR_Integer) 1, (MR_Word) (MR_mkword(2, &parse_tree__read_modules_scalar_common_3[0])), ReadDoneMsg_17, FileName0_16, &FileName_45, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_43, Errors0_44, &Errors_47);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveReadModule_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_45));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_47));
    }
  }
  else
  {
    MR_Word FileNameAndStream_20 = ((MR_Word) ((MR_hl_field(0, RawMaybeFileNameAndStream_48, (MR_Integer) 0))));
    MR_Word MaybeParseTreePlainOpt_21;
    MR_Word Errors0_22;
    MR_String FileName_23;
    MR_Word Errors_25;
    MR_Word Var_34;
    MR_Word MaybeFileNameAndStream_54 = (MR_Word) ((MR_Word) (FileNameAndStream_20));
    MR_Word _MaybeTimestamp_24;

    parse_tree__parse_module__actually_read_module_plain_opt_7_p_0(Globals_8, FileNameAndStream_20, ModuleName_9, &MaybeParseTreePlainOpt_21, &Errors0_22);
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (ProgressStream_7));
    }
    parse_tree__read_modules__read_module_end_module_14_p_0(Var_34, Globals_8, MaybeFileNameAndStream_54, (MR_Integer) 1, (MR_Word) (MR_mkword(2, &parse_tree__read_modules_scalar_common_3[0])), ReadDoneMsg_17, FileName0_16, &FileName_23, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_24, Errors0_22, &Errors_25);
    if ((MaybeParseTreePlainOpt_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveReadModule_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileName_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors_25));
      }
    else
    {
      MR_Word ParseTreePlainOpt_26 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreePlainOpt_21, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *HaveReadModule_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (FileName_23));
        MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, base, 2) = ((MR_Box) (ParseTreePlainOpt_26));
        MR_hl_field(0, base, 3) = ((MR_Box) (Errors_25));
      }
    }
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int3_no_stream_9_p_0(
  MR_Word Globals_10,
  MR_Word ReadReasonMsg_11,
  MR_Word IgnoreErrors_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word ReadModuleAndTimestamps_15,
  MR_Word * HaveReadModule_16)
{
  parse_tree__read_modules__read_module_int3_10_p_0((MR_Word) ((MR_Unsigned) 0U), Globals_10, ReadReasonMsg_11, IgnoreErrors_12, Search_13, ModuleName_14, ReadModuleAndTimestamps_15, HaveReadModule_16);
}

void MR_CALL 
parse_tree__read_modules__read_module_int2_no_stream_9_p_0(
  MR_Word Globals_10,
  MR_Word ReadReasonMsg_11,
  MR_Word IgnoreErrors_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word ReadModuleAndTimestamps_15,
  MR_Word * HaveReadModule_16)
{
  parse_tree__read_modules__read_module_int2_10_p_0((MR_Word) ((MR_Unsigned) 0U), Globals_10, ReadReasonMsg_11, IgnoreErrors_12, Search_13, ModuleName_14, ReadModuleAndTimestamps_15, HaveReadModule_16);
}

void MR_CALL 
parse_tree__read_modules__read_module_int1_no_stream_9_p_0(
  MR_Word Globals_10,
  MR_Word ReadReasonMsg_11,
  MR_Word IgnoreErrors_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word ReadModuleAndTimestamps_15,
  MR_Word * HaveReadModule_16)
{
  parse_tree__read_modules__read_module_int1_10_p_0((MR_Word) ((MR_Unsigned) 0U), Globals_10, ReadReasonMsg_11, IgnoreErrors_12, Search_13, ModuleName_14, ReadModuleAndTimestamps_15, HaveReadModule_16);
}

void MR_CALL 
parse_tree__read_modules__read_module_int0_no_stream_9_p_0(
  MR_Word Globals_10,
  MR_Word ReadReasonMsg_11,
  MR_Word IgnoreErrors_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word ReadModuleAndTimestamps_15,
  MR_Word * HaveReadModule_16)
{
  parse_tree__read_modules__read_module_int0_10_p_0((MR_Word) ((MR_Unsigned) 0U), Globals_10, ReadReasonMsg_11, IgnoreErrors_12, Search_13, ModuleName_14, ReadModuleAndTimestamps_15, HaveReadModule_16);
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
  MR_Word * HaveReadModule_18)
{
  MR_String FileName0_20;
  MR_Word ReadDoneMsg_21;
  MR_Word SearchDirs_22;
  MR_Word RawMaybeFileNameAndStream_53;

  parse_tree__read_modules__read_module_begin_10_p_0(Globals_12, ReadReasonMsg_13, Search_15, ModuleName_16, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[1])), &FileName0_20, &ReadDoneMsg_21, &SearchDirs_22);
  parse_tree__find_module__search_for_file_and_stream_5_p_0(SearchDirs_22, FileName0_20, &RawMaybeFileNameAndStream_53);
  if (((MR_tag((MR_Word) RawMaybeFileNameAndStream_53)) == (MR_Integer) 1))
  {
    MR_Word MaybeFileNameAndStream_23;
    MR_Word Errors0_49;
    MR_String FileName_50;
    MR_Word Errors1_51;
    MR_Word Errors_52;
    MR_String ErrorMsg_55 = ((MR_String) ((MR_hl_field(1, RawMaybeFileNameAndStream_53, (MR_Integer) 0))));
    MR_Word _MaybeTimestamp_33;

    parse_tree__parse_error__io_error_to_read_module_errors_5_p_0(ErrorMsg_55, (MR_Integer) 0, &Errors0_49);
    MaybeFileNameAndStream_23 = (MR_Word) (MR_mkword(1, (MR_Word) (Errors0_49)));
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_23, IgnoreErrors_14, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_21, FileName0_20, &FileName_50, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_33, Errors0_49, &Errors1_51);
    switch (IgnoreErrors_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Errors_52 = Errors1_51;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_59;
          MR_Word Var_62;

          Var_59 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
          Var_62 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
          {
            Errors_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Errors_52, 0) = ((MR_Box) (Var_59));
            MR_hl_field(0, Errors_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Errors_52, 2) = ((MR_Box) (Var_62));
            MR_hl_field(0, Errors_52, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Errors_52, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveReadModule_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_50));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_52));
    }
  }
  else
  {
    MR_Word FileNameAndStream_24 = ((MR_Word) ((MR_hl_field(0, RawMaybeFileNameAndStream_53, (MR_Integer) 0))));
    MR_Word MaybeTimestampRes_25;
    MR_Word MaybeParseTreeInt3_26;
    MR_Word Errors0_27;
    MR_String FileName_28;
    MR_Word MaybeTimestamp_29;
    MR_Word Errors1_30;
    MR_Word MaybeFileNameAndStream_75 = (MR_Word) ((MR_Word) (FileNameAndStream_24));

    parse_tree__parse_module__actually_read_module_int3_10_p_0(Globals_12, FileNameAndStream_24, ModuleName_16, (MR_Word) ((MR_Unsigned) 0U), ReadModuleAndTimestamps_17, &MaybeTimestampRes_25, &MaybeParseTreeInt3_26, &Errors0_27);
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_75, IgnoreErrors_14, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_21, FileName0_20, &FileName_28, MaybeTimestampRes_25, &MaybeTimestamp_29, Errors0_27, &Errors1_30);
    if ((MaybeParseTreeInt3_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Errors_32;

      switch (IgnoreErrors_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Errors_32 = Errors1_30;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_67;
            MR_Word Var_70;

            Var_67 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
            Var_70 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
            {
              Errors_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Errors_32, 0) = ((MR_Box) (Var_67));
              MR_hl_field(0, Errors_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Errors_32, 2) = ((MR_Box) (Var_70));
              MR_hl_field(0, Errors_32, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Errors_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveReadModule_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileName_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors_32));
      }
    }
    else
    {
      MR_Word ParseTreeInt3_31 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt3_26, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *HaveReadModule_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (FileName_28));
        MR_hl_field(0, base, 1) = ((MR_Box) (MaybeTimestamp_29));
        MR_hl_field(0, base, 2) = ((MR_Box) (ParseTreeInt3_31));
        MR_hl_field(0, base, 3) = ((MR_Box) (Errors1_30));
      }
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
  MR_Word * HaveReadModule_18)
{
  MR_String FileName0_20;
  MR_Word ReadDoneMsg_21;
  MR_Word SearchDirs_22;
  MR_Word RawMaybeFileNameAndStream_53;

  parse_tree__read_modules__read_module_begin_10_p_0(Globals_12, ReadReasonMsg_13, Search_15, ModuleName_16, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[3])), &FileName0_20, &ReadDoneMsg_21, &SearchDirs_22);
  parse_tree__find_module__search_for_file_and_stream_5_p_0(SearchDirs_22, FileName0_20, &RawMaybeFileNameAndStream_53);
  if (((MR_tag((MR_Word) RawMaybeFileNameAndStream_53)) == (MR_Integer) 1))
  {
    MR_Word MaybeFileNameAndStream_23;
    MR_Word Errors0_49;
    MR_String FileName_50;
    MR_Word Errors1_51;
    MR_Word Errors_52;
    MR_String ErrorMsg_55 = ((MR_String) ((MR_hl_field(1, RawMaybeFileNameAndStream_53, (MR_Integer) 0))));
    MR_Word _MaybeTimestamp_33;

    parse_tree__parse_error__io_error_to_read_module_errors_5_p_0(ErrorMsg_55, (MR_Integer) 0, &Errors0_49);
    MaybeFileNameAndStream_23 = (MR_Word) (MR_mkword(1, (MR_Word) (Errors0_49)));
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_23, IgnoreErrors_14, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_21, FileName0_20, &FileName_50, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_33, Errors0_49, &Errors1_51);
    switch (IgnoreErrors_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Errors_52 = Errors1_51;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_59;
          MR_Word Var_62;

          Var_59 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
          Var_62 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
          {
            Errors_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Errors_52, 0) = ((MR_Box) (Var_59));
            MR_hl_field(0, Errors_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Errors_52, 2) = ((MR_Box) (Var_62));
            MR_hl_field(0, Errors_52, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Errors_52, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveReadModule_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_50));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_52));
    }
  }
  else
  {
    MR_Word FileNameAndStream_24 = ((MR_Word) ((MR_hl_field(0, RawMaybeFileNameAndStream_53, (MR_Integer) 0))));
    MR_Word MaybeTimestampRes_25;
    MR_Word MaybeParseTreeInt2_26;
    MR_Word Errors0_27;
    MR_String FileName_28;
    MR_Word MaybeTimestamp_29;
    MR_Word Errors1_30;
    MR_Word MaybeFileNameAndStream_75 = (MR_Word) ((MR_Word) (FileNameAndStream_24));

    parse_tree__parse_module__actually_read_module_int2_10_p_0(Globals_12, FileNameAndStream_24, ModuleName_16, (MR_Word) ((MR_Unsigned) 0U), ReadModuleAndTimestamps_17, &MaybeTimestampRes_25, &MaybeParseTreeInt2_26, &Errors0_27);
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_75, IgnoreErrors_14, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_21, FileName0_20, &FileName_28, MaybeTimestampRes_25, &MaybeTimestamp_29, Errors0_27, &Errors1_30);
    if ((MaybeParseTreeInt2_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Errors_32;

      switch (IgnoreErrors_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Errors_32 = Errors1_30;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_67;
            MR_Word Var_70;

            Var_67 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
            Var_70 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
            {
              Errors_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Errors_32, 0) = ((MR_Box) (Var_67));
              MR_hl_field(0, Errors_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Errors_32, 2) = ((MR_Box) (Var_70));
              MR_hl_field(0, Errors_32, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Errors_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveReadModule_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileName_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors_32));
      }
    }
    else
    {
      MR_Word ParseTreeInt2_31 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt2_26, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *HaveReadModule_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (FileName_28));
        MR_hl_field(0, base, 1) = ((MR_Box) (MaybeTimestamp_29));
        MR_hl_field(0, base, 2) = ((MR_Box) (ParseTreeInt2_31));
        MR_hl_field(0, base, 3) = ((MR_Box) (Errors1_30));
      }
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
  MR_Word * HaveReadModule_18)
{
  MR_String FileName0_20;
  MR_Word ReadDoneMsg_21;
  MR_Word SearchDirs_22;
  MR_Word RawMaybeFileNameAndStream_53;

  parse_tree__read_modules__read_module_begin_10_p_0(Globals_12, ReadReasonMsg_13, Search_15, ModuleName_16, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[2])), &FileName0_20, &ReadDoneMsg_21, &SearchDirs_22);
  parse_tree__find_module__search_for_file_and_stream_5_p_0(SearchDirs_22, FileName0_20, &RawMaybeFileNameAndStream_53);
  if (((MR_tag((MR_Word) RawMaybeFileNameAndStream_53)) == (MR_Integer) 1))
  {
    MR_Word MaybeFileNameAndStream_23;
    MR_Word Errors0_49;
    MR_String FileName_50;
    MR_Word Errors1_51;
    MR_Word Errors_52;
    MR_String ErrorMsg_55 = ((MR_String) ((MR_hl_field(1, RawMaybeFileNameAndStream_53, (MR_Integer) 0))));
    MR_Word _MaybeTimestamp_33;

    parse_tree__parse_error__io_error_to_read_module_errors_5_p_0(ErrorMsg_55, (MR_Integer) 0, &Errors0_49);
    MaybeFileNameAndStream_23 = (MR_Word) (MR_mkword(1, (MR_Word) (Errors0_49)));
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_23, IgnoreErrors_14, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_21, FileName0_20, &FileName_50, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_33, Errors0_49, &Errors1_51);
    switch (IgnoreErrors_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Errors_52 = Errors1_51;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_59;
          MR_Word Var_62;

          Var_59 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
          Var_62 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
          {
            Errors_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Errors_52, 0) = ((MR_Box) (Var_59));
            MR_hl_field(0, Errors_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Errors_52, 2) = ((MR_Box) (Var_62));
            MR_hl_field(0, Errors_52, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Errors_52, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveReadModule_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_50));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_52));
    }
  }
  else
  {
    MR_Word FileNameAndStream_24 = ((MR_Word) ((MR_hl_field(0, RawMaybeFileNameAndStream_53, (MR_Integer) 0))));
    MR_Word MaybeTimestampRes_25;
    MR_Word MaybeParseTreeInt1_26;
    MR_Word Errors0_27;
    MR_String FileName_28;
    MR_Word MaybeTimestamp_29;
    MR_Word Errors1_30;
    MR_Word MaybeFileNameAndStream_75 = (MR_Word) ((MR_Word) (FileNameAndStream_24));

    parse_tree__parse_module__actually_read_module_int1_10_p_0(Globals_12, FileNameAndStream_24, ModuleName_16, (MR_Word) ((MR_Unsigned) 0U), ReadModuleAndTimestamps_17, &MaybeTimestampRes_25, &MaybeParseTreeInt1_26, &Errors0_27);
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_75, IgnoreErrors_14, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_21, FileName0_20, &FileName_28, MaybeTimestampRes_25, &MaybeTimestamp_29, Errors0_27, &Errors1_30);
    if ((MaybeParseTreeInt1_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Errors_32;

      switch (IgnoreErrors_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Errors_32 = Errors1_30;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_67;
            MR_Word Var_70;

            Var_67 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
            Var_70 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
            {
              Errors_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Errors_32, 0) = ((MR_Box) (Var_67));
              MR_hl_field(0, Errors_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Errors_32, 2) = ((MR_Box) (Var_70));
              MR_hl_field(0, Errors_32, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Errors_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveReadModule_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileName_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors_32));
      }
    }
    else
    {
      MR_Word ParseTreeInt1_31 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt1_26, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *HaveReadModule_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (FileName_28));
        MR_hl_field(0, base, 1) = ((MR_Box) (MaybeTimestamp_29));
        MR_hl_field(0, base, 2) = ((MR_Box) (ParseTreeInt1_31));
        MR_hl_field(0, base, 3) = ((MR_Box) (Errors1_30));
      }
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
  MR_Word * HaveReadModule_18)
{
  MR_String FileName0_20;
  MR_Word ReadDoneMsg_21;
  MR_Word SearchDirs_22;
  MR_Word RawMaybeFileNameAndStream_53;

  parse_tree__read_modules__read_module_begin_10_p_0(Globals_12, ReadReasonMsg_13, Search_15, ModuleName_16, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[0])), &FileName0_20, &ReadDoneMsg_21, &SearchDirs_22);
  parse_tree__find_module__search_for_file_and_stream_5_p_0(SearchDirs_22, FileName0_20, &RawMaybeFileNameAndStream_53);
  if (((MR_tag((MR_Word) RawMaybeFileNameAndStream_53)) == (MR_Integer) 1))
  {
    MR_Word MaybeFileNameAndStream_23;
    MR_Word Errors0_49;
    MR_String FileName_50;
    MR_Word Errors1_51;
    MR_Word Errors_52;
    MR_String ErrorMsg_55 = ((MR_String) ((MR_hl_field(1, RawMaybeFileNameAndStream_53, (MR_Integer) 0))));
    MR_Word _MaybeTimestamp_33;

    parse_tree__parse_error__io_error_to_read_module_errors_5_p_0(ErrorMsg_55, (MR_Integer) 0, &Errors0_49);
    MaybeFileNameAndStream_23 = (MR_Word) (MR_mkword(1, (MR_Word) (Errors0_49)));
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_23, IgnoreErrors_14, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_21, FileName0_20, &FileName_50, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_33, Errors0_49, &Errors1_51);
    switch (IgnoreErrors_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Errors_52 = Errors1_51;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_59;
          MR_Word Var_62;

          Var_59 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
          Var_62 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
          {
            Errors_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Errors_52, 0) = ((MR_Box) (Var_59));
            MR_hl_field(0, Errors_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Errors_52, 2) = ((MR_Box) (Var_62));
            MR_hl_field(0, Errors_52, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Errors_52, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveReadModule_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_50));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_52));
    }
  }
  else
  {
    MR_Word FileNameAndStream_24 = ((MR_Word) ((MR_hl_field(0, RawMaybeFileNameAndStream_53, (MR_Integer) 0))));
    MR_Word MaybeTimestampRes_25;
    MR_Word MaybeParseTreeInt0_26;
    MR_Word Errors0_27;
    MR_String FileName_28;
    MR_Word MaybeTimestamp_29;
    MR_Word Errors1_30;
    MR_Word MaybeFileNameAndStream_75 = (MR_Word) ((MR_Word) (FileNameAndStream_24));

    parse_tree__parse_module__actually_read_module_int0_10_p_0(Globals_12, FileNameAndStream_24, ModuleName_16, (MR_Word) ((MR_Unsigned) 0U), ReadModuleAndTimestamps_17, &MaybeTimestampRes_25, &MaybeParseTreeInt0_26, &Errors0_27);
    parse_tree__read_modules__read_module_end_module_14_p_0(ProgressStream_11, Globals_12, MaybeFileNameAndStream_75, IgnoreErrors_14, (MR_Word) (MR_mkword(1, &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_21, FileName0_20, &FileName_28, MaybeTimestampRes_25, &MaybeTimestamp_29, Errors0_27, &Errors1_30);
    if ((MaybeParseTreeInt0_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Errors_32;

      switch (IgnoreErrors_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Errors_32 = Errors1_30;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_67;
            MR_Word Var_70;

            Var_67 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
            Var_70 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
            {
              Errors_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Errors_32, 0) = ((MR_Box) (Var_67));
              MR_hl_field(0, Errors_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Errors_32, 2) = ((MR_Box) (Var_70));
              MR_hl_field(0, Errors_32, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Errors_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveReadModule_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileName_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors_32));
      }
    }
    else
    {
      MR_Word ParseTreeInt0_31 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeInt0_26, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *HaveReadModule_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (FileName_28));
        MR_hl_field(0, base, 1) = ((MR_Box) (MaybeTimestamp_29));
        MR_hl_field(0, base, 2) = ((MR_Box) (ParseTreeInt0_31));
        MR_hl_field(0, base, 3) = ((MR_Box) (Errors1_30));
      }
    }
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_src_from_file_9_p_0(
  MR_Word Globals_10,
  MR_String FileName_11,
  MR_String FileNameDotM_12,
  MR_Word ReadReasonMsg_13,
  MR_Word Search_14,
  MR_Word ReadModuleAndTimestamps_15,
  MR_Word * HaveReadModule_16)
{
  MR_Word DefaultModuleName_18;
  MR_Word ReadDoneMsg_19;
  MR_Word SearchDirs_20;
  MR_Word MaybeFileNameAndStream_21;
  MR_Word VeryVerbose_50;

  parse_tree__read_modules__get_default_module_name_for_file_5_p_0(FileName_11, FileNameDotM_12, &DefaultModuleName_18);
  switch (Search_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_48;

        Var_48 = mercury__dir__this_directory_0_f_0();
        {
          SearchDirs_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SearchDirs_20, 0) = ((MR_Box) (Var_48));
          MR_hl_field(1, SearchDirs_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 0:
      libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 685, &SearchDirs_20);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 73, &VeryVerbose_50);
  switch (VeryVerbose_50) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ReadDoneMsg_19 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_String Msg_51;
        MR_Word Stream_52;

        switch (MR_tag((MR_Word) ReadReasonMsg_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_85;

              Var_85 = mercury__string__f_43_43_2_f_0(FileNameDotM_12, (MR_String) "\'... ");
              Msg_51 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_85);
              mercury__io__output_stream_3_p_0(&Stream_52);
              ReadDoneMsg_19 = (MR_Word) ((MR_Unsigned) 4U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleName_74 = ((MR_Word) ((MR_hl_field(1, ReadReasonMsg_13, (MR_Integer) 0))));
              MR_String Var_76;

              Var_76 = mercury__string__f_43_43_2_f_0(FileNameDotM_12, (MR_String) "\'... ");
              Msg_51 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_76);
              libs__globals__get_progress_output_stream_5_p_0(Globals_10, ModuleName_74, &Stream_52);
              {
                ReadDoneMsg_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ReadDoneMsg_19, 0) = ((MR_Box) (Stream_52));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleName_73 = ((MR_Word) ((MR_hl_field(2, ReadReasonMsg_13, (MR_Integer) 0))));
              MR_String Var_79;

              Var_79 = mercury__string__f_43_43_2_f_0(FileNameDotM_12, (MR_String) "\'... ");
              Msg_51 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading old version of \140", Var_79);
              libs__globals__get_progress_output_stream_5_p_0(Globals_10, ModuleName_73, &Stream_52);
              {
                ReadDoneMsg_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ReadDoneMsg_19, 0) = ((MR_Box) (Stream_52));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_53 = ((MR_Word) ((MR_hl_field(3, ReadReasonMsg_13, (MR_Integer) 0))));
              MR_String Var_82;

              Var_82 = mercury__string__f_43_43_2_f_0(FileNameDotM_12, (MR_String) "\'... ");
              Msg_51 = mercury__string__f_43_43_2_f_0((MR_String) "% Getting dependencies for \140", Var_82);
              libs__globals__get_progress_output_stream_5_p_0(Globals_10, ModuleName_53, &Stream_52);
              {
                ReadDoneMsg_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ReadDoneMsg_19, 0) = ((MR_Box) (Stream_52));
              }
            }
            break;
        }
        mercury__io__write_string_4_p_0(Stream_52, Msg_51);
        mercury__io__flush_output_3_p_0(Stream_52);
      }
      break;
  }
  parse_tree__find_module__search_for_file_and_stream_5_p_0(SearchDirs_20, FileNameDotM_12, &MaybeFileNameAndStream_21);
  if (((MR_tag((MR_Word) MaybeFileNameAndStream_21)) == (MR_Integer) 1))
  {
    MR_String ErrorMsg_29 = ((MR_String) ((MR_hl_field(1, MaybeFileNameAndStream_21, (MR_Integer) 0))));
    MR_Word Errors_31;
    MR_Word Errors0_45;
    MR_Word _MaybeTimestamp_30;

    parse_tree__parse_error__io_error_to_read_module_errors_5_p_0(ErrorMsg_29, (MR_Integer) 0, &Errors0_45);
    parse_tree__read_modules__read_module_end_file_10_p_0(Globals_10, (MR_Word) ((MR_Unsigned) 0U), ReadDoneMsg_19, FileNameDotM_12, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_30, Errors0_45, &Errors_31);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveReadModule_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileNameDotM_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_31));
    }
  }
  else
  {
    MR_Word FileNameAndStream_22 = ((MR_Word) ((MR_hl_field(0, MaybeFileNameAndStream_21, (MR_Integer) 0))));
    MR_Word MaybeTimestampRes_23;
    MR_Word MaybeParseTreeSrc_24;
    MR_Word Errors0_25;
    MR_Word MaybeTimestamp_26;
    MR_Word Errors1_27;

    parse_tree__parse_module__actually_read_module_src_10_p_0(Globals_10, FileNameAndStream_22, DefaultModuleName_18, (MR_Word) ((MR_Unsigned) 0U), ReadModuleAndTimestamps_15, &MaybeTimestampRes_23, &MaybeParseTreeSrc_24, &Errors0_25);
    parse_tree__read_modules__read_module_end_file_10_p_0(Globals_10, (MR_Word) ((MR_Unsigned) 0U), ReadDoneMsg_19, FileNameDotM_12, MaybeTimestampRes_23, &MaybeTimestamp_26, Errors0_25, &Errors1_27);
    if ((MaybeParseTreeSrc_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveReadModule_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileNameDotM_12));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors1_27));
      }
    else
    {
      MR_Word ParseTreeSrc_28 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeSrc_24, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *HaveReadModule_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (FileNameDotM_12));
        MR_hl_field(0, base, 1) = ((MR_Box) (MaybeTimestamp_26));
        MR_hl_field(0, base, 2) = ((MR_Box) (ParseTreeSrc_28));
        MR_hl_field(0, base, 3) = ((MR_Box) (Errors1_27));
      }
    }
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
  if ((MaybeTimestampRes_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeTimestamp_16 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TimestampRes_24 = ((MR_Word) ((MR_hl_field(1, MaybeTimestampRes_15, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) TimestampRes_24)) == (MR_Integer) 1))
    {
      MR_Word IOError_26 = ((MR_Word) ((MR_hl_field(1, TimestampRes_24, (MR_Integer) 0))));
      MR_Word SmartRecompilation_27;

      *MaybeTimestamp_16 = (MR_Word) ((MR_Unsigned) 0U);
      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 152, &SmartRecompilation_27);
      switch (SmartRecompilation_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Warn_29;

            libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
            libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
            libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 32, &Warn_29);
            switch (Warn_29) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ErrorMsg_30;
                  MR_Word Pieces_31;
                  MR_Word Spec_32;
                  MR_Word Var_40;
                  MR_Word Var_41;
                  MR_Word Var_42;
                  MR_Word Var_45;
                  MR_Word Var_47;
                  MR_Word Var_48;

                  mercury__io__error_message_2_p_0(IOError_26, &ErrorMsg_30);
                  {
                    Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_41, 1) = ((MR_Box) (FileName_14));
                  }
                  {
                    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, Var_48, 1) = ((MR_Box) (ErrorMsg_30));
                  }
                  {
                    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
                    MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__read_modules_scalar_common_1[15])));
                  }
                  {
                    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
                  }
                  {
                    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[9])));
                    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
                  }
                  {
                    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
                    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
                  }
                  {
                    Pieces_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_31, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[8])));
                    MR_hl_field(1, Pieces_31, 1) = ((MR_Box) (Var_40));
                  }
                  {
                    Spec_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.read_modules.record_and_report_missing_timestamp\'/5"));
                    MR_hl_field(2, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(2, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(2, Spec_32, 3) = ((MR_Box) (Pieces_31));
                  }
                  parse_tree__write_error_spec__write_error_spec_4_p_0(Globals_11, Spec_32);
                }
                break;
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Timestamp_25 = ((MR_Word) ((MR_hl_field(0, TimestampRes_24, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTimestamp_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Timestamp_25));
      }
    }
  }
  parse_tree__read_modules__handle_any_read_module_errors_8_p_0(Globals_11, FileKind_12, ReadDoneMsg_13, (MR_Integer) 1, Errors0_17, Errors_18);
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
    case (MR_Integer) 0:
      parse_tree__file_names__file_name_to_module_name_2_p_0(BaseFileName_11, DefaultModuleName_8);
      break;
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
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_src_11_p_0(
  MR_Word MaybeProgressStream_12,
  MR_Word Globals_13,
  MR_Word ReadReasonMsg_14,
  MR_Word IgnoreErrors_15,
  MR_Word Search_16,
  MR_Word ModuleName_17,
  MR_Word ExpectationContexts_18,
  MR_Word ReadModuleAndTimestamps_19,
  MR_Word * HaveReadModule_20)
{
  MR_String FileName0_22;
  MR_Word ReadDoneMsg_23;
  MR_Word SearchDirs_24;
  MR_Word MaybeFileNameAndStream_25;

  parse_tree__read_modules__read_module_begin_10_p_0(Globals_13, ReadReasonMsg_14, Search_16, ModuleName_17, (MR_Word) ((MR_Unsigned) 0U), &FileName0_22, &ReadDoneMsg_23, &SearchDirs_24);
  parse_tree__find_module__search_for_module_source_and_stream_5_p_0(SearchDirs_24, ModuleName_17, &MaybeFileNameAndStream_25);
  if (((MR_tag((MR_Word) MaybeFileNameAndStream_25)) == (MR_Integer) 1))
  {
    MR_String ErrorMsg_36 = ((MR_String) ((MR_hl_field(1, MaybeFileNameAndStream_25, (MR_Integer) 0))));
    MR_Word Var_49;
    MR_Word Errors0_53;
    MR_String FileName_54;
    MR_Word Errors1_55;
    MR_Word Errors_56;
    MR_Word _MaybeTimestamp_37;

    parse_tree__parse_error__io_error_to_read_module_errors_5_p_0(ErrorMsg_36, (MR_Integer) 0, &Errors0_53);
    Var_49 = (MR_Word) (MR_mkword(1, (MR_Word) (Errors0_53)));
    parse_tree__read_modules__read_module_end_module_14_p_0(MaybeProgressStream_12, Globals_13, Var_49, IgnoreErrors_15, (MR_Word) ((MR_Unsigned) 0U), ReadDoneMsg_23, FileName0_22, &FileName_54, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_37, Errors0_53, &Errors1_55);
    switch (IgnoreErrors_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Errors_56 = Errors1_55;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_60;
          MR_Word Var_63;

          Var_60 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
          Var_63 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
          {
            Errors_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Errors_56, 0) = ((MR_Box) (Var_60));
            MR_hl_field(0, Errors_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Errors_56, 2) = ((MR_Box) (Var_63));
            MR_hl_field(0, Errors_56, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Errors_56, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HaveReadModule_20 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_54));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors_56));
    }
  }
  else
  {
    MR_Word FileNameAndStream_26 = ((MR_Word) ((MR_hl_field(0, MaybeFileNameAndStream_25, (MR_Integer) 0))));
    MR_Word MaybeTimestampRes_27;
    MR_Word MaybeParseTreeSrc0_28;
    MR_Word Errors0_29;
    MR_String FileName_30;
    MR_Word MaybeTimestamp_31;
    MR_Word Errors1_32;
    MR_Word Var_44;

    parse_tree__parse_module__actually_read_module_src_10_p_0(Globals_13, FileNameAndStream_26, ModuleName_17, ExpectationContexts_18, ReadModuleAndTimestamps_19, &MaybeTimestampRes_27, &MaybeParseTreeSrc0_28, &Errors0_29);
    Var_44 = (MR_Word) ((MR_Word) (FileNameAndStream_26));
    parse_tree__read_modules__read_module_end_module_14_p_0(MaybeProgressStream_12, Globals_13, Var_44, IgnoreErrors_15, (MR_Word) ((MR_Unsigned) 0U), ReadDoneMsg_23, FileName0_22, &FileName_30, MaybeTimestampRes_27, &MaybeTimestamp_31, Errors0_29, &Errors1_32);
    if ((MaybeParseTreeSrc0_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Errors_35;

      switch (IgnoreErrors_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Errors_35 = Errors1_32;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_68;
            MR_Word Var_71;

            Var_68 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
            Var_71 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
            {
              Errors_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Errors_35, 0) = ((MR_Box) (Var_68));
              MR_hl_field(0, Errors_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Errors_35, 2) = ((MR_Box) (Var_71));
              MR_hl_field(0, Errors_35, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Errors_35, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HaveReadModule_20 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FileName_30));
        MR_hl_field(1, base, 1) = ((MR_Box) (Errors_35));
      }
    }
    else
    {
      MR_Word ParseTreeSrc0_33 = ((MR_Word) ((MR_hl_field(1, MaybeParseTreeSrc0_28, (MR_Integer) 0))));
      MR_Word ParseTreeSrc_34;
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc0_33, (MR_Integer) 1))));
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc0_33, (MR_Integer) 2))));

      {
        ParseTreeSrc_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ParseTreeSrc_34, 0) = ((MR_Box) (ModuleName_17));
        MR_hl_field(0, ParseTreeSrc_34, 1) = ((MR_Box) (Var_58));
        MR_hl_field(0, ParseTreeSrc_34, 2) = ((MR_Box) (Var_59));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *HaveReadModule_20 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (FileName_30));
        MR_hl_field(0, base, 1) = ((MR_Box) (MaybeTimestamp_31));
        MR_hl_field(0, base, 2) = ((MR_Box) (ParseTreeSrc_34));
        MR_hl_field(0, base, 3) = ((MR_Box) (Errors1_32));
      }
    }
  }
}

static void MR_CALL 
parse_tree__read_modules__read_module_end_module_14_p_0(
  MR_Word MaybeProgressStream_15,
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
  MR_Word Statistics_30;

  if (((MR_tag((MR_Word) MaybeFileNameAndStream_17)) == (MR_Integer) 1))
    *FileName_22 = FileName0_21;
  else
  {
    MR_Word Var_34 = (MR_Word) ((MR_Word) (MaybeFileNameAndStream_17));

    *FileName_22 = ((MR_String) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
  }
  if ((MaybeTimestampRes_23 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeTimestamp_24 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TimestampRes_38 = ((MR_Word) ((MR_hl_field(1, MaybeTimestampRes_23, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) TimestampRes_38)) == (MR_Integer) 1))
    {
      MR_Word IOError_40 = ((MR_Word) ((MR_hl_field(1, TimestampRes_38, (MR_Integer) 0))));
      MR_Word SmartRecompilation_41;

      *MaybeTimestamp_24 = (MR_Word) ((MR_Unsigned) 0U);
      libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 152, &SmartRecompilation_41);
      switch (SmartRecompilation_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
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
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ErrorMsg_44;
                  MR_Word Pieces_45;
                  MR_Word Spec_46;
                  MR_Word Var_54;
                  MR_Word Var_55;
                  MR_Word Var_56;
                  MR_Word Var_59;
                  MR_Word Var_61;
                  MR_Word Var_62;

                  mercury__io__error_message_2_p_0(IOError_40, &ErrorMsg_44);
                  {
                    Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_55, 1) = ((MR_Box) (FileName0_21));
                  }
                  {
                    Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, Var_62, 1) = ((MR_Box) (ErrorMsg_44));
                  }
                  {
                    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
                    MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__read_modules_scalar_common_1[15])));
                  }
                  {
                    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_61));
                  }
                  {
                    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[9])));
                    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
                  }
                  {
                    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
                    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
                  }
                  {
                    Pieces_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_45, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__read_modules_scalar_common_1[8])));
                    MR_hl_field(1, Pieces_45, 1) = ((MR_Box) (Var_54));
                  }
                  {
                    Spec_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Spec_46, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.read_modules.record_and_report_missing_timestamp\'/5"));
                    MR_hl_field(2, Spec_46, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(2, Spec_46, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(2, Spec_46, 3) = ((MR_Box) (Pieces_45));
                  }
                  parse_tree__write_error_spec__write_error_spec_4_p_0(Globals_16, Spec_46);
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
    }
  }
  parse_tree__read_modules__handle_any_read_module_errors_8_p_0(Globals_16, FileKind_19, ReadDoneMsg_20, IgnoreErrors_18, Errors0_25, Errors_26);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 83, &Statistics_30);
  if (!((MaybeProgressStream_15 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ProgressStream_31 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_15, (MR_Integer) 0))));

    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_31, Statistics_30);
  }
}

static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_8_p_0(
  MR_Word Globals_9,
  MR_Word FileKind_10,
  MR_Word ReadDoneMsg_11,
  MR_Word IgnoreErrors_12,
  MR_Word Errors0_13,
  MR_Word * Errors_14)
{
  MR_bool succeeded;

  switch (IgnoreErrors_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(Errors0_13);
        if (succeeded)
        {
          *Errors_14 = Errors0_13;
          parse_tree__read_modules__output_read_done_msg_4_p_0(ReadDoneMsg_11, (MR_String) "successful parse.\n");
        }
        else
        {
          MR_Word FatalErrors0_46 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 0))));

          succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors0_46, ((MR_Box) ((MR_Integer) 0)));
          if (succeeded)
            parse_tree__read_modules__output_read_done_msg_4_p_0(ReadDoneMsg_11, (MR_String) "not found.\n");
          else
          {
            succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors0_46);
            if (succeeded)
              parse_tree__read_modules__output_read_done_msg_4_p_0(ReadDoneMsg_11, (MR_String) "fatal error(s).\n");
            else
              parse_tree__read_modules__output_read_done_msg_4_p_0(ReadDoneMsg_11, (MR_String) "parse error(s).\n");
          }
          switch (MR_tag((MR_Word) FileKind_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                switch (MR_tag((MR_Word) ReadDoneMsg_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(ReadDoneMsg_11)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *Errors_14 = Errors0_13;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ErrorStream_19;
                          MR_Word FatalErrorSpecs0_20;
                          MR_Word NonFatalErrorSpecs0_21;
                          MR_Word Var_39;
                          MR_Word Var_63;
                          MR_Word Var_65;
                          MR_Word Var_67;

                          mercury__io__output_stream_3_p_0(&ErrorStream_19);
                          FatalErrorSpecs0_20 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 1))));
                          NonFatalErrorSpecs0_21 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 3))));
                          Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FatalErrorSpecs0_20, NonFatalErrorSpecs0_21);
                          parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_19, Globals_9, Var_39);
                          Var_63 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 0))));
                          Var_65 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 2))));
                          Var_67 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 4))));
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                            *Errors_14 = base;
                            MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
                            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(0, base, 2) = ((MR_Box) (Var_65));
                            MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(0, base, 4) = ((MR_Box) (Var_67));
                          }
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_86;
                      MR_Word Var_88;
                      MR_Word Var_90;
                      MR_Word ErrorStream_107 = ((MR_Word) ((MR_hl_field(1, ReadDoneMsg_11, (MR_Integer) 0))));
                      MR_Word FatalErrorSpecs0_108 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 1))));
                      MR_Word NonFatalErrorSpecs0_109 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 3))));
                      MR_Word Var_111;

                      Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FatalErrorSpecs0_108, NonFatalErrorSpecs0_109);
                      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_107, Globals_9, Var_111);
                      Var_86 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 0))));
                      Var_88 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 2))));
                      Var_90 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 4))));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        *Errors_14 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (Var_86));
                        MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, base, 2) = ((MR_Box) (Var_88));
                        MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, base, 4) = ((MR_Box) (Var_90));
                      }
                    }
                    break;
                }
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
              break;
            case (MR_Integer) 1:
              {
                switch (MR_tag((MR_Word) ReadDoneMsg_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(ReadDoneMsg_11)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *Errors_14 = Errors0_13;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ErrorStream_19;
                          MR_Word FatalErrorSpecs0_20;
                          MR_Word NonFatalErrorSpecs0_21;
                          MR_Word Var_39;
                          MR_Word Var_63;
                          MR_Word Var_65;
                          MR_Word Var_67;

                          mercury__io__output_stream_3_p_0(&ErrorStream_19);
                          FatalErrorSpecs0_20 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 1))));
                          NonFatalErrorSpecs0_21 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 3))));
                          Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FatalErrorSpecs0_20, NonFatalErrorSpecs0_21);
                          parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_19, Globals_9, Var_39);
                          Var_63 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 0))));
                          Var_65 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 2))));
                          Var_67 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 4))));
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                            *Errors_14 = base;
                            MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
                            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(0, base, 2) = ((MR_Box) (Var_65));
                            MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(0, base, 4) = ((MR_Box) (Var_67));
                          }
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_86;
                      MR_Word Var_88;
                      MR_Word Var_90;
                      MR_Word ErrorStream_107 = ((MR_Word) ((MR_hl_field(1, ReadDoneMsg_11, (MR_Integer) 0))));
                      MR_Word FatalErrorSpecs0_108 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 1))));
                      MR_Word NonFatalErrorSpecs0_109 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 3))));
                      MR_Word Var_111;

                      Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FatalErrorSpecs0_108, NonFatalErrorSpecs0_109);
                      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_107, Globals_9, Var_111);
                      Var_86 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 0))));
                      Var_88 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 2))));
                      Var_90 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 4))));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        *Errors_14 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (Var_86));
                        MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, base, 2) = ((MR_Box) (Var_88));
                        MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, base, 4) = ((MR_Box) (Var_90));
                      }
                    }
                    break;
                }
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
              break;
            case (MR_Integer) 2:
              *Errors_14 = Errors0_13;
              break;
          }
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word FatalErrors0_16 = ((MR_Word) ((MR_hl_field(0, Errors0_13, (MR_Integer) 0))));

        succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors0_16, ((MR_Box) ((MR_Integer) 0)));
        if (succeeded)
        {
          parse_tree__read_modules__output_read_done_msg_4_p_0(ReadDoneMsg_11, (MR_String) "not found.\n");
          *Errors_14 = parse_tree__read_modules__no_file_errors_ignored_0_f_0();
        }
        else
        {
          parse_tree__read_modules__output_read_done_msg_4_p_0(ReadDoneMsg_11, (MR_String) "done.\n");
          *Errors_14 = Errors0_13;
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__read_modules__output_read_done_msg_4_p_0(
  MR_Word ReadDoneMsg_5,
  MR_String Msg_6)
{
  switch (MR_tag((MR_Word) ReadDoneMsg_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ReadDoneMsg_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Stream_8;

            mercury__io__output_stream_3_p_0(&Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, Msg_6);
            mercury__io__flush_output_3_p_0(Stream_8);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stream_13 = ((MR_Word) ((MR_hl_field(1, ReadDoneMsg_5, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_13, Msg_6);
        mercury__io__flush_output_3_p_0(Stream_13);
      }
      break;
  }
}

static MR_Word MR_CALL 
parse_tree__read_modules__no_file_errors_ignored_0_f_0(void)
{
  MR_Word Errors_2;
  MR_Word Var_3;
  MR_Word Var_6;

  Var_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
  Var_6 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
  {
    Errors_2 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Errors_2, 0) = ((MR_Box) (Var_3));
    MR_hl_field(0, Errors_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Errors_2, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, Errors_2, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Errors_2, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return Errors_2;
}

static void MR_CALL 
parse_tree__read_modules__read_module_begin_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadReasonMsg_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word FileKind_15,
  MR_String * FileName_16,
  MR_Word * ReadDoneMsg_17,
  MR_Word * SearchDirs_18)
{
  MR_Word Ext_21;
  MR_Word VeryVerbose_35;
  MR_String _ExtStr_20;

  parse_tree__file_kind__file_kind_to_extension_3_p_0(FileKind_15, &_ExtStr_20, &Ext_21);
  switch (Search_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_33;

        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_11, (MR_String) "predicate \140parse_tree.read_modules.read_module_begin\'/10", (MR_Integer) 1, Ext_21, ModuleName_14, FileName_16);
        Var_33 = mercury__dir__this_directory_0_f_0();
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SearchDirs_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_33));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        parse_tree__file_names__module_name_to_search_file_name_7_p_0(Globals_11, (MR_String) "predicate \140parse_tree.read_modules.read_module_begin\'/10", Ext_21, ModuleName_14, FileName_16);
        switch (MR_tag((MR_Word) FileKind_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 685, SearchDirs_18);
            break;
          case (MR_Integer) 1:
            libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 685, SearchDirs_18);
            break;
          case (MR_Integer) 2:
            libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 686, SearchDirs_18);
            break;
        }
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 73, &VeryVerbose_35);
  switch (VeryVerbose_35) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *ReadDoneMsg_17 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_String Msg_36;
        MR_Word Stream_37;

        switch (MR_tag((MR_Word) ReadReasonMsg_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_70;

              Var_70 = mercury__string__f_43_43_2_f_0(*FileName_16, (MR_String) "\'... ");
              Msg_36 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_70);
              mercury__io__output_stream_3_p_0(&Stream_37);
              *ReadDoneMsg_17 = (MR_Word) ((MR_Unsigned) 4U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleName_59 = ((MR_Word) ((MR_hl_field(1, ReadReasonMsg_12, (MR_Integer) 0))));
              MR_String Var_61;

              Var_61 = mercury__string__f_43_43_2_f_0(*FileName_16, (MR_String) "\'... ");
              Msg_36 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_61);
              libs__globals__get_progress_output_stream_5_p_0(Globals_11, ModuleName_59, &Stream_37);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *ReadDoneMsg_17 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Stream_37));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleName_58 = ((MR_Word) ((MR_hl_field(2, ReadReasonMsg_12, (MR_Integer) 0))));
              MR_String Var_64;

              Var_64 = mercury__string__f_43_43_2_f_0(*FileName_16, (MR_String) "\'... ");
              Msg_36 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading old version of \140", Var_64);
              libs__globals__get_progress_output_stream_5_p_0(Globals_11, ModuleName_58, &Stream_37);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *ReadDoneMsg_17 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Stream_37));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_38 = ((MR_Word) ((MR_hl_field(3, ReadReasonMsg_12, (MR_Integer) 0))));
              MR_String Var_67;

              Var_67 = mercury__string__f_43_43_2_f_0(*FileName_16, (MR_String) "\'... ");
              Msg_36 = mercury__string__f_43_43_2_f_0((MR_String) "% Getting dependencies for \140", Var_67);
              libs__globals__get_progress_output_stream_5_p_0(Globals_11, ModuleName_38, &Stream_37);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *ReadDoneMsg_17 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Stream_37));
              }
            }
            break;
        }
        mercury__io__write_string_4_p_0(Stream_37, Msg_36);
        mercury__io__flush_output_3_p_0(Stream_37);
      }
      break;
  }
}

MR_Word MR_CALL 
parse_tree__read_modules__init_have_read_module_maps_0_f_0(void)
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
parse_tree__read_modules____Unify____have_read_module_int0_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_read_module_int0_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int0_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_read_module_int0_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int1_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_read_module_int1_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int1_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_read_module_int1_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int2_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_read_module_int2_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int2_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_read_module_int2_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int3_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_read_module_int3_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int3_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_read_module_int3_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_read_module_key_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_read_module_key_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_read_module_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_read_module_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_read_module_maps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_read_module_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_msrc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_read_module_msrc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_msrc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_read_module_msrc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_plain_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_read_module_plain_opt_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_plain_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_read_module_plain_opt_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_read_module_src_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_read_module_src_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_trans_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_read_module_trans_opt_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_trans_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_read_module_trans_opt_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int0_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int1_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int2_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int3_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_map_1);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_msrc_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_plain_opt_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_src_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_trans_opt_map_0);
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
