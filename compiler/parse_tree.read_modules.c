/*
** Automatically generated from `read_modules.m'
** by the Mercury compiler,
** version rotd-2022-04-23
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

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[4];

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
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int3__934__1_2_p_0(
  MR_Word ModuleName_15,
  MR_Word HeadVar__2_43);

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int2__900__1_2_p_0(
  MR_Word ModuleName_15,
  MR_Word HeadVar__2_43);

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int1__866__1_2_p_0(
  MR_Word ModuleName_15,
  MR_Word HeadVar__2_43);

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int0__832__1_2_p_0(
  MR_Word ModuleName_15,
  MR_Word HeadVar__2_43);

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
parse_tree__read_modules__maybe_read_module_int3_12_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int2_12_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int1_12_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int0_12_p_0_1(
  MR_Box closure_arg);

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
parse_tree__read_modules__read_module_end_module_13_p_0(
  MR_Word Globals_14,
  MR_Word IgnoreErrors_15,
  MR_Word FileKind_16,
  MR_Word ReadDoneMsg_17,
  MR_Word MaybeFileNameAndStream_18,
  MR_String FileName0_19,
  MR_String * FileName_20,
  MR_Word MaybeTimestampRes_21,
  MR_Word * MaybeTimestamp_22,
  MR_Word Errors0_23,
  MR_Word * Errors_24);

static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
  MR_Word Globals_8,
  MR_Word FileKind_9,
  MR_Word ReadDoneMsg_10,
  MR_Word Errors0_11,
  MR_Word * Errors_12);

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


static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[16][2];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_2[8][3];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_3[4][1];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_4[1][5];




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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: cannot find modification time for"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Smart recompilation will not work."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__read_modules_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__read_modules_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_1[13])))
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

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_4[1][5] = {
  /* row   0 */
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

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0 = {
  (MR_String) "have_successfully_read_module",
  INT16_C(4),
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
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__pti_tree234_2__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2) },
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

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int3__934__1_2_p_0(
  MR_Word ModuleName_15,
  MR_Word HeadVar__2_43)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_15, HeadVar__2_43);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int2__900__1_2_p_0(
  MR_Word ModuleName_15,
  MR_Word HeadVar__2_43)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_15, HeadVar__2_43);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int1__866__1_2_p_0(
  MR_Word ModuleName_15,
  MR_Word HeadVar__2_43)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_15, HeadVar__2_43);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int0__832__1_2_p_0(
  MR_Word ModuleName_15,
  MR_Word HeadVar__2_43)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_15, HeadVar__2_43);
  return succeeded;
}

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0(
  MR_Word TypeInfo_for_Key_6,
  MR_Word TypeInfo_for_PT_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0(
  MR_Word TypeInfo_for_Key_5,
  MR_Word TypeInfo_for_PT_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
  MR_Word TypeInfo_for_PT_25,
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
    MR_Box Var_30 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_32 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Box ArgY3_11 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_32, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_1[7]), &SubResult2_9, ((MR_Box) (Var_31)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0(TypeInfo_for_PT_25, &SubResult3_12, Var_30, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            parse_tree__parse_error____Compare____read_module_errors_0_0(HeadVar__1_1, Var_29, ArgY4_14);
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_12 == CastX_11);
  }
  else
  {
    MR_Word TypeInfo_16_16;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;
    MR_Box ArgX3_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
    MR_Box ArgY3_8;
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
      ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&parse_tree__read_modules_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_PT_15, ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = parse_tree__parse_error____Unify____read_module_errors_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_some_int_8_p_0(
  MR_Word HaveReadModuleMaps_9,
  MR_Word ModuleName_10,
  MR_Word IntFileKind_11,
  MR_Word ReturnTimestamp_12,
  MR_String * FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word * ParseTreeSomeInt_15,
  MR_Word * Errors_16)
{
  MR_bool succeeded;
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps_9, (MR_Integer) 5))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps_9, (MR_Integer) 4))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps_9, (MR_Integer) 3))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps_9, (MR_Integer) 2))));

  switch (IntFileKind_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_17;

        succeeded = parse_tree__read_modules__find_read_module_int0_7_p_0(Var_58, ModuleName_10, ReturnTimestamp_12, FileName_13, MaybeTimestamp_14, &ParseTreeInt0_17, Errors_16);
        if (succeeded)
        {
          *ParseTreeSomeInt_15 = (MR_Word) ((MR_Word) (ParseTreeInt0_17));
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_18;

        succeeded = parse_tree__read_modules__find_read_module_int1_7_p_0(Var_57, ModuleName_10, ReturnTimestamp_12, FileName_13, MaybeTimestamp_14, &ParseTreeInt1_18, Errors_16);
        if (succeeded)
        {
          *ParseTreeSomeInt_15 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ParseTreeInt1_18)));
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_19;

        succeeded = parse_tree__read_modules__find_read_module_int2_7_p_0(Var_56, ModuleName_10, ReturnTimestamp_12, FileName_13, MaybeTimestamp_14, &ParseTreeInt2_19, Errors_16);
        if (succeeded)
        {
          *ParseTreeSomeInt_15 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (ParseTreeInt2_19)));
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ParseTreeInt3_20;

        succeeded = parse_tree__read_modules__find_read_module_int3_7_p_0(Var_55, ModuleName_10, ReturnTimestamp_12, FileName_13, MaybeTimestamp_14, &ParseTreeInt3_20, Errors_16);
        if (succeeded)
        {
          *ParseTreeSomeInt_15 = (MR_Word) (MR_mkword(MR_mktag(3), (MR_Word) (ParseTreeInt3_20)));
          succeeded = MR_TRUE;
        }
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_src_7_p_0(
  MR_Word HaveReadModuleMapSrc_8,
  MR_Word ModuleName_9,
  MR_Word ReturnTimestamp_10,
  MR_String * FileName_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word * ParseTreeSrc_13,
  MR_Word * Errors_14)
{
  MR_bool succeeded;
  MR_Word HaveReadModule_15;
  MR_Word MaybeTimestamp0_16;
  MR_Box conv0_HaveReadModule_15;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[0]), HaveReadModuleMapSrc_8, ((MR_Box) (ModuleName_9)), &conv0_HaveReadModule_15);
  if (succeeded)
  {
    HaveReadModule_15 = ((MR_Word) (conv0_HaveReadModule_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = (HaveReadModule_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *FileName_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 0))));
      MaybeTimestamp0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 1))));
      *ParseTreeSrc_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 2))));
      *Errors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 3))));
      switch (ReturnTimestamp_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((MaybeTimestamp0_16 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
          else
            *MaybeTimestamp_12 = MaybeTimestamp0_16;
          break;
        case (MR_Integer) 1:
          *MaybeTimestamp_12 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int3_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int3__934__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int3_12_p_0(
  MR_Word Globals_13,
  MR_Word Search_14,
  MR_Word ModuleName_15,
  MR_String * FileName_16,
  MR_Word ReturnTimestamp_17,
  MR_Word * MaybeTimestamp_18,
  MR_Word * ParseTreeInt3_19,
  MR_Word * Errors_20,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_31,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_32)
{
  MR_bool succeeded;
  MR_Word OrigHaveReadModuleMapInt3_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 5))));
  MR_String FileNamePrime_24;
  MR_Word MaybeTimestampPrime_25;
  MR_Word ParseTreeInt3Prime_26;
  MR_Word ErrorsPrime_27;

  succeeded = parse_tree__read_modules__find_read_module_int3_7_p_0(OrigHaveReadModuleMapInt3_23, ModuleName_15, ReturnTimestamp_17, &FileNamePrime_24, &MaybeTimestampPrime_25, &ParseTreeInt3Prime_26, &ErrorsPrime_27);
  if (succeeded)
  {
    *FileName_16 = FileNamePrime_24;
    *MaybeTimestamp_18 = MaybeTimestampPrime_25;
    *ParseTreeInt3_19 = ParseTreeInt3Prime_26;
    *Errors_20 = ErrorsPrime_27;
    *STATE_VARIABLE_HaveReadModuleMaps_32 = STATE_VARIABLE_HaveReadModuleMaps_0_31;
  }
  else
  {
    MR_Word FatalErrors_28;
    MR_Word HaveReadModuleMapInt3_30;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_String FileName0_82;
    MR_Word ReadDoneMsg_83;
    MR_Word SearchDirs_84;
    MR_Word MaybeFileNameAndStream_85;
    MR_Word MaybeTimestampRes_86;
    MR_Word Errors0_87;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_74;
    MR_Word Var_75;

    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (ModuleName_15));
    }
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_17));
    }
    parse_tree__read_modules__read_module_begin_10_p_0(Globals_13, Var_35, Search_14, ModuleName_15, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), &FileName0_82, &ReadDoneMsg_83, &SearchDirs_84);
    libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_84, FileName0_82, &MaybeFileNameAndStream_85);
    parse_tree__parse_module__actually_read_module_int3_10_p_0(Globals_13, ModuleName_15, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_85, Var_37, &MaybeTimestampRes_86, ParseTreeInt3_19, &Errors0_87);
    parse_tree__read_modules__read_module_end_module_13_p_0(Globals_13, (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_83, MaybeFileNameAndStream_85, FileName0_82, FileName_16, MaybeTimestampRes_86, MaybeTimestamp_18, Errors0_87, Errors_20);
    FatalErrors_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *Errors_20, (MR_Integer) 0))));
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_28, ((MR_Box) ((MR_Integer) 0)));
    if (succeeded)
      mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]), ((MR_Box) (ModuleName_15)), ((MR_Box) ((MR_Unsigned) 0U)), OrigHaveReadModuleMapInt3_23, &HaveReadModuleMapInt3_30);
    else
    {
      MR_Word Var_40;
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt3_19, (MR_Integer) 0))));
      MR_Word HaveReadModule_45;

      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (parse_tree__read_modules__maybe_read_module_int3_12_p_0_1));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (ModuleName_15));
        MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (Var_43));
      }
      mercury__require__expect_3_p_0(Var_40, (MR_String) "predicate \140parse_tree.read_modules.maybe_read_module_int3\'/12", (MR_String) "ModuleName != module name in ParseTreeInt3");
      {
        HaveReadModule_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 0) = ((MR_Box) (*FileName_16));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 1) = ((MR_Box) (*MaybeTimestamp_18));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 2) = ((MR_Box) (*ParseTreeInt3_19));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 3) = ((MR_Box) (*Errors_20));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]), ((MR_Box) (ModuleName_15)), ((MR_Box) (HaveReadModule_45)), OrigHaveReadModuleMapInt3_23, &HaveReadModuleMapInt3_30);
    }
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 0))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 1))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 2))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 3))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 4))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 6))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HaveReadModuleMaps_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (HaveReadModuleMapInt3_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_75));
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int3_7_p_0(
  MR_Word HaveReadModuleMapInt3_8,
  MR_Word ModuleName_9,
  MR_Word ReturnTimestamp_10,
  MR_String * FileName_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word * ParseTreeInt3_13,
  MR_Word * Errors_14)
{
  MR_bool succeeded;
  MR_Word HaveReadModule_15;
  MR_Word MaybeTimestamp0_16;
  MR_Box conv0_HaveReadModule_15;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]), HaveReadModuleMapInt3_8, ((MR_Box) (ModuleName_9)), &conv0_HaveReadModule_15);
  if (succeeded)
  {
    HaveReadModule_15 = ((MR_Word) (conv0_HaveReadModule_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = (HaveReadModule_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *FileName_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 0))));
      MaybeTimestamp0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 1))));
      *ParseTreeInt3_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 2))));
      *Errors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 3))));
      switch (ReturnTimestamp_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((MaybeTimestamp0_16 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
          else
            *MaybeTimestamp_12 = MaybeTimestamp0_16;
          break;
        case (MR_Integer) 1:
          *MaybeTimestamp_12 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int2_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int2__900__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int2_12_p_0(
  MR_Word Globals_13,
  MR_Word Search_14,
  MR_Word ModuleName_15,
  MR_String * FileName_16,
  MR_Word ReturnTimestamp_17,
  MR_Word * MaybeTimestamp_18,
  MR_Word * ParseTreeInt2_19,
  MR_Word * Errors_20,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_31,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_32)
{
  MR_bool succeeded;
  MR_Word OrigHaveReadModuleMapInt2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 4))));
  MR_String FileNamePrime_24;
  MR_Word MaybeTimestampPrime_25;
  MR_Word ParseTreeInt2Prime_26;
  MR_Word ErrorsPrime_27;

  succeeded = parse_tree__read_modules__find_read_module_int2_7_p_0(OrigHaveReadModuleMapInt2_23, ModuleName_15, ReturnTimestamp_17, &FileNamePrime_24, &MaybeTimestampPrime_25, &ParseTreeInt2Prime_26, &ErrorsPrime_27);
  if (succeeded)
  {
    *FileName_16 = FileNamePrime_24;
    *MaybeTimestamp_18 = MaybeTimestampPrime_25;
    *ParseTreeInt2_19 = ParseTreeInt2Prime_26;
    *Errors_20 = ErrorsPrime_27;
    *STATE_VARIABLE_HaveReadModuleMaps_32 = STATE_VARIABLE_HaveReadModuleMaps_0_31;
  }
  else
  {
    MR_Word FatalErrors_28;
    MR_Word HaveReadModuleMapInt2_30;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;

    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (ModuleName_15));
    }
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_17));
    }
    parse_tree__read_modules__read_module_int2_12_p_0(Globals_13, Var_35, (MR_Integer) 1, Search_14, ModuleName_15, FileName_16, Var_37, MaybeTimestamp_18, ParseTreeInt2_19, Errors_20);
    FatalErrors_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *Errors_20, (MR_Integer) 0))));
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_28, ((MR_Box) ((MR_Integer) 0)));
    if (succeeded)
      mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]), ((MR_Box) (ModuleName_15)), ((MR_Box) ((MR_Unsigned) 0U)), OrigHaveReadModuleMapInt2_23, &HaveReadModuleMapInt2_30);
    else
    {
      MR_Word Var_40;
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt2_19, (MR_Integer) 0))));
      MR_Word HaveReadModule_45;

      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (parse_tree__read_modules__maybe_read_module_int2_12_p_0_1));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (ModuleName_15));
        MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (Var_43));
      }
      mercury__require__expect_3_p_0(Var_40, (MR_String) "predicate \140parse_tree.read_modules.maybe_read_module_int2\'/12", (MR_String) "ModuleName != module name in ParseTreeInt2");
      {
        HaveReadModule_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 0) = ((MR_Box) (*FileName_16));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 1) = ((MR_Box) (*MaybeTimestamp_18));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 2) = ((MR_Box) (*ParseTreeInt2_19));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 3) = ((MR_Box) (*Errors_20));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]), ((MR_Box) (ModuleName_15)), ((MR_Box) (HaveReadModule_45)), OrigHaveReadModuleMapInt2_23, &HaveReadModuleMapInt2_30);
    }
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 0))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 1))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 2))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 3))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 5))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 6))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HaveReadModuleMaps_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HaveReadModuleMapInt2_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_78));
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int2_7_p_0(
  MR_Word HaveReadModuleMapInt2_8,
  MR_Word ModuleName_9,
  MR_Word ReturnTimestamp_10,
  MR_String * FileName_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word * ParseTreeInt2_13,
  MR_Word * Errors_14)
{
  MR_bool succeeded;
  MR_Word HaveReadModule_15;
  MR_Word MaybeTimestamp0_16;
  MR_Box conv0_HaveReadModule_15;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]), HaveReadModuleMapInt2_8, ((MR_Box) (ModuleName_9)), &conv0_HaveReadModule_15);
  if (succeeded)
  {
    HaveReadModule_15 = ((MR_Word) (conv0_HaveReadModule_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = (HaveReadModule_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *FileName_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 0))));
      MaybeTimestamp0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 1))));
      *ParseTreeInt2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 2))));
      *Errors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 3))));
      switch (ReturnTimestamp_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((MaybeTimestamp0_16 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
          else
            *MaybeTimestamp_12 = MaybeTimestamp0_16;
          break;
        case (MR_Integer) 1:
          *MaybeTimestamp_12 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int1_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int1__866__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int1_12_p_0(
  MR_Word Globals_13,
  MR_Word Search_14,
  MR_Word ModuleName_15,
  MR_String * FileName_16,
  MR_Word ReturnTimestamp_17,
  MR_Word * MaybeTimestamp_18,
  MR_Word * ParseTreeInt1_19,
  MR_Word * Errors_20,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_31,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_32)
{
  MR_bool succeeded;
  MR_Word OrigHaveReadModuleMapInt1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 3))));
  MR_String FileNamePrime_24;
  MR_Word MaybeTimestampPrime_25;
  MR_Word ParseTreeInt1Prime_26;
  MR_Word ErrorsPrime_27;

  succeeded = parse_tree__read_modules__find_read_module_int1_7_p_0(OrigHaveReadModuleMapInt1_23, ModuleName_15, ReturnTimestamp_17, &FileNamePrime_24, &MaybeTimestampPrime_25, &ParseTreeInt1Prime_26, &ErrorsPrime_27);
  if (succeeded)
  {
    *FileName_16 = FileNamePrime_24;
    *MaybeTimestamp_18 = MaybeTimestampPrime_25;
    *ParseTreeInt1_19 = ParseTreeInt1Prime_26;
    *Errors_20 = ErrorsPrime_27;
    *STATE_VARIABLE_HaveReadModuleMaps_32 = STATE_VARIABLE_HaveReadModuleMaps_0_31;
  }
  else
  {
    MR_Word FatalErrors_28;
    MR_Word HaveReadModuleMapInt1_30;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;

    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (ModuleName_15));
    }
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_17));
    }
    parse_tree__read_modules__read_module_int1_12_p_0(Globals_13, Var_35, (MR_Integer) 1, Search_14, ModuleName_15, FileName_16, Var_37, MaybeTimestamp_18, ParseTreeInt1_19, Errors_20);
    FatalErrors_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *Errors_20, (MR_Integer) 0))));
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_28, ((MR_Box) ((MR_Integer) 0)));
    if (succeeded)
      mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[2]), ((MR_Box) (ModuleName_15)), ((MR_Box) ((MR_Unsigned) 0U)), OrigHaveReadModuleMapInt1_23, &HaveReadModuleMapInt1_30);
    else
    {
      MR_Word Var_40;
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt1_19, (MR_Integer) 0))));
      MR_Word HaveReadModule_45;

      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (parse_tree__read_modules__maybe_read_module_int1_12_p_0_1));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (ModuleName_15));
        MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (Var_43));
      }
      mercury__require__expect_3_p_0(Var_40, (MR_String) "predicate \140parse_tree.read_modules.maybe_read_module_int1\'/12", (MR_String) "ModuleName != module name in ParseTreeInt1");
      {
        HaveReadModule_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 0) = ((MR_Box) (*FileName_16));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 1) = ((MR_Box) (*MaybeTimestamp_18));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 2) = ((MR_Box) (*ParseTreeInt1_19));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 3) = ((MR_Box) (*Errors_20));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[2]), ((MR_Box) (ModuleName_15)), ((MR_Box) (HaveReadModule_45)), OrigHaveReadModuleMapInt1_23, &HaveReadModuleMapInt1_30);
    }
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 0))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 1))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 2))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 4))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 5))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 6))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HaveReadModuleMaps_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (HaveReadModuleMapInt1_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_85));
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int1_7_p_0(
  MR_Word HaveReadModuleMapInt1_8,
  MR_Word ModuleName_9,
  MR_Word ReturnTimestamp_10,
  MR_String * FileName_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word * ParseTreeInt1_13,
  MR_Word * Errors_14)
{
  MR_bool succeeded;
  MR_Word HaveReadModule_15;
  MR_Word MaybeTimestamp0_16;
  MR_Box conv0_HaveReadModule_15;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[2]), HaveReadModuleMapInt1_8, ((MR_Box) (ModuleName_9)), &conv0_HaveReadModule_15);
  if (succeeded)
  {
    HaveReadModule_15 = ((MR_Word) (conv0_HaveReadModule_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = (HaveReadModule_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *FileName_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 0))));
      MaybeTimestamp0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 1))));
      *ParseTreeInt1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 2))));
      *Errors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 3))));
      switch (ReturnTimestamp_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((MaybeTimestamp0_16 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
          else
            *MaybeTimestamp_12 = MaybeTimestamp0_16;
          break;
        case (MR_Integer) 1:
          *MaybeTimestamp_12 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int0_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int0__832__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int0_12_p_0(
  MR_Word Globals_13,
  MR_Word Search_14,
  MR_Word ModuleName_15,
  MR_String * FileName_16,
  MR_Word ReturnTimestamp_17,
  MR_Word * MaybeTimestamp_18,
  MR_Word * ParseTreeInt0_19,
  MR_Word * Errors_20,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_31,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_32)
{
  MR_bool succeeded;
  MR_Word OrigHaveReadModuleMapInt0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 2))));
  MR_String FileNamePrime_24;
  MR_Word MaybeTimestampPrime_25;
  MR_Word ParseTreeInt0Prime_26;
  MR_Word ErrorsPrime_27;

  succeeded = parse_tree__read_modules__find_read_module_int0_7_p_0(OrigHaveReadModuleMapInt0_23, ModuleName_15, ReturnTimestamp_17, &FileNamePrime_24, &MaybeTimestampPrime_25, &ParseTreeInt0Prime_26, &ErrorsPrime_27);
  if (succeeded)
  {
    *FileName_16 = FileNamePrime_24;
    *MaybeTimestamp_18 = MaybeTimestampPrime_25;
    *ParseTreeInt0_19 = ParseTreeInt0Prime_26;
    *Errors_20 = ErrorsPrime_27;
    *STATE_VARIABLE_HaveReadModuleMaps_32 = STATE_VARIABLE_HaveReadModuleMaps_0_31;
  }
  else
  {
    MR_Word FatalErrors_28;
    MR_Word HaveReadModuleMapInt0_30;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;

    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (ModuleName_15));
    }
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_17));
    }
    parse_tree__read_modules__read_module_int0_12_p_0(Globals_13, Var_35, (MR_Integer) 1, Search_14, ModuleName_15, FileName_16, Var_37, MaybeTimestamp_18, ParseTreeInt0_19, Errors_20);
    FatalErrors_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *Errors_20, (MR_Integer) 0))));
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_28, ((MR_Box) ((MR_Integer) 0)));
    if (succeeded)
      mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[1]), ((MR_Box) (ModuleName_15)), ((MR_Box) ((MR_Unsigned) 0U)), OrigHaveReadModuleMapInt0_23, &HaveReadModuleMapInt0_30);
    else
    {
      MR_Word Var_40;
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt0_19, (MR_Integer) 0))));
      MR_Word HaveReadModule_45;

      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (parse_tree__read_modules__maybe_read_module_int0_12_p_0_1));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (ModuleName_15));
        MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (Var_43));
      }
      mercury__require__expect_3_p_0(Var_40, (MR_String) "predicate \140parse_tree.read_modules.maybe_read_module_int0\'/12", (MR_String) "ModuleName != module name in ParseTreeInt0");
      {
        HaveReadModule_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 0) = ((MR_Box) (*FileName_16));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 1) = ((MR_Box) (*MaybeTimestamp_18));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 2) = ((MR_Box) (*ParseTreeInt0_19));
        MR_hl_field(MR_mktag(1), HaveReadModule_45, 3) = ((MR_Box) (*Errors_20));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[1]), ((MR_Box) (ModuleName_15)), ((MR_Box) (HaveReadModule_45)), OrigHaveReadModuleMapInt0_23, &HaveReadModuleMapInt0_30);
    }
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 0))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 1))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 3))));
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 4))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 5))));
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 6))));
    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_31, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HaveReadModuleMaps_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (HaveReadModuleMapInt0_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_91));
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int0_7_p_0(
  MR_Word HaveReadModuleMapInt0_8,
  MR_Word ModuleName_9,
  MR_Word ReturnTimestamp_10,
  MR_String * FileName_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word * ParseTreeInt0_13,
  MR_Word * Errors_14)
{
  MR_bool succeeded;
  MR_Word HaveReadModule_15;
  MR_Word MaybeTimestamp0_16;
  MR_Box conv0_HaveReadModule_15;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[1]), HaveReadModuleMapInt0_8, ((MR_Box) (ModuleName_9)), &conv0_HaveReadModule_15);
  if (succeeded)
  {
    HaveReadModule_15 = ((MR_Word) (conv0_HaveReadModule_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = (HaveReadModule_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *FileName_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 0))));
      MaybeTimestamp0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 1))));
      *ParseTreeInt0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 2))));
      *Errors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_15, (MR_Integer) 3))));
      switch (ReturnTimestamp_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((MaybeTimestamp0_16 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
          else
            *MaybeTimestamp_12 = MaybeTimestamp0_16;
          break;
        case (MR_Integer) 1:
          *MaybeTimestamp_12 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__read_modules__read_module_trans_opt_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_String * FileName_10,
  MR_Word * ParseTreeTransOpt_11,
  MR_Word * Errors_12)
{
  MR_Word ReadReasonMsg_14;
  MR_String FileName0_18;
  MR_Word ReadDoneMsg_19;
  MR_Word SearchDirs_20;
  MR_Word MaybeFileNameAndStream_21;
  MR_Word Errors0_22;
  MR_Word _MaybeTimestamp_23;

  {
    ReadReasonMsg_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ReadReasonMsg_14, 0) = ((MR_Box) (ModuleName_9));
  }
  parse_tree__read_modules__read_module_begin_10_p_0(Globals_8, ReadReasonMsg_14, (MR_Integer) 0, ModuleName_9, (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__read_modules_scalar_common_3[2])), &FileName0_18, &ReadDoneMsg_19, &SearchDirs_20);
  libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_20, FileName0_18, &MaybeFileNameAndStream_21);
  parse_tree__parse_module__actually_read_module_trans_opt_7_p_0(Globals_8, ModuleName_9, MaybeFileNameAndStream_21, ParseTreeTransOpt_11, &Errors0_22);
  parse_tree__read_modules__read_module_end_module_13_p_0(Globals_8, (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__read_modules_scalar_common_3[2])), ReadDoneMsg_19, MaybeFileNameAndStream_21, FileName0_18, FileName_10, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_23, Errors0_22, Errors_12);
}

