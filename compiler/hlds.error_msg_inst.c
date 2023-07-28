/*
** Automatically generated from `error_msg_inst.m'
** by the Mercury compiler,
** version rotd-2023-07-28
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


// :- module hlds.error_msg_inst.
// :- implementation.

/*
INIT mercury__hlds__error_msg_inst__init
ENDINIT
*/

#include "hlds.error_msg_inst.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct2 hlds__error_msg_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_expansions_info_0_0[2];

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_expansions_info_0_0[2];

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_expansions_info_0_0;

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_expansions_info_0_0[1];

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_expansions_info_0[1];

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_expansions_info_0[1];

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_expansions_info_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0[3];

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0[3];

static const MR_DuArgLocn hlds__error_msg_inst__hlds__error_msg_inst__field_locns_inst_msg_info_0_0[3];

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0;

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0[1];

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0[1];

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0[1];

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0[1];

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0;

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1;

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_maybe_expand_named_insts_0[2];

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0[2];

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0[2];

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0;

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1;

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_short_inst_0[2];

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0[2];

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_short_inst_0[2];

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____expansions_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____expansions_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(
  MR_Word tscc_proc_1_input_1_Info_7,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_32,
  MR_Word tscc_proc_1_input_3_Inst_9,
  MR_Word tscc_proc_1_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11);

static void MR_CALL 
hlds__error_msg_inst__inst_name_to_inline_pieces_6_p_0(
  MR_Word tscc_proc_2_input_1_Info_7,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_32,
  MR_Word tscc_proc_2_input_3_InstName_9,
  MR_Word tscc_proc_2_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11);

static void MR_CALL 
hlds__error_msg_inst__inst_to_pieces_6_p_0(
  MR_Word tscc_proc_1_input_1_Info_7,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_32,
  MR_Word tscc_proc_1_input_3_Inst_9,
  MR_Word tscc_proc_1_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11);

static void MR_CALL 
hlds__error_msg_inst__inst_name_to_pieces_6_p_0(
  MR_Word tscc_proc_2_input_1_Info_7,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_32,
  MR_Word tscc_proc_2_input_3_InstName_9,
  MR_Word tscc_proc_2_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11);

static void MR_CALL 
hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_27,
  MR_Word * STATE_VARIABLE_Expansions_28,
  MR_Word HeadBoundInst_10,
  MR_Word TailBoundInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_19,
  MR_Word * STATE_VARIABLE_Expansions_20,
  MR_Word HeadInst_10,
  MR_Word TailInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__insts_to_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_19,
  MR_Word * STATE_VARIABLE_Expansions_20,
  MR_Word HeadInst_10,
  MR_Word TailInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19,
  MR_String Name_10,
  MR_Word ArgInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19,
  MR_String Name_10,
  MR_Word ArgInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__arg_insts_to_inline_pieces_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Expansions_0_2,
  MR_Word * STATE_VARIABLE_Expansions_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__error_msg_inst__arg_insts_to_pieces_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Expansions_0_2,
  MR_Word * STATE_VARIABLE_Expansions_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__error_msg_inst__user_defined_mode_to_inline_pieces_6_p_0(
  MR_Word Info_7,
  MR_Word STATE_VARIABLE_Expansions_0_16,
  MR_Word * STATE_VARIABLE_Expansions_17,
  MR_Word ModeName_9,
  MR_Word ArgInsts_10,
  MR_Word * Pieces_11);

static void MR_CALL 
hlds__error_msg_inst__user_defined_mode_to_pieces_6_p_0(
  MR_Word Info_7,
  MR_Word STATE_VARIABLE_Expansions_0_16,
  MR_Word * STATE_VARIABLE_Expansions_17,
  MR_Word ModeName_9,
  MR_Word ArgInsts_10,
  MR_Word * Pieces_11);

static void MR_CALL 
hlds__error_msg_inst__modes_to_inline_pieces_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Expansions_0_2,
  MR_Word * STATE_VARIABLE_Expansions_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__error_msg_inst__modes_to_pieces_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Expansions_0_2,
  MR_Word * STATE_VARIABLE_Expansions_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_31,
  MR_Word * STATE_VARIABLE_Expansions_32,
  MR_String AnyPrefix_10,
  MR_Word Uniq_11,
  MR_Word PredInstInfo_12,
  MR_Word * Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_31,
  MR_Word * STATE_VARIABLE_Expansions_32,
  MR_String AnyPrefix_10,
  MR_Word Uniq_11,
  MR_Word PredInstInfo_12,
  MR_Word * Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__bound_insts_to_inline_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_27,
  MR_Word * STATE_VARIABLE_Expansions_28,
  MR_Word HeadBoundInst_10,
  MR_Word TailBoundInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__record_internal_inst_name_5_p_0(
  MR_Word InstName_6,
  MR_String InstNameStr_7,
  MR_Word * InstNumPieces_8,
  MR_Word STATE_VARIABLE_Expansions_0_16,
  MR_Word * STATE_VARIABLE_Expansions_17);

static void MR_CALL 
hlds__error_msg_inst__record_user_inst_name_4_p_0(
  MR_Word InstName_5,
  MR_Word Pieces_6,
  MR_Word STATE_VARIABLE_Expansions_0_11,
  MR_Word * STATE_VARIABLE_Expansions_12);

static MR_bool MR_CALL 
hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(
  MR_Word Expansions_4,
  MR_Word InstName_5,
  MR_Word * PastPieces_6);

static void MR_CALL 
hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(
  MR_Word Info_4,
  MR_Word SymName_5,
  MR_String * SymNameStr_6);

static MR_bool MR_CALL 
hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(
  MR_Word Pieces_4,
  MR_Integer Left_5,
  MR_String * Summary_6);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____expansions_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____expansions_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_1[21][2];

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_3[18][1];




static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_1[21][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which expands to"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "named inst"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "<"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ">"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[19])))
  },
};

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__error_msg_inst_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_3[18][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) ")")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "(")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "=<")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "free")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "not_reached")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) ";")) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "\044any_inst")) },
  /* row   7 */
  { ((MR_Box) ((MR_String) "\044ground_inst")) },
  /* row   8 */
  { ((MR_Box) ((MR_String) "\044merge_inst")) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "\044mostly_uniq_inst")) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "\044shared_inst")) },
  /* row  11 */
  { ((MR_Box) ((MR_String) "\044unify_inst")) },
  /* row  12 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row  13 */
  { ((MR_Box) ((MR_String) "/*")) },
  /* row  14 */
  { ((MR_Box) ((MR_String) "*/")) },
  /* row  15 */
  { ((MR_Box) ((MR_String) ") =")) },
  /* row  16 */
  { ((MR_Box) ((MR_String) "=")) },
  /* row  17 */
  { ((MR_Box) ((MR_String) ">>")) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__error_msg_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0),
    (MR_TypeInfo) (&hlds__error_msg_inst__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
};

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_expansions_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__error_msg_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0)
};

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_expansions_info_0_0[2] = {
  (MR_String) "ei_seen_inst_names",
  (MR_String) "ei_inst_num_counter"
};

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_expansions_info_0_0 = {
  (MR_String) "expansions_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__error_msg_inst__hlds__error_msg_inst__field_types_expansions_info_0_0,
  hlds__error_msg_inst__hlds__error_msg_inst__field_names_expansions_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_expansions_info_0_0[1] = { &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_expansions_info_0_0 };

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_expansions_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_expansions_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_expansions_info_0[1] = { &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_expansions_info_0_0 };

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_expansions_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_expansions_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__error_msg_inst____Unify____expansions_info_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____expansions_info_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "expansions_info",
  { hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_expansions_info_0 },
  { hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_expansions_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_expansions_info_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0)
};

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0[3] = {
  (MR_String) "imi_module_info",
  (MR_String) "imi_inst_varset",
  (MR_String) "imi_named_insts"
};

static const MR_DuArgLocn hlds__error_msg_inst__hlds__error_msg_inst__field_locns_inst_msg_info_0_0[3] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0 = {
  (MR_String) "inst_msg_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0,
  hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0,
  hlds__error_msg_inst__hlds__error_msg_inst__field_locns_inst_msg_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0[1] = { &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0 };

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0[1] = { &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0 };

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_inst_msg_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "inst_msg_info",
  { hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0 },
  { hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0,

};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0 = {
  (MR_String) "dont_expand_named_insts",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1 = {
  (MR_String) "expand_named_insts",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_maybe_expand_named_insts_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1
};

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "maybe_expand_named_insts",
  { hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0 },
  { hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_maybe_expand_named_insts_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0,

};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0 = {
  (MR_String) "quote_short_inst",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1 = {
  (MR_String) "fixed_short_inst",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_short_inst_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0
};

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_short_inst_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_short_inst_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__error_msg_inst____Unify____short_inst_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____short_inst_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "short_inst",
  { hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0 },
  { hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_short_inst_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_short_inst_0,

};

void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0(
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
hlds__error_msg_inst____Unify____short_inst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0(
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
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&hlds__error_msg_inst_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____expansions_info_0_0(
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
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__counter____Compare____counter_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____expansions_info_0_0(
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
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_Word MR_CALL 
hlds__error_msg_inst__error_msg_inst_8_f_0(
  MR_Word ModuleInfo_10,
  MR_Word InstVarSet_11,
  MR_Word ExpandNamedInsts_12,
  MR_Word QuoteShortInst_13,
  MR_Word ShortInstSuffix_14,
  MR_Word LongInstPrefix_15,
  MR_Word LongInstSuffix_16,
  MR_Word Inst0_17)
{
  MR_bool succeeded;
  MR_Word Pieces_18;
  MR_Word Info_19;
  MR_Word Inst_20;
  MR_Word Expansions0_21;
  MR_Word InlinePieces_24;
  MR_String InlineStr_25;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word _InlineExpansions_23;
  MR_Integer Len_26;

  {
    Info_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_19, 0) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, Info_19, 1) = ((MR_Box) (InstVarSet_11));
    MR_hl_field(0, Info_19, 2) = (MR_Box) ((MR_Unsigned) (ExpandNamedInsts_12));
  }
  parse_tree__prog_mode__strip_module_names_from_inst_3_p_0((MR_Integer) 0, Inst0_17, &Inst_20);
  Var_31 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]));
  Var_32 = mercury__counter__init_1_f_0((MR_Integer) 1);
  {
    Expansions0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Expansions0_21, 0) = ((MR_Box) (Var_31));
    MR_hl_field(0, Expansions0_21, 1) = ((MR_Box) (Var_32));
  }
  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_19, Expansions0_21, &_InlineExpansions_23, Inst_20, (MR_Word) ((MR_Unsigned) 0U), &InlinePieces_24);
  InlineStr_25 = parse_tree__write_error_spec__error_pieces_to_string_1_f_0(InlinePieces_24);
  mercury__string__length_2_p_0(InlineStr_25, &Len_26);
  succeeded = (Len_26 < (MR_Integer) 40);
  if (succeeded)
  {
    MR_Word InlinePiece_27;

    switch (QuoteShortInst_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          InlinePiece_27 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, InlinePiece_27, 0) = ((MR_Box) (InlineStr_25));
        }
        break;
      case (MR_Integer) 0:
        {
          InlinePiece_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, InlinePiece_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, InlinePiece_27, 1) = ((MR_Box) (InlineStr_25));
        }
        break;
    }
    {
      Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (InlinePiece_27));
      MR_hl_field(1, Pieces_18, 1) = ((MR_Box) (ShortInstSuffix_14));
    }
  }
  else
  {
    MR_Word NonInlinePieces_29;
    MR_Word _NonInlineExpansions_28;

    hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_19, Expansions0_21, &_NonInlineExpansions_28, Inst_20, LongInstSuffix_16, &NonInlinePieces_29);
    Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), LongInstPrefix_15, NonInlinePieces_29);
  }
  return Pieces_18;
}

