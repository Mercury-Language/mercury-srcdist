/*
** Automatically generated from `error_msg_inst.m'
** by the Mercury compiler,
** version rotd-2020-06-19
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
#include "bimap.mih"
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
#include "enum.mih"
#include "getopt_io.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_TypeInfo_Struct2 hlds__error_msg_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

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

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_maybe_expand_named_insts_0[2];

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0[2];

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0[2];

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0;

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1;

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_short_inst_0[2];

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
hlds__error_msg_inst__inst_to_pieces_6_p_0(
  MR_Word tscc_proc_1_input_1_Info_7,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_34,
  MR_Word tscc_proc_1_input_3_Inst_9,
  MR_Word tscc_proc_1_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11);

static void MR_CALL 
hlds__error_msg_inst__inst_name_to_pieces_6_p_0(
  MR_Word tscc_proc_2_input_1_Info_7,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_34,
  MR_Word tscc_proc_2_input_3_InstName_9,
  MR_Word tscc_proc_2_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11);

static void MR_CALL 
hlds__error_msg_inst__insts_to_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19,
  MR_Word HeadInst_10,
  MR_Word TailInsts_11,
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
hlds__error_msg_inst__arg_insts_to_pieces_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Expansions_0_2,
  MR_Word * STATE_VARIABLE_Expansions_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__error_msg_inst__mode_to_pieces_5_p_0(
  MR_Word Info_6,
  MR_Word STATE_VARIABLE_Expansions_0_26,
  MR_Word * STATE_VARIABLE_Expansions_27,
  MR_Word Mode_8,
  MR_Word * Pieces_9);

static void MR_CALL 
hlds__error_msg_inst__modes_to_pieces_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Expansions_0_2,
  MR_Word * STATE_VARIABLE_Expansions_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

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
hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_27,
  MR_Word * STATE_VARIABLE_Expansions_28,
  MR_Word HeadBoundInst_10,
  MR_Word TailBoundInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(
  MR_Word tscc_proc_1_input_1_Info_7,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_34,
  MR_Word tscc_proc_1_input_3_Inst_9,
  MR_Word tscc_proc_1_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11);

static void MR_CALL 
hlds__error_msg_inst__inst_name_to_inline_pieces_6_p_0(
  MR_Word tscc_proc_2_input_1_Info_7,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_34,
  MR_Word tscc_proc_2_input_3_InstName_9,
  MR_Word tscc_proc_2_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11);

static void MR_CALL 
hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19,
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
hlds__error_msg_inst__arg_insts_to_inline_pieces_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Expansions_0_2,
  MR_Word * STATE_VARIABLE_Expansions_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__error_msg_inst__modes_to_inline_pieces_5_p_0(
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
  MR_Word NamedNamePieces_6,
  MR_Word STATE_VARIABLE_Expansions_0_11,
  MR_Word * STATE_VARIABLE_Expansions_12);

static MR_bool MR_CALL 
hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(
  MR_Word Expansions_4,
  MR_Word InstName_5,
  MR_Word * PastPieces_6);

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


static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_1[34][2];

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_3[25][1];




static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_1[34][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 21U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which expands to"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "<"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ">"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "named inst"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Unsigned) 21U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Unsigned) 21U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__error_msg_inst_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_3[25][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "/*"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "*/"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "di"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "out"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "uo"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ">>"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "("))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "=<"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "free"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "not_reached"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\044any_inst"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\044ground_inst"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\044merge_inst"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\044mostly_uniq_inst"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "\044shared_inst"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "\044unify_inst"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) ") ="))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "ui"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "mdi"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "mui"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "muo"))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__error_msg_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0),
    (MR_TypeInfo) (&hlds__error_msg_inst__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_expansions_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__error_msg_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0),
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

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_expansions_info_0_0[1] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_expansions_info_0_0
};

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_expansions_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_expansions_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_expansions_info_0[1] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_expansions_info_0_0
};

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_expansions_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_expansions_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__error_msg_inst____Unify____expansions_info_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____expansions_info_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "expansions_info",
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_expansions_info_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_expansions_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_expansions_info_0
};

static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0)
};

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0[3] = {
  (MR_String) "imi_module_info",
  (MR_String) "imi_inst_varset",
  (MR_String) "imi_expand_named_insts"
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

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0[1] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0
};

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0[1] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0
};

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_inst_msg_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "inst_msg_info",
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0 = {
  (MR_String) "dont_expand_named_insts",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1 = {
  (MR_String) "expand_named_insts",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_maybe_expand_named_insts_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "maybe_expand_named_insts",
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_maybe_expand_named_insts_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0 = {
  (MR_String) "quote_short_inst",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1 = {
  (MR_String) "fixed_short_inst",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_short_inst_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__error_msg_inst____Unify____short_inst_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____short_inst_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "short_inst",
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_short_inst_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_short_inst_0
};

void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0(
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
hlds__error_msg_inst____Unify____short_inst_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0(
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
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0(
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
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&hlds__error_msg_inst_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____expansions_info_0_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__counter____Compare____counter_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____expansions_info_0_0(
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
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
hlds__error_msg_inst__error_msg_inst_8_f_0(
  MR_Word ModuleInfo_10,
  MR_Word InstVarSet_11,
  MR_Word ExpandNamedInsts_12,
  MR_Word ShortInstQF_13,
  MR_Word ShortInstSuffix_14,
  MR_Word LongInstPrefix_15,
  MR_Word LongInstSuffix_16,
  MR_Word Inst0_17)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_18;
    MR_Word Info_19;
    MR_Word Inst_20;
    MR_Word Expansions0_21;
    MR_Word InlinePieces_24;
    MR_String InlineStr_25;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word _InlineExpansions_23;
    MR_Integer Len_26;

    {
      Info_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_19, 0) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(MR_mktag(0), Info_19, 1) = ((MR_Box) (InstVarSet_11));
      MR_hl_field(MR_mktag(0), Info_19, 2) = (MR_Box) ((MR_Unsigned) (ExpandNamedInsts_12));
    }
    parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(Inst0_17, &Inst_20);
    Var_30 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]));
    Var_31 = mercury__counter__init_1_f_0((MR_Integer) 1);
    {
      Expansions0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Expansions0_21, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Expansions0_21, 1) = ((MR_Box) (Var_31));
    }
    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_19, Expansions0_21, &_InlineExpansions_23, Inst_20, (MR_Word) ((MR_Unsigned) 0U), &InlinePieces_24);
    InlineStr_25 = parse_tree__error_util__error_pieces_to_string_1_f_0(InlinePieces_24);
    mercury__string__length_2_p_0(InlineStr_25, &Len_26);
    succeeded = (Len_26 < (MR_Integer) 40);
    if (succeeded)
    {
      MR_Word InlinePiece_27;

      switch (ShortInstQF_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            InlinePiece_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), InlinePiece_27, 0) = ((MR_Box) (InlineStr_25));
          }
          break;
        case (MR_Integer) 0:
          {
            InlinePiece_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), InlinePiece_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), InlinePiece_27, 1) = ((MR_Box) (InlineStr_25));
          }
          break;
      }
      {
        Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_18, 0) = ((MR_Box) (InlinePiece_27));
        MR_hl_field(MR_mktag(1), Pieces_18, 1) = ((MR_Box) (ShortInstSuffix_14));
      }
    }
    else
    {
      MR_Word NonInlinePieces_29;
      MR_Word _NonInlineExpansions_28;

      hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_19, Expansions0_21, &_NonInlineExpansions_28, Inst_20, LongInstSuffix_16, &NonInlinePieces_29);
      Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), LongInstPrefix_15, NonInlinePieces_29);
    }
    return Pieces_18;
  }
}

