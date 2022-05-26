/*
** Automatically generated from `read_modules.m'
** by the Mercury compiler,
** version 22.01.2-beta-2022-05-26
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
#include "parse_tree.error_util.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[5];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0;

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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2;

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

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int3__930__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45);

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int2__896__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45);

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int1__862__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45);

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int0__828__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45);

static void MR_CALL 
parse_tree__read_modules____Compare____read_done_msg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____read_done_msg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int3_13_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int2_13_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int1_13_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int0_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__read_modules__read_module_end_file_11_p_0(
  MR_Word Globals_12,
  MR_Word FileKind_13,
  MR_Word ReadDoneMsg_14,
  MR_String FileName_15,
  MR_Word MaybeTimestampRes_16,
  MR_Word * MaybeTimestamp_17,
  MR_Word ModuleSpecs_18,
  MR_Word * Specs_19,
  MR_Word Errors_20);

static void MR_CALL 
parse_tree__read_modules__read_module_begin_from_file_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadReasonMsg_12,
  MR_Word Search_13,
  MR_String FileName_14,
  MR_String FileNameDotM_15,
  MR_Word * DefaultModuleName_16,
  MR_Word * ReadDoneMsg_17,
  MR_Word * SearchDirs_18);

static void MR_CALL 
parse_tree__read_modules__read_module_end_module_14_p_0(
  MR_Word Globals_15,
  MR_Word IgnoreErrors_16,
  MR_Word FileKind_17,
  MR_Word ReadDoneMsg_18,
  MR_Word MaybeFileNameAndStream_19,
  MR_String FileName0_20,
  MR_String * FileName_21,
  MR_Word MaybeTimestampRes_22,
  MR_Word * MaybeTimestamp_23,
  MR_Word ModuleSpecs_24,
  MR_Word * Specs_25,
  MR_Word Errors_26);

static void MR_CALL 
parse_tree__read_modules__check_timestamp_report_if_needed_and_missing_6_p_0(
  MR_Word Globals_7,
  MR_String FileName_8,
  MR_Word MaybeTimestampRes_9,
  MR_Word * MaybeTimestamp_10);

static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_8_p_0(
  MR_Word Globals_9,
  MR_Word FileKind_10,
  MR_Word ReadDoneMsg_11,
  MR_Word Errors_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

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
parse_tree__read_modules____Unify____have_read_module_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

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


static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[10][2];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_2[8][3];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_3[4][1];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_4[1][5];




static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int1_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int2_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int3_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[3]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[4]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[6]))
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_3[4][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0 = {
  (MR_String) "have_successfully_read_module",
  INT16_C(5),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_1 = {
  (MR_String) "tried_to_read_module_failed",
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

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_1
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0
};

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
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
  {     parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1 },
  {     parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1 },
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0) },
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0) },
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0) },
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0) },
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
  {     parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1 },
  {     parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1,

};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_map_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_map_2_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_map_2_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__pti_tree234_2__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2) },
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
  {     parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0 },
  {     parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0 },
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0) },
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0) },
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0) },
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  {     parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0 },
  {     parse_tree__read_modules__parse_tree__read_modules__enum_ordinal_ordered_maybe_ignore_errors_0 },
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
  {     parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_read_done_msg_0 },
  {     parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_read_done_msg_0 },
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
  {     parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_read_reason_msg_0 },
  {     parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_read_reason_msg_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_read_reason_msg_0,

};

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int3__930__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_16, HeadVar__2_45);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int2__896__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_16, HeadVar__2_45);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int1__862__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_16, HeadVar__2_45);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int0__828__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_16, HeadVar__2_45);
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____read_reason_msg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

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

                  mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Var_33, ArgY1_27);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____read_reason_msg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_9, ArgY1_10);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____read_done_msg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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

                  mercury__io____Compare____output_stream_0_0(HeadVar__1_1, Var_13, ArgY1_9);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____read_done_msg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mercury__io____Unify____output_stream_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_trans_opt_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_trans_opt_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_plain_opt_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_plain_opt_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_msrc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_msrc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
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
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));

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
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0(
  MR_Word TypeInfo_for_Key_6,
  MR_Word TypeInfo_for_PT_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_9_9;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_PT_7));
    }
    mercury__tree234____Compare____tree234_2_0(TypeInfo_for_Key_6, TypeInfo_9_9, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0(
  MR_Word TypeInfo_for_Key_5,
  MR_Word TypeInfo_for_PT_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_8_8;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_PT_6));
    }
    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_Key_5, TypeInfo_8_8, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0(
  MR_Word TypeInfo_for_Kind_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
      MR_Word SubResult1_6;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0(TypeInfo_for_Kind_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0(
  MR_Word TypeInfo_for_Kind_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Kind_9, ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int3_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int3_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int2_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int2_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int1_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int1_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int0_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int0_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0(
  MR_Word TypeInfo_for_PT_30,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_28 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_29 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_28 == CastY_29);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
      MR_Box Var_37 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_39 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Box ArgY3_11 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2));
        MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
        MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4))));
        MR_Word SubResult1_6;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_39, ArgY1_5);
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
        {
          MR_Word SubResult2_9;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_1[7]), &SubResult2_9, ((MR_Box) (Var_38)), ((MR_Box) (ArgY2_8)));
          succeeded = (SubResult2_9 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_9;
          else
          {
            MR_Word SubResult3_12;

            mercury__builtin__compare_3_p_0(TypeInfo_for_PT_30, &SubResult3_12, Var_37, ArgY3_11);
            succeeded = (SubResult3_12 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult3_12;
            else
            {
              MR_Word SubResult4_15;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_1[8]), &SubResult4_15, ((MR_Box) (Var_36)), ((MR_Box) (ArgY4_14)));
              succeeded = (SubResult4_15 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult4_15;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (Var_35)), ((MR_Box) (ArgY5_17)));
            }
          }
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
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_14 == CastX_13);
    }
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_20_20;
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;
      MR_Box ArgX3_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
      MR_Box ArgY3_8;
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10;
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
        ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&parse_tree__read_modules_scalar_common_1[7]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
          if (succeeded)
          {
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_PT_17, ArgX3_7, ArgY3_8);
            if (succeeded)
            {
              TypeInfo_19_19 = (MR_Word) (&parse_tree__read_modules_scalar_common_1[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
              if (succeeded)
              {
                TypeInfo_20_20 = (MR_Word) (&parse_tree__read_modules_scalar_common_1[9]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_some_int_9_p_0(
  MR_Word HaveReadModuleMaps_10,
  MR_Word ModuleName_11,
  MR_Word IntFileKind_12,
  MR_Word ReturnTimestamp_13,
  MR_String * FileName_14,
  MR_Word * MaybeTimestamp_15,
  MR_Word * ParseTreeSomeInt_16,
  MR_Word * Specs_17,
  MR_Word * Errors_18)
{
  {
    MR_bool succeeded;
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps_10, (MR_Integer) 5))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps_10, (MR_Integer) 4))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps_10, (MR_Integer) 3))));
    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps_10, (MR_Integer) 2))));

    switch (IntFileKind_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ParseTreeInt0_19;

          succeeded = parse_tree__read_modules__find_read_module_int0_8_p_0(Var_60, ModuleName_11, ReturnTimestamp_13, FileName_14, MaybeTimestamp_15, &ParseTreeInt0_19, Specs_17, Errors_18);
          if (succeeded)
          {
            *ParseTreeSomeInt_16 = (MR_Word) ((MR_Word) (ParseTreeInt0_19));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ParseTreeInt1_20;

          succeeded = parse_tree__read_modules__find_read_module_int1_8_p_0(Var_59, ModuleName_11, ReturnTimestamp_13, FileName_14, MaybeTimestamp_15, &ParseTreeInt1_20, Specs_17, Errors_18);
          if (succeeded)
          {
            *ParseTreeSomeInt_16 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ParseTreeInt1_20)));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ParseTreeInt2_21;

          succeeded = parse_tree__read_modules__find_read_module_int2_8_p_0(Var_58, ModuleName_11, ReturnTimestamp_13, FileName_14, MaybeTimestamp_15, &ParseTreeInt2_21, Specs_17, Errors_18);
          if (succeeded)
          {
            *ParseTreeSomeInt_16 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (ParseTreeInt2_21)));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ParseTreeInt3_22;

          succeeded = parse_tree__read_modules__find_read_module_int3_8_p_0(Var_57, ModuleName_11, ReturnTimestamp_13, FileName_14, MaybeTimestamp_15, &ParseTreeInt3_22, Specs_17, Errors_18);
          if (succeeded)
          {
            *ParseTreeSomeInt_16 = (MR_Word) (MR_mkword(MR_mktag(3), (MR_Word) (ParseTreeInt3_22)));
            succeeded = MR_TRUE;
          }
        }
        break;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_src_8_p_0(
  MR_Word HaveReadModuleMapSrc_9,
  MR_Word ModuleName_10,
  MR_Word ReturnTimestamp_11,
  MR_String * FileName_12,
  MR_Word * MaybeTimestamp_13,
  MR_Word * ParseTreeSrc_14,
  MR_Word * Specs_15,
  MR_Word * Errors_16)
{
  {
    MR_bool succeeded;
    MR_Word HaveReadModule_17;
    MR_Word MaybeTimestamp0_18;
    MR_Box conv0_HaveReadModule_17;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[0]), HaveReadModuleMapSrc_9, ((MR_Box) (ModuleName_10)), &conv0_HaveReadModule_17);
    if (succeeded)
    {
      HaveReadModule_17 = ((MR_Word) (conv0_HaveReadModule_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (HaveReadModule_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *FileName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 0))));
        MaybeTimestamp0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 1))));
        *ParseTreeSrc_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 2))));
        *Specs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 3))));
        *Errors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 4))));
        switch (ReturnTimestamp_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((MaybeTimestamp0_18 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
            else
              *MaybeTimestamp_13 = MaybeTimestamp0_18;
            break;
          case (MR_Integer) 1:
            *MaybeTimestamp_13 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int3_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int3__930__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int3_13_p_0(
  MR_Word Globals_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_String * FileName_17,
  MR_Word ReturnTimestamp_18,
  MR_Word * MaybeTimestamp_19,
  MR_Word * ParseTreeInt3_20,
  MR_Word * Specs_21,
  MR_Word * Errors_22,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_33,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_34)
{
  {
    MR_bool succeeded;
    MR_Word OrigHaveReadModuleMapInt3_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 5))));
    MR_String FileNamePrime_26;
    MR_Word MaybeTimestampPrime_27;
    MR_Word ParseTreeInt3Prime_28;
    MR_Word SpecsPrime_29;
    MR_Word ErrorsPrime_30;

    succeeded = parse_tree__read_modules__find_read_module_int3_8_p_0(OrigHaveReadModuleMapInt3_25, ModuleName_16, ReturnTimestamp_18, &FileNamePrime_26, &MaybeTimestampPrime_27, &ParseTreeInt3Prime_28, &SpecsPrime_29, &ErrorsPrime_30);
    if (succeeded)
    {
      *FileName_17 = FileNamePrime_26;
      *MaybeTimestamp_19 = MaybeTimestampPrime_27;
      *ParseTreeInt3_20 = ParseTreeInt3Prime_28;
      *Specs_21 = SpecsPrime_29;
      *Errors_22 = ErrorsPrime_30;
      *STATE_VARIABLE_HaveReadModuleMaps_34 = STATE_VARIABLE_HaveReadModuleMaps_0_33;
    }
    else
    {
      MR_Word HaveReadModuleMapInt3_32;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_72;
      MR_Word Var_73;

      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (ModuleName_16));
      }
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_18));
      }
      parse_tree__read_modules__read_module_int3_13_p_0(Globals_14, Var_37, (MR_Integer) 1, Search_15, ModuleName_16, FileName_17, Var_39, MaybeTimestamp_19, ParseTreeInt3_20, Specs_21, Errors_22);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 0)), *Errors_22);
      if (succeeded)
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]), ((MR_Box) (ModuleName_16)), ((MR_Box) ((MR_Unsigned) 0U)), OrigHaveReadModuleMapInt3_25, &HaveReadModuleMapInt3_32);
      else
      {
        MR_Word Var_42;
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt3_20, (MR_Integer) 0))));
        MR_Word HaveReadModule_47;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__read_modules__maybe_read_module_int3_13_p_0_1));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ModuleName_16));
          MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Var_45));
        }
        mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140parse_tree.read_modules.maybe_read_module_int3\'/13", (MR_String) "ModuleName != module name in ParseTreeInt3");
        {
          HaveReadModule_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 0) = ((MR_Box) (*FileName_17));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 1) = ((MR_Box) (*MaybeTimestamp_19));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 2) = ((MR_Box) (*ParseTreeInt3_20));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 3) = ((MR_Box) (*Specs_21));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 4) = ((MR_Box) (*Errors_22));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]), ((MR_Box) (ModuleName_16)), ((MR_Box) (HaveReadModule_47)), OrigHaveReadModuleMapInt3_25, &HaveReadModuleMapInt3_32);
      }
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 0))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 1))));
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 2))));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 3))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 4))));
      Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 6))));
      Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_HaveReadModuleMaps_34 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (HaveReadModuleMapInt3_32));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_73));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int3_8_p_0(
  MR_Word HaveReadModuleMapInt3_9,
  MR_Word ModuleName_10,
  MR_Word ReturnTimestamp_11,
  MR_String * FileName_12,
  MR_Word * MaybeTimestamp_13,
  MR_Word * ParseTreeInt3_14,
  MR_Word * Specs_15,
  MR_Word * Errors_16)
{
  {
    MR_bool succeeded;
    MR_Word HaveReadModule_17;
    MR_Word MaybeTimestamp0_18;
    MR_Box conv0_HaveReadModule_17;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]), HaveReadModuleMapInt3_9, ((MR_Box) (ModuleName_10)), &conv0_HaveReadModule_17);
    if (succeeded)
    {
      HaveReadModule_17 = ((MR_Word) (conv0_HaveReadModule_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (HaveReadModule_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *FileName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 0))));
        MaybeTimestamp0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 1))));
        *ParseTreeInt3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 2))));
        *Specs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 3))));
        *Errors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 4))));
        switch (ReturnTimestamp_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((MaybeTimestamp0_18 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
            else
              *MaybeTimestamp_13 = MaybeTimestamp0_18;
            break;
          case (MR_Integer) 1:
            *MaybeTimestamp_13 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int2_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int2__896__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int2_13_p_0(
  MR_Word Globals_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_String * FileName_17,
  MR_Word ReturnTimestamp_18,
  MR_Word * MaybeTimestamp_19,
  MR_Word * ParseTreeInt2_20,
  MR_Word * Specs_21,
  MR_Word * Errors_22,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_33,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_34)
{
  {
    MR_bool succeeded;
    MR_Word OrigHaveReadModuleMapInt2_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 4))));
    MR_String FileNamePrime_26;
    MR_Word MaybeTimestampPrime_27;
    MR_Word ParseTreeInt2Prime_28;
    MR_Word SpecsPrime_29;
    MR_Word ErrorsPrime_30;

    succeeded = parse_tree__read_modules__find_read_module_int2_8_p_0(OrigHaveReadModuleMapInt2_25, ModuleName_16, ReturnTimestamp_18, &FileNamePrime_26, &MaybeTimestampPrime_27, &ParseTreeInt2Prime_28, &SpecsPrime_29, &ErrorsPrime_30);
    if (succeeded)
    {
      *FileName_17 = FileNamePrime_26;
      *MaybeTimestamp_19 = MaybeTimestampPrime_27;
      *ParseTreeInt2_20 = ParseTreeInt2Prime_28;
      *Specs_21 = SpecsPrime_29;
      *Errors_22 = ErrorsPrime_30;
      *STATE_VARIABLE_HaveReadModuleMaps_34 = STATE_VARIABLE_HaveReadModuleMaps_0_33;
    }
    else
    {
      MR_Word HaveReadModuleMapInt2_32;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;

      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (ModuleName_16));
      }
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_18));
      }
      parse_tree__read_modules__read_module_int2_13_p_0(Globals_14, Var_37, (MR_Integer) 1, Search_15, ModuleName_16, FileName_17, Var_39, MaybeTimestamp_19, ParseTreeInt2_20, Specs_21, Errors_22);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 0)), *Errors_22);
      if (succeeded)
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]), ((MR_Box) (ModuleName_16)), ((MR_Box) ((MR_Unsigned) 0U)), OrigHaveReadModuleMapInt2_25, &HaveReadModuleMapInt2_32);
      else
      {
        MR_Word Var_42;
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt2_20, (MR_Integer) 0))));
        MR_Word HaveReadModule_47;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__read_modules__maybe_read_module_int2_13_p_0_1));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ModuleName_16));
          MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Var_45));
        }
        mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140parse_tree.read_modules.maybe_read_module_int2\'/13", (MR_String) "ModuleName != module name in ParseTreeInt2");
        {
          HaveReadModule_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 0) = ((MR_Box) (*FileName_17));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 1) = ((MR_Box) (*MaybeTimestamp_19));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 2) = ((MR_Box) (*ParseTreeInt2_20));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 3) = ((MR_Box) (*Specs_21));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 4) = ((MR_Box) (*Errors_22));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]), ((MR_Box) (ModuleName_16)), ((MR_Box) (HaveReadModule_47)), OrigHaveReadModuleMapInt2_25, &HaveReadModuleMapInt2_32);
      }
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 0))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 1))));
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 2))));
      Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 3))));
      Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 5))));
      Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 6))));
      Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_HaveReadModuleMaps_34 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HaveReadModuleMapInt2_32));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_76));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int2_8_p_0(
  MR_Word HaveReadModuleMapInt2_9,
  MR_Word ModuleName_10,
  MR_Word ReturnTimestamp_11,
  MR_String * FileName_12,
  MR_Word * MaybeTimestamp_13,
  MR_Word * ParseTreeInt2_14,
  MR_Word * Specs_15,
  MR_Word * Errors_16)
{
  {
    MR_bool succeeded;
    MR_Word HaveReadModule_17;
    MR_Word MaybeTimestamp0_18;
    MR_Box conv0_HaveReadModule_17;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]), HaveReadModuleMapInt2_9, ((MR_Box) (ModuleName_10)), &conv0_HaveReadModule_17);
    if (succeeded)
    {
      HaveReadModule_17 = ((MR_Word) (conv0_HaveReadModule_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (HaveReadModule_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *FileName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 0))));
        MaybeTimestamp0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 1))));
        *ParseTreeInt2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 2))));
        *Specs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 3))));
        *Errors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 4))));
        switch (ReturnTimestamp_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((MaybeTimestamp0_18 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
            else
              *MaybeTimestamp_13 = MaybeTimestamp0_18;
            break;
          case (MR_Integer) 1:
            *MaybeTimestamp_13 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int1_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int1__862__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int1_13_p_0(
  MR_Word Globals_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_String * FileName_17,
  MR_Word ReturnTimestamp_18,
  MR_Word * MaybeTimestamp_19,
  MR_Word * ParseTreeInt1_20,
  MR_Word * Specs_21,
  MR_Word * Errors_22,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_33,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_34)
{
  {
    MR_bool succeeded;
    MR_Word OrigHaveReadModuleMapInt1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 3))));
    MR_String FileNamePrime_26;
    MR_Word MaybeTimestampPrime_27;
    MR_Word ParseTreeInt1Prime_28;
    MR_Word SpecsPrime_29;
    MR_Word ErrorsPrime_30;

    succeeded = parse_tree__read_modules__find_read_module_int1_8_p_0(OrigHaveReadModuleMapInt1_25, ModuleName_16, ReturnTimestamp_18, &FileNamePrime_26, &MaybeTimestampPrime_27, &ParseTreeInt1Prime_28, &SpecsPrime_29, &ErrorsPrime_30);
    if (succeeded)
    {
      *FileName_17 = FileNamePrime_26;
      *MaybeTimestamp_19 = MaybeTimestampPrime_27;
      *ParseTreeInt1_20 = ParseTreeInt1Prime_28;
      *Specs_21 = SpecsPrime_29;
      *Errors_22 = ErrorsPrime_30;
      *STATE_VARIABLE_HaveReadModuleMaps_34 = STATE_VARIABLE_HaveReadModuleMaps_0_33;
    }
    else
    {
      MR_Word HaveReadModuleMapInt1_32;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;

      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (ModuleName_16));
      }
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_18));
      }
      parse_tree__read_modules__read_module_int1_13_p_0(Globals_14, Var_37, (MR_Integer) 1, Search_15, ModuleName_16, FileName_17, Var_39, MaybeTimestamp_19, ParseTreeInt1_20, Specs_21, Errors_22);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 0)), *Errors_22);
      if (succeeded)
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[2]), ((MR_Box) (ModuleName_16)), ((MR_Box) ((MR_Unsigned) 0U)), OrigHaveReadModuleMapInt1_25, &HaveReadModuleMapInt1_32);
      else
      {
        MR_Word Var_42;
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt1_20, (MR_Integer) 0))));
        MR_Word HaveReadModule_47;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__read_modules__maybe_read_module_int1_13_p_0_1));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ModuleName_16));
          MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Var_45));
        }
        mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140parse_tree.read_modules.maybe_read_module_int1\'/13", (MR_String) "ModuleName != module name in ParseTreeInt1");
        {
          HaveReadModule_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 0) = ((MR_Box) (*FileName_17));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 1) = ((MR_Box) (*MaybeTimestamp_19));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 2) = ((MR_Box) (*ParseTreeInt1_20));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 3) = ((MR_Box) (*Specs_21));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 4) = ((MR_Box) (*Errors_22));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[2]), ((MR_Box) (ModuleName_16)), ((MR_Box) (HaveReadModule_47)), OrigHaveReadModuleMapInt1_25, &HaveReadModuleMapInt1_32);
      }
      Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 0))));
      Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 1))));
      Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 2))));
      Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 4))));
      Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 5))));
      Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 6))));
      Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_HaveReadModuleMaps_34 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (HaveReadModuleMapInt1_32));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_83));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int1_8_p_0(
  MR_Word HaveReadModuleMapInt1_9,
  MR_Word ModuleName_10,
  MR_Word ReturnTimestamp_11,
  MR_String * FileName_12,
  MR_Word * MaybeTimestamp_13,
  MR_Word * ParseTreeInt1_14,
  MR_Word * Specs_15,
  MR_Word * Errors_16)
{
  {
    MR_bool succeeded;
    MR_Word HaveReadModule_17;
    MR_Word MaybeTimestamp0_18;
    MR_Box conv0_HaveReadModule_17;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[2]), HaveReadModuleMapInt1_9, ((MR_Box) (ModuleName_10)), &conv0_HaveReadModule_17);
    if (succeeded)
    {
      HaveReadModule_17 = ((MR_Word) (conv0_HaveReadModule_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (HaveReadModule_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *FileName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 0))));
        MaybeTimestamp0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 1))));
        *ParseTreeInt1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 2))));
        *Specs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 3))));
        *Errors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 4))));
        switch (ReturnTimestamp_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((MaybeTimestamp0_18 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
            else
              *MaybeTimestamp_13 = MaybeTimestamp0_18;
            break;
          case (MR_Integer) 1:
            *MaybeTimestamp_13 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int0_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int0__828__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int0_13_p_0(
  MR_Word Globals_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_String * FileName_17,
  MR_Word ReturnTimestamp_18,
  MR_Word * MaybeTimestamp_19,
  MR_Word * ParseTreeInt0_20,
  MR_Word * Specs_21,
  MR_Word * Errors_22,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_33,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_34)
{
  {
    MR_bool succeeded;
    MR_Word OrigHaveReadModuleMapInt0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 2))));
    MR_String FileNamePrime_26;
    MR_Word MaybeTimestampPrime_27;
    MR_Word ParseTreeInt0Prime_28;
    MR_Word SpecsPrime_29;
    MR_Word ErrorsPrime_30;

    succeeded = parse_tree__read_modules__find_read_module_int0_8_p_0(OrigHaveReadModuleMapInt0_25, ModuleName_16, ReturnTimestamp_18, &FileNamePrime_26, &MaybeTimestampPrime_27, &ParseTreeInt0Prime_28, &SpecsPrime_29, &ErrorsPrime_30);
    if (succeeded)
    {
      *FileName_17 = FileNamePrime_26;
      *MaybeTimestamp_19 = MaybeTimestampPrime_27;
      *ParseTreeInt0_20 = ParseTreeInt0Prime_28;
      *Specs_21 = SpecsPrime_29;
      *Errors_22 = ErrorsPrime_30;
      *STATE_VARIABLE_HaveReadModuleMaps_34 = STATE_VARIABLE_HaveReadModuleMaps_0_33;
    }
    else
    {
      MR_Word HaveReadModuleMapInt0_32;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;

      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (ModuleName_16));
      }
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_18));
      }
      parse_tree__read_modules__read_module_int0_13_p_0(Globals_14, Var_37, (MR_Integer) 1, Search_15, ModuleName_16, FileName_17, Var_39, MaybeTimestamp_19, ParseTreeInt0_20, Specs_21, Errors_22);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 0)), *Errors_22);
      if (succeeded)
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[1]), ((MR_Box) (ModuleName_16)), ((MR_Box) ((MR_Unsigned) 0U)), OrigHaveReadModuleMapInt0_25, &HaveReadModuleMapInt0_32);
      else
      {
        MR_Word Var_42;
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt0_20, (MR_Integer) 0))));
        MR_Word HaveReadModule_47;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__read_modules__maybe_read_module_int0_13_p_0_1));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ModuleName_16));
          MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Var_45));
        }
        mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140parse_tree.read_modules.maybe_read_module_int0\'/13", (MR_String) "ModuleName != module name in ParseTreeInt0");
        {
          HaveReadModule_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 0) = ((MR_Box) (*FileName_17));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 1) = ((MR_Box) (*MaybeTimestamp_19));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 2) = ((MR_Box) (*ParseTreeInt0_20));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 3) = ((MR_Box) (*Specs_21));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 4) = ((MR_Box) (*Errors_22));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[1]), ((MR_Box) (ModuleName_16)), ((MR_Box) (HaveReadModule_47)), OrigHaveReadModuleMapInt0_25, &HaveReadModuleMapInt0_32);
      }
      Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 0))));
      Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 1))));
      Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 3))));
      Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 4))));
      Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 5))));
      Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 6))));
      Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_33, (MR_Integer) 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_HaveReadModuleMaps_34 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (HaveReadModuleMapInt0_32));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_89));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int0_8_p_0(
  MR_Word HaveReadModuleMapInt0_9,
  MR_Word ModuleName_10,
  MR_Word ReturnTimestamp_11,
  MR_String * FileName_12,
  MR_Word * MaybeTimestamp_13,
  MR_Word * ParseTreeInt0_14,
  MR_Word * Specs_15,
  MR_Word * Errors_16)
{
  {
    MR_bool succeeded;
    MR_Word HaveReadModule_17;
    MR_Word MaybeTimestamp0_18;
    MR_Box conv0_HaveReadModule_17;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[1]), HaveReadModuleMapInt0_9, ((MR_Box) (ModuleName_10)), &conv0_HaveReadModule_17);
    if (succeeded)
    {
      HaveReadModule_17 = ((MR_Word) (conv0_HaveReadModule_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (HaveReadModule_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *FileName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 0))));
        MaybeTimestamp0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 1))));
        *ParseTreeInt0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 2))));
        *Specs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 3))));
        *Errors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 4))));
        switch (ReturnTimestamp_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((MaybeTimestamp0_18 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
            else
              *MaybeTimestamp_13 = MaybeTimestamp0_18;
            break;
          case (MR_Integer) 1:
            *MaybeTimestamp_13 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_trans_opt_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_String * FileName_11,
  MR_Word * ParseTreeTransOpt_12,
  MR_Word * Specs_13,
  MR_Word * Errors_14)
{
  {
    MR_Word ReadReasonMsg_16;
    MR_String FileName0_20;
    MR_Word ReadDoneMsg_21;
    MR_Word SearchDirs_22;
    MR_Word MaybeFileNameAndStream_23;
    MR_Word ModuleSpecs_24;
    MR_Word _MaybeTimestamp_25;

    {
      ReadReasonMsg_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ReadReasonMsg_16, 0) = ((MR_Box) (ModuleName_10));
    }
    parse_tree__read_modules__read_module_begin_10_p_0(Globals_9, ReadReasonMsg_16, (MR_Integer) 0, ModuleName_10, (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__read_modules_scalar_common_3[2])), &FileName0_20, &ReadDoneMsg_21, &SearchDirs_22);
    libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_22, FileName0_20, &MaybeFileNameAndStream_23);
    parse_tree__parse_module__actually_read_module_trans_opt_8_p_0(Globals_9, ModuleName_10, MaybeFileNameAndStream_23, ParseTreeTransOpt_12, &ModuleSpecs_24, Errors_14);
    parse_tree__read_modules__read_module_end_module_14_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__read_modules_scalar_common_3[2])), ReadDoneMsg_21, MaybeFileNameAndStream_23, FileName0_20, FileName_11, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_25, ModuleSpecs_24, Specs_13, *Errors_14);
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_plain_opt_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_String * FileName_11,
  MR_Word * ParseTreePlainOpt_12,
  MR_Word * Specs_13,
  MR_Word * Errors_14)
{
  {
    MR_Word ReadReasonMsg_16;
    MR_String FileName0_20;
    MR_Word ReadDoneMsg_21;
    MR_Word SearchDirs_22;
    MR_Word MaybeFileNameAndStream_23;
    MR_Word ModuleSpecs_24;
    MR_Word _MaybeTimestamp_25;

    {
      ReadReasonMsg_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ReadReasonMsg_16, 0) = ((MR_Box) (ModuleName_10));
    }
    parse_tree__read_modules__read_module_begin_10_p_0(Globals_9, ReadReasonMsg_16, (MR_Integer) 0, ModuleName_10, (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__read_modules_scalar_common_3[0])), &FileName0_20, &ReadDoneMsg_21, &SearchDirs_22);
    libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_22, FileName0_20, &MaybeFileNameAndStream_23);
    parse_tree__parse_module__actually_read_module_plain_opt_8_p_0(Globals_9, ModuleName_10, MaybeFileNameAndStream_23, ParseTreePlainOpt_12, &ModuleSpecs_24, Errors_14);
    parse_tree__read_modules__read_module_end_module_14_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__read_modules_scalar_common_3[0])), ReadDoneMsg_21, MaybeFileNameAndStream_23, FileName0_20, FileName_11, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_25, ModuleSpecs_24, Specs_13, *Errors_14);
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int3_13_p_0(
  MR_Word Globals_14,
  MR_Word ReadReasonMsg_15,
  MR_Word IgnoreErrors_16,
  MR_Word Search_17,
  MR_Word ModuleName_18,
  MR_String * FileName_19,
  MR_Word ReadModuleAndTimestamps_20,
  MR_Word * MaybeTimestamp_21,
  MR_Word * ParseTreeInt3_22,
  MR_Word * Specs_23,
  MR_Word * Errors_24)
{
  {
    MR_String FileName0_26;
    MR_Word ReadDoneMsg_27;
    MR_Word SearchDirs_28;
    MR_Word MaybeFileNameAndStream_29;
    MR_Word MaybeTimestampRes_30;
    MR_Word ModuleSpecs_31;

    parse_tree__read_modules__read_module_begin_10_p_0(Globals_14, ReadReasonMsg_15, Search_17, ModuleName_18, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), &FileName0_26, &ReadDoneMsg_27, &SearchDirs_28);
    libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_28, FileName0_26, &MaybeFileNameAndStream_29);
    parse_tree__parse_module__actually_read_module_int3_11_p_0(Globals_14, ModuleName_18, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_29, ReadModuleAndTimestamps_20, &MaybeTimestampRes_30, ParseTreeInt3_22, &ModuleSpecs_31, Errors_24);
    parse_tree__read_modules__read_module_end_module_14_p_0(Globals_14, IgnoreErrors_16, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_27, MaybeFileNameAndStream_29, FileName0_26, FileName_19, MaybeTimestampRes_30, MaybeTimestamp_21, ModuleSpecs_31, Specs_23, *Errors_24);
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_some_int_14_p_0(
  MR_Word Globals_15,
  MR_Word ReadReasonMsg_16,
  MR_Word IgnoreErrors_17,
  MR_Word Search_18,
  MR_Word ModuleName_19,
  MR_Word IntFileKind_20,
  MR_String * FileName_21,
  MR_Word ReadModuleAndTimestamps_22,
  MR_Word * MaybeTimestamp_23,
  MR_Word * ParseTreeSomeInt_24,
  MR_Word * Specs_25,
  MR_Word * Errors_26)
{
  switch (IntFileKind_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_28;

        parse_tree__read_modules__read_module_int0_13_p_0(Globals_15, ReadReasonMsg_16, IgnoreErrors_17, Search_18, ModuleName_19, FileName_21, ReadModuleAndTimestamps_22, MaybeTimestamp_23, &ParseTreeInt0_28, Specs_25, Errors_26);
        *ParseTreeSomeInt_24 = (MR_Word) ((MR_Word) (ParseTreeInt0_28));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_29;

        parse_tree__read_modules__read_module_int1_13_p_0(Globals_15, ReadReasonMsg_16, IgnoreErrors_17, Search_18, ModuleName_19, FileName_21, ReadModuleAndTimestamps_22, MaybeTimestamp_23, &ParseTreeInt1_29, Specs_25, Errors_26);
        *ParseTreeSomeInt_24 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ParseTreeInt1_29)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_30;

        parse_tree__read_modules__read_module_int2_13_p_0(Globals_15, ReadReasonMsg_16, IgnoreErrors_17, Search_18, ModuleName_19, FileName_21, ReadModuleAndTimestamps_22, MaybeTimestamp_23, &ParseTreeInt2_30, Specs_25, Errors_26);
        *ParseTreeSomeInt_24 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (ParseTreeInt2_30)));
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ParseTreeInt3_31;
        MR_String FileName0_52;
        MR_Word ReadDoneMsg_53;
        MR_Word SearchDirs_54;
        MR_Word MaybeFileNameAndStream_55;
        MR_Word MaybeTimestampRes_56;
        MR_Word ModuleSpecs_57;

        parse_tree__read_modules__read_module_begin_10_p_0(Globals_15, ReadReasonMsg_16, Search_18, ModuleName_19, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), &FileName0_52, &ReadDoneMsg_53, &SearchDirs_54);
        libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_54, FileName0_52, &MaybeFileNameAndStream_55);
        parse_tree__parse_module__actually_read_module_int3_11_p_0(Globals_15, ModuleName_19, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_55, ReadModuleAndTimestamps_22, &MaybeTimestampRes_56, &ParseTreeInt3_31, &ModuleSpecs_57, Errors_26);
        parse_tree__read_modules__read_module_end_module_14_p_0(Globals_15, IgnoreErrors_17, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_53, MaybeFileNameAndStream_55, FileName0_52, FileName_21, MaybeTimestampRes_56, MaybeTimestamp_23, ModuleSpecs_57, Specs_25, *Errors_26);
        *ParseTreeSomeInt_24 = (MR_Word) (MR_mkword(MR_mktag(3), (MR_Word) (ParseTreeInt3_31)));
      }
      break;
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int2_13_p_0(
  MR_Word Globals_14,
  MR_Word ReadReasonMsg_15,
  MR_Word IgnoreErrors_16,
  MR_Word Search_17,
  MR_Word ModuleName_18,
  MR_String * FileName_19,
  MR_Word ReadModuleAndTimestamps_20,
  MR_Word * MaybeTimestamp_21,
  MR_Word * ParseTreeInt2_22,
  MR_Word * Specs_23,
  MR_Word * Errors_24)
{
  {
    MR_String FileName0_26;
    MR_Word ReadDoneMsg_27;
    MR_Word SearchDirs_28;
    MR_Word MaybeFileNameAndStream_29;
    MR_Word MaybeTimestampRes_30;
    MR_Word ModuleSpecs_31;

    parse_tree__read_modules__read_module_begin_10_p_0(Globals_14, ReadReasonMsg_15, Search_17, ModuleName_18, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[3])), &FileName0_26, &ReadDoneMsg_27, &SearchDirs_28);
    libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_28, FileName0_26, &MaybeFileNameAndStream_29);
    parse_tree__parse_module__actually_read_module_int2_11_p_0(Globals_14, ModuleName_18, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_29, ReadModuleAndTimestamps_20, &MaybeTimestampRes_30, ParseTreeInt2_22, &ModuleSpecs_31, Errors_24);
    parse_tree__read_modules__read_module_end_module_14_p_0(Globals_14, IgnoreErrors_16, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_27, MaybeFileNameAndStream_29, FileName0_26, FileName_19, MaybeTimestampRes_30, MaybeTimestamp_21, ModuleSpecs_31, Specs_23, *Errors_24);
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int1_13_p_0(
  MR_Word Globals_14,
  MR_Word ReadReasonMsg_15,
  MR_Word IgnoreErrors_16,
  MR_Word Search_17,
  MR_Word ModuleName_18,
  MR_String * FileName_19,
  MR_Word ReadModuleAndTimestamps_20,
  MR_Word * MaybeTimestamp_21,
  MR_Word * ParseTreeInt1_22,
  MR_Word * Specs_23,
  MR_Word * Errors_24)
{
  {
    MR_String FileName0_26;
    MR_Word ReadDoneMsg_27;
    MR_Word SearchDirs_28;
    MR_Word MaybeFileNameAndStream_29;
    MR_Word MaybeTimestampRes_30;
    MR_Word ModuleSpecs_31;

    parse_tree__read_modules__read_module_begin_10_p_0(Globals_14, ReadReasonMsg_15, Search_17, ModuleName_18, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[2])), &FileName0_26, &ReadDoneMsg_27, &SearchDirs_28);
    libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_28, FileName0_26, &MaybeFileNameAndStream_29);
    parse_tree__parse_module__actually_read_module_int1_11_p_0(Globals_14, ModuleName_18, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_29, ReadModuleAndTimestamps_20, &MaybeTimestampRes_30, ParseTreeInt1_22, &ModuleSpecs_31, Errors_24);
    parse_tree__read_modules__read_module_end_module_14_p_0(Globals_14, IgnoreErrors_16, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_27, MaybeFileNameAndStream_29, FileName0_26, FileName_19, MaybeTimestampRes_30, MaybeTimestamp_21, ModuleSpecs_31, Specs_23, *Errors_24);
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int0_13_p_0(
  MR_Word Globals_14,
  MR_Word ReadReasonMsg_15,
  MR_Word IgnoreErrors_16,
  MR_Word Search_17,
  MR_Word ModuleName_18,
  MR_String * FileName_19,
  MR_Word ReadModuleAndTimestamps_20,
  MR_Word * MaybeTimestamp_21,
  MR_Word * ParseTreeInt0_22,
  MR_Word * Specs_23,
  MR_Word * Errors_24)
{
  {
    MR_String FileName0_26;
    MR_Word ReadDoneMsg_27;
    MR_Word SearchDirs_28;
    MR_Word MaybeFileNameAndStream_29;
    MR_Word MaybeTimestampRes_30;
    MR_Word ModuleSpecs_31;

    parse_tree__read_modules__read_module_begin_10_p_0(Globals_14, ReadReasonMsg_15, Search_17, ModuleName_18, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[0])), &FileName0_26, &ReadDoneMsg_27, &SearchDirs_28);
    libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_28, FileName0_26, &MaybeFileNameAndStream_29);
    parse_tree__parse_module__actually_read_module_int0_11_p_0(Globals_14, ModuleName_18, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_29, ReadModuleAndTimestamps_20, &MaybeTimestampRes_30, ParseTreeInt0_22, &ModuleSpecs_31, Errors_24);
    parse_tree__read_modules__read_module_end_module_14_p_0(Globals_14, IgnoreErrors_16, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_27, MaybeFileNameAndStream_29, FileName0_26, FileName_19, MaybeTimestampRes_30, MaybeTimestamp_21, ModuleSpecs_31, Specs_23, *Errors_24);
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_src_from_file_12_p_0(
  MR_Word Globals_13,
  MR_String FileName_14,
  MR_String FileNameDotM_15,
  MR_Word ReadReasonMsg_16,
  MR_Word Search_17,
  MR_Word ReadModuleAndTimestamps_18,
  MR_Word * MaybeTimestamp_19,
  MR_Word * ParseTreeSrc_20,
  MR_Word * Specs_21,
  MR_Word * Errors_22)
{
  {
    MR_Word DefaultModuleName_24;
    MR_Word ReadDoneMsg_25;
    MR_Word SearchDirs_26;
    MR_Word MaybeFileNameAndStream_27;
    MR_Word MaybeTimestampRes_28;
    MR_Word ModuleSpecs_29;

    parse_tree__read_modules__read_module_begin_from_file_10_p_0(Globals_13, ReadReasonMsg_16, Search_17, FileName_14, FileNameDotM_15, &DefaultModuleName_24, &ReadDoneMsg_25, &SearchDirs_26);
    libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_26, FileNameDotM_15, &MaybeFileNameAndStream_27);
    parse_tree__parse_module__actually_read_module_src_11_p_0(Globals_13, DefaultModuleName_24, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_27, ReadModuleAndTimestamps_18, &MaybeTimestampRes_28, ParseTreeSrc_20, &ModuleSpecs_29, Errors_22);
    parse_tree__read_modules__read_module_end_file_11_p_0(Globals_13, (MR_Word) ((MR_Unsigned) 0U), ReadDoneMsg_25, FileNameDotM_15, MaybeTimestampRes_28, MaybeTimestamp_19, ModuleSpecs_29, Specs_21, *Errors_22);
  }
}

static void MR_CALL 
parse_tree__read_modules__read_module_end_file_11_p_0(
  MR_Word Globals_12,
  MR_Word FileKind_13,
  MR_Word ReadDoneMsg_14,
  MR_String FileName_15,
  MR_Word MaybeTimestampRes_16,
  MR_Word * MaybeTimestamp_17,
  MR_Word ModuleSpecs_18,
  MR_Word * Specs_19,
  MR_Word Errors_20)
{
  {
    if ((MaybeTimestampRes_16 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeTimestamp_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestampRes_16, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) Var_40)) == (MR_Integer) 1))
      {
        MR_Word IOError_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))));
        MR_Word SmartRecompilation_35;

        *MaybeTimestamp_17 = (MR_Word) ((MR_Unsigned) 0U);
        libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 148, &SmartRecompilation_35);
        switch (SmartRecompilation_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Warn_47;

              libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
              libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
              libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 32, &Warn_47);
              switch (Warn_47) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Msg_48;
                    MR_Word HaltAtWarn_49;

                    mercury__io__error_message_2_p_0(IOError_34, &Msg_48);
                    mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                    mercury__io__write_string_3_p_0(FileName_15);
                    mercury__io__write_string_3_p_0((MR_String) ":\n");
                    mercury__io__write_string_3_p_0((MR_String) "  ");
                    mercury__io__write_string_3_p_0(Msg_48);
                    mercury__io__write_string_3_p_0((MR_String) ".\n");
                    mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 3, &HaltAtWarn_49);
                    switch (HaltAtWarn_49) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                        }
                        break;
                      case (MR_Integer) 1:
                        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                        break;
                    }
                  }
                  break;
              }
            }
            break;
        }
      }
      else
      {
        MR_Word Timestamp_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTimestamp_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Timestamp_33));
        }
      }
    }
    parse_tree__read_modules__handle_any_read_module_errors_8_p_0(Globals_12, FileKind_13, ReadDoneMsg_14, Errors_20, ModuleSpecs_18, Specs_19);
  }
}

static void MR_CALL 
parse_tree__read_modules__read_module_begin_from_file_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadReasonMsg_12,
  MR_Word Search_13,
  MR_String FileName_14,
  MR_String FileNameDotM_15,
  MR_Word * DefaultModuleName_16,
  MR_Word * ReadDoneMsg_17,
  MR_Word * SearchDirs_18)
{
  {
    MR_bool succeeded;
    MR_String BaseFileName_21;
    MR_Word HaveMap_22;
    MR_Word VeryVerbose_39;
    MR_String BaseFileNamePrime_20;

    succeeded = mercury__dir__basename_2_p_0(FileName_14, &BaseFileNamePrime_20);
    if (succeeded)
      BaseFileName_21 = BaseFileNamePrime_20;
    else
      BaseFileName_21 = (MR_String) "";
    parse_tree__source_file_map__have_source_file_map_3_p_0(&HaveMap_22);
    switch (HaveMap_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__file_names__file_name_to_module_name_2_p_0(BaseFileName_21, DefaultModuleName_16);
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeModuleName_23;

          parse_tree__source_file_map__lookup_source_file_module_4_p_0(FileNameDotM_15, &MaybeModuleName_23);
          if ((MaybeModuleName_23 == (MR_Word) ((MR_Unsigned) 0U)))
            parse_tree__file_names__file_name_to_module_name_2_p_0(BaseFileName_21, DefaultModuleName_16);
          else
            *DefaultModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleName_23, (MR_Integer) 0))));
        }
        break;
    }
    switch (Search_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_28;

          Var_28 = mercury__dir__this_directory_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SearchDirs_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 0:
        libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 678, SearchDirs_18);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 71, &VeryVerbose_39);
    switch (VeryVerbose_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ReadDoneMsg_17 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_String Msg_40;
          MR_Word Stream_41;

          switch (MR_tag((MR_Word) ReadReasonMsg_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_76;

                Var_76 = mercury__string__f_43_43_2_f_0(FileNameDotM_15, (MR_String) "\'... ");
                Msg_40 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_76);
                mercury__io__output_stream_3_p_0(&Stream_41);
                *ReadDoneMsg_17 = (MR_Word) ((MR_Unsigned) 4U);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleName_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadReasonMsg_12, (MR_Integer) 0))));
                MR_String Var_67;

                Var_67 = mercury__string__f_43_43_2_f_0(FileNameDotM_15, (MR_String) "\'... ");
                Msg_40 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_67);
                libs__globals__get_progress_output_stream_5_p_0(Globals_11, ModuleName_65, &Stream_41);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *ReadDoneMsg_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stream_41));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModuleName_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadReasonMsg_12, (MR_Integer) 0))));
                MR_String Var_70;

                Var_70 = mercury__string__f_43_43_2_f_0(FileNameDotM_15, (MR_String) "\'... ");
                Msg_40 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading old version of \140", Var_70);
                libs__globals__get_progress_output_stream_5_p_0(Globals_11, ModuleName_64, &Stream_41);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *ReadDoneMsg_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stream_41));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ModuleName_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadReasonMsg_12, (MR_Integer) 0))));
                MR_String Var_73;

                Var_73 = mercury__string__f_43_43_2_f_0(FileNameDotM_15, (MR_String) "\'... ");
                Msg_40 = mercury__string__f_43_43_2_f_0((MR_String) "% Getting dependencies for \140", Var_73);
                libs__globals__get_progress_output_stream_5_p_0(Globals_11, ModuleName_42, &Stream_41);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *ReadDoneMsg_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stream_41));
                }
              }
              break;
          }
          mercury__io__write_string_4_p_0(Stream_41, Msg_40);
          mercury__io__flush_output_3_p_0(Stream_41);
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_src_14_p_0(
  MR_Word Globals_15,
  MR_Word ReadReasonMsg_16,
  MR_Word IgnoreErrors_17,
  MR_Word Search_18,
  MR_Word ModuleName_19,
  MR_Word ExpectationContexts_20,
  MR_String * FileName_21,
  MR_Word ReadModuleAndTimestamps_22,
  MR_Word * MaybeTimestamp_23,
  MR_Word * ParseTreeSrc_24,
  MR_Word * Specs_25,
  MR_Word * Errors_26)
{
  {
    MR_String FileName0_28;
    MR_Word ReadDoneMsg_29;
    MR_Word SearchDirs_30;
    MR_Word MaybeFileNameAndStream_31;
    MR_Word MaybeTimestampRes_32;
    MR_Word ParseTreeSrc0_33;
    MR_Word ModuleSpecs_34;
    MR_Word ActualModuleNameContext_36;
    MR_Word ComponentsCord_37;

    parse_tree__read_modules__read_module_begin_10_p_0(Globals_15, ReadReasonMsg_16, Search_18, ModuleName_19, (MR_Word) ((MR_Unsigned) 0U), &FileName0_28, &ReadDoneMsg_29, &SearchDirs_30);
    parse_tree__find_module__search_for_module_source_and_stream_5_p_0(SearchDirs_30, ModuleName_19, &MaybeFileNameAndStream_31);
    parse_tree__parse_module__actually_read_module_src_11_p_0(Globals_15, ModuleName_19, ExpectationContexts_20, MaybeFileNameAndStream_31, ReadModuleAndTimestamps_22, &MaybeTimestampRes_32, &ParseTreeSrc0_33, &ModuleSpecs_34, Errors_26);
    ActualModuleNameContext_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeSrc0_33, (MR_Integer) 1))));
    ComponentsCord_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeSrc0_33, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeSrc_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ActualModuleNameContext_36));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ComponentsCord_37));
    }
    parse_tree__read_modules__read_module_end_module_14_p_0(Globals_15, IgnoreErrors_17, (MR_Word) ((MR_Unsigned) 0U), ReadDoneMsg_29, MaybeFileNameAndStream_31, FileName0_28, FileName_21, MaybeTimestampRes_32, MaybeTimestamp_23, ModuleSpecs_34, Specs_25, *Errors_26);
  }
}

static void MR_CALL 
parse_tree__read_modules__read_module_end_module_14_p_0(
  MR_Word Globals_15,
  MR_Word IgnoreErrors_16,
  MR_Word FileKind_17,
  MR_Word ReadDoneMsg_18,
  MR_Word MaybeFileNameAndStream_19,
  MR_String FileName0_20,
  MR_String * FileName_21,
  MR_Word MaybeTimestampRes_22,
  MR_Word * MaybeTimestamp_23,
  MR_Word ModuleSpecs_24,
  MR_Word * Specs_25,
  MR_Word Errors_26)
{
  {
    MR_bool succeeded;
    MR_Word Statistics_30;

    if (((MR_tag((MR_Word) MaybeFileNameAndStream_19)) == (MR_Integer) 1))
      *FileName_21 = FileName0_20;
    else
    {
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFileNameAndStream_19, (MR_Integer) 0))));

      *FileName_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
    }
    parse_tree__read_modules__check_timestamp_report_if_needed_and_missing_6_p_0(Globals_15, FileName0_20, MaybeTimestampRes_22, MaybeTimestamp_23);
    switch (IgnoreErrors_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        parse_tree__read_modules__handle_any_read_module_errors_8_p_0(Globals_15, FileKind_17, ReadDoneMsg_18, Errors_26, ModuleSpecs_24, Specs_25);
        break;
      case (MR_Integer) 0:
        {
          succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_26, ((MR_Box) ((MR_Integer) 0)));
          if (succeeded)
          {
            switch (MR_tag((MR_Word) ReadDoneMsg_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ReadDoneMsg_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Stream_49;

                      mercury__io__output_stream_3_p_0(&Stream_49);
                      mercury__io__write_string_4_p_0(Stream_49, (MR_String) "not found.\n");
                      mercury__io__flush_output_3_p_0(Stream_49);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Stream_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadDoneMsg_18, (MR_Integer) 0))));

                  mercury__io__write_string_4_p_0(Stream_53, (MR_String) "not found.\n");
                  mercury__io__flush_output_3_p_0(Stream_53);
                }
                break;
            }
            *Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            switch (MR_tag((MR_Word) ReadDoneMsg_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ReadDoneMsg_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Stream_61;

                      mercury__io__output_stream_3_p_0(&Stream_61);
                      mercury__io__write_string_4_p_0(Stream_61, (MR_String) "done.\n");
                      mercury__io__flush_output_3_p_0(Stream_61);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Stream_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadDoneMsg_18, (MR_Integer) 0))));

                  mercury__io__write_string_4_p_0(Stream_65, (MR_String) "done.\n");
                  mercury__io__flush_output_3_p_0(Stream_65);
                }
                break;
            }
            *Specs_25 = ModuleSpecs_24;
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 81, &Statistics_30);
    libs__file_util__maybe_report_stats_3_p_0(Statistics_30);
  }
}

static void MR_CALL 
parse_tree__read_modules__check_timestamp_report_if_needed_and_missing_6_p_0(
  MR_Word Globals_7,
  MR_String FileName_8,
  MR_Word MaybeTimestampRes_9,
  MR_Word * MaybeTimestamp_10)
{
  if ((MaybeTimestampRes_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeTimestamp_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestampRes_9, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_21)) == (MR_Integer) 1))
    {
      MR_Word IOError_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
      MR_Word SmartRecompilation_14;

      *MaybeTimestamp_10 = (MR_Word) ((MR_Unsigned) 0U);
      libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 148, &SmartRecompilation_14);
      switch (SmartRecompilation_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Warn_28;

            libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
            libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
            libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 32, &Warn_28);
            switch (Warn_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Msg_29;
                  MR_Word HaltAtWarn_30;

                  mercury__io__error_message_2_p_0(IOError_13, &Msg_29);
                  mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                  mercury__io__write_string_3_p_0(FileName_8);
                  mercury__io__write_string_3_p_0((MR_String) ":\n");
                  mercury__io__write_string_3_p_0((MR_String) "  ");
                  mercury__io__write_string_3_p_0(Msg_29);
                  mercury__io__write_string_3_p_0((MR_String) ".\n");
                  mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 3, &HaltAtWarn_30);
                  switch (HaltAtWarn_30) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                      }
                      break;
                    case (MR_Integer) 1:
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                      break;
                  }
                }
                break;
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Timestamp_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTimestamp_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Timestamp_12));
      }
    }
  }
}

static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_8_p_0(
  MR_Word Globals_9,
  MR_Word FileKind_10,
  MR_Word ReadDoneMsg_11,
  MR_Word Errors_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_12);
    if (succeeded)
    {
      switch (MR_tag((MR_Word) ReadDoneMsg_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ReadDoneMsg_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Stream_45;

                mercury__io__output_stream_3_p_0(&Stream_45);
                mercury__io__write_string_4_p_0(Stream_45, (MR_String) "successful parse.\n");
                mercury__io__flush_output_3_p_0(Stream_45);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Stream_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadDoneMsg_11, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Stream_49, (MR_String) "successful parse.\n");
            mercury__io__flush_output_3_p_0(Stream_49);
          }
          break;
      }
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
    }
    else
    {
      MR_Word FatalErrors_15;
      MR_Word Var_26;

      Var_26 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
      mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_12, Var_26, &FatalErrors_15);
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_12, ((MR_Box) ((MR_Integer) 0)));
      if (succeeded)
        switch (MR_tag((MR_Word) ReadDoneMsg_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ReadDoneMsg_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Stream_57;

                  mercury__io__output_stream_3_p_0(&Stream_57);
                  mercury__io__write_string_4_p_0(Stream_57, (MR_String) "not found.\n");
                  mercury__io__flush_output_3_p_0(Stream_57);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Stream_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadDoneMsg_11, (MR_Integer) 0))));

              mercury__io__write_string_4_p_0(Stream_61, (MR_String) "not found.\n");
              mercury__io__flush_output_3_p_0(Stream_61);
            }
            break;
        }
      else
      {
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_15);
        if (succeeded)
          switch (MR_tag((MR_Word) ReadDoneMsg_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ReadDoneMsg_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Stream_69;

                    mercury__io__output_stream_3_p_0(&Stream_69);
                    mercury__io__write_string_4_p_0(Stream_69, (MR_String) "fatal error(s).\n");
                    mercury__io__flush_output_3_p_0(Stream_69);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Stream_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadDoneMsg_11, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_73, (MR_String) "fatal error(s).\n");
                mercury__io__flush_output_3_p_0(Stream_73);
              }
              break;
          }
        else
          switch (MR_tag((MR_Word) ReadDoneMsg_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ReadDoneMsg_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Stream_81;

                    mercury__io__output_stream_3_p_0(&Stream_81);
                    mercury__io__write_string_4_p_0(Stream_81, (MR_String) "parse error(s).\n");
                    mercury__io__flush_output_3_p_0(Stream_81);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Stream_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadDoneMsg_11, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_85, (MR_String) "parse error(s).\n");
                mercury__io__flush_output_3_p_0(Stream_85);
              }
              break;
          }
      }
      switch (MR_tag((MR_Word) FileKind_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word WriteOutErrors_18;

            switch (MR_tag((MR_Word) ReadDoneMsg_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ReadDoneMsg_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    WriteOutErrors_18 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    WriteOutErrors_18 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                WriteOutErrors_18 = (MR_Integer) 1;
                break;
            }
            parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(WriteOutErrors_18, Globals_9, STATE_VARIABLE_Specs_0_20, STATE_VARIABLE_Specs_21);
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word WriteOutErrors_18;

            switch (MR_tag((MR_Word) ReadDoneMsg_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ReadDoneMsg_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    WriteOutErrors_18 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    WriteOutErrors_18 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                WriteOutErrors_18 = (MR_Integer) 1;
                break;
            }
            parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(WriteOutErrors_18, Globals_9, STATE_VARIABLE_Specs_0_20, STATE_VARIABLE_Specs_21);
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
          break;
      }
    }
  }
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
  {
    MR_Word Ext_21;
    MR_Word VeryVerbose_43;
    MR_String _ExtStr_20;

    parse_tree__file_kind__file_kind_to_extension_3_p_0(FileKind_15, &_ExtStr_20, &Ext_21);
    switch (Search_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_29;

          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_11, (MR_String) "predicate \140parse_tree.read_modules.read_module_begin\'/10", (MR_Integer) 1, Ext_21, ModuleName_14, FileName_16);
          Var_29 = mercury__dir__this_directory_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SearchDirs_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          parse_tree__file_names__module_name_to_search_file_name_7_p_0(Globals_11, (MR_String) "predicate \140parse_tree.read_modules.read_module_begin\'/10", Ext_21, ModuleName_14, FileName_16);
          switch (MR_tag((MR_Word) FileKind_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 678, SearchDirs_18);
              break;
            case (MR_Integer) 1:
              libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 678, SearchDirs_18);
              break;
            case (MR_Integer) 2:
              libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 679, SearchDirs_18);
              break;
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 71, &VeryVerbose_43);
    switch (VeryVerbose_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ReadDoneMsg_17 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_String Msg_44;
          MR_Word Stream_45;

          switch (MR_tag((MR_Word) ReadReasonMsg_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_80;

                Var_80 = mercury__string__f_43_43_2_f_0(*FileName_16, (MR_String) "\'... ");
                Msg_44 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_80);
                mercury__io__output_stream_3_p_0(&Stream_45);
                *ReadDoneMsg_17 = (MR_Word) ((MR_Unsigned) 4U);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleName_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadReasonMsg_12, (MR_Integer) 0))));
                MR_String Var_71;

                Var_71 = mercury__string__f_43_43_2_f_0(*FileName_16, (MR_String) "\'... ");
                Msg_44 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_71);
                libs__globals__get_progress_output_stream_5_p_0(Globals_11, ModuleName_69, &Stream_45);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *ReadDoneMsg_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stream_45));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModuleName_68 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadReasonMsg_12, (MR_Integer) 0))));
                MR_String Var_74;

                Var_74 = mercury__string__f_43_43_2_f_0(*FileName_16, (MR_String) "\'... ");
                Msg_44 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading old version of \140", Var_74);
                libs__globals__get_progress_output_stream_5_p_0(Globals_11, ModuleName_68, &Stream_45);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *ReadDoneMsg_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stream_45));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ModuleName_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadReasonMsg_12, (MR_Integer) 0))));
                MR_String Var_77;

                Var_77 = mercury__string__f_43_43_2_f_0(*FileName_16, (MR_String) "\'... ");
                Msg_44 = mercury__string__f_43_43_2_f_0((MR_String) "% Getting dependencies for \140", Var_77);
                libs__globals__get_progress_output_stream_5_p_0(Globals_11, ModuleName_46, &Stream_45);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *ReadDoneMsg_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stream_45));
                }
              }
              break;
          }
          mercury__io__write_string_4_p_0(Stream_45, Msg_44);
          mercury__io__flush_output_3_p_0(Stream_45);
        }
        break;
    }
  }
}

MR_Word MR_CALL 
parse_tree__read_modules__init_have_read_module_maps_0_f_0(void)
{
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
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 2) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 3) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 4) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 5) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 6) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 7) = ((MR_Box) (Var_9));
    }
    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int0_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_int0_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int0_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_int0_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int1_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_int1_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int1_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_int1_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int2_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_int2_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int2_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_int2_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int3_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_int3_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int3_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_int3_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_key_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_key_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_maps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_msrc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_msrc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_msrc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_msrc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_plain_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_plain_opt_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_plain_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_plain_opt_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_src_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_src_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_trans_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_trans_opt_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_trans_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_trans_opt_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____read_done_msg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____read_done_msg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____read_done_msg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____read_done_msg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____read_reason_msg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____read_reason_msg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____read_reason_msg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____read_reason_msg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_map_2);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_msrc_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_plain_opt_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_src_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_trans_opt_map_0);
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