static void MR_CALL 
hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(
  MR_Word tscc_proc_1_input_1_Info_7,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_32,
  MR_Word tscc_proc_1_input_3_Inst_9,
  MR_Word tscc_proc_1_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11)
{
  MR_Word tscc_proc_2_input_1_Info_7;
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67;
  MR_Word tscc_proc_2_input_3_InstName_9;
  MR_Word tscc_proc_2_input_4_Suffix_10;
  MR_Word tscc_output_1_STATE_VARIABLE_Expansions_32;
  MR_Word tscc_output_2_Pieces_11;

  // The code for TSCC PROC 1: pred hlds.error_msg_inst.inst_to_inline_pieces/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.error_msg_inst.inst_to_inline_pieces/6-0
  ;
  // proc 2 in TSCC: pred hlds.error_msg_inst.inst_name_to_inline_pieces/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Info_7 = tscc_proc_1_input_1_Info_7;
    MR_Word STATE_VARIABLE_Expansions_0_31 = tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31;
    MR_Word STATE_VARIABLE_Expansions_32;
    MR_Word Inst_9 = tscc_proc_1_input_3_Inst_9;
    MR_Word Suffix_10 = tscc_proc_1_input_4_Suffix_10;
    MR_Word Pieces_11;

    switch (MR_tag((MR_Word) Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[3])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[4])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_19 = ((MR_Word) ((MR_hl_field(1, Inst_9, (MR_Integer) 1))));
          MR_Word Uniq_73 = ((MR_Unsigned) ((MR_hl_field(1, Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);

          if ((HOInstInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Str_22;
            MR_Word Var_49;

            Str_22 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_73, (MR_String) "ground");
            {
              Var_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_49, 0) = ((MR_Box) (Str_22));
            }
            {
              Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_49));
              MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
          }
          else
          {
            MR_Word PredInstInfo_20 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_19), (MR_Integer) 1));
            MR_Word HOPieces_21;

            hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, (MR_String) "", Uniq_73, PredInstInfo_20, &HOPieces_21);
            Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_21, Suffix_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(2, Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(2, Inst_9, (MR_Integer) 2))));
          MR_String BoundName_15;

          BoundName_15 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_12, (MR_String) "bound");
          if ((BoundInsts_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_36;

            {
              Var_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_36, 0) = ((MR_Box) (BoundName_15));
            }
            {
              Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_36));
              MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
          }
          else
          {
            MR_Word HeadBoundInst_16 = ((MR_Word) ((MR_hl_field(1, BoundInsts_14, (MR_Integer) 0))));
            MR_Word TailBoundInsts_17 = ((MR_Word) ((MR_hl_field(1, BoundInsts_14, (MR_Integer) 1))));
            MR_Word BoundPieces_18;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_String Var_41;
            MR_Word Var_43;

            hlds__error_msg_inst__bound_insts_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, HeadBoundInst_16, TailBoundInsts_17, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_18);
            Var_41 = mercury__string__f_43_43_2_f_0(BoundName_15, (MR_String) "(");
            {
              Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Var_40, 1) = ((MR_Box) (Var_41));
            }
            {
              Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
              MR_hl_field(1, Var_39, 1) = ((MR_Box) (BoundPieces_18));
            }
            {
              Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
              MR_hl_field(1, Var_43, 1) = ((MR_Box) (Suffix_10));
            }
            Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_43);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_30 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67 = STATE_VARIABLE_Expansions_0_31;
              MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_30;
              MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
              tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67;
              tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
              tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_26 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
              MR_Word SubInst_27 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));
              MR_String Names_28;
              MR_Word SubInstPieces_29;
              MR_Word Var_56;
              MR_Word Var_59;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_67;
              MR_Word InstVarSet_85 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 1))));

              Var_56 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_26);
              Names_28 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_85, (MR_Integer) 0, Var_56);
              hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, SubInst_27, (MR_Word) ((MR_Unsigned) 0U), &SubInstPieces_29);
              {
                Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_63, 1) = ((MR_Box) (Names_28));
              }
              {
                Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[2])));
                MR_hl_field(1, Var_64, 1) = ((MR_Box) (SubInstPieces_29));
              }
              {
                Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
                MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_64));
              }
              {
                Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[1])));
                MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
              }
              {
                Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
                MR_hl_field(1, Var_67, 1) = ((MR_Box) (Suffix_10));
              }
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_67);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_80 = ((MR_Unsigned) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_81 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));

              if ((HOInstInfo_81 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_52;
                MR_String Str_76;

                Str_76 = parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(Uniq_80);
                {
                  Var_52 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_52, 0) = ((MR_Box) (Str_76));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_52));
                  MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
              }
              else
              {
                MR_Word PredInstInfo_74 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_81), (MR_Integer) 1));
                MR_Word HOPieces_75;

                hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, (MR_String) "any_", Uniq_80, PredInstInfo_74, &HOPieces_75);
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_75, Suffix_10);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_23 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
              MR_Word InstVarSet_24 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 1))));
              MR_String Name_25;
              MR_Word Var_54;

              Name_25 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_24, (MR_Integer) 0, Var_23);
              {
                Var_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_54, 0) = ((MR_Box) (Name_25));
              }
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_54));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_32;
    tscc_output_2_Pieces_11 = Pieces_11;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_7 = tscc_proc_2_input_1_Info_7;
    MR_Word STATE_VARIABLE_Expansions_0_67 = tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67;
    MR_Word STATE_VARIABLE_Expansions_68;
    MR_Word InstName_9 = tscc_proc_2_input_3_InstName_9;
    MR_Word Suffix_10 = tscc_proc_2_input_4_Suffix_10;
    MR_Word Pieces_11;
    MR_bool succeeded;
    MR_Word PastPieces_12;

    succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_67, InstName_9, &PastPieces_12);
    if (succeeded)
    {
      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PastPieces_12, Suffix_10);
      STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
    }
    else
      switch (MR_tag((MR_Word) InstName_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, InstName_9, (MR_Integer) 0))));
            MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(0, InstName_9, (MR_Integer) 1))));
            MR_String SymNameStr_15;
            MR_Word NameInfo_16;
            MR_Word ModuleInfo_17;
            MR_Word InstTable_18;
            MR_Word UserInstTable_19;
            MR_Integer Arity_20;
            MR_Word InstCtor_21;
            MR_Word Var_126;
            MR_Word InstDefn_22;
            MR_Box conv0_InstDefn_22;

            hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_7, SymName_13, &SymNameStr_15);
            ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
            Var_126 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 1))));
            {
              NameInfo_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameInfo_16, 0) = ((MR_Box) (ModuleInfo_17));
              MR_hl_field(0, NameInfo_16, 1) = ((MR_Box) (Var_126));
              MR_hl_field(0, NameInfo_16, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_17, &InstTable_18);
            hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_18, &UserInstTable_19);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_14, &Arity_20);
            {
              InstCtor_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InstCtor_21, 0) = ((MR_Box) (SymName_13));
              MR_hl_field(0, InstCtor_21, 1) = ((MR_Box) (Arity_20));
            }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_19, ((MR_Box) (InstCtor_21)), &conv0_InstDefn_22);
            if (succeeded)
            {
              InstDefn_22 = ((MR_Word) (conv0_InstDefn_22));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word NamePieces_24;
              MR_Word NamedNamePieces_25;
              MR_Word ExpandInsts_26;
              MR_Word Var_23;

              hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_67, &Var_23, SymNameStr_15, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_24);
              {
                NamedNamePieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NamedNamePieces_25, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                MR_hl_field(1, NamedNamePieces_25, 1) = ((MR_Box) (NamePieces_24));
              }
              ExpandInsts_26 = ((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (ExpandInsts_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_24, Suffix_10);
                    STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Params_28;
                    MR_Word InstBody_29;
                    MR_Word EqvInst0_33;
                    MR_Word EqvInst_34;
                    MR_Word STATE_VARIABLE_Expansions_73_73;
                    MR_Word Var_146;

                    hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_9, NamedNamePieces_25, STATE_VARIABLE_Expansions_0_67, &STATE_VARIABLE_Expansions_73_73);
                    Params_28 = ((MR_Word) ((MR_hl_field(0, InstDefn_22, (MR_Integer) 1))));
                    InstBody_29 = ((MR_Word) ((MR_hl_field(0, InstDefn_22, (MR_Integer) 2))));
                    EqvInst0_33 = (MR_Word) (InstBody_29);
                    parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_28, ArgInsts_14, EqvInst0_33, &EqvInst_34);
                    succeeded = ((((MR_tag((MR_Word) EqvInst_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_34, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_146 = ((MR_Word) ((MR_hl_field(3, EqvInst_34, (MR_Integer) 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_146);
                    }
                    if (succeeded)
                    {
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_25, Suffix_10);
                      STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_73_73;
                    }
                    else
                    {
                      MR_Word ExpandedPieces_35;
                      MR_Word Var_75;
                      MR_Word Var_76;
                      MR_Word Var_79;

                      hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_73_73, &STATE_VARIABLE_Expansions_68, EqvInst_34, Suffix_10, &ExpandedPieces_35);
                      {
                        Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_79, 1) = ((MR_Box) (ExpandedPieces_35));
                      }
                      {
                        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_76, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                        MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_79));
                      }
                      Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[16])));
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_25, Var_75);
                    }
                  }
                  break;
              }
            }
            else
            {
              MR_Word TypeCtorInfo_141_141;
              MR_Word TypeCtorInfo_142_142;
              MR_String BaseName_36;
              MR_Word Builtin_37;
              MR_Word BuiltinInstCtor_38;
              MR_Word Var_86;
              MR_Box conv1__InstDefn_39;

              succeeded = ((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 0);
              if (succeeded)
              {
                BaseName_36 = ((MR_String) ((MR_hl_field(0, SymName_13, (MR_Integer) 0))));
                Builtin_37 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                TypeCtorInfo_141_141 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0);
                TypeCtorInfo_142_142 = (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0);
                {
                  Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_86, 0) = ((MR_Box) (Builtin_37));
                  MR_hl_field(1, Var_86, 1) = ((MR_Box) (BaseName_36));
                }
                {
                  BuiltinInstCtor_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BuiltinInstCtor_38, 0) = ((MR_Box) (Var_86));
                  MR_hl_field(0, BuiltinInstCtor_38, 1) = ((MR_Box) (Arity_20));
                }
                succeeded = mercury__map__search_3_p_0(TypeCtorInfo_141_141, TypeCtorInfo_142_142, UserInstTable_19, ((MR_Box) (BuiltinInstCtor_38)), &conv1__InstDefn_39);
                if (succeeded)
                  succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word NamePieces_115;
                MR_Word Var_40;

                hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_67, &Var_40, SymNameStr_15, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_115);
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_115, Suffix_10);
              }
              else
              {
                MR_String ConsIdName_41;
                MR_Word Var_88;
                MR_String Var_89;

                succeeded = ((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_88 = ((MR_Word) ((MR_hl_field(1, SymName_13, (MR_Integer) 0))));
                  ConsIdName_41 = ((MR_String) ((MR_hl_field(1, SymName_13, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_88)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_89 = ((MR_String) ((MR_hl_field(0, Var_88, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_89, (MR_String) "FAKE_CONS_ID") == 0);
                  }
                }
                if (succeeded)
                {
                  MR_Word NamePieces_116;
                  MR_Word Var_42;

                  hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_67, &Var_42, ConsIdName_41, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_116);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_116, Suffix_10);
                }
                else
                {
                  MR_String InstCtorName_43;
                  MR_String Msg_44;
                  MR_String Var_438;
                  MR_String Var_446;
                  MR_String Var_447;

                  InstCtorName_43 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_13);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[12]), Arity_20, &Var_438);
                  Var_446 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_438);
                  Var_447 = mercury__string__f_43_43_2_f_0(InstCtorName_43, Var_446);
                  Msg_44 = mercury__string__f_43_43_2_f_0((MR_String) "undefined inst ", Var_447);
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.error_msg_inst.inst_name_to_inline_pieces\'/6", Msg_44);
                    return;
                  }
                }
              }
              STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_432 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
            MR_Word EqvInst_433;
            MR_Word Var_382;

            check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_432, InstName_9, &EqvInst_433);
            succeeded = ((((MR_tag((MR_Word) EqvInst_433)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_433, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_382 = ((MR_Word) ((MR_hl_field(3, EqvInst_433, (MR_Integer) 1))));
              succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_382);
            }
            if (succeeded)
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[11])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
            }
            else
            {
              MR_Word InstNumPieces_384;
              MR_Word EqvPieces_385;
              MR_Word STATE_VARIABLE_Expansions_102_386;
              MR_Word Var_388;
              MR_Word Var_389;
              MR_Word Var_392;
              MR_Word Var_395;

              hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044unify_inst", &InstNumPieces_384, STATE_VARIABLE_Expansions_0_67, &STATE_VARIABLE_Expansions_102_386);
              hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_102_386, &STATE_VARIABLE_Expansions_68, EqvInst_433, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_385);
              {
                Var_392 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_392, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                MR_hl_field(1, Var_392, 1) = ((MR_Box) (EqvPieces_385));
              }
              {
                Var_389 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_389, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                MR_hl_field(1, Var_389, 1) = ((MR_Box) (Var_392));
              }
              {
                Var_395 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_395, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[15])));
                MR_hl_field(1, Var_395, 1) = ((MR_Box) (Suffix_10));
              }
              Var_388 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_389, Var_395);
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_384, Var_388);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ModuleInfo_258 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
            MR_Word EqvInst_259;
            MR_Word Var_208;

            check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_258, InstName_9, &EqvInst_259);
            succeeded = ((((MR_tag((MR_Word) EqvInst_259)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_259, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_208 = ((MR_Word) ((MR_hl_field(3, EqvInst_259, (MR_Integer) 1))));
              succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_208);
            }
            if (succeeded)
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[8])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
            }
            else
            {
              MR_Word InstNumPieces_210;
              MR_Word EqvPieces_211;
              MR_Word STATE_VARIABLE_Expansions_102_212;
              MR_Word Var_214;
              MR_Word Var_215;
              MR_Word Var_218;
              MR_Word Var_221;

              hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044merge_inst", &InstNumPieces_210, STATE_VARIABLE_Expansions_0_67, &STATE_VARIABLE_Expansions_102_212);
              hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_102_212, &STATE_VARIABLE_Expansions_68, EqvInst_259, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_211);
              {
                Var_218 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_218, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                MR_hl_field(1, Var_218, 1) = ((MR_Box) (EqvPieces_211));
              }
              {
                Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_215, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                MR_hl_field(1, Var_215, 1) = ((MR_Box) (Var_218));
              }
              {
                Var_221 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_221, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[15])));
                MR_hl_field(1, Var_221, 1) = ((MR_Box) (Suffix_10));
              }
              Var_214 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_215, Var_221);
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_210, Var_214);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstName_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleInfo_200 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_201;
                MR_Word Var_150;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_200, InstName_9, &EqvInst_201);
                succeeded = ((((MR_tag((MR_Word) EqvInst_201)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_201, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_150 = ((MR_Word) ((MR_hl_field(3, EqvInst_201, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_150);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[7])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
                }
                else
                {
                  MR_Word InstNumPieces_152;
                  MR_Word EqvPieces_153;
                  MR_Word STATE_VARIABLE_Expansions_102_154;
                  MR_Word Var_156;
                  MR_Word Var_157;
                  MR_Word Var_160;
                  MR_Word Var_163;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044ground_inst", &InstNumPieces_152, STATE_VARIABLE_Expansions_0_67, &STATE_VARIABLE_Expansions_102_154);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_102_154, &STATE_VARIABLE_Expansions_68, EqvInst_201, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_153);
                  {
                    Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_160, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_160, 1) = ((MR_Box) (EqvPieces_153));
                  }
                  {
                    Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_157, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_157, 1) = ((MR_Box) (Var_160));
                  }
                  {
                    Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_163, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[15])));
                    MR_hl_field(1, Var_163, 1) = ((MR_Box) (Suffix_10));
                  }
                  Var_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_157, Var_163);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_152, Var_156);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleInfo_123 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_124;
                MR_Word Var_147;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_123, InstName_9, &EqvInst_124);
                succeeded = ((((MR_tag((MR_Word) EqvInst_124)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_124, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_147 = ((MR_Word) ((MR_hl_field(3, EqvInst_124, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_147);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[6])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
                }
                else
                {
                  MR_Word InstNumPieces_65;
                  MR_Word EqvPieces_66;
                  MR_Word STATE_VARIABLE_Expansions_102_102;
                  MR_Word Var_105;
                  MR_Word Var_106;
                  MR_Word Var_109;
                  MR_Word Var_112;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044any_inst", &InstNumPieces_65, STATE_VARIABLE_Expansions_0_67, &STATE_VARIABLE_Expansions_102_102);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_102_102, &STATE_VARIABLE_Expansions_68, EqvInst_124, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_66);
                  {
                    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_109, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_109, 1) = ((MR_Box) (EqvPieces_66));
                  }
                  {
                    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_106, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_109));
                  }
                  {
                    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_112, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[15])));
                    MR_hl_field(1, Var_112, 1) = ((MR_Box) (Suffix_10));
                  }
                  Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, Var_112);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_65, Var_105);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModuleInfo_374 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_375;
                MR_Word Var_324;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_374, InstName_9, &EqvInst_375);
                succeeded = ((((MR_tag((MR_Word) EqvInst_375)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_375, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_324 = ((MR_Word) ((MR_hl_field(3, EqvInst_375, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_324);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[10])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
                }
                else
                {
                  MR_Word InstNumPieces_326;
                  MR_Word EqvPieces_327;
                  MR_Word STATE_VARIABLE_Expansions_102_328;
                  MR_Word Var_330;
                  MR_Word Var_331;
                  MR_Word Var_334;
                  MR_Word Var_337;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044shared_inst", &InstNumPieces_326, STATE_VARIABLE_Expansions_0_67, &STATE_VARIABLE_Expansions_102_328);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_102_328, &STATE_VARIABLE_Expansions_68, EqvInst_375, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_327);
                  {
                    Var_334 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_334, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_334, 1) = ((MR_Box) (EqvPieces_327));
                  }
                  {
                    Var_331 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_331, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_331, 1) = ((MR_Box) (Var_334));
                  }
                  {
                    Var_337 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_337, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[15])));
                    MR_hl_field(1, Var_337, 1) = ((MR_Box) (Suffix_10));
                  }
                  Var_330 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_331, Var_337);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_326, Var_330);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ModuleInfo_316 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_317;
                MR_Word Var_266;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_316, InstName_9, &EqvInst_317);
                succeeded = ((((MR_tag((MR_Word) EqvInst_317)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_317, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_266 = ((MR_Word) ((MR_hl_field(3, EqvInst_317, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_266);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[9])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
                }
                else
                {
                  MR_Word InstNumPieces_268;
                  MR_Word EqvPieces_269;
                  MR_Word STATE_VARIABLE_Expansions_102_270;
                  MR_Word Var_272;
                  MR_Word Var_273;
                  MR_Word Var_276;
                  MR_Word Var_279;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_268, STATE_VARIABLE_Expansions_0_67, &STATE_VARIABLE_Expansions_102_270);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_102_270, &STATE_VARIABLE_Expansions_68, EqvInst_317, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_269);
                  {
                    Var_276 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_276, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_276, 1) = ((MR_Box) (EqvPieces_269));
                  }
                  {
                    Var_273 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_273, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_273, 1) = ((MR_Box) (Var_276));
                  }
                  {
                    Var_279 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_279, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[15])));
                    MR_hl_field(1, Var_279, 1) = ((MR_Box) (Suffix_10));
                  }
                  Var_272 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_273, Var_279);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_268, Var_272);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Uniq_47 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word EqvInst_121;
                MR_Word next_value_of_tscc_proc_1_input_1_Info_7;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31;
                MR_Word next_value_of_tscc_proc_1_input_3_Inst_9;
                MR_Word next_value_of_tscc_proc_1_input_4_Suffix_10;

                {
                  EqvInst_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, EqvInst_121, 0) = (MR_Box) ((MR_Unsigned) (Uniq_47));
                  MR_hl_field(1, EqvInst_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_7 = Info_7;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31 = STATE_VARIABLE_Expansions_0_67;
                next_value_of_tscc_proc_1_input_3_Inst_9 = EqvInst_121;
                next_value_of_tscc_proc_1_input_4_Suffix_10 = Suffix_10;
                tscc_proc_1_input_1_Info_7 = next_value_of_tscc_proc_1_input_1_Info_7;
                tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31;
                tscc_proc_1_input_3_Inst_9 = next_value_of_tscc_proc_1_input_3_Inst_9;
                tscc_proc_1_input_4_Suffix_10 = next_value_of_tscc_proc_1_input_4_Suffix_10;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubInstName_46 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67 = STATE_VARIABLE_Expansions_0_67;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = SubInstName_46;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67;
                tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
    tscc_output_1_STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_68;
    tscc_output_2_Pieces_11 = Pieces_11;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Expansions_32 = tscc_output_1_STATE_VARIABLE_Expansions_32;
  *tscc_output_ptr_2_Pieces_11 = tscc_output_2_Pieces_11;
  return;
}