void MR_CALL 
parse_tree__read_modules__read_module_plain_opt_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_String * FileName_10,
  MR_Word * ParseTreePlainOpt_11,
  MR_Word * Errors_12)
{
  MR_Word ReadReasonMsg_14;
  MR_String FileName0_18;
  MR_Word ReadDoneMsg_19;
  MR_Word SearchDirs_20;
  MR_Word MaybeFileNameAndStream_21;
  MR_Word Errors0_22;
  MR_Word _MaybeTimestamp_23;

  {
    ReadReasonMsg_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ReadReasonMsg_14, 0) = ((MR_Box) (ModuleName_9));
  }
  parse_tree__read_modules__read_module_begin_10_p_0(Globals_8, ReadReasonMsg_14, (MR_Integer) 0, ModuleName_9, (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__read_modules_scalar_common_3[0])), &FileName0_18, &ReadDoneMsg_19, &SearchDirs_20);
  libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_20, FileName0_18, &MaybeFileNameAndStream_21);
  parse_tree__parse_module__actually_read_module_plain_opt_7_p_0(Globals_8, ModuleName_9, MaybeFileNameAndStream_21, ParseTreePlainOpt_11, &Errors0_22);
  parse_tree__read_modules__read_module_end_module_13_p_0(Globals_8, (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__read_modules_scalar_common_3[0])), ReadDoneMsg_19, MaybeFileNameAndStream_21, FileName0_18, FileName_10, (MR_Word) ((MR_Unsigned) 0U), &_MaybeTimestamp_23, Errors0_22, Errors_12);
}

