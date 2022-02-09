/*
** Automatically generated from `error_msg_inst.m'
** by the Mercury compiler,
** version rotd-2022-02-09
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
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




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
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_34,
  MR_Word tscc_proc_2_input_3_InstName_9,
  MR_Word tscc_proc_2_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11);

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
hlds__error_msg_inst__user_defined_mode_to_pieces_6_p_0(
  MR_Word Info_7,
  MR_Word STATE_VARIABLE_Expansions_0_16,
  MR_Word * STATE_VARIABLE_Expansions_17,
  MR_Word ModeName_9,
  MR_Word ArgInsts_10,
  MR_Word * Pieces_11);

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
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Expansions_34,
  MR_Word tscc_proc_2_input_3_InstName_9,
  MR_Word tscc_proc_2_input_4_Suffix_10,
  MR_Word * tscc_output_ptr_2_Pieces_11);

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
hlds__error_msg_inst__user_defined_mode_to_inline_pieces_6_p_0(
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


static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_1[22][2];

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_3[18][1];




static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_1[22][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which expands to"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "named inst"))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "<"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ">"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[20])))
  },
};

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__unit__unit__arity0__string__arity0__)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__error_msg_inst_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_3[18][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "("))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "=<"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "free"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "not_reached"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\044any_inst"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\044ground_inst"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "\044merge_inst"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\044mostly_uniq_inst"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\044shared_inst"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\044unify_inst"))
  },
  /* row 12 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "/*"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "*/"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) ") ="))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) ">>"))
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__error_msg_inst____Unify____expansions_info_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____expansions_info_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "expansions_info",
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_expansions_info_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_expansions_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_expansions_info_0,

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

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0[1] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0
};

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

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0[1] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0
};

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_inst_msg_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "inst_msg_info",
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0 },
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
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_maybe_expand_named_insts_0 },
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
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_short_inst_0 },
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
        TypeInfo_12_12 = (MR_Word) (&hlds__error_msg_inst_scalar_common_1[2]);
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

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45;
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
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[3])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[4])));
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
              MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[3])));
              MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word HOInstInfo_93 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 1))));

            if ((HOInstInfo_93 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_58;
              MR_String Str_88;

              Str_88 = parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(Uniq_92);
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (Str_88));
              }
              {
                Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            else
            {
              MR_Word PredInstInfo_86 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_93), (MR_Integer) 1));
              MR_Word HOPieces_87;

              hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "any_", Uniq_92, PredInstInfo_86, &HOPieces_87);
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_87, Suffix_10);
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

                BoundName_16 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_13, (MR_String) "bound");
                if ((BoundInsts_15 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_82;

                  {
                    Var_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_82, 0) = ((MR_Box) (BoundName_16));
                  }
                  {
                    Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_82));
                    MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
                }
                else
                {
                  MR_Word HeadBoundInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 0))));
                  MR_Word TailBoundInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 1))));
                  MR_Word BoundPieces_19;
                  MR_Word Var_68;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_Word Var_73;
                  MR_Word Var_76;
                  MR_Word Var_79;

                  hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, HeadBoundInst_17, TailBoundInsts_18, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_19);
                  {
                    Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (BoundName_16));
                  }
                  {
                    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                    MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (BoundPieces_19));
                  }
                  {
                    Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[3])));
                    MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
                  }
                  {
                    Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
                    MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
                  }
                  {
                    Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[0])));
                    MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Suffix_10));
                  }
                  {
                    Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[5])));
                    MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
                  }
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_68, Var_76);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HOInstInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_Word Uniq_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);

                if ((HOInstInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_String Str_23;
                  MR_Word Var_62;

                  Str_23 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_85, (MR_String) "ground");
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

                  hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "", Uniq_85, PredInstInfo_21, &HOPieces_22);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_22, Suffix_10);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word InstVarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_String Name_26;
                MR_Word Var_57;
                MR_Box conv1_Name_26;

                parse_tree__parse_tree_out_term__mercury_format_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), InstVarSet_25, (MR_Integer) 0, Var_24, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_Name_26);
                Name_26 = ((MR_String) (conv1_Name_26));
                {
                  Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (Name_26));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_57));
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
                MR_Word Var_44;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word InstVarSet_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_Box conv0_Names_29;

                Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_27);
                parse_tree__parse_tree_out_term__mercury_format_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), InstVarSet_97, (MR_Integer) 0, Var_40, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_Names_29);
                Names_29 = ((MR_String) (conv0_Names_29));
                {
                  Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[0])));
                  MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Suffix_10));
                }
                hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, ConstrainedInst_28, Var_44, &InstPieces_30);
                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (Names_29));
                }
                {
                  Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[2])));
                  MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (InstPieces_30));
                }
                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
                  MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[1])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_49));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45 = STATE_VARIABLE_Expansions_0_33;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_99;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45;
                tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ArgInsts_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_Word InstName_32;
                MR_Word Name_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10;

                {
                  InstName_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InstName_32, 0) = ((MR_Box) (Name_98));
                  MR_hl_field(MR_mktag(0), InstName_32, 1) = ((MR_Box) (ArgInsts_31));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45 = STATE_VARIABLE_Expansions_0_33;
                next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_32;
                next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45;
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
      MR_Word STATE_VARIABLE_Expansions_0_45 = tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45;
      MR_Word STATE_VARIABLE_Expansions_46;
      MR_Word InstName_9 = tscc_proc_2_input_3_InstName_9;
      MR_Word Suffix_10 = tscc_proc_2_input_4_Suffix_10;
      MR_Word Pieces_11;
      MR_bool succeeded;
      MR_Word PastPieces_12;

      succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_45, InstName_9, &PastPieces_12);
      if (succeeded)
      {
        Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PastPieces_12, Suffix_10);
        STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
      }
      else
        switch (MR_tag((MR_Word) InstName_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 0))));
              MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 1))));
              MR_String SymNameStr_15;
              MR_Word NameInfo_16;
              MR_Word NamePieces_18;
              MR_Word NamedNamePieces_19;
              MR_Word ExpandInsts_20;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_17;

              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_7, SymName_13, &SymNameStr_15);
              Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
              {
                NameInfo_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), NameInfo_16, 0) = ((MR_Box) (Var_93));
                MR_hl_field(MR_mktag(0), NameInfo_16, 1) = ((MR_Box) (Var_94));
                MR_hl_field(MR_mktag(0), NameInfo_16, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_45, &Var_17, SymNameStr_15, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_18);
              {
                NamedNamePieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NamedNamePieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[13])));
                MR_hl_field(MR_mktag(1), NamedNamePieces_19, 1) = ((MR_Box) (NamePieces_18));
              }
              ExpandInsts_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (ExpandInsts_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamePieces_18, Suffix_10);
                    STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ModuleInfo_21;
                    MR_Word EqvInst_22;
                    MR_Word STATE_VARIABLE_Expansions_70_70;

                    hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_9, NamedNamePieces_19, STATE_VARIABLE_Expansions_0_45, &STATE_VARIABLE_Expansions_70_70);
                    ModuleInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                    check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_21, InstName_9, &EqvInst_22);
                    if (((((MR_tag((MR_Word) EqvInst_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 0)))) == (MR_Integer) 5))))
                    {
                      MR_Word TypeInfo_438_438;
                      MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 1))));
                      MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 2))));

                      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_13, Var_108);
                      if (succeeded)
                      {
                        TypeInfo_438_438 = (MR_Word) (&hlds__error_msg_inst_scalar_common_1[14]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_438_438, ((MR_Box) (ArgInsts_14)), ((MR_Box) (Var_109)));
                      }
                    }
                    else
                    if (((((MR_tag((MR_Word) EqvInst_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 0)))) == (MR_Integer) 4))))
                    {
                      MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 1))));

                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_107);
                    }
                    else
                      succeeded = MR_FALSE;
                    if (succeeded)
                    {
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_19, Suffix_10);
                      STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_70_70;
                    }
                    else
                    {
                      MR_Word EqvPieces_23;
                      MR_Word Var_72;
                      MR_Word Var_73;
                      MR_Word Var_75;
                      MR_Word Var_78;

                      hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_70_70, &STATE_VARIABLE_Expansions_46, EqvInst_22, Suffix_10, &EqvPieces_23);
                      {
                        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (EqvPieces_23));
                      }
                      {
                        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
                      }
                      {
                        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
                      }
                      Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_73, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[12])));
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_19, Var_72);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleInfo_425 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_426;
              MR_Word Var_369;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_425, InstName_9, &EqvInst_426);
              succeeded = ((((MR_tag((MR_Word) EqvInst_426)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_426, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_369 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_426, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_369);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[11])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
              }
              else
              {
                MR_Word InstNumPieces_371;
                MR_Word STATE_VARIABLE_Expansions_48_372;
                MR_Word Var_373;
                MR_Word Var_374;
                MR_Word Var_376;
                MR_Word Var_379;
                MR_Word EqvPieces_386;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044unify_inst", &InstNumPieces_371, STATE_VARIABLE_Expansions_0_45, &STATE_VARIABLE_Expansions_48_372);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_48_372, &STATE_VARIABLE_Expansions_46, EqvInst_426, Suffix_10, &EqvPieces_386);
                {
                  Var_379 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_379, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                  MR_hl_field(MR_mktag(1), Var_379, 1) = ((MR_Box) (EqvPieces_386));
                }
                {
                  Var_376 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_376, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                  MR_hl_field(MR_mktag(1), Var_376, 1) = ((MR_Box) (Var_379));
                }
                {
                  Var_374 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_374, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_374, 1) = ((MR_Box) (Var_376));
                }
                Var_373 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_374, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[12])));
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_371, Var_373);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleInfo_233 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_234;
              MR_Word Var_177;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_233, InstName_9, &EqvInst_234);
              succeeded = ((((MR_tag((MR_Word) EqvInst_234)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_234, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_234, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_177);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[8])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
              }
              else
              {
                MR_Word InstNumPieces_179;
                MR_Word STATE_VARIABLE_Expansions_48_180;
                MR_Word Var_181;
                MR_Word Var_182;
                MR_Word Var_184;
                MR_Word Var_187;
                MR_Word EqvPieces_194;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044merge_inst", &InstNumPieces_179, STATE_VARIABLE_Expansions_0_45, &STATE_VARIABLE_Expansions_48_180);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_48_180, &STATE_VARIABLE_Expansions_46, EqvInst_234, Suffix_10, &EqvPieces_194);
                {
                  Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                  MR_hl_field(MR_mktag(1), Var_187, 1) = ((MR_Box) (EqvPieces_194));
                }
                {
                  Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                  MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) (Var_187));
                }
                {
                  Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (Var_184));
                }
                Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_182, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[12])));
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_179, Var_181);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModuleInfo_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_170;
                  MR_Word Var_113;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_169, InstName_9, &EqvInst_170);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_170)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_170, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_170, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_113);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[7])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
                  }
                  else
                  {
                    MR_Word InstNumPieces_115;
                    MR_Word STATE_VARIABLE_Expansions_48_116;
                    MR_Word Var_117;
                    MR_Word Var_118;
                    MR_Word Var_120;
                    MR_Word Var_123;
                    MR_Word EqvPieces_130;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044ground_inst", &InstNumPieces_115, STATE_VARIABLE_Expansions_0_45, &STATE_VARIABLE_Expansions_48_116);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_48_116, &STATE_VARIABLE_Expansions_46, EqvInst_170, Suffix_10, &EqvPieces_130);
                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (EqvPieces_130));
                    }
                    {
                      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_123));
                    }
                    {
                      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_120));
                    }
                    Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_118, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[12])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_115, Var_117);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModuleInfo_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_91;
                  MR_Word Var_110;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_90, InstName_9, &EqvInst_91);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_91)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_91, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_91, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_110);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[6])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
                  }
                  else
                  {
                    MR_Word InstNumPieces_44;
                    MR_Word STATE_VARIABLE_Expansions_48_48;
                    MR_Word Var_50;
                    MR_Word Var_51;
                    MR_Word Var_53;
                    MR_Word Var_56;
                    MR_Word EqvPieces_88;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044any_inst", &InstNumPieces_44, STATE_VARIABLE_Expansions_0_45, &STATE_VARIABLE_Expansions_48_48);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_48_48, &STATE_VARIABLE_Expansions_46, EqvInst_91, Suffix_10, &EqvPieces_88);
                    {
                      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (EqvPieces_88));
                    }
                    {
                      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
                    }
                    {
                      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
                    }
                    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_51, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[12])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_44, Var_50);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ModuleInfo_361 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_362;
                  MR_Word Var_305;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_361, InstName_9, &EqvInst_362);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_362)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_362, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_305 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_362, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_305);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[10])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
                  }
                  else
                  {
                    MR_Word InstNumPieces_307;
                    MR_Word STATE_VARIABLE_Expansions_48_308;
                    MR_Word Var_309;
                    MR_Word Var_310;
                    MR_Word Var_312;
                    MR_Word Var_315;
                    MR_Word EqvPieces_322;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044shared_inst", &InstNumPieces_307, STATE_VARIABLE_Expansions_0_45, &STATE_VARIABLE_Expansions_48_308);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_48_308, &STATE_VARIABLE_Expansions_46, EqvInst_362, Suffix_10, &EqvPieces_322);
                    {
                      Var_315 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_315, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(MR_mktag(1), Var_315, 1) = ((MR_Box) (EqvPieces_322));
                    }
                    {
                      Var_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_312, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_312, 1) = ((MR_Box) (Var_315));
                    }
                    {
                      Var_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_310, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_310, 1) = ((MR_Box) (Var_312));
                    }
                    Var_309 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_310, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[12])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_307, Var_309);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ModuleInfo_297 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_298;
                  MR_Word Var_241;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_297, InstName_9, &EqvInst_298);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_298)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_298, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_298, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_241);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[9])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
                  }
                  else
                  {
                    MR_Word InstNumPieces_243;
                    MR_Word STATE_VARIABLE_Expansions_48_244;
                    MR_Word Var_245;
                    MR_Word Var_246;
                    MR_Word Var_248;
                    MR_Word Var_251;
                    MR_Word EqvPieces_258;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_243, STATE_VARIABLE_Expansions_0_45, &STATE_VARIABLE_Expansions_48_244);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_48_244, &STATE_VARIABLE_Expansions_46, EqvInst_298, Suffix_10, &EqvPieces_258);
                    {
                      Var_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_251, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(MR_mktag(1), Var_251, 1) = ((MR_Box) (EqvPieces_258));
                    }
                    {
                      Var_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_248, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_248, 1) = ((MR_Box) (Var_251));
                    }
                    {
                      Var_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_246, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_246, 1) = ((MR_Box) (Var_248));
                    }
                    Var_245 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_246, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[12])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_243, Var_245);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Uniq_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word EqvInst_86;
                  MR_Word next_value_of_tscc_proc_1_input_1_Info_7;
                  MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
                  MR_Word next_value_of_tscc_proc_1_input_3_Inst_9;
                  MR_Word next_value_of_tscc_proc_1_input_4_Suffix_10;

                  {
                    EqvInst_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), EqvInst_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), EqvInst_86, 1) = (MR_Box) ((MR_Unsigned) (Uniq_26));
                    MR_hl_field(MR_mktag(3), EqvInst_86, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_Info_7 = Info_7;
                  next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_45;
                  next_value_of_tscc_proc_1_input_3_Inst_9 = EqvInst_86;
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
                  MR_Word SubInstName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))));
                  MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                  MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45 = STATE_VARIABLE_Expansions_0_45;
                  MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = SubInstName_25;
                  MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                  tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45;
                  tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                  tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                  goto top_of_proc_2;
                }
                break;
            }
            break;
        }
      tscc_output_1_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_46;
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
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45,
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
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[3])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[4])));
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
              MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[3])));
              MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word HOInstInfo_93 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 1))));

            if ((HOInstInfo_93 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_58;
              MR_String Str_88;

              Str_88 = parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(Uniq_92);
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (Str_88));
              }
              {
                Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            else
            {
              MR_Word PredInstInfo_86 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_93), (MR_Integer) 1));
              MR_Word HOPieces_87;

              hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "any_", Uniq_92, PredInstInfo_86, &HOPieces_87);
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_87, Suffix_10);
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

                BoundName_16 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_13, (MR_String) "bound");
                if ((BoundInsts_15 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_82;

                  {
                    Var_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_82, 0) = ((MR_Box) (BoundName_16));
                  }
                  {
                    Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_82));
                    MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
                }
                else
                {
                  MR_Word HeadBoundInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 0))));
                  MR_Word TailBoundInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 1))));
                  MR_Word BoundPieces_19;
                  MR_Word Var_68;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_Word Var_73;
                  MR_Word Var_76;
                  MR_Word Var_79;

                  hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, HeadBoundInst_17, TailBoundInsts_18, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_19);
                  {
                    Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (BoundName_16));
                  }
                  {
                    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                    MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (BoundPieces_19));
                  }
                  {
                    Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[3])));
                    MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
                  }
                  {
                    Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
                    MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
                  }
                  {
                    Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[0])));
                    MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Suffix_10));
                  }
                  {
                    Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[5])));
                    MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
                  }
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_68, Var_76);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HOInstInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_Word Uniq_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);

                if ((HOInstInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_String Str_23;
                  MR_Word Var_62;

                  Str_23 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_85, (MR_String) "ground");
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

                  hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "", Uniq_85, PredInstInfo_21, &HOPieces_22);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_22, Suffix_10);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word InstVarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_String Name_26;
                MR_Word Var_57;
                MR_Box conv1_Name_26;

                parse_tree__parse_tree_out_term__mercury_format_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), InstVarSet_25, (MR_Integer) 0, Var_24, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_Name_26);
                Name_26 = ((MR_String) (conv1_Name_26));
                {
                  Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (Name_26));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_57));
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
                MR_Word Var_44;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word InstVarSet_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_Box conv0_Names_29;

                Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_27);
                parse_tree__parse_tree_out_term__mercury_format_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), InstVarSet_97, (MR_Integer) 0, Var_40, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_Names_29);
                Names_29 = ((MR_String) (conv0_Names_29));
                {
                  Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[0])));
                  MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Suffix_10));
                }
                hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, ConstrainedInst_28, Var_44, &InstPieces_30);
                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (Names_29));
                }
                {
                  Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[2])));
                  MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (InstPieces_30));
                }
                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
                  MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[1])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_49));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45 = STATE_VARIABLE_Expansions_0_33;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_99;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45;
                tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ArgInsts_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_Word InstName_32;
                MR_Word Name_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10;

                {
                  InstName_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InstName_32, 0) = ((MR_Box) (Name_98));
                  MR_hl_field(MR_mktag(0), InstName_32, 1) = ((MR_Box) (ArgInsts_31));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45 = STATE_VARIABLE_Expansions_0_33;
                next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_32;
                next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;
                tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45;
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
      MR_Word STATE_VARIABLE_Expansions_0_45 = tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45;
      MR_Word STATE_VARIABLE_Expansions_46;
      MR_Word InstName_9 = tscc_proc_2_input_3_InstName_9;
      MR_Word Suffix_10 = tscc_proc_2_input_4_Suffix_10;
      MR_Word Pieces_11;
      MR_bool succeeded;
      MR_Word PastPieces_12;

      succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_45, InstName_9, &PastPieces_12);
      if (succeeded)
      {
        Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PastPieces_12, Suffix_10);
        STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
      }
      else
        switch (MR_tag((MR_Word) InstName_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 0))));
              MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 1))));
              MR_String SymNameStr_15;
              MR_Word NameInfo_16;
              MR_Word NamePieces_18;
              MR_Word NamedNamePieces_19;
              MR_Word ExpandInsts_20;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_17;

              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_7, SymName_13, &SymNameStr_15);
              Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
              {
                NameInfo_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), NameInfo_16, 0) = ((MR_Box) (Var_93));
                MR_hl_field(MR_mktag(0), NameInfo_16, 1) = ((MR_Box) (Var_94));
                MR_hl_field(MR_mktag(0), NameInfo_16, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_45, &Var_17, SymNameStr_15, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_18);
              {
                NamedNamePieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NamedNamePieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[13])));
                MR_hl_field(MR_mktag(1), NamedNamePieces_19, 1) = ((MR_Box) (NamePieces_18));
              }
              ExpandInsts_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (ExpandInsts_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamePieces_18, Suffix_10);
                    STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ModuleInfo_21;
                    MR_Word EqvInst_22;
                    MR_Word STATE_VARIABLE_Expansions_70_70;

                    hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_9, NamedNamePieces_19, STATE_VARIABLE_Expansions_0_45, &STATE_VARIABLE_Expansions_70_70);
                    ModuleInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                    check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_21, InstName_9, &EqvInst_22);
                    if (((((MR_tag((MR_Word) EqvInst_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 0)))) == (MR_Integer) 5))))
                    {
                      MR_Word TypeInfo_438_438;
                      MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 1))));
                      MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 2))));

                      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_13, Var_108);
                      if (succeeded)
                      {
                        TypeInfo_438_438 = (MR_Word) (&hlds__error_msg_inst_scalar_common_1[14]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_438_438, ((MR_Box) (ArgInsts_14)), ((MR_Box) (Var_109)));
                      }
                    }
                    else
                    if (((((MR_tag((MR_Word) EqvInst_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 0)))) == (MR_Integer) 4))))
                    {
                      MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 1))));

                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_107);
                    }
                    else
                      succeeded = MR_FALSE;
                    if (succeeded)
                    {
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_19, Suffix_10);
                      STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_70_70;
                    }
                    else
                    {
                      MR_Word EqvPieces_23;
                      MR_Word Var_72;
                      MR_Word Var_73;
                      MR_Word Var_75;
                      MR_Word Var_78;

                      hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_70_70, &STATE_VARIABLE_Expansions_46, EqvInst_22, Suffix_10, &EqvPieces_23);
                      {
                        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (EqvPieces_23));
                      }
                      {
                        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
                      }
                      {
                        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
                      }
                      Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_73, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[12])));
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_19, Var_72);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleInfo_425 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_426;
              MR_Word Var_369;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_425, InstName_9, &EqvInst_426);
              succeeded = ((((MR_tag((MR_Word) EqvInst_426)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_426, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_369 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_426, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_369);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[11])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
              }
              else
              {
                MR_Word InstNumPieces_371;
                MR_Word STATE_VARIABLE_Expansions_48_372;
                MR_Word Var_373;
                MR_Word Var_374;
                MR_Word Var_376;
                MR_Word Var_379;
                MR_Word EqvPieces_386;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044unify_inst", &InstNumPieces_371, STATE_VARIABLE_Expansions_0_45, &STATE_VARIABLE_Expansions_48_372);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_48_372, &STATE_VARIABLE_Expansions_46, EqvInst_426, Suffix_10, &EqvPieces_386);
                {
                  Var_379 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_379, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                  MR_hl_field(MR_mktag(1), Var_379, 1) = ((MR_Box) (EqvPieces_386));
                }
                {
                  Var_376 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_376, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                  MR_hl_field(MR_mktag(1), Var_376, 1) = ((MR_Box) (Var_379));
                }
                {
                  Var_374 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_374, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_374, 1) = ((MR_Box) (Var_376));
                }
                Var_373 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_374, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[12])));
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_371, Var_373);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleInfo_233 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_234;
              MR_Word Var_177;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_233, InstName_9, &EqvInst_234);
              succeeded = ((((MR_tag((MR_Word) EqvInst_234)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_234, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_234, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_177);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[8])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
              }
              else
              {
                MR_Word InstNumPieces_179;
                MR_Word STATE_VARIABLE_Expansions_48_180;
                MR_Word Var_181;
                MR_Word Var_182;
                MR_Word Var_184;
                MR_Word Var_187;
                MR_Word EqvPieces_194;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044merge_inst", &InstNumPieces_179, STATE_VARIABLE_Expansions_0_45, &STATE_VARIABLE_Expansions_48_180);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_48_180, &STATE_VARIABLE_Expansions_46, EqvInst_234, Suffix_10, &EqvPieces_194);
                {
                  Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                  MR_hl_field(MR_mktag(1), Var_187, 1) = ((MR_Box) (EqvPieces_194));
                }
                {
                  Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                  MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) (Var_187));
                }
                {
                  Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (Var_184));
                }
                Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_182, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[12])));
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_179, Var_181);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModuleInfo_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_170;
                  MR_Word Var_113;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_169, InstName_9, &EqvInst_170);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_170)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_170, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_170, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_113);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[7])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
                  }
                  else
                  {
                    MR_Word InstNumPieces_115;
                    MR_Word STATE_VARIABLE_Expansions_48_116;
                    MR_Word Var_117;
                    MR_Word Var_118;
                    MR_Word Var_120;
                    MR_Word Var_123;
                    MR_Word EqvPieces_130;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044ground_inst", &InstNumPieces_115, STATE_VARIABLE_Expansions_0_45, &STATE_VARIABLE_Expansions_48_116);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_48_116, &STATE_VARIABLE_Expansions_46, EqvInst_170, Suffix_10, &EqvPieces_130);
                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (EqvPieces_130));
                    }
                    {
                      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_123));
                    }
                    {
                      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_120));
                    }
                    Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_118, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[12])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_115, Var_117);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModuleInfo_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_91;
                  MR_Word Var_110;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_90, InstName_9, &EqvInst_91);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_91)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_91, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_91, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_110);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[6])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
                  }
                  else
                  {
                    MR_Word InstNumPieces_44;
                    MR_Word STATE_VARIABLE_Expansions_48_48;
                    MR_Word Var_50;
                    MR_Word Var_51;
                    MR_Word Var_53;
                    MR_Word Var_56;
                    MR_Word EqvPieces_88;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044any_inst", &InstNumPieces_44, STATE_VARIABLE_Expansions_0_45, &STATE_VARIABLE_Expansions_48_48);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_48_48, &STATE_VARIABLE_Expansions_46, EqvInst_91, Suffix_10, &EqvPieces_88);
                    {
                      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (EqvPieces_88));
                    }
                    {
                      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
                    }
                    {
                      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
                    }
                    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_51, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[12])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_44, Var_50);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ModuleInfo_361 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_362;
                  MR_Word Var_305;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_361, InstName_9, &EqvInst_362);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_362)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_362, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_305 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_362, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_305);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[10])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
                  }
                  else
                  {
                    MR_Word InstNumPieces_307;
                    MR_Word STATE_VARIABLE_Expansions_48_308;
                    MR_Word Var_309;
                    MR_Word Var_310;
                    MR_Word Var_312;
                    MR_Word Var_315;
                    MR_Word EqvPieces_322;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044shared_inst", &InstNumPieces_307, STATE_VARIABLE_Expansions_0_45, &STATE_VARIABLE_Expansions_48_308);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_48_308, &STATE_VARIABLE_Expansions_46, EqvInst_362, Suffix_10, &EqvPieces_322);
                    {
                      Var_315 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_315, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(MR_mktag(1), Var_315, 1) = ((MR_Box) (EqvPieces_322));
                    }
                    {
                      Var_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_312, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_312, 1) = ((MR_Box) (Var_315));
                    }
                    {
                      Var_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_310, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_310, 1) = ((MR_Box) (Var_312));
                    }
                    Var_309 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_310, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[12])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_307, Var_309);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ModuleInfo_297 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_298;
                  MR_Word Var_241;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_297, InstName_9, &EqvInst_298);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_298)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_298, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_298, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_241);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[9])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_46 = STATE_VARIABLE_Expansions_0_45;
                  }
                  else
                  {
                    MR_Word InstNumPieces_243;
                    MR_Word STATE_VARIABLE_Expansions_48_244;
                    MR_Word Var_245;
                    MR_Word Var_246;
                    MR_Word Var_248;
                    MR_Word Var_251;
                    MR_Word EqvPieces_258;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_243, STATE_VARIABLE_Expansions_0_45, &STATE_VARIABLE_Expansions_48_244);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_48_244, &STATE_VARIABLE_Expansions_46, EqvInst_298, Suffix_10, &EqvPieces_258);
                    {
                      Var_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_251, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(MR_mktag(1), Var_251, 1) = ((MR_Box) (EqvPieces_258));
                    }
                    {
                      Var_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_248, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_248, 1) = ((MR_Box) (Var_251));
                    }
                    {
                      Var_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_246, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(1), Var_246, 1) = ((MR_Box) (Var_248));
                    }
                    Var_245 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_246, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[12])));
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_243, Var_245);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Uniq_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word EqvInst_86;
                  MR_Word next_value_of_tscc_proc_1_input_1_Info_7;
                  MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
                  MR_Word next_value_of_tscc_proc_1_input_3_Inst_9;
                  MR_Word next_value_of_tscc_proc_1_input_4_Suffix_10;

                  {
                    EqvInst_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), EqvInst_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), EqvInst_86, 1) = (MR_Box) ((MR_Unsigned) (Uniq_26));
                    MR_hl_field(MR_mktag(3), EqvInst_86, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_Info_7 = Info_7;
                  next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_45;
                  next_value_of_tscc_proc_1_input_3_Inst_9 = EqvInst_86;
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
                  MR_Word SubInstName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))));
                  MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                  MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45 = STATE_VARIABLE_Expansions_0_45;
                  MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = SubInstName_25;
                  MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10 = Suffix_10;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_Info_7 = next_value_of_tscc_proc_2_input_1_Info_7;
                  tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_45;
                  tscc_proc_2_input_3_InstName_9 = next_value_of_tscc_proc_2_input_3_InstName_9;
                  tscc_proc_2_input_4_Suffix_10 = next_value_of_tscc_proc_2_input_4_Suffix_10;
                  goto top_of_proc_2;
                }
                break;
            }
            break;
        }
      tscc_output_1_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_46;
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
    MR_Word HeadTailInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailInsts_11, (MR_Integer) 0))));
    MR_Word TailTailInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailInsts_11, (MR_Integer) 1))));
    MR_Word HeadPieces_17;
    MR_Word TailPieces_18;
    MR_Word STATE_VARIABLE_Expansions_26_26;

    hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_8, STATE_VARIABLE_Expansions_0_19, &STATE_VARIABLE_Expansions_26_26, HeadInst_10, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[9])), &HeadPieces_17);
    hlds__error_msg_inst__insts_to_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_26_26, STATE_VARIABLE_Expansions_20, HeadTailInst_15, TailTailInsts_16, Suffix_12, &TailPieces_18);
    *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_17, TailPieces_18);
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
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[21])));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[0])));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Suffix_12));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[5])));
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
hlds__error_msg_inst__user_defined_mode_to_pieces_6_p_0(
  MR_Word Info_7,
  MR_Word STATE_VARIABLE_Expansions_0_16,
  MR_Word * STATE_VARIABLE_Expansions_17,
  MR_Word ModeName_9,
  MR_Word ArgInsts_10,
  MR_Word * Pieces_11)
{
  {
    MR_String BaseModeName_12;

    BaseModeName_12 = mdbcomp__sym_name__unqualify_name_1_f_0(ModeName_9);
    if ((ArgInsts_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_28;

      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) (BaseModeName_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_Expansions_17 = STATE_VARIABLE_Expansions_0_16;
    }
    else
    {
      MR_Word ArgInstPieces_15;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_String Var_21;
      MR_Word Var_23;
      MR_Word HeadArgInst_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_10, (MR_Integer) 0))));
      MR_Word TailArgInsts_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_10, (MR_Integer) 1))));
      MR_Word HeadPieces_39;
      MR_Word TailPieces_40;
      MR_Word STATE_VARIABLE_Expansions_18_43;

      hlds__error_msg_inst__inst_to_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_16, &STATE_VARIABLE_Expansions_18_43, HeadArgInst_37, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_39);
      hlds__error_msg_inst__arg_insts_to_pieces_5_p_0(Info_7, STATE_VARIABLE_Expansions_18_43, STATE_VARIABLE_Expansions_17, TailArgInsts_38, &TailPieces_40);
      {
        ArgInstPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ArgInstPieces_15, 0) = ((MR_Box) (HeadPieces_39));
        MR_hl_field(MR_mktag(1), ArgInstPieces_15, 1) = ((MR_Box) (TailPieces_40));
      }
      Var_21 = mercury__string__f_43_43_2_f_0(BaseModeName_12, (MR_String) "(");
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Var_21));
      }
      Var_23 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(ArgInstPieces_15);
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_23));
      }
      *Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_19, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19])));
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
    MR_Word Mode1_26;

    parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0(HeadMode_12, &Mode1_26);
    if (((MR_tag((MR_Word) Mode1_26)) == (MR_Integer) 0))
    {
      MR_Word FromInst1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode1_26, (MR_Integer) 0))));
      MR_Word ToInst1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode1_26, (MR_Integer) 1))));
      MR_Word Mode_29;

      parse_tree__prog_mode__insts_to_mode_3_p_0(FromInst1_27, ToInst1_28, &Mode_29);
      if (((MR_tag((MR_Word) Mode_29)) == (MR_Integer) 0))
      {
        MR_Word FromInst_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_29, (MR_Integer) 0))));
        MR_Word ToInst_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_29, (MR_Integer) 1))));
        MR_Word FromPieces_32;
        MR_Word ToPieces_33;
        MR_Word STATE_VARIABLE_Expansions_24_38;
        MR_Word Var_42;

        hlds__error_msg_inst__inst_to_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_24_38, FromInst_30, (MR_Word) ((MR_Unsigned) 0U), &FromPieces_32);
        hlds__error_msg_inst__inst_to_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_24_38, &STATE_VARIABLE_Expansions_18_18, ToInst_31, (MR_Word) ((MR_Unsigned) 0U), &ToPieces_33);
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[17])));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (ToPieces_33));
        }
        HeadPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), FromPieces_32, Var_42);
      }
      else
      {
        MR_Word ModeName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_29, (MR_Integer) 0))));
        MR_Word ArgInsts_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_29, (MR_Integer) 1))));

        hlds__error_msg_inst__user_defined_mode_to_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_18_18, ModeName_34, ArgInsts_35, &HeadPieces_14);
      }
    }
    else
    {
      MR_Word ModeName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode1_26, (MR_Integer) 0))));
      MR_Word ArgInsts_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode1_26, (MR_Integer) 1))));

      hlds__error_msg_inst__user_defined_mode_to_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_18_18, ModeName_45, ArgInsts_46, &HeadPieces_14);
    }
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
    MR_Box conv0_IsDetStr_21;

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
            Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (BoundName_19));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[18])));
          }
          {
            UniqPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), UniqPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[13])));
            MR_hl_field(MR_mktag(1), UniqPieces_18, 1) = ((MR_Box) (Var_36));
          }
        }
        break;
      case (MR_Integer) 0:
        UniqPieces_18 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    hlds__error_msg_inst__modes_to_pieces_5_p_0(Info_8, STATE_VARIABLE_Expansions_0_31, STATE_VARIABLE_Expansions_32, ArgModes_15, &ArgModesPieces_20);
    parse_tree__mercury_to_mercury__mercury_format_det_4_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), Det_17, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "is ")), &conv0_IsDetStr_21);
    IsDetStr_21 = ((MR_String) (conv0_IsDetStr_21));
    switch (PredOrFunc_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word RealArgModesPieces_26;
          MR_Word RetModePieces_27;
          MR_Word JoinedRealArgModePieces_28;
          MR_Box conv1_RetModePieces_27;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ArgModesPieces_20, &RealArgModesPieces_26, &conv1_RetModePieces_27);
          RetModePieces_27 = ((MR_Word) (conv1_RetModePieces_27));
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
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19])));
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
              MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
              MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (JoinedRealArgModePieces_28));
            }
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
              MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_52));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[15])));
              MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (RetModePieces_27));
            }
            {
              Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[5])));
              MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_63, 0) = ((MR_Box) (IsDetStr_21));
            }
            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
              MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19])));
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
            MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19])));
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
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19])));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[6])));
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
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[4])));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (TailPieces_17));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[5])));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
      }
      {
        HeadSuffix_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadSuffix_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[5])));
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
    ConsIdStr_26 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_3_f_0((MR_Integer) 0, (MR_Integer) 1, ConsId_25);
    if ((ArgInsts_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_80;

      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (ConsIdStr_26));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadSuffix_14));
      }
      *STATE_VARIABLE_Expansions_28 = STATE_VARIABLE_Expansions_29_29;
    }
    else
    {
      MR_Word HeadArgInst_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_19, (MR_Integer) 0))));
      MR_Word TailArgInsts_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_19, (MR_Integer) 1))));
      MR_Word ArgPieces_52;
      MR_String ArgSummary_53;

      hlds__error_msg_inst__insts_to_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_29_29, STATE_VARIABLE_Expansions_28, HeadArgInst_50, TailArgInsts_51, (MR_Word) ((MR_Unsigned) 0U), &ArgPieces_52);
      succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(ArgPieces_52, (MR_Integer) 4, &ArgSummary_53);
      if (succeeded)
      {
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_String Var_60;
        MR_String Var_62;

        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (ConsIdStr_26));
        }
        Var_62 = mercury__string__f_43_43_2_f_0(ArgSummary_53, (MR_String) ")");
        Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_62);
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (HeadSuffix_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_58));
        }
      }
      else
      {
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_77;

        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_65, 0) = ((MR_Box) (ConsIdStr_26));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[21])));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[0])));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (HeadSuffix_14));
        }
        {
          Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[5])));
          MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
        }
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgPieces_52, Var_74);
        *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_64, Var_73);
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
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46;
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
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[3])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[4])));
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
              MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[3])));
              MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word HOInstInfo_86 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 1))));

            if ((HOInstInfo_86 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_58;
              MR_String Str_81;

              Str_81 = parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(Uniq_85);
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (Str_81));
              }
              {
                Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            else
            {
              MR_Word PredInstInfo_79 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_86), (MR_Integer) 1));
              MR_Word HOPieces_80;

              hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "any_", Uniq_85, PredInstInfo_79, &HOPieces_80);
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_80, Suffix_10);
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

                BoundName_16 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_13, (MR_String) "bound");
                if ((BoundInsts_15 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_75;

                  {
                    Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (BoundName_16));
                  }
                  {
                    Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_75));
                    MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
                }
                else
                {
                  MR_Word HeadBoundInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 0))));
                  MR_Word TailBoundInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 1))));
                  MR_Word BoundPieces_19;
                  MR_Word Var_68;
                  MR_Word Var_69;
                  MR_String Var_70;
                  MR_Word Var_72;

                  hlds__error_msg_inst__bound_insts_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, HeadBoundInst_17, TailBoundInsts_18, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_19);
                  Var_70 = mercury__string__f_43_43_2_f_0(BoundName_16, (MR_String) "(");
                  {
                    Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
                  }
                  {
                    Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
                    MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (BoundPieces_19));
                  }
                  {
                    Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[6])));
                    MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Suffix_10));
                  }
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_68, Var_72);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HOInstInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_Word Uniq_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);

                if ((HOInstInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_String Str_23;
                  MR_Word Var_62;

                  Str_23 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_78, (MR_String) "ground");
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

                  hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "", Uniq_78, PredInstInfo_21, &HOPieces_22);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_22, Suffix_10);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word InstVarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_String Name_26;
                MR_Word Var_57;
                MR_Box conv1_Name_26;

                parse_tree__parse_tree_out_term__mercury_format_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), InstVarSet_25, (MR_Integer) 0, Var_24, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_Name_26);
                Name_26 = ((MR_String) (conv1_Name_26));
                {
                  Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (Name_26));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_57));
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
                MR_Word Var_44;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word InstVarSet_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_Box conv0_Names_29;

                Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_27);
                parse_tree__parse_tree_out_term__mercury_format_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), InstVarSet_90, (MR_Integer) 0, Var_40, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_Names_29);
                Names_29 = ((MR_String) (conv0_Names_29));
                {
                  Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[0])));
                  MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Suffix_10));
                }
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, ConstrainedInst_28, Var_44, &InstPieces_30);
                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (Names_29));
                }
                {
                  Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[2])));
                  MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (InstPieces_30));
                }
                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
                  MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[1])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_49));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = STATE_VARIABLE_Expansions_0_33;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_92;
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
                MR_Word Name_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10;

                {
                  InstName_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InstName_32, 0) = ((MR_Box) (Name_91));
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
        Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PastPieces_12, Suffix_10);
        STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
      }
      else
        switch (MR_tag((MR_Word) InstName_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 0))));
              MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 1))));
              MR_String SymNameStr_15;
              MR_Word NameInfo_16;
              MR_Word NamePieces_18;
              MR_Word NamedNamePieces_19;
              MR_Word ExpandInsts_20;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word Var_17;

              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_7, SymName_13, &SymNameStr_15);
              Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
              {
                NameInfo_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), NameInfo_16, 0) = ((MR_Box) (Var_87));
                MR_hl_field(MR_mktag(0), NameInfo_16, 1) = ((MR_Box) (Var_88));
                MR_hl_field(MR_mktag(0), NameInfo_16, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_46, &Var_17, SymNameStr_15, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_18);
              {
                NamedNamePieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NamedNamePieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[13])));
                MR_hl_field(MR_mktag(1), NamedNamePieces_19, 1) = ((MR_Box) (NamePieces_18));
              }
              ExpandInsts_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (ExpandInsts_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamePieces_18, Suffix_10);
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ModuleInfo_21;
                    MR_Word EqvInst_22;
                    MR_Word STATE_VARIABLE_Expansions_69_69;

                    hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_9, NamedNamePieces_19, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_69_69);
                    ModuleInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                    check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_21, InstName_9, &EqvInst_22);
                    if (((((MR_tag((MR_Word) EqvInst_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 0)))) == (MR_Integer) 5))))
                    {
                      MR_Word TypeInfo_402_402;
                      MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 1))));
                      MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 2))));

                      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_13, Var_102);
                      if (succeeded)
                      {
                        TypeInfo_402_402 = (MR_Word) (&hlds__error_msg_inst_scalar_common_1[14]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_402_402, ((MR_Box) (ArgInsts_14)), ((MR_Box) (Var_103)));
                      }
                    }
                    else
                    if (((((MR_tag((MR_Word) EqvInst_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 0)))) == (MR_Integer) 4))))
                    {
                      MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 1))));

                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_101);
                    }
                    else
                      succeeded = MR_FALSE;
                    if (succeeded)
                    {
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_19, Suffix_10);
                      STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_69_69;
                    }
                    else
                    {
                      MR_Word ExpandedPieces_23;
                      MR_Word Var_71;
                      MR_Word Var_72;
                      MR_Word Var_75;

                      hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_69_69, &STATE_VARIABLE_Expansions_47, EqvInst_22, Suffix_10, &ExpandedPieces_23);
                      {
                        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (ExpandedPieces_23));
                      }
                      {
                        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
                      }
                      Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_72, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[17])));
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_19, Var_71);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleInfo_389 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_390;
              MR_Word Var_339;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_389, InstName_9, &EqvInst_390);
              succeeded = ((((MR_tag((MR_Word) EqvInst_390)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_390, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_339 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_390, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_339);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[11])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
              }
              else
              {
                MR_Word InstNumPieces_341;
                MR_Word EqvPieces_342;
                MR_Word STATE_VARIABLE_Expansions_49_343;
                MR_Word Var_345;
                MR_Word Var_346;
                MR_Word Var_349;
                MR_Word Var_352;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044unify_inst", &InstNumPieces_341, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_343);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_343, &STATE_VARIABLE_Expansions_47, EqvInst_390, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_342);
                {
                  Var_349 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_349, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                  MR_hl_field(MR_mktag(1), Var_349, 1) = ((MR_Box) (EqvPieces_342));
                }
                {
                  Var_346 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_346, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                  MR_hl_field(MR_mktag(1), Var_346, 1) = ((MR_Box) (Var_349));
                }
                {
                  Var_352 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_352, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                  MR_hl_field(MR_mktag(1), Var_352, 1) = ((MR_Box) (Suffix_10));
                }
                Var_345 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_346, Var_352);
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_341, Var_345);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleInfo_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_216;
              MR_Word Var_165;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_215, InstName_9, &EqvInst_216);
              succeeded = ((((MR_tag((MR_Word) EqvInst_216)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_216, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_216, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_165);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[8])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
              }
              else
              {
                MR_Word InstNumPieces_167;
                MR_Word EqvPieces_168;
                MR_Word STATE_VARIABLE_Expansions_49_169;
                MR_Word Var_171;
                MR_Word Var_172;
                MR_Word Var_175;
                MR_Word Var_178;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044merge_inst", &InstNumPieces_167, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_169);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_169, &STATE_VARIABLE_Expansions_47, EqvInst_216, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_168);
                {
                  Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                  MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (EqvPieces_168));
                }
                {
                  Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                  MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_175));
                }
                {
                  Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                  MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Suffix_10));
                }
                Var_171 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_172, Var_178);
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_167, Var_171);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModuleInfo_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_158;
                  MR_Word Var_107;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_157, InstName_9, &EqvInst_158);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_158)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_158, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_158, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_107);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[7])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_109;
                    MR_Word EqvPieces_110;
                    MR_Word STATE_VARIABLE_Expansions_49_111;
                    MR_Word Var_113;
                    MR_Word Var_114;
                    MR_Word Var_117;
                    MR_Word Var_120;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044ground_inst", &InstNumPieces_109, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_111);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_111, &STATE_VARIABLE_Expansions_47, EqvInst_158, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_110);
                    {
                      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (EqvPieces_110));
                    }
                    {
                      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_117));
                    }
                    {
                      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Suffix_10));
                    }
                    Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_114, Var_120);
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_109, Var_113);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModuleInfo_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_86;
                  MR_Word Var_104;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_85, InstName_9, &EqvInst_86);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_86)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_86, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_86, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_104);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[6])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_44;
                    MR_Word EqvPieces_45;
                    MR_Word STATE_VARIABLE_Expansions_49_49;
                    MR_Word Var_52;
                    MR_Word Var_53;
                    MR_Word Var_56;
                    MR_Word Var_59;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044any_inst", &InstNumPieces_44, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_49);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_49, &STATE_VARIABLE_Expansions_47, EqvInst_86, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_45);
                    {
                      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (EqvPieces_45));
                    }
                    {
                      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
                    }
                    {
                      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Suffix_10));
                    }
                    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_53, Var_59);
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_44, Var_52);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ModuleInfo_331 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_332;
                  MR_Word Var_281;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_331, InstName_9, &EqvInst_332);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_332)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_332, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_281 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_332, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_281);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[10])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_283;
                    MR_Word EqvPieces_284;
                    MR_Word STATE_VARIABLE_Expansions_49_285;
                    MR_Word Var_287;
                    MR_Word Var_288;
                    MR_Word Var_291;
                    MR_Word Var_294;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044shared_inst", &InstNumPieces_283, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_285);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_285, &STATE_VARIABLE_Expansions_47, EqvInst_332, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_284);
                    {
                      Var_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_291, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                      MR_hl_field(MR_mktag(1), Var_291, 1) = ((MR_Box) (EqvPieces_284));
                    }
                    {
                      Var_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_288, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_288, 1) = ((MR_Box) (Var_291));
                    }
                    {
                      Var_294 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_294, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                      MR_hl_field(MR_mktag(1), Var_294, 1) = ((MR_Box) (Suffix_10));
                    }
                    Var_287 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_288, Var_294);
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_283, Var_287);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ModuleInfo_273 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_274;
                  MR_Word Var_223;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_273, InstName_9, &EqvInst_274);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_274)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_274, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_274, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_223);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[9])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_225;
                    MR_Word EqvPieces_226;
                    MR_Word STATE_VARIABLE_Expansions_49_227;
                    MR_Word Var_229;
                    MR_Word Var_230;
                    MR_Word Var_233;
                    MR_Word Var_236;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_225, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_227);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_227, &STATE_VARIABLE_Expansions_47, EqvInst_274, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_226);
                    {
                      Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_233, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                      MR_hl_field(MR_mktag(1), Var_233, 1) = ((MR_Box) (EqvPieces_226));
                    }
                    {
                      Var_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_230, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_230, 1) = ((MR_Box) (Var_233));
                    }
                    {
                      Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_236, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                      MR_hl_field(MR_mktag(1), Var_236, 1) = ((MR_Box) (Suffix_10));
                    }
                    Var_229 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_230, Var_236);
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_225, Var_229);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Uniq_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word EqvInst_83;
                  MR_Word next_value_of_tscc_proc_1_input_1_Info_7;
                  MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
                  MR_Word next_value_of_tscc_proc_1_input_3_Inst_9;
                  MR_Word next_value_of_tscc_proc_1_input_4_Suffix_10;

                  {
                    EqvInst_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), EqvInst_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), EqvInst_83, 1) = (MR_Box) ((MR_Unsigned) (Uniq_26));
                    MR_hl_field(MR_mktag(3), EqvInst_83, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_Info_7 = Info_7;
                  next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_46;
                  next_value_of_tscc_proc_1_input_3_Inst_9 = EqvInst_83;
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
                  MR_Word SubInstName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))));
                  MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                  MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = STATE_VARIABLE_Expansions_0_46;
                  MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = SubInstName_25;
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
hlds__error_msg_inst__inst_name_to_inline_pieces_6_p_0(
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
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[3])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[4])));
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
              MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[3])));
              MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word HOInstInfo_86 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 1))));

            if ((HOInstInfo_86 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_58;
              MR_String Str_81;

              Str_81 = parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(Uniq_85);
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (Str_81));
              }
              {
                Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            else
            {
              MR_Word PredInstInfo_79 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_86), (MR_Integer) 1));
              MR_Word HOPieces_80;

              hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "any_", Uniq_85, PredInstInfo_79, &HOPieces_80);
              Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_80, Suffix_10);
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

                BoundName_16 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_13, (MR_String) "bound");
                if ((BoundInsts_15 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_75;

                  {
                    Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (BoundName_16));
                  }
                  {
                    Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_75));
                    MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                  }
                  STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
                }
                else
                {
                  MR_Word HeadBoundInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 0))));
                  MR_Word TailBoundInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_15, (MR_Integer) 1))));
                  MR_Word BoundPieces_19;
                  MR_Word Var_68;
                  MR_Word Var_69;
                  MR_String Var_70;
                  MR_Word Var_72;

                  hlds__error_msg_inst__bound_insts_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, HeadBoundInst_17, TailBoundInsts_18, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_19);
                  Var_70 = mercury__string__f_43_43_2_f_0(BoundName_16, (MR_String) "(");
                  {
                    Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
                  }
                  {
                    Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
                    MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (BoundPieces_19));
                  }
                  {
                    Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[6])));
                    MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Suffix_10));
                  }
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_68, Var_72);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HOInstInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
                MR_Word Uniq_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);

                if ((HOInstInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_String Str_23;
                  MR_Word Var_62;

                  Str_23 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_78, (MR_String) "ground");
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

                  hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, (MR_String) "", Uniq_78, PredInstInfo_21, &HOPieces_22);
                  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HOPieces_22, Suffix_10);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word InstVarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_String Name_26;
                MR_Word Var_57;
                MR_Box conv1_Name_26;

                parse_tree__parse_tree_out_term__mercury_format_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), InstVarSet_25, (MR_Integer) 0, Var_24, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_Name_26);
                Name_26 = ((MR_String) (conv1_Name_26));
                {
                  Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (Name_26));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (Var_57));
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
                MR_Word Var_44;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word InstVarSet_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
                MR_Box conv0_Names_29;

                Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_27);
                parse_tree__parse_tree_out_term__mercury_format_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), InstVarSet_90, (MR_Integer) 0, Var_40, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_Names_29);
                Names_29 = ((MR_String) (conv0_Names_29));
                {
                  Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[0])));
                  MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Suffix_10));
                }
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34, ConstrainedInst_28, Var_44, &InstPieces_30);
                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (Names_29));
                }
                {
                  Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[2])));
                  MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (InstPieces_30));
                }
                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
                  MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
                }
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[1])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_49));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = STATE_VARIABLE_Expansions_0_33;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = InstName_92;
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
                MR_Word Name_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_7;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46;
                MR_Word next_value_of_tscc_proc_2_input_3_InstName_9;
                MR_Word next_value_of_tscc_proc_2_input_4_Suffix_10;

                {
                  InstName_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InstName_32, 0) = ((MR_Box) (Name_91));
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
        Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PastPieces_12, Suffix_10);
        STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
      }
      else
        switch (MR_tag((MR_Word) InstName_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 0))));
              MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 1))));
              MR_String SymNameStr_15;
              MR_Word NameInfo_16;
              MR_Word NamePieces_18;
              MR_Word NamedNamePieces_19;
              MR_Word ExpandInsts_20;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word Var_17;

              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_7, SymName_13, &SymNameStr_15);
              Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
              {
                NameInfo_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), NameInfo_16, 0) = ((MR_Box) (Var_87));
                MR_hl_field(MR_mktag(0), NameInfo_16, 1) = ((MR_Box) (Var_88));
                MR_hl_field(MR_mktag(0), NameInfo_16, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_7_p_0(NameInfo_16, STATE_VARIABLE_Expansions_0_46, &Var_17, SymNameStr_15, ArgInsts_14, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_18);
              {
                NamedNamePieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NamedNamePieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[13])));
                MR_hl_field(MR_mktag(1), NamedNamePieces_19, 1) = ((MR_Box) (NamePieces_18));
              }
              ExpandInsts_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (ExpandInsts_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamePieces_18, Suffix_10);
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ModuleInfo_21;
                    MR_Word EqvInst_22;
                    MR_Word STATE_VARIABLE_Expansions_69_69;

                    hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_9, NamedNamePieces_19, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_69_69);
                    ModuleInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                    check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_21, InstName_9, &EqvInst_22);
                    if (((((MR_tag((MR_Word) EqvInst_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 0)))) == (MR_Integer) 5))))
                    {
                      MR_Word TypeInfo_402_402;
                      MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 1))));
                      MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 2))));

                      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_13, Var_102);
                      if (succeeded)
                      {
                        TypeInfo_402_402 = (MR_Word) (&hlds__error_msg_inst_scalar_common_1[14]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_402_402, ((MR_Box) (ArgInsts_14)), ((MR_Box) (Var_103)));
                      }
                    }
                    else
                    if (((((MR_tag((MR_Word) EqvInst_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 0)))) == (MR_Integer) 4))))
                    {
                      MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_22, (MR_Integer) 1))));

                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_101);
                    }
                    else
                      succeeded = MR_FALSE;
                    if (succeeded)
                    {
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_19, Suffix_10);
                      STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_69_69;
                    }
                    else
                    {
                      MR_Word ExpandedPieces_23;
                      MR_Word Var_71;
                      MR_Word Var_72;
                      MR_Word Var_75;

                      hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_69_69, &STATE_VARIABLE_Expansions_47, EqvInst_22, Suffix_10, &ExpandedPieces_23);
                      {
                        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (ExpandedPieces_23));
                      }
                      {
                        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
                      }
                      Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_72, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[17])));
                      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NamedNamePieces_19, Var_71);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleInfo_389 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_390;
              MR_Word Var_339;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_389, InstName_9, &EqvInst_390);
              succeeded = ((((MR_tag((MR_Word) EqvInst_390)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_390, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_339 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_390, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_339);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[11])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
              }
              else
              {
                MR_Word InstNumPieces_341;
                MR_Word EqvPieces_342;
                MR_Word STATE_VARIABLE_Expansions_49_343;
                MR_Word Var_345;
                MR_Word Var_346;
                MR_Word Var_349;
                MR_Word Var_352;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044unify_inst", &InstNumPieces_341, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_343);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_343, &STATE_VARIABLE_Expansions_47, EqvInst_390, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_342);
                {
                  Var_349 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_349, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                  MR_hl_field(MR_mktag(1), Var_349, 1) = ((MR_Box) (EqvPieces_342));
                }
                {
                  Var_346 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_346, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                  MR_hl_field(MR_mktag(1), Var_346, 1) = ((MR_Box) (Var_349));
                }
                {
                  Var_352 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_352, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                  MR_hl_field(MR_mktag(1), Var_352, 1) = ((MR_Box) (Suffix_10));
                }
                Var_345 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_346, Var_352);
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_341, Var_345);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleInfo_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
              MR_Word EqvInst_216;
              MR_Word Var_165;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_215, InstName_9, &EqvInst_216);
              succeeded = ((((MR_tag((MR_Word) EqvInst_216)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_216, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_216, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_165);
              }
              if (succeeded)
              {
                {
                  Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[8])));
                  MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                }
                STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
              }
              else
              {
                MR_Word InstNumPieces_167;
                MR_Word EqvPieces_168;
                MR_Word STATE_VARIABLE_Expansions_49_169;
                MR_Word Var_171;
                MR_Word Var_172;
                MR_Word Var_175;
                MR_Word Var_178;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044merge_inst", &InstNumPieces_167, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_169);
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_169, &STATE_VARIABLE_Expansions_47, EqvInst_216, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_168);
                {
                  Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                  MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (EqvPieces_168));
                }
                {
                  Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                  MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_175));
                }
                {
                  Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                  MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Suffix_10));
                }
                Var_171 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_172, Var_178);
                Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_167, Var_171);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModuleInfo_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_158;
                  MR_Word Var_107;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_157, InstName_9, &EqvInst_158);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_158)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_158, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_158, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_107);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[7])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_109;
                    MR_Word EqvPieces_110;
                    MR_Word STATE_VARIABLE_Expansions_49_111;
                    MR_Word Var_113;
                    MR_Word Var_114;
                    MR_Word Var_117;
                    MR_Word Var_120;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044ground_inst", &InstNumPieces_109, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_111);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_111, &STATE_VARIABLE_Expansions_47, EqvInst_158, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_110);
                    {
                      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (EqvPieces_110));
                    }
                    {
                      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_117));
                    }
                    {
                      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Suffix_10));
                    }
                    Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_114, Var_120);
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_109, Var_113);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModuleInfo_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_86;
                  MR_Word Var_104;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_85, InstName_9, &EqvInst_86);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_86)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_86, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_86, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_104);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[6])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_44;
                    MR_Word EqvPieces_45;
                    MR_Word STATE_VARIABLE_Expansions_49_49;
                    MR_Word Var_52;
                    MR_Word Var_53;
                    MR_Word Var_56;
                    MR_Word Var_59;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044any_inst", &InstNumPieces_44, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_49);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_49, &STATE_VARIABLE_Expansions_47, EqvInst_86, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_45);
                    {
                      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (EqvPieces_45));
                    }
                    {
                      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
                    }
                    {
                      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Suffix_10));
                    }
                    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_53, Var_59);
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_44, Var_52);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ModuleInfo_331 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_332;
                  MR_Word Var_281;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_331, InstName_9, &EqvInst_332);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_332)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_332, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_281 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_332, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_281);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[10])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_283;
                    MR_Word EqvPieces_284;
                    MR_Word STATE_VARIABLE_Expansions_49_285;
                    MR_Word Var_287;
                    MR_Word Var_288;
                    MR_Word Var_291;
                    MR_Word Var_294;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044shared_inst", &InstNumPieces_283, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_285);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_285, &STATE_VARIABLE_Expansions_47, EqvInst_332, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_284);
                    {
                      Var_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_291, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                      MR_hl_field(MR_mktag(1), Var_291, 1) = ((MR_Box) (EqvPieces_284));
                    }
                    {
                      Var_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_288, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_288, 1) = ((MR_Box) (Var_291));
                    }
                    {
                      Var_294 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_294, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                      MR_hl_field(MR_mktag(1), Var_294, 1) = ((MR_Box) (Suffix_10));
                    }
                    Var_287 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_288, Var_294);
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_283, Var_287);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ModuleInfo_273 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
                  MR_Word EqvInst_274;
                  MR_Word Var_223;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_273, InstName_9, &EqvInst_274);
                  succeeded = ((((MR_tag((MR_Word) EqvInst_274)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_274, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_274, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, Var_223);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[9])));
                      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Suffix_10));
                    }
                    STATE_VARIABLE_Expansions_47 = STATE_VARIABLE_Expansions_0_46;
                  }
                  else
                  {
                    MR_Word InstNumPieces_225;
                    MR_Word EqvPieces_226;
                    MR_Word STATE_VARIABLE_Expansions_49_227;
                    MR_Word Var_229;
                    MR_Word Var_230;
                    MR_Word Var_233;
                    MR_Word Var_236;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_9, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_225, STATE_VARIABLE_Expansions_0_46, &STATE_VARIABLE_Expansions_49_227);
                    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_49_227, &STATE_VARIABLE_Expansions_47, EqvInst_274, (MR_Word) ((MR_Unsigned) 0U), &EqvPieces_226);
                    {
                      Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_233, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                      MR_hl_field(MR_mktag(1), Var_233, 1) = ((MR_Box) (EqvPieces_226));
                    }
                    {
                      Var_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_230, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(1), Var_230, 1) = ((MR_Box) (Var_233));
                    }
                    {
                      Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_236, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                      MR_hl_field(MR_mktag(1), Var_236, 1) = ((MR_Box) (Suffix_10));
                    }
                    Var_229 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_230, Var_236);
                    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InstNumPieces_225, Var_229);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Uniq_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word EqvInst_83;
                  MR_Word next_value_of_tscc_proc_1_input_1_Info_7;
                  MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33;
                  MR_Word next_value_of_tscc_proc_1_input_3_Inst_9;
                  MR_Word next_value_of_tscc_proc_1_input_4_Suffix_10;

                  {
                    EqvInst_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), EqvInst_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), EqvInst_83, 1) = (MR_Box) ((MR_Unsigned) (Uniq_26));
                    MR_hl_field(MR_mktag(3), EqvInst_83, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_Info_7 = Info_7;
                  next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_46;
                  next_value_of_tscc_proc_1_input_3_Inst_9 = EqvInst_83;
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
                  MR_Word SubInstName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))));
                  MR_Word next_value_of_tscc_proc_2_input_1_Info_7 = Info_7;
                  MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Expansions_0_46 = STATE_VARIABLE_Expansions_0_46;
                  MR_Word next_value_of_tscc_proc_2_input_3_InstName_9 = SubInstName_25;
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
    MR_Word HeadTailInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailInsts_11, (MR_Integer) 0))));
    MR_Word TailTailInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailInsts_11, (MR_Integer) 1))));
    MR_Word HeadPieces_17;
    MR_Word TailPieces_18;
    MR_Word STATE_VARIABLE_Expansions_24_24;

    hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_8, STATE_VARIABLE_Expansions_0_19, &STATE_VARIABLE_Expansions_24_24, HeadInst_10, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[10])), &HeadPieces_17);
    hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_24_24, STATE_VARIABLE_Expansions_20, HeadTailInst_15, TailTailInsts_16, Suffix_12, &TailPieces_18);
    *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_17, TailPieces_18);
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
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[6])));
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
hlds__error_msg_inst__user_defined_mode_to_inline_pieces_6_p_0(
  MR_Word Info_7,
  MR_Word STATE_VARIABLE_Expansions_0_16,
  MR_Word * STATE_VARIABLE_Expansions_17,
  MR_Word ModeName_9,
  MR_Word ArgInsts_10,
  MR_Word * Pieces_11)
{
  {
    MR_String BaseModeName_12;

    BaseModeName_12 = mdbcomp__sym_name__unqualify_name_1_f_0(ModeName_9);
    if ((ArgInsts_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_28;

      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) (BaseModeName_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_Expansions_17 = STATE_VARIABLE_Expansions_0_16;
    }
    else
    {
      MR_Word ArgInstPieces_15;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_String Var_21;
      MR_Word Var_23;
      MR_Word HeadArgInst_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_10, (MR_Integer) 0))));
      MR_Word TailArgInsts_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_10, (MR_Integer) 1))));
      MR_Word HeadPieces_39;
      MR_Word TailPieces_40;
      MR_Word STATE_VARIABLE_Expansions_18_43;

      hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(Info_7, STATE_VARIABLE_Expansions_0_16, &STATE_VARIABLE_Expansions_18_43, HeadArgInst_37, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_39);
      hlds__error_msg_inst__arg_insts_to_inline_pieces_5_p_0(Info_7, STATE_VARIABLE_Expansions_18_43, STATE_VARIABLE_Expansions_17, TailArgInsts_38, &TailPieces_40);
      {
        ArgInstPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ArgInstPieces_15, 0) = ((MR_Box) (HeadPieces_39));
        MR_hl_field(MR_mktag(1), ArgInstPieces_15, 1) = ((MR_Box) (TailPieces_40));
      }
      Var_21 = mercury__string__f_43_43_2_f_0(BaseModeName_12, (MR_String) "(");
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Var_21));
      }
      Var_23 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(ArgInstPieces_15);
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_23));
      }
      *Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_19, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19])));
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
    MR_Word Mode1_26;

    parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0(HeadMode_12, &Mode1_26);
    if (((MR_tag((MR_Word) Mode1_26)) == (MR_Integer) 0))
    {
      MR_Word FromInst1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode1_26, (MR_Integer) 0))));
      MR_Word ToInst1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode1_26, (MR_Integer) 1))));
      MR_Word Mode_29;

      parse_tree__prog_mode__insts_to_mode_3_p_0(FromInst1_27, ToInst1_28, &Mode_29);
      if (((MR_tag((MR_Word) Mode_29)) == (MR_Integer) 0))
      {
        MR_Word FromInst_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_29, (MR_Integer) 0))));
        MR_Word ToInst_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_29, (MR_Integer) 1))));
        MR_Word FromPieces_32;
        MR_Word ToPieces_33;
        MR_Word STATE_VARIABLE_Expansions_24_38;
        MR_Word Var_42;

        hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_24_38, FromInst_30, (MR_Word) ((MR_Unsigned) 0U), &FromPieces_32);
        hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_24_38, &STATE_VARIABLE_Expansions_18_18, ToInst_31, (MR_Word) ((MR_Unsigned) 0U), &ToPieces_33);
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[17])));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (ToPieces_33));
        }
        HeadPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), FromPieces_32, Var_42);
      }
      else
      {
        MR_Word ModeName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_29, (MR_Integer) 0))));
        MR_Word ArgInsts_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_29, (MR_Integer) 1))));

        hlds__error_msg_inst__user_defined_mode_to_inline_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_18_18, ModeName_34, ArgInsts_35, &HeadPieces_14);
      }
    }
    else
    {
      MR_Word ModeName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode1_26, (MR_Integer) 0))));
      MR_Word ArgInsts_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode1_26, (MR_Integer) 1))));

      hlds__error_msg_inst__user_defined_mode_to_inline_pieces_6_p_0(HeadVar__1_1, STATE_VARIABLE_Expansions_0_2, &STATE_VARIABLE_Expansions_18_18, ModeName_45, ArgInsts_46, &HeadPieces_14);
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
    MR_Box conv0_IsDetStr_21;

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
            Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (BoundName_19));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[18])));
          }
          {
            UniqPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), UniqPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[13])));
            MR_hl_field(MR_mktag(1), UniqPieces_18, 1) = ((MR_Box) (Var_36));
          }
        }
        break;
      case (MR_Integer) 0:
        UniqPieces_18 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    hlds__error_msg_inst__modes_to_inline_pieces_5_p_0(Info_8, STATE_VARIABLE_Expansions_0_31, STATE_VARIABLE_Expansions_32, ArgModes_15, &ArgModesPieces_20);
    parse_tree__mercury_to_mercury__mercury_format_det_4_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), Det_17, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "is ")), &conv0_IsDetStr_21);
    IsDetStr_21 = ((MR_String) (conv0_IsDetStr_21));
    switch (PredOrFunc_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word RealArgModesPieces_26;
          MR_Word RetModePieces_27;
          MR_Word JoinedRealArgModePieces_28;
          MR_Box conv1_RetModePieces_27;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ArgModesPieces_20, &RealArgModesPieces_26, &conv1_RetModePieces_27);
          RetModePieces_27 = ((MR_Word) (conv1_RetModePieces_27));
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
              MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19])));
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
              MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[16])));
              MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (RetModePieces_27));
            }
            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[6])));
              MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (IsDetStr_21));
            }
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19])));
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
            MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19])));
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
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19])));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[6])));
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
        MR_hl_field(MR_mktag(1), HeadSuffix_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[5])));
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
    ConsIdStr_26 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_3_f_0((MR_Integer) 0, (MR_Integer) 1, ConsId_25);
    if ((ArgInsts_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_64;

      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (ConsIdStr_26));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadSuffix_14));
      }
      *STATE_VARIABLE_Expansions_28 = STATE_VARIABLE_Expansions_29_29;
    }
    else
    {
      MR_Word HeadArgInst_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_19, (MR_Integer) 0))));
      MR_Word TailArgInsts_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts_19, (MR_Integer) 1))));
      MR_Word ArgPieces_46;
      MR_String ArgSummary_47;

      hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(Info_8, STATE_VARIABLE_Expansions_29_29, STATE_VARIABLE_Expansions_28, HeadArgInst_44, TailArgInsts_45, (MR_Word) ((MR_Unsigned) 0U), &ArgPieces_46);
      succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(ArgPieces_46, (MR_Integer) 4, &ArgSummary_47);
      if (succeeded)
      {
        MR_Word Var_51;
        MR_String Var_52;
        MR_String Var_53;
        MR_String Var_55;

        Var_55 = mercury__string__f_43_43_2_f_0(ArgSummary_47, (MR_String) ")");
        Var_53 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_55);
        Var_52 = mercury__string__f_43_43_2_f_0(ConsIdStr_26, Var_53);
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_51, 0) = ((MR_Box) (Var_52));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadSuffix_14));
        }
      }
      else
      {
        MR_Word Var_57;
        MR_Word Var_58;
        MR_String Var_59;
        MR_Word Var_61;

        Var_59 = mercury__string__f_43_43_2_f_0(ConsIdStr_26, (MR_String) "(");
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (ArgPieces_46));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[6])));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (HeadSuffix_14));
        }
        *Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_57, Var_61);
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
    MR_Word Var_24;
    MR_String Var_29;
    MR_String Var_37;
    MR_String Var_38;

    mercury__counter__allocate_3_p_0(&InstNum_12, ExpansionsCounter0_11, &ExpansionsCounter_13);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[12]), InstNum_12, &Var_29);
    Var_37 = mercury__string__f_43_43_2_f_0((MR_String) " #", Var_29);
    Var_38 = mercury__string__f_43_43_2_f_0(InstNameStr_7, Var_37);
    InstNameNumStr_14 = mercury__string__f_43_43_2_f_0((MR_String) "internal ", Var_38);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_24, 0) = ((MR_Box) (InstNameNumStr_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *InstNumPieces_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
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
  MR_Word Pieces_6,
  MR_Word STATE_VARIABLE_Expansions_0_11,
  MR_Word * STATE_VARIABLE_Expansions_12)
{
  {
    MR_bool succeeded;
    MR_Word ExpansionsMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Expansions_0_11, (MR_Integer) 0))));
    MR_Word ExpansionsCounter0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Expansions_0_11, (MR_Integer) 1))));
    MR_Word ExpansionsMap_10;

    succeeded = mercury__map__insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ((MR_Box) (InstName_5)), ((MR_Box) (Pieces_6)), ExpansionsMap0_8, &ExpansionsMap_10);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Expansions_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ExpansionsMap_10));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExpansionsCounter0_9));
      }
    else
      *STATE_VARIABLE_Expansions_12 = STATE_VARIABLE_Expansions_0_11;
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

static void MR_CALL 
hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(
  MR_Word Info_4,
  MR_Word SymName_5,
  MR_String * SymNameStr_6)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) SymName_5)) == (MR_Integer) 1))
    {
      MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_5, (MR_Integer) 0))));
      MR_String BaseName_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_5, (MR_Integer) 1))));
      MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0))));
      MR_Word CurModuleName_10;

      hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_9, &CurModuleName_10);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_7, CurModuleName_10);
      if (succeeded)
        *SymNameStr_6 = BaseName_8;
      else
        *SymNameStr_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_5);
    }
    else
      *SymNameStr_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_5, (MR_Integer) 0))));
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