static void MR_CALL 
hlds__error_msg_inst__inst_name_to_inline_pieces_6_p_0(
  MR_Word tscc_proc_2_input_1_Info_7,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_32,
  MR_Word tscc_proc_2_input_3_InstName_9,
  MR_Word tscc_proc_2_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11)
{
  MR_Word tscc_proc_1_input_1_Info_7;
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31;
  MR_Word tscc_proc_1_input_3_Inst_9;
  MR_Word tscc_proc_1_input_4_Suffix_10;
  MR_Word tscc_output_1_STATE_VARIABLE_Expansions_32;
  MR_Word tscc_output_2_Pieces_11;

  // The code for TSCC PROC 2: pred hlds.error_msg_inst.inst_name_to_inline_pieces/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.error_msg_inst.inst_to_inline_pieces/6-0
  ;
  // proc 2 in TSCC: pred hlds.error_msg_inst.inst_name_to_inline_pieces/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Info_7 = tscc_proc_1_input_1_Info_7;
    MR_Word STATE_VARIABLE_Expansions_0_31 = tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31;
    MR_Word STATE_VARIABLE_Expansions_32;
    MR_Word Inst_9 = tscc_proc_1_input_3_Inst_9;
    MR_Word Suffix_10 = tscc_proc_1_input_4_Suffix_10;
    MR_Word Pieces_11;

    switch (MR_tag((MR_Word) Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[3])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[4])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_19 = ((MR_Word) ((MR_hl_field(1, Inst_9, (MR_Integer) 1))));
          MR_Word Uniq_73 = ((MR_Unsigned) ((MR_hl_field(1, Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);

          if ((HOInstInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Str_22;
            MR_Word Var_49;

            Str_22 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_73, (MR_String) "ground");
            {
              Var_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_49, 0) = ((MR_Box) (Str_22));
            }
            {
              Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_49));
              MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
          }
          else
          {
            MR_Word PredInstInfo_20 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_19), (MR_Integer) 1));
            MR_Word HOPieces_21;

            hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, (MR_String) "", Uniq_73, PredInstInfo_20, &HOPieces_21);
            Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_21, Suffix_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(2, Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(2, Inst_9, (MR_Integer) 2))));
          MR_String BoundName_15;

          BoundName_15 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_12, (MR_String) "bound");
          if ((BoundInsts_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_36;

            {
              Var_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_36, 0) = ((MR_Box) (BoundName_15));
            }
            {
              Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_36));
              MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
          }
          else
          {
            MR_Word HeadBoundInst_16 = ((MR_Word) ((MR_hl_field(1, BoundInsts_14, (MR_Integer) 0))));
            MR_Word TailBoundInsts_17 = ((MR_Word) ((MR_hl_field(1, BoundInsts_14, (MR_Integer) 1))));
            MR_Word BoundPieces_18;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_String Var_41;
            MR_Word Var_43;

            hlds__error_msg_inst__bound_insts_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, HeadBoundInst_16, TailBoundInsts_17, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_18);
            Var_41 = mercury__string__f_43_43_2_f_0(BoundName_15, (MR_String) "(");
            {
              Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Var_40, 1) = ((MR_Box) (Var_41));
            }
            {
              Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
              MR_hl_field(1, Var_39, 1) = ((MR_Box) (BoundPieces_18));
            }
            {
              Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
              MR_hl_field(1, Var_43, 1) = ((MR_Box) (Suffix_10));
            }
            Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_43);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_30 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67 = STATE_VARIABLE_Expansions_0_31;
              MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_30;
              MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
              tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67;
              tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
              tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_26 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
              MR_Word SubInst_27 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));
              MR_String Names_28;
              MR_Word SubInstPieces_29;
              MR_Word Var_56;
              MR_Word Var_59;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_67;
              MR_Word InstVarSet_85 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 1))));

              Var_56 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_26);
              Names_28 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_85, (MR_Integer) 0, Var_56);
              hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, SubInst_27, (MR_Word) ((MR_Unsigned) 0U), &SubInstPieces_29);
              {
                Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_63, 1) = ((MR_Box) (Names_28));
              }
              {
                Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[2])));
                MR_hl_field(1, Var_64, 1) = ((MR_Box) (SubInstPieces_29));
              }
              {
                Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
                MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_64));
              }
              {
                Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[1])));
                MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
              }
              {
                Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
                MR_hl_field(1, Var_67, 1) = ((MR_Box) (Suffix_10));
              }
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_67);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_80 = ((MR_Unsigned) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_81 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));

              if ((HOInstInfo_81 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_52;
                MR_String Str_76;

                Str_76 = parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(Uniq_80);
                {
                  Var_52 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_52, 0) = ((MR_Box) (Str_76));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_52));
                  MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
              }
              else
              {
                MR_Word PredInstInfo_74 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_81), (MR_Integer) 1));
                MR_Word HOPieces_75;

                hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, (MR_String) "any_", Uniq_80, PredInstInfo_74, &HOPieces_75);
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_75, Suffix_10);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_23 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
              MR_Word InstVarSet_24 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 1))));
              MR_String Name_25;
              MR_Word Var_54;

              Name_25 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_24, (MR_Integer) 0, Var_23);
              {
                Var_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_54, 0) = ((MR_Box) (Name_25));
              }
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_54));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_32;
    tscc_output_2_Pieces_11 = Pieces_11;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_7 = tscc_proc_2_input_1_Info_7;
    MR_Word STATE_VARIABLE_Expansions_0_67 = tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67;
    MR_Word STATE_VARIABLE_Expansions_68;
    MR_Word InstName_9 = tscc_proc_2_input_3_InstName_9;
    MR_Word Suffix_10 = tscc_proc_2_input_4_Suffix_10;
    MR_Word Pieces_11;
    MR_bool succeeded;
    MR_Word PastPieces_12;

    succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_67, InstName_9, &PastPieces_12);
    if (succeeded)
    {
      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PastPieces_12, Suffix_10);
      STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
    }
    else
      switch (MR_tag((MR_Word) InstName_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, InstName_9, (MR_Integer) 0))));
            MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(0, InstName_9, (MR_Integer) 1))));
            MR_String SymNameStr_15;
            MR_Word NameInfo_16;
            MR_Word ModuleInfo_17;
            MR_Word InstTable_18;
            MR_Word UserInstTable_19;
            MR_Integer Arity_20;
            MR_Word InstCtor_21;
            MR_Word Var_126;
            MR_Word InstDefn_22;
            MR_Box conv0_InstDefn_22;

            hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_7, SymName_13, &SymNameStr_15);
            ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
            Var_126 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 1))));
            {
              NameInfo_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameInfo_16, 0) = ((MR_Box) (ModuleInfo_17));
              MR_hl_field(0, NameInfo_16, 1) = ((MR_Box) (Var_126));
              MR_hl_field(0, NameInfo_16, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_17, &InstTable_18);
            hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_18, &UserInstTable_19);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_14, &Arity_20);
            {
              InstCtor_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InstCtor_21, 0) = ((MR_Box) (SymName_13));
              MR_hl_field(0, InstCtor_21, 1) = ((MR_Box) (Arity_20));
            }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_19, ((MR_Box) (InstCtor_21)), &conv0_InstDefn_22);
            if (succeeded)
            {
              InstDefn_22 = ((MR_Word) (conv0_InstDefn_22));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word NamePieces_24;
              MR_Word NamedNamePieces_25;
              MR_Word ExpandInsts_26;
              MR_Word Var_23;

              hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_67, &Var_23, SymNameStr_15, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_24);
              {
                NamedNamePieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NamedNamePieces_25, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                MR_hl_field(1, NamedNamePieces_25, 1) = ((MR_Box) (NamePieces_24));
              }
              ExpandInsts_26 = ((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (ExpandInsts_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_24, Suffix_10);
                    STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Params_28;
                    MR_Word InstBody_29;
                    MR_Word EqvInst0_33;
                    MR_Word EqvInst_34;
                    MR_Word STATE_VARIABLE_Expansions_73_73;
                    MR_Word Var_146;

                    hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_9, NamedNamePieces_25, STATE_VARIABLE_Expansions_0_67, &STATE_VARIABLE_Expansions_73_73);
                    Params_28 = ((MR_Word) ((MR_hl_field(0, InstDefn_22, (MR_Integer) 1))));
                    InstBody_29 = ((MR_Word) ((MR_hl_field(0, InstDefn_22, (MR_Integer) 2))));
                    EqvInst0_33 = (MR_Word) (InstBody_29);
                    parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_28, ArgInsts_14, EqvInst0_33, &EqvInst_34);
                    succeeded = ((((MR_tag((MR_Word) EqvInst_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_34, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_146 = ((MR_Word) ((MR_hl_field(3, EqvInst_34, (MR_Integer) 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_146);
                    }
                    if (succeeded)
                    {
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_25, Suffix_10);
                      STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_73_73;
                    }
                    else
                    {
                      MR_Word ExpandedPieces_35;
                      MR_Word Var_75;
                      MR_Word Var_76;
                      MR_Word Var_79;

                      hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_73_73, &STATE_VARIABLE_Expansions_68, EqvInst_34, Suffix_10, &ExpandedPieces_35);
                      {
                        Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_79, 1) = ((MR_Box) (ExpandedPieces_35));
                      }
                      {
                        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_76, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                        MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_79));
                      }
                      Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[16])));
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_25, Var_75);
                    }
                  }
                  break;
              }
            }
            else
            {
              MR_Word TypeCtorInfo_141_141;
              MR_Word TypeCtorInfo_142_142;
              MR_String BaseName_36;
              MR_Word Builtin_37;
              MR_Word BuiltinInstCtor_38;
              MR_Word Var_86;
              MR_Box conv1__InstDefn_39;

              succeeded = ((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 0);
              if (succeeded)
              {
                BaseName_36 = ((MR_String) ((MR_hl_field(0, SymName_13, (MR_Integer) 0))));
                Builtin_37 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                TypeCtorInfo_141_141 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0);
                TypeCtorInfo_142_142 = (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0);
                {
                  Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_86, 0) = ((MR_Box) (Builtin_37));
                  MR_hl_field(1, Var_86, 1) = ((MR_Box) (BaseName_36));
                }
                {
                  BuiltinInstCtor_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BuiltinInstCtor_38, 0) = ((MR_Box) (Var_86));
                  MR_hl_field(0, BuiltinInstCtor_38, 1) = ((MR_Box) (Arity_20));
                }
                succeeded = mercury__map__search_3_p_0(TypeCtorInfo_141_141, TypeCtorInfo_142_142, UserInstTable_19, ((MR_Box) (BuiltinInstCtor_38)), &conv1__InstDefn_39);
                if (succeeded)
                  succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word NamePieces_115;
                MR_Word Var_40;

                hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_67, &Var_40, SymNameStr_15, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_115);
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_115, Suffix_10);
              }
              else
              {
                MR_String ConsIdName_41;
                MR_Word Var_88;
                MR_String Var_89;

                succeeded = ((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_88 = ((MR_Word) ((MR_hl_field(1, SymName_13, (MR_Integer) 0))));
                  ConsIdName_41 = ((MR_String) ((MR_hl_field(1, SymName_13, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_88)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_89 = ((MR_String) ((MR_hl_field(0, Var_88, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_89, (MR_String) "FAKE_CONS_ID") == 0);
                  }
                }
                if (succeeded)
                {
                  MR_Word NamePieces_116;
                  MR_Word Var_42;

                  hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_67, &Var_42, ConsIdName_41, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_116);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_116, Suffix_10);
                }
                else
                {
                  MR_String InstCtorName_43;
                  MR_String Msg_44;
                  MR_String Var_438;
                  MR_String Var_446;
                  MR_String Var_447;

                  InstCtorName_43 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_13);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[12]), Arity_20, &Var_438);
                  Var_446 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_438);
                  Var_447 = mercury__string__f_43_43_2_f_0(InstCtorName_43, Var_446);
                  Msg_44 = mercury__string__f_43_43_2_f_0((MR_String) "undefined inst ", Var_447);
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.error_msg_inst.inst_name_to_inline_pieces\'/6", Msg_44);
                    return;
                  }
                }
              }
              STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_432 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
            MR_Word EqvInst_433;
            MR_Word Var_382;

            check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_432, InstName_9, &EqvInst_433);
            succeeded = ((((MR_tag((MR_Word) EqvInst_433)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_433, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_382 = ((MR_Word) ((MR_hl_field(3, EqvInst_433, (MR_Integer) 1))));
              succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_382);
            }
            if (succeeded)
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[11])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
            }
            else
            {
              MR_Word InstNumPieces_384;
              MR_Word EqvPieces_385;
              MR_Word STATE_VARIABLE_Expansions_102_386;
              MR_Word Var_388;
              MR_Word Var_389;
              MR_Word Var_392;
              MR_Word Var_395;

              hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044unify_inst", &InstNumPieces_384, STATE_VARIABLE_Expansions_0_67, &STATE_VARIABLE_Expansions_102_386);
              hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_102_386, &STATE_VARIABLE_Expansions_68, EqvInst_433, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_385);
              {
                Var_392 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_392, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                MR_hl_field(1, Var_392, 1) = ((MR_Box) (EqvPieces_385));
              }
              {
                Var_389 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_389, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                MR_hl_field(1, Var_389, 1) = ((MR_Box) (Var_392));
              }
              {
                Var_395 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_395, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[15])));
                MR_hl_field(1, Var_395, 1) = ((MR_Box) (Suffix_10));
              }
              Var_388 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_389, Var_395);
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_384, Var_388);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ModuleInfo_258 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
            MR_Word EqvInst_259;
            MR_Word Var_208;

            check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_258, InstName_9, &EqvInst_259);
            succeeded = ((((MR_tag((MR_Word) EqvInst_259)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_259, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_208 = ((MR_Word) ((MR_hl_field(3, EqvInst_259, (MR_Integer) 1))));
              succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_208);
            }
            if (succeeded)
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[8])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
            }
            else
            {
              MR_Word InstNumPieces_210;
              MR_Word EqvPieces_211;
              MR_Word STATE_VARIABLE_Expansions_102_212;
              MR_Word Var_214;
              MR_Word Var_215;
              MR_Word Var_218;
              MR_Word Var_221;

              hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044merge_inst", &InstNumPieces_210, STATE_VARIABLE_Expansions_0_67, &STATE_VARIABLE_Expansions_102_212);
              hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_102_212, &STATE_VARIABLE_Expansions_68, EqvInst_259, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_211);
              {
                Var_218 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_218, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                MR_hl_field(1, Var_218, 1) = ((MR_Box) (EqvPieces_211));
              }
              {
                Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_215, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                MR_hl_field(1, Var_215, 1) = ((MR_Box) (Var_218));
              }
              {
                Var_221 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_221, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[15])));
                MR_hl_field(1, Var_221, 1) = ((MR_Box) (Suffix_10));
              }
              Var_214 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_215, Var_221);
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_210, Var_214);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstName_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleInfo_200 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_201;
                MR_Word Var_150;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_200, InstName_9, &EqvInst_201);
                succeeded = ((((MR_tag((MR_Word) EqvInst_201)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_201, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_150 = ((MR_Word) ((MR_hl_field(3, EqvInst_201, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_150);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[7])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
                }
                else
                {
                  MR_Word InstNumPieces_152;
                  MR_Word EqvPieces_153;
                  MR_Word STATE_VARIABLE_Expansions_102_154;
                  MR_Word Var_156;
                  MR_Word Var_157;
                  MR_Word Var_160;
                  MR_Word Var_163;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044ground_inst", &InstNumPieces_152, STATE_VARIABLE_Expansions_0_67, &STATE_VARIABLE_Expansions_102_154);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_102_154, &STATE_VARIABLE_Expansions_68, EqvInst_201, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_153);
                  {
                    Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_160, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_160, 1) = ((MR_Box) (EqvPieces_153));
                  }
                  {
                    Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_157, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_157, 1) = ((MR_Box) (Var_160));
                  }
                  {
                    Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_163, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[15])));
                    MR_hl_field(1, Var_163, 1) = ((MR_Box) (Suffix_10));
                  }
                  Var_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_157, Var_163);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_152, Var_156);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleInfo_123 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_124;
                MR_Word Var_147;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_123, InstName_9, &EqvInst_124);
                succeeded = ((((MR_tag((MR_Word) EqvInst_124)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_124, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_147 = ((MR_Word) ((MR_hl_field(3, EqvInst_124, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_147);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[6])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
                }
                else
                {
                  MR_Word InstNumPieces_65;
                  MR_Word EqvPieces_66;
                  MR_Word STATE_VARIABLE_Expansions_102_102;
                  MR_Word Var_105;
                  MR_Word Var_106;
                  MR_Word Var_109;
                  MR_Word Var_112;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044any_inst", &InstNumPieces_65, STATE_VARIABLE_Expansions_0_67, &STATE_VARIABLE_Expansions_102_102);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_102_102, &STATE_VARIABLE_Expansions_68, EqvInst_124, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_66);
                  {
                    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_109, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_109, 1) = ((MR_Box) (EqvPieces_66));
                  }
                  {
                    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_106, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_109));
                  }
                  {
                    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_112, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[15])));
                    MR_hl_field(1, Var_112, 1) = ((MR_Box) (Suffix_10));
                  }
                  Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, Var_112);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_65, Var_105);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModuleInfo_374 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_375;
                MR_Word Var_324;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_374, InstName_9, &EqvInst_375);
                succeeded = ((((MR_tag((MR_Word) EqvInst_375)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_375, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_324 = ((MR_Word) ((MR_hl_field(3, EqvInst_375, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_324);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[10])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
                }
                else
                {
                  MR_Word InstNumPieces_326;
                  MR_Word EqvPieces_327;
                  MR_Word STATE_VARIABLE_Expansions_102_328;
                  MR_Word Var_330;
                  MR_Word Var_331;
                  MR_Word Var_334;
                  MR_Word Var_337;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044shared_inst", &InstNumPieces_326, STATE_VARIABLE_Expansions_0_67, &STATE_VARIABLE_Expansions_102_328);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_102_328, &STATE_VARIABLE_Expansions_68, EqvInst_375, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_327);
                  {
                    Var_334 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_334, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_334, 1) = ((MR_Box) (EqvPieces_327));
                  }
                  {
                    Var_331 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_331, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_331, 1) = ((MR_Box) (Var_334));
                  }
                  {
                    Var_337 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_337, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[15])));
                    MR_hl_field(1, Var_337, 1) = ((MR_Box) (Suffix_10));
                  }
                  Var_330 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_331, Var_337);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_326, Var_330);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ModuleInfo_316 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_317;
                MR_Word Var_266;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_316, InstName_9, &EqvInst_317);
                succeeded = ((((MR_tag((MR_Word) EqvInst_317)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_317, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_266 = ((MR_Word) ((MR_hl_field(3, EqvInst_317, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_266);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[9])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_68 = STATE_VARIABLE_Expansions_0_67;
                }
                else
                {
                  MR_Word InstNumPieces_268;
                  MR_Word EqvPieces_269;
                  MR_Word STATE_VARIABLE_Expansions_102_270;
                  MR_Word Var_272;
                  MR_Word Var_273;
                  MR_Word Var_276;
                  MR_Word Var_279;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_268, STATE_VARIABLE_Expansions_0_67, &STATE_VARIABLE_Expansions_102_270);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_102_270, &STATE_VARIABLE_Expansions_68, EqvInst_317, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_269);
                  {
                    Var_276 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_276, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_276, 1) = ((MR_Box) (EqvPieces_269));
                  }
                  {
                    Var_273 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_273, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_273, 1) = ((MR_Box) (Var_276));
                  }
                  {
                    Var_279 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_279, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[15])));
                    MR_hl_field(1, Var_279, 1) = ((MR_Box) (Suffix_10));
                  }
                  Var_272 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_273, Var_279);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_268, Var_272);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Uniq_47 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word EqvInst_121;
                MR_Word next_value_of_tscc_proc_1_input_1_Info_7;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31;
                MR_Word next_value_of_tscc_proc_1_input_3_Inst_9;
                MR_Word next_value_of_tscc_proc_1_input_4_Suffix_10;

                {
                  EqvInst_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, EqvInst_121, 0) = (MR_Box) ((MR_Unsigned) (Uniq_47));
                  MR_hl_field(1, EqvInst_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_7 = Info_7;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31 = STATE_VARIABLE_Expansions_0_67;
                next_value_of_tscc_proc_1_input_3_Inst_9 = EqvInst_121;
                next_value_of_tscc_proc_1_input_4_Suffix_10 = Suffix_10;
                tscc_proc_1_input_1_Info_7 = next_value_of_tscc_proc_1_input_1_Info_7;
                tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31;
                tscc_proc_1_input_3_Inst_9 = next_value_of_tscc_proc_1_input_3_Inst_9;
                tscc_proc_1_input_4_Suffix_10 = next_value_of_tscc_proc_1_input_4_Suffix_10;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubInstName_46 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67 = STATE_VARIABLE_Expansions_0_67;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = SubInstName_46;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_67;
                tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
    tscc_output_1_STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_68;
    tscc_output_2_Pieces_11 = Pieces_11;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Expansions_32 = tscc_output_1_STATE_VARIABLE_Expansions_32;
  *tscc_output_ptr_2_Pieces_11 = tscc_output_2_Pieces_11;
  return;
}