static void MR_CALL 
hlds__error_msg_inst__inst_to_pieces_6_p_0(
  MR_Word tscc_proc_1_input_1_Info_7,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_34,
  MR_Word tscc_proc_1_input_3_Inst_9,
  MR_Word tscc_proc_1_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11)
{
  {
    MR_Word tscc_proc_2_input_1_Info_7;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46;
    MR_Word tscc_proc_2_input_3_InstName_9;
    MR_Word tscc_proc_2_input_4_Suffix_10;
    MR_Word tscc_output_1_STATE_VARIABLE_Expansions_34;
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
      MR_Word STATE_VARIABLE_Expansions_0_33 = tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
      MR_Word STATE_VARIABLE_Expansions_34;
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
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[12])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[13])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[12])));
              MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_93 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word HOInstInfo_94 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 1))));

            if ((HOInstInfo_94 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_57;
              MR_String Str_89;
              MR_Box conv0_Str_89;

              parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Uniq_93, ((MR_Box) ((MR_String) "")), &conv0_Str_89);
              Str_89 = ((MR_String) (conv0_Str_89));
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (Str_89));
              }
              {
                Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            else
            {
              MR_Word PredInstInfo_87 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_94), (MR_Integer) 1));
              MR_Word HOPieces_88;

              hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "any_", Uniq_93, PredInstInfo_87, &HOPieces_88);
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_88, Suffix_10);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Uniq_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word BoundInsts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 3))));
                MR_String BoundName_16;
                MR_Box conv1_BoundName_16;

                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Uniq_13, (MR_String) "bound", ((MR_Box) ((MR_String) "")), &conv1_BoundName_16);
                BoundName_16 = ((MR_String) (conv1_BoundName_16));
                if ((BoundInsts_15 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_83;

                  {
                    Var_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_83, 0) = ((MR_Box) (BoundName_16));
                  }
                  {
                    Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_83));
                    MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
                }
                else
                {
                  MR_Word HeadBoundInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 0))));
                  MR_Word TailBoundInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 1))));
                  MR_Word BoundPieces_19;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_Word Var_74;
                  MR_Word Var_77;
                  MR_Word Var_80;

                  hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, HeadBoundInst_17, TailBoundInsts_18, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_19);
                  {
                    Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (BoundName_16));
                  }
                  {
                    Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                    MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (BoundPieces_19));
                  }
                  {
                    Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[32])));
                    MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
                  }
                  {
                    Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
                    MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
                  }
                  {
                    Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[9])));
                    MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Suffix_10));
                  }
                  {
                    Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[26])));
                    MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
                  }
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_69, Var_77);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HOInstInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_Word Uniq_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);

                if ((HOInstInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_String Str_23;
                  MR_Word Var_62;
                  MR_Box conv3_Str_23;

                  parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Uniq_86, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &conv3_Str_23);
                  Str_23 = ((MR_String) (conv3_Str_23));
                  {
                    Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_62, 0) = ((MR_Box) (Str_23));
                  }
                  {
                    Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_62));
                    MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
                }
                else
                {
                  MR_Word PredInstInfo_21 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_20), (MR_Integer) 1));
                  MR_Word HOPieces_22;

                  hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "", Uniq_86, PredInstInfo_21, &HOPieces_22);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_22, Suffix_10);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word InstVarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_String Name_26;
                MR_Word Var_55;
                MR_Box conv4_Name_26;

                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), InstVarSet_25, (MR_Integer) 0, Var_24, ((MR_Box) ((MR_String) "")), &conv4_Name_26);
                Name_26 = ((MR_String) (conv4_Name_26));
                {
                  Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (Name_26));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_55));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Vars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word ConstrainedInst_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_String Names_29;
                MR_Word InstPieces_30;
                MR_Word Var_40;
                MR_Word Var_43;
                MR_Word Var_48;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word InstVarSet_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_Box conv2_Names_29;

                Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[2]), Vars_27);
                parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), InstVarSet_98, (MR_Integer) 0, Var_40, ((MR_Box) ((MR_String) "")), &conv2_Names_29);
                Names_29 = ((MR_String) (conv2_Names_29));
                {
                  Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[9])));
                  MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Suffix_10));
                }
                hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, ConstrainedInst_28, Var_43, &InstPieces_30);
                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Names_29));
                }
                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[11])));
                  MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (InstPieces_30));
                }
                {
                  Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
                  MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[10])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_48));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = STATE_VARIABLE_Expansions_0_33;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_100;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46;
                tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ArgInsts_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_Word InstName_32;
                MR_Word Name_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10;

                {
                  InstName_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InstName_32, 0) = ((MR_Box) (Name_99));
                  MR_hl_field(MR_mktag(0), InstName_32, 1) = ((MR_Box) (ArgInsts_31));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = STATE_VARIABLE_Expansions_0_33;
                next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_32;
                next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46;
                tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_34;
      tscc_output_2_Pieces_11 = Pieces_11;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_7 = tscc_proc_2_input_1_Info_7;
      MR_Word STATE_VARIABLE_Expansions_0_46 = tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46;
      MR_Word STATE_VARIABLE_Expansions_47;
      MR_Word InstName_9 = tscc_proc_2_input_3_InstName_9;
      MR_Word Suffix_10 = tscc_proc_2_input_4_Suffix_10;
      MR_Word Pieces_11;
      MR_bool succeeded;
      MR_Word PastPieces_12;

      succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_46, InstName_9, &PastPieces_12);
      if (succeeded)
      {
        Pieces_11 = PastPieces_12;
        STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
      }
      else
        switch (MR_tag((MR_Word) InstName_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 0))));
              MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 1))));
              MR_Word ModuleInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_String SymNameStr_19;
              MR_Word NamePieces_20;
              MR_Word NamedNamePieces_21;
              MR_Word ExpandInsts_22;
              MR_Word STATE_VARIABLE_Expansions_70_70;
              MR_Word STATE_VARIABLE_Expansions_74_74;

              if (((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1))
              {
                MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 0))));
                MR_String BaseName_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 1))));
                MR_Word CurModuleName_18;

                hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_15, &CurModuleName_18);
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_16, CurModuleName_18);
                if (succeeded)
                  SymNameStr_19 = BaseName_17;
                else
                  SymNameStr_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_13);
              }
              else
                SymNameStr_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_13, (MR_Integer) 0))));
              hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_70_70, SymNameStr_19, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_20);
              {
                NamedNamePieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NamedNamePieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[25])));
                MR_hl_field(MR_mktag(1), NamedNamePieces_21, 1) = ((MR_Box) (NamePieces_20));
              }
              hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_9, NamedNamePieces_21, STATE_VARIABLE_Expansions_70_70, &STATE_VARIABLE_Expansions_74_74);
              ExpandInsts_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (ExpandInsts_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamePieces_20, Suffix_10);
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_74_74;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word EqvInst_23;

                    check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_15, InstName_9, &EqvInst_23);
                    if (((((MR_tag((MR_Word) EqvInst_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 0)))) == (MR_Integer) 5))))
                    {
                      MR_Word TypeInfo_488_488;
                      MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 1))));
                      MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 2))));

                      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_13, Var_112);
                      if (succeeded)
                      {
                        TypeInfo_488_488 = (MR_Word) (&hlds__error_msg_inst_scalar_common_1[7]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_488_488, ((MR_Box) (ArgInsts_14)), ((MR_Box) (Var_113)));
                      }
                    }
                    else
                    if (((((MR_tag((MR_Word) EqvInst_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 0)))) == (MR_Integer) 4))))
                    {
                      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 1))));

                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_111);
                    }
                    else
                      succeeded = MR_FALSE;
                    if (succeeded)
                    {
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_21, Suffix_10);
                      STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_74_74;
                    }
                    else
                    {
                      MR_Word EqvPieces_24;
                      MR_Word Var_76;
                      MR_Word Var_77;
                      MR_Word Var_80;
                      MR_Word Var_82;
                      MR_Word Var_85;

                      hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_74_74, &STATE_VARIABLE_Expansions_47, EqvInst_23, Suffix_10, &EqvPieces_24);
                      {
                        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (EqvPieces_24));
                      }
                      {
                        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_85));
                      }
                      {
                        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_82));
                      }
                      {
                        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
                      }
                      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_77, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33])));
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_21, Var_76);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleInfo_474 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_475;
              MR_Word Var_409;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_474, InstName_9, &EqvInst_475);
              succeeded = ((((MR_tag((MR_Word) EqvInst_475)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_475, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_409 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_475, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_409);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[19])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
              }
              else
              {
                MR_Word InstNumPieces_411;
                MR_Word STATE_VARIABLE_Expansions_49_412;
                MR_Word Var_413;
                MR_Word Var_414;
                MR_Word Var_417;
                MR_Word Var_419;
                MR_Word Var_422;
                MR_Word EqvPieces_429;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044unify_inst", &InstNumPieces_411, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_412);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_412, &STATE_VARIABLE_Expansions_47, EqvInst_475, Suffix_10, &EqvPieces_429);
                {
                  Var_422 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_422, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                  MR_hl_field(MR_mktag(1), Var_422, 1) = ((MR_Box) (EqvPieces_429));
                }
                {
                  Var_419 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_419, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                  MR_hl_field(MR_mktag(1), Var_419, 1) = ((MR_Box) (Var_422));
                }
                {
                  Var_417 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_417, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_417, 1) = ((MR_Box) (Var_419));
                }
                {
                  Var_414 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_414, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                  MR_hl_field(MR_mktag(1), Var_414, 1) = ((MR_Box) (Var_417));
                }
                Var_413 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_414, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33])));
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_411, Var_413);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleInfo_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_256;
              MR_Word Var_190;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_255, InstName_9, &EqvInst_256);
              succeeded = ((((MR_tag((MR_Word) EqvInst_256)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_256, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_256, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_190);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[16])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
              }
              else
              {
                MR_Word InstNumPieces_192;
                MR_Word STATE_VARIABLE_Expansions_49_193;
                MR_Word Var_194;
                MR_Word Var_195;
                MR_Word Var_198;
                MR_Word Var_200;
                MR_Word Var_203;
                MR_Word EqvPieces_210;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044merge_inst", &InstNumPieces_192, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_193);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_193, &STATE_VARIABLE_Expansions_47, EqvInst_256, Suffix_10, &EqvPieces_210);
                {
                  Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                  MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) (EqvPieces_210));
                }
                {
                  Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                  MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (Var_203));
                }
                {
                  Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) (Var_200));
                }
                {
                  Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                  MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) (Var_198));
                }
                Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_195, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33])));
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_192, Var_194);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModuleInfo_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_183;
                  MR_Word Var_117;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_182, InstName_9, &EqvInst_183);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_183)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_183, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_183, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_117);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[15])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_119;
                    MR_Word STATE_VARIABLE_Expansions_49_120;
                    MR_Word Var_121;
                    MR_Word Var_122;
                    MR_Word Var_125;
                    MR_Word Var_127;
                    MR_Word Var_130;
                    MR_Word EqvPieces_137;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044ground_inst", &InstNumPieces_119, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_120);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_120, &STATE_VARIABLE_Expansions_47, EqvInst_183, Suffix_10, &EqvPieces_137);
                    {
                      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (EqvPieces_137));
                    }
                    {
                      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_130));
                    }
                    {
                      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_127));
                    }
                    {
                      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_125));
                    }
                    Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_122, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_119, Var_121);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModuleInfo_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_99;
                  MR_Word Var_114;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_98, InstName_9, &EqvInst_99);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_99)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_99, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_99, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_114);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[14])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_45;
                    MR_Word STATE_VARIABLE_Expansions_49_49;
                    MR_Word Var_51;
                    MR_Word Var_52;
                    MR_Word Var_55;
                    MR_Word Var_57;
                    MR_Word Var_60;
                    MR_Word EqvPieces_96;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044any_inst", &InstNumPieces_45, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_49);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_49, &STATE_VARIABLE_Expansions_47, EqvInst_99, Suffix_10, &EqvPieces_96);
                    {
                      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (EqvPieces_96));
                    }
                    {
                      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
                    }
                    {
                      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
                    }
                    {
                      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
                    }
                    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_52, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_45, Var_51);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ModuleInfo_401 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_402;
                  MR_Word Var_336;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_401, InstName_9, &EqvInst_402);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_402)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_402, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_336 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_402, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_336);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[18])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_338;
                    MR_Word STATE_VARIABLE_Expansions_49_339;
                    MR_Word Var_340;
                    MR_Word Var_341;
                    MR_Word Var_344;
                    MR_Word Var_346;
                    MR_Word Var_349;
                    MR_Word EqvPieces_356;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044shared_inst", &InstNumPieces_338, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_339);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_339, &STATE_VARIABLE_Expansions_47, EqvInst_402, Suffix_10, &EqvPieces_356);
                    {
                      Var_349 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_349, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                      MR_hl_field(MR_mktag(1), Var_349, 1) = ((MR_Box) (EqvPieces_356));
                    }
                    {
                      Var_346 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_346, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_346, 1) = ((MR_Box) (Var_349));
                    }
                    {
                      Var_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_344, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_344, 1) = ((MR_Box) (Var_346));
                    }
                    {
                      Var_341 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_341, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_341, 1) = ((MR_Box) (Var_344));
                    }
                    Var_340 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_341, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_338, Var_340);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ModuleInfo_328 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_329;
                  MR_Word Var_263;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_328, InstName_9, &EqvInst_329);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_329)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_329, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_329, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_263);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[17])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_265;
                    MR_Word STATE_VARIABLE_Expansions_49_266;
                    MR_Word Var_267;
                    MR_Word Var_268;
                    MR_Word Var_271;
                    MR_Word Var_273;
                    MR_Word Var_276;
                    MR_Word EqvPieces_283;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_265, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_266);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_266, &STATE_VARIABLE_Expansions_47, EqvInst_329, Suffix_10, &EqvPieces_283);
                    {
                      Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_276, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                      MR_hl_field(MR_mktag(1), Var_276, 1) = ((MR_Box) (EqvPieces_283));
                    }
                    {
                      Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_273, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_273, 1) = ((MR_Box) (Var_276));
                    }
                    {
                      Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_271, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_271, 1) = ((MR_Box) (Var_273));
                    }
                    {
                      Var_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_268, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_268, 1) = ((MR_Box) (Var_271));
                    }
                    Var_267 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_268, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_265, Var_267);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Uniq_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word EqvInst_94;
                  MR_Word next_value_of_tscc_proc_1_input_1_Info_7;
                  MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
                  MR_Word next_value_of_tscc_proc_1_input_3_Inst_9;
                  MR_Word next_value_of_tscc_proc_1_input_4_Suffix_10;

                  {
                    EqvInst_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), EqvInst_94, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), EqvInst_94, 1) = (MR_Box) ((MR_Unsigned) (Uniq_27));
                    MR_hl_field(MR_mktag(3), EqvInst_94, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_Info_7 = Info_7;
                  next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_46;
                  next_value_of_tscc_proc_1_input_3_Inst_9 = EqvInst_94;
                  next_value_of_tscc_proc_1_input_4_Suffix_10 = Suffix_10;
                  tscc_proc_1_input_1_Info_7 = next_value_of_tscc_proc_1_input_1_Info_7;
                  tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
                  tscc_proc_1_input_3_Inst_9 = next_value_of_tscc_proc_1_input_3_Inst_9;
                  tscc_proc_1_input_4_Suffix_10 = next_value_of_tscc_proc_1_input_4_Suffix_10;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word SubInstName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))));
                  MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                  MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = STATE_VARIABLE_Expansions_0_46;
                  MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = SubInstName_26;
                  MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                  tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46;
                  tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                  tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                  goto top_of_proc_2;
                }
                break;
            }
            break;
        }
      tscc_output_1_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_47;
      tscc_output_2_Pieces_11 = Pieces_11;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Expansions_34 = tscc_output_1_STATE_VARIABLE_Expansions_34;
    *tscc_output_ptr_2_Pieces_11 = tscc_output_2_Pieces_11;
    return;
  }
}