void MR_CALL 
parse_tree__read_modules__read_module_int3_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadReasonMsg_14,
  MR_Word IgnoreErrors_15,
  MR_Word Search_16,
  MR_Word ModuleName_17,
  MR_String * FileName_18,
  MR_Word ReadModuleAndTimestamps_19,
  MR_Word * MaybeTimestamp_20,
  MR_Word * ParseTreeInt3_21,
  MR_Word * Errors_22)
{
  MR_String FileName0_24;
  MR_Word ReadDoneMsg_25;
  MR_Word SearchDirs_26;
  MR_Word MaybeFileNameAndStream_27;
  MR_Word MaybeTimestampRes_28;
  MR_Word Errors0_29;

  parse_tree__read_modules__read_module_begin_10_p_0(Globals_13, ReadReasonMsg_14, Search_16, ModuleName_17, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), &FileName0_24, &ReadDoneMsg_25, &SearchDirs_26);
  libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_26, FileName0_24, &MaybeFileNameAndStream_27);
  parse_tree__parse_module__actually_read_module_int3_10_p_0(Globals_13, ModuleName_17, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_27, ReadModuleAndTimestamps_19, &MaybeTimestampRes_28, ParseTreeInt3_21, &Errors0_29);
  parse_tree__read_modules__read_module_end_module_13_p_0(Globals_13, IgnoreErrors_15, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_25, MaybeFileNameAndStream_27, FileName0_24, FileName_18, MaybeTimestampRes_28, MaybeTimestamp_20, Errors0_29, Errors_22);
}