static void MR_CALL 
hlds__error_msg_inst__inst_to_pieces_6_p_0(
  MR_Word tscc_proc_1_input_1_Info_7,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_32,
  MR_Word tscc_proc_1_input_3_Inst_9,
  MR_Word tscc_proc_1_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11)
{
  MR_Word tscc_proc_2_input_1_Info_7;
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66;
  MR_Word tscc_proc_2_input_3_InstName_9;
  MR_Word tscc_proc_2_input_4_Suffix_10;
  MR_Word tscc_output_1_STATE_VARIABLE_Expansions_32;
  MR_Word tscc_output_2_Pieces_11;

  // The code for TSCC PROC 1: pred hlds.error_msg_inst.inst_to_pieces/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.error_msg_inst.inst_to_pieces/6-0
  ;
  // proc 2 in TSCC: pred hlds.error_msg_inst.inst_name_to_pieces/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Info_7 = tscc_proc_1_input_1_Info_7;
    MR_Word STATE_VARIABLE_Expansions_0_31 = tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31;
    MR_Word STATE_VARIABLE_Expansions_32;
    MR_Word Inst_9 = tscc_proc_1_input_3_Inst_9;
    MR_Word Suffix_10 = tscc_proc_1_input_4_Suffix_10;
    MR_Word Pieces_11;

    switch (MR_tag((MR_Word) Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[3])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[4])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_19 = ((MR_Word) ((MR_hl_field(1, Inst_9, (MR_Integer) 1))));
          MR_Word Uniq_80 = ((MR_Unsigned) ((MR_hl_field(1, Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);

          if ((HOInstInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Str_22;
            MR_Word Var_56;

            Str_22 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_80, (MR_String) "ground");
            {
              Var_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_56, 0) = ((MR_Box) (Str_22));
            }
            {
              Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_56));
              MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
          }
          else
          {
            MR_Word PredInstInfo_20 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_19), (MR_Integer) 1));
            MR_Word HOPieces_21;

            hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, (MR_String) "", Uniq_80, PredInstInfo_20, &HOPieces_21);
            Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_21, Suffix_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(2, Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(2, Inst_9, (MR_Integer) 2))));
          MR_String BoundName_15;

          BoundName_15 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_12, (MR_String) "bound");
          if ((BoundInsts_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_36;

            {
              Var_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_36, 0) = ((MR_Box) (BoundName_15));
            }
            {
              Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_36));
              MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
          }
          else
          {
            MR_Word HeadBoundInst_16 = ((MR_Word) ((MR_hl_field(1, BoundInsts_14, (MR_Integer) 0))));
            MR_Word TailBoundInsts_17 = ((MR_Word) ((MR_hl_field(1, BoundInsts_14, (MR_Integer) 1))));
            MR_Word BoundPieces_18;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_44;
            MR_Word Var_47;
            MR_Word Var_50;

            hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, HeadBoundInst_16, TailBoundInsts_17, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_18);
            {
              Var_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_40, 0) = ((MR_Box) (BoundName_15));
            }
            {
              Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
              MR_hl_field(1, Var_44, 1) = ((MR_Box) (BoundPieces_18));
            }
            {
              Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
              MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
            }
            {
              Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
              MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
            }
            {
              Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
              MR_hl_field(1, Var_50, 1) = ((MR_Box) (Suffix_10));
            }
            {
              Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
              MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
            }
            Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_47);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_30 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66 = STATE_VARIABLE_Expansions_0_31;
              MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_30;
              MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
              tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66;
              tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
              tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_26 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
              MR_Word SubInst_27 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));
              MR_String Names_28;
              MR_Word SubInstPieces_29;
              MR_Word Var_63;
              MR_Word Var_66;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_74;
              MR_Word InstVarSet_92 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 1))));

              Var_63 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_26);
              Names_28 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_92, (MR_Integer) 0, Var_63);
              hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, SubInst_27, (MR_Word) ((MR_Unsigned) 0U), &SubInstPieces_29);
              {
                Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_70, 1) = ((MR_Box) (Names_28));
              }
              {
                Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[2])));
                MR_hl_field(1, Var_71, 1) = ((MR_Box) (SubInstPieces_29));
              }
              {
                Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
                MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_71));
              }
              {
                Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[1])));
                MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
              }
              {
                Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
                MR_hl_field(1, Var_74, 1) = ((MR_Box) (Suffix_10));
              }
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_74);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_87 = ((MR_Unsigned) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_88 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));

              if ((HOInstInfo_88 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_59;
                MR_String Str_83;

                Str_83 = parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(Uniq_87);
                {
                  Var_59 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_59, 0) = ((MR_Box) (Str_83));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_59));
                  MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
              }
              else
              {
                MR_Word PredInstInfo_81 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_88), (MR_Integer) 1));
                MR_Word HOPieces_82;

                hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, (MR_String) "any_", Uniq_87, PredInstInfo_81, &HOPieces_82);
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_82, Suffix_10);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_23 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
              MR_Word InstVarSet_24 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 1))));
              MR_String Name_25;
              MR_Word Var_61;

              Name_25 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_24, (MR_Integer) 0, Var_23);
              {
                Var_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_61, 0) = ((MR_Box) (Name_25));
              }
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_61));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_32;
    tscc_output_2_Pieces_11 = Pieces_11;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_7 = tscc_proc_2_input_1_Info_7;
    MR_Word STATE_VARIABLE_Expansions_0_66 = tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66;
    MR_Word STATE_VARIABLE_Expansions_67;
    MR_Word InstName_9 = tscc_proc_2_input_3_InstName_9;
    MR_Word Suffix_10 = tscc_proc_2_input_4_Suffix_10;
    MR_Word Pieces_11;
    MR_bool succeeded;
    MR_Word PastPieces_12;

    succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_66, InstName_9, &PastPieces_12);
    if (succeeded)
    {
      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PastPieces_12, Suffix_10);
      STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
    }
    else
      switch (MR_tag((MR_Word) InstName_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, InstName_9, (MR_Integer) 0))));
            MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(0, InstName_9, (MR_Integer) 1))));
            MR_String SymNameStr_15;
            MR_Word NameInfo_16;
            MR_Word ModuleInfo_17;
            MR_Word InstTable_18;
            MR_Word UserInstTable_19;
            MR_Integer Arity_20;
            MR_Word InstCtor_21;
            MR_Word Var_131;
            MR_Word InstDefn_22;
            MR_Box conv0_InstDefn_22;

            hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_7, SymName_13, &SymNameStr_15);
            ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
            Var_131 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 1))));
            {
              NameInfo_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameInfo_16, 0) = ((MR_Box) (ModuleInfo_17));
              MR_hl_field(0, NameInfo_16, 1) = ((MR_Box) (Var_131));
              MR_hl_field(0, NameInfo_16, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_17, &InstTable_18);
            hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_18, &UserInstTable_19);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_14, &Arity_20);
            {
              InstCtor_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InstCtor_21, 0) = ((MR_Box) (SymName_13));
              MR_hl_field(0, InstCtor_21, 1) = ((MR_Box) (Arity_20));
            }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_19, ((MR_Box) (InstCtor_21)), &conv0_InstDefn_22);
            if (succeeded)
            {
              InstDefn_22 = ((MR_Word) (conv0_InstDefn_22));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word NamePieces_24;
              MR_Word NamedNamePieces_25;
              MR_Word ExpandInsts_26;
              MR_Word Var_23;

              hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_66, &Var_23, SymNameStr_15, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_24);
              {
                NamedNamePieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NamedNamePieces_25, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                MR_hl_field(1, NamedNamePieces_25, 1) = ((MR_Box) (NamePieces_24));
              }
              ExpandInsts_26 = ((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (ExpandInsts_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_24, Suffix_10);
                    STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Params_28;
                    MR_Word InstBody_29;
                    MR_Word EqvInst0_33;
                    MR_Word EqvInst_34;
                    MR_Word STATE_VARIABLE_Expansions_72_72;
                    MR_Word Var_151;

                    hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_9, NamedNamePieces_25, STATE_VARIABLE_Expansions_0_66, &STATE_VARIABLE_Expansions_72_72);
                    Params_28 = ((MR_Word) ((MR_hl_field(0, InstDefn_22, (MR_Integer) 1))));
                    InstBody_29 = ((MR_Word) ((MR_hl_field(0, InstDefn_22, (MR_Integer) 2))));
                    EqvInst0_33 = (MR_Word) (InstBody_29);
                    parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_28, ArgInsts_14, EqvInst0_33, &EqvInst_34);
                    succeeded = ((((MR_tag((MR_Word) EqvInst_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_34, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_151 = ((MR_Word) ((MR_hl_field(3, EqvInst_34, (MR_Integer) 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_151);
                    }
                    if (succeeded)
                    {
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_25, Suffix_10);
                      STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_72_72;
                    }
                    else
                    {
                      MR_Word EqvPieces_35;
                      MR_Word Var_74;
                      MR_Word Var_75;
                      MR_Word Var_77;
                      MR_Word Var_80;

                      hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_72_72, &STATE_VARIABLE_Expansions_67, EqvInst_34, Suffix_10, &EqvPieces_35);
                      {
                        Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                        MR_hl_field(1, Var_80, 1) = ((MR_Box) (EqvPieces_35));
                      }
                      {
                        Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                        MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
                      }
                      {
                        Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                        MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_77));
                      }
                      Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_25, Var_74);
                    }
                  }
                  break;
              }
            }
            else
            {
              MR_Word TypeCtorInfo_146_146;
              MR_Word TypeCtorInfo_147_147;
              MR_String BaseName_36;
              MR_Word Builtin_37;
              MR_Word BuiltinInstCtor_38;
              MR_Word Var_87;
              MR_Box conv1__InstDefn_39;

              succeeded = ((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 0);
              if (succeeded)
              {
                BaseName_36 = ((MR_String) ((MR_hl_field(0, SymName_13, (MR_Integer) 0))));
                Builtin_37 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                TypeCtorInfo_146_146 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0);
                TypeCtorInfo_147_147 = (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0);
                {
                  Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_87, 0) = ((MR_Box) (Builtin_37));
                  MR_hl_field(1, Var_87, 1) = ((MR_Box) (BaseName_36));
                }
                {
                  BuiltinInstCtor_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BuiltinInstCtor_38, 0) = ((MR_Box) (Var_87));
                  MR_hl_field(0, BuiltinInstCtor_38, 1) = ((MR_Box) (Arity_20));
                }
                succeeded = mercury__map__search_3_p_0(TypeCtorInfo_146_146, TypeCtorInfo_147_147, UserInstTable_19, ((MR_Box) (BuiltinInstCtor_38)), &conv1__InstDefn_39);
                if (succeeded)
                  succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word NamePieces_118;
                MR_Word Var_40;

                hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_66, &Var_40, SymNameStr_15, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_118);
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_118, Suffix_10);
              }
              else
              {
                MR_String ConsIdName_41;
                MR_Word Var_89;
                MR_String Var_90;

                succeeded = ((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_89 = ((MR_Word) ((MR_hl_field(1, SymName_13, (MR_Integer) 0))));
                  ConsIdName_41 = ((MR_String) ((MR_hl_field(1, SymName_13, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_89)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_90 = ((MR_String) ((MR_hl_field(0, Var_89, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_90, (MR_String) "FAKE_CONS_ID") == 0);
                  }
                }
                if (succeeded)
                {
                  MR_Word NamePieces_119;
                  MR_Word Var_42;

                  hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_66, &Var_42, ConsIdName_41, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_119);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_119, Suffix_10);
                }
                else
                {
                  MR_String InstCtorName_43;
                  MR_String Msg_44;
                  MR_String Var_473;
                  MR_String Var_481;
                  MR_String Var_482;

                  InstCtorName_43 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_13);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[12]), Arity_20, &Var_473);
                  Var_481 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_473);
                  Var_482 = mercury__string__f_43_43_2_f_0(InstCtorName_43, Var_481);
                  Msg_44 = mercury__string__f_43_43_2_f_0((MR_String) "undefined inst ", Var_482);
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.error_msg_inst.inst_name_to_pieces\'/6", Msg_44);
                    return;
                  }
                }
              }
              STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_467 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
            MR_Word EqvInst_468;
            MR_Word Var_411;

            check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_467, InstName_9, &EqvInst_468);
            succeeded = ((((MR_tag((MR_Word) EqvInst_468)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_468, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_411 = ((MR_Word) ((MR_hl_field(3, EqvInst_468, (MR_Integer) 1))));
              succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_411);
            }
            if (succeeded)
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[11])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
            }
            else
            {
              MR_Word InstNumPieces_413;
              MR_Word STATE_VARIABLE_Expansions_103_414;
              MR_Word Var_415;
              MR_Word Var_416;
              MR_Word Var_418;
              MR_Word Var_421;
              MR_Word EqvPieces_428;

              hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044unify_inst", &InstNumPieces_413, STATE_VARIABLE_Expansions_0_66, &STATE_VARIABLE_Expansions_103_414);
              hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_103_414, &STATE_VARIABLE_Expansions_67, EqvInst_468, Suffix_10, &EqvPieces_428);
              {
                Var_421 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_421, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                MR_hl_field(1, Var_421, 1) = ((MR_Box) (EqvPieces_428));
              }
              {
                Var_418 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_418, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                MR_hl_field(1, Var_418, 1) = ((MR_Box) (Var_421));
              }
              {
                Var_416 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_416, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(1, Var_416, 1) = ((MR_Box) (Var_418));
              }
              Var_415 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_416, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_413, Var_415);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ModuleInfo_275 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
            MR_Word EqvInst_276;
            MR_Word Var_219;

            check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_275, InstName_9, &EqvInst_276);
            succeeded = ((((MR_tag((MR_Word) EqvInst_276)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_276, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_219 = ((MR_Word) ((MR_hl_field(3, EqvInst_276, (MR_Integer) 1))));
              succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_219);
            }
            if (succeeded)
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[8])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
            }
            else
            {
              MR_Word InstNumPieces_221;
              MR_Word STATE_VARIABLE_Expansions_103_222;
              MR_Word Var_223;
              MR_Word Var_224;
              MR_Word Var_226;
              MR_Word Var_229;
              MR_Word EqvPieces_236;

              hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044merge_inst", &InstNumPieces_221, STATE_VARIABLE_Expansions_0_66, &STATE_VARIABLE_Expansions_103_222);
              hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_103_222, &STATE_VARIABLE_Expansions_67, EqvInst_276, Suffix_10, &EqvPieces_236);
              {
                Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_229, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                MR_hl_field(1, Var_229, 1) = ((MR_Box) (EqvPieces_236));
              }
              {
                Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_226, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                MR_hl_field(1, Var_226, 1) = ((MR_Box) (Var_229));
              }
              {
                Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_224, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(1, Var_224, 1) = ((MR_Box) (Var_226));
              }
              Var_223 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_224, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_221, Var_223);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstName_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleInfo_211 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_212;
                MR_Word Var_155;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_211, InstName_9, &EqvInst_212);
                succeeded = ((((MR_tag((MR_Word) EqvInst_212)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_212, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_155 = ((MR_Word) ((MR_hl_field(3, EqvInst_212, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_155);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[7])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
                }
                else
                {
                  MR_Word InstNumPieces_157;
                  MR_Word STATE_VARIABLE_Expansions_103_158;
                  MR_Word Var_159;
                  MR_Word Var_160;
                  MR_Word Var_162;
                  MR_Word Var_165;
                  MR_Word EqvPieces_172;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044ground_inst", &InstNumPieces_157, STATE_VARIABLE_Expansions_0_66, &STATE_VARIABLE_Expansions_103_158);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_103_158, &STATE_VARIABLE_Expansions_67, EqvInst_212, Suffix_10, &EqvPieces_172);
                  {
                    Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_165, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                    MR_hl_field(1, Var_165, 1) = ((MR_Box) (EqvPieces_172));
                  }
                  {
                    Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_162, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_162, 1) = ((MR_Box) (Var_165));
                  }
                  {
                    Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_160, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(1, Var_160, 1) = ((MR_Box) (Var_162));
                  }
                  Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_160, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_157, Var_159);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleInfo_128 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_129;
                MR_Word Var_152;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_128, InstName_9, &EqvInst_129);
                succeeded = ((((MR_tag((MR_Word) EqvInst_129)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_129, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_152 = ((MR_Word) ((MR_hl_field(3, EqvInst_129, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_152);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[6])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
                }
                else
                {
                  MR_Word InstNumPieces_65;
                  MR_Word STATE_VARIABLE_Expansions_103_103;
                  MR_Word Var_105;
                  MR_Word Var_106;
                  MR_Word Var_108;
                  MR_Word Var_111;
                  MR_Word EqvPieces_126;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044any_inst", &InstNumPieces_65, STATE_VARIABLE_Expansions_0_66, &STATE_VARIABLE_Expansions_103_103);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_103_103, &STATE_VARIABLE_Expansions_67, EqvInst_129, Suffix_10, &EqvPieces_126);
                  {
                    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_111, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                    MR_hl_field(1, Var_111, 1) = ((MR_Box) (EqvPieces_126));
                  }
                  {
                    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_108, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_111));
                  }
                  {
                    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_108));
                  }
                  Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_65, Var_105);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModuleInfo_403 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_404;
                MR_Word Var_347;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_403, InstName_9, &EqvInst_404);
                succeeded = ((((MR_tag((MR_Word) EqvInst_404)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_404, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_347 = ((MR_Word) ((MR_hl_field(3, EqvInst_404, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_347);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[10])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
                }
                else
                {
                  MR_Word InstNumPieces_349;
                  MR_Word STATE_VARIABLE_Expansions_103_350;
                  MR_Word Var_351;
                  MR_Word Var_352;
                  MR_Word Var_354;
                  MR_Word Var_357;
                  MR_Word EqvPieces_364;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044shared_inst", &InstNumPieces_349, STATE_VARIABLE_Expansions_0_66, &STATE_VARIABLE_Expansions_103_350);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_103_350, &STATE_VARIABLE_Expansions_67, EqvInst_404, Suffix_10, &EqvPieces_364);
                  {
                    Var_357 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_357, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                    MR_hl_field(1, Var_357, 1) = ((MR_Box) (EqvPieces_364));
                  }
                  {
                    Var_354 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_354, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_354, 1) = ((MR_Box) (Var_357));
                  }
                  {
                    Var_352 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_352, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(1, Var_352, 1) = ((MR_Box) (Var_354));
                  }
                  Var_351 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_352, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_349, Var_351);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ModuleInfo_339 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_340;
                MR_Word Var_283;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_339, InstName_9, &EqvInst_340);
                succeeded = ((((MR_tag((MR_Word) EqvInst_340)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_340, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_283 = ((MR_Word) ((MR_hl_field(3, EqvInst_340, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_283);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[9])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
                }
                else
                {
                  MR_Word InstNumPieces_285;
                  MR_Word STATE_VARIABLE_Expansions_103_286;
                  MR_Word Var_287;
                  MR_Word Var_288;
                  MR_Word Var_290;
                  MR_Word Var_293;
                  MR_Word EqvPieces_300;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_285, STATE_VARIABLE_Expansions_0_66, &STATE_VARIABLE_Expansions_103_286);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_103_286, &STATE_VARIABLE_Expansions_67, EqvInst_340, Suffix_10, &EqvPieces_300);
                  {
                    Var_293 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_293, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                    MR_hl_field(1, Var_293, 1) = ((MR_Box) (EqvPieces_300));
                  }
                  {
                    Var_290 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_290, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_290, 1) = ((MR_Box) (Var_293));
                  }
                  {
                    Var_288 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_288, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(1, Var_288, 1) = ((MR_Box) (Var_290));
                  }
                  Var_287 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_288, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_285, Var_287);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Uniq_47 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word EqvInst_124;
                MR_Word next_value_of_tscc_proc_1_input_1_Info_7;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31;
                MR_Word next_value_of_tscc_proc_1_input_3_Inst_9;
                MR_Word next_value_of_tscc_proc_1_input_4_Suffix_10;

                {
                  EqvInst_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, EqvInst_124, 0) = (MR_Box) ((MR_Unsigned) (Uniq_47));
                  MR_hl_field(1, EqvInst_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_7 = Info_7;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31 = STATE_VARIABLE_Expansions_0_66;
                next_value_of_tscc_proc_1_input_3_Inst_9 = EqvInst_124;
                next_value_of_tscc_proc_1_input_4_Suffix_10 = Suffix_10;
                tscc_proc_1_input_1_Info_7 = next_value_of_tscc_proc_1_input_1_Info_7;
                tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31;
                tscc_proc_1_input_3_Inst_9 = next_value_of_tscc_proc_1_input_3_Inst_9;
                tscc_proc_1_input_4_Suffix_10 = next_value_of_tscc_proc_1_input_4_Suffix_10;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubInstName_46 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66 = STATE_VARIABLE_Expansions_0_66;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = SubInstName_46;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66;
                tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
    tscc_output_1_STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_67;
    tscc_output_2_Pieces_11 = Pieces_11;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Expansions_32 = tscc_output_1_STATE_VARIABLE_Expansions_32;
  *tscc_output_ptr_2_Pieces_11 = tscc_output_2_Pieces_11;
  return;
}

static void MR_CALL 
hlds__error_msg_inst__inst_name_to_pieces_6_p_0(
  MR_Word tscc_proc_2_input_1_Info_7,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_32,
  MR_Word tscc_proc_2_input_3_InstName_9,
  MR_Word tscc_proc_2_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11)
{
  MR_Word tscc_proc_1_input_1_Info_7;
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31;
  MR_Word tscc_proc_1_input_3_Inst_9;
  MR_Word tscc_proc_1_input_4_Suffix_10;
  MR_Word tscc_output_1_STATE_VARIABLE_Expansions_32;
  MR_Word tscc_output_2_Pieces_11;

  // The code for TSCC PROC 2: pred hlds.error_msg_inst.inst_name_to_pieces/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.error_msg_inst.inst_to_pieces/6-0
  ;
  // proc 2 in TSCC: pred hlds.error_msg_inst.inst_name_to_pieces/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Info_7 = tscc_proc_1_input_1_Info_7;
    MR_Word STATE_VARIABLE_Expansions_0_31 = tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31;
    MR_Word STATE_VARIABLE_Expansions_32;
    MR_Word Inst_9 = tscc_proc_1_input_3_Inst_9;
    MR_Word Suffix_10 = tscc_proc_1_input_4_Suffix_10;
    MR_Word Pieces_11;

    switch (MR_tag((MR_Word) Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[3])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[4])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_19 = ((MR_Word) ((MR_hl_field(1, Inst_9, (MR_Integer) 1))));
          MR_Word Uniq_80 = ((MR_Unsigned) ((MR_hl_field(1, Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);

          if ((HOInstInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Str_22;
            MR_Word Var_56;

            Str_22 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_80, (MR_String) "ground");
            {
              Var_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_56, 0) = ((MR_Box) (Str_22));
            }
            {
              Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_56));
              MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
          }
          else
          {
            MR_Word PredInstInfo_20 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_19), (MR_Integer) 1));
            MR_Word HOPieces_21;

            hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, (MR_String) "", Uniq_80, PredInstInfo_20, &HOPieces_21);
            Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_21, Suffix_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(2, Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(2, Inst_9, (MR_Integer) 2))));
          MR_String BoundName_15;

          BoundName_15 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_12, (MR_String) "bound");
          if ((BoundInsts_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_36;

            {
              Var_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_36, 0) = ((MR_Box) (BoundName_15));
            }
            {
              Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_36));
              MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
          }
          else
          {
            MR_Word HeadBoundInst_16 = ((MR_Word) ((MR_hl_field(1, BoundInsts_14, (MR_Integer) 0))));
            MR_Word TailBoundInsts_17 = ((MR_Word) ((MR_hl_field(1, BoundInsts_14, (MR_Integer) 1))));
            MR_Word BoundPieces_18;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_44;
            MR_Word Var_47;
            MR_Word Var_50;

            hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, HeadBoundInst_16, TailBoundInsts_17, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_18);
            {
              Var_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_40, 0) = ((MR_Box) (BoundName_15));
            }
            {
              Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
              MR_hl_field(1, Var_44, 1) = ((MR_Box) (BoundPieces_18));
            }
            {
              Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
              MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
            }
            {
              Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
              MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
            }
            {
              Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
              MR_hl_field(1, Var_50, 1) = ((MR_Box) (Suffix_10));
            }
            {
              Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
              MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
            }
            Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_47);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_30 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66 = STATE_VARIABLE_Expansions_0_31;
              MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_30;
              MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
              tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66;
              tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
              tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_26 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
              MR_Word SubInst_27 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));
              MR_String Names_28;
              MR_Word SubInstPieces_29;
              MR_Word Var_63;
              MR_Word Var_66;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_74;
              MR_Word InstVarSet_92 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 1))));

              Var_63 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_26);
              Names_28 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_92, (MR_Integer) 0, Var_63);
              hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, SubInst_27, (MR_Word) ((MR_Unsigned) 0U), &SubInstPieces_29);
              {
                Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_70, 1) = ((MR_Box) (Names_28));
              }
              {
                Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[2])));
                MR_hl_field(1, Var_71, 1) = ((MR_Box) (SubInstPieces_29));
              }
              {
                Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
                MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_71));
              }
              {
                Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[1])));
                MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
              }
              {
                Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
                MR_hl_field(1, Var_74, 1) = ((MR_Box) (Suffix_10));
              }
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_74);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_87 = ((MR_Unsigned) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_88 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));

              if ((HOInstInfo_88 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_59;
                MR_String Str_83;

                Str_83 = parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(Uniq_87);
                {
                  Var_59 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_59, 0) = ((MR_Box) (Str_83));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_59));
                  MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
              }
              else
              {
                MR_Word PredInstInfo_81 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_88), (MR_Integer) 1));
                MR_Word HOPieces_82;

                hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_32, (MR_String) "any_", Uniq_87, PredInstInfo_81, &HOPieces_82);
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_82, Suffix_10);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_23 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
              MR_Word InstVarSet_24 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 1))));
              MR_String Name_25;
              MR_Word Var_61;

              Name_25 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_24, (MR_Integer) 0, Var_23);
              {
                Var_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_61, 0) = ((MR_Box) (Name_25));
              }
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_61));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_32;
    tscc_output_2_Pieces_11 = Pieces_11;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_7 = tscc_proc_2_input_1_Info_7;
    MR_Word STATE_VARIABLE_Expansions_0_66 = tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66;
    MR_Word STATE_VARIABLE_Expansions_67;
    MR_Word InstName_9 = tscc_proc_2_input_3_InstName_9;
    MR_Word Suffix_10 = tscc_proc_2_input_4_Suffix_10;
    MR_Word Pieces_11;
    MR_bool succeeded;
    MR_Word PastPieces_12;

    succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_66, InstName_9, &PastPieces_12);
    if (succeeded)
    {
      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PastPieces_12, Suffix_10);
      STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
    }
    else
      switch (MR_tag((MR_Word) InstName_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, InstName_9, (MR_Integer) 0))));
            MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(0, InstName_9, (MR_Integer) 1))));
            MR_String SymNameStr_15;
            MR_Word NameInfo_16;
            MR_Word ModuleInfo_17;
            MR_Word InstTable_18;
            MR_Word UserInstTable_19;
            MR_Integer Arity_20;
            MR_Word InstCtor_21;
            MR_Word Var_131;
            MR_Word InstDefn_22;
            MR_Box conv0_InstDefn_22;

            hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_7, SymName_13, &SymNameStr_15);
            ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
            Var_131 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 1))));
            {
              NameInfo_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameInfo_16, 0) = ((MR_Box) (ModuleInfo_17));
              MR_hl_field(0, NameInfo_16, 1) = ((MR_Box) (Var_131));
              MR_hl_field(0, NameInfo_16, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_17, &InstTable_18);
            hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_18, &UserInstTable_19);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_14, &Arity_20);
            {
              InstCtor_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InstCtor_21, 0) = ((MR_Box) (SymName_13));
              MR_hl_field(0, InstCtor_21, 1) = ((MR_Box) (Arity_20));
            }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_19, ((MR_Box) (InstCtor_21)), &conv0_InstDefn_22);
            if (succeeded)
            {
              InstDefn_22 = ((MR_Word) (conv0_InstDefn_22));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word NamePieces_24;
              MR_Word NamedNamePieces_25;
              MR_Word ExpandInsts_26;
              MR_Word Var_23;

              hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_66, &Var_23, SymNameStr_15, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_24);
              {
                NamedNamePieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NamedNamePieces_25, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                MR_hl_field(1, NamedNamePieces_25, 1) = ((MR_Box) (NamePieces_24));
              }
              ExpandInsts_26 = ((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (ExpandInsts_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_24, Suffix_10);
                    STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Params_28;
                    MR_Word InstBody_29;
                    MR_Word EqvInst0_33;
                    MR_Word EqvInst_34;
                    MR_Word STATE_VARIABLE_Expansions_72_72;
                    MR_Word Var_151;

                    hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_9, NamedNamePieces_25, STATE_VARIABLE_Expansions_0_66, &STATE_VARIABLE_Expansions_72_72);
                    Params_28 = ((MR_Word) ((MR_hl_field(0, InstDefn_22, (MR_Integer) 1))));
                    InstBody_29 = ((MR_Word) ((MR_hl_field(0, InstDefn_22, (MR_Integer) 2))));
                    EqvInst0_33 = (MR_Word) (InstBody_29);
                    parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_28, ArgInsts_14, EqvInst0_33, &EqvInst_34);
                    succeeded = ((((MR_tag((MR_Word) EqvInst_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_34, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_151 = ((MR_Word) ((MR_hl_field(3, EqvInst_34, (MR_Integer) 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_151);
                    }
                    if (succeeded)
                    {
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_25, Suffix_10);
                      STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_72_72;
                    }
                    else
                    {
                      MR_Word EqvPieces_35;
                      MR_Word Var_74;
                      MR_Word Var_75;
                      MR_Word Var_77;
                      MR_Word Var_80;

                      hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_72_72, &STATE_VARIABLE_Expansions_67, EqvInst_34, Suffix_10, &EqvPieces_35);
                      {
                        Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                        MR_hl_field(1, Var_80, 1) = ((MR_Box) (EqvPieces_35));
                      }
                      {
                        Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                        MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
                      }
                      {
                        Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                        MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_77));
                      }
                      Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_25, Var_74);
                    }
                  }
                  break;
              }
            }
            else
            {
              MR_Word TypeCtorInfo_146_146;
              MR_Word TypeCtorInfo_147_147;
              MR_String BaseName_36;
              MR_Word Builtin_37;
              MR_Word BuiltinInstCtor_38;
              MR_Word Var_87;
              MR_Box conv1__InstDefn_39;

              succeeded = ((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 0);
              if (succeeded)
              {
                BaseName_36 = ((MR_String) ((MR_hl_field(0, SymName_13, (MR_Integer) 0))));
                Builtin_37 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                TypeCtorInfo_146_146 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0);
                TypeCtorInfo_147_147 = (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0);
                {
                  Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_87, 0) = ((MR_Box) (Builtin_37));
                  MR_hl_field(1, Var_87, 1) = ((MR_Box) (BaseName_36));
                }
                {
                  BuiltinInstCtor_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BuiltinInstCtor_38, 0) = ((MR_Box) (Var_87));
                  MR_hl_field(0, BuiltinInstCtor_38, 1) = ((MR_Box) (Arity_20));
                }
                succeeded = mercury__map__search_3_p_0(TypeCtorInfo_146_146, TypeCtorInfo_147_147, UserInstTable_19, ((MR_Box) (BuiltinInstCtor_38)), &conv1__InstDefn_39);
                if (succeeded)
                  succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word NamePieces_118;
                MR_Word Var_40;

                hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_66, &Var_40, SymNameStr_15, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_118);
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_118, Suffix_10);
              }
              else
              {
                MR_String ConsIdName_41;
                MR_Word Var_89;
                MR_String Var_90;

                succeeded = ((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_89 = ((MR_Word) ((MR_hl_field(1, SymName_13, (MR_Integer) 0))));
                  ConsIdName_41 = ((MR_String) ((MR_hl_field(1, SymName_13, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_89)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_90 = ((MR_String) ((MR_hl_field(0, Var_89, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_90, (MR_String) "FAKE_CONS_ID") == 0);
                  }
                }
                if (succeeded)
                {
                  MR_Word NamePieces_119;
                  MR_Word Var_42;

                  hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_66, &Var_42, ConsIdName_41, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_119);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_119, Suffix_10);
                }
                else
                {
                  MR_String InstCtorName_43;
                  MR_String Msg_44;
                  MR_String Var_473;
                  MR_String Var_481;
                  MR_String Var_482;

                  InstCtorName_43 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_13);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[12]), Arity_20, &Var_473);
                  Var_481 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_473);
                  Var_482 = mercury__string__f_43_43_2_f_0(InstCtorName_43, Var_481);
                  Msg_44 = mercury__string__f_43_43_2_f_0((MR_String) "undefined inst ", Var_482);
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.error_msg_inst.inst_name_to_pieces\'/6", Msg_44);
                    return;
                  }
                }
              }
              STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_467 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
            MR_Word EqvInst_468;
            MR_Word Var_411;

            check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_467, InstName_9, &EqvInst_468);
            succeeded = ((((MR_tag((MR_Word) EqvInst_468)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_468, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_411 = ((MR_Word) ((MR_hl_field(3, EqvInst_468, (MR_Integer) 1))));
              succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_411);
            }
            if (succeeded)
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[11])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
            }
            else
            {
              MR_Word InstNumPieces_413;
              MR_Word STATE_VARIABLE_Expansions_103_414;
              MR_Word Var_415;
              MR_Word Var_416;
              MR_Word Var_418;
              MR_Word Var_421;
              MR_Word EqvPieces_428;

              hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044unify_inst", &InstNumPieces_413, STATE_VARIABLE_Expansions_0_66, &STATE_VARIABLE_Expansions_103_414);
              hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_103_414, &STATE_VARIABLE_Expansions_67, EqvInst_468, Suffix_10, &EqvPieces_428);
              {
                Var_421 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_421, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                MR_hl_field(1, Var_421, 1) = ((MR_Box) (EqvPieces_428));
              }
              {
                Var_418 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_418, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                MR_hl_field(1, Var_418, 1) = ((MR_Box) (Var_421));
              }
              {
                Var_416 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_416, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(1, Var_416, 1) = ((MR_Box) (Var_418));
              }
              Var_415 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_416, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_413, Var_415);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ModuleInfo_275 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
            MR_Word EqvInst_276;
            MR_Word Var_219;

            check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_275, InstName_9, &EqvInst_276);
            succeeded = ((((MR_tag((MR_Word) EqvInst_276)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_276, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_219 = ((MR_Word) ((MR_hl_field(3, EqvInst_276, (MR_Integer) 1))));
              succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_219);
            }
            if (succeeded)
            {
              {
                Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[8])));
                MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
            }
            else
            {
              MR_Word InstNumPieces_221;
              MR_Word STATE_VARIABLE_Expansions_103_222;
              MR_Word Var_223;
              MR_Word Var_224;
              MR_Word Var_226;
              MR_Word Var_229;
              MR_Word EqvPieces_236;

              hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044merge_inst", &InstNumPieces_221, STATE_VARIABLE_Expansions_0_66, &STATE_VARIABLE_Expansions_103_222);
              hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_103_222, &STATE_VARIABLE_Expansions_67, EqvInst_276, Suffix_10, &EqvPieces_236);
              {
                Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_229, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                MR_hl_field(1, Var_229, 1) = ((MR_Box) (EqvPieces_236));
              }
              {
                Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_226, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                MR_hl_field(1, Var_226, 1) = ((MR_Box) (Var_229));
              }
              {
                Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_224, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(1, Var_224, 1) = ((MR_Box) (Var_226));
              }
              Var_223 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_224, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_221, Var_223);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstName_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleInfo_211 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_212;
                MR_Word Var_155;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_211, InstName_9, &EqvInst_212);
                succeeded = ((((MR_tag((MR_Word) EqvInst_212)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_212, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_155 = ((MR_Word) ((MR_hl_field(3, EqvInst_212, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_155);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[7])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
                }
                else
                {
                  MR_Word InstNumPieces_157;
                  MR_Word STATE_VARIABLE_Expansions_103_158;
                  MR_Word Var_159;
                  MR_Word Var_160;
                  MR_Word Var_162;
                  MR_Word Var_165;
                  MR_Word EqvPieces_172;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044ground_inst", &InstNumPieces_157, STATE_VARIABLE_Expansions_0_66, &STATE_VARIABLE_Expansions_103_158);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_103_158, &STATE_VARIABLE_Expansions_67, EqvInst_212, Suffix_10, &EqvPieces_172);
                  {
                    Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_165, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                    MR_hl_field(1, Var_165, 1) = ((MR_Box) (EqvPieces_172));
                  }
                  {
                    Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_162, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_162, 1) = ((MR_Box) (Var_165));
                  }
                  {
                    Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_160, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(1, Var_160, 1) = ((MR_Box) (Var_162));
                  }
                  Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_160, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_157, Var_159);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleInfo_128 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_129;
                MR_Word Var_152;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_128, InstName_9, &EqvInst_129);
                succeeded = ((((MR_tag((MR_Word) EqvInst_129)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_129, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_152 = ((MR_Word) ((MR_hl_field(3, EqvInst_129, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_152);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[6])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
                }
                else
                {
                  MR_Word InstNumPieces_65;
                  MR_Word STATE_VARIABLE_Expansions_103_103;
                  MR_Word Var_105;
                  MR_Word Var_106;
                  MR_Word Var_108;
                  MR_Word Var_111;
                  MR_Word EqvPieces_126;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044any_inst", &InstNumPieces_65, STATE_VARIABLE_Expansions_0_66, &STATE_VARIABLE_Expansions_103_103);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_103_103, &STATE_VARIABLE_Expansions_67, EqvInst_129, Suffix_10, &EqvPieces_126);
                  {
                    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_111, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                    MR_hl_field(1, Var_111, 1) = ((MR_Box) (EqvPieces_126));
                  }
                  {
                    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_108, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_111));
                  }
                  {
                    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_108));
                  }
                  Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_65, Var_105);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModuleInfo_403 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_404;
                MR_Word Var_347;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_403, InstName_9, &EqvInst_404);
                succeeded = ((((MR_tag((MR_Word) EqvInst_404)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_404, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_347 = ((MR_Word) ((MR_hl_field(3, EqvInst_404, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_347);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[10])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
                }
                else
                {
                  MR_Word InstNumPieces_349;
                  MR_Word STATE_VARIABLE_Expansions_103_350;
                  MR_Word Var_351;
                  MR_Word Var_352;
                  MR_Word Var_354;
                  MR_Word Var_357;
                  MR_Word EqvPieces_364;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044shared_inst", &InstNumPieces_349, STATE_VARIABLE_Expansions_0_66, &STATE_VARIABLE_Expansions_103_350);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_103_350, &STATE_VARIABLE_Expansions_67, EqvInst_404, Suffix_10, &EqvPieces_364);
                  {
                    Var_357 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_357, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                    MR_hl_field(1, Var_357, 1) = ((MR_Box) (EqvPieces_364));
                  }
                  {
                    Var_354 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_354, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_354, 1) = ((MR_Box) (Var_357));
                  }
                  {
                    Var_352 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_352, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(1, Var_352, 1) = ((MR_Box) (Var_354));
                  }
                  Var_351 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_352, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_349, Var_351);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ModuleInfo_339 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
                MR_Word EqvInst_340;
                MR_Word Var_283;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_339, InstName_9, &EqvInst_340);
                succeeded = ((((MR_tag((MR_Word) EqvInst_340)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_340, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_283 = ((MR_Word) ((MR_hl_field(3, EqvInst_340, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_283);
                }
                if (succeeded)
                {
                  {
                    Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[9])));
                    MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_67 = STATE_VARIABLE_Expansions_0_66;
                }
                else
                {
                  MR_Word InstNumPieces_285;
                  MR_Word STATE_VARIABLE_Expansions_103_286;
                  MR_Word Var_287;
                  MR_Word Var_288;
                  MR_Word Var_290;
                  MR_Word Var_293;
                  MR_Word EqvPieces_300;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_285, STATE_VARIABLE_Expansions_0_66, &STATE_VARIABLE_Expansions_103_286);
                  hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_103_286, &STATE_VARIABLE_Expansions_67, EqvInst_340, Suffix_10, &EqvPieces_300);
                  {
                    Var_293 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_293, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                    MR_hl_field(1, Var_293, 1) = ((MR_Box) (EqvPieces_300));
                  }
                  {
                    Var_290 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_290, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                    MR_hl_field(1, Var_290, 1) = ((MR_Box) (Var_293));
                  }
                  {
                    Var_288 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_288, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(1, Var_288, 1) = ((MR_Box) (Var_290));
                  }
                  Var_287 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_288, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_285, Var_287);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Uniq_47 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word EqvInst_124;
                MR_Word next_value_of_tscc_proc_1_input_1_Info_7;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31;
                MR_Word next_value_of_tscc_proc_1_input_3_Inst_9;
                MR_Word next_value_of_tscc_proc_1_input_4_Suffix_10;

                {
                  EqvInst_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, EqvInst_124, 0) = (MR_Box) ((MR_Unsigned) (Uniq_47));
                  MR_hl_field(1, EqvInst_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_7 = Info_7;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31 = STATE_VARIABLE_Expansions_0_66;
                next_value_of_tscc_proc_1_input_3_Inst_9 = EqvInst_124;
                next_value_of_tscc_proc_1_input_4_Suffix_10 = Suffix_10;
                tscc_proc_1_input_1_Info_7 = next_value_of_tscc_proc_1_input_1_Info_7;
                tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_31;
                tscc_proc_1_input_3_Inst_9 = next_value_of_tscc_proc_1_input_3_Inst_9;
                tscc_proc_1_input_4_Suffix_10 = next_value_of_tscc_proc_1_input_4_Suffix_10;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubInstName_46 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66 = STATE_VARIABLE_Expansions_0_66;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = SubInstName_46;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_66;
                tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
    tscc_output_1_STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_67;
    tscc_output_2_Pieces_11 = Pieces_11;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Expansions_32 = tscc_output_1_STATE_VARIABLE_Expansions_32;
  *tscc_output_ptr_2_Pieces_11 = tscc_output_2_Pieces_11;
  return;
}

static void MR_CALL 
hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_27,
  MR_Word * STATE_VARIABLE_Expansions_28,
  MR_Word HeadBoundInst_10,
  MR_Word TailBoundInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13)
{
  MR_bool succeeded;
  MR_Word HeadSuffix_14;
  MR_Word ConsId0_18;
  MR_Word ArgInsts_19;
  MR_Word ConsId_25;
  MR_String ConsIdStr_26;
  MR_Word STATE_VARIABLE_Expansions_29_29;
  MR_Integer Arity_21;
  MR_Word TypeCtor_22;
  MR_String BaseName_24;
  MR_Word SymName_20;

  if ((TailBoundInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    HeadSuffix_14 = Suffix_12;
    STATE_VARIABLE_Expansions_29_29 = STATE_VARIABLE_Expansions_0_27;
  }
  else
  {
    MR_Word HeadTailBoundInst_15 = ((MR_Word) ((MR_hl_field(1, TailBoundInsts_11, (MR_Integer) 0))));
    MR_Word TailTailBoundInsts_16 = ((MR_Word) ((MR_hl_field(1, TailBoundInsts_11, (MR_Integer) 1))));
    MR_Word TailPieces_17;
    MR_Word Var_32;
    MR_Word Var_35;

    hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_0_27, &STATE_VARIABLE_Expansions_29_29, HeadTailBoundInst_15, TailTailBoundInsts_16, Suffix_12, &TailPieces_17);
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) (TailPieces_17));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[5])));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      HeadSuffix_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadSuffix_14, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
      MR_hl_field(1, HeadSuffix_14, 1) = ((MR_Box) (Var_32));
    }
  }
  ConsId0_18 = ((MR_Word) ((MR_hl_field(0, HeadBoundInst_10, (MR_Integer) 0))));
  ArgInsts_19 = ((MR_Word) ((MR_hl_field(0, HeadBoundInst_10, (MR_Integer) 1))));
  succeeded = ((((MR_tag((MR_Word) ConsId0_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    SymName_20 = ((MR_Word) ((MR_hl_field(3, ConsId0_18, (MR_Integer) 1))));
    Arity_21 = ((MR_Integer) ((MR_hl_field(3, ConsId0_18, (MR_Integer) 2))));
    TypeCtor_22 = ((MR_Word) ((MR_hl_field(3, ConsId0_18, (MR_Integer) 3))));
    succeeded = ((MR_tag((MR_Word) SymName_20)) == (MR_Integer) 1);
    if (succeeded)
      BaseName_24 = ((MR_String) ((MR_hl_field(1, SymName_20, (MR_Integer) 1))));
  }
  if (succeeded)
  {
    MR_Word Var_38;

    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (BaseName_24));
    }
    {
      ConsId_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, ConsId_25, 1) = ((MR_Box) (Var_38));
      MR_hl_field(3, ConsId_25, 2) = ((MR_Box) (Arity_21));
      MR_hl_field(3, ConsId_25, 3) = ((MR_Box) (TypeCtor_22));
    }
  }
  else
    ConsId_25 = ConsId0_18;
  ConsIdStr_26 = parse_tree__parse_tree_out_cons_id__mercury_cons_id_to_string_3_f_0((MR_Integer) 0, (MR_Integer) 1, ConsId_25);
  hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_29_29, STATE_VARIABLE_Expansions_28, ConsIdStr_26, ArgInsts_19, HeadSuffix_14, Pieces_13);
}

static void MR_CALL 
hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_19,
  MR_Word * STATE_VARIABLE_Expansions_20,
  MR_Word HeadInst_10,
  MR_Word TailInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13)
{
  if ((TailInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_8, STATE_VARIABLE_Expansions_0_19, STATE_VARIABLE_Expansions_20, HeadInst_10, Suffix_12, Pieces_13);
  else
  {
    MR_Word HeadTailInst_15 = ((MR_Word) ((MR_hl_field(1, TailInsts_11, (MR_Integer) 0))));
    MR_Word TailTailInsts_16 = ((MR_Word) ((MR_hl_field(1, TailInsts_11, (MR_Integer) 1))));
    MR_Word HeadPieces_17;
    MR_Word TailPieces_18;
    MR_Word STATE_VARIABLE_Expansions_25_25;

    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_8, STATE_VARIABLE_Expansions_0_19, &STATE_VARIABLE_Expansions_25_25, HeadInst_10, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[10])), &HeadPieces_17);
    hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_25_25, STATE_VARIABLE_Expansions_20, HeadTailInst_15, TailTailInsts_16, Suffix_12, &TailPieces_18);
    *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadPieces_17, TailPieces_18);
  }
}