static void MR_CALL 
hlds__error_msg_inst__inst_name_to_pieces_6_p_0(
  MR_Word tscc_proc_2_input_1_Info_7,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_34,
  MR_Word tscc_proc_2_input_3_InstName_9,
  MR_Word tscc_proc_2_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11)
{
  {
    MR_Word tscc_proc_1_input_1_Info_7;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
    MR_Word tscc_proc_1_input_3_Inst_9;
    MR_Word tscc_proc_1_input_4_Suffix_10;
    MR_Word tscc_output_1_STATE_VARIABLE_Expansions_34;
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
      MR_Word STATE_VARIABLE_Expansions_0_33 = tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
      MR_Word STATE_VARIABLE_Expansions_34;
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
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[12])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[13])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[12])));
              MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_93 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word HOInstInfo_94 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 1))));

            if ((HOInstInfo_94 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_57;
              MR_String Str_89;
              MR_Box conv0_Str_89;

              parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Uniq_93, ((MR_Box) ((MR_String) "")), &conv0_Str_89);
              Str_89 = ((MR_String) (conv0_Str_89));
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (Str_89));
              }
              {
                Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            else
            {
              MR_Word PredInstInfo_87 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_94), (MR_Integer) 1));
              MR_Word HOPieces_88;

              hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "any_", Uniq_93, PredInstInfo_87, &HOPieces_88);
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_88, Suffix_10);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Uniq_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word BoundInsts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 3))));
                MR_String BoundName_16;
                MR_Box conv1_BoundName_16;

                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Uniq_13, (MR_String) "bound", ((MR_Box) ((MR_String) "")), &conv1_BoundName_16);
                BoundName_16 = ((MR_String) (conv1_BoundName_16));
                if ((BoundInsts_15 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_83;

                  {
                    Var_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_83, 0) = ((MR_Box) (BoundName_16));
                  }
                  {
                    Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_83));
                    MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
                }
                else
                {
                  MR_Word HeadBoundInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 0))));
                  MR_Word TailBoundInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 1))));
                  MR_Word BoundPieces_19;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_Word Var_74;
                  MR_Word Var_77;
                  MR_Word Var_80;

                  hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, HeadBoundInst_17, TailBoundInsts_18, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_19);
                  {
                    Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (BoundName_16));
                  }
                  {
                    Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                    MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (BoundPieces_19));
                  }
                  {
                    Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[32])));
                    MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
                  }
                  {
                    Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
                    MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
                  }
                  {
                    Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[9])));
                    MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Suffix_10));
                  }
                  {
                    Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[26])));
                    MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
                  }
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_69, Var_77);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HOInstInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_Word Uniq_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);

                if ((HOInstInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_String Str_23;
                  MR_Word Var_62;
                  MR_Box conv3_Str_23;

                  parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Uniq_86, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &conv3_Str_23);
                  Str_23 = ((MR_String) (conv3_Str_23));
                  {
                    Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_62, 0) = ((MR_Box) (Str_23));
                  }
                  {
                    Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_62));
                    MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
                }
                else
                {
                  MR_Word PredInstInfo_21 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_20), (MR_Integer) 1));
                  MR_Word HOPieces_22;

                  hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "", Uniq_86, PredInstInfo_21, &HOPieces_22);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_22, Suffix_10);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word InstVarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_String Name_26;
                MR_Word Var_55;
                MR_Box conv4_Name_26;

                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), InstVarSet_25, (MR_Integer) 0, Var_24, ((MR_Box) ((MR_String) "")), &conv4_Name_26);
                Name_26 = ((MR_String) (conv4_Name_26));
                {
                  Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (Name_26));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_55));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Vars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word ConstrainedInst_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_String Names_29;
                MR_Word InstPieces_30;
                MR_Word Var_40;
                MR_Word Var_43;
                MR_Word Var_48;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word InstVarSet_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_Box conv2_Names_29;

                Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[2]), Vars_27);
                parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), InstVarSet_98, (MR_Integer) 0, Var_40, ((MR_Box) ((MR_String) "")), &conv2_Names_29);
                Names_29 = ((MR_String) (conv2_Names_29));
                {
                  Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[9])));
                  MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Suffix_10));
                }
                hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, ConstrainedInst_28, Var_43, &InstPieces_30);
                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Names_29));
                }
                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[11])));
                  MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (InstPieces_30));
                }
                {
                  Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
                  MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[10])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_48));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = STATE_VARIABLE_Expansions_0_33;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_100;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46;
                tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ArgInsts_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_Word InstName_32;
                MR_Word Name_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10;

                {
                  InstName_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InstName_32, 0) = ((MR_Box) (Name_99));
                  MR_hl_field(MR_mktag(0), InstName_32, 1) = ((MR_Box) (ArgInsts_31));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = STATE_VARIABLE_Expansions_0_33;
                next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_32;
                next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46;
                tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_34;
      tscc_output_2_Pieces_11 = Pieces_11;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_7 = tscc_proc_2_input_1_Info_7;
      MR_Word STATE_VARIABLE_Expansions_0_46 = tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46;
      MR_Word STATE_VARIABLE_Expansions_47;
      MR_Word InstName_9 = tscc_proc_2_input_3_InstName_9;
      MR_Word Suffix_10 = tscc_proc_2_input_4_Suffix_10;
      MR_Word Pieces_11;
      MR_bool succeeded;
      MR_Word PastPieces_12;

      succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_46, InstName_9, &PastPieces_12);
      if (succeeded)
      {
        Pieces_11 = PastPieces_12;
        STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
      }
      else
        switch (MR_tag((MR_Word) InstName_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 0))));
              MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 1))));
              MR_Word ModuleInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_String SymNameStr_19;
              MR_Word NamePieces_20;
              MR_Word NamedNamePieces_21;
              MR_Word ExpandInsts_22;
              MR_Word STATE_VARIABLE_Expansions_70_70;
              MR_Word STATE_VARIABLE_Expansions_74_74;

              if (((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1))
              {
                MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 0))));
                MR_String BaseName_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 1))));
                MR_Word CurModuleName_18;

                hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_15, &CurModuleName_18);
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_16, CurModuleName_18);
                if (succeeded)
                  SymNameStr_19 = BaseName_17;
                else
                  SymNameStr_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_13);
              }
              else
                SymNameStr_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_13, (MR_Integer) 0))));
              hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_70_70, SymNameStr_19, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_20);
              {
                NamedNamePieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NamedNamePieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[25])));
                MR_hl_field(MR_mktag(1), NamedNamePieces_21, 1) = ((MR_Box) (NamePieces_20));
              }
              hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_9, NamedNamePieces_21, STATE_VARIABLE_Expansions_70_70, &STATE_VARIABLE_Expansions_74_74);
              ExpandInsts_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (ExpandInsts_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamePieces_20, Suffix_10);
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_74_74;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word EqvInst_23;

                    check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_15, InstName_9, &EqvInst_23);
                    if (((((MR_tag((MR_Word) EqvInst_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 0)))) == (MR_Integer) 5))))
                    {
                      MR_Word TypeInfo_488_488;
                      MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 1))));
                      MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 2))));

                      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_13, Var_112);
                      if (succeeded)
                      {
                        TypeInfo_488_488 = (MR_Word) (&hlds__error_msg_inst_scalar_common_1[7]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_488_488, ((MR_Box) (ArgInsts_14)), ((MR_Box) (Var_113)));
                      }
                    }
                    else
                    if (((((MR_tag((MR_Word) EqvInst_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 0)))) == (MR_Integer) 4))))
                    {
                      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 1))));

                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_111);
                    }
                    else
                      succeeded = MR_FALSE;
                    if (succeeded)
                    {
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_21, Suffix_10);
                      STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_74_74;
                    }
                    else
                    {
                      MR_Word EqvPieces_24;
                      MR_Word Var_76;
                      MR_Word Var_77;
                      MR_Word Var_80;
                      MR_Word Var_82;
                      MR_Word Var_85;

                      hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_74_74, &STATE_VARIABLE_Expansions_47, EqvInst_23, Suffix_10, &EqvPieces_24);
                      {
                        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (EqvPieces_24));
                      }
                      {
                        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_85));
                      }
                      {
                        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_82));
                      }
                      {
                        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
                      }
                      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_77, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33])));
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_21, Var_76);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleInfo_474 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_475;
              MR_Word Var_409;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_474, InstName_9, &EqvInst_475);
              succeeded = ((((MR_tag((MR_Word) EqvInst_475)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_475, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_409 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_475, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_409);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[19])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
              }
              else
              {
                MR_Word InstNumPieces_411;
                MR_Word STATE_VARIABLE_Expansions_49_412;
                MR_Word Var_413;
                MR_Word Var_414;
                MR_Word Var_417;
                MR_Word Var_419;
                MR_Word Var_422;
                MR_Word EqvPieces_429;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044unify_inst", &InstNumPieces_411, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_412);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_412, &STATE_VARIABLE_Expansions_47, EqvInst_475, Suffix_10, &EqvPieces_429);
                {
                  Var_422 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_422, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                  MR_hl_field(MR_mktag(1), Var_422, 1) = ((MR_Box) (EqvPieces_429));
                }
                {
                  Var_419 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_419, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                  MR_hl_field(MR_mktag(1), Var_419, 1) = ((MR_Box) (Var_422));
                }
                {
                  Var_417 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_417, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_417, 1) = ((MR_Box) (Var_419));
                }
                {
                  Var_414 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_414, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                  MR_hl_field(MR_mktag(1), Var_414, 1) = ((MR_Box) (Var_417));
                }
                Var_413 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_414, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33])));
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_411, Var_413);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleInfo_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_256;
              MR_Word Var_190;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_255, InstName_9, &EqvInst_256);
              succeeded = ((((MR_tag((MR_Word) EqvInst_256)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_256, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_256, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_190);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[16])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
              }
              else
              {
                MR_Word InstNumPieces_192;
                MR_Word STATE_VARIABLE_Expansions_49_193;
                MR_Word Var_194;
                MR_Word Var_195;
                MR_Word Var_198;
                MR_Word Var_200;
                MR_Word Var_203;
                MR_Word EqvPieces_210;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044merge_inst", &InstNumPieces_192, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_193);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_193, &STATE_VARIABLE_Expansions_47, EqvInst_256, Suffix_10, &EqvPieces_210);
                {
                  Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                  MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) (EqvPieces_210));
                }
                {
                  Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                  MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (Var_203));
                }
                {
                  Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) (Var_200));
                }
                {
                  Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                  MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) (Var_198));
                }
                Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_195, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33])));
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_192, Var_194);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModuleInfo_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_183;
                  MR_Word Var_117;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_182, InstName_9, &EqvInst_183);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_183)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_183, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_183, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_117);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[15])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_119;
                    MR_Word STATE_VARIABLE_Expansions_49_120;
                    MR_Word Var_121;
                    MR_Word Var_122;
                    MR_Word Var_125;
                    MR_Word Var_127;
                    MR_Word Var_130;
                    MR_Word EqvPieces_137;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044ground_inst", &InstNumPieces_119, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_120);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_120, &STATE_VARIABLE_Expansions_47, EqvInst_183, Suffix_10, &EqvPieces_137);
                    {
                      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (EqvPieces_137));
                    }
                    {
                      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_130));
                    }
                    {
                      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_127));
                    }
                    {
                      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_125));
                    }
                    Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_122, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_119, Var_121);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModuleInfo_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_99;
                  MR_Word Var_114;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_98, InstName_9, &EqvInst_99);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_99)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_99, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_99, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_114);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[14])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_45;
                    MR_Word STATE_VARIABLE_Expansions_49_49;
                    MR_Word Var_51;
                    MR_Word Var_52;
                    MR_Word Var_55;
                    MR_Word Var_57;
                    MR_Word Var_60;
                    MR_Word EqvPieces_96;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044any_inst", &InstNumPieces_45, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_49);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_49, &STATE_VARIABLE_Expansions_47, EqvInst_99, Suffix_10, &EqvPieces_96);
                    {
                      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (EqvPieces_96));
                    }
                    {
                      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
                    }
                    {
                      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
                    }
                    {
                      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
                    }
                    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_52, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_45, Var_51);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ModuleInfo_401 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_402;
                  MR_Word Var_336;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_401, InstName_9, &EqvInst_402);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_402)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_402, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_336 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_402, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_336);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[18])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_338;
                    MR_Word STATE_VARIABLE_Expansions_49_339;
                    MR_Word Var_340;
                    MR_Word Var_341;
                    MR_Word Var_344;
                    MR_Word Var_346;
                    MR_Word Var_349;
                    MR_Word EqvPieces_356;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044shared_inst", &InstNumPieces_338, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_339);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_339, &STATE_VARIABLE_Expansions_47, EqvInst_402, Suffix_10, &EqvPieces_356);
                    {
                      Var_349 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_349, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                      MR_hl_field(MR_mktag(1), Var_349, 1) = ((MR_Box) (EqvPieces_356));
                    }
                    {
                      Var_346 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_346, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_346, 1) = ((MR_Box) (Var_349));
                    }
                    {
                      Var_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_344, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_344, 1) = ((MR_Box) (Var_346));
                    }
                    {
                      Var_341 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_341, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_341, 1) = ((MR_Box) (Var_344));
                    }
                    Var_340 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_341, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_338, Var_340);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ModuleInfo_328 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_329;
                  MR_Word Var_263;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_328, InstName_9, &EqvInst_329);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_329)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_329, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_329, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_263);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[17])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_265;
                    MR_Word STATE_VARIABLE_Expansions_49_266;
                    MR_Word Var_267;
                    MR_Word Var_268;
                    MR_Word Var_271;
                    MR_Word Var_273;
                    MR_Word Var_276;
                    MR_Word EqvPieces_283;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_265, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_266);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_266, &STATE_VARIABLE_Expansions_47, EqvInst_329, Suffix_10, &EqvPieces_283);
                    {
                      Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_276, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
                      MR_hl_field(MR_mktag(1), Var_276, 1) = ((MR_Box) (EqvPieces_283));
                    }
                    {
                      Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_273, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_273, 1) = ((MR_Box) (Var_276));
                    }
                    {
                      Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_271, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_271, 1) = ((MR_Box) (Var_273));
                    }
                    {
                      Var_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_268, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_268, 1) = ((MR_Box) (Var_271));
                    }
                    Var_267 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_268, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_265, Var_267);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Uniq_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word EqvInst_94;
                  MR_Word next_value_of_tscc_proc_1_input_1_Info_7;
                  MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
                  MR_Word next_value_of_tscc_proc_1_input_3_Inst_9;
                  MR_Word next_value_of_tscc_proc_1_input_4_Suffix_10;

                  {
                    EqvInst_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), EqvInst_94, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), EqvInst_94, 1) = (MR_Box) ((MR_Unsigned) (Uniq_27));
                    MR_hl_field(MR_mktag(3), EqvInst_94, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_Info_7 = Info_7;
                  next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_46;
                  next_value_of_tscc_proc_1_input_3_Inst_9 = EqvInst_94;
                  next_value_of_tscc_proc_1_input_4_Suffix_10 = Suffix_10;
                  tscc_proc_1_input_1_Info_7 = next_value_of_tscc_proc_1_input_1_Info_7;
                  tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
                  tscc_proc_1_input_3_Inst_9 = next_value_of_tscc_proc_1_input_3_Inst_9;
                  tscc_proc_1_input_4_Suffix_10 = next_value_of_tscc_proc_1_input_4_Suffix_10;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word SubInstName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))));
                  MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                  MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = STATE_VARIABLE_Expansions_0_46;
                  MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = SubInstName_26;
                  MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                  tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46;
                  tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                  tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                  goto top_of_proc_2;
                }
                break;
            }
            break;
        }
      tscc_output_1_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_47;
      tscc_output_2_Pieces_11 = Pieces_11;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Expansions_34 = tscc_output_1_STATE_VARIABLE_Expansions_34;
    *tscc_output_ptr_2_Pieces_11 = tscc_output_2_Pieces_11;
    return;
  }
}