void MR_CALL 
parse_tree__read_modules__read_module_some_int_13_p_0(
  MR_Word Globals_14,
  MR_Word ReadReasonMsg_15,
  MR_Word IgnoreErrors_16,
  MR_Word Search_17,
  MR_Word ModuleName_18,
  MR_Word IntFileKind_19,
  MR_String * FileName_20,
  MR_Word ReadModuleAndTimestamps_21,
  MR_Word * MaybeTimestamp_22,
  MR_Word * ParseTreeSomeInt_23,
  MR_Word * Errors_24)
{
  switch (IntFileKind_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_26;

        parse_tree__read_modules__read_module_int0_12_p_0(Globals_14, ReadReasonMsg_15, IgnoreErrors_16, Search_17, ModuleName_18, FileName_20, ReadModuleAndTimestamps_21, MaybeTimestamp_22, &ParseTreeInt0_26, Errors_24);
        *ParseTreeSomeInt_23 = (MR_Word) ((MR_Word) (ParseTreeInt0_26));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_27;

        parse_tree__read_modules__read_module_int1_12_p_0(Globals_14, ReadReasonMsg_15, IgnoreErrors_16, Search_17, ModuleName_18, FileName_20, ReadModuleAndTimestamps_21, MaybeTimestamp_22, &ParseTreeInt1_27, Errors_24);
        *ParseTreeSomeInt_23 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ParseTreeInt1_27)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_28;

        parse_tree__read_modules__read_module_int2_12_p_0(Globals_14, ReadReasonMsg_15, IgnoreErrors_16, Search_17, ModuleName_18, FileName_20, ReadModuleAndTimestamps_21, MaybeTimestamp_22, &ParseTreeInt2_28, Errors_24);
        *ParseTreeSomeInt_23 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (ParseTreeInt2_28)));
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ParseTreeInt3_29;
        MR_String FileName0_32;
        MR_Word ReadDoneMsg_33;
        MR_Word SearchDirs_34;
        MR_Word MaybeFileNameAndStream_35;
        MR_Word MaybeTimestampRes_36;
        MR_Word Errors0_37;

        parse_tree__read_modules__read_module_begin_10_p_0(Globals_14, ReadReasonMsg_15, Search_17, ModuleName_18, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), &FileName0_32, &ReadDoneMsg_33, &SearchDirs_34);
        libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_34, FileName0_32, &MaybeFileNameAndStream_35);
        parse_tree__parse_module__actually_read_module_int3_10_p_0(Globals_14, ModuleName_18, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_35, ReadModuleAndTimestamps_21, &MaybeTimestampRes_36, &ParseTreeInt3_29, &Errors0_37);
        parse_tree__read_modules__read_module_end_module_13_p_0(Globals_14, IgnoreErrors_16, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_33, MaybeFileNameAndStream_35, FileName0_32, FileName_20, MaybeTimestampRes_36, MaybeTimestamp_22, Errors0_37, Errors_24);
        *ParseTreeSomeInt_23 = (MR_Word) (MR_mkword(MR_mktag(3), (MR_Word) (ParseTreeInt3_29)));
      }
      break;
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int2_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadReasonMsg_14,
  MR_Word IgnoreErrors_15,
  MR_Word Search_16,
  MR_Word ModuleName_17,
  MR_String * FileName_18,
  MR_Word ReadModuleAndTimestamps_19,
  MR_Word * MaybeTimestamp_20,
  MR_Word * ParseTreeInt2_21,
  MR_Word * Errors_22)
{
  MR_String FileName0_24;
  MR_Word ReadDoneMsg_25;
  MR_Word SearchDirs_26;
  MR_Word MaybeFileNameAndStream_27;
  MR_Word MaybeTimestampRes_28;
  MR_Word Errors0_29;

  parse_tree__read_modules__read_module_begin_10_p_0(Globals_13, ReadReasonMsg_14, Search_16, ModuleName_17, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[3])), &FileName0_24, &ReadDoneMsg_25, &SearchDirs_26);
  libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_26, FileName0_24, &MaybeFileNameAndStream_27);
  parse_tree__parse_module__actually_read_module_int2_10_p_0(Globals_13, ModuleName_17, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_27, ReadModuleAndTimestamps_19, &MaybeTimestampRes_28, ParseTreeInt2_21, &Errors0_29);
  parse_tree__read_modules__read_module_end_module_13_p_0(Globals_13, IgnoreErrors_15, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_25, MaybeFileNameAndStream_27, FileName0_24, FileName_18, MaybeTimestampRes_28, MaybeTimestamp_20, Errors0_29, Errors_22);
}