static void MR_CALL 
hlds__error_msg_inst__insts_to_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_19,
  MR_Word * STATE_VARIABLE_Expansions_20,
  MR_Word HeadInst_10,
  MR_Word TailInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13)
{
  if ((TailInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
    hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_8, STATE_VARIABLE_Expansions_0_19, STATE_VARIABLE_Expansions_20, HeadInst_10, Suffix_12, Pieces_13);
  else
  {
    MR_Word HeadTailInst_15 = ((MR_Word) ((MR_hl_field(1, TailInsts_11, (MR_Integer) 0))));
    MR_Word TailTailInsts_16 = ((MR_Word) ((MR_hl_field(1, TailInsts_11, (MR_Integer) 1))));
    MR_Word HeadPieces_17;
    MR_Word TailPieces_18;
    MR_Word STATE_VARIABLE_Expansions_27_27;

    hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_8, STATE_VARIABLE_Expansions_0_19, &STATE_VARIABLE_Expansions_27_27, HeadInst_10, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[9])), &HeadPieces_17);
    hlds__error_msg_inst__insts_to_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_27_27, STATE_VARIABLE_Expansions_20, HeadTailInst_15, TailTailInsts_16, Suffix_12, &TailPieces_18);
    *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadPieces_17, TailPieces_18);
  }
}