static void MR_CALL 
hlds__error_msg_inst__insts_to_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19,
  MR_Word HeadInst_10,
  MR_Word TailInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13)
{
  {
    MR_Word HeadSuffix_14;
    MR_Word STATE_VARIABLE_Expansions_20_20;

    if ((TailInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      HeadSuffix_14 = Suffix_12;
      STATE_VARIABLE_Expansions_20_20 = STATE_VARIABLE_Expansions_0_18;
    }
    else
    {
      MR_Word HeadTailInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailInsts_11, (MR_Integer) 0))));
      MR_Word TailTailInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailInsts_11, (MR_Integer) 1))));
      MR_Word TailPieces_17;

      hlds__error_msg_inst__insts_to_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_0_18, &STATE_VARIABLE_Expansions_20_20, HeadTailInst_15, TailTailInsts_16, Suffix_12, &TailPieces_17);
      HeadSuffix_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[6])), TailPieces_17);
    }
    hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_8, STATE_VARIABLE_Expansions_20_20, STATE_VARIABLE_Expansions_19, HeadInst_10, HeadSuffix_14, Pieces_13);
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
  {
    MR_bool succeeded;

    if ((ArgInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_46;

      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_46, 0) = ((MR_Box) (Name_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Suffix_12));
      }
      *STATE_VARIABLE_Expansions_19 = STATE_VARIABLE_Expansions_0_18;
    }
    else
    {
      MR_Word HeadArgInst_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_11, (MR_Integer) 0))));
      MR_Word TailArgInsts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_11, (MR_Integer) 1))));
      MR_Word ArgPieces_16;
      MR_String ArgSummary_17;

      hlds__error_msg_inst__insts_to_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_0_18, STATE_VARIABLE_Expansions_19, HeadArgInst_14, TailArgInsts_15, (MR_Word) ((MR_Unsigned) 0U), &ArgPieces_16);
      succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(ArgPieces_16, (MR_Integer) 4, &ArgSummary_17);
      if (succeeded)
      {
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_String Var_26;
        MR_String Var_28;

        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (Name_10));
        }
        Var_28 = mercury__string__f_43_43_2_f_0(ArgSummary_17, (MR_String) ")");
        Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_28);
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Suffix_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_24));
        }
      }
      else
      {
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_43;

        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_31, 0) = ((MR_Box) (Name_10));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[11])));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[9])));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Suffix_12));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[26])));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
        }
        Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgPieces_16, Var_40);
        *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_30, Var_39);
      }
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
    MR_Word HeadArgInst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word TailArgInsts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word HeadPieces_14;
    MR_Word TailPieces_15;
    MR_Word STATE_VARIABLE_Expansions_18_18;

    hlds__error_msg_inst__inst_to_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_18_18, HeadArgInst_12, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_14);
    hlds__error_msg_inst__arg_insts_to_pieces_5_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_18_18, STATE_VARIABLE_Expansions_3, TailArgInsts_13, &TailPieces_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadPieces_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailPieces_15));
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__mode_to_pieces_5_p_0(
  MR_Word Info_6,
  MR_Word STATE_VARIABLE_Expansions_0_26,
  MR_Word * STATE_VARIABLE_Expansions_27,
  MR_Word Mode_8,
  MR_Word * Pieces_9)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Mode_8)) == (MR_Integer) 0))
    {
      MR_Word InitInst0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_8, (MR_Integer) 0))));
      MR_Word FinalInst0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_8, (MR_Integer) 1))));
      MR_Word InitInst_14;
      MR_Word FinalInst_17;
      MR_Word SubInitInstName_13;
      MR_Word Var_40;
      MR_Word SubFinalInstName_16;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;

      succeeded = ((((MR_tag((MR_Word) InitInst0_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InitInst0_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InitInst0_10, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (succeeded)
          SubInitInstName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_40, (MR_Integer) 2))));
      }
      if (succeeded)
        {
          InitInst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), InitInst_14, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), InitInst_14, 1) = ((MR_Box) (SubInitInstName_13));
        }
      else
        InitInst_14 = InitInst0_10;
      succeeded = ((((MR_tag((MR_Word) FinalInst0_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalInst0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst0_11, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_41)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_41, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (succeeded)
          SubFinalInstName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_41, (MR_Integer) 2))));
      }
      if (succeeded)
        {
          FinalInst_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), FinalInst_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), FinalInst_17, 1) = ((MR_Box) (SubFinalInstName_16));
        }
      else
        FinalInst_17 = FinalInst0_11;
      succeeded = ((((MR_tag((MR_Word) InitInst_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 1))) & (MR_Integer) 7);
        Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 2))));
        succeeded = (Var_42 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) FinalInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 1))) & (MR_Integer) 7);
              Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 2))));
              succeeded = (Var_44 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      if (succeeded)
      {
        *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[15]));
        *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
      }
      else
      {
        MR_Word Var_49;
        MR_Word Var_50;

        succeeded = (InitInst_14 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) FinalInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 1))) & (MR_Integer) 7);
            Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 2))));
            succeeded = (Var_49 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[17]));
          *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
        }
        else
        {
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;

          succeeded = ((((MR_tag((MR_Word) InitInst_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 1))) & (MR_Integer) 7);
            Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 2))));
            succeeded = (Var_54 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) FinalInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 1))) & (MR_Integer) 7);
                  Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 2))));
                  succeeded = (Var_56 == (MR_Integer) 3);
                  if (succeeded)
                    succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
          if (succeeded)
          {
            *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[16]));
            *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
          }
          else
          {
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_64;

            succeeded = ((((MR_tag((MR_Word) InitInst_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 1))) & (MR_Integer) 7);
              Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 2))));
              succeeded = (Var_61 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) FinalInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 1))) & (MR_Integer) 7);
                    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 2))));
                    succeeded = (Var_63 == (MR_Integer) 1);
                    if (succeeded)
                      succeeded = (Var_64 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            if (succeeded)
            {
              *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[28]));
              *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
            }
            else
            {
              MR_Word Var_68;
              MR_Word Var_69;

              succeeded = (InitInst_14 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) FinalInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 1))) & (MR_Integer) 7);
                  Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 2))));
                  succeeded = (Var_68 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[18]));
                *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
              }
              else
              {
                MR_Word Var_73;
                MR_Word Var_74;
                MR_Word Var_75;
                MR_Word Var_76;

                succeeded = ((((MR_tag((MR_Word) InitInst_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 1))) & (MR_Integer) 7);
                  Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 2))));
                  succeeded = (Var_73 == (MR_Integer) 2);
                  if (succeeded)
                  {
                    succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((((MR_tag((MR_Word) FinalInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 1))) & (MR_Integer) 7);
                        Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 2))));
                        succeeded = (Var_75 == (MR_Integer) 4);
                        if (succeeded)
                          succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[29]));
                  *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
                }
                else
                {
                  MR_Word Var_80;
                  MR_Word Var_81;
                  MR_Word Var_82;
                  MR_Word Var_83;

                  succeeded = ((((MR_tag((MR_Word) InitInst_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 1))) & (MR_Integer) 7);
                    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InitInst_14, (MR_Integer) 2))));
                    succeeded = (Var_80 == (MR_Integer) 2);
                    if (succeeded)
                    {
                      succeeded = (Var_81 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) FinalInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_82 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 1))) & (MR_Integer) 7);
                          Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 2))));
                          succeeded = (Var_82 == (MR_Integer) 2);
                          if (succeeded)
                            succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[30]));
                    *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
                  }
                  else
                  {
                    MR_Word Var_87;
                    MR_Word Var_88;

                    succeeded = (InitInst_14 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((((MR_tag((MR_Word) FinalInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 1))) & (MR_Integer) 7);
                        Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_17, (MR_Integer) 2))));
                        succeeded = (Var_87 == (MR_Integer) 2);
                        if (succeeded)
                          succeeded = (Var_88 == (MR_Word) ((MR_Unsigned) 0U));
                      }
                    }
                    if (succeeded)
                    {
                      *Pieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[31]));
                      *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
                    }
                    else
                    {
                      MR_Word InitPieces_18;
                      MR_Word FinalPieces_19;
                      MR_Word STATE_VARIABLE_Expansions_92_92;
                      MR_Word Var_96;

                      hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_6, STATE_VARIABLE_Expansions_0_26, &STATE_VARIABLE_Expansions_92_92, InitInst_14, (MR_Word) ((MR_Unsigned) 0U), &InitPieces_18);
                      hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_6, STATE_VARIABLE_Expansions_92_92, STATE_VARIABLE_Expansions_27, FinalInst_17, (MR_Word) ((MR_Unsigned) 0U), &FinalPieces_19);
                      {
                        Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[8])));
                        MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (FinalPieces_19));
                      }
                      *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InitPieces_18, Var_96);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      MR_Word ModeName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_8, (MR_Integer) 0))));
      MR_Word ArgInsts_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_8, (MR_Integer) 1))));
      MR_String BaseModeName_22;

      BaseModeName_22 = mdbcomp__sym_name__unqualify_name_1_f_0(ModeName_20);
      if ((ArgInsts_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_38;

        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (BaseModeName_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
      }
      else
      {
        MR_Word ArgInstPieces_25;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_String Var_31;
        MR_Word Var_33;
        MR_Word HeadArgInst_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_21, (MR_Integer) 0))));
        MR_Word TailArgInsts_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_21, (MR_Integer) 1))));
        MR_Word HeadPieces_109;
        MR_Word TailPieces_110;
        MR_Word STATE_VARIABLE_Expansions_18_113;

        hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_6, STATE_VARIABLE_Expansions_0_26, &STATE_VARIABLE_Expansions_18_113, HeadArgInst_107, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_109);
        hlds__error_msg_inst__arg_insts_to_pieces_5_p_0(Info_6, STATE_VARIABLE_Expansions_18_113, STATE_VARIABLE_Expansions_27, TailArgInsts_108, &TailPieces_110);
        {
          ArgInstPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgInstPieces_25, 0) = ((MR_Box) (HeadPieces_109));
          MR_hl_field(MR_mktag(1), ArgInstPieces_25, 1) = ((MR_Box) (TailPieces_110));
        }
        Var_31 = mercury__string__f_43_43_2_f_0(BaseModeName_22, (MR_String) "(");
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
        }
        Var_33 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(ArgInstPieces_25);
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_33));
        }
        *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_29, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[14])));
      }
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
    MR_Word HeadMode_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word TailModes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word HeadPieces_14;
    MR_Word TailPieces_15;
    MR_Word STATE_VARIABLE_Expansions_18_18;

    hlds__error_msg_inst__mode_to_pieces_5_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_18_18, HeadMode_12, &HeadPieces_14);
    hlds__error_msg_inst__modes_to_pieces_5_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_18_18, STATE_VARIABLE_Expansions_3, TailModes_13, &TailPieces_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadPieces_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailPieces_15));
    }
  }
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
  {
    MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_12, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgModes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_12, (MR_Integer) 1))));
    MR_Word Det_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_12, (MR_Integer) 3))) & (MR_Integer) 7);
    MR_Word UniqPieces_18;
    MR_Word ArgModesPieces_20;
    MR_String IsDetStr_21;
    MR_Word ModesDetPieces_22;
    MR_Box conv1_IsDetStr_21;

    switch (Uniq_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_String BoundName_19;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Box conv0_BoundName_19;

          parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Uniq_11, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &conv0_BoundName_19);
          BoundName_19 = ((MR_String) (conv0_BoundName_19));
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (BoundName_19));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[13])));
          }
          {
            UniqPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), UniqPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[1])));
            MR_hl_field(MR_mktag(1), UniqPieces_18, 1) = ((MR_Box) (Var_37));
          }
        }
        break;
      case (MR_Integer) 0:
        UniqPieces_18 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    hlds__error_msg_inst__modes_to_pieces_5_p_0(Info_8, STATE_VARIABLE_Expansions_0_31, STATE_VARIABLE_Expansions_32, ArgModes_15, &ArgModesPieces_20);
    parse_tree__mercury_to_mercury__mercury_format_det_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Det_17, ((MR_Box) ((MR_String) "is ")), &conv1_IsDetStr_21);
    IsDetStr_21 = ((MR_String) (conv1_IsDetStr_21));
    switch (PredOrFunc_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word RealArgModesPieces_26;
          MR_Word RetModePieces_27;
          MR_Word JoinedRealArgModePieces_28;
          MR_Box conv2_RetModePieces_27;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ArgModesPieces_20, &RealArgModesPieces_26, &conv2_RetModePieces_27);
          RetModePieces_27 = ((MR_Word) (conv2_RetModePieces_27));
          JoinedRealArgModePieces_28 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(RealArgModesPieces_26, (MR_Word) ((MR_Unsigned) 0U));
          if ((ArgModes_15 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_68;
            MR_Word Var_69;
            MR_String Var_70;
            MR_String Var_72;
            MR_Word Var_74;
            MR_Word Var_75;

            Var_72 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "func =");
            Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_72);
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (Var_70));
            }
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (RetModePieces_27));
            }
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (IsDetStr_21));
            }
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[14])));
            }
            ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_68, Var_74);
          }
          else
          {
            MR_Word Var_46;
            MR_Word Var_47;
            MR_String Var_48;
            MR_String Var_50;
            MR_Word Var_52;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Word Var_59;
            MR_Word Var_62;
            MR_Word Var_63;

            Var_50 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "func(");
            Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_50);
            {
              Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (Var_48));
            }
            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
              MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (JoinedRealArgModePieces_28));
            }
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
              MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_52));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[20])));
              MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (RetModePieces_27));
            }
            {
              Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[26])));
              MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_63, 0) = ((MR_Box) (IsDetStr_21));
            }
            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
              MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[14])));
            }
            Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_56, Var_62);
            ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_46, Var_55);
          }
        }
        break;
      case (MR_Integer) 0:
        if ((ArgModes_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_95;
          MR_String Var_96;
          MR_String Var_98;
          MR_Word Var_100;
          MR_Word Var_101;

          Var_98 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "pred");
          Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_98);
          {
            Var_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_95, 0) = ((MR_Box) (Var_96));
          }
          {
            Var_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_101, 0) = ((MR_Box) (IsDetStr_21));
          }
          {
            Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
            MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[14])));
          }
          {
            ModesDetPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ModesDetPieces_22, 0) = ((MR_Box) (Var_95));
            MR_hl_field(MR_mktag(1), ModesDetPieces_22, 1) = ((MR_Box) (Var_100));
          }
        }
        else
        {
          MR_Word JoinedArgModePieces_25;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_String Var_82;
          MR_String Var_84;
          MR_Word Var_86;
          MR_Word Var_89;
          MR_Word Var_90;

          JoinedArgModePieces_25 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(ArgModesPieces_20);
          Var_84 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "pred(");
          Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_84);
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (Var_82));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (JoinedArgModePieces_25));
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_90, 0) = ((MR_Box) (IsDetStr_21));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[14])));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12])));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_89));
          }
          ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_80, Var_86);
        }
        break;
    }
    *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), UniqPieces_18, ModesDetPieces_22);
  }
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
    MR_Box conv0_ConsIdStr_26;

    if ((TailBoundInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      HeadSuffix_14 = Suffix_12;
      STATE_VARIABLE_Expansions_29_29 = STATE_VARIABLE_Expansions_0_27;
    }
    else
    {
      MR_Word HeadTailBoundInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailBoundInsts_11, (MR_Integer) 0))));
      MR_Word TailTailBoundInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailBoundInsts_11, (MR_Integer) 1))));
      MR_Word TailPieces_17;
      MR_Word Var_32;
      MR_Word Var_35;

      hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_0_27, &STATE_VARIABLE_Expansions_29_29, HeadTailBoundInst_15, TailTailBoundInsts_16, Suffix_12, &TailPieces_17);
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[27])));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (TailPieces_17));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[0])));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
      }
      {
        HeadSuffix_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadSuffix_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[26])));
        MR_hl_field(MR_mktag(1), HeadSuffix_14, 1) = ((MR_Box) (Var_32));
      }
    }
    ConsId0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadBoundInst_10, (MR_Integer) 0))));
    ArgInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadBoundInst_10, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) ConsId0_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      SymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_18, (MR_Integer) 1))));
      Arity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_18, (MR_Integer) 2))));
      TypeCtor_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_18, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) SymName_20)) == (MR_Integer) 1);
      if (succeeded)
        BaseName_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_20, (MR_Integer) 1))));
    }
    if (succeeded)
    {
      MR_Word Var_38;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (BaseName_24));
      }
      {
        ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConsId_25, 1) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(3), ConsId_25, 2) = ((MR_Box) (Arity_21));
        MR_hl_field(MR_mktag(3), ConsId_25, 3) = ((MR_Box) (TypeCtor_22));
      }
    }
    else
      ConsId_25 = ConsId0_18;
    parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), (MR_Integer) 1, ConsId_25, ((MR_Box) ((MR_String) "")), &conv0_ConsIdStr_26);
    ConsIdStr_26 = ((MR_String) (conv0_ConsIdStr_26));
    if ((ArgInsts_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_81;

      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (ConsIdStr_26));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadSuffix_14));
      }
      *STATE_VARIABLE_Expansions_28 = STATE_VARIABLE_Expansions_29_29;
    }
    else
    {
      MR_Word HeadArgInst_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_19, (MR_Integer) 0))));
      MR_Word TailArgInsts_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_19, (MR_Integer) 1))));
      MR_Word ArgPieces_53;
      MR_String ArgSummary_54;

      hlds__error_msg_inst__insts_to_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_29_29, STATE_VARIABLE_Expansions_28, HeadArgInst_51, TailArgInsts_52, (MR_Word) ((MR_Unsigned) 0U), &ArgPieces_53);
      succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(ArgPieces_53, (MR_Integer) 4, &ArgSummary_54);
      if (succeeded)
      {
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_String Var_61;
        MR_String Var_63;

        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (ConsIdStr_26));
        }
        Var_63 = mercury__string__f_43_43_2_f_0(ArgSummary_54, (MR_String) ")");
        Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_63);
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (HeadSuffix_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_59));
        }
      }
      else
      {
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_78;

        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_66, 0) = ((MR_Box) (ConsIdStr_26));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[11])));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[9])));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (HeadSuffix_14));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[26])));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
        }
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgPieces_53, Var_75);
        *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_65, Var_74);
      }
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(
  MR_Word tscc_proc_1_input_1_Info_7,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_34,
  MR_Word tscc_proc_1_input_3_Inst_9,
  MR_Word tscc_proc_1_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11)
{
  {
    MR_Word tscc_proc_2_input_1_Info_7;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47;
    MR_Word tscc_proc_2_input_3_InstName_9;
    MR_Word tscc_proc_2_input_4_Suffix_10;
    MR_Word tscc_output_1_STATE_VARIABLE_Expansions_34;
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
      MR_Word STATE_VARIABLE_Expansions_0_33 = tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
      MR_Word STATE_VARIABLE_Expansions_34;
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
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[12])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[13])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[12])));
              MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word HOInstInfo_87 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 1))));

            if ((HOInstInfo_87 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_57;
              MR_String Str_82;
              MR_Box conv0_Str_82;

              parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Uniq_86, ((MR_Box) ((MR_String) "")), &conv0_Str_82);
              Str_82 = ((MR_String) (conv0_Str_82));
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (Str_82));
              }
              {
                Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            else
            {
              MR_Word PredInstInfo_80 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_87), (MR_Integer) 1));
              MR_Word HOPieces_81;

              hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "any_", Uniq_86, PredInstInfo_80, &HOPieces_81);
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_81, Suffix_10);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Uniq_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word BoundInsts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 3))));
                MR_String BoundName_16;
                MR_Box conv1_BoundName_16;

                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Uniq_13, (MR_String) "bound", ((MR_Box) ((MR_String) "")), &conv1_BoundName_16);
                BoundName_16 = ((MR_String) (conv1_BoundName_16));
                if ((BoundInsts_15 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_76;

                  {
                    Var_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_76, 0) = ((MR_Box) (BoundName_16));
                  }
                  {
                    Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_76));
                    MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
                }
                else
                {
                  MR_Word HeadBoundInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 0))));
                  MR_Word TailBoundInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 1))));
                  MR_Word BoundPieces_19;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_String Var_71;
                  MR_Word Var_73;

                  hlds__error_msg_inst__bound_insts_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, HeadBoundInst_17, TailBoundInsts_18, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_19);
                  Var_71 = mercury__string__f_43_43_2_f_0(BoundName_16, (MR_String) "(");
                  {
                    Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
                  }
                  {
                    Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
                    MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (BoundPieces_19));
                  }
                  {
                    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12])));
                    MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Suffix_10));
                  }
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_69, Var_73);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HOInstInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_Word Uniq_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);

                if ((HOInstInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_String Str_23;
                  MR_Word Var_62;
                  MR_Box conv3_Str_23;

                  parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Uniq_79, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &conv3_Str_23);
                  Str_23 = ((MR_String) (conv3_Str_23));
                  {
                    Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_62, 0) = ((MR_Box) (Str_23));
                  }
                  {
                    Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_62));
                    MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
                }
                else
                {
                  MR_Word PredInstInfo_21 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_20), (MR_Integer) 1));
                  MR_Word HOPieces_22;

                  hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "", Uniq_79, PredInstInfo_21, &HOPieces_22);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_22, Suffix_10);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word InstVarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_String Name_26;
                MR_Word Var_55;
                MR_Box conv4_Name_26;

                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), InstVarSet_25, (MR_Integer) 0, Var_24, ((MR_Box) ((MR_String) "")), &conv4_Name_26);
                Name_26 = ((MR_String) (conv4_Name_26));
                {
                  Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (Name_26));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_55));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Vars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word ConstrainedInst_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_String Names_29;
                MR_Word InstPieces_30;
                MR_Word Var_40;
                MR_Word Var_43;
                MR_Word Var_48;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word InstVarSet_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_Box conv2_Names_29;

                Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[2]), Vars_27);
                parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), InstVarSet_91, (MR_Integer) 0, Var_40, ((MR_Box) ((MR_String) "")), &conv2_Names_29);
                Names_29 = ((MR_String) (conv2_Names_29));
                {
                  Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[9])));
                  MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Suffix_10));
                }
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, ConstrainedInst_28, Var_43, &InstPieces_30);
                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Names_29));
                }
                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[11])));
                  MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (InstPieces_30));
                }
                {
                  Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
                  MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[10])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_48));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47 = STATE_VARIABLE_Expansions_0_33;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_93;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47;
                tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ArgInsts_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_Word InstName_32;
                MR_Word Name_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10;

                {
                  InstName_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InstName_32, 0) = ((MR_Box) (Name_92));
                  MR_hl_field(MR_mktag(0), InstName_32, 1) = ((MR_Box) (ArgInsts_31));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47 = STATE_VARIABLE_Expansions_0_33;
                next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_32;
                next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47;
                tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_34;
      tscc_output_2_Pieces_11 = Pieces_11;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_7 = tscc_proc_2_input_1_Info_7;
      MR_Word STATE_VARIABLE_Expansions_0_47 = tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47;
      MR_Word STATE_VARIABLE_Expansions_48;
      MR_Word InstName_9 = tscc_proc_2_input_3_InstName_9;
      MR_Word Suffix_10 = tscc_proc_2_input_4_Suffix_10;
      MR_Word Pieces_11;
      MR_bool succeeded;
      MR_Word PastPieces_12;

      succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_47, InstName_9, &PastPieces_12);
      if (succeeded)
      {
        Pieces_11 = PastPieces_12;
        STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_0_47;
      }
      else
        switch (MR_tag((MR_Word) InstName_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 0))));
              MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 1))));
              MR_Word ModuleInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_String SymNameStr_19;
              MR_Word NamePieces_20;
              MR_Word NamedNamePieces_21;
              MR_Word ExpandInsts_22;
              MR_Word STATE_VARIABLE_Expansions_69_69;
              MR_Word STATE_VARIABLE_Expansions_73_73;

              if (((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1))
              {
                MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 0))));
                MR_String BaseName_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 1))));
                MR_Word CurModuleName_18;

                hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_15, &CurModuleName_18);
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_16, CurModuleName_18);
                if (succeeded)
                  SymNameStr_19 = BaseName_17;
                else
                  SymNameStr_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_13);
              }
              else
                SymNameStr_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_13, (MR_Integer) 0))));
              hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_47, &STATE_VARIABLE_Expansions_69_69, SymNameStr_19, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_20);
              {
                NamedNamePieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NamedNamePieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[25])));
                MR_hl_field(MR_mktag(1), NamedNamePieces_21, 1) = ((MR_Box) (NamePieces_20));
              }
              hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_9, NamedNamePieces_21, STATE_VARIABLE_Expansions_69_69, &STATE_VARIABLE_Expansions_73_73);
              ExpandInsts_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (ExpandInsts_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamePieces_20, Suffix_10);
                    STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_73_73;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word EqvInst_23;

                    check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_15, InstName_9, &EqvInst_23);
                    if (((((MR_tag((MR_Word) EqvInst_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 0)))) == (MR_Integer) 5))))
                    {
                      MR_Word TypeInfo_452_452;
                      MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 1))));
                      MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 2))));

                      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_13, Var_106);
                      if (succeeded)
                      {
                        TypeInfo_452_452 = (MR_Word) (&hlds__error_msg_inst_scalar_common_1[7]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_452_452, ((MR_Box) (ArgInsts_14)), ((MR_Box) (Var_107)));
                      }
                    }
                    else
                    if (((((MR_tag((MR_Word) EqvInst_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 0)))) == (MR_Integer) 4))))
                    {
                      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 1))));

                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_105);
                    }
                    else
                      succeeded = MR_FALSE;
                    if (succeeded)
                    {
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_21, Suffix_10);
                      STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_73_73;
                    }
                    else
                    {
                      MR_Word ExpandedPieces_24;
                      MR_Word Var_75;
                      MR_Word Var_76;
                      MR_Word Var_79;
                      MR_Word Var_82;

                      hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_73_73, &STATE_VARIABLE_Expansions_48, EqvInst_23, Suffix_10, &ExpandedPieces_24);
                      {
                        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22])));
                        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (ExpandedPieces_24));
                      }
                      {
                        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
                      }
                      {
                        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
                      }
                      Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_76, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_21, Var_75);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleInfo_438 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_439;
              MR_Word Var_379;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_438, InstName_9, &EqvInst_439);
              succeeded = ((((MR_tag((MR_Word) EqvInst_439)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_439, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_379 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_439, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_379);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[19])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_0_47;
              }
              else
              {
                MR_Word InstNumPieces_381;
                MR_Word EqvPieces_382;
                MR_Word STATE_VARIABLE_Expansions_50_383;
                MR_Word Var_384;
                MR_Word Var_385;
                MR_Word Var_388;
                MR_Word Var_391;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044unify_inst", &InstNumPieces_381, STATE_VARIABLE_Expansions_0_47, &STATE_VARIABLE_Expansions_50_383);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_50_383, &STATE_VARIABLE_Expansions_48, EqvInst_439, Suffix_10, &EqvPieces_382);
                {
                  Var_391 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_391, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22])));
                  MR_hl_field(MR_mktag(1), Var_391, 1) = ((MR_Box) (EqvPieces_382));
                }
                {
                  Var_388 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_388, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                  MR_hl_field(MR_mktag(1), Var_388, 1) = ((MR_Box) (Var_391));
                }
                {
                  Var_385 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_385, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                  MR_hl_field(MR_mktag(1), Var_385, 1) = ((MR_Box) (Var_388));
                }
                Var_384 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_385, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_381, Var_384);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleInfo_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_238;
              MR_Word Var_178;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_237, InstName_9, &EqvInst_238);
              succeeded = ((((MR_tag((MR_Word) EqvInst_238)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_238, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_238, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_178);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[16])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_0_47;
              }
              else
              {
                MR_Word InstNumPieces_180;
                MR_Word EqvPieces_181;
                MR_Word STATE_VARIABLE_Expansions_50_182;
                MR_Word Var_183;
                MR_Word Var_184;
                MR_Word Var_187;
                MR_Word Var_190;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044merge_inst", &InstNumPieces_180, STATE_VARIABLE_Expansions_0_47, &STATE_VARIABLE_Expansions_50_182);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_50_182, &STATE_VARIABLE_Expansions_48, EqvInst_238, Suffix_10, &EqvPieces_181);
                {
                  Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22])));
                  MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) (EqvPieces_181));
                }
                {
                  Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                  MR_hl_field(MR_mktag(1), Var_187, 1) = ((MR_Box) (Var_190));
                }
                {
                  Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                  MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) (Var_187));
                }
                Var_183 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_184, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_180, Var_183);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModuleInfo_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_171;
                  MR_Word Var_111;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_170, InstName_9, &EqvInst_171);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_171)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_171, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_171, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_111);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[15])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_0_47;
                  }
                  else
                  {
                    MR_Word InstNumPieces_113;
                    MR_Word EqvPieces_114;
                    MR_Word STATE_VARIABLE_Expansions_50_115;
                    MR_Word Var_116;
                    MR_Word Var_117;
                    MR_Word Var_120;
                    MR_Word Var_123;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044ground_inst", &InstNumPieces_113, STATE_VARIABLE_Expansions_0_47, &STATE_VARIABLE_Expansions_50_115);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_50_115, &STATE_VARIABLE_Expansions_48, EqvInst_171, Suffix_10, &EqvPieces_114);
                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22])));
                      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (EqvPieces_114));
                    }
                    {
                      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_123));
                    }
                    {
                      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_120));
                    }
                    Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_117, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_113, Var_116);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModuleInfo_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_94;
                  MR_Word Var_108;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_93, InstName_9, &EqvInst_94);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_94)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_94, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_94, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_108);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[14])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_0_47;
                  }
                  else
                  {
                    MR_Word InstNumPieces_45;
                    MR_Word EqvPieces_46;
                    MR_Word STATE_VARIABLE_Expansions_50_50;
                    MR_Word Var_52;
                    MR_Word Var_53;
                    MR_Word Var_56;
                    MR_Word Var_59;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044any_inst", &InstNumPieces_45, STATE_VARIABLE_Expansions_0_47, &STATE_VARIABLE_Expansions_50_50);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_50_50, &STATE_VARIABLE_Expansions_48, EqvInst_94, Suffix_10, &EqvPieces_46);
                    {
                      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22])));
                      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (EqvPieces_46));
                    }
                    {
                      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
                    }
                    {
                      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
                    }
                    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_53, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_45, Var_52);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ModuleInfo_371 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_372;
                  MR_Word Var_312;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_371, InstName_9, &EqvInst_372);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_372)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_372, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_312 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_372, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_312);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[18])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_0_47;
                  }
                  else
                  {
                    MR_Word InstNumPieces_314;
                    MR_Word EqvPieces_315;
                    MR_Word STATE_VARIABLE_Expansions_50_316;
                    MR_Word Var_317;
                    MR_Word Var_318;
                    MR_Word Var_321;
                    MR_Word Var_324;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044shared_inst", &InstNumPieces_314, STATE_VARIABLE_Expansions_0_47, &STATE_VARIABLE_Expansions_50_316);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_50_316, &STATE_VARIABLE_Expansions_48, EqvInst_372, Suffix_10, &EqvPieces_315);
                    {
                      Var_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_324, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22])));
                      MR_hl_field(MR_mktag(1), Var_324, 1) = ((MR_Box) (EqvPieces_315));
                    }
                    {
                      Var_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_321, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_321, 1) = ((MR_Box) (Var_324));
                    }
                    {
                      Var_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_318, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_318, 1) = ((MR_Box) (Var_321));
                    }
                    Var_317 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_318, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_314, Var_317);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ModuleInfo_304 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_305;
                  MR_Word Var_245;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_304, InstName_9, &EqvInst_305);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_305)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_305, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_305, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_245);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[17])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_0_47;
                  }
                  else
                  {
                    MR_Word InstNumPieces_247;
                    MR_Word EqvPieces_248;
                    MR_Word STATE_VARIABLE_Expansions_50_249;
                    MR_Word Var_250;
                    MR_Word Var_251;
                    MR_Word Var_254;
                    MR_Word Var_257;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_247, STATE_VARIABLE_Expansions_0_47, &STATE_VARIABLE_Expansions_50_249);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_50_249, &STATE_VARIABLE_Expansions_48, EqvInst_305, Suffix_10, &EqvPieces_248);
                    {
                      Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_257, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22])));
                      MR_hl_field(MR_mktag(1), Var_257, 1) = ((MR_Box) (EqvPieces_248));
                    }
                    {
                      Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_254, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_254, 1) = ((MR_Box) (Var_257));
                    }
                    {
                      Var_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_251, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_251, 1) = ((MR_Box) (Var_254));
                    }
                    Var_250 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_251, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_247, Var_250);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Uniq_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word EqvInst_91;
                  MR_Word next_value_of_tscc_proc_1_input_1_Info_7;
                  MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
                  MR_Word next_value_of_tscc_proc_1_input_3_Inst_9;
                  MR_Word next_value_of_tscc_proc_1_input_4_Suffix_10;

                  {
                    EqvInst_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), EqvInst_91, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), EqvInst_91, 1) = (MR_Box) ((MR_Unsigned) (Uniq_27));
                    MR_hl_field(MR_mktag(3), EqvInst_91, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_Info_7 = Info_7;
                  next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_47;
                  next_value_of_tscc_proc_1_input_3_Inst_9 = EqvInst_91;
                  next_value_of_tscc_proc_1_input_4_Suffix_10 = Suffix_10;
                  tscc_proc_1_input_1_Info_7 = next_value_of_tscc_proc_1_input_1_Info_7;
                  tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
                  tscc_proc_1_input_3_Inst_9 = next_value_of_tscc_proc_1_input_3_Inst_9;
                  tscc_proc_1_input_4_Suffix_10 = next_value_of_tscc_proc_1_input_4_Suffix_10;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word SubInstName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))));
                  MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                  MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47 = STATE_VARIABLE_Expansions_0_47;
                  MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = SubInstName_26;
                  MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                  tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47;
                  tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                  tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                  goto top_of_proc_2;
                }
                break;
            }
            break;
        }
      tscc_output_1_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_48;
      tscc_output_2_Pieces_11 = Pieces_11;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Expansions_34 = tscc_output_1_STATE_VARIABLE_Expansions_34;
    *tscc_output_ptr_2_Pieces_11 = tscc_output_2_Pieces_11;
    return;
  }
}