void MR_CALL 
parse_tree__read_modules__read_module_int1_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadReasonMsg_14,
  MR_Word IgnoreErrors_15,
  MR_Word Search_16,
  MR_Word ModuleName_17,
  MR_String * FileName_18,
  MR_Word ReadModuleAndTimestamps_19,
  MR_Word * MaybeTimestamp_20,
  MR_Word * ParseTreeInt1_21,
  MR_Word * Errors_22)
{
  MR_String FileName0_24;
  MR_Word ReadDoneMsg_25;
  MR_Word SearchDirs_26;
  MR_Word MaybeFileNameAndStream_27;
  MR_Word MaybeTimestampRes_28;
  MR_Word Errors0_29;

  parse_tree__read_modules__read_module_begin_10_p_0(Globals_13, ReadReasonMsg_14, Search_16, ModuleName_17, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[2])), &FileName0_24, &ReadDoneMsg_25, &SearchDirs_26);
  libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_26, FileName0_24, &MaybeFileNameAndStream_27);
  parse_tree__parse_module__actually_read_module_int1_10_p_0(Globals_13, ModuleName_17, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_27, ReadModuleAndTimestamps_19, &MaybeTimestampRes_28, ParseTreeInt1_21, &Errors0_29);
  parse_tree__read_modules__read_module_end_module_13_p_0(Globals_13, IgnoreErrors_15, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_25, MaybeFileNameAndStream_27, FileName0_24, FileName_18, MaybeTimestampRes_28, MaybeTimestamp_20, Errors0_29, Errors_22);
}