static void MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19,
  MR_String Name_10,
  MR_Word ArgInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13)
{
  MR_bool succeeded;

  if ((ArgInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_20, 0) = ((MR_Box) (Name_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Pieces_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (Suffix_12));
    }
    *STATE_VARIABLE_Expansions_19 = STATE_VARIABLE_Expansions_0_18;
  }
  else
  {
    MR_Word HeadArgInst_14 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, (MR_Integer) 0))));
    MR_Word TailArgInsts_15 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, (MR_Integer) 1))));
    MR_Word ArgPieces_16;
    MR_String ArgSummary_17;

    hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_0_18, STATE_VARIABLE_Expansions_19, HeadArgInst_14, TailArgInsts_15, (MR_Word) ((MR_Unsigned) 0U), &ArgPieces_16);
    succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(ArgPieces_16, (MR_Integer) 4, &ArgSummary_17);
    if (succeeded)
    {
      MR_Word Var_24;
      MR_String Var_25;
      MR_String Var_26;
      MR_String Var_28;

      Var_28 = mercury__string__f_43_43_2_f_0(ArgSummary_17, (MR_String) ")");
      Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_28);
      Var_25 = mercury__string__f_43_43_2_f_0(Name_10, Var_26);
      {
        Var_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_24, 0) = ((MR_Box) (Var_25));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_13 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
        MR_hl_field(1, base, 1) = ((MR_Box) (Suffix_12));
      }
    }
    else
    {
      MR_Word Var_30;
      MR_Word Var_31;
      MR_String Var_32;
      MR_Word Var_34;

      Var_32 = mercury__string__f_43_43_2_f_0(Name_10, (MR_String) "(");
      {
        Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_31, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(1, Var_30, 1) = ((MR_Box) (ArgPieces_16));
      }
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) (Suffix_12));
      }
      *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_34);
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19,
  MR_String Name_10,
  MR_Word ArgInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13)
{
  MR_bool succeeded;

  if ((ArgInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_20, 0) = ((MR_Box) (Name_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Pieces_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (Suffix_12));
    }
    *STATE_VARIABLE_Expansions_19 = STATE_VARIABLE_Expansions_0_18;
  }
  else
  {
    MR_Word HeadArgInst_14 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, (MR_Integer) 0))));
    MR_Word TailArgInsts_15 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, (MR_Integer) 1))));
    MR_Word ArgPieces_16;
    MR_String ArgSummary_17;

    hlds__error_msg_inst__insts_to_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_0_18, STATE_VARIABLE_Expansions_19, HeadArgInst_14, TailArgInsts_15, (MR_Word) ((MR_Unsigned) 0U), &ArgPieces_16);
    succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(ArgPieces_16, (MR_Integer) 4, &ArgSummary_17);
    if (succeeded)
    {
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_String Var_27;
      MR_String Var_29;

      {
        Var_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_24, 0) = ((MR_Box) (Name_10));
      }
      Var_29 = mercury__string__f_43_43_2_f_0(ArgSummary_17, (MR_String) ")");
      Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_29);
      {
        Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_26, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
        MR_hl_field(1, Var_25, 1) = ((MR_Box) (Suffix_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_13 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_25));
      }
    }
    else
    {
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_44;

      {
        Var_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_32, 0) = ((MR_Box) (Name_10));
      }
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[20])));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (Suffix_12));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
      }
      Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgPieces_16, Var_41);
      *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_40);
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__arg_insts_to_inline_pieces_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Expansions_0_2,
  MR_Word * STATE_VARIABLE_Expansions_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Expansions_3 = STATE_VARIABLE_Expansions_0_2;
  }
  else
  {
    MR_Word HeadArgInst_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word TailArgInsts_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word HeadPieces_14;
    MR_Word TailPieces_15;
    MR_Word STATE_VARIABLE_Expansions_18_18;

    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_18_18, HeadArgInst_12, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_14);
    hlds__error_msg_inst__arg_insts_to_inline_pieces_5_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_18_18, STATE_VARIABLE_Expansions_3, TailArgInsts_13, &TailPieces_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadPieces_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailPieces_15));
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__arg_insts_to_pieces_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Expansions_0_2,
  MR_Word * STATE_VARIABLE_Expansions_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Expansions_3 = STATE_VARIABLE_Expansions_0_2;
  }
  else
  {
    MR_Word HeadArgInst_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word TailArgInsts_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word HeadPieces_14;
    MR_Word TailPieces_15;
    MR_Word STATE_VARIABLE_Expansions_18_18;

    hlds__error_msg_inst__inst_to_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_18_18, HeadArgInst_12, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_14);
    hlds__error_msg_inst__arg_insts_to_pieces_5_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_18_18, STATE_VARIABLE_Expansions_3, TailArgInsts_13, &TailPieces_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadPieces_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailPieces_15));
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__user_defined_mode_to_inline_pieces_6_p_0(
  MR_Word Info_7,
  MR_Word STATE_VARIABLE_Expansions_0_16,
  MR_Word * STATE_VARIABLE_Expansions_17,
  MR_Word ModeName_9,
  MR_Word ArgInsts_10,
  MR_Word * Pieces_11)
{
  MR_String BaseModeName_12;

  BaseModeName_12 = mdbcomp__sym_name__unqualify_name_1_f_0(ModeName_9);
  if ((ArgInsts_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_18, 0) = ((MR_Box) (BaseModeName_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Pieces_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_Expansions_17 = STATE_VARIABLE_Expansions_0_16;
  }
  else
  {
    MR_Word ArgInstPieces_15;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_String Var_23;
    MR_Word Var_25;
    MR_Word HeadArgInst_35 = ((MR_Word) ((MR_hl_field(1, ArgInsts_10, (MR_Integer) 0))));
    MR_Word TailArgInsts_36 = ((MR_Word) ((MR_hl_field(1, ArgInsts_10, (MR_Integer) 1))));
    MR_Word HeadPieces_37;
    MR_Word TailPieces_38;
    MR_Word STATE_VARIABLE_Expansions_18_41;

    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_16, &STATE_VARIABLE_Expansions_18_41, HeadArgInst_35, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_37);
    hlds__error_msg_inst__arg_insts_to_inline_pieces_5_p_0(Info_7, STATE_VARIABLE_Expansions_18_41, STATE_VARIABLE_Expansions_17, TailArgInsts_36, &TailPieces_38);
    {
      ArgInstPieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArgInstPieces_15, 0) = ((MR_Box) (HeadPieces_37));
      MR_hl_field(1, ArgInstPieces_15, 1) = ((MR_Box) (TailPieces_38));
    }
    Var_23 = mercury__string__f_43_43_2_f_0(BaseModeName_12, (MR_String) "(");
    {
      Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_23));
    }
    Var_25 = parse_tree__error_spec__strict_component_lists_to_pieces_1_f_0(ArgInstPieces_15);
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_25));
    }
    *Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[18])));
  }
}