static void MR_CALL 
hlds__error_msg_inst__inst_name_to_inline_pieces_6_p_0(
  MR_Word tscc_proc_2_input_1_Info_7,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_34,
  MR_Word tscc_proc_2_input_3_InstName_9,
  MR_Word tscc_proc_2_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11)
{
  {
    MR_Word tscc_proc_1_input_1_Info_7;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
    MR_Word tscc_proc_1_input_3_Inst_9;
    MR_Word tscc_proc_1_input_4_Suffix_10;
    MR_Word tscc_output_1_STATE_VARIABLE_Expansions_34;
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
      MR_Word STATE_VARIABLE_Expansions_0_33 = tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
      MR_Word STATE_VARIABLE_Expansions_34;
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
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[12])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[13])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[12])));
              MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word HOInstInfo_87 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 1))));

            if ((HOInstInfo_87 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_57;
              MR_String Str_82;
              MR_Box conv0_Str_82;

              parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Uniq_86, ((MR_Box) ((MR_String) "")), &conv0_Str_82);
              Str_82 = ((MR_String) (conv0_Str_82));
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (Str_82));
              }
              {
                Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            else
            {
              MR_Word PredInstInfo_80 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_87), (MR_Integer) 1));
              MR_Word HOPieces_81;

              hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "any_", Uniq_86, PredInstInfo_80, &HOPieces_81);
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_81, Suffix_10);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Uniq_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word BoundInsts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 3))));
                MR_String BoundName_16;
                MR_Box conv1_BoundName_16;

                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Uniq_13, (MR_String) "bound", ((MR_Box) ((MR_String) "")), &conv1_BoundName_16);
                BoundName_16 = ((MR_String) (conv1_BoundName_16));
                if ((BoundInsts_15 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_76;

                  {
                    Var_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_76, 0) = ((MR_Box) (BoundName_16));
                  }
                  {
                    Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_76));
                    MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
                }
                else
                {
                  MR_Word HeadBoundInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 0))));
                  MR_Word TailBoundInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 1))));
                  MR_Word BoundPieces_19;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_String Var_71;
                  MR_Word Var_73;

                  hlds__error_msg_inst__bound_insts_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, HeadBoundInst_17, TailBoundInsts_18, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_19);
                  Var_71 = mercury__string__f_43_43_2_f_0(BoundName_16, (MR_String) "(");
                  {
                    Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
                  }
                  {
                    Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
                    MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (BoundPieces_19));
                  }
                  {
                    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12])));
                    MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Suffix_10));
                  }
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_69, Var_73);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HOInstInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_Word Uniq_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);

                if ((HOInstInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_String Str_23;
                  MR_Word Var_62;
                  MR_Box conv3_Str_23;

                  parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Uniq_79, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &conv3_Str_23);
                  Str_23 = ((MR_String) (conv3_Str_23));
                  {
                    Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_62, 0) = ((MR_Box) (Str_23));
                  }
                  {
                    Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_62));
                    MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
                }
                else
                {
                  MR_Word PredInstInfo_21 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_20), (MR_Integer) 1));
                  MR_Word HOPieces_22;

                  hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "", Uniq_79, PredInstInfo_21, &HOPieces_22);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_22, Suffix_10);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word InstVarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_String Name_26;
                MR_Word Var_55;
                MR_Box conv4_Name_26;

                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), InstVarSet_25, (MR_Integer) 0, Var_24, ((MR_Box) ((MR_String) "")), &conv4_Name_26);
                Name_26 = ((MR_String) (conv4_Name_26));
                {
                  Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (Name_26));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_55));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Vars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word ConstrainedInst_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_String Names_29;
                MR_Word InstPieces_30;
                MR_Word Var_40;
                MR_Word Var_43;
                MR_Word Var_48;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word InstVarSet_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_Box conv2_Names_29;

                Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[2]), Vars_27);
                parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), InstVarSet_91, (MR_Integer) 0, Var_40, ((MR_Box) ((MR_String) "")), &conv2_Names_29);
                Names_29 = ((MR_String) (conv2_Names_29));
                {
                  Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[9])));
                  MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Suffix_10));
                }
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, ConstrainedInst_28, Var_43, &InstPieces_30);
                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Names_29));
                }
                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[11])));
                  MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (InstPieces_30));
                }
                {
                  Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
                  MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[10])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_48));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47 = STATE_VARIABLE_Expansions_0_33;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_93;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47;
                tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ArgInsts_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_Word InstName_32;
                MR_Word Name_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10;

                {
                  InstName_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InstName_32, 0) = ((MR_Box) (Name_92));
                  MR_hl_field(MR_mktag(0), InstName_32, 1) = ((MR_Box) (ArgInsts_31));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47 = STATE_VARIABLE_Expansions_0_33;
                next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_32;
                next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47;
                tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_34;
      tscc_output_2_Pieces_11 = Pieces_11;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_7 = tscc_proc_2_input_1_Info_7;
      MR_Word STATE_VARIABLE_Expansions_0_47 = tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47;
      MR_Word STATE_VARIABLE_Expansions_48;
      MR_Word InstName_9 = tscc_proc_2_input_3_InstName_9;
      MR_Word Suffix_10 = tscc_proc_2_input_4_Suffix_10;
      MR_Word Pieces_11;
      MR_bool succeeded;
      MR_Word PastPieces_12;

      succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_47, InstName_9, &PastPieces_12);
      if (succeeded)
      {
        Pieces_11 = PastPieces_12;
        STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_0_47;
      }
      else
        switch (MR_tag((MR_Word) InstName_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 0))));
              MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 1))));
              MR_Word ModuleInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_String SymNameStr_19;
              MR_Word NamePieces_20;
              MR_Word NamedNamePieces_21;
              MR_Word ExpandInsts_22;
              MR_Word STATE_VARIABLE_Expansions_69_69;
              MR_Word STATE_VARIABLE_Expansions_73_73;

              if (((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1))
              {
                MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 0))));
                MR_String BaseName_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 1))));
                MR_Word CurModuleName_18;

                hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_15, &CurModuleName_18);
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_16, CurModuleName_18);
                if (succeeded)
                  SymNameStr_19 = BaseName_17;
                else
                  SymNameStr_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_13);
              }
              else
                SymNameStr_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_13, (MR_Integer) 0))));
              hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_47, &STATE_VARIABLE_Expansions_69_69, SymNameStr_19, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_20);
              {
                NamedNamePieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NamedNamePieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[25])));
                MR_hl_field(MR_mktag(1), NamedNamePieces_21, 1) = ((MR_Box) (NamePieces_20));
              }
              hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_9, NamedNamePieces_21, STATE_VARIABLE_Expansions_69_69, &STATE_VARIABLE_Expansions_73_73);
              ExpandInsts_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (ExpandInsts_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamePieces_20, Suffix_10);
                    STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_73_73;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word EqvInst_23;

                    check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_15, InstName_9, &EqvInst_23);
                    if (((((MR_tag((MR_Word) EqvInst_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 0)))) == (MR_Integer) 5))))
                    {
                      MR_Word TypeInfo_452_452;
                      MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 1))));
                      MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 2))));

                      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_13, Var_106);
                      if (succeeded)
                      {
                        TypeInfo_452_452 = (MR_Word) (&hlds__error_msg_inst_scalar_common_1[7]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_452_452, ((MR_Box) (ArgInsts_14)), ((MR_Box) (Var_107)));
                      }
                    }
                    else
                    if (((((MR_tag((MR_Word) EqvInst_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 0)))) == (MR_Integer) 4))))
                    {
                      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_23, (MR_Integer) 1))));

                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_105);
                    }
                    else
                      succeeded = MR_FALSE;
                    if (succeeded)
                    {
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_21, Suffix_10);
                      STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_73_73;
                    }
                    else
                    {
                      MR_Word ExpandedPieces_24;
                      MR_Word Var_75;
                      MR_Word Var_76;
                      MR_Word Var_79;
                      MR_Word Var_82;

                      hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_73_73, &STATE_VARIABLE_Expansions_48, EqvInst_23, Suffix_10, &ExpandedPieces_24);
                      {
                        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22])));
                        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (ExpandedPieces_24));
                      }
                      {
                        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
                      }
                      {
                        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
                      }
                      Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_76, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_21, Var_75);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleInfo_438 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_439;
              MR_Word Var_379;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_438, InstName_9, &EqvInst_439);
              succeeded = ((((MR_tag((MR_Word) EqvInst_439)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_439, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_379 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_439, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_379);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[19])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_0_47;
              }
              else
              {
                MR_Word InstNumPieces_381;
                MR_Word EqvPieces_382;
                MR_Word STATE_VARIABLE_Expansions_50_383;
                MR_Word Var_384;
                MR_Word Var_385;
                MR_Word Var_388;
                MR_Word Var_391;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044unify_inst", &InstNumPieces_381, STATE_VARIABLE_Expansions_0_47, &STATE_VARIABLE_Expansions_50_383);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_50_383, &STATE_VARIABLE_Expansions_48, EqvInst_439, Suffix_10, &EqvPieces_382);
                {
                  Var_391 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_391, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22])));
                  MR_hl_field(MR_mktag(1), Var_391, 1) = ((MR_Box) (EqvPieces_382));
                }
                {
                  Var_388 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_388, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                  MR_hl_field(MR_mktag(1), Var_388, 1) = ((MR_Box) (Var_391));
                }
                {
                  Var_385 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_385, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                  MR_hl_field(MR_mktag(1), Var_385, 1) = ((MR_Box) (Var_388));
                }
                Var_384 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_385, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_381, Var_384);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleInfo_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_238;
              MR_Word Var_178;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_237, InstName_9, &EqvInst_238);
              succeeded = ((((MR_tag((MR_Word) EqvInst_238)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_238, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_238, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_178);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[16])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_0_47;
              }
              else
              {
                MR_Word InstNumPieces_180;
                MR_Word EqvPieces_181;
                MR_Word STATE_VARIABLE_Expansions_50_182;
                MR_Word Var_183;
                MR_Word Var_184;
                MR_Word Var_187;
                MR_Word Var_190;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044merge_inst", &InstNumPieces_180, STATE_VARIABLE_Expansions_0_47, &STATE_VARIABLE_Expansions_50_182);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_50_182, &STATE_VARIABLE_Expansions_48, EqvInst_238, Suffix_10, &EqvPieces_181);
                {
                  Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22])));
                  MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) (EqvPieces_181));
                }
                {
                  Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                  MR_hl_field(MR_mktag(1), Var_187, 1) = ((MR_Box) (Var_190));
                }
                {
                  Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                  MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) (Var_187));
                }
                Var_183 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_184, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_180, Var_183);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModuleInfo_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_171;
                  MR_Word Var_111;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_170, InstName_9, &EqvInst_171);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_171)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_171, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_171, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_111);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[15])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_0_47;
                  }
                  else
                  {
                    MR_Word InstNumPieces_113;
                    MR_Word EqvPieces_114;
                    MR_Word STATE_VARIABLE_Expansions_50_115;
                    MR_Word Var_116;
                    MR_Word Var_117;
                    MR_Word Var_120;
                    MR_Word Var_123;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044ground_inst", &InstNumPieces_113, STATE_VARIABLE_Expansions_0_47, &STATE_VARIABLE_Expansions_50_115);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_50_115, &STATE_VARIABLE_Expansions_48, EqvInst_171, Suffix_10, &EqvPieces_114);
                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22])));
                      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (EqvPieces_114));
                    }
                    {
                      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_123));
                    }
                    {
                      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_120));
                    }
                    Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_117, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_113, Var_116);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModuleInfo_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_94;
                  MR_Word Var_108;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_93, InstName_9, &EqvInst_94);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_94)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_94, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_94, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_108);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[14])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_0_47;
                  }
                  else
                  {
                    MR_Word InstNumPieces_45;
                    MR_Word EqvPieces_46;
                    MR_Word STATE_VARIABLE_Expansions_50_50;
                    MR_Word Var_52;
                    MR_Word Var_53;
                    MR_Word Var_56;
                    MR_Word Var_59;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044any_inst", &InstNumPieces_45, STATE_VARIABLE_Expansions_0_47, &STATE_VARIABLE_Expansions_50_50);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_50_50, &STATE_VARIABLE_Expansions_48, EqvInst_94, Suffix_10, &EqvPieces_46);
                    {
                      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22])));
                      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (EqvPieces_46));
                    }
                    {
                      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
                    }
                    {
                      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
                    }
                    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_53, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_45, Var_52);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ModuleInfo_371 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_372;
                  MR_Word Var_312;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_371, InstName_9, &EqvInst_372);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_372)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_372, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_312 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_372, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_312);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[18])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_0_47;
                  }
                  else
                  {
                    MR_Word InstNumPieces_314;
                    MR_Word EqvPieces_315;
                    MR_Word STATE_VARIABLE_Expansions_50_316;
                    MR_Word Var_317;
                    MR_Word Var_318;
                    MR_Word Var_321;
                    MR_Word Var_324;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044shared_inst", &InstNumPieces_314, STATE_VARIABLE_Expansions_0_47, &STATE_VARIABLE_Expansions_50_316);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_50_316, &STATE_VARIABLE_Expansions_48, EqvInst_372, Suffix_10, &EqvPieces_315);
                    {
                      Var_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_324, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22])));
                      MR_hl_field(MR_mktag(1), Var_324, 1) = ((MR_Box) (EqvPieces_315));
                    }
                    {
                      Var_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_321, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_321, 1) = ((MR_Box) (Var_324));
                    }
                    {
                      Var_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_318, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_318, 1) = ((MR_Box) (Var_321));
                    }
                    Var_317 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_318, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_314, Var_317);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ModuleInfo_304 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_305;
                  MR_Word Var_245;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_304, InstName_9, &EqvInst_305);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_305)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_305, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_305, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_245);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[17])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_48 = STATE_VARIABLE_Expansions_0_47;
                  }
                  else
                  {
                    MR_Word InstNumPieces_247;
                    MR_Word EqvPieces_248;
                    MR_Word STATE_VARIABLE_Expansions_50_249;
                    MR_Word Var_250;
                    MR_Word Var_251;
                    MR_Word Var_254;
                    MR_Word Var_257;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_247, STATE_VARIABLE_Expansions_0_47, &STATE_VARIABLE_Expansions_50_249);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_50_249, &STATE_VARIABLE_Expansions_48, EqvInst_305, Suffix_10, &EqvPieces_248);
                    {
                      Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_257, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22])));
                      MR_hl_field(MR_mktag(1), Var_257, 1) = ((MR_Box) (EqvPieces_248));
                    }
                    {
                      Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_254, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), Var_254, 1) = ((MR_Box) (Var_257));
                    }
                    {
                      Var_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_251, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Var_251, 1) = ((MR_Box) (Var_254));
                    }
                    Var_250 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_251, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_247, Var_250);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Uniq_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word EqvInst_91;
                  MR_Word next_value_of_tscc_proc_1_input_1_Info_7;
                  MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
                  MR_Word next_value_of_tscc_proc_1_input_3_Inst_9;
                  MR_Word next_value_of_tscc_proc_1_input_4_Suffix_10;

                  {
                    EqvInst_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), EqvInst_91, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), EqvInst_91, 1) = (MR_Box) ((MR_Unsigned) (Uniq_27));
                    MR_hl_field(MR_mktag(3), EqvInst_91, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_Info_7 = Info_7;
                  next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_47;
                  next_value_of_tscc_proc_1_input_3_Inst_9 = EqvInst_91;
                  next_value_of_tscc_proc_1_input_4_Suffix_10 = Suffix_10;
                  tscc_proc_1_input_1_Info_7 = next_value_of_tscc_proc_1_input_1_Info_7;
                  tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
                  tscc_proc_1_input_3_Inst_9 = next_value_of_tscc_proc_1_input_3_Inst_9;
                  tscc_proc_1_input_4_Suffix_10 = next_value_of_tscc_proc_1_input_4_Suffix_10;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word SubInstName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))));
                  MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                  MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47 = STATE_VARIABLE_Expansions_0_47;
                  MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = SubInstName_26;
                  MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                  tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_47;
                  tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                  tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                  goto top_of_proc_2;
                }
                break;
            }
            break;
        }
      tscc_output_1_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_48;
      tscc_output_2_Pieces_11 = Pieces_11;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Expansions_34 = tscc_output_1_STATE_VARIABLE_Expansions_34;
    *tscc_output_ptr_2_Pieces_11 = tscc_output_2_Pieces_11;
    return;
  }
}