void MR_CALL 
parse_tree__read_modules__read_module_int0_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadReasonMsg_14,
  MR_Word IgnoreErrors_15,
  MR_Word Search_16,
  MR_Word ModuleName_17,
  MR_String * FileName_18,
  MR_Word ReadModuleAndTimestamps_19,
  MR_Word * MaybeTimestamp_20,
  MR_Word * ParseTreeInt0_21,
  MR_Word * Errors_22)
{
  MR_String FileName0_24;
  MR_Word ReadDoneMsg_25;
  MR_Word SearchDirs_26;
  MR_Word MaybeFileNameAndStream_27;
  MR_Word MaybeTimestampRes_28;
  MR_Word Errors0_29;

  parse_tree__read_modules__read_module_begin_10_p_0(Globals_13, ReadReasonMsg_14, Search_16, ModuleName_17, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[0])), &FileName0_24, &ReadDoneMsg_25, &SearchDirs_26);
  libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_26, FileName0_24, &MaybeFileNameAndStream_27);
  parse_tree__parse_module__actually_read_module_int0_10_p_0(Globals_13, ModuleName_17, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_27, ReadModuleAndTimestamps_19, &MaybeTimestampRes_28, ParseTreeInt0_21, &Errors0_29);
  parse_tree__read_modules__read_module_end_module_13_p_0(Globals_13, IgnoreErrors_15, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), ReadDoneMsg_25, MaybeFileNameAndStream_27, FileName0_24, FileName_18, MaybeTimestampRes_28, MaybeTimestamp_20, Errors0_29, Errors_22);
}

void MR_CALL 
parse_tree__read_modules__read_module_src_from_file_11_p_0(
  MR_Word Globals_12,
  MR_String FileName_13,
  MR_String FileNameDotM_14,
  MR_Word ReadReasonMsg_15,
  MR_Word Search_16,
  MR_Word ReadModuleAndTimestamps_17,
  MR_Word * MaybeTimestamp_18,
  MR_Word * ParseTreeSrc_19,
  MR_Word * Errors_20)
{
  MR_bool succeeded;
  MR_Word DefaultModuleName_22;
  MR_Word ReadDoneMsg_23;
  MR_Word SearchDirs_24;
  MR_Word MaybeFileNameAndStream_25;
  MR_Word MaybeTimestampRes_26;
  MR_Word Errors0_27;
  MR_String BaseFileName_36;
  MR_Word HaveMap_37;
  MR_Word VeryVerbose_44;
  MR_String BaseFileNamePrime_35;

  succeeded = mercury__dir__basename_2_p_0(FileName_13, &BaseFileNamePrime_35);
  if (succeeded)
    BaseFileName_36 = BaseFileNamePrime_35;
  else
    BaseFileName_36 = (MR_String) "";
  parse_tree__source_file_map__have_source_file_map_3_p_0(&HaveMap_37);
  switch (HaveMap_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      parse_tree__file_names__file_name_to_module_name_2_p_0(BaseFileName_36, &DefaultModuleName_22);
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeModuleName_38;

        parse_tree__source_file_map__lookup_source_file_module_4_p_0(FileNameDotM_14, &MaybeModuleName_38);
        if ((MaybeModuleName_38 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__file_names__file_name_to_module_name_2_p_0(BaseFileName_36, &DefaultModuleName_22);
        else
          DefaultModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleName_38, (MR_Integer) 0))));
      }
      break;
  }
  switch (Search_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_41;

        Var_41 = mercury__dir__this_directory_0_f_0();
        {
          SearchDirs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SearchDirs_24, 0) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(1), SearchDirs_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 0:
      libs__globals__lookup_accumulating_option_3_p_0(Globals_12, (MR_Integer) 678, &SearchDirs_24);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 72, &VeryVerbose_44);
  switch (VeryVerbose_44) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ReadDoneMsg_23 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_String Msg_45;
        MR_Word Stream_46;

        switch (MR_tag((MR_Word) ReadReasonMsg_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_79;

              Var_79 = mercury__string__f_43_43_2_f_0(FileNameDotM_14, (MR_String) "\'... ");
              Msg_45 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_79);
              mercury__io__output_stream_3_p_0(&Stream_46);
              ReadDoneMsg_23 = (MR_Word) ((MR_Unsigned) 4U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleName_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadReasonMsg_15, (MR_Integer) 0))));
              MR_String Var_70;

              Var_70 = mercury__string__f_43_43_2_f_0(FileNameDotM_14, (MR_String) "\'... ");
              Msg_45 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_70);
              libs__globals__get_progress_output_stream_5_p_0(Globals_12, ModuleName_68, &Stream_46);
              {
                ReadDoneMsg_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ReadDoneMsg_23, 0) = ((MR_Box) (Stream_46));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleName_67 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadReasonMsg_15, (MR_Integer) 0))));
              MR_String Var_73;

              Var_73 = mercury__string__f_43_43_2_f_0(FileNameDotM_14, (MR_String) "\'... ");
              Msg_45 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading old version of \140", Var_73);
              libs__globals__get_progress_output_stream_5_p_0(Globals_12, ModuleName_67, &Stream_46);
              {
                ReadDoneMsg_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ReadDoneMsg_23, 0) = ((MR_Box) (Stream_46));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadReasonMsg_15, (MR_Integer) 0))));
              MR_String Var_76;

              Var_76 = mercury__string__f_43_43_2_f_0(FileNameDotM_14, (MR_String) "\'... ");
              Msg_45 = mercury__string__f_43_43_2_f_0((MR_String) "% Getting dependencies for \140", Var_76);
              libs__globals__get_progress_output_stream_5_p_0(Globals_12, ModuleName_47, &Stream_46);
              {
                ReadDoneMsg_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ReadDoneMsg_23, 0) = ((MR_Box) (Stream_46));
              }
            }
            break;
        }
        mercury__io__write_string_4_p_0(Stream_46, Msg_45);
        mercury__io__flush_output_3_p_0(Stream_46);
      }
      break;
  }
  libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_24, FileNameDotM_14, &MaybeFileNameAndStream_25);
  parse_tree__parse_module__actually_read_module_src_10_p_0(Globals_12, DefaultModuleName_22, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_25, ReadModuleAndTimestamps_17, &MaybeTimestampRes_26, ParseTreeSrc_19, &Errors0_27);
  parse_tree__read_modules__read_module_end_file_10_p_0(Globals_12, (MR_Word) ((MR_Unsigned) 0U), ReadDoneMsg_23, FileNameDotM_14, MaybeTimestampRes_26, MaybeTimestamp_18, Errors0_27, Errors_20);
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
    MR_Word TimestampRes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestampRes_15, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) TimestampRes_23)) == (MR_Integer) 1))
    {
      MR_Word IOError_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TimestampRes_23, (MR_Integer) 0))));
      MR_Word SmartRecompilation_26;

      *MaybeTimestamp_16 = (MR_Word) ((MR_Unsigned) 0U);
      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 149, &SmartRecompilation_26);
      switch (SmartRecompilation_26) {
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
            libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 32, &Warn_28);
            switch (Warn_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ErrorMsg_29;
                  MR_Word Pieces_30;
                  MR_Word Spec_31;
                  MR_Word Var_39;
                  MR_Word Var_40;
                  MR_Word Var_41;
                  MR_Word Var_44;
                  MR_Word Var_46;
                  MR_Word Var_47;

                  mercury__io__error_message_2_p_0(IOError_25, &ErrorMsg_29);
                  {
                    Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (FileName_14));
                  }
                  {
                    Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (ErrorMsg_29));
                  }
                  {
                    Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
                    MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_1[15])));
                  }
                  {
                    Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
                  }
                  {
                    Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__read_modules_scalar_common_1[9])));
                    MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
                  }
                  {
                    Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
                    MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
                  }
                  {
                    Pieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__read_modules_scalar_common_1[8])));
                    MR_hl_field(MR_mktag(1), Pieces_30, 1) = ((MR_Box) (Var_39));
                  }
                  {
                    Spec_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.read_modules.record_and_report_missing_timestamp\'/5"));
                    MR_hl_field(MR_mktag(2), Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(2), Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(2), Spec_31, 3) = ((MR_Box) (Pieces_30));
                  }
                  parse_tree__error_util__write_error_spec_4_p_0(Globals_11, Spec_31);
                }
                break;
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Timestamp_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimestampRes_23, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTimestamp_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Timestamp_24));
      }
    }
  }
  parse_tree__read_modules__handle_any_read_module_errors_7_p_0(Globals_11, FileKind_12, ReadDoneMsg_13, Errors0_17, Errors_18);
}