static void MR_CALL 
hlds__error_msg_inst__user_defined_mode_to_pieces_6_p_0(
  MR_Word Info_7,
  MR_Word STATE_VARIABLE_Expansions_0_16,
  MR_Word * STATE_VARIABLE_Expansions_17,
  MR_Word ModeName_9,
  MR_Word ArgInsts_10,
  MR_Word * Pieces_11)
{
  MR_String BaseModeName_12;

  BaseModeName_12 = mdbcomp__sym_name__unqualify_name_1_f_0(ModeName_9);
  if ((ArgInsts_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_18, 0) = ((MR_Box) (BaseModeName_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Pieces_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_Expansions_17 = STATE_VARIABLE_Expansions_0_16;
  }
  else
  {
    MR_Word ArgInstPieces_15;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_String Var_23;
    MR_Word Var_25;
    MR_Word HeadArgInst_35 = ((MR_Word) ((MR_hl_field(1, ArgInsts_10, (MR_Integer) 0))));
    MR_Word TailArgInsts_36 = ((MR_Word) ((MR_hl_field(1, ArgInsts_10, (MR_Integer) 1))));
    MR_Word HeadPieces_37;
    MR_Word TailPieces_38;
    MR_Word STATE_VARIABLE_Expansions_18_41;

    hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_16, &STATE_VARIABLE_Expansions_18_41, HeadArgInst_35, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_37);
    hlds__error_msg_inst__arg_insts_to_pieces_5_p_0(Info_7, STATE_VARIABLE_Expansions_18_41, STATE_VARIABLE_Expansions_17, TailArgInsts_36, &TailPieces_38);
    {
      ArgInstPieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArgInstPieces_15, 0) = ((MR_Box) (HeadPieces_37));
      MR_hl_field(1, ArgInstPieces_15, 1) = ((MR_Box) (TailPieces_38));
    }
    Var_23 = mercury__string__f_43_43_2_f_0(BaseModeName_12, (MR_String) "(");
    {
      Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_23));
    }
    Var_25 = parse_tree__error_spec__strict_component_lists_to_pieces_1_f_0(ArgInstPieces_15);
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_25));
    }
    *Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[18])));
  }
}

static void MR_CALL 
hlds__error_msg_inst__modes_to_inline_pieces_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Expansions_0_2,
  MR_Word * STATE_VARIABLE_Expansions_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Expansions_3 = STATE_VARIABLE_Expansions_0_2;
  }
  else
  {
    MR_Word HeadMode_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word TailModes_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word HeadPieces_14;
    MR_Word TailPieces_15;
    MR_Word STATE_VARIABLE_Expansions_18_18;
    MR_Word Mode1_19;

    parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0(HeadMode_12, &Mode1_19);
    if (((MR_tag((MR_Word) Mode1_19)) == (MR_Integer) 0))
    {
      MR_Word FromInst1_20 = ((MR_Word) ((MR_hl_field(0, Mode1_19, (MR_Integer) 0))));
      MR_Word ToInst1_21 = ((MR_Word) ((MR_hl_field(0, Mode1_19, (MR_Integer) 1))));
      MR_Word Mode_22;

      parse_tree__prog_mode__insts_to_mode_3_p_0(FromInst1_20, ToInst1_21, &Mode_22);
      if (((MR_tag((MR_Word) Mode_22)) == (MR_Integer) 0))
      {
        MR_Word FromInst_23 = ((MR_Word) ((MR_hl_field(0, Mode_22, (MR_Integer) 0))));
        MR_Word ToInst_24 = ((MR_Word) ((MR_hl_field(0, Mode_22, (MR_Integer) 1))));
        MR_Word FromPieces_25;
        MR_Word ToPieces_26;
        MR_Word STATE_VARIABLE_Expansions_22_29;
        MR_Word Var_32;

        hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_22_29, FromInst_23, (MR_Word) ((MR_Unsigned) 0U), &FromPieces_25);
        hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_22_29, &STATE_VARIABLE_Expansions_18_18, ToInst_24, (MR_Word) ((MR_Unsigned) 0U), &ToPieces_26);
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[17])));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (ToPieces_26));
        }
        HeadPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FromPieces_25, Var_32);
      }
      else
      {
        MR_Word ModeName_27 = ((MR_Word) ((MR_hl_field(1, Mode_22, (MR_Integer) 0))));
        MR_Word ArgInsts_28 = ((MR_Word) ((MR_hl_field(1, Mode_22, (MR_Integer) 1))));

        hlds__error_msg_inst__user_defined_mode_to_inline_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_18_18, ModeName_27, ArgInsts_28, &HeadPieces_14);
      }
    }
    else
    {
      MR_Word ModeName_35 = ((MR_Word) ((MR_hl_field(1, Mode1_19, (MR_Integer) 0))));
      MR_Word ArgInsts_36 = ((MR_Word) ((MR_hl_field(1, Mode1_19, (MR_Integer) 1))));

      hlds__error_msg_inst__user_defined_mode_to_inline_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_18_18, ModeName_35, ArgInsts_36, &HeadPieces_14);
    }
    hlds__error_msg_inst__modes_to_inline_pieces_5_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_18_18, STATE_VARIABLE_Expansions_3, TailModes_13, &TailPieces_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadPieces_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailPieces_15));
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__modes_to_pieces_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Expansions_0_2,
  MR_Word * STATE_VARIABLE_Expansions_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Expansions_3 = STATE_VARIABLE_Expansions_0_2;
  }
  else
  {
    MR_Word HeadMode_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word TailModes_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word HeadPieces_14;
    MR_Word TailPieces_15;
    MR_Word STATE_VARIABLE_Expansions_18_18;
    MR_Word Mode1_19;

    parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0(HeadMode_12, &Mode1_19);
    if (((MR_tag((MR_Word) Mode1_19)) == (MR_Integer) 0))
    {
      MR_Word FromInst1_20 = ((MR_Word) ((MR_hl_field(0, Mode1_19, (MR_Integer) 0))));
      MR_Word ToInst1_21 = ((MR_Word) ((MR_hl_field(0, Mode1_19, (MR_Integer) 1))));
      MR_Word Mode_22;

      parse_tree__prog_mode__insts_to_mode_3_p_0(FromInst1_20, ToInst1_21, &Mode_22);
      if (((MR_tag((MR_Word) Mode_22)) == (MR_Integer) 0))
      {
        MR_Word FromInst_23 = ((MR_Word) ((MR_hl_field(0, Mode_22, (MR_Integer) 0))));
        MR_Word ToInst_24 = ((MR_Word) ((MR_hl_field(0, Mode_22, (MR_Integer) 1))));
        MR_Word FromPieces_25;
        MR_Word ToPieces_26;
        MR_Word STATE_VARIABLE_Expansions_22_29;
        MR_Word Var_32;

        hlds__error_msg_inst__inst_to_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_22_29, FromInst_23, (MR_Word) ((MR_Unsigned) 0U), &FromPieces_25);
        hlds__error_msg_inst__inst_to_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_22_29, &STATE_VARIABLE_Expansions_18_18, ToInst_24, (MR_Word) ((MR_Unsigned) 0U), &ToPieces_26);
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[17])));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (ToPieces_26));
        }
        HeadPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FromPieces_25, Var_32);
      }
      else
      {
        MR_Word ModeName_27 = ((MR_Word) ((MR_hl_field(1, Mode_22, (MR_Integer) 0))));
        MR_Word ArgInsts_28 = ((MR_Word) ((MR_hl_field(1, Mode_22, (MR_Integer) 1))));

        hlds__error_msg_inst__user_defined_mode_to_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_18_18, ModeName_27, ArgInsts_28, &HeadPieces_14);
      }
    }
    else
    {
      MR_Word ModeName_35 = ((MR_Word) ((MR_hl_field(1, Mode1_19, (MR_Integer) 0))));
      MR_Word ArgInsts_36 = ((MR_Word) ((MR_hl_field(1, Mode1_19, (MR_Integer) 1))));

      hlds__error_msg_inst__user_defined_mode_to_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_18_18, ModeName_35, ArgInsts_36, &HeadPieces_14);
    }
    hlds__error_msg_inst__modes_to_pieces_5_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_18_18, STATE_VARIABLE_Expansions_3, TailModes_13, &TailPieces_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadPieces_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailPieces_15));
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_31,
  MR_Word * STATE_VARIABLE_Expansions_32,
  MR_String AnyPrefix_10,
  MR_Word Uniq_11,
  MR_Word PredInstInfo_12,
  MR_Word * Pieces_13)
{
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_12, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ArgModes_15 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_12, (MR_Integer) 1))));
  MR_Word Det_17 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_12, (MR_Integer) 3))) & (MR_Integer) 7);
  MR_Word UniqPieces_18;
  MR_Word ArgModesPieces_20;
  MR_String IsDetStr_21;
  MR_Word ModesDetPieces_22;
  MR_String Var_44;

  switch (Uniq_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 4:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_String BoundName_19;
        MR_Word Var_36;
        MR_Word Var_37;

        BoundName_19 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_11, (MR_String) "ground");
        {
          Var_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_37, 0) = ((MR_Box) (BoundName_19));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[17])));
        }
        {
          UniqPieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, UniqPieces_18, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[13])));
          MR_hl_field(1, UniqPieces_18, 1) = ((MR_Box) (Var_36));
        }
      }
      break;
    case (MR_Integer) 0:
      UniqPieces_18 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  hlds__error_msg_inst__modes_to_inline_pieces_5_p_0(Info_8, STATE_VARIABLE_Expansions_0_31, STATE_VARIABLE_Expansions_32, ArgModes_15, &ArgModesPieces_20);
  Var_44 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
  IsDetStr_21 = mercury__string__f_43_43_2_f_0((MR_String) "is ", Var_44);
  switch (PredOrFunc_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word RealArgModesPieces_26;
        MR_Word RetModePieces_27;
        MR_Word JoinedRealArgModePieces_28;
        MR_Box conv0_RetModePieces_27;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ArgModesPieces_20, &RealArgModesPieces_26, &conv0_RetModePieces_27);
        RetModePieces_27 = ((MR_Word) (conv0_RetModePieces_27));
        JoinedRealArgModePieces_28 = parse_tree__error_spec__strict_component_lists_to_pieces_1_f_0(RealArgModesPieces_26);
        if ((ArgModes_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_71;
          MR_Word Var_72;
          MR_String Var_73;
          MR_String Var_75;
          MR_Word Var_77;
          MR_Word Var_78;

          Var_75 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "func =");
          Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_75);
          {
            Var_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_72, 0) = ((MR_Box) (Var_73));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) (RetModePieces_27));
          }
          {
            Var_78 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_78, 0) = ((MR_Box) (IsDetStr_21));
          }
          {
            Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
            MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[18])));
          }
          ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, Var_77);
        }
        else
        {
          MR_Word Var_83;
          MR_Word Var_84;
          MR_String Var_85;
          MR_String Var_87;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_93;
          MR_Word Var_96;
          MR_Word Var_97;

          Var_87 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "func(");
          Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_87);
          {
            Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, Var_84, 1) = ((MR_Box) (Var_85));
          }
          {
            Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(1, Var_83, 1) = ((MR_Box) (JoinedRealArgModePieces_28));
          }
          {
            Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_93, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[16])));
            MR_hl_field(1, Var_93, 1) = ((MR_Box) (RetModePieces_27));
          }
          {
            Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_90, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
            MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_93));
          }
          {
            Var_97 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_97, 0) = ((MR_Box) (IsDetStr_21));
          }
          {
            Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
            MR_hl_field(1, Var_96, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[18])));
          }
          Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, Var_96);
          ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_89);
        }
      }
      break;
    case (MR_Integer) 0:
      if ((ArgModes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_45;
        MR_String Var_46;
        MR_String Var_48;
        MR_Word Var_50;
        MR_Word Var_51;

        Var_48 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "pred");
        Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_48);
        {
          Var_45 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_45, 0) = ((MR_Box) (Var_46));
        }
        {
          Var_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_51, 0) = ((MR_Box) (IsDetStr_21));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[18])));
        }
        {
          ModesDetPieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ModesDetPieces_22, 0) = ((MR_Box) (Var_45));
          MR_hl_field(1, ModesDetPieces_22, 1) = ((MR_Box) (Var_50));
        }
      }
      else
      {
        MR_Word JoinedArgModePieces_25;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_String Var_58;
        MR_String Var_60;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_66;

        JoinedArgModePieces_25 = parse_tree__error_spec__strict_component_lists_to_pieces_1_f_0(ArgModesPieces_20);
        Var_60 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "pred(");
        Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_60);
        {
          Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_57, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (JoinedArgModePieces_25));
        }
        {
          Var_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_66, 0) = ((MR_Box) (IsDetStr_21));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[18])));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
        }
        ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_62);
      }
      break;
  }
  *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UniqPieces_18, ModesDetPieces_22);
}