static void MR_CALL 
hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19,
  MR_Word HeadInst_10,
  MR_Word TailInsts_11,
  MR_Word Suffix_12,
  MR_Word * Pieces_13)
{
  {
    MR_Word HeadSuffix_14;
    MR_Word STATE_VARIABLE_Expansions_20_20;

    if ((TailInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      HeadSuffix_14 = Suffix_12;
      STATE_VARIABLE_Expansions_20_20 = STATE_VARIABLE_Expansions_0_18;
    }
    else
    {
      MR_Word HeadTailInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailInsts_11, (MR_Integer) 0))));
      MR_Word TailTailInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailInsts_11, (MR_Integer) 1))));
      MR_Word TailPieces_17;

      hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_0_18, &STATE_VARIABLE_Expansions_20_20, HeadTailInst_15, TailTailInsts_16, Suffix_12, &TailPieces_17);
      HeadSuffix_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[20])), TailPieces_17);
    }
    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_8, STATE_VARIABLE_Expansions_20_20, STATE_VARIABLE_Expansions_19, HeadInst_10, HeadSuffix_14, Pieces_13);
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
  {
    MR_bool succeeded;

    if ((ArgInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_36;

      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (Name_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Suffix_12));
      }
      *STATE_VARIABLE_Expansions_19 = STATE_VARIABLE_Expansions_0_18;
    }
    else
    {
      MR_Word HeadArgInst_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_11, (MR_Integer) 0))));
      MR_Word TailArgInsts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_11, (MR_Integer) 1))));
      MR_Word ArgPieces_16;
      MR_String ArgSummary_17;

      hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_0_18, STATE_VARIABLE_Expansions_19, HeadArgInst_14, TailArgInsts_15, (MR_Word) ((MR_Unsigned) 0U), &ArgPieces_16);
      succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(ArgPieces_16, (MR_Integer) 4, &ArgSummary_17);
      if (succeeded)
      {
        MR_Word Var_23;
        MR_String Var_24;
        MR_String Var_25;
        MR_String Var_27;

        Var_27 = mercury__string__f_43_43_2_f_0(ArgSummary_17, (MR_String) ")");
        Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_27);
        Var_24 = mercury__string__f_43_43_2_f_0(Name_10, Var_25);
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (Var_24));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Suffix_12));
        }
      }
      else
      {
        MR_Word Var_29;
        MR_Word Var_30;
        MR_String Var_31;
        MR_Word Var_33;

        Var_31 = mercury__string__f_43_43_2_f_0(Name_10, (MR_String) "(");
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (ArgPieces_16));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12])));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Suffix_12));
        }
        *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_29, Var_33);
      }
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
    MR_Word HeadArgInst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word TailArgInsts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word HeadPieces_14;
    MR_Word TailPieces_15;
    MR_Word STATE_VARIABLE_Expansions_18_18;

    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_18_18, HeadArgInst_12, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_14);
    hlds__error_msg_inst__arg_insts_to_inline_pieces_5_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_18_18, STATE_VARIABLE_Expansions_3, TailArgInsts_13, &TailPieces_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadPieces_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailPieces_15));
    }
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
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Expansions_3 = STATE_VARIABLE_Expansions_0_2;
    }
    else
    {
      MR_Word HeadMode_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TailModes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word HeadPieces_14;
      MR_Word TailPieces_15;
      MR_Word STATE_VARIABLE_Expansions_18_18;

      if (((MR_tag((MR_Word) HeadMode_12)) == (MR_Integer) 0))
      {
        MR_Word InitInst0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadMode_12, (MR_Integer) 0))));
        MR_Word FinalInst0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadMode_12, (MR_Integer) 1))));
        MR_Word InitInst_30;
        MR_Word FinalInst_33;
        MR_Word SubInitInstName_29;
        MR_Word Var_54;
        MR_Word SubFinalInstName_32;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;

        succeeded = ((((MR_tag((MR_Word) InitInst0_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InitInst0_26, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InitInst0_26, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_54)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_54, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
            SubInitInstName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_54, (MR_Integer) 2))));
        }
        if (succeeded)
          {
            InitInst_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), InitInst_30, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), InitInst_30, 1) = ((MR_Box) (SubInitInstName_29));
          }
        else
          InitInst_30 = InitInst0_26;
        succeeded = ((((MR_tag((MR_Word) FinalInst0_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalInst0_27, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst0_27, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_55, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
            SubFinalInstName_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_55, (MR_Integer) 2))));
        }
        if (succeeded)
          {
            FinalInst_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), FinalInst_33, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), FinalInst_33, 1) = ((MR_Box) (SubFinalInstName_32));
          }
        else
          FinalInst_33 = FinalInst0_27;
        succeeded = ((((MR_tag((MR_Word) InitInst_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InitInst_30, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InitInst_30, (MR_Integer) 1))) & (MR_Integer) 7);
          Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InitInst_30, (MR_Integer) 2))));
          succeeded = (Var_56 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) FinalInst_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalInst_33, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FinalInst_33, (MR_Integer) 1))) & (MR_Integer) 7);
                Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_33, (MR_Integer) 2))));
                succeeded = (Var_58 == (MR_Integer) 0);
                if (succeeded)
                  succeeded = (Var_59 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          HeadPieces_14 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[15]));
          STATE_VARIABLE_Expansions_18_18 = STATE_VARIABLE_Expansions_0_2;
        }
        else
        {
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;

          succeeded = ((((MR_tag((MR_Word) InitInst_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InitInst_30, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InitInst_30, (MR_Integer) 1))) & (MR_Integer) 7);
            Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InitInst_30, (MR_Integer) 2))));
            succeeded = (Var_63 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (Var_64 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) FinalInst_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalInst_33, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FinalInst_33, (MR_Integer) 1))) & (MR_Integer) 7);
                  Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_33, (MR_Integer) 2))));
                  succeeded = (Var_65 == (MR_Integer) 3);
                  if (succeeded)
                    succeeded = (Var_66 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
          if (succeeded)
          {
            HeadPieces_14 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[16]));
            STATE_VARIABLE_Expansions_18_18 = STATE_VARIABLE_Expansions_0_2;
          }
          else
          {
            MR_Word Var_70;
            MR_Word Var_71;

            succeeded = (InitInst_30 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) FinalInst_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalInst_33, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FinalInst_33, (MR_Integer) 1))) & (MR_Integer) 7);
                Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_33, (MR_Integer) 2))));
                succeeded = (Var_70 == (MR_Integer) 0);
                if (succeeded)
                  succeeded = (Var_71 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              HeadPieces_14 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[17]));
              STATE_VARIABLE_Expansions_18_18 = STATE_VARIABLE_Expansions_0_2;
            }
            else
            {
              MR_Word Var_75;
              MR_Word Var_76;

              succeeded = (InitInst_30 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) FinalInst_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalInst_33, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FinalInst_33, (MR_Integer) 1))) & (MR_Integer) 7);
                  Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_33, (MR_Integer) 2))));
                  succeeded = (Var_75 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                HeadPieces_14 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[18]));
                STATE_VARIABLE_Expansions_18_18 = STATE_VARIABLE_Expansions_0_2;
              }
              else
              {
                MR_Word InitPieces_34;
                MR_Word FinalPieces_35;
                MR_Word STATE_VARIABLE_Expansions_66_80;
                MR_Word Var_84;

                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_66_80, InitInst_30, (MR_Word) ((MR_Unsigned) 0U), &InitPieces_34);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_66_80, &STATE_VARIABLE_Expansions_18_18, FinalInst_33, (MR_Word) ((MR_Unsigned) 0U), &FinalPieces_35);
                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[8])));
                  MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (FinalPieces_35));
                }
                HeadPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InitPieces_34, Var_84);
              }
            }
          }
        }
      }
      else
      {
        MR_Word ModeName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadMode_12, (MR_Integer) 0))));
        MR_Word ArgInsts_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadMode_12, (MR_Integer) 1))));
        MR_String BaseModeName_38;

        BaseModeName_38 = mdbcomp__sym_name__unqualify_name_1_f_0(ModeName_36);
        if ((ArgInsts_37 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_52;

          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) (BaseModeName_38));
          }
          {
            HeadPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadPieces_14, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(1), HeadPieces_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_Expansions_18_18 = STATE_VARIABLE_Expansions_0_2;
        }
        else
        {
          MR_Word ArgInstPieces_41;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_String Var_45;
          MR_Word Var_47;
          MR_Word HeadArgInst_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_37, (MR_Integer) 0))));
          MR_Word TailArgInsts_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_37, (MR_Integer) 1))));
          MR_Word HeadPieces_97;
          MR_Word TailPieces_98;
          MR_Word STATE_VARIABLE_Expansions_18_101;

          hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_18_101, HeadArgInst_95, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_97);
          hlds__error_msg_inst__arg_insts_to_inline_pieces_5_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_18_101, &STATE_VARIABLE_Expansions_18_18, TailArgInsts_96, &TailPieces_98);
          {
            ArgInstPieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgInstPieces_41, 0) = ((MR_Box) (HeadPieces_97));
            MR_hl_field(MR_mktag(1), ArgInstPieces_41, 1) = ((MR_Box) (TailPieces_98));
          }
          Var_45 = mercury__string__f_43_43_2_f_0(BaseModeName_38, (MR_String) "(");
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
          }
          Var_47 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(ArgInstPieces_41);
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_47));
          }
          HeadPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_43, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[14])));
        }
      }
      hlds__error_msg_inst__modes_to_inline_pieces_5_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_18_18, STATE_VARIABLE_Expansions_3, TailModes_13, &TailPieces_15);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadPieces_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailPieces_15));
      }
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
  {
    MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_12, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgModes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_12, (MR_Integer) 1))));
    MR_Word Det_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_12, (MR_Integer) 3))) & (MR_Integer) 7);
    MR_Word UniqPieces_18;
    MR_Word ArgModesPieces_20;
    MR_String IsDetStr_21;
    MR_Word ModesDetPieces_22;
    MR_Box conv1_IsDetStr_21;

    switch (Uniq_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_String BoundName_19;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Box conv0_BoundName_19;

          parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Uniq_11, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &conv0_BoundName_19);
          BoundName_19 = ((MR_String) (conv0_BoundName_19));
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (BoundName_19));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[13])));
          }
          {
            UniqPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), UniqPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[1])));
            MR_hl_field(MR_mktag(1), UniqPieces_18, 1) = ((MR_Box) (Var_37));
          }
        }
        break;
      case (MR_Integer) 0:
        UniqPieces_18 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    hlds__error_msg_inst__modes_to_inline_pieces_5_p_0(Info_8, STATE_VARIABLE_Expansions_0_31, STATE_VARIABLE_Expansions_32, ArgModes_15, &ArgModesPieces_20);
    parse_tree__mercury_to_mercury__mercury_format_det_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Det_17, ((MR_Box) ((MR_String) "is ")), &conv1_IsDetStr_21);
    IsDetStr_21 = ((MR_String) (conv1_IsDetStr_21));
    switch (PredOrFunc_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word RealArgModesPieces_26;
          MR_Word RetModePieces_27;
          MR_Word JoinedRealArgModePieces_28;
          MR_Box conv2_RetModePieces_27;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ArgModesPieces_20, &RealArgModesPieces_26, &conv2_RetModePieces_27);
          RetModePieces_27 = ((MR_Word) (conv2_RetModePieces_27));
          JoinedRealArgModePieces_28 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(RealArgModesPieces_26);
          if ((ArgModes_15 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_64;
            MR_Word Var_65;
            MR_String Var_66;
            MR_String Var_68;
            MR_Word Var_70;
            MR_Word Var_71;

            Var_68 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "func =");
            Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_68);
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_65, 0) = ((MR_Box) (Var_66));
            }
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
              MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (RetModePieces_27));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_71, 0) = ((MR_Box) (IsDetStr_21));
            }
            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[14])));
            }
            ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_64, Var_70);
          }
          else
          {
            MR_Word Var_45;
            MR_Word Var_46;
            MR_String Var_47;
            MR_String Var_49;
            MR_Word Var_51;
            MR_Word Var_52;
            MR_Word Var_55;
            MR_Word Var_58;
            MR_Word Var_59;

            Var_49 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "func(");
            Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_49);
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Var_47));
            }
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
              MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (JoinedRealArgModePieces_28));
            }
            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[3])));
              MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (RetModePieces_27));
            }
            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12])));
              MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (IsDetStr_21));
            }
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[14])));
            }
            Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_52, Var_58);
            ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_45, Var_51);
          }
        }
        break;
      case (MR_Integer) 0:
        if ((ArgModes_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_91;
          MR_String Var_92;
          MR_String Var_94;
          MR_Word Var_96;
          MR_Word Var_97;

          Var_94 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "pred");
          Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_94);
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_91, 0) = ((MR_Box) (Var_92));
          }
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_97, 0) = ((MR_Box) (IsDetStr_21));
          }
          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Var_97));
            MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[14])));
          }
          {
            ModesDetPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ModesDetPieces_22, 0) = ((MR_Box) (Var_91));
            MR_hl_field(MR_mktag(1), ModesDetPieces_22, 1) = ((MR_Box) (Var_96));
          }
        }
        else
        {
          MR_Word JoinedArgModePieces_25;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_String Var_78;
          MR_String Var_80;
          MR_Word Var_82;
          MR_Word Var_85;
          MR_Word Var_86;

          JoinedArgModePieces_25 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(ArgModesPieces_20);
          Var_80 = mercury__string__f_43_43_2_f_0(AnyPrefix_10, (MR_String) "pred(");
          Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_80);
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (Var_78));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (JoinedArgModePieces_25));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_86, 0) = ((MR_Box) (IsDetStr_21));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[14])));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12])));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_85));
          }
          ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_76, Var_82);
        }
        break;
    }
    *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), UniqPieces_18, ModesDetPieces_22);
  }
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
    MR_Box conv0_ConsIdStr_26;

    if ((TailBoundInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      HeadSuffix_14 = Suffix_12;
      STATE_VARIABLE_Expansions_29_29 = STATE_VARIABLE_Expansions_0_27;
    }
    else
    {
      MR_Word HeadTailBoundInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailBoundInsts_11, (MR_Integer) 0))));
      MR_Word TailTailBoundInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailBoundInsts_11, (MR_Integer) 1))));
      MR_Word TailPieces_17;

      hlds__error_msg_inst__bound_insts_to_inline_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_0_27, &STATE_VARIABLE_Expansions_29_29, HeadTailBoundInst_15, TailTailBoundInsts_16, Suffix_12, &TailPieces_17);
      {
        HeadSuffix_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadSuffix_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[0])));
        MR_hl_field(MR_mktag(1), HeadSuffix_14, 1) = ((MR_Box) (TailPieces_17));
      }
    }
    ConsId0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadBoundInst_10, (MR_Integer) 0))));
    ArgInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadBoundInst_10, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) ConsId0_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      SymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_18, (MR_Integer) 1))));
      Arity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_18, (MR_Integer) 2))));
      TypeCtor_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_18, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) SymName_20)) == (MR_Integer) 1);
      if (succeeded)
        BaseName_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_20, (MR_Integer) 1))));
    }
    if (succeeded)
    {
      MR_Word Var_32;

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (BaseName_24));
      }
      {
        ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConsId_25, 1) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(3), ConsId_25, 2) = ((MR_Box) (Arity_21));
        MR_hl_field(MR_mktag(3), ConsId_25, 3) = ((MR_Box) (TypeCtor_22));
      }
    }
    else
      ConsId_25 = ConsId0_18;
    parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), (MR_Integer) 1, ConsId_25, ((MR_Box) ((MR_String) "")), &conv0_ConsIdStr_26);
    ConsIdStr_26 = ((MR_String) (conv0_ConsIdStr_26));
    if ((ArgInsts_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_65;

      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_65, 0) = ((MR_Box) (ConsIdStr_26));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadSuffix_14));
      }
      *STATE_VARIABLE_Expansions_28 = STATE_VARIABLE_Expansions_29_29;
    }
    else
    {
      MR_Word HeadArgInst_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_19, (MR_Integer) 0))));
      MR_Word TailArgInsts_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_19, (MR_Integer) 1))));
      MR_Word ArgPieces_47;
      MR_String ArgSummary_48;

      hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_29_29, STATE_VARIABLE_Expansions_28, HeadArgInst_45, TailArgInsts_46, (MR_Word) ((MR_Unsigned) 0U), &ArgPieces_47);
      succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(ArgPieces_47, (MR_Integer) 4, &ArgSummary_48);
      if (succeeded)
      {
        MR_Word Var_52;
        MR_String Var_53;
        MR_String Var_54;
        MR_String Var_56;

        Var_56 = mercury__string__f_43_43_2_f_0(ArgSummary_48, (MR_String) ")");
        Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_56);
        Var_53 = mercury__string__f_43_43_2_f_0(ConsIdStr_26, Var_54);
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) (Var_53));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadSuffix_14));
        }
      }
      else
      {
        MR_Word Var_58;
        MR_Word Var_59;
        MR_String Var_60;
        MR_Word Var_62;

        Var_60 = mercury__string__f_43_43_2_f_0(ConsIdStr_26, (MR_String) "(");
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (ArgPieces_47));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12])));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (HeadSuffix_14));
        }
        *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_58, Var_62);
      }
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
  {
    MR_Word ExpansionsMap0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Expansions_0_16, (MR_Integer) 0))));
    MR_Word ExpansionsCounter0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Expansions_0_16, (MR_Integer) 1))));
    MR_Integer InstNum_12;
    MR_Word ExpansionsCounter_13;
    MR_String InstNameNumStr_14;
    MR_Word ExpansionsMap_15;
    MR_String Var_19;
    MR_String Var_20;
    MR_String Var_22;
    MR_Word Var_23;

    mercury__counter__allocate_3_p_0(&InstNum_12, ExpansionsCounter0_11, &ExpansionsCounter_13);
    Var_22 = mercury__string__int_to_string_1_f_0(InstNum_12);
    Var_20 = mercury__string__f_43_43_2_f_0((MR_String) " #", Var_22);
    Var_19 = mercury__string__f_43_43_2_f_0(InstNameStr_7, Var_20);
    InstNameNumStr_14 = mercury__string__f_43_43_2_f_0((MR_String) "internal ", Var_19);
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (InstNameNumStr_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *InstNumPieces_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ((MR_Box) (InstName_6)), ((MR_Box) (*InstNumPieces_8)), ExpansionsMap0_10, &ExpansionsMap_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Expansions_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ExpansionsMap_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExpansionsCounter_13));
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__record_user_inst_name_4_p_0(
  MR_Word InstName_5,
  MR_Word NamedNamePieces_6,
  MR_Word STATE_VARIABLE_Expansions_0_11,
  MR_Word * STATE_VARIABLE_Expansions_12)
{
  {
    MR_Word ExpansionsMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Expansions_0_11, (MR_Integer) 0))));
    MR_Word ExpansionsCounter0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Expansions_0_11, (MR_Integer) 1))));
    MR_Word ExpansionsMap_10;

    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ((MR_Box) (InstName_5)), ((MR_Box) (NamedNamePieces_6)), ExpansionsMap0_8, &ExpansionsMap_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Expansions_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ExpansionsMap_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExpansionsCounter0_9));
    }
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(
  MR_Word Expansions_4,
  MR_Word InstName_5,
  MR_Word * PastPieces_6)
{
  {
    MR_bool succeeded;
    MR_Word ExpansionsMap_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Expansions_4, (MR_Integer) 0))));
    MR_Box conv0_PastPieces_6;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ExpansionsMap_7, ((MR_Box) (InstName_5)), &conv0_PastPieces_6);
    if (succeeded)
    {
      *PastPieces_6 = ((MR_Word) (conv0_PastPieces_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(
  MR_Word Pieces_4,
  MR_Integer Left_5,
  MR_String * Summary_6)
{
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
        Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Pieces_4, (MR_Integer) 0))));
        AfterFirstFixed_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Pieces_4, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 2);
        if (succeeded)
        {
          FirstFixed_7 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_12, (MR_Integer) 0))));
          if ((AfterFirstFixed_8 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *Summary_6 = FirstFixed_7;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word TailPieces_9;
            MR_String TailSummary_10;
            MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AfterFirstFixed_8, (MR_Integer) 0))));
            MR_String Var_14;
            MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AfterFirstFixed_8, (MR_Integer) 1))));
            MR_Word Var_16;
            MR_Integer Var_17;
            MR_Integer Var_18;
            MR_String Var_19;
            MR_String Var_20;

            succeeded = ((((MR_tag((MR_Word) Var_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              Var_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), Var_13, (MR_Integer) 1))));
              succeeded = (strcmp(Var_14, (MR_String) ",") == 0);
              if (succeeded)
              {
                succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
                  TailPieces_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
                  succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 4U));
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
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____expansions_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__error_msg_inst____Unify____expansions_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____expansions_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__error_msg_inst____Compare____expansions_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__error_msg_inst____Unify____inst_msg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__error_msg_inst____Compare____inst_msg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__error_msg_inst____Unify____short_inst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__error_msg_inst____Compare____short_inst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