void MR_CALL 
parse_tree__read_modules__read_module_src_13_p_0(
  MR_Word Globals_14,
  MR_Word ReadReasonMsg_15,
  MR_Word IgnoreErrors_16,
  MR_Word Search_17,
  MR_Word ModuleName_18,
  MR_Word ExpectationContexts_19,
  MR_String * FileName_20,
  MR_Word ReadModuleAndTimestamps_21,
  MR_Word * MaybeTimestamp_22,
  MR_Word * ParseTreeSrc_23,
  MR_Word * Errors_24)
{
  MR_String FileName0_26;
  MR_Word ReadDoneMsg_27;
  MR_Word SearchDirs_28;
  MR_Word MaybeFileNameAndStream_29;
  MR_Word MaybeTimestampRes_30;
  MR_Word ParseTreeSrc0_31;
  MR_Word Errors0_32;
  MR_Word ActualModuleNameContext_34;
  MR_Word ComponentsCord_35;

  parse_tree__read_modules__read_module_begin_10_p_0(Globals_14, ReadReasonMsg_15, Search_17, ModuleName_18, (MR_Word) ((MR_Unsigned) 0U), &FileName0_26, &ReadDoneMsg_27, &SearchDirs_28);
  parse_tree__find_module__search_for_module_source_and_stream_5_p_0(SearchDirs_28, ModuleName_18, &MaybeFileNameAndStream_29);
  parse_tree__parse_module__actually_read_module_src_10_p_0(Globals_14, ModuleName_18, ExpectationContexts_19, MaybeFileNameAndStream_29, ReadModuleAndTimestamps_21, &MaybeTimestampRes_30, &ParseTreeSrc0_31, &Errors0_32);
  ActualModuleNameContext_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeSrc0_31, (MR_Integer) 1))));
  ComponentsCord_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeSrc0_31, (MR_Integer) 2))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeSrc_23 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_18));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ActualModuleNameContext_34));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ComponentsCord_35));
  }
  parse_tree__read_modules__read_module_end_module_13_p_0(Globals_14, IgnoreErrors_16, (MR_Word) ((MR_Unsigned) 0U), ReadDoneMsg_27, MaybeFileNameAndStream_29, FileName0_26, FileName_20, MaybeTimestampRes_30, MaybeTimestamp_22, Errors0_32, Errors_24);
}

static void MR_CALL 
parse_tree__read_modules__read_module_end_module_13_p_0(
  MR_Word Globals_14,
  MR_Word IgnoreErrors_15,
  MR_Word FileKind_16,
  MR_Word ReadDoneMsg_17,
  MR_Word MaybeFileNameAndStream_18,
  MR_String FileName0_19,
  MR_String * FileName_20,
  MR_Word MaybeTimestampRes_21,
  MR_Word * MaybeTimestamp_22,
  MR_Word Errors0_23,
  MR_Word * Errors_24)
{
  MR_bool succeeded;
  MR_Word Statistics_29;

  if (((MR_tag((MR_Word) MaybeFileNameAndStream_18)) == (MR_Integer) 1))
    *FileName_20 = FileName0_19;
  else
  {
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFileNameAndStream_18, (MR_Integer) 0))));

    *FileName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
  }
  if ((MaybeTimestampRes_21 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeTimestamp_22 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TimestampRes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestampRes_21, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) TimestampRes_55)) == (MR_Integer) 1))
    {
      MR_Word IOError_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TimestampRes_55, (MR_Integer) 0))));
      MR_Word SmartRecompilation_58;

      *MaybeTimestamp_22 = (MR_Word) ((MR_Unsigned) 0U);
      libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 149, &SmartRecompilation_58);
      switch (SmartRecompilation_58) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Warn_60;

            libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
            libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
            libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 32, &Warn_60);
            switch (Warn_60) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ErrorMsg_61;
                  MR_Word Pieces_62;
                  MR_Word Spec_63;
                  MR_Word Var_71;
                  MR_Word Var_72;
                  MR_Word Var_73;
                  MR_Word Var_76;
                  MR_Word Var_78;
                  MR_Word Var_79;

                  mercury__io__error_message_2_p_0(IOError_57, &ErrorMsg_61);
                  {
                    Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (FileName0_19));
                  }
                  {
                    Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (ErrorMsg_61));
                  }
                  {
                    Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
                    MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_1[15])));
                  }
                  {
                    Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_78));
                  }
                  {
                    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__read_modules_scalar_common_1[9])));
                    MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
                  }
                  {
                    Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
                    MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
                  }
                  {
                    Pieces_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__read_modules_scalar_common_1[8])));
                    MR_hl_field(MR_mktag(1), Pieces_62, 1) = ((MR_Box) (Var_71));
                  }
                  {
                    Spec_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.read_modules.record_and_report_missing_timestamp\'/5"));
                    MR_hl_field(MR_mktag(2), Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(2), Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(2), Spec_63, 3) = ((MR_Box) (Pieces_62));
                  }
                  parse_tree__error_util__write_error_spec_4_p_0(Globals_14, Spec_63);
                }
                break;
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Timestamp_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimestampRes_55, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTimestamp_22 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Timestamp_56));
      }
    }
  }
  switch (IgnoreErrors_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      parse_tree__read_modules__handle_any_read_module_errors_7_p_0(Globals_14, FileKind_16, ReadDoneMsg_17, Errors0_23, Errors_24);
      break;
    case (MR_Integer) 0:
      {
        MR_Word FatalErrors0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_23, (MR_Integer) 0))));

        succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors0_28, ((MR_Box) ((MR_Integer) 0)));
        if (succeeded)
        {
          MR_Word Var_38;
          MR_Word Var_41;

          switch (MR_tag((MR_Word) ReadDoneMsg_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ReadDoneMsg_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Stream_84;

                    mercury__io__output_stream_3_p_0(&Stream_84);
                    mercury__io__write_string_4_p_0(Stream_84, (MR_String) "not found.\n");
                    mercury__io__flush_output_3_p_0(Stream_84);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Stream_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadDoneMsg_17, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_87, (MR_String) "not found.\n");
                mercury__io__flush_output_3_p_0(Stream_87);
              }
              break;
          }
          Var_38 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), ((MR_Box) ((MR_Integer) 0)));
          Var_41 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *Errors_24 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          switch (MR_tag((MR_Word) ReadDoneMsg_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ReadDoneMsg_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Stream_90;

                    mercury__io__output_stream_3_p_0(&Stream_90);
                    mercury__io__write_string_4_p_0(Stream_90, (MR_String) "done.\n");
                    mercury__io__flush_output_3_p_0(Stream_90);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Stream_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadDoneMsg_17, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_93, (MR_String) "done.\n");
                mercury__io__flush_output_3_p_0(Stream_93);
              }
              break;
          }
          *Errors_24 = Errors0_23;
        }
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 82, &Statistics_29);
  libs__file_util__maybe_report_stats_3_p_0(Statistics_29);
}