static void MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_31,
  MR_Word * STATE_VARIABLE_Expansions_32,
  MR_String AnyPrefix_10,
  MR_Word Uniq_11,
  MR_Word PredInstInfo_12,
  MR_Word * Pieces_13)
{
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_12, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ArgModes_15 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_12, (MR_Integer) 1))));
  MR_Word Det_17 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_12, (MR_Integer) 3))) & (MR_Integer) 7);
  MR_Word UniqPieces_18;
  MR_Word ArgModesPieces_20;
  MR_String IsDetStr_21;
  MR_Word ModesDetPieces_22;
  MR_String Var_44;

  switch (Uniq_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 4:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_String BoundName_19;
        MR_Word Var_36;
        MR_Word Var_37;

        BoundName_19 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_11, (MR_String) "ground");
        {
          Var_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_37, 0) = ((MR_Box) (BoundName_19));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[17])));
        }
        {
          UniqPieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, UniqPieces_18, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[13])));
          MR_hl_field(1, UniqPieces_18, 1) = ((MR_Box) (Var_36));
        }
      }
      break;
    case (MR_Integer) 0:
      UniqPieces_18 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  hlds__error_msg_inst__modes_to_pieces_5_p_0(Info_8, STATE_VARIABLE_Expansions_0_31, STATE_VARIABLE_Expansions_32, ArgModes_15, &ArgModesPieces_20);
  Var_44 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
  IsDetStr_21 = mercury__string__f_43_43_2_f_0((MR_String) "is ", Var_44);
  switch (PredOrFunc_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word RealArgModesPieces_26;
        MR_Word RetModePieces_27;
        MR_Word JoinedRealArgModePieces_28;
        MR_Box conv0_RetModePieces_27;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ArgModesPieces_20, &RealArgModesPieces_26, &conv0_RetModePieces_27);
        RetModePieces_27 = ((MR_Word) (conv0_RetModePieces_27));
        JoinedRealArgModePieces_28 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(RealArgModesPieces_26, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[7])));
        if ((ArgModes_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_74;
          MR_Word Var_75;
          MR_String Var_76;
          MR_String Var_78;
          MR_Word Var_80;
          MR_Word Var_81;

          Var_78 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "func =");
          Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_78);
          {
            Var_75 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_75, 0) = ((MR_Box) (Var_76));
          }
          {
            Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
            MR_hl_field(1, Var_74, 1) = ((MR_Box) (RetModePieces_27));
          }
          {
            Var_81 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_81, 0) = ((MR_Box) (IsDetStr_21));
          }
          {
            Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[18])));
          }
          ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, Var_80);
        }
        else
        {
          MR_Word Var_86;
          MR_Word Var_87;
          MR_String Var_88;
          MR_String Var_90;
          MR_Word Var_92;
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Word Var_99;
          MR_Word Var_102;
          MR_Word Var_103;

          Var_90 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "func(");
          Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_90);
          {
            Var_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_87, 0) = ((MR_Box) (Var_88));
          }
          {
            Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_92, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
            MR_hl_field(1, Var_92, 1) = ((MR_Box) (JoinedRealArgModePieces_28));
          }
          {
            Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_92));
          }
          {
            Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_99, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[15])));
            MR_hl_field(1, Var_99, 1) = ((MR_Box) (RetModePieces_27));
          }
          {
            Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_96, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
            MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_99));
          }
          {
            Var_103 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_103, 0) = ((MR_Box) (IsDetStr_21));
          }
          {
            Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
            MR_hl_field(1, Var_102, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[18])));
          }
          Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, Var_102);
          ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_86, Var_95);
        }
      }
      break;
    case (MR_Integer) 0:
      if ((ArgModes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_45;
        MR_String Var_46;
        MR_String Var_48;
        MR_Word Var_50;
        MR_Word Var_51;

        Var_48 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "pred");
        Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_48);
        {
          Var_45 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_45, 0) = ((MR_Box) (Var_46));
        }
        {
          Var_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_51, 0) = ((MR_Box) (IsDetStr_21));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[18])));
        }
        {
          ModesDetPieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ModesDetPieces_22, 0) = ((MR_Box) (Var_45));
          MR_hl_field(1, ModesDetPieces_22, 1) = ((MR_Box) (Var_50));
        }
      }
      else
      {
        MR_Word JoinedArgModePieces_25;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_String Var_58;
        MR_String Var_60;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_66;

        JoinedArgModePieces_25 = parse_tree__error_spec__strict_component_lists_to_pieces_1_f_0(ArgModesPieces_20);
        Var_60 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "pred(");
        Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_60);
        {
          Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_57, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (JoinedArgModePieces_25));
        }
        {
          Var_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_66, 0) = ((MR_Box) (IsDetStr_21));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[18])));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
        }
        ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_62);
      }
      break;
  }
  *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UniqPieces_18, ModesDetPieces_22);
}

static void MR_CALL 
hlds__error_msg_inst__bound_insts_to_inline_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_27,
  MR_Word * STATE_VARIABLE_Expansions_28,
  MR_Word HeadBoundInst_10,
  MR_Word TailBoundInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13)
{
  MR_bool succeeded;
  MR_Word HeadSuffix_14;
  MR_Word ConsId0_18;
  MR_Word ArgInsts_19;
  MR_Word ConsId_25;
  MR_String ConsIdStr_26;
  MR_Word STATE_VARIABLE_Expansions_29_29;
  MR_Integer Arity_21;
  MR_Word TypeCtor_22;
  MR_String BaseName_24;
  MR_Word SymName_20;

  if ((TailBoundInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    HeadSuffix_14 = Suffix_12;
    STATE_VARIABLE_Expansions_29_29 = STATE_VARIABLE_Expansions_0_27;
  }
  else
  {
    MR_Word HeadTailBoundInst_15 = ((MR_Word) ((MR_hl_field(1, TailBoundInsts_11, (MR_Integer) 0))));
    MR_Word TailTailBoundInsts_16 = ((MR_Word) ((MR_hl_field(1, TailBoundInsts_11, (MR_Integer) 1))));
    MR_Word TailPieces_17;

    hlds__error_msg_inst__bound_insts_to_inline_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_0_27, &STATE_VARIABLE_Expansions_29_29, HeadTailBoundInst_15, TailTailBoundInsts_16, Suffix_12, &TailPieces_17);
    {
      HeadSuffix_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadSuffix_14, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[5])));
      MR_hl_field(1, HeadSuffix_14, 1) = ((MR_Box) (TailPieces_17));
    }
  }
  ConsId0_18 = ((MR_Word) ((MR_hl_field(0, HeadBoundInst_10, (MR_Integer) 0))));
  ArgInsts_19 = ((MR_Word) ((MR_hl_field(0, HeadBoundInst_10, (MR_Integer) 1))));
  succeeded = ((((MR_tag((MR_Word) ConsId0_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    SymName_20 = ((MR_Word) ((MR_hl_field(3, ConsId0_18, (MR_Integer) 1))));
    Arity_21 = ((MR_Integer) ((MR_hl_field(3, ConsId0_18, (MR_Integer) 2))));
    TypeCtor_22 = ((MR_Word) ((MR_hl_field(3, ConsId0_18, (MR_Integer) 3))));
    succeeded = ((MR_tag((MR_Word) SymName_20)) == (MR_Integer) 1);
    if (succeeded)
      BaseName_24 = ((MR_String) ((MR_hl_field(1, SymName_20, (MR_Integer) 1))));
  }
  if (succeeded)
  {
    MR_Word Var_32;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (BaseName_24));
    }
    {
      ConsId_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, ConsId_25, 1) = ((MR_Box) (Var_32));
      MR_hl_field(3, ConsId_25, 2) = ((MR_Box) (Arity_21));
      MR_hl_field(3, ConsId_25, 3) = ((MR_Box) (TypeCtor_22));
    }
  }
  else
    ConsId_25 = ConsId0_18;
  ConsIdStr_26 = parse_tree__parse_tree_out_cons_id__mercury_cons_id_to_string_3_f_0((MR_Integer) 0, (MR_Integer) 1, ConsId_25);
  if ((ArgInsts_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_39;

    {
      Var_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_39, 0) = ((MR_Box) (ConsIdStr_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Pieces_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, base, 1) = ((MR_Box) (HeadSuffix_14));
    }
    *STATE_VARIABLE_Expansions_28 = STATE_VARIABLE_Expansions_29_29;
  }
  else
  {
    MR_Word HeadArgInst_35 = ((MR_Word) ((MR_hl_field(1, ArgInsts_19, (MR_Integer) 0))));
    MR_Word TailArgInsts_36 = ((MR_Word) ((MR_hl_field(1, ArgInsts_19, (MR_Integer) 1))));
    MR_Word ArgPieces_37;
    MR_String ArgSummary_38;

    hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_29_29, STATE_VARIABLE_Expansions_28, HeadArgInst_35, TailArgInsts_36, (MR_Word) ((MR_Unsigned) 0U), &ArgPieces_37);
    succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(ArgPieces_37, (MR_Integer) 4, &ArgSummary_38);
    if (succeeded)
    {
      MR_Word Var_42;
      MR_String Var_43;
      MR_String Var_44;
      MR_String Var_46;

      Var_46 = mercury__string__f_43_43_2_f_0(ArgSummary_38, (MR_String) ")");
      Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_46);
      Var_43 = mercury__string__f_43_43_2_f_0(ConsIdStr_26, Var_44);
      {
        Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_42, 0) = ((MR_Box) (Var_43));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_13 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_42));
        MR_hl_field(1, base, 1) = ((MR_Box) (HeadSuffix_14));
      }
    }
    else
    {
      MR_Word Var_48;
      MR_Word Var_49;
      MR_String Var_50;
      MR_Word Var_52;

      Var_50 = mercury__string__f_43_43_2_f_0(ConsIdStr_26, (MR_String) "(");
      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (ArgPieces_37));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) (HeadSuffix_14));
      }
      *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, Var_52);
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__record_internal_inst_name_5_p_0(
  MR_Word InstName_6,
  MR_String InstNameStr_7,
  MR_Word * InstNumPieces_8,
  MR_Word STATE_VARIABLE_Expansions_0_16,
  MR_Word * STATE_VARIABLE_Expansions_17)
{
  MR_Word ExpansionsMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Expansions_0_16, (MR_Integer) 0))));
  MR_Word ExpansionsCounter0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Expansions_0_16, (MR_Integer) 1))));
  MR_Integer InstNum_12;
  MR_Word ExpansionsCounter_13;
  MR_String InstNameNumStr_14;
  MR_Word ExpansionsMap_15;
  MR_Word Var_24;
  MR_String Var_28;
  MR_String Var_36;
  MR_String Var_37;

  mercury__counter__allocate_3_p_0(&InstNum_12, ExpansionsCounter0_11, &ExpansionsCounter_13);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[12]), InstNum_12, &Var_28);
  Var_36 = mercury__string__f_43_43_2_f_0((MR_String) " #", Var_28);
  Var_37 = mercury__string__f_43_43_2_f_0(InstNameStr_7, Var_36);
  InstNameNumStr_14 = mercury__string__f_43_43_2_f_0((MR_String) "internal ", Var_37);
  {
    Var_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_24, 0) = ((MR_Box) (InstNameNumStr_14));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *InstNumPieces_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ((MR_Box) (InstName_6)), ((MR_Box) (*InstNumPieces_8)), ExpansionsMap0_10, &ExpansionsMap_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Expansions_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ExpansionsMap_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExpansionsCounter_13));
  }
}

static void MR_CALL 
hlds__error_msg_inst__record_user_inst_name_4_p_0(
  MR_Word InstName_5,
  MR_Word Pieces_6,
  MR_Word STATE_VARIABLE_Expansions_0_11,
  MR_Word * STATE_VARIABLE_Expansions_12)
{
  MR_bool succeeded;
  MR_Word ExpansionsMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Expansions_0_11, (MR_Integer) 0))));
  MR_Word ExpansionsCounter0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Expansions_0_11, (MR_Integer) 1))));
  MR_Word ExpansionsMap_10;

  succeeded = mercury__map__insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ((MR_Box) (InstName_5)), ((MR_Box) (Pieces_6)), ExpansionsMap0_8, &ExpansionsMap_10);
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Expansions_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ExpansionsMap_10));
      MR_hl_field(0, base, 1) = ((MR_Box) (ExpansionsCounter0_9));
    }
  else
    *STATE_VARIABLE_Expansions_12 = STATE_VARIABLE_Expansions_0_11;
}

static MR_bool MR_CALL 
hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(
  MR_Word Expansions_4,
  MR_Word InstName_5,
  MR_Word * PastPieces_6)
{
  MR_bool succeeded;
  MR_Word ExpansionsMap_7 = ((MR_Word) ((MR_hl_field(0, Expansions_4, (MR_Integer) 0))));
  MR_Box conv0_PastPieces_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ExpansionsMap_7, ((MR_Box) (InstName_5)), &conv0_PastPieces_6);
  if (succeeded)
  {
    *PastPieces_6 = ((MR_Word) (conv0_PastPieces_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(
  MR_Word Info_4,
  MR_Word SymName_5,
  MR_String * SymNameStr_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) SymName_5)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(1, SymName_5, (MR_Integer) 0))));
    MR_String BaseName_8 = ((MR_String) ((MR_hl_field(1, SymName_5, (MR_Integer) 1))));
    MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 0))));
    MR_Word CurModuleName_10;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_9, &CurModuleName_10);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_7, CurModuleName_10);
    if (succeeded)
      *SymNameStr_6 = BaseName_8;
    else
      *SymNameStr_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_5);
  }
  else
    *SymNameStr_6 = ((MR_String) ((MR_hl_field(0, SymName_5, (MR_Integer) 0))));
}

static MR_bool MR_CALL 
hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(
  MR_Word Pieces_4,
  MR_Integer Left_5,
  MR_String * Summary_6)
{
  MR_bool succeeded = (Left_5 > (MR_Integer) 0);
  MR_String FirstFixed_7;
  MR_Word AfterFirstFixed_8;
  MR_Word Var_12;

  if (succeeded)
  {
    succeeded = (Pieces_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(1, Pieces_4, (MR_Integer) 0))));
      AfterFirstFixed_8 = ((MR_Word) ((MR_hl_field(1, Pieces_4, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 2);
      if (succeeded)
      {
        FirstFixed_7 = ((MR_String) ((MR_hl_field(2, Var_12, (MR_Integer) 0))));
        if ((AfterFirstFixed_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Summary_6 = FirstFixed_7;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TailPieces_9;
          MR_String TailSummary_10;
          MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, AfterFirstFixed_8, (MR_Integer) 0))));
          MR_String Var_14;
          MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, AfterFirstFixed_8, (MR_Integer) 1))));
          MR_Word Var_16;
          MR_Integer Var_17;
          MR_Integer Var_18;
          MR_String Var_19;
          MR_String Var_20;

          succeeded = ((((MR_tag((MR_Word) Var_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_13, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
            Var_14 = ((MR_String) ((MR_hl_field(3, Var_13, (MR_Integer) 1))));
            succeeded = (strcmp(Var_14, (MR_String) ",") == 0);
            if (succeeded)
            {
              succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_16 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 0))));
                TailPieces_9 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 1))));
                succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 8U));
                if (succeeded)
                {
                  Var_18 = (MR_Integer) 1;
                  Var_17 = (MR_Integer) ((MR_Unsigned) Left_5 - (MR_Unsigned) Var_18);
                  succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(TailPieces_9, Var_17, &TailSummary_10);
                  if (succeeded)
                  {
                    Var_20 = (MR_String) ", ";
                    Var_19 = mercury__string__f_43_43_2_f_0(Var_20, TailSummary_10);
                    *Summary_6 = mercury__string__f_43_43_2_f_0(FirstFixed_7, Var_19);
                    succeeded = MR_TRUE;
                  }
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

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____expansions_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__error_msg_inst____Unify____expansions_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____expansions_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__error_msg_inst____Compare____expansions_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__error_msg_inst____Unify____inst_msg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__error_msg_inst____Compare____inst_msg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__error_msg_inst____Unify____short_inst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__error_msg_inst____Compare____short_inst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__error_msg_inst__init(void)
{
}

void mercury__hlds__error_msg_inst__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_expansions_info_0);
	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_inst_msg_info_0);
	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0);
	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_short_inst_0);
}

void mercury__hlds__error_msg_inst__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__error_msg_inst__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.error_msg_inst.