static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
  MR_Word Globals_8,
  MR_Word FileKind_9,
  MR_Word ReadDoneMsg_10,
  MR_Word Errors0_11,
  MR_Word * Errors_12)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(Errors0_11);
  if (succeeded)
  {
    *Errors_12 = Errors0_11;
    switch (MR_tag((MR_Word) ReadDoneMsg_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ReadDoneMsg_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Stream_63;

              mercury__io__output_stream_3_p_0(&Stream_63);
              mercury__io__write_string_4_p_0(Stream_63, (MR_String) "successful parse.\n");
              mercury__io__flush_output_3_p_0(Stream_63);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Stream_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadDoneMsg_10, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(Stream_66, (MR_String) "successful parse.\n");
          mercury__io__flush_output_3_p_0(Stream_66);
        }
        break;
    }
  }
  else
  {
    MR_Word FatalErrors0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_11, (MR_Integer) 0))));

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors0_14, ((MR_Box) ((MR_Integer) 0)));
    if (succeeded)
      switch (MR_tag((MR_Word) ReadDoneMsg_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ReadDoneMsg_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Stream_69;

                mercury__io__output_stream_3_p_0(&Stream_69);
                mercury__io__write_string_4_p_0(Stream_69, (MR_String) "not found.\n");
                mercury__io__flush_output_3_p_0(Stream_69);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Stream_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadDoneMsg_10, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Stream_72, (MR_String) "not found.\n");
            mercury__io__flush_output_3_p_0(Stream_72);
          }
          break;
      }
    else
    {
      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors0_14);
      if (succeeded)
        switch (MR_tag((MR_Word) ReadDoneMsg_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ReadDoneMsg_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Stream_75;

                  mercury__io__output_stream_3_p_0(&Stream_75);
                  mercury__io__write_string_4_p_0(Stream_75, (MR_String) "fatal error(s).\n");
                  mercury__io__flush_output_3_p_0(Stream_75);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Stream_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadDoneMsg_10, (MR_Integer) 0))));

              mercury__io__write_string_4_p_0(Stream_78, (MR_String) "fatal error(s).\n");
              mercury__io__flush_output_3_p_0(Stream_78);
            }
            break;
        }
      else
        switch (MR_tag((MR_Word) ReadDoneMsg_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ReadDoneMsg_10)) {
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
              MR_Word Stream_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadDoneMsg_10, (MR_Integer) 0))));

              mercury__io__write_string_4_p_0(Stream_84, (MR_String) "parse error(s).\n");
              mercury__io__flush_output_3_p_0(Stream_84);
            }
            break;
        }
    }
    switch (MR_tag((MR_Word) FileKind_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word WriteOutErrors_17;
          MR_Word FatalErrorSpecs0_19;
          MR_Word NonFatalErrorSpecs0_20;
          MR_Word FatalErrorSpecs_21;
          MR_Word NonFatalErrorSpecs_22;
          MR_Word Var_51;
          MR_Word Var_53;
          MR_Word Var_55;

          switch (MR_tag((MR_Word) ReadDoneMsg_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ReadDoneMsg_10)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  WriteOutErrors_17 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  WriteOutErrors_17 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              WriteOutErrors_17 = (MR_Integer) 1;
              break;
          }
          FatalErrorSpecs0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_11, (MR_Integer) 1))));
          NonFatalErrorSpecs0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_11, (MR_Integer) 3))));
          parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(WriteOutErrors_17, Globals_8, FatalErrorSpecs0_19, &FatalErrorSpecs_21);
          parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(WriteOutErrors_17, Globals_8, NonFatalErrorSpecs0_20, &NonFatalErrorSpecs_22);
          Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_11, (MR_Integer) 0))));
          Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_11, (MR_Integer) 2))));
          Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_11, (MR_Integer) 4))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *Errors_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FatalErrorSpecs_21));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonFatalErrorSpecs_22));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_55));
          }
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word WriteOutErrors_17;
          MR_Word FatalErrorSpecs0_19;
          MR_Word NonFatalErrorSpecs0_20;
          MR_Word FatalErrorSpecs_21;
          MR_Word NonFatalErrorSpecs_22;
          MR_Word Var_51;
          MR_Word Var_53;
          MR_Word Var_55;

          switch (MR_tag((MR_Word) ReadDoneMsg_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ReadDoneMsg_10)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  WriteOutErrors_17 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  WriteOutErrors_17 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              WriteOutErrors_17 = (MR_Integer) 1;
              break;
          }
          FatalErrorSpecs0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_11, (MR_Integer) 1))));
          NonFatalErrorSpecs0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_11, (MR_Integer) 3))));
          parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(WriteOutErrors_17, Globals_8, FatalErrorSpecs0_19, &FatalErrorSpecs_21);
          parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(WriteOutErrors_17, Globals_8, NonFatalErrorSpecs0_20, &NonFatalErrorSpecs_22);
          Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_11, (MR_Integer) 0))));
          Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_11, (MR_Integer) 2))));
          Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Errors0_11, (MR_Integer) 4))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *Errors_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FatalErrorSpecs_21));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NonFatalErrorSpecs_22));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_55));
          }
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        break;
      case (MR_Integer) 2:
        *Errors_12 = Errors0_11;
        break;
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
  MR_Word Ext_21;
  MR_Word VeryVerbose_35;
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
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 72, &VeryVerbose_35);
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
              MR_Word ModuleName_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadReasonMsg_12, (MR_Integer) 0))));
              MR_String Var_61;

              Var_61 = mercury__string__f_43_43_2_f_0(*FileName_16, (MR_String) "\'... ");
              Msg_36 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_61);
              libs__globals__get_progress_output_stream_5_p_0(Globals_11, ModuleName_59, &Stream_37);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *ReadDoneMsg_17 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stream_37));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleName_58 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadReasonMsg_12, (MR_Integer) 0))));
              MR_String Var_64;

              Var_64 = mercury__string__f_43_43_2_f_0(*FileName_16, (MR_String) "\'... ");
              Msg_36 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading old version of \140", Var_64);
              libs__globals__get_progress_output_stream_5_p_0(Globals_11, ModuleName_58, &Stream_37);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *ReadDoneMsg_17 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stream_37));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadReasonMsg_12, (MR_Integer) 0))));
              MR_String Var_67;

              Var_67 = mercury__string__f_43_43_2_f_0(*FileName_16, (MR_String) "\'... ");
              Msg_36 = mercury__string__f_43_43_2_f_0((MR_String) "% Getting dependencies for \140", Var_67);
              libs__globals__get_progress_output_stream_5_p_0(Globals_11, ModuleName_38, &Stream_37);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *ReadDoneMsg_17 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stream_37));
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
parse_tree__read_modules____Unify____have_read_module_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = parse_tree__read_modules____Unify____have_read_module_map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__read_modules____Compare____have_read_module_map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
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
