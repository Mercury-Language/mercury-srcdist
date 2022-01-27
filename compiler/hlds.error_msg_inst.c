/*
** Automatically generated from `error_msg_inst.m'
** by the Mercury compiler,
** version rotd-2016-10-04
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


/* :- module hlds.error_msg_inst. */
/* :- implementation. */

/*
INIT mercury__hlds__error_msg_inst__init
ENDINIT
*/

#include "hlds.error_msg_inst.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____expansions_info_0_0_10001(
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____expansions_info_0_0_10001(
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
  MR_Box hlds__error_msg_inst__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001(
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001(
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
  MR_Box hlds__error_msg_inst__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001(
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001(
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
  MR_Box hlds__error_msg_inst__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0_10001(
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0_10001(
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
  MR_Box hlds__error_msg_inst__wrapper_arg_3);

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0(
  MR_Word * hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2,
  MR_Word hlds__error_msg_inst__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0(
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____expansions_info_0_0(
  MR_Word * hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2,
  MR_Word hlds__error_msg_inst__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____expansions_info_0_0(
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2);

static MR_bool MR_CALL 
hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(
  MR_Word hlds__error_msg_inst__Pieces_4,
  MR_Integer hlds__error_msg_inst__Left_5,
  MR_String * hlds__error_msg_inst__Summary_6);

static void MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_19,
  MR_String hlds__error_msg_inst__Name_10,
  MR_Word hlds__error_msg_inst__ArgInsts_11,
  MR_Word hlds__error_msg_inst__Suffix_12,
  MR_Word * hlds__error_msg_inst__Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_19,
  MR_String hlds__error_msg_inst__Name_10,
  MR_Word hlds__error_msg_inst__ArgInsts_11,
  MR_Word hlds__error_msg_inst__Suffix_12,
  MR_Word * hlds__error_msg_inst__Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__arg_insts_to_inline_pieces_5_p_0(
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_3,
  MR_Word hlds__error_msg_inst__HeadVar__4_4,
  MR_Word * hlds__error_msg_inst__HeadVar__5_5);

static void MR_CALL 
hlds__error_msg_inst__arg_insts_to_pieces_5_p_0(
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_3,
  MR_Word hlds__error_msg_inst__HeadVar__4_4,
  MR_Word * hlds__error_msg_inst__HeadVar__5_5);

static void MR_CALL 
hlds__error_msg_inst__mode_to_inline_pieces_5_p_0(
  MR_Word hlds__error_msg_inst__Info_6,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_27,
  MR_Word hlds__error_msg_inst__Mode_8,
  MR_Word * hlds__error_msg_inst__Pieces_9);

static void MR_CALL 
hlds__error_msg_inst__mode_to_pieces_5_p_0(
  MR_Word hlds__error_msg_inst__Info_6,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_27,
  MR_Word hlds__error_msg_inst__Mode_8,
  MR_Word * hlds__error_msg_inst__Pieces_9);

static void MR_CALL 
hlds__error_msg_inst__modes_to_inline_pieces_5_p_0(
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_3,
  MR_Word hlds__error_msg_inst__HeadVar__4_4,
  MR_Word * hlds__error_msg_inst__HeadVar__5_5);

static void MR_CALL 
hlds__error_msg_inst__modes_to_pieces_5_p_0(
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_3,
  MR_Word hlds__error_msg_inst__HeadVar__4_4,
  MR_Word * hlds__error_msg_inst__HeadVar__5_5);

static void MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_31,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_32,
  MR_String hlds__error_msg_inst__AnyPrefix_10,
  MR_Word hlds__error_msg_inst__Uniq_11,
  MR_Word hlds__error_msg_inst__PredInstInfo_12,
  MR_Word * hlds__error_msg_inst__Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_31,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_32,
  MR_String hlds__error_msg_inst__AnyPrefix_10,
  MR_Word hlds__error_msg_inst__Uniq_11,
  MR_Word hlds__error_msg_inst__PredInstInfo_12,
  MR_Word * hlds__error_msg_inst__Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__record_internal_inst_name_5_p_0(
  MR_Word hlds__error_msg_inst__InstName_6,
  MR_String hlds__error_msg_inst__InstNameStr_7,
  MR_Word * hlds__error_msg_inst__InstNumPieces_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_16,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_17);

static void MR_CALL 
hlds__error_msg_inst__record_user_inst_name_4_p_0(
  MR_Word hlds__error_msg_inst__InstName_5,
  MR_Word hlds__error_msg_inst__NamedNamePieces_6,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_11,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_12);

static MR_bool MR_CALL 
hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(
  MR_Word hlds__error_msg_inst__Expansions_4,
  MR_Word hlds__error_msg_inst__InstName_5,
  MR_Word * hlds__error_msg_inst__PastPieces_6);

static void MR_CALL 
hlds__error_msg_inst__inst_name_to_inline_pieces_6_p_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_48,
  MR_Word hlds__error_msg_inst__InstName_9,
  MR_Word hlds__error_msg_inst__Suffix_10,
  MR_Word * hlds__error_msg_inst__Pieces_11);

static void MR_CALL 
hlds__error_msg_inst__inst_name_to_pieces_6_p_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_47,
  MR_Word hlds__error_msg_inst__InstName_9,
  MR_Word hlds__error_msg_inst__Suffix_10,
  MR_Word * hlds__error_msg_inst__Pieces_11);

static void MR_CALL 
hlds__error_msg_inst__bound_insts_to_inline_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_27,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_28,
  MR_Word hlds__error_msg_inst__HeadBoundInst_10,
  MR_Word hlds__error_msg_inst__TailBoundInsts_11,
  MR_Word hlds__error_msg_inst__Suffix_12,
  MR_Word * hlds__error_msg_inst__Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_27,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_28,
  MR_Word hlds__error_msg_inst__HeadBoundInst_10,
  MR_Word hlds__error_msg_inst__TailBoundInsts_11,
  MR_Word hlds__error_msg_inst__Suffix_12,
  MR_Word * hlds__error_msg_inst__Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_19,
  MR_Word hlds__error_msg_inst__HeadInst_10,
  MR_Word hlds__error_msg_inst__TailInsts_11,
  MR_Word hlds__error_msg_inst__Suffix_12,
  MR_Word * hlds__error_msg_inst__Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__insts_to_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_19,
  MR_Word hlds__error_msg_inst__HeadInst_10,
  MR_Word hlds__error_msg_inst__TailInsts_11,
  MR_Word hlds__error_msg_inst__Suffix_12,
  MR_Word * hlds__error_msg_inst__Pieces_13);

static void MR_CALL 
hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_34,
  MR_Word hlds__error_msg_inst__Inst_9,
  MR_Word hlds__error_msg_inst__Suffix_10,
  MR_Word * hlds__error_msg_inst__Pieces_11);

static void MR_CALL 
hlds__error_msg_inst__inst_to_pieces_6_p_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_34,
  MR_Word hlds__error_msg_inst__Inst_9,
  MR_Word hlds__error_msg_inst__Suffix_10,
  MR_Word * hlds__error_msg_inst__Pieces_11);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which expands to"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "named inst"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "<"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ">"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) ((MR_String) "/*"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "*/"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) ") ="))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "out"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "di"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "ui"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "uo"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "mdi"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "mui"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "muo"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) ">>"))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__error_msg_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0,
    (MR_TypeInfo) &hlds__error_msg_inst__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_expansions_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__error_msg_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0
};

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_expansions_info_0_0[2] = {
  (MR_String) "ei_seen_inst_names",
  (MR_String) "ei_inst_num_counter"
};

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_expansions_info_0_0 = {
  (MR_String) "expansions_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__error_msg_inst__hlds__error_msg_inst__field_types_expansions_info_0_0,
  hlds__error_msg_inst__hlds__error_msg_inst__field_names_expansions_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_expansions_info_0_0[1] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_expansions_info_0_0
};

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_expansions_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_expansions_info_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__error_msg_inst____Unify____expansions_info_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____expansions_info_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "expansions_info",
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_expansions_info_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_expansions_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_expansions_info_0
};

static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0
};

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0[3] = {
  (MR_String) "imi_module_info",
  (MR_String) "imi_inst_varset",
  (MR_String) "imi_expand_named_insts"
};

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0 = {
  (MR_String) "inst_msg_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0,
  hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0[1] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0
};

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "inst_msg_info",
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0 = {
  (MR_String) "dont_expand_named_insts",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1 = {
  (MR_String) "expand_named_insts",
  (MR_Integer) 1
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "maybe_expand_named_insts",
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_maybe_expand_named_insts_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0 = {
  (MR_String) "quote_short_inst",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1 = {
  (MR_String) "fixed_short_inst",
  (MR_Integer) 1
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__error_msg_inst____Unify____short_inst_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____short_inst_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "short_inst",
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0 },
  {     hlds__error_msg_inst__hlds__error_msg_inst__enum_value_ordered_short_inst_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_short_inst_0
};

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____expansions_info_0_0_10001(
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    {
      hlds__error_msg_inst__succeeded = hlds__error_msg_inst____Unify____expansions_info_0_0(((MR_Word) hlds__error_msg_inst__wrapper_arg_1), ((MR_Word) hlds__error_msg_inst__wrapper_arg_2));
    }
    return hlds__error_msg_inst__succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____expansions_info_0_0_10001(
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
  MR_Box hlds__error_msg_inst__wrapper_arg_3)
{
  {
    MR_Word hlds__error_msg_inst__conv0_HeadVar__1_1;

    {
      hlds__error_msg_inst____Compare____expansions_info_0_0(&hlds__error_msg_inst__conv0_HeadVar__1_1, ((MR_Word) hlds__error_msg_inst__wrapper_arg_2), ((MR_Word) hlds__error_msg_inst__wrapper_arg_3));
    }
    *hlds__error_msg_inst__wrapper_arg_1 = ((MR_Box) (hlds__error_msg_inst__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001(
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    {
      hlds__error_msg_inst__succeeded = hlds__error_msg_inst____Unify____inst_msg_info_0_0(((MR_Word) hlds__error_msg_inst__wrapper_arg_1), ((MR_Word) hlds__error_msg_inst__wrapper_arg_2));
    }
    return hlds__error_msg_inst__succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001(
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
  MR_Box hlds__error_msg_inst__wrapper_arg_3)
{
  {
    MR_Word hlds__error_msg_inst__conv0_HeadVar__1_1;

    {
      hlds__error_msg_inst____Compare____inst_msg_info_0_0(&hlds__error_msg_inst__conv0_HeadVar__1_1, ((MR_Word) hlds__error_msg_inst__wrapper_arg_2), ((MR_Word) hlds__error_msg_inst__wrapper_arg_3));
    }
    *hlds__error_msg_inst__wrapper_arg_1 = ((MR_Box) (hlds__error_msg_inst__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001(
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    {
      hlds__error_msg_inst__succeeded = hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0(((MR_Word) hlds__error_msg_inst__wrapper_arg_1), ((MR_Word) hlds__error_msg_inst__wrapper_arg_2));
    }
    return hlds__error_msg_inst__succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001(
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
  MR_Box hlds__error_msg_inst__wrapper_arg_3)
{
  {
    MR_Word hlds__error_msg_inst__conv0_HeadVar__1_1;

    {
      hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0(&hlds__error_msg_inst__conv0_HeadVar__1_1, ((MR_Word) hlds__error_msg_inst__wrapper_arg_2), ((MR_Word) hlds__error_msg_inst__wrapper_arg_3));
    }
    *hlds__error_msg_inst__wrapper_arg_1 = ((MR_Box) (hlds__error_msg_inst__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0_10001(
  MR_Box hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    {
      hlds__error_msg_inst__succeeded = hlds__error_msg_inst____Unify____short_inst_0_0(((MR_Word) hlds__error_msg_inst__wrapper_arg_1), ((MR_Word) hlds__error_msg_inst__wrapper_arg_2));
    }
    return hlds__error_msg_inst__succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0_10001(
  MR_Box * hlds__error_msg_inst__wrapper_arg_1,
  MR_Box hlds__error_msg_inst__wrapper_arg_2,
  MR_Box hlds__error_msg_inst__wrapper_arg_3)
{
  {
    MR_Word hlds__error_msg_inst__conv0_HeadVar__1_1;

    {
      hlds__error_msg_inst____Compare____short_inst_0_0(&hlds__error_msg_inst__conv0_HeadVar__1_1, ((MR_Word) hlds__error_msg_inst__wrapper_arg_2), ((MR_Word) hlds__error_msg_inst__wrapper_arg_3));
    }
    *hlds__error_msg_inst__wrapper_arg_1 = ((MR_Box) (hlds__error_msg_inst__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0(
  MR_Word * hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2,
  MR_Word hlds__error_msg_inst__HeadVar__3_3)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Integer hlds__error_msg_inst__Cast_HeadVar1_4 = (MR_Integer) hlds__error_msg_inst__HeadVar__2_2;
    MR_Integer hlds__error_msg_inst__Cast_HeadVar2_5 = (MR_Integer) hlds__error_msg_inst__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__Cast_HeadVar1_4, hlds__error_msg_inst__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0(
  MR_Word hlds__error_msg_inst__HeadVar__2_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2)
{
  {
    MR_bool hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__HeadVar__2_1 == hlds__error_msg_inst__HeadVar__2_2);

    return hlds__error_msg_inst__succeeded;
  }
}

void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0(
  MR_Word * hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2,
  MR_Word hlds__error_msg_inst__HeadVar__3_3)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Integer hlds__error_msg_inst__Cast_HeadVar1_4 = (MR_Integer) hlds__error_msg_inst__HeadVar__2_2;
    MR_Integer hlds__error_msg_inst__Cast_HeadVar2_5 = (MR_Integer) hlds__error_msg_inst__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__Cast_HeadVar1_4, hlds__error_msg_inst__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0(
  MR_Word hlds__error_msg_inst__HeadVar__2_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2)
{
  {
    MR_bool hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__HeadVar__2_1 == hlds__error_msg_inst__HeadVar__2_2);

    return hlds__error_msg_inst__succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0(
  MR_Word * hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2,
  MR_Word hlds__error_msg_inst__HeadVar__3_3)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Integer hlds__error_msg_inst__CastX_12 = (MR_Integer) hlds__error_msg_inst__HeadVar__2_2;
    MR_Integer hlds__error_msg_inst__CastY_13 = (MR_Integer) hlds__error_msg_inst__HeadVar__3_3;

    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__CastX_12 == hlds__error_msg_inst__CastY_13);
    if (hlds__error_msg_inst__succeeded)
      *hlds__error_msg_inst__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__error_msg_inst__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__error_msg_inst__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__error_msg_inst__V_10_10;

        {
          hlds__hlds_module____Compare____module_info_0_0(&hlds__error_msg_inst__V_10_10, hlds__error_msg_inst__V_4_4, hlds__error_msg_inst__V_7_7);
        }
        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_10_10 == (MR_Integer) 0);
        hlds__error_msg_inst__succeeded = !(hlds__error_msg_inst__succeeded);
        if (hlds__error_msg_inst__succeeded)
          *hlds__error_msg_inst__HeadVar__1_1 = hlds__error_msg_inst__V_10_10;
        else
          {
            MR_Word hlds__error_msg_inst__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[3], &hlds__error_msg_inst__V_11_11, ((MR_Box) (hlds__error_msg_inst__V_5_5)), ((MR_Box) (hlds__error_msg_inst__V_8_8)));
            }
            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_11_11 == (MR_Integer) 0);
            hlds__error_msg_inst__succeeded = !(hlds__error_msg_inst__succeeded);
            if (hlds__error_msg_inst__succeeded)
              *hlds__error_msg_inst__HeadVar__1_1 = hlds__error_msg_inst__V_11_11;
            else
              {
                MR_Integer hlds__error_msg_inst__V_17_17 = (MR_Integer) hlds__error_msg_inst__V_6_6;
                MR_Integer hlds__error_msg_inst__V_18_18 = (MR_Integer) hlds__error_msg_inst__V_9_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__V_17_17, hlds__error_msg_inst__V_18_18);
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0(
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Integer hlds__error_msg_inst__CastX_9 = (MR_Integer) hlds__error_msg_inst__HeadVar__1_1;
    MR_Integer hlds__error_msg_inst__CastY_10 = (MR_Integer) hlds__error_msg_inst__HeadVar__2_2;

    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__CastX_9 == hlds__error_msg_inst__CastY_10);
    if (hlds__error_msg_inst__succeeded)
      hlds__error_msg_inst__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__error_msg_inst__TypeInfo_12_12;
        MR_Word hlds__error_msg_inst__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__error_msg_inst__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 2)));

        {
          hlds__error_msg_inst__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__error_msg_inst__V_3_3, hlds__error_msg_inst__V_6_6);
        }
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__TypeInfo_12_12 = (MR_Word) &hlds__error_msg_inst_scalar_common_1[3];
            {
              hlds__error_msg_inst__succeeded = mercury__builtin__unify_2_p_0(hlds__error_msg_inst__TypeInfo_12_12, ((MR_Box) (hlds__error_msg_inst__V_4_4)), ((MR_Box) (hlds__error_msg_inst__V_7_7)));
            }
            if (hlds__error_msg_inst__succeeded)
              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_5_5 == hlds__error_msg_inst__V_8_8);
          }
      }
    return hlds__error_msg_inst__succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst____Compare____expansions_info_0_0(
  MR_Word * hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2,
  MR_Word hlds__error_msg_inst__HeadVar__3_3)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Integer hlds__error_msg_inst__CastX_9 = (MR_Integer) hlds__error_msg_inst__HeadVar__2_2;
    MR_Integer hlds__error_msg_inst__CastY_10 = (MR_Integer) hlds__error_msg_inst__HeadVar__3_3;

    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__CastX_9 == hlds__error_msg_inst__CastY_10);
    if (hlds__error_msg_inst__succeeded)
      *hlds__error_msg_inst__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__error_msg_inst__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__V_8_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_2[0], &hlds__error_msg_inst__V_8_8, ((MR_Box) (hlds__error_msg_inst__V_4_4)), ((MR_Box) (hlds__error_msg_inst__V_6_6)));
        }
        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_8_8 == (MR_Integer) 0);
        hlds__error_msg_inst__succeeded = !(hlds__error_msg_inst__succeeded);
        if (hlds__error_msg_inst__succeeded)
          *hlds__error_msg_inst__HeadVar__1_1 = hlds__error_msg_inst__V_8_8;
        else
          {
            mercury__counter____Compare____counter_0_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__V_5_5, hlds__error_msg_inst__V_7_7);
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____expansions_info_0_0(
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__HeadVar__2_2)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Integer hlds__error_msg_inst__CastX_7 = (MR_Integer) hlds__error_msg_inst__HeadVar__1_1;
    MR_Integer hlds__error_msg_inst__CastY_8 = (MR_Integer) hlds__error_msg_inst__HeadVar__2_2;

    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__CastX_7 == hlds__error_msg_inst__CastY_8);
    if (hlds__error_msg_inst__succeeded)
      hlds__error_msg_inst__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__error_msg_inst__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadVar__2_2, (MR_Integer) 1)));

        {
          hlds__error_msg_inst__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_2[0], ((MR_Box) (hlds__error_msg_inst__V_3_3)), ((MR_Box) (hlds__error_msg_inst__V_5_5)));
        }
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__succeeded = mercury__counter____Unify____counter_0_0(hlds__error_msg_inst__V_4_4, hlds__error_msg_inst__V_6_6);
          }
      }
    return hlds__error_msg_inst__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(
  MR_Word hlds__error_msg_inst__Pieces_4,
  MR_Integer hlds__error_msg_inst__Left_5,
  MR_String * hlds__error_msg_inst__Summary_6)
{
  {
    MR_bool hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__Left_5 > (MR_Integer) 0);
    MR_String hlds__error_msg_inst__FirstFixed_7;
    MR_Word hlds__error_msg_inst__AfterFirstFixed_8;
    MR_Word hlds__error_msg_inst__V_12_12;

    if (hlds__error_msg_inst__succeeded)
      {
        hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__Pieces_4)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_4, (MR_Integer) 0)));
            hlds__error_msg_inst__AfterFirstFixed_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_4, (MR_Integer) 1)));
            hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__V_12_12)) == (MR_mktag((MR_Integer) 2)));
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__FirstFixed_7 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_12_12, (MR_Integer) 0)));
                if ((hlds__error_msg_inst__AfterFirstFixed_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    *hlds__error_msg_inst__Summary_6 = hlds__error_msg_inst__FirstFixed_7;
                    hlds__error_msg_inst__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word hlds__error_msg_inst__TailPieces_9;
                    MR_String hlds__error_msg_inst__TailSummary_10;
                    MR_Word hlds__error_msg_inst__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__AfterFirstFixed_8, (MR_Integer) 0)));
                    MR_String hlds__error_msg_inst__V_14_14;
                    MR_Word hlds__error_msg_inst__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__AfterFirstFixed_8, (MR_Integer) 1)));
                    MR_Word hlds__error_msg_inst__V_16_16;
                    MR_Integer hlds__error_msg_inst__V_17_17;
                    MR_Integer hlds__error_msg_inst__V_18_18;
                    MR_String hlds__error_msg_inst__V_19_19;
                    MR_String hlds__error_msg_inst__V_20_20;

                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_13_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_13_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_13_13, (MR_Integer) 1)));
                        hlds__error_msg_inst__succeeded = (strcmp(hlds__error_msg_inst__V_14_14, (MR_String) ",") == 0);
                        if (hlds__error_msg_inst__succeeded)
                          {
                            hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__V_15_15)) == (MR_mktag((MR_Integer) 1)));
                            if (hlds__error_msg_inst__succeeded)
                              {
                                hlds__error_msg_inst__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_15_15, (MR_Integer) 0)));
                                hlds__error_msg_inst__TailPieces_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_15_15, (MR_Integer) 1)));
                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                                if (hlds__error_msg_inst__succeeded)
                                  {
                                    hlds__error_msg_inst__V_18_18 = (MR_Integer) 1;
                                    hlds__error_msg_inst__V_17_17 = (hlds__error_msg_inst__Left_5 - hlds__error_msg_inst__V_18_18);
                                    {
                                      hlds__error_msg_inst__succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(hlds__error_msg_inst__TailPieces_9, hlds__error_msg_inst__V_17_17, &hlds__error_msg_inst__TailSummary_10);
                                    }
                                    if (hlds__error_msg_inst__succeeded)
                                      {
                                        hlds__error_msg_inst__V_20_20 = (MR_String) ", ";
                                        {
                                          hlds__error_msg_inst__V_19_19 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__V_20_20, hlds__error_msg_inst__TailSummary_10);
                                        }
                                        {
                                          *hlds__error_msg_inst__Summary_6 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__FirstFixed_7, hlds__error_msg_inst__V_19_19);
                                        }
                                        hlds__error_msg_inst__succeeded = MR_TRUE;
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return hlds__error_msg_inst__succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_19,
  MR_String hlds__error_msg_inst__Name_10,
  MR_Word hlds__error_msg_inst__ArgInsts_11,
  MR_Word hlds__error_msg_inst__Suffix_12,
  MR_Word * hlds__error_msg_inst__Pieces_13)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    if ((hlds__error_msg_inst__ArgInsts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__error_msg_inst__V_36_36;

        {
          hlds__error_msg_inst__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_36_36, 0) = ((MR_Box) (hlds__error_msg_inst__Name_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__error_msg_inst__Pieces_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_36_36));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_12));
        }
        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_19 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18;
      }
    else
      {
        MR_Word hlds__error_msg_inst__HeadArgInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_11, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailArgInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_11, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__ArgPieces_16;
        MR_String hlds__error_msg_inst__ArgSummary_17;

        {
          hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(hlds__error_msg_inst__Info_8, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18, hlds__error_msg_inst__STATE_VARIABLE_Expansions_19, hlds__error_msg_inst__HeadArgInst_14, hlds__error_msg_inst__TailArgInsts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__ArgPieces_16);
        }
        {
          hlds__error_msg_inst__succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(hlds__error_msg_inst__ArgPieces_16, (MR_Integer) 4, &hlds__error_msg_inst__ArgSummary_17);
        }
        if (hlds__error_msg_inst__succeeded)
          {
            MR_Word hlds__error_msg_inst__V_23_23;
            MR_String hlds__error_msg_inst__V_24_24;
            MR_String hlds__error_msg_inst__V_25_25;
            MR_String hlds__error_msg_inst__V_27_27;

            {
              hlds__error_msg_inst__V_27_27 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__ArgSummary_17, (MR_String) ")");
            }
            {
              hlds__error_msg_inst__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_27_27);
            }
            {
              hlds__error_msg_inst__V_24_24 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__Name_10, hlds__error_msg_inst__V_25_25);
            }
            {
              hlds__error_msg_inst__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_23_23, 0) = ((MR_Box) (hlds__error_msg_inst__V_24_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__error_msg_inst__Pieces_13 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_23_23));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_12));
            }
          }
        else
          {
            MR_Word hlds__error_msg_inst__V_29_29;
            MR_Word hlds__error_msg_inst__V_30_30;
            MR_String hlds__error_msg_inst__V_31_31;
            MR_Word hlds__error_msg_inst__V_33_33;

            {
              hlds__error_msg_inst__V_31_31 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__Name_10, (MR_String) "(");
            }
            {
              hlds__error_msg_inst__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_30_30, 1) = ((MR_Box) (hlds__error_msg_inst__V_31_31));
            }
            {
              hlds__error_msg_inst__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_29_29, 0) = ((MR_Box) (hlds__error_msg_inst__V_30_30));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_29_29, 1) = ((MR_Box) (hlds__error_msg_inst__ArgPieces_16));
            }
            {
              hlds__error_msg_inst__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_33_33, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_12));
            }
            {
              *hlds__error_msg_inst__Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_29_29, hlds__error_msg_inst__V_33_33);
            }
          }
      }
  }
}

static void MR_CALL 
hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_19,
  MR_String hlds__error_msg_inst__Name_10,
  MR_Word hlds__error_msg_inst__ArgInsts_11,
  MR_Word hlds__error_msg_inst__Suffix_12,
  MR_Word * hlds__error_msg_inst__Pieces_13)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    if ((hlds__error_msg_inst__ArgInsts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__error_msg_inst__V_46_46;

        {
          hlds__error_msg_inst__V_46_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_46_46, 0) = ((MR_Box) (hlds__error_msg_inst__Name_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__error_msg_inst__Pieces_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_46_46));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_12));
        }
        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_19 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18;
      }
    else
      {
        MR_Word hlds__error_msg_inst__HeadArgInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_11, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailArgInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_11, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__ArgPieces_16;
        MR_String hlds__error_msg_inst__ArgSummary_17;

        {
          hlds__error_msg_inst__insts_to_pieces_7_p_0(hlds__error_msg_inst__Info_8, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18, hlds__error_msg_inst__STATE_VARIABLE_Expansions_19, hlds__error_msg_inst__HeadArgInst_14, hlds__error_msg_inst__TailArgInsts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__ArgPieces_16);
        }
        {
          hlds__error_msg_inst__succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(hlds__error_msg_inst__ArgPieces_16, (MR_Integer) 4, &hlds__error_msg_inst__ArgSummary_17);
        }
        if (hlds__error_msg_inst__succeeded)
          {
            MR_Word hlds__error_msg_inst__V_23_23;
            MR_Word hlds__error_msg_inst__V_24_24;
            MR_Word hlds__error_msg_inst__V_25_25;
            MR_String hlds__error_msg_inst__V_26_26;
            MR_String hlds__error_msg_inst__V_28_28;

            {
              hlds__error_msg_inst__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_23_23, 0) = ((MR_Box) (hlds__error_msg_inst__Name_10));
            }
            {
              hlds__error_msg_inst__V_28_28 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__ArgSummary_17, (MR_String) ")");
            }
            {
              hlds__error_msg_inst__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_28_28);
            }
            {
              hlds__error_msg_inst__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_25_25, 1) = ((MR_Box) (hlds__error_msg_inst__V_26_26));
            }
            {
              hlds__error_msg_inst__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_24_24, 0) = ((MR_Box) (hlds__error_msg_inst__V_25_25));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_24_24, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__error_msg_inst__Pieces_13 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_23_23));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__V_24_24));
            }
          }
        else
          {
            MR_Word hlds__error_msg_inst__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            MR_Word hlds__error_msg_inst__V_30_30;
            MR_Word hlds__error_msg_inst__V_31_31;
            MR_Word hlds__error_msg_inst__V_39_39;
            MR_Word hlds__error_msg_inst__V_40_40;
            MR_Word hlds__error_msg_inst__V_43_43;

            {
              hlds__error_msg_inst__V_31_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_31_31, 0) = ((MR_Box) (hlds__error_msg_inst__Name_10));
            }
            {
              hlds__error_msg_inst__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_30_30, 0) = ((MR_Box) (hlds__error_msg_inst__V_31_31));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[11])));
            }
            {
              hlds__error_msg_inst__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[0])));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_43_43, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_12));
            }
            {
              hlds__error_msg_inst__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[14])));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_40_40, 1) = ((MR_Box) (hlds__error_msg_inst__V_43_43));
            }
            {
              hlds__error_msg_inst__V_39_39 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_47_47, hlds__error_msg_inst__ArgPieces_16, hlds__error_msg_inst__V_40_40);
            }
            {
              *hlds__error_msg_inst__Pieces_13 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_47_47, hlds__error_msg_inst__V_30_30, hlds__error_msg_inst__V_39_39);
            }
          }
      }
  }
}

static void MR_CALL 
hlds__error_msg_inst__arg_insts_to_inline_pieces_5_p_0(
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_3,
  MR_Word hlds__error_msg_inst__HeadVar__4_4,
  MR_Word * hlds__error_msg_inst__HeadVar__5_5)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    if ((hlds__error_msg_inst__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__error_msg_inst__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_3 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2;
      }
    else
      {
        MR_Word hlds__error_msg_inst__HeadArgInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailArgInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__HeadPieces_14;
        MR_Word hlds__error_msg_inst__TailPieces_15;
        MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_18;

        {
          hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_18, hlds__error_msg_inst__HeadArgInst_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__HeadPieces_14);
        }
        {
          hlds__error_msg_inst__arg_insts_to_inline_pieces_5_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_18, hlds__error_msg_inst__STATE_VARIABLE_Expansions_3, hlds__error_msg_inst__TailArgInsts_13, &hlds__error_msg_inst__TailPieces_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__error_msg_inst__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__HeadPieces_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__TailPieces_15));
        }
      }
  }
}

static void MR_CALL 
hlds__error_msg_inst__arg_insts_to_pieces_5_p_0(
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_3,
  MR_Word hlds__error_msg_inst__HeadVar__4_4,
  MR_Word * hlds__error_msg_inst__HeadVar__5_5)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    if ((hlds__error_msg_inst__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__error_msg_inst__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_3 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2;
      }
    else
      {
        MR_Word hlds__error_msg_inst__HeadArgInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailArgInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__HeadPieces_14;
        MR_Word hlds__error_msg_inst__TailPieces_15;
        MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_18;

        {
          hlds__error_msg_inst__inst_to_pieces_6_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_18, hlds__error_msg_inst__HeadArgInst_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__HeadPieces_14);
        }
        {
          hlds__error_msg_inst__arg_insts_to_pieces_5_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_18, hlds__error_msg_inst__STATE_VARIABLE_Expansions_3, hlds__error_msg_inst__TailArgInsts_13, &hlds__error_msg_inst__TailPieces_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__error_msg_inst__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__HeadPieces_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__TailPieces_15));
        }
      }
  }
}

static void MR_CALL 
hlds__error_msg_inst__mode_to_inline_pieces_5_p_0(
  MR_Word hlds__error_msg_inst__Info_6,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_27,
  MR_Word hlds__error_msg_inst__Mode_8,
  MR_Word * hlds__error_msg_inst__Pieces_9)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    if (((MR_tag((MR_Word) hlds__error_msg_inst__Mode_8)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__error_msg_inst__InitInst0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Mode_8, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__FinalInst0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Mode_8, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__InitInst_14;
        MR_Word hlds__error_msg_inst__FinalInst_17;
        MR_Word hlds__error_msg_inst__SubInitInstName_13;
        MR_Word hlds__error_msg_inst__V_40_40;
        MR_Word hlds__error_msg_inst__V_12_12;
        MR_Word hlds__error_msg_inst__SubFinalInstName_16;
        MR_Word hlds__error_msg_inst__V_41_41;
        MR_Word hlds__error_msg_inst__V_15_15;
        MR_Word hlds__error_msg_inst__V_42_42;
        MR_Word hlds__error_msg_inst__V_43_43;
        MR_Word hlds__error_msg_inst__V_44_44;
        MR_Word hlds__error_msg_inst__V_45_45;

        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst0_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst0_10, (MR_Integer) 1)));
            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_40_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_40_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_40_40, (MR_Integer) 1)));
                hlds__error_msg_inst__SubInitInstName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_40_40, (MR_Integer) 2)));
              }
          }
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__InitInst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, 1) = ((MR_Box) (hlds__error_msg_inst__SubInitInstName_13));
          }
        else
          hlds__error_msg_inst__InitInst_14 = hlds__error_msg_inst__InitInst0_10;
        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst0_11, (MR_Integer) 1)));
            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_41_41, (MR_Integer) 1)));
                hlds__error_msg_inst__SubFinalInstName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_41_41, (MR_Integer) 2)));
              }
          }
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__FinalInst_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, 1) = ((MR_Box) (hlds__error_msg_inst__SubFinalInstName_16));
          }
        else
          hlds__error_msg_inst__FinalInst_17 = hlds__error_msg_inst__FinalInst0_11;
        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 1)));
            hlds__error_msg_inst__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 2)));
            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_42_42 == (MR_Integer) 0);
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 1)));
                        hlds__error_msg_inst__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 2)));
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_44_44 == (MR_Integer) 0);
                        if (hlds__error_msg_inst__succeeded)
                          hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
        if (hlds__error_msg_inst__succeeded)
          {
            *hlds__error_msg_inst__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[26]);
            *hlds__error_msg_inst__STATE_VARIABLE_Expansions_27 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26;
          }
        else
          {
            MR_Word hlds__error_msg_inst__V_49_49;
            MR_Word hlds__error_msg_inst__V_50_50;
            MR_Word hlds__error_msg_inst__V_51_51;
            MR_Word hlds__error_msg_inst__V_52_52;

            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 1)));
                hlds__error_msg_inst__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 2)));
                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_49_49 == (MR_Integer) 1);
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (hlds__error_msg_inst__succeeded)
                          {
                            hlds__error_msg_inst__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 1)));
                            hlds__error_msg_inst__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 2)));
                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_51_51 == (MR_Integer) 3);
                            if (hlds__error_msg_inst__succeeded)
                              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
            if (hlds__error_msg_inst__succeeded)
              {
                *hlds__error_msg_inst__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[28]);
                *hlds__error_msg_inst__STATE_VARIABLE_Expansions_27 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26;
              }
            else
              {
                MR_Word hlds__error_msg_inst__V_56_56;
                MR_Word hlds__error_msg_inst__V_57_57;

                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 1)));
                        hlds__error_msg_inst__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 2)));
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_56_56 == (MR_Integer) 0);
                        if (hlds__error_msg_inst__succeeded)
                          hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
                if (hlds__error_msg_inst__succeeded)
                  {
                    *hlds__error_msg_inst__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[27]);
                    *hlds__error_msg_inst__STATE_VARIABLE_Expansions_27 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26;
                  }
                else
                  {
                    MR_Word hlds__error_msg_inst__V_61_61;
                    MR_Word hlds__error_msg_inst__V_62_62;

                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (hlds__error_msg_inst__succeeded)
                          {
                            hlds__error_msg_inst__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 1)));
                            hlds__error_msg_inst__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 2)));
                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_61_61 == (MR_Integer) 1);
                            if (hlds__error_msg_inst__succeeded)
                              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                    if (hlds__error_msg_inst__succeeded)
                      {
                        *hlds__error_msg_inst__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[30]);
                        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_27 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26;
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__InitPieces_18;
                        MR_Word hlds__error_msg_inst__FinalPieces_19;
                        MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_66_66;
                        MR_Word hlds__error_msg_inst__V_70_70;

                        {
                          hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_66_66, hlds__error_msg_inst__InitInst_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__InitPieces_18);
                        }
                        {
                          hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__STATE_VARIABLE_Expansions_66_66, hlds__error_msg_inst__STATE_VARIABLE_Expansions_27, hlds__error_msg_inst__FinalInst_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__FinalPieces_19);
                        }
                        {
                          hlds__error_msg_inst__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_70_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[24])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_70_70, 1) = ((MR_Box) (hlds__error_msg_inst__FinalPieces_19));
                        }
                        {
                          *hlds__error_msg_inst__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__InitPieces_18, hlds__error_msg_inst__V_70_70);
                        }
                      }
                  }
              }
          }
      }
    else
      {
        MR_Word hlds__error_msg_inst__ModeName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Mode_8, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__ArgInsts_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Mode_8, (MR_Integer) 1)));
        MR_String hlds__error_msg_inst__BaseModeName_22;

        {
          hlds__error_msg_inst__BaseModeName_22 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__error_msg_inst__ModeName_20);
        }
        if ((hlds__error_msg_inst__ArgInsts_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__error_msg_inst__V_38_38;

            {
              hlds__error_msg_inst__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_38_38, 0) = ((MR_Box) (hlds__error_msg_inst__BaseModeName_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__error_msg_inst__Pieces_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_38_38));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            *hlds__error_msg_inst__STATE_VARIABLE_Expansions_27 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26;
          }
        else
          {
            MR_Word hlds__error_msg_inst__ArgInstPieces_25;
            MR_Word hlds__error_msg_inst__V_29_29;
            MR_Word hlds__error_msg_inst__V_30_30;
            MR_String hlds__error_msg_inst__V_31_31;
            MR_Word hlds__error_msg_inst__V_33_33;
            MR_Word hlds__error_msg_inst__HeadArgInst_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_21, (MR_Integer) 0)));
            MR_Word hlds__error_msg_inst__TailArgInsts_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_21, (MR_Integer) 1)));
            MR_Word hlds__error_msg_inst__HeadPieces_83;
            MR_Word hlds__error_msg_inst__TailPieces_84;
            MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_87;

            {
              hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_87, hlds__error_msg_inst__HeadArgInst_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__HeadPieces_83);
            }
            {
              hlds__error_msg_inst__arg_insts_to_inline_pieces_5_p_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_87, hlds__error_msg_inst__STATE_VARIABLE_Expansions_27, hlds__error_msg_inst__TailArgInsts_82, &hlds__error_msg_inst__TailPieces_84);
            }
            {
              hlds__error_msg_inst__ArgInstPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInstPieces_25, 0) = ((MR_Box) (hlds__error_msg_inst__HeadPieces_83));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInstPieces_25, 1) = ((MR_Box) (hlds__error_msg_inst__TailPieces_84));
            }
            {
              hlds__error_msg_inst__V_31_31 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__BaseModeName_22, (MR_String) "(");
            }
            {
              hlds__error_msg_inst__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_30_30, 1) = ((MR_Box) (hlds__error_msg_inst__V_31_31));
            }
            {
              hlds__error_msg_inst__V_33_33 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__ArgInstPieces_25);
            }
            {
              hlds__error_msg_inst__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_29_29, 0) = ((MR_Box) (hlds__error_msg_inst__V_30_30));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_29_29, 1) = ((MR_Box) (hlds__error_msg_inst__V_33_33));
            }
            {
              *hlds__error_msg_inst__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_29_29, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[25]));
            }
          }
      }
  }
}

static void MR_CALL 
hlds__error_msg_inst__mode_to_pieces_5_p_0(
  MR_Word hlds__error_msg_inst__Info_6,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_27,
  MR_Word hlds__error_msg_inst__Mode_8,
  MR_Word * hlds__error_msg_inst__Pieces_9)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    if (((MR_tag((MR_Word) hlds__error_msg_inst__Mode_8)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__error_msg_inst__InitInst0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Mode_8, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__FinalInst0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Mode_8, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__InitInst_14;
        MR_Word hlds__error_msg_inst__FinalInst_17;
        MR_Word hlds__error_msg_inst__SubInitInstName_13;
        MR_Word hlds__error_msg_inst__V_40_40;
        MR_Word hlds__error_msg_inst__V_12_12;
        MR_Word hlds__error_msg_inst__SubFinalInstName_16;
        MR_Word hlds__error_msg_inst__V_41_41;
        MR_Word hlds__error_msg_inst__V_15_15;
        MR_Word hlds__error_msg_inst__V_42_42;
        MR_Word hlds__error_msg_inst__V_43_43;
        MR_Word hlds__error_msg_inst__V_44_44;
        MR_Word hlds__error_msg_inst__V_45_45;

        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst0_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst0_10, (MR_Integer) 1)));
            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_40_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_40_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_40_40, (MR_Integer) 1)));
                hlds__error_msg_inst__SubInitInstName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_40_40, (MR_Integer) 2)));
              }
          }
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__InitInst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, 1) = ((MR_Box) (hlds__error_msg_inst__SubInitInstName_13));
          }
        else
          hlds__error_msg_inst__InitInst_14 = hlds__error_msg_inst__InitInst0_10;
        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst0_11, (MR_Integer) 1)));
            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_41_41, (MR_Integer) 1)));
                hlds__error_msg_inst__SubFinalInstName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_41_41, (MR_Integer) 2)));
              }
          }
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__FinalInst_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, 1) = ((MR_Box) (hlds__error_msg_inst__SubFinalInstName_16));
          }
        else
          hlds__error_msg_inst__FinalInst_17 = hlds__error_msg_inst__FinalInst0_11;
        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 1)));
            hlds__error_msg_inst__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 2)));
            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_42_42 == (MR_Integer) 0);
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 1)));
                        hlds__error_msg_inst__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 2)));
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_44_44 == (MR_Integer) 0);
                        if (hlds__error_msg_inst__succeeded)
                          hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
        if (hlds__error_msg_inst__succeeded)
          {
            *hlds__error_msg_inst__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[26]);
            *hlds__error_msg_inst__STATE_VARIABLE_Expansions_27 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26;
          }
        else
          {
            MR_Word hlds__error_msg_inst__V_49_49;
            MR_Word hlds__error_msg_inst__V_50_50;

            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__error_msg_inst__succeeded)
              {
                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 1)));
                    hlds__error_msg_inst__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 2)));
                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_49_49 == (MR_Integer) 0);
                    if (hlds__error_msg_inst__succeeded)
                      hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
            if (hlds__error_msg_inst__succeeded)
              {
                *hlds__error_msg_inst__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[27]);
                *hlds__error_msg_inst__STATE_VARIABLE_Expansions_27 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26;
              }
            else
              {
                MR_Word hlds__error_msg_inst__V_54_54;
                MR_Word hlds__error_msg_inst__V_55_55;
                MR_Word hlds__error_msg_inst__V_56_56;
                MR_Word hlds__error_msg_inst__V_57_57;

                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 1)));
                    hlds__error_msg_inst__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 2)));
                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_54_54 == (MR_Integer) 1);
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (hlds__error_msg_inst__succeeded)
                          {
                            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (hlds__error_msg_inst__succeeded)
                              {
                                hlds__error_msg_inst__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 1)));
                                hlds__error_msg_inst__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 2)));
                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_56_56 == (MR_Integer) 3);
                                if (hlds__error_msg_inst__succeeded)
                                  hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
                if (hlds__error_msg_inst__succeeded)
                  {
                    *hlds__error_msg_inst__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[28]);
                    *hlds__error_msg_inst__STATE_VARIABLE_Expansions_27 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26;
                  }
                else
                  {
                    MR_Word hlds__error_msg_inst__V_61_61;
                    MR_Word hlds__error_msg_inst__V_62_62;
                    MR_Word hlds__error_msg_inst__V_63_63;
                    MR_Word hlds__error_msg_inst__V_64_64;

                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 1)));
                        hlds__error_msg_inst__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 2)));
                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_61_61 == (MR_Integer) 1);
                        if (hlds__error_msg_inst__succeeded)
                          {
                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (hlds__error_msg_inst__succeeded)
                              {
                                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                if (hlds__error_msg_inst__succeeded)
                                  {
                                    hlds__error_msg_inst__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 1)));
                                    hlds__error_msg_inst__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 2)));
                                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_63_63 == (MR_Integer) 1);
                                    if (hlds__error_msg_inst__succeeded)
                                      hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                              }
                          }
                      }
                    if (hlds__error_msg_inst__succeeded)
                      {
                        *hlds__error_msg_inst__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[29]);
                        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_27 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26;
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__V_68_68;
                        MR_Word hlds__error_msg_inst__V_69_69;

                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (hlds__error_msg_inst__succeeded)
                          {
                            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (hlds__error_msg_inst__succeeded)
                              {
                                hlds__error_msg_inst__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 1)));
                                hlds__error_msg_inst__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 2)));
                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_68_68 == (MR_Integer) 1);
                                if (hlds__error_msg_inst__succeeded)
                                  hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                        if (hlds__error_msg_inst__succeeded)
                          {
                            *hlds__error_msg_inst__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[30]);
                            *hlds__error_msg_inst__STATE_VARIABLE_Expansions_27 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26;
                          }
                        else
                          {
                            MR_Word hlds__error_msg_inst__V_73_73;
                            MR_Word hlds__error_msg_inst__V_74_74;
                            MR_Word hlds__error_msg_inst__V_75_75;
                            MR_Word hlds__error_msg_inst__V_76_76;

                            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (hlds__error_msg_inst__succeeded)
                              {
                                hlds__error_msg_inst__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 1)));
                                hlds__error_msg_inst__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 2)));
                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_73_73 == (MR_Integer) 2);
                                if (hlds__error_msg_inst__succeeded)
                                  {
                                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (hlds__error_msg_inst__succeeded)
                                      {
                                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                        if (hlds__error_msg_inst__succeeded)
                                          {
                                            hlds__error_msg_inst__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 1)));
                                            hlds__error_msg_inst__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 2)));
                                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_75_75 == (MR_Integer) 4);
                                            if (hlds__error_msg_inst__succeeded)
                                              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          }
                                      }
                                  }
                              }
                            if (hlds__error_msg_inst__succeeded)
                              {
                                *hlds__error_msg_inst__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[31]);
                                *hlds__error_msg_inst__STATE_VARIABLE_Expansions_27 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26;
                              }
                            else
                              {
                                MR_Word hlds__error_msg_inst__V_80_80;
                                MR_Word hlds__error_msg_inst__V_81_81;
                                MR_Word hlds__error_msg_inst__V_82_82;
                                MR_Word hlds__error_msg_inst__V_83_83;

                                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__InitInst_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                if (hlds__error_msg_inst__succeeded)
                                  {
                                    hlds__error_msg_inst__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 1)));
                                    hlds__error_msg_inst__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InitInst_14, (MR_Integer) 2)));
                                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_80_80 == (MR_Integer) 2);
                                    if (hlds__error_msg_inst__succeeded)
                                      {
                                        hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (hlds__error_msg_inst__succeeded)
                                          {
                                            hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                            if (hlds__error_msg_inst__succeeded)
                                              {
                                                hlds__error_msg_inst__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 1)));
                                                hlds__error_msg_inst__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 2)));
                                                hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_82_82 == (MR_Integer) 2);
                                                if (hlds__error_msg_inst__succeeded)
                                                  hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              }
                                          }
                                      }
                                  }
                                if (hlds__error_msg_inst__succeeded)
                                  {
                                    *hlds__error_msg_inst__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[32]);
                                    *hlds__error_msg_inst__STATE_VARIABLE_Expansions_27 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26;
                                  }
                                else
                                  {
                                    MR_Word hlds__error_msg_inst__V_87_87;
                                    MR_Word hlds__error_msg_inst__V_88_88;

                                    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__InitInst_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (hlds__error_msg_inst__succeeded)
                                      {
                                        hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__FinalInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                        if (hlds__error_msg_inst__succeeded)
                                          {
                                            hlds__error_msg_inst__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 1)));
                                            hlds__error_msg_inst__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__FinalInst_17, (MR_Integer) 2)));
                                            hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_87_87 == (MR_Integer) 2);
                                            if (hlds__error_msg_inst__succeeded)
                                              hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          }
                                      }
                                    if (hlds__error_msg_inst__succeeded)
                                      {
                                        *hlds__error_msg_inst__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[33]);
                                        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_27 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26;
                                      }
                                    else
                                      {
                                        MR_Word hlds__error_msg_inst__InitPieces_18;
                                        MR_Word hlds__error_msg_inst__FinalPieces_19;
                                        MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_92_92;
                                        MR_Word hlds__error_msg_inst__V_96_96;

                                        {
                                          hlds__error_msg_inst__inst_to_pieces_6_p_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_92_92, hlds__error_msg_inst__InitInst_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__InitPieces_18);
                                        }
                                        {
                                          hlds__error_msg_inst__inst_to_pieces_6_p_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__STATE_VARIABLE_Expansions_92_92, hlds__error_msg_inst__STATE_VARIABLE_Expansions_27, hlds__error_msg_inst__FinalInst_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__FinalPieces_19);
                                        }
                                        {
                                          hlds__error_msg_inst__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_96_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[24])));
                                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_96_96, 1) = ((MR_Box) (hlds__error_msg_inst__FinalPieces_19));
                                        }
                                        {
                                          *hlds__error_msg_inst__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__InitPieces_18, hlds__error_msg_inst__V_96_96);
                                        }
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
        MR_Word hlds__error_msg_inst__ModeName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Mode_8, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__ArgInsts_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Mode_8, (MR_Integer) 1)));
        MR_String hlds__error_msg_inst__BaseModeName_22;

        {
          hlds__error_msg_inst__BaseModeName_22 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__error_msg_inst__ModeName_20);
        }
        if ((hlds__error_msg_inst__ArgInsts_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__error_msg_inst__V_38_38;

            {
              hlds__error_msg_inst__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_38_38, 0) = ((MR_Box) (hlds__error_msg_inst__BaseModeName_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__error_msg_inst__Pieces_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_38_38));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            *hlds__error_msg_inst__STATE_VARIABLE_Expansions_27 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26;
          }
        else
          {
            MR_Word hlds__error_msg_inst__ArgInstPieces_25;
            MR_Word hlds__error_msg_inst__V_29_29;
            MR_Word hlds__error_msg_inst__V_30_30;
            MR_String hlds__error_msg_inst__V_31_31;
            MR_Word hlds__error_msg_inst__V_33_33;
            MR_Word hlds__error_msg_inst__HeadArgInst_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_21, (MR_Integer) 0)));
            MR_Word hlds__error_msg_inst__TailArgInsts_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInsts_21, (MR_Integer) 1)));
            MR_Word hlds__error_msg_inst__HeadPieces_109;
            MR_Word hlds__error_msg_inst__TailPieces_110;
            MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_113;

            {
              hlds__error_msg_inst__inst_to_pieces_6_p_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_26, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_113, hlds__error_msg_inst__HeadArgInst_107, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__HeadPieces_109);
            }
            {
              hlds__error_msg_inst__arg_insts_to_pieces_5_p_0(hlds__error_msg_inst__Info_6, hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_113, hlds__error_msg_inst__STATE_VARIABLE_Expansions_27, hlds__error_msg_inst__TailArgInsts_108, &hlds__error_msg_inst__TailPieces_110);
            }
            {
              hlds__error_msg_inst__ArgInstPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInstPieces_25, 0) = ((MR_Box) (hlds__error_msg_inst__HeadPieces_109));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ArgInstPieces_25, 1) = ((MR_Box) (hlds__error_msg_inst__TailPieces_110));
            }
            {
              hlds__error_msg_inst__V_31_31 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__BaseModeName_22, (MR_String) "(");
            }
            {
              hlds__error_msg_inst__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_30_30, 1) = ((MR_Box) (hlds__error_msg_inst__V_31_31));
            }
            {
              hlds__error_msg_inst__V_33_33 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__ArgInstPieces_25);
            }
            {
              hlds__error_msg_inst__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_29_29, 0) = ((MR_Box) (hlds__error_msg_inst__V_30_30));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_29_29, 1) = ((MR_Box) (hlds__error_msg_inst__V_33_33));
            }
            {
              *hlds__error_msg_inst__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_29_29, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[25]));
            }
          }
      }
  }
}

static void MR_CALL 
hlds__error_msg_inst__modes_to_inline_pieces_5_p_0(
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_3,
  MR_Word hlds__error_msg_inst__HeadVar__4_4,
  MR_Word * hlds__error_msg_inst__HeadVar__5_5)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    if ((hlds__error_msg_inst__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__error_msg_inst__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_3 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2;
      }
    else
      {
        MR_Word hlds__error_msg_inst__HeadMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailModes_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__HeadPieces_14;
        MR_Word hlds__error_msg_inst__TailPieces_15;
        MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_18;

        {
          hlds__error_msg_inst__mode_to_inline_pieces_5_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_18, hlds__error_msg_inst__HeadMode_12, &hlds__error_msg_inst__HeadPieces_14);
        }
        {
          hlds__error_msg_inst__modes_to_inline_pieces_5_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_18, hlds__error_msg_inst__STATE_VARIABLE_Expansions_3, hlds__error_msg_inst__TailModes_13, &hlds__error_msg_inst__TailPieces_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__error_msg_inst__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__HeadPieces_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__TailPieces_15));
        }
      }
  }
}

static void MR_CALL 
hlds__error_msg_inst__modes_to_pieces_5_p_0(
  MR_Word hlds__error_msg_inst__HeadVar__1_1,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_3,
  MR_Word hlds__error_msg_inst__HeadVar__4_4,
  MR_Word * hlds__error_msg_inst__HeadVar__5_5)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    if ((hlds__error_msg_inst__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__error_msg_inst__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_3 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2;
      }
    else
      {
        MR_Word hlds__error_msg_inst__HeadMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailModes_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__HeadPieces_14;
        MR_Word hlds__error_msg_inst__TailPieces_15;
        MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_18;

        {
          hlds__error_msg_inst__mode_to_pieces_5_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_2, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_18, hlds__error_msg_inst__HeadMode_12, &hlds__error_msg_inst__HeadPieces_14);
        }
        {
          hlds__error_msg_inst__modes_to_pieces_5_p_0(hlds__error_msg_inst__HeadVar__1_1, hlds__error_msg_inst__STATE_VARIABLE_Expansions_18_18, hlds__error_msg_inst__STATE_VARIABLE_Expansions_3, hlds__error_msg_inst__TailModes_13, &hlds__error_msg_inst__TailPieces_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__error_msg_inst__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__HeadPieces_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__TailPieces_15));
        }
      }
  }
}

static void MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_31,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_32,
  MR_String hlds__error_msg_inst__AnyPrefix_10,
  MR_Word hlds__error_msg_inst__Uniq_11,
  MR_Word hlds__error_msg_inst__PredInstInfo_12,
  MR_Word * hlds__error_msg_inst__Pieces_13)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__PredOrFunc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_12, (MR_Integer) 0)));
    MR_Word hlds__error_msg_inst__ArgModes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_12, (MR_Integer) 1)));
    MR_Word hlds__error_msg_inst__Det_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_12, (MR_Integer) 3)));
    MR_Word hlds__error_msg_inst__UniqPieces_18;
    MR_Word hlds__error_msg_inst__ArgModesPieces_20;
    MR_String hlds__error_msg_inst__IsDetStr_21;
    MR_Word hlds__error_msg_inst__ModesDetPieces_22;
    MR_Word hlds__error_msg_inst___MaybeArgRegs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_12, (MR_Integer) 2)));
    MR_Box hlds__error_msg_inst__conv1_IsDetStr_21;

    switch (hlds__error_msg_inst__Uniq_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_String hlds__error_msg_inst__BoundName_19;
          MR_Word hlds__error_msg_inst__V_37_37;
          MR_Word hlds__error_msg_inst__V_38_38;
          MR_Box hlds__error_msg_inst__conv0_BoundName_19;

          {
            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__Uniq_11, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_BoundName_19);
          }
          hlds__error_msg_inst__BoundName_19 = ((MR_String) hlds__error_msg_inst__conv0_BoundName_19);
          {
            hlds__error_msg_inst__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_38_38, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_19));
          }
          {
            hlds__error_msg_inst__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_37_37, 0) = ((MR_Box) (hlds__error_msg_inst__V_38_38));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
          }
          {
            hlds__error_msg_inst__UniqPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__UniqPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[12])));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__UniqPieces_18, 1) = ((MR_Box) (hlds__error_msg_inst__V_37_37));
          }
        }
        break;
      case (MR_Integer) 0:
        hlds__error_msg_inst__UniqPieces_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    {
      hlds__error_msg_inst__modes_to_inline_pieces_5_p_0(hlds__error_msg_inst__Info_8, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_31, hlds__error_msg_inst__STATE_VARIABLE_Expansions_32, hlds__error_msg_inst__ArgModes_15, &hlds__error_msg_inst__ArgModesPieces_20);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_det_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__Det_17, ((MR_Box) ((MR_String) "is ")), &hlds__error_msg_inst__conv1_IsDetStr_21);
    }
    hlds__error_msg_inst__IsDetStr_21 = ((MR_String) hlds__error_msg_inst__conv1_IsDetStr_21);
    switch (hlds__error_msg_inst__PredOrFunc_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word hlds__error_msg_inst__RealArgModesPieces_26;
          MR_Word hlds__error_msg_inst__RetModePieces_27;
          MR_Word hlds__error_msg_inst__JoinedRealArgModePieces_28;
          MR_Box hlds__error_msg_inst__conv2_RetModePieces_27;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__ArgModesPieces_20, &hlds__error_msg_inst__RealArgModesPieces_26, &hlds__error_msg_inst__conv2_RetModePieces_27);
          }
          hlds__error_msg_inst__RetModePieces_27 = ((MR_Word) hlds__error_msg_inst__conv2_RetModePieces_27);
          {
            hlds__error_msg_inst__JoinedRealArgModePieces_28 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__RealArgModesPieces_26);
          }
          if ((hlds__error_msg_inst__ArgModes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word hlds__error_msg_inst__V_64_64;
              MR_Word hlds__error_msg_inst__V_65_65;
              MR_String hlds__error_msg_inst__V_66_66;
              MR_String hlds__error_msg_inst__V_68_68;
              MR_Word hlds__error_msg_inst__V_70_70;
              MR_Word hlds__error_msg_inst__V_71_71;

              {
                hlds__error_msg_inst__V_68_68 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_10, (MR_String) "func =");
              }
              {
                hlds__error_msg_inst__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_68_68);
              }
              {
                hlds__error_msg_inst__V_65_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_65_65, 0) = ((MR_Box) (hlds__error_msg_inst__V_66_66));
              }
              {
                hlds__error_msg_inst__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_64_64, 0) = ((MR_Box) (hlds__error_msg_inst__V_65_65));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_64_64, 1) = ((MR_Box) (hlds__error_msg_inst__RetModePieces_27));
              }
              {
                hlds__error_msg_inst__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_71_71, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_21));
              }
              {
                hlds__error_msg_inst__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_70_70, 0) = ((MR_Box) (hlds__error_msg_inst__V_71_71));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[25])));
              }
              {
                hlds__error_msg_inst__ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_64_64, hlds__error_msg_inst__V_70_70);
              }
            }
          else
            {
              MR_Word hlds__error_msg_inst__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              MR_Word hlds__error_msg_inst__V_45_45;
              MR_Word hlds__error_msg_inst__V_46_46;
              MR_String hlds__error_msg_inst__V_47_47;
              MR_String hlds__error_msg_inst__V_49_49;
              MR_Word hlds__error_msg_inst__V_51_51;
              MR_Word hlds__error_msg_inst__V_52_52;
              MR_Word hlds__error_msg_inst__V_55_55;
              MR_Word hlds__error_msg_inst__V_58_58;
              MR_Word hlds__error_msg_inst__V_59_59;

              {
                hlds__error_msg_inst__V_49_49 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_10, (MR_String) "func(");
              }
              {
                hlds__error_msg_inst__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_49_49);
              }
              {
                hlds__error_msg_inst__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_46_46, 1) = ((MR_Box) (hlds__error_msg_inst__V_47_47));
              }
              {
                hlds__error_msg_inst__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_45_45, 0) = ((MR_Box) (hlds__error_msg_inst__V_46_46));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_45_45, 1) = ((MR_Box) (hlds__error_msg_inst__JoinedRealArgModePieces_28));
              }
              {
                hlds__error_msg_inst__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[15])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 1) = ((MR_Box) (hlds__error_msg_inst__RetModePieces_27));
              }
              {
                hlds__error_msg_inst__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_52_52, 1) = ((MR_Box) (hlds__error_msg_inst__V_55_55));
              }
              {
                hlds__error_msg_inst__V_59_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_59_59, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_21));
              }
              {
                hlds__error_msg_inst__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_58_58, 0) = ((MR_Box) (hlds__error_msg_inst__V_59_59));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[25])));
              }
              {
                hlds__error_msg_inst__V_51_51 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_107_107, hlds__error_msg_inst__V_52_52, hlds__error_msg_inst__V_58_58);
              }
              {
                hlds__error_msg_inst__ModesDetPieces_22 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_107_107, hlds__error_msg_inst__V_45_45, hlds__error_msg_inst__V_51_51);
              }
            }
        }
        break;
      case (MR_Integer) 0:
        if ((hlds__error_msg_inst__ArgModes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__error_msg_inst__V_91_91;
            MR_String hlds__error_msg_inst__V_92_92;
            MR_String hlds__error_msg_inst__V_94_94;
            MR_Word hlds__error_msg_inst__V_96_96;
            MR_Word hlds__error_msg_inst__V_97_97;

            {
              hlds__error_msg_inst__V_94_94 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_10, (MR_String) "pred");
            }
            {
              hlds__error_msg_inst__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_94_94);
            }
            {
              hlds__error_msg_inst__V_91_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_91_91, 0) = ((MR_Box) (hlds__error_msg_inst__V_92_92));
            }
            {
              hlds__error_msg_inst__V_97_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_97_97, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_21));
            }
            {
              hlds__error_msg_inst__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_96_96, 0) = ((MR_Box) (hlds__error_msg_inst__V_97_97));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[25])));
            }
            {
              hlds__error_msg_inst__ModesDetPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ModesDetPieces_22, 0) = ((MR_Box) (hlds__error_msg_inst__V_91_91));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ModesDetPieces_22, 1) = ((MR_Box) (hlds__error_msg_inst__V_96_96));
            }
          }
        else
          {
            MR_Word hlds__error_msg_inst__JoinedArgModePieces_25;
            MR_Word hlds__error_msg_inst__V_76_76;
            MR_Word hlds__error_msg_inst__V_77_77;
            MR_String hlds__error_msg_inst__V_78_78;
            MR_String hlds__error_msg_inst__V_80_80;
            MR_Word hlds__error_msg_inst__V_82_82;
            MR_Word hlds__error_msg_inst__V_85_85;
            MR_Word hlds__error_msg_inst__V_86_86;

            {
              hlds__error_msg_inst__JoinedArgModePieces_25 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__ArgModesPieces_20);
            }
            {
              hlds__error_msg_inst__V_80_80 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_10, (MR_String) "pred(");
            }
            {
              hlds__error_msg_inst__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_80_80);
            }
            {
              hlds__error_msg_inst__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_77_77, 1) = ((MR_Box) (hlds__error_msg_inst__V_78_78));
            }
            {
              hlds__error_msg_inst__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_76_76, 0) = ((MR_Box) (hlds__error_msg_inst__V_77_77));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_76_76, 1) = ((MR_Box) (hlds__error_msg_inst__JoinedArgModePieces_25));
            }
            {
              hlds__error_msg_inst__V_86_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_86_86, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_21));
            }
            {
              hlds__error_msg_inst__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_85_85, 0) = ((MR_Box) (hlds__error_msg_inst__V_86_86));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[25])));
            }
            {
              hlds__error_msg_inst__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_82_82, 1) = ((MR_Box) (hlds__error_msg_inst__V_85_85));
            }
            {
              hlds__error_msg_inst__ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_76_76, hlds__error_msg_inst__V_82_82);
            }
          }
        break;
    }
    {
      *hlds__error_msg_inst__Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__UniqPieces_18, hlds__error_msg_inst__ModesDetPieces_22);
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_31,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_32,
  MR_String hlds__error_msg_inst__AnyPrefix_10,
  MR_Word hlds__error_msg_inst__Uniq_11,
  MR_Word hlds__error_msg_inst__PredInstInfo_12,
  MR_Word * hlds__error_msg_inst__Pieces_13)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__PredOrFunc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_12, (MR_Integer) 0)));
    MR_Word hlds__error_msg_inst__ArgModes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_12, (MR_Integer) 1)));
    MR_Word hlds__error_msg_inst__Det_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_12, (MR_Integer) 3)));
    MR_Word hlds__error_msg_inst__UniqPieces_18;
    MR_Word hlds__error_msg_inst__ArgModesPieces_20;
    MR_String hlds__error_msg_inst__IsDetStr_21;
    MR_Word hlds__error_msg_inst__ModesDetPieces_22;
    MR_Word hlds__error_msg_inst___MaybeArgRegs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__PredInstInfo_12, (MR_Integer) 2)));
    MR_Box hlds__error_msg_inst__conv1_IsDetStr_21;

    switch (hlds__error_msg_inst__Uniq_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_String hlds__error_msg_inst__BoundName_19;
          MR_Word hlds__error_msg_inst__V_37_37;
          MR_Word hlds__error_msg_inst__V_38_38;
          MR_Box hlds__error_msg_inst__conv0_BoundName_19;

          {
            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__Uniq_11, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_BoundName_19);
          }
          hlds__error_msg_inst__BoundName_19 = ((MR_String) hlds__error_msg_inst__conv0_BoundName_19);
          {
            hlds__error_msg_inst__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_38_38, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_19));
          }
          {
            hlds__error_msg_inst__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_37_37, 0) = ((MR_Box) (hlds__error_msg_inst__V_38_38));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[24])));
          }
          {
            hlds__error_msg_inst__UniqPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__UniqPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[12])));
            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__UniqPieces_18, 1) = ((MR_Box) (hlds__error_msg_inst__V_37_37));
          }
        }
        break;
      case (MR_Integer) 0:
        hlds__error_msg_inst__UniqPieces_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    {
      hlds__error_msg_inst__modes_to_pieces_5_p_0(hlds__error_msg_inst__Info_8, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_31, hlds__error_msg_inst__STATE_VARIABLE_Expansions_32, hlds__error_msg_inst__ArgModes_15, &hlds__error_msg_inst__ArgModesPieces_20);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_det_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__Det_17, ((MR_Box) ((MR_String) "is ")), &hlds__error_msg_inst__conv1_IsDetStr_21);
    }
    hlds__error_msg_inst__IsDetStr_21 = ((MR_String) hlds__error_msg_inst__conv1_IsDetStr_21);
    switch (hlds__error_msg_inst__PredOrFunc_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word hlds__error_msg_inst__RealArgModesPieces_26;
          MR_Word hlds__error_msg_inst__RetModePieces_27;
          MR_Word hlds__error_msg_inst__JoinedRealArgModePieces_28;
          MR_Box hlds__error_msg_inst__conv2_RetModePieces_27;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__ArgModesPieces_20, &hlds__error_msg_inst__RealArgModesPieces_26, &hlds__error_msg_inst__conv2_RetModePieces_27);
          }
          hlds__error_msg_inst__RetModePieces_27 = ((MR_Word) hlds__error_msg_inst__conv2_RetModePieces_27);
          {
            hlds__error_msg_inst__JoinedRealArgModePieces_28 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__error_msg_inst__RealArgModesPieces_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          if ((hlds__error_msg_inst__ArgModes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word hlds__error_msg_inst__V_68_68;
              MR_Word hlds__error_msg_inst__V_69_69;
              MR_String hlds__error_msg_inst__V_70_70;
              MR_String hlds__error_msg_inst__V_72_72;
              MR_Word hlds__error_msg_inst__V_74_74;
              MR_Word hlds__error_msg_inst__V_75_75;

              {
                hlds__error_msg_inst__V_72_72 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_10, (MR_String) "func =");
              }
              {
                hlds__error_msg_inst__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_72_72);
              }
              {
                hlds__error_msg_inst__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_69_69, 0) = ((MR_Box) (hlds__error_msg_inst__V_70_70));
              }
              {
                hlds__error_msg_inst__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_68_68, 0) = ((MR_Box) (hlds__error_msg_inst__V_69_69));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_68_68, 1) = ((MR_Box) (hlds__error_msg_inst__RetModePieces_27));
              }
              {
                hlds__error_msg_inst__V_75_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_75_75, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_21));
              }
              {
                hlds__error_msg_inst__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_74_74, 0) = ((MR_Box) (hlds__error_msg_inst__V_75_75));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[25])));
              }
              {
                hlds__error_msg_inst__ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_68_68, hlds__error_msg_inst__V_74_74);
              }
            }
          else
            {
              MR_Word hlds__error_msg_inst__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              MR_Word hlds__error_msg_inst__V_46_46;
              MR_Word hlds__error_msg_inst__V_47_47;
              MR_String hlds__error_msg_inst__V_48_48;
              MR_String hlds__error_msg_inst__V_50_50;
              MR_Word hlds__error_msg_inst__V_52_52;
              MR_Word hlds__error_msg_inst__V_55_55;
              MR_Word hlds__error_msg_inst__V_56_56;
              MR_Word hlds__error_msg_inst__V_59_59;
              MR_Word hlds__error_msg_inst__V_62_62;
              MR_Word hlds__error_msg_inst__V_63_63;

              {
                hlds__error_msg_inst__V_50_50 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_10, (MR_String) "func(");
              }
              {
                hlds__error_msg_inst__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_50_50);
              }
              {
                hlds__error_msg_inst__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_47_47, 0) = ((MR_Box) (hlds__error_msg_inst__V_48_48));
              }
              {
                hlds__error_msg_inst__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[13])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_52_52, 1) = ((MR_Box) (hlds__error_msg_inst__JoinedRealArgModePieces_28));
              }
              {
                hlds__error_msg_inst__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_46_46, 0) = ((MR_Box) (hlds__error_msg_inst__V_47_47));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_46_46, 1) = ((MR_Box) (hlds__error_msg_inst__V_52_52));
              }
              {
                hlds__error_msg_inst__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[14])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_59_59, 1) = ((MR_Box) (hlds__error_msg_inst__RetModePieces_27));
              }
              {
                hlds__error_msg_inst__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[14])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_56_56, 1) = ((MR_Box) (hlds__error_msg_inst__V_59_59));
              }
              {
                hlds__error_msg_inst__V_63_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_63_63, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_21));
              }
              {
                hlds__error_msg_inst__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_62_62, 0) = ((MR_Box) (hlds__error_msg_inst__V_63_63));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[25])));
              }
              {
                hlds__error_msg_inst__V_55_55 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_111_111, hlds__error_msg_inst__V_56_56, hlds__error_msg_inst__V_62_62);
              }
              {
                hlds__error_msg_inst__ModesDetPieces_22 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_111_111, hlds__error_msg_inst__V_46_46, hlds__error_msg_inst__V_55_55);
              }
            }
        }
        break;
      case (MR_Integer) 0:
        if ((hlds__error_msg_inst__ArgModes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__error_msg_inst__V_95_95;
            MR_String hlds__error_msg_inst__V_96_96;
            MR_String hlds__error_msg_inst__V_98_98;
            MR_Word hlds__error_msg_inst__V_100_100;
            MR_Word hlds__error_msg_inst__V_101_101;

            {
              hlds__error_msg_inst__V_98_98 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_10, (MR_String) "pred");
            }
            {
              hlds__error_msg_inst__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_98_98);
            }
            {
              hlds__error_msg_inst__V_95_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_95_95, 0) = ((MR_Box) (hlds__error_msg_inst__V_96_96));
            }
            {
              hlds__error_msg_inst__V_101_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_101_101, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_21));
            }
            {
              hlds__error_msg_inst__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_100_100, 0) = ((MR_Box) (hlds__error_msg_inst__V_101_101));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[25])));
            }
            {
              hlds__error_msg_inst__ModesDetPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ModesDetPieces_22, 0) = ((MR_Box) (hlds__error_msg_inst__V_95_95));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__ModesDetPieces_22, 1) = ((MR_Box) (hlds__error_msg_inst__V_100_100));
            }
          }
        else
          {
            MR_Word hlds__error_msg_inst__JoinedArgModePieces_25;
            MR_Word hlds__error_msg_inst__V_80_80;
            MR_Word hlds__error_msg_inst__V_81_81;
            MR_String hlds__error_msg_inst__V_82_82;
            MR_String hlds__error_msg_inst__V_84_84;
            MR_Word hlds__error_msg_inst__V_86_86;
            MR_Word hlds__error_msg_inst__V_89_89;
            MR_Word hlds__error_msg_inst__V_90_90;

            {
              hlds__error_msg_inst__JoinedArgModePieces_25 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(hlds__error_msg_inst__ArgModesPieces_20);
            }
            {
              hlds__error_msg_inst__V_84_84 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__AnyPrefix_10, (MR_String) "pred(");
            }
            {
              hlds__error_msg_inst__V_82_82 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__error_msg_inst__V_84_84);
            }
            {
              hlds__error_msg_inst__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_81_81, 1) = ((MR_Box) (hlds__error_msg_inst__V_82_82));
            }
            {
              hlds__error_msg_inst__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_80_80, 0) = ((MR_Box) (hlds__error_msg_inst__V_81_81));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_80_80, 1) = ((MR_Box) (hlds__error_msg_inst__JoinedArgModePieces_25));
            }
            {
              hlds__error_msg_inst__V_90_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_90_90, 0) = ((MR_Box) (hlds__error_msg_inst__IsDetStr_21));
            }
            {
              hlds__error_msg_inst__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_89_89, 0) = ((MR_Box) (hlds__error_msg_inst__V_90_90));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[25])));
            }
            {
              hlds__error_msg_inst__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_86_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
              MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_86_86, 1) = ((MR_Box) (hlds__error_msg_inst__V_89_89));
            }
            {
              hlds__error_msg_inst__ModesDetPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_80_80, hlds__error_msg_inst__V_86_86);
            }
          }
        break;
    }
    {
      *hlds__error_msg_inst__Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__UniqPieces_18, hlds__error_msg_inst__ModesDetPieces_22);
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__record_internal_inst_name_5_p_0(
  MR_Word hlds__error_msg_inst__InstName_6,
  MR_String hlds__error_msg_inst__InstNameStr_7,
  MR_Word * hlds__error_msg_inst__InstNumPieces_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_16,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_17)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__ExpansionsMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_16, (MR_Integer) 0)));
    MR_Word hlds__error_msg_inst__ExpansionsCounter0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_16, (MR_Integer) 1)));
    MR_Integer hlds__error_msg_inst__InstNum_12;
    MR_Word hlds__error_msg_inst__ExpansionsCounter_13;
    MR_String hlds__error_msg_inst__InstNameNumStr_14;
    MR_Word hlds__error_msg_inst__ExpansionsMap_15;
    MR_String hlds__error_msg_inst__V_19_19;
    MR_String hlds__error_msg_inst__V_20_20;
    MR_String hlds__error_msg_inst__V_22_22;
    MR_Word hlds__error_msg_inst__V_23_23;

    {
      mercury__counter__allocate_3_p_0(&hlds__error_msg_inst__InstNum_12, hlds__error_msg_inst__ExpansionsCounter0_11, &hlds__error_msg_inst__ExpansionsCounter_13);
    }
    {
      hlds__error_msg_inst__V_22_22 = mercury__string__int_to_string_1_f_0(hlds__error_msg_inst__InstNum_12);
    }
    {
      hlds__error_msg_inst__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) " #", hlds__error_msg_inst__V_22_22);
    }
    {
      hlds__error_msg_inst__V_19_19 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__InstNameStr_7, hlds__error_msg_inst__V_20_20);
    }
    {
      hlds__error_msg_inst__InstNameNumStr_14 = mercury__string__f_43_43_2_f_0((MR_String) "internal ", hlds__error_msg_inst__V_19_19);
    }
    {
      hlds__error_msg_inst__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_23_23, 0) = ((MR_Box) (hlds__error_msg_inst__InstNameNumStr_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__error_msg_inst__InstNumPieces_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_23_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[0], ((MR_Box) (hlds__error_msg_inst__InstName_6)), ((MR_Box) (*hlds__error_msg_inst__InstNumPieces_8)), hlds__error_msg_inst__ExpansionsMap0_10, &hlds__error_msg_inst__ExpansionsMap_15);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__error_msg_inst__STATE_VARIABLE_Expansions_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__error_msg_inst__ExpansionsMap_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__error_msg_inst__ExpansionsCounter_13));
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__record_user_inst_name_4_p_0(
  MR_Word hlds__error_msg_inst__InstName_5,
  MR_Word hlds__error_msg_inst__NamedNamePieces_6,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_11,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_12)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__ExpansionsMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_11, (MR_Integer) 0)));
    MR_Word hlds__error_msg_inst__ExpansionsCounter0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_11, (MR_Integer) 1)));
    MR_Word hlds__error_msg_inst__ExpansionsMap_10;

    {
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[0], ((MR_Box) (hlds__error_msg_inst__InstName_5)), ((MR_Box) (hlds__error_msg_inst__NamedNamePieces_6)), hlds__error_msg_inst__ExpansionsMap0_8, &hlds__error_msg_inst__ExpansionsMap_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__error_msg_inst__STATE_VARIABLE_Expansions_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__error_msg_inst__ExpansionsMap_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__error_msg_inst__ExpansionsCounter0_9));
    }
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(
  MR_Word hlds__error_msg_inst__Expansions_4,
  MR_Word hlds__error_msg_inst__InstName_5,
  MR_Word * hlds__error_msg_inst__PastPieces_6)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__ExpansionsMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Expansions_4, (MR_Integer) 0)));
    MR_Word hlds__error_msg_inst__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Expansions_4, (MR_Integer) 1)));
    MR_Box hlds__error_msg_inst__conv0_PastPieces_6;

    {
      hlds__error_msg_inst__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[0], hlds__error_msg_inst__ExpansionsMap_7, ((MR_Box) (hlds__error_msg_inst__InstName_5)), &hlds__error_msg_inst__conv0_PastPieces_6);
    }
    if (hlds__error_msg_inst__succeeded)
      {
        *hlds__error_msg_inst__PastPieces_6 = ((MR_Word) hlds__error_msg_inst__conv0_PastPieces_6);
        hlds__error_msg_inst__succeeded = MR_TRUE;
      }
    return hlds__error_msg_inst__succeeded;
  }
}

static void MR_CALL 
hlds__error_msg_inst__inst_name_to_inline_pieces_6_p_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_48,
  MR_Word hlds__error_msg_inst__InstName_9,
  MR_Word hlds__error_msg_inst__Suffix_10,
  MR_Word * hlds__error_msg_inst__Pieces_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__error_msg_inst__succeeded;
        MR_Word hlds__error_msg_inst__PastPieces_12;

        {
          hlds__error_msg_inst__succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__PastPieces_12);
        }
        if (hlds__error_msg_inst__succeeded)
          {
            *hlds__error_msg_inst__Pieces_11 = hlds__error_msg_inst__PastPieces_12;
            *hlds__error_msg_inst__STATE_VARIABLE_Expansions_48 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47;
          }
        else
          switch (MR_tag((MR_Word) hlds__error_msg_inst__InstName_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__error_msg_inst__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_9, (MR_Integer) 0)));
                MR_Word hlds__error_msg_inst__ArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_9, (MR_Integer) 1)));
                MR_Word hlds__error_msg_inst__ModuleInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                MR_String hlds__error_msg_inst__SymNameStr_19;
                MR_Word hlds__error_msg_inst__NamePieces_20;
                MR_Word hlds__error_msg_inst__NamedNamePieces_21;
                MR_Word hlds__error_msg_inst__ExpandInsts_22;
                MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_69_69;
                MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_73_73;
                MR_Word hlds__error_msg_inst__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                MR_Word hlds__error_msg_inst__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                MR_Word hlds__error_msg_inst__V_97_97;
                MR_Word hlds__error_msg_inst__V_98_98;

                if (((MR_tag((MR_Word) hlds__error_msg_inst__SymName_13)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word hlds__error_msg_inst__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_13, (MR_Integer) 0)));
                    MR_String hlds__error_msg_inst__BaseName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_13, (MR_Integer) 1)));
                    MR_Word hlds__error_msg_inst__CurModuleName_18;

                    {
                      hlds__hlds_module__module_info_get_name_2_p_0(hlds__error_msg_inst__ModuleInfo_15, &hlds__error_msg_inst__CurModuleName_18);
                    }
                    {
                      hlds__error_msg_inst__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__error_msg_inst__ModuleName_16, hlds__error_msg_inst__CurModuleName_18);
                    }
                    if (hlds__error_msg_inst__succeeded)
                      hlds__error_msg_inst__SymNameStr_19 = hlds__error_msg_inst__BaseName_17;
                    else
                      {
                        hlds__error_msg_inst__SymNameStr_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__error_msg_inst__SymName_13);
                      }
                  }
                else
                  hlds__error_msg_inst__SymNameStr_19 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__SymName_13, (MR_Integer) 0)));
                {
                  hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_7_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_69_69, hlds__error_msg_inst__SymNameStr_19, hlds__error_msg_inst__ArgInsts_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__NamePieces_20);
                }
                {
                  hlds__error_msg_inst__NamedNamePieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__error_msg_inst__NamedNamePieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[20])));
                  MR_hl_field(MR_mktag(1), hlds__error_msg_inst__NamedNamePieces_21, 1) = ((MR_Box) (hlds__error_msg_inst__NamePieces_20));
                }
                {
                  hlds__error_msg_inst__record_user_inst_name_4_p_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__NamedNamePieces_21, hlds__error_msg_inst__STATE_VARIABLE_Expansions_69_69, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_73_73);
                }
                hlds__error_msg_inst__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                hlds__error_msg_inst__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                hlds__error_msg_inst__ExpandInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                switch (hlds__error_msg_inst__ExpandInsts_22) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__NamePieces_20, hlds__error_msg_inst__Suffix_10);
                      }
                      *hlds__error_msg_inst__STATE_VARIABLE_Expansions_48 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_73_73;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__error_msg_inst__EqvInst_23;

                      {
                        check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_15, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__EqvInst_23);
                      }
                      if (((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_23, (MR_Integer) 0)))) == (MR_Integer) 5))))
                        {
                          MR_Word hlds__error_msg_inst__TypeInfo_452_452;
                          MR_Word hlds__error_msg_inst__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_23, (MR_Integer) 1)));
                          MR_Word hlds__error_msg_inst__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_23, (MR_Integer) 2)));

                          {
                            hlds__error_msg_inst__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__error_msg_inst__SymName_13, hlds__error_msg_inst__V_106_106);
                          }
                          if (hlds__error_msg_inst__succeeded)
                            {
                              hlds__error_msg_inst__TypeInfo_452_452 = (MR_Word) &hlds__error_msg_inst_scalar_common_1[7];
                              {
                                hlds__error_msg_inst__succeeded = mercury__builtin__unify_2_p_0(hlds__error_msg_inst__TypeInfo_452_452, ((MR_Box) (hlds__error_msg_inst__ArgInsts_14)), ((MR_Box) (hlds__error_msg_inst__V_107_107)));
                              }
                            }
                        }
                      else
                      if (((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_23, (MR_Integer) 0)))) == (MR_Integer) 4))))
                        {
                          MR_Word hlds__error_msg_inst__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_23, (MR_Integer) 1)));

                          {
                            hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__V_105_105);
                          }
                        }
                      else
                        hlds__error_msg_inst__succeeded = MR_FALSE;
                      if (hlds__error_msg_inst__succeeded)
                        {
                          {
                            *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__NamedNamePieces_21, hlds__error_msg_inst__Suffix_10);
                          }
                          *hlds__error_msg_inst__STATE_VARIABLE_Expansions_48 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_73_73;
                        }
                      else
                        {
                          MR_Word hlds__error_msg_inst__TypeCtorInfo_103_103;
                          MR_Word hlds__error_msg_inst__ExpandedPieces_24;
                          MR_Word hlds__error_msg_inst__V_75_75;
                          MR_Word hlds__error_msg_inst__V_76_76;
                          MR_Word hlds__error_msg_inst__V_79_79;
                          MR_Word hlds__error_msg_inst__V_82_82;

                          {
                            hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_73_73, hlds__error_msg_inst__STATE_VARIABLE_Expansions_48, hlds__error_msg_inst__EqvInst_23, hlds__error_msg_inst__Suffix_10, &hlds__error_msg_inst__ExpandedPieces_24);
                          }
                          hlds__error_msg_inst__TypeCtorInfo_103_103 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                          {
                            hlds__error_msg_inst__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_82_82, 1) = ((MR_Box) (hlds__error_msg_inst__ExpandedPieces_24));
                          }
                          {
                            hlds__error_msg_inst__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[18])));
                            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_79_79, 1) = ((MR_Box) (hlds__error_msg_inst__V_82_82));
                          }
                          {
                            hlds__error_msg_inst__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_76_76, 1) = ((MR_Box) (hlds__error_msg_inst__V_79_79));
                          }
                          {
                            hlds__error_msg_inst__V_75_75 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_103_103, hlds__error_msg_inst__V_76_76, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[23]));
                          }
                          {
                            *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_103_103, hlds__error_msg_inst__NamedNamePieces_21, hlds__error_msg_inst__V_75_75);
                          }
                        }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__error_msg_inst__ModuleInfo_438 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                MR_Word hlds__error_msg_inst__EqvInst_439;
                MR_Word hlds__error_msg_inst__V_377_377 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                MR_Word hlds__error_msg_inst__V_378_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                MR_Word hlds__error_msg_inst__V_379_379;

                {
                  check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_438, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__EqvInst_439);
                }
                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_439)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_439, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_439, (MR_Integer) 1)));
                    {
                      hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__V_379_379);
                    }
                  }
                if (hlds__error_msg_inst__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__error_msg_inst__Pieces_11 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[11])));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                    }
                    *hlds__error_msg_inst__STATE_VARIABLE_Expansions_48 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47;
                  }
                else
                  {
                    MR_Word hlds__error_msg_inst__TypeCtorInfo_104_398;
                    MR_Word hlds__error_msg_inst__InstNumPieces_381;
                    MR_Word hlds__error_msg_inst__EqvPieces_382;
                    MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_383;
                    MR_Word hlds__error_msg_inst__V_384_384;
                    MR_Word hlds__error_msg_inst__V_385_385;
                    MR_Word hlds__error_msg_inst__V_388_388;
                    MR_Word hlds__error_msg_inst__V_391_391;

                    {
                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(hlds__error_msg_inst__InstName_9, (MR_String) "\044unify_inst", &hlds__error_msg_inst__InstNumPieces_381, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_383);
                    }
                    {
                      hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_383, hlds__error_msg_inst__STATE_VARIABLE_Expansions_48, hlds__error_msg_inst__EqvInst_439, hlds__error_msg_inst__Suffix_10, &hlds__error_msg_inst__EqvPieces_382);
                    }
                    hlds__error_msg_inst__TypeCtorInfo_104_398 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                    {
                      hlds__error_msg_inst__V_391_391 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_391_391, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_391_391, 1) = ((MR_Box) (hlds__error_msg_inst__EqvPieces_382));
                    }
                    {
                      hlds__error_msg_inst__V_388_388 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_388_388, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[18])));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_388_388, 1) = ((MR_Box) (hlds__error_msg_inst__V_391_391));
                    }
                    {
                      hlds__error_msg_inst__V_385_385 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_385_385, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_385_385, 1) = ((MR_Box) (hlds__error_msg_inst__V_388_388));
                    }
                    {
                      hlds__error_msg_inst__V_384_384 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_104_398, hlds__error_msg_inst__V_385_385, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[23]));
                    }
                    {
                      *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_104_398, hlds__error_msg_inst__InstNumPieces_381, hlds__error_msg_inst__V_384_384);
                    }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__error_msg_inst__ModuleInfo_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                MR_Word hlds__error_msg_inst__EqvInst_238;
                MR_Word hlds__error_msg_inst__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                MR_Word hlds__error_msg_inst__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                MR_Word hlds__error_msg_inst__V_178_178;

                {
                  check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_237, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__EqvInst_238);
                }
                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_238)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_238, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_238, (MR_Integer) 1)));
                    {
                      hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__V_178_178);
                    }
                  }
                if (hlds__error_msg_inst__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__error_msg_inst__Pieces_11 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[8])));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                    }
                    *hlds__error_msg_inst__STATE_VARIABLE_Expansions_48 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47;
                  }
                else
                  {
                    MR_Word hlds__error_msg_inst__TypeCtorInfo_104_197;
                    MR_Word hlds__error_msg_inst__InstNumPieces_180;
                    MR_Word hlds__error_msg_inst__EqvPieces_181;
                    MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_182;
                    MR_Word hlds__error_msg_inst__V_183_183;
                    MR_Word hlds__error_msg_inst__V_184_184;
                    MR_Word hlds__error_msg_inst__V_187_187;
                    MR_Word hlds__error_msg_inst__V_190_190;

                    {
                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(hlds__error_msg_inst__InstName_9, (MR_String) "\044merge_inst", &hlds__error_msg_inst__InstNumPieces_180, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_182);
                    }
                    {
                      hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_182, hlds__error_msg_inst__STATE_VARIABLE_Expansions_48, hlds__error_msg_inst__EqvInst_238, hlds__error_msg_inst__Suffix_10, &hlds__error_msg_inst__EqvPieces_181);
                    }
                    hlds__error_msg_inst__TypeCtorInfo_104_197 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                    {
                      hlds__error_msg_inst__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_190_190, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_190_190, 1) = ((MR_Box) (hlds__error_msg_inst__EqvPieces_181));
                    }
                    {
                      hlds__error_msg_inst__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_187_187, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[18])));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_187_187, 1) = ((MR_Box) (hlds__error_msg_inst__V_190_190));
                    }
                    {
                      hlds__error_msg_inst__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_184_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_184_184, 1) = ((MR_Box) (hlds__error_msg_inst__V_187_187));
                    }
                    {
                      hlds__error_msg_inst__V_183_183 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_104_197, hlds__error_msg_inst__V_184_184, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[23]));
                    }
                    {
                      *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_104_197, hlds__error_msg_inst__InstNumPieces_180, hlds__error_msg_inst__V_183_183);
                    }
                  }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_9, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__error_msg_inst__ModuleInfo_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                    MR_Word hlds__error_msg_inst__EqvInst_171;
                    MR_Word hlds__error_msg_inst__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                    MR_Word hlds__error_msg_inst__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                    MR_Word hlds__error_msg_inst__V_111_111;

                    {
                      check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_170, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__EqvInst_171);
                    }
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_171)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_171, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_171, (MR_Integer) 1)));
                        {
                          hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__V_111_111);
                        }
                      }
                    if (hlds__error_msg_inst__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__error_msg_inst__Pieces_11 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[7])));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                        }
                        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_48 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47;
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__TypeCtorInfo_104_130;
                        MR_Word hlds__error_msg_inst__InstNumPieces_113;
                        MR_Word hlds__error_msg_inst__EqvPieces_114;
                        MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_115;
                        MR_Word hlds__error_msg_inst__V_116_116;
                        MR_Word hlds__error_msg_inst__V_117_117;
                        MR_Word hlds__error_msg_inst__V_120_120;
                        MR_Word hlds__error_msg_inst__V_123_123;

                        {
                          hlds__error_msg_inst__record_internal_inst_name_5_p_0(hlds__error_msg_inst__InstName_9, (MR_String) "\044ground_inst", &hlds__error_msg_inst__InstNumPieces_113, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_115);
                        }
                        {
                          hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_115, hlds__error_msg_inst__STATE_VARIABLE_Expansions_48, hlds__error_msg_inst__EqvInst_171, hlds__error_msg_inst__Suffix_10, &hlds__error_msg_inst__EqvPieces_114);
                        }
                        hlds__error_msg_inst__TypeCtorInfo_104_130 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                        {
                          hlds__error_msg_inst__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_123_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_123_123, 1) = ((MR_Box) (hlds__error_msg_inst__EqvPieces_114));
                        }
                        {
                          hlds__error_msg_inst__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_120_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[18])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_120_120, 1) = ((MR_Box) (hlds__error_msg_inst__V_123_123));
                        }
                        {
                          hlds__error_msg_inst__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_117_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_117_117, 1) = ((MR_Box) (hlds__error_msg_inst__V_120_120));
                        }
                        {
                          hlds__error_msg_inst__V_116_116 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_104_130, hlds__error_msg_inst__V_117_117, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[23]));
                        }
                        {
                          *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_104_130, hlds__error_msg_inst__InstNumPieces_113, hlds__error_msg_inst__V_116_116);
                        }
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__error_msg_inst__ModuleInfo_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                    MR_Word hlds__error_msg_inst__EqvInst_94;
                    MR_Word hlds__error_msg_inst__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                    MR_Word hlds__error_msg_inst__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                    MR_Word hlds__error_msg_inst__V_108_108;

                    {
                      check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_93, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__EqvInst_94);
                    }
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_94)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_94, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_94, (MR_Integer) 1)));
                        {
                          hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__V_108_108);
                        }
                      }
                    if (hlds__error_msg_inst__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__error_msg_inst__Pieces_11 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[6])));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                        }
                        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_48 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47;
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__TypeCtorInfo_104_104;
                        MR_Word hlds__error_msg_inst__InstNumPieces_45;
                        MR_Word hlds__error_msg_inst__EqvPieces_46;
                        MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_50;
                        MR_Word hlds__error_msg_inst__V_52_52;
                        MR_Word hlds__error_msg_inst__V_53_53;
                        MR_Word hlds__error_msg_inst__V_56_56;
                        MR_Word hlds__error_msg_inst__V_59_59;

                        {
                          hlds__error_msg_inst__record_internal_inst_name_5_p_0(hlds__error_msg_inst__InstName_9, (MR_String) "\044any_inst", &hlds__error_msg_inst__InstNumPieces_45, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_50);
                        }
                        {
                          hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_50, hlds__error_msg_inst__STATE_VARIABLE_Expansions_48, hlds__error_msg_inst__EqvInst_94, hlds__error_msg_inst__Suffix_10, &hlds__error_msg_inst__EqvPieces_46);
                        }
                        hlds__error_msg_inst__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                        {
                          hlds__error_msg_inst__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_59_59, 1) = ((MR_Box) (hlds__error_msg_inst__EqvPieces_46));
                        }
                        {
                          hlds__error_msg_inst__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[18])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_56_56, 1) = ((MR_Box) (hlds__error_msg_inst__V_59_59));
                        }
                        {
                          hlds__error_msg_inst__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_53_53, 1) = ((MR_Box) (hlds__error_msg_inst__V_56_56));
                        }
                        {
                          hlds__error_msg_inst__V_52_52 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_104_104, hlds__error_msg_inst__V_53_53, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[23]));
                        }
                        {
                          *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_104_104, hlds__error_msg_inst__InstNumPieces_45, hlds__error_msg_inst__V_52_52);
                        }
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__error_msg_inst__ModuleInfo_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                    MR_Word hlds__error_msg_inst__EqvInst_372;
                    MR_Word hlds__error_msg_inst__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                    MR_Word hlds__error_msg_inst__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                    MR_Word hlds__error_msg_inst__V_312_312;

                    {
                      check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_371, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__EqvInst_372);
                    }
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_372)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_372, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_372, (MR_Integer) 1)));
                        {
                          hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__V_312_312);
                        }
                      }
                    if (hlds__error_msg_inst__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__error_msg_inst__Pieces_11 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[10])));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                        }
                        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_48 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47;
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__TypeCtorInfo_104_331;
                        MR_Word hlds__error_msg_inst__InstNumPieces_314;
                        MR_Word hlds__error_msg_inst__EqvPieces_315;
                        MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_316;
                        MR_Word hlds__error_msg_inst__V_317_317;
                        MR_Word hlds__error_msg_inst__V_318_318;
                        MR_Word hlds__error_msg_inst__V_321_321;
                        MR_Word hlds__error_msg_inst__V_324_324;

                        {
                          hlds__error_msg_inst__record_internal_inst_name_5_p_0(hlds__error_msg_inst__InstName_9, (MR_String) "\044shared_inst", &hlds__error_msg_inst__InstNumPieces_314, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_316);
                        }
                        {
                          hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_316, hlds__error_msg_inst__STATE_VARIABLE_Expansions_48, hlds__error_msg_inst__EqvInst_372, hlds__error_msg_inst__Suffix_10, &hlds__error_msg_inst__EqvPieces_315);
                        }
                        hlds__error_msg_inst__TypeCtorInfo_104_331 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                        {
                          hlds__error_msg_inst__V_324_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_324_324, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_324_324, 1) = ((MR_Box) (hlds__error_msg_inst__EqvPieces_315));
                        }
                        {
                          hlds__error_msg_inst__V_321_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_321_321, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[18])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_321_321, 1) = ((MR_Box) (hlds__error_msg_inst__V_324_324));
                        }
                        {
                          hlds__error_msg_inst__V_318_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_318_318, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_318_318, 1) = ((MR_Box) (hlds__error_msg_inst__V_321_321));
                        }
                        {
                          hlds__error_msg_inst__V_317_317 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_104_331, hlds__error_msg_inst__V_318_318, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[23]));
                        }
                        {
                          *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_104_331, hlds__error_msg_inst__InstNumPieces_314, hlds__error_msg_inst__V_317_317);
                        }
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word hlds__error_msg_inst__ModuleInfo_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                    MR_Word hlds__error_msg_inst__EqvInst_305;
                    MR_Word hlds__error_msg_inst__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                    MR_Word hlds__error_msg_inst__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                    MR_Word hlds__error_msg_inst__V_245_245;

                    {
                      check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_304, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__EqvInst_305);
                    }
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_305)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_305, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_305, (MR_Integer) 1)));
                        {
                          hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__V_245_245);
                        }
                      }
                    if (hlds__error_msg_inst__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__error_msg_inst__Pieces_11 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[9])));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                        }
                        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_48 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47;
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__TypeCtorInfo_104_264;
                        MR_Word hlds__error_msg_inst__InstNumPieces_247;
                        MR_Word hlds__error_msg_inst__EqvPieces_248;
                        MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_249;
                        MR_Word hlds__error_msg_inst__V_250_250;
                        MR_Word hlds__error_msg_inst__V_251_251;
                        MR_Word hlds__error_msg_inst__V_254_254;
                        MR_Word hlds__error_msg_inst__V_257_257;

                        {
                          hlds__error_msg_inst__record_internal_inst_name_5_p_0(hlds__error_msg_inst__InstName_9, (MR_String) "\044mostly_uniq_inst", &hlds__error_msg_inst__InstNumPieces_247, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_249);
                        }
                        {
                          hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_50_249, hlds__error_msg_inst__STATE_VARIABLE_Expansions_48, hlds__error_msg_inst__EqvInst_305, hlds__error_msg_inst__Suffix_10, &hlds__error_msg_inst__EqvPieces_248);
                        }
                        hlds__error_msg_inst__TypeCtorInfo_104_264 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                        {
                          hlds__error_msg_inst__V_257_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_257_257, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[21])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_257_257, 1) = ((MR_Box) (hlds__error_msg_inst__EqvPieces_248));
                        }
                        {
                          hlds__error_msg_inst__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_254_254, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[18])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_254_254, 1) = ((MR_Box) (hlds__error_msg_inst__V_257_257));
                        }
                        {
                          hlds__error_msg_inst__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_251_251, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_251_251, 1) = ((MR_Box) (hlds__error_msg_inst__V_254_254));
                        }
                        {
                          hlds__error_msg_inst__V_250_250 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_104_264, hlds__error_msg_inst__V_251_251, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[23]));
                        }
                        {
                          *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_104_264, hlds__error_msg_inst__InstNumPieces_247, hlds__error_msg_inst__V_250_250);
                        }
                      }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word hlds__error_msg_inst__Uniq_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_9, (MR_Integer) 1)));
                    MR_Word hlds__error_msg_inst__EqvInst_91;
                    MR_Word hlds__error_msg_inst___Type_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_9, (MR_Integer) 2)));

                    {
                      hlds__error_msg_inst__EqvInst_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_91, 1) = ((MR_Box) (hlds__error_msg_inst__Uniq_27));
                      MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_91, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_47, hlds__error_msg_inst__STATE_VARIABLE_Expansions_48, hlds__error_msg_inst__EqvInst_91, hlds__error_msg_inst__Suffix_10, hlds__error_msg_inst__Pieces_11);
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word hlds__error_msg_inst__SubInstName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_9, (MR_Integer) 2)));
                    MR_Word hlds__error_msg_inst___Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_9, (MR_Integer) 1)));

                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__error_msg_inst__InstName__tmp_copy_9 = hlds__error_msg_inst__SubInstName_26;

                      hlds__error_msg_inst__InstName_9 = hlds__error_msg_inst__InstName__tmp_copy_9;
                    }
                    continue;
                  }
                  break;
              }
              break;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__error_msg_inst__inst_name_to_pieces_6_p_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_47,
  MR_Word hlds__error_msg_inst__InstName_9,
  MR_Word hlds__error_msg_inst__Suffix_10,
  MR_Word * hlds__error_msg_inst__Pieces_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__error_msg_inst__succeeded;
        MR_Word hlds__error_msg_inst__PastPieces_12;

        {
          hlds__error_msg_inst__succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__PastPieces_12);
        }
        if (hlds__error_msg_inst__succeeded)
          {
            *hlds__error_msg_inst__Pieces_11 = hlds__error_msg_inst__PastPieces_12;
            *hlds__error_msg_inst__STATE_VARIABLE_Expansions_47 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46;
          }
        else
          switch (MR_tag((MR_Word) hlds__error_msg_inst__InstName_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__error_msg_inst__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_9, (MR_Integer) 0)));
                MR_Word hlds__error_msg_inst__ArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_9, (MR_Integer) 1)));
                MR_Word hlds__error_msg_inst__ModuleInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                MR_String hlds__error_msg_inst__SymNameStr_19;
                MR_Word hlds__error_msg_inst__NamePieces_20;
                MR_Word hlds__error_msg_inst__NamedNamePieces_21;
                MR_Word hlds__error_msg_inst__ExpandInsts_22;
                MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_70_70;
                MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_74_74;
                MR_Word hlds__error_msg_inst__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                MR_Word hlds__error_msg_inst__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                MR_Word hlds__error_msg_inst__V_103_103;
                MR_Word hlds__error_msg_inst__V_104_104;

                if (((MR_tag((MR_Word) hlds__error_msg_inst__SymName_13)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word hlds__error_msg_inst__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_13, (MR_Integer) 0)));
                    MR_String hlds__error_msg_inst__BaseName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_13, (MR_Integer) 1)));
                    MR_Word hlds__error_msg_inst__CurModuleName_18;

                    {
                      hlds__hlds_module__module_info_get_name_2_p_0(hlds__error_msg_inst__ModuleInfo_15, &hlds__error_msg_inst__CurModuleName_18);
                    }
                    {
                      hlds__error_msg_inst__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__error_msg_inst__ModuleName_16, hlds__error_msg_inst__CurModuleName_18);
                    }
                    if (hlds__error_msg_inst__succeeded)
                      hlds__error_msg_inst__SymNameStr_19 = hlds__error_msg_inst__BaseName_17;
                    else
                      {
                        hlds__error_msg_inst__SymNameStr_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__error_msg_inst__SymName_13);
                      }
                  }
                else
                  hlds__error_msg_inst__SymNameStr_19 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__SymName_13, (MR_Integer) 0)));
                {
                  hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_70_70, hlds__error_msg_inst__SymNameStr_19, hlds__error_msg_inst__ArgInsts_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__NamePieces_20);
                }
                {
                  hlds__error_msg_inst__NamedNamePieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__error_msg_inst__NamedNamePieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[20])));
                  MR_hl_field(MR_mktag(1), hlds__error_msg_inst__NamedNamePieces_21, 1) = ((MR_Box) (hlds__error_msg_inst__NamePieces_20));
                }
                {
                  hlds__error_msg_inst__record_user_inst_name_4_p_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__NamedNamePieces_21, hlds__error_msg_inst__STATE_VARIABLE_Expansions_70_70, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_74_74);
                }
                hlds__error_msg_inst__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                hlds__error_msg_inst__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                hlds__error_msg_inst__ExpandInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                switch (hlds__error_msg_inst__ExpandInsts_22) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__NamePieces_20, hlds__error_msg_inst__Suffix_10);
                      }
                      *hlds__error_msg_inst__STATE_VARIABLE_Expansions_47 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_74_74;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__error_msg_inst__EqvInst_23;

                      {
                        check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_15, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__EqvInst_23);
                      }
                      if (((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_23, (MR_Integer) 0)))) == (MR_Integer) 5))))
                        {
                          MR_Word hlds__error_msg_inst__TypeInfo_488_488;
                          MR_Word hlds__error_msg_inst__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_23, (MR_Integer) 1)));
                          MR_Word hlds__error_msg_inst__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_23, (MR_Integer) 2)));

                          {
                            hlds__error_msg_inst__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__error_msg_inst__SymName_13, hlds__error_msg_inst__V_112_112);
                          }
                          if (hlds__error_msg_inst__succeeded)
                            {
                              hlds__error_msg_inst__TypeInfo_488_488 = (MR_Word) &hlds__error_msg_inst_scalar_common_1[7];
                              {
                                hlds__error_msg_inst__succeeded = mercury__builtin__unify_2_p_0(hlds__error_msg_inst__TypeInfo_488_488, ((MR_Box) (hlds__error_msg_inst__ArgInsts_14)), ((MR_Box) (hlds__error_msg_inst__V_113_113)));
                              }
                            }
                        }
                      else
                      if (((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_23, (MR_Integer) 0)))) == (MR_Integer) 4))))
                        {
                          MR_Word hlds__error_msg_inst__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_23, (MR_Integer) 1)));

                          {
                            hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__V_111_111);
                          }
                        }
                      else
                        hlds__error_msg_inst__succeeded = MR_FALSE;
                      if (hlds__error_msg_inst__succeeded)
                        {
                          {
                            *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__NamedNamePieces_21, hlds__error_msg_inst__Suffix_10);
                          }
                          *hlds__error_msg_inst__STATE_VARIABLE_Expansions_47 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_74_74;
                        }
                      else
                        {
                          MR_Word hlds__error_msg_inst__TypeCtorInfo_109_109;
                          MR_Word hlds__error_msg_inst__EqvPieces_24;
                          MR_Word hlds__error_msg_inst__V_76_76;
                          MR_Word hlds__error_msg_inst__V_77_77;
                          MR_Word hlds__error_msg_inst__V_80_80;
                          MR_Word hlds__error_msg_inst__V_82_82;
                          MR_Word hlds__error_msg_inst__V_85_85;

                          {
                            hlds__error_msg_inst__inst_to_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_74_74, hlds__error_msg_inst__STATE_VARIABLE_Expansions_47, hlds__error_msg_inst__EqvInst_23, hlds__error_msg_inst__Suffix_10, &hlds__error_msg_inst__EqvPieces_24);
                          }
                          hlds__error_msg_inst__TypeCtorInfo_109_109 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                          {
                            hlds__error_msg_inst__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_85_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[13])));
                            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_85_85, 1) = ((MR_Box) (hlds__error_msg_inst__EqvPieces_24));
                          }
                          {
                            hlds__error_msg_inst__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[18])));
                            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_82_82, 1) = ((MR_Box) (hlds__error_msg_inst__V_85_85));
                          }
                          {
                            hlds__error_msg_inst__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_80_80, 1) = ((MR_Box) (hlds__error_msg_inst__V_82_82));
                          }
                          {
                            hlds__error_msg_inst__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                            MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_77_77, 1) = ((MR_Box) (hlds__error_msg_inst__V_80_80));
                          }
                          {
                            hlds__error_msg_inst__V_76_76 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_109_109, hlds__error_msg_inst__V_77_77, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19]));
                          }
                          {
                            *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_109_109, hlds__error_msg_inst__NamedNamePieces_21, hlds__error_msg_inst__V_76_76);
                          }
                        }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__error_msg_inst__ModuleInfo_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                MR_Word hlds__error_msg_inst__EqvInst_475;
                MR_Word hlds__error_msg_inst__V_407_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                MR_Word hlds__error_msg_inst__V_408_408 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                MR_Word hlds__error_msg_inst__V_409_409;

                {
                  check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_474, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__EqvInst_475);
                }
                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_475)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_475, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__V_409_409 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_475, (MR_Integer) 1)));
                    {
                      hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__V_409_409);
                    }
                  }
                if (hlds__error_msg_inst__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__error_msg_inst__Pieces_11 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[11])));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                    }
                    *hlds__error_msg_inst__STATE_VARIABLE_Expansions_47 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46;
                  }
                else
                  {
                    MR_Word hlds__error_msg_inst__TypeCtorInfo_110_430;
                    MR_Word hlds__error_msg_inst__InstNumPieces_411;
                    MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_412;
                    MR_Word hlds__error_msg_inst__V_413_413;
                    MR_Word hlds__error_msg_inst__V_414_414;
                    MR_Word hlds__error_msg_inst__V_417_417;
                    MR_Word hlds__error_msg_inst__V_419_419;
                    MR_Word hlds__error_msg_inst__V_422_422;
                    MR_Word hlds__error_msg_inst__EqvPieces_429;

                    {
                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(hlds__error_msg_inst__InstName_9, (MR_String) "\044unify_inst", &hlds__error_msg_inst__InstNumPieces_411, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_412);
                    }
                    {
                      hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_412, hlds__error_msg_inst__STATE_VARIABLE_Expansions_47, hlds__error_msg_inst__EqvInst_475, hlds__error_msg_inst__Suffix_10, &hlds__error_msg_inst__EqvPieces_429);
                    }
                    hlds__error_msg_inst__TypeCtorInfo_110_430 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                    {
                      hlds__error_msg_inst__V_422_422 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_422_422, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[13])));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_422_422, 1) = ((MR_Box) (hlds__error_msg_inst__EqvPieces_429));
                    }
                    {
                      hlds__error_msg_inst__V_419_419 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_419_419, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[18])));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_419_419, 1) = ((MR_Box) (hlds__error_msg_inst__V_422_422));
                    }
                    {
                      hlds__error_msg_inst__V_417_417 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_417_417, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_417_417, 1) = ((MR_Box) (hlds__error_msg_inst__V_419_419));
                    }
                    {
                      hlds__error_msg_inst__V_414_414 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_414_414, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_414_414, 1) = ((MR_Box) (hlds__error_msg_inst__V_417_417));
                    }
                    {
                      hlds__error_msg_inst__V_413_413 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_110_430, hlds__error_msg_inst__V_414_414, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19]));
                    }
                    {
                      *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_110_430, hlds__error_msg_inst__InstNumPieces_411, hlds__error_msg_inst__V_413_413);
                    }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__error_msg_inst__ModuleInfo_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                MR_Word hlds__error_msg_inst__EqvInst_256;
                MR_Word hlds__error_msg_inst__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                MR_Word hlds__error_msg_inst__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                MR_Word hlds__error_msg_inst__V_190_190;

                {
                  check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_255, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__EqvInst_256);
                }
                hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_256)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_256, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (hlds__error_msg_inst__succeeded)
                  {
                    hlds__error_msg_inst__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_256, (MR_Integer) 1)));
                    {
                      hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__V_190_190);
                    }
                  }
                if (hlds__error_msg_inst__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__error_msg_inst__Pieces_11 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[8])));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                    }
                    *hlds__error_msg_inst__STATE_VARIABLE_Expansions_47 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46;
                  }
                else
                  {
                    MR_Word hlds__error_msg_inst__TypeCtorInfo_110_211;
                    MR_Word hlds__error_msg_inst__InstNumPieces_192;
                    MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_193;
                    MR_Word hlds__error_msg_inst__V_194_194;
                    MR_Word hlds__error_msg_inst__V_195_195;
                    MR_Word hlds__error_msg_inst__V_198_198;
                    MR_Word hlds__error_msg_inst__V_200_200;
                    MR_Word hlds__error_msg_inst__V_203_203;
                    MR_Word hlds__error_msg_inst__EqvPieces_210;

                    {
                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(hlds__error_msg_inst__InstName_9, (MR_String) "\044merge_inst", &hlds__error_msg_inst__InstNumPieces_192, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_193);
                    }
                    {
                      hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_193, hlds__error_msg_inst__STATE_VARIABLE_Expansions_47, hlds__error_msg_inst__EqvInst_256, hlds__error_msg_inst__Suffix_10, &hlds__error_msg_inst__EqvPieces_210);
                    }
                    hlds__error_msg_inst__TypeCtorInfo_110_211 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                    {
                      hlds__error_msg_inst__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_203_203, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[13])));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_203_203, 1) = ((MR_Box) (hlds__error_msg_inst__EqvPieces_210));
                    }
                    {
                      hlds__error_msg_inst__V_200_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_200_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[18])));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_200_200, 1) = ((MR_Box) (hlds__error_msg_inst__V_203_203));
                    }
                    {
                      hlds__error_msg_inst__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_198_198, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_198_198, 1) = ((MR_Box) (hlds__error_msg_inst__V_200_200));
                    }
                    {
                      hlds__error_msg_inst__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_195_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                      MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_195_195, 1) = ((MR_Box) (hlds__error_msg_inst__V_198_198));
                    }
                    {
                      hlds__error_msg_inst__V_194_194 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_110_211, hlds__error_msg_inst__V_195_195, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19]));
                    }
                    {
                      *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_110_211, hlds__error_msg_inst__InstNumPieces_192, hlds__error_msg_inst__V_194_194);
                    }
                  }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_9, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__error_msg_inst__ModuleInfo_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                    MR_Word hlds__error_msg_inst__EqvInst_183;
                    MR_Word hlds__error_msg_inst__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                    MR_Word hlds__error_msg_inst__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                    MR_Word hlds__error_msg_inst__V_117_117;

                    {
                      check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_182, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__EqvInst_183);
                    }
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_183)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_183, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_183, (MR_Integer) 1)));
                        {
                          hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__V_117_117);
                        }
                      }
                    if (hlds__error_msg_inst__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__error_msg_inst__Pieces_11 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[7])));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                        }
                        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_47 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46;
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__TypeCtorInfo_110_138;
                        MR_Word hlds__error_msg_inst__InstNumPieces_119;
                        MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_120;
                        MR_Word hlds__error_msg_inst__V_121_121;
                        MR_Word hlds__error_msg_inst__V_122_122;
                        MR_Word hlds__error_msg_inst__V_125_125;
                        MR_Word hlds__error_msg_inst__V_127_127;
                        MR_Word hlds__error_msg_inst__V_130_130;
                        MR_Word hlds__error_msg_inst__EqvPieces_137;

                        {
                          hlds__error_msg_inst__record_internal_inst_name_5_p_0(hlds__error_msg_inst__InstName_9, (MR_String) "\044ground_inst", &hlds__error_msg_inst__InstNumPieces_119, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_120);
                        }
                        {
                          hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_120, hlds__error_msg_inst__STATE_VARIABLE_Expansions_47, hlds__error_msg_inst__EqvInst_183, hlds__error_msg_inst__Suffix_10, &hlds__error_msg_inst__EqvPieces_137);
                        }
                        hlds__error_msg_inst__TypeCtorInfo_110_138 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                        {
                          hlds__error_msg_inst__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_130_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[13])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_130_130, 1) = ((MR_Box) (hlds__error_msg_inst__EqvPieces_137));
                        }
                        {
                          hlds__error_msg_inst__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_127_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[18])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_127_127, 1) = ((MR_Box) (hlds__error_msg_inst__V_130_130));
                        }
                        {
                          hlds__error_msg_inst__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_125_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_125_125, 1) = ((MR_Box) (hlds__error_msg_inst__V_127_127));
                        }
                        {
                          hlds__error_msg_inst__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_122_122, 1) = ((MR_Box) (hlds__error_msg_inst__V_125_125));
                        }
                        {
                          hlds__error_msg_inst__V_121_121 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_110_138, hlds__error_msg_inst__V_122_122, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19]));
                        }
                        {
                          *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_110_138, hlds__error_msg_inst__InstNumPieces_119, hlds__error_msg_inst__V_121_121);
                        }
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__error_msg_inst__ModuleInfo_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                    MR_Word hlds__error_msg_inst__EqvInst_99;
                    MR_Word hlds__error_msg_inst__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                    MR_Word hlds__error_msg_inst__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                    MR_Word hlds__error_msg_inst__V_114_114;

                    {
                      check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_98, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__EqvInst_99);
                    }
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_99)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_99, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_99, (MR_Integer) 1)));
                        {
                          hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__V_114_114);
                        }
                      }
                    if (hlds__error_msg_inst__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__error_msg_inst__Pieces_11 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[6])));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                        }
                        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_47 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46;
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__TypeCtorInfo_110_110;
                        MR_Word hlds__error_msg_inst__InstNumPieces_45;
                        MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_49;
                        MR_Word hlds__error_msg_inst__V_51_51;
                        MR_Word hlds__error_msg_inst__V_52_52;
                        MR_Word hlds__error_msg_inst__V_55_55;
                        MR_Word hlds__error_msg_inst__V_57_57;
                        MR_Word hlds__error_msg_inst__V_60_60;
                        MR_Word hlds__error_msg_inst__EqvPieces_96;

                        {
                          hlds__error_msg_inst__record_internal_inst_name_5_p_0(hlds__error_msg_inst__InstName_9, (MR_String) "\044any_inst", &hlds__error_msg_inst__InstNumPieces_45, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_49);
                        }
                        {
                          hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_49, hlds__error_msg_inst__STATE_VARIABLE_Expansions_47, hlds__error_msg_inst__EqvInst_99, hlds__error_msg_inst__Suffix_10, &hlds__error_msg_inst__EqvPieces_96);
                        }
                        hlds__error_msg_inst__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                        {
                          hlds__error_msg_inst__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[13])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_60_60, 1) = ((MR_Box) (hlds__error_msg_inst__EqvPieces_96));
                        }
                        {
                          hlds__error_msg_inst__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[18])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_57_57, 1) = ((MR_Box) (hlds__error_msg_inst__V_60_60));
                        }
                        {
                          hlds__error_msg_inst__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_55_55, 1) = ((MR_Box) (hlds__error_msg_inst__V_57_57));
                        }
                        {
                          hlds__error_msg_inst__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_52_52, 1) = ((MR_Box) (hlds__error_msg_inst__V_55_55));
                        }
                        {
                          hlds__error_msg_inst__V_51_51 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_110_110, hlds__error_msg_inst__V_52_52, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19]));
                        }
                        {
                          *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_110_110, hlds__error_msg_inst__InstNumPieces_45, hlds__error_msg_inst__V_51_51);
                        }
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__error_msg_inst__ModuleInfo_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                    MR_Word hlds__error_msg_inst__EqvInst_402;
                    MR_Word hlds__error_msg_inst__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                    MR_Word hlds__error_msg_inst__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                    MR_Word hlds__error_msg_inst__V_336_336;

                    {
                      check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_401, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__EqvInst_402);
                    }
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_402)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_402, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_402, (MR_Integer) 1)));
                        {
                          hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__V_336_336);
                        }
                      }
                    if (hlds__error_msg_inst__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__error_msg_inst__Pieces_11 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[10])));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                        }
                        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_47 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46;
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__TypeCtorInfo_110_357;
                        MR_Word hlds__error_msg_inst__InstNumPieces_338;
                        MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_339;
                        MR_Word hlds__error_msg_inst__V_340_340;
                        MR_Word hlds__error_msg_inst__V_341_341;
                        MR_Word hlds__error_msg_inst__V_344_344;
                        MR_Word hlds__error_msg_inst__V_346_346;
                        MR_Word hlds__error_msg_inst__V_349_349;
                        MR_Word hlds__error_msg_inst__EqvPieces_356;

                        {
                          hlds__error_msg_inst__record_internal_inst_name_5_p_0(hlds__error_msg_inst__InstName_9, (MR_String) "\044shared_inst", &hlds__error_msg_inst__InstNumPieces_338, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_339);
                        }
                        {
                          hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_339, hlds__error_msg_inst__STATE_VARIABLE_Expansions_47, hlds__error_msg_inst__EqvInst_402, hlds__error_msg_inst__Suffix_10, &hlds__error_msg_inst__EqvPieces_356);
                        }
                        hlds__error_msg_inst__TypeCtorInfo_110_357 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                        {
                          hlds__error_msg_inst__V_349_349 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_349_349, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[13])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_349_349, 1) = ((MR_Box) (hlds__error_msg_inst__EqvPieces_356));
                        }
                        {
                          hlds__error_msg_inst__V_346_346 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_346_346, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[18])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_346_346, 1) = ((MR_Box) (hlds__error_msg_inst__V_349_349));
                        }
                        {
                          hlds__error_msg_inst__V_344_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_344_344, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_344_344, 1) = ((MR_Box) (hlds__error_msg_inst__V_346_346));
                        }
                        {
                          hlds__error_msg_inst__V_341_341 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_341_341, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_341_341, 1) = ((MR_Box) (hlds__error_msg_inst__V_344_344));
                        }
                        {
                          hlds__error_msg_inst__V_340_340 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_110_357, hlds__error_msg_inst__V_341_341, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19]));
                        }
                        {
                          *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_110_357, hlds__error_msg_inst__InstNumPieces_338, hlds__error_msg_inst__V_340_340);
                        }
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word hlds__error_msg_inst__ModuleInfo_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
                    MR_Word hlds__error_msg_inst__EqvInst_329;
                    MR_Word hlds__error_msg_inst__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
                    MR_Word hlds__error_msg_inst__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
                    MR_Word hlds__error_msg_inst__V_263_263;

                    {
                      check_hlds__mode_util__inst_lookup_3_p_0(hlds__error_msg_inst__ModuleInfo_328, hlds__error_msg_inst__InstName_9, &hlds__error_msg_inst__EqvInst_329);
                    }
                    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__EqvInst_329)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_329, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (hlds__error_msg_inst__succeeded)
                      {
                        hlds__error_msg_inst__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_329, (MR_Integer) 1)));
                        {
                          hlds__error_msg_inst__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(hlds__error_msg_inst__InstName_9, hlds__error_msg_inst__V_263_263);
                        }
                      }
                    if (hlds__error_msg_inst__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__error_msg_inst__Pieces_11 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[9])));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                        }
                        *hlds__error_msg_inst__STATE_VARIABLE_Expansions_47 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46;
                      }
                    else
                      {
                        MR_Word hlds__error_msg_inst__TypeCtorInfo_110_284;
                        MR_Word hlds__error_msg_inst__InstNumPieces_265;
                        MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_266;
                        MR_Word hlds__error_msg_inst__V_267_267;
                        MR_Word hlds__error_msg_inst__V_268_268;
                        MR_Word hlds__error_msg_inst__V_271_271;
                        MR_Word hlds__error_msg_inst__V_273_273;
                        MR_Word hlds__error_msg_inst__V_276_276;
                        MR_Word hlds__error_msg_inst__EqvPieces_283;

                        {
                          hlds__error_msg_inst__record_internal_inst_name_5_p_0(hlds__error_msg_inst__InstName_9, (MR_String) "\044mostly_uniq_inst", &hlds__error_msg_inst__InstNumPieces_265, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_266);
                        }
                        {
                          hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_49_266, hlds__error_msg_inst__STATE_VARIABLE_Expansions_47, hlds__error_msg_inst__EqvInst_329, hlds__error_msg_inst__Suffix_10, &hlds__error_msg_inst__EqvPieces_283);
                        }
                        hlds__error_msg_inst__TypeCtorInfo_110_284 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                        {
                          hlds__error_msg_inst__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_276_276, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[13])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_276_276, 1) = ((MR_Box) (hlds__error_msg_inst__EqvPieces_283));
                        }
                        {
                          hlds__error_msg_inst__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_273_273, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[18])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_273_273, 1) = ((MR_Box) (hlds__error_msg_inst__V_276_276));
                        }
                        {
                          hlds__error_msg_inst__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_271_271, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_271_271, 1) = ((MR_Box) (hlds__error_msg_inst__V_273_273));
                        }
                        {
                          hlds__error_msg_inst__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_268_268, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[16])));
                          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_268_268, 1) = ((MR_Box) (hlds__error_msg_inst__V_271_271));
                        }
                        {
                          hlds__error_msg_inst__V_267_267 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_110_284, hlds__error_msg_inst__V_268_268, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[19]));
                        }
                        {
                          *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__error_msg_inst__TypeCtorInfo_110_284, hlds__error_msg_inst__InstNumPieces_265, hlds__error_msg_inst__V_267_267);
                        }
                      }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word hlds__error_msg_inst__Uniq_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_9, (MR_Integer) 1)));
                    MR_Word hlds__error_msg_inst__EqvInst_94;
                    MR_Word hlds__error_msg_inst___Type_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_9, (MR_Integer) 2)));

                    {
                      hlds__error_msg_inst__EqvInst_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_94, 1) = ((MR_Box) (hlds__error_msg_inst__Uniq_27));
                      MR_hl_field(MR_mktag(3), hlds__error_msg_inst__EqvInst_94, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__error_msg_inst__inst_to_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_46, hlds__error_msg_inst__STATE_VARIABLE_Expansions_47, hlds__error_msg_inst__EqvInst_94, hlds__error_msg_inst__Suffix_10, hlds__error_msg_inst__Pieces_11);
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word hlds__error_msg_inst__SubInstName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_9, (MR_Integer) 2)));
                    MR_Word hlds__error_msg_inst___Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InstName_9, (MR_Integer) 1)));

                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__error_msg_inst__InstName__tmp_copy_9 = hlds__error_msg_inst__SubInstName_26;

                      hlds__error_msg_inst__InstName_9 = hlds__error_msg_inst__InstName__tmp_copy_9;
                    }
                    continue;
                  }
                  break;
              }
              break;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__error_msg_inst__bound_insts_to_inline_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_27,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_28,
  MR_Word hlds__error_msg_inst__HeadBoundInst_10,
  MR_Word hlds__error_msg_inst__TailBoundInsts_11,
  MR_Word hlds__error_msg_inst__Suffix_12,
  MR_Word * hlds__error_msg_inst__Pieces_13)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__HeadSuffix_14;
    MR_Word hlds__error_msg_inst__ConsId0_18;
    MR_Word hlds__error_msg_inst__ArgInsts_19;
    MR_Word hlds__error_msg_inst__ConsId_25;
    MR_String hlds__error_msg_inst__ConsIdStr_26;
    MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_29_29;
    MR_Integer hlds__error_msg_inst__Arity_21;
    MR_Word hlds__error_msg_inst__TypeCtor_22;
    MR_String hlds__error_msg_inst__BaseName_24;
    MR_Word hlds__error_msg_inst__SymName_20;
    MR_Word hlds__error_msg_inst___ModuleName_23;
    MR_Box hlds__error_msg_inst__conv0_ConsIdStr_26;

    if ((hlds__error_msg_inst__TailBoundInsts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__error_msg_inst__HeadSuffix_14 = hlds__error_msg_inst__Suffix_12;
        hlds__error_msg_inst__STATE_VARIABLE_Expansions_29_29 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_27;
      }
    else
      {
        MR_Word hlds__error_msg_inst__HeadTailBoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailBoundInsts_11, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailTailBoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailBoundInsts_11, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__TailPieces_17;

        {
          hlds__error_msg_inst__bound_insts_to_inline_pieces_7_p_0(hlds__error_msg_inst__Info_8, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_27, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_29_29, hlds__error_msg_inst__HeadTailBoundInst_15, hlds__error_msg_inst__TailTailBoundInsts_16, hlds__error_msg_inst__Suffix_12, &hlds__error_msg_inst__TailPieces_17);
        }
        {
          hlds__error_msg_inst__HeadSuffix_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadSuffix_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[5])));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadSuffix_14, 1) = ((MR_Box) (hlds__error_msg_inst__TailPieces_17));
        }
      }
    hlds__error_msg_inst__ConsId0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadBoundInst_10, (MR_Integer) 0)));
    hlds__error_msg_inst__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadBoundInst_10, (MR_Integer) 1)));
    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (hlds__error_msg_inst__succeeded)
      {
        hlds__error_msg_inst__SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_18, (MR_Integer) 1)));
        hlds__error_msg_inst__Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_18, (MR_Integer) 2)));
        hlds__error_msg_inst__TypeCtor_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_18, (MR_Integer) 3)));
        hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__SymName_20)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst___ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_20, (MR_Integer) 0)));
            hlds__error_msg_inst__BaseName_24 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_20, (MR_Integer) 1)));
          }
      }
    if (hlds__error_msg_inst__succeeded)
      {
        MR_Word hlds__error_msg_inst__V_32_32;

        {
          hlds__error_msg_inst__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_32_32, 0) = ((MR_Box) (hlds__error_msg_inst__BaseName_24));
        }
        {
          hlds__error_msg_inst__ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_25, 1) = ((MR_Box) (hlds__error_msg_inst__V_32_32));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_25, 2) = ((MR_Box) (hlds__error_msg_inst__Arity_21));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_25, 3) = ((MR_Box) (hlds__error_msg_inst__TypeCtor_22));
        }
      }
    else
      hlds__error_msg_inst__ConsId_25 = hlds__error_msg_inst__ConsId0_18;
    {
      parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], (MR_Integer) 1, hlds__error_msg_inst__ConsId_25, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_ConsIdStr_26);
    }
    hlds__error_msg_inst__ConsIdStr_26 = ((MR_String) hlds__error_msg_inst__conv0_ConsIdStr_26);
    {
      hlds__error_msg_inst__name_and_arg_insts_to_inline_pieces_7_p_0(hlds__error_msg_inst__Info_8, hlds__error_msg_inst__STATE_VARIABLE_Expansions_29_29, hlds__error_msg_inst__STATE_VARIABLE_Expansions_28, hlds__error_msg_inst__ConsIdStr_26, hlds__error_msg_inst__ArgInsts_19, hlds__error_msg_inst__HeadSuffix_14, hlds__error_msg_inst__Pieces_13);
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_27,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_28,
  MR_Word hlds__error_msg_inst__HeadBoundInst_10,
  MR_Word hlds__error_msg_inst__TailBoundInsts_11,
  MR_Word hlds__error_msg_inst__Suffix_12,
  MR_Word * hlds__error_msg_inst__Pieces_13)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__HeadSuffix_14;
    MR_Word hlds__error_msg_inst__ConsId0_18;
    MR_Word hlds__error_msg_inst__ArgInsts_19;
    MR_Word hlds__error_msg_inst__ConsId_25;
    MR_String hlds__error_msg_inst__ConsIdStr_26;
    MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_29_29;
    MR_Integer hlds__error_msg_inst__Arity_21;
    MR_Word hlds__error_msg_inst__TypeCtor_22;
    MR_String hlds__error_msg_inst__BaseName_24;
    MR_Word hlds__error_msg_inst__SymName_20;
    MR_Word hlds__error_msg_inst___ModuleName_23;
    MR_Box hlds__error_msg_inst__conv0_ConsIdStr_26;

    if ((hlds__error_msg_inst__TailBoundInsts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__error_msg_inst__HeadSuffix_14 = hlds__error_msg_inst__Suffix_12;
        hlds__error_msg_inst__STATE_VARIABLE_Expansions_29_29 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_27;
      }
    else
      {
        MR_Word hlds__error_msg_inst__HeadTailBoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailBoundInsts_11, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailTailBoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailBoundInsts_11, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__TailPieces_17;
        MR_Word hlds__error_msg_inst__V_32_32;
        MR_Word hlds__error_msg_inst__V_35_35;

        {
          hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(hlds__error_msg_inst__Info_8, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_27, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_29_29, hlds__error_msg_inst__HeadTailBoundInst_15, hlds__error_msg_inst__TailTailBoundInsts_16, hlds__error_msg_inst__Suffix_12, &hlds__error_msg_inst__TailPieces_17);
        }
        {
          hlds__error_msg_inst__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[13])));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_35_35, 1) = ((MR_Box) (hlds__error_msg_inst__TailPieces_17));
        }
        {
          hlds__error_msg_inst__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[5])));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_32_32, 1) = ((MR_Box) (hlds__error_msg_inst__V_35_35));
        }
        {
          hlds__error_msg_inst__HeadSuffix_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadSuffix_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[14])));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__HeadSuffix_14, 1) = ((MR_Box) (hlds__error_msg_inst__V_32_32));
        }
      }
    hlds__error_msg_inst__ConsId0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadBoundInst_10, (MR_Integer) 0)));
    hlds__error_msg_inst__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__HeadBoundInst_10, (MR_Integer) 1)));
    hlds__error_msg_inst__succeeded = ((((MR_tag((MR_Word) hlds__error_msg_inst__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (hlds__error_msg_inst__succeeded)
      {
        hlds__error_msg_inst__SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_18, (MR_Integer) 1)));
        hlds__error_msg_inst__Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_18, (MR_Integer) 2)));
        hlds__error_msg_inst__TypeCtor_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId0_18, (MR_Integer) 3)));
        hlds__error_msg_inst__succeeded = ((MR_tag((MR_Word) hlds__error_msg_inst__SymName_20)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__error_msg_inst__succeeded)
          {
            hlds__error_msg_inst___ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_20, (MR_Integer) 0)));
            hlds__error_msg_inst__BaseName_24 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__SymName_20, (MR_Integer) 1)));
          }
      }
    if (hlds__error_msg_inst__succeeded)
      {
        MR_Word hlds__error_msg_inst__V_38_38;

        {
          hlds__error_msg_inst__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__error_msg_inst__V_38_38, 0) = ((MR_Box) (hlds__error_msg_inst__BaseName_24));
        }
        {
          hlds__error_msg_inst__ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_25, 1) = ((MR_Box) (hlds__error_msg_inst__V_38_38));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_25, 2) = ((MR_Box) (hlds__error_msg_inst__Arity_21));
          MR_hl_field(MR_mktag(3), hlds__error_msg_inst__ConsId_25, 3) = ((MR_Box) (hlds__error_msg_inst__TypeCtor_22));
        }
      }
    else
      hlds__error_msg_inst__ConsId_25 = hlds__error_msg_inst__ConsId0_18;
    {
      parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], (MR_Integer) 1, hlds__error_msg_inst__ConsId_25, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_ConsIdStr_26);
    }
    hlds__error_msg_inst__ConsIdStr_26 = ((MR_String) hlds__error_msg_inst__conv0_ConsIdStr_26);
    {
      hlds__error_msg_inst__name_and_arg_insts_to_pieces_7_p_0(hlds__error_msg_inst__Info_8, hlds__error_msg_inst__STATE_VARIABLE_Expansions_29_29, hlds__error_msg_inst__STATE_VARIABLE_Expansions_28, hlds__error_msg_inst__ConsIdStr_26, hlds__error_msg_inst__ArgInsts_19, hlds__error_msg_inst__HeadSuffix_14, hlds__error_msg_inst__Pieces_13);
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_19,
  MR_Word hlds__error_msg_inst__HeadInst_10,
  MR_Word hlds__error_msg_inst__TailInsts_11,
  MR_Word hlds__error_msg_inst__Suffix_12,
  MR_Word * hlds__error_msg_inst__Pieces_13)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__HeadSuffix_14;
    MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_20_20;

    if ((hlds__error_msg_inst__TailInsts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__error_msg_inst__HeadSuffix_14 = hlds__error_msg_inst__Suffix_12;
        hlds__error_msg_inst__STATE_VARIABLE_Expansions_20_20 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18;
      }
    else
      {
        MR_Word hlds__error_msg_inst__HeadTailInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailInsts_11, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailTailInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailInsts_11, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__TailPieces_17;

        {
          hlds__error_msg_inst__insts_to_inline_pieces_7_p_0(hlds__error_msg_inst__Info_8, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_20_20, hlds__error_msg_inst__HeadTailInst_15, hlds__error_msg_inst__TailTailInsts_16, hlds__error_msg_inst__Suffix_12, &hlds__error_msg_inst__TailPieces_17);
        }
        {
          hlds__error_msg_inst__HeadSuffix_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[17]), hlds__error_msg_inst__TailPieces_17);
        }
      }
    {
      hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_8, hlds__error_msg_inst__STATE_VARIABLE_Expansions_20_20, hlds__error_msg_inst__STATE_VARIABLE_Expansions_19, hlds__error_msg_inst__HeadInst_10, hlds__error_msg_inst__HeadSuffix_14, hlds__error_msg_inst__Pieces_13);
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__insts_to_pieces_7_p_0(
  MR_Word hlds__error_msg_inst__Info_8,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_19,
  MR_Word hlds__error_msg_inst__HeadInst_10,
  MR_Word hlds__error_msg_inst__TailInsts_11,
  MR_Word hlds__error_msg_inst__Suffix_12,
  MR_Word * hlds__error_msg_inst__Pieces_13)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__HeadSuffix_14;
    MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_20_20;

    if ((hlds__error_msg_inst__TailInsts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__error_msg_inst__HeadSuffix_14 = hlds__error_msg_inst__Suffix_12;
        hlds__error_msg_inst__STATE_VARIABLE_Expansions_20_20 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18;
      }
    else
      {
        MR_Word hlds__error_msg_inst__HeadTailInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailInsts_11, (MR_Integer) 0)));
        MR_Word hlds__error_msg_inst__TailTailInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__TailInsts_11, (MR_Integer) 1)));
        MR_Word hlds__error_msg_inst__TailPieces_17;

        {
          hlds__error_msg_inst__insts_to_pieces_7_p_0(hlds__error_msg_inst__Info_8, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_18, &hlds__error_msg_inst__STATE_VARIABLE_Expansions_20_20, hlds__error_msg_inst__HeadTailInst_15, hlds__error_msg_inst__TailTailInsts_16, hlds__error_msg_inst__Suffix_12, &hlds__error_msg_inst__TailPieces_17);
        }
        {
          hlds__error_msg_inst__HeadSuffix_14 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &hlds__error_msg_inst_scalar_common_1[6]), hlds__error_msg_inst__TailPieces_17);
        }
      }
    {
      hlds__error_msg_inst__inst_to_pieces_6_p_0(hlds__error_msg_inst__Info_8, hlds__error_msg_inst__STATE_VARIABLE_Expansions_20_20, hlds__error_msg_inst__STATE_VARIABLE_Expansions_19, hlds__error_msg_inst__HeadInst_10, hlds__error_msg_inst__HeadSuffix_14, hlds__error_msg_inst__Pieces_13);
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_34,
  MR_Word hlds__error_msg_inst__Inst_9,
  MR_Word hlds__error_msg_inst__Suffix_10,
  MR_Word * hlds__error_msg_inst__Pieces_11)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    switch (MR_tag((MR_Word) hlds__error_msg_inst__Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__error_msg_inst__Inst_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__error_msg_inst__Pieces_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[3])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
              }
              *hlds__error_msg_inst__STATE_VARIABLE_Expansions_34 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__error_msg_inst__Pieces_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[4])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
              }
              *hlds__error_msg_inst__STATE_VARIABLE_Expansions_34 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__error_msg_inst__Pieces_11 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[3])));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
          }
          *hlds__error_msg_inst__STATE_VARIABLE_Expansions_34 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__error_msg_inst__Uniq_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__Inst_9, (MR_Integer) 0)));
          MR_Word hlds__error_msg_inst__HOInstInfo_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__Inst_9, (MR_Integer) 1)));

          if ((hlds__error_msg_inst__HOInstInfo_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word hlds__error_msg_inst__V_57_57;
              MR_String hlds__error_msg_inst__Str_82;
              MR_Box hlds__error_msg_inst__conv0_Str_82;

              {
                parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__Uniq_86, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_Str_82);
              }
              hlds__error_msg_inst__Str_82 = ((MR_String) hlds__error_msg_inst__conv0_Str_82);
              {
                hlds__error_msg_inst__V_57_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_57_57, 0) = ((MR_Box) (hlds__error_msg_inst__Str_82));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__error_msg_inst__Pieces_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_57_57));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
              }
              *hlds__error_msg_inst__STATE_VARIABLE_Expansions_34 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33;
            }
          else
            {
              MR_Word hlds__error_msg_inst__PredInstInfo_80 = (MR_Word) MR_body(((MR_Word) hlds__error_msg_inst__HOInstInfo_87), (MR_Integer) 1);
              MR_Word hlds__error_msg_inst__HOPieces_81;

              {
                hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33, hlds__error_msg_inst__STATE_VARIABLE_Expansions_34, (MR_String) "any_", hlds__error_msg_inst__Uniq_86, hlds__error_msg_inst__PredInstInfo_80, &hlds__error_msg_inst__HOPieces_81);
              }
              {
                *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__HOPieces_81, hlds__error_msg_inst__Suffix_10);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__error_msg_inst__Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 3)));
              MR_String hlds__error_msg_inst__BoundName_16;
              MR_Word hlds__error_msg_inst__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 2)));
              MR_Box hlds__error_msg_inst__conv1_BoundName_16;

              {
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__Uniq_13, (MR_String) "bound", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv1_BoundName_16);
              }
              hlds__error_msg_inst__BoundName_16 = ((MR_String) hlds__error_msg_inst__conv1_BoundName_16);
              if ((hlds__error_msg_inst__BoundInsts_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word hlds__error_msg_inst__V_76_76;

                  {
                    hlds__error_msg_inst__V_76_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_76_76, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_16));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__error_msg_inst__Pieces_11 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_76_76));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                  }
                  *hlds__error_msg_inst__STATE_VARIABLE_Expansions_34 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33;
                }
              else
                {
                  MR_Word hlds__error_msg_inst__HeadBoundInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__BoundInsts_15, (MR_Integer) 0)));
                  MR_Word hlds__error_msg_inst__TailBoundInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__BoundInsts_15, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__BoundPieces_19;
                  MR_Word hlds__error_msg_inst__V_69_69;
                  MR_Word hlds__error_msg_inst__V_70_70;
                  MR_String hlds__error_msg_inst__V_71_71;
                  MR_Word hlds__error_msg_inst__V_73_73;

                  {
                    hlds__error_msg_inst__bound_insts_to_inline_pieces_7_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33, hlds__error_msg_inst__STATE_VARIABLE_Expansions_34, hlds__error_msg_inst__HeadBoundInst_17, hlds__error_msg_inst__TailBoundInsts_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__BoundPieces_19);
                  }
                  {
                    hlds__error_msg_inst__V_71_71 = mercury__string__f_43_43_2_f_0(hlds__error_msg_inst__BoundName_16, (MR_String) "(");
                  }
                  {
                    hlds__error_msg_inst__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_70_70, 1) = ((MR_Box) (hlds__error_msg_inst__V_71_71));
                  }
                  {
                    hlds__error_msg_inst__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_69_69, 0) = ((MR_Box) (hlds__error_msg_inst__V_70_70));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_69_69, 1) = ((MR_Box) (hlds__error_msg_inst__BoundPieces_19));
                  }
                  {
                    hlds__error_msg_inst__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_73_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[15])));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_73_73, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                  }
                  {
                    *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_69_69, hlds__error_msg_inst__V_73_73);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__error_msg_inst__HOInstInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 2)));
              MR_Word hlds__error_msg_inst__Uniq_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 1)));

              if ((hlds__error_msg_inst__HOInstInfo_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_String hlds__error_msg_inst__Str_23;
                  MR_Word hlds__error_msg_inst__V_62_62;
                  MR_Box hlds__error_msg_inst__conv3_Str_23;

                  {
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__Uniq_79, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv3_Str_23);
                  }
                  hlds__error_msg_inst__Str_23 = ((MR_String) hlds__error_msg_inst__conv3_Str_23);
                  {
                    hlds__error_msg_inst__V_62_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_62_62, 0) = ((MR_Box) (hlds__error_msg_inst__Str_23));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__error_msg_inst__Pieces_11 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_62_62));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                  }
                  *hlds__error_msg_inst__STATE_VARIABLE_Expansions_34 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33;
                }
              else
                {
                  MR_Word hlds__error_msg_inst__PredInstInfo_21 = (MR_Word) MR_body(((MR_Word) hlds__error_msg_inst__HOInstInfo_20), (MR_Integer) 1);
                  MR_Word hlds__error_msg_inst__HOPieces_22;

                  {
                    hlds__error_msg_inst__pred_inst_info_to_inline_pieces_7_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33, hlds__error_msg_inst__STATE_VARIABLE_Expansions_34, (MR_String) "", hlds__error_msg_inst__Uniq_79, hlds__error_msg_inst__PredInstInfo_21, &hlds__error_msg_inst__HOPieces_22);
                  }
                  {
                    *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__HOPieces_22, hlds__error_msg_inst__Suffix_10);
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__error_msg_inst__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__InstVarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
              MR_String hlds__error_msg_inst__Name_26;
              MR_Word hlds__error_msg_inst__V_55_55;
              MR_Word hlds__error_msg_inst__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
              MR_Word hlds__error_msg_inst__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
              MR_Box hlds__error_msg_inst__conv4_Name_26;

              {
                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__InstVarSet_25, (MR_Integer) 0, hlds__error_msg_inst__Var_24, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv4_Name_26);
              }
              hlds__error_msg_inst__Name_26 = ((MR_String) hlds__error_msg_inst__conv4_Name_26);
              {
                hlds__error_msg_inst__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_55_55, 0) = ((MR_Box) (hlds__error_msg_inst__Name_26));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__error_msg_inst__Pieces_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_55_55));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
              }
              *hlds__error_msg_inst__STATE_VARIABLE_Expansions_34 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__error_msg_inst__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__ConstrainedInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 2)));
              MR_String hlds__error_msg_inst__Names_29;
              MR_Word hlds__error_msg_inst__InstPieces_30;
              MR_Word hlds__error_msg_inst__V_40_40;
              MR_Word hlds__error_msg_inst__V_43_43;
              MR_Word hlds__error_msg_inst__V_48_48;
              MR_Word hlds__error_msg_inst__V_49_49;
              MR_Word hlds__error_msg_inst__V_50_50;
              MR_Word hlds__error_msg_inst__InstVarSet_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
              MR_Word hlds__error_msg_inst__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
              MR_Box hlds__error_msg_inst__conv2_Names_29;

              {
                hlds__error_msg_inst__V_40_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[2], hlds__error_msg_inst__Vars_27);
              }
              {
                parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__InstVarSet_91, (MR_Integer) 0, hlds__error_msg_inst__V_40_40, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv2_Names_29);
              }
              hlds__error_msg_inst__Names_29 = ((MR_String) hlds__error_msg_inst__conv2_Names_29);
              {
                hlds__error_msg_inst__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[0])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_43_43, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
              }
              {
                hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33, hlds__error_msg_inst__STATE_VARIABLE_Expansions_34, hlds__error_msg_inst__ConstrainedInst_28, hlds__error_msg_inst__V_43_43, &hlds__error_msg_inst__InstPieces_30);
              }
              {
                hlds__error_msg_inst__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_49_49, 1) = ((MR_Box) (hlds__error_msg_inst__Names_29));
              }
              {
                hlds__error_msg_inst__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[2])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_50_50, 1) = ((MR_Box) (hlds__error_msg_inst__InstPieces_30));
              }
              {
                hlds__error_msg_inst__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_48_48, 0) = ((MR_Box) (hlds__error_msg_inst__V_49_49));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_48_48, 1) = ((MR_Box) (hlds__error_msg_inst__V_50_50));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__error_msg_inst__Pieces_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[1])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__V_48_48));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__error_msg_inst__InstName_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 1)));

              {
                hlds__error_msg_inst__inst_name_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33, hlds__error_msg_inst__STATE_VARIABLE_Expansions_34, hlds__error_msg_inst__InstName_93, hlds__error_msg_inst__Suffix_10, hlds__error_msg_inst__Pieces_11);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__error_msg_inst__ArgInsts_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 2)));
              MR_Word hlds__error_msg_inst__InstName_32;
              MR_Word hlds__error_msg_inst__Name_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 1)));

              {
                hlds__error_msg_inst__InstName_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_32, 0) = ((MR_Box) (hlds__error_msg_inst__Name_92));
                MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_32, 1) = ((MR_Box) (hlds__error_msg_inst__ArgInsts_31));
              }
              {
                hlds__error_msg_inst__inst_name_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33, hlds__error_msg_inst__STATE_VARIABLE_Expansions_34, hlds__error_msg_inst__InstName_32, hlds__error_msg_inst__Suffix_10, hlds__error_msg_inst__Pieces_11);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__inst_to_pieces_6_p_0(
  MR_Word hlds__error_msg_inst__Info_7,
  MR_Word hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33,
  MR_Word * hlds__error_msg_inst__STATE_VARIABLE_Expansions_34,
  MR_Word hlds__error_msg_inst__Inst_9,
  MR_Word hlds__error_msg_inst__Suffix_10,
  MR_Word * hlds__error_msg_inst__Pieces_11)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;

    switch (MR_tag((MR_Word) hlds__error_msg_inst__Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__error_msg_inst__Inst_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__error_msg_inst__Pieces_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[3])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
              }
              *hlds__error_msg_inst__STATE_VARIABLE_Expansions_34 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__error_msg_inst__Pieces_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[4])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
              }
              *hlds__error_msg_inst__STATE_VARIABLE_Expansions_34 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__error_msg_inst__Pieces_11 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[3])));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
          }
          *hlds__error_msg_inst__STATE_VARIABLE_Expansions_34 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__error_msg_inst__Uniq_93 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__Inst_9, (MR_Integer) 0)));
          MR_Word hlds__error_msg_inst__HOInstInfo_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__error_msg_inst__Inst_9, (MR_Integer) 1)));

          if ((hlds__error_msg_inst__HOInstInfo_94 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word hlds__error_msg_inst__V_57_57;
              MR_String hlds__error_msg_inst__Str_89;
              MR_Box hlds__error_msg_inst__conv0_Str_89;

              {
                parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__Uniq_93, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv0_Str_89);
              }
              hlds__error_msg_inst__Str_89 = ((MR_String) hlds__error_msg_inst__conv0_Str_89);
              {
                hlds__error_msg_inst__V_57_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_57_57, 0) = ((MR_Box) (hlds__error_msg_inst__Str_89));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__error_msg_inst__Pieces_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_57_57));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
              }
              *hlds__error_msg_inst__STATE_VARIABLE_Expansions_34 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33;
            }
          else
            {
              MR_Word hlds__error_msg_inst__PredInstInfo_87 = (MR_Word) MR_body(((MR_Word) hlds__error_msg_inst__HOInstInfo_94), (MR_Integer) 1);
              MR_Word hlds__error_msg_inst__HOPieces_88;

              {
                hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33, hlds__error_msg_inst__STATE_VARIABLE_Expansions_34, (MR_String) "any_", hlds__error_msg_inst__Uniq_93, hlds__error_msg_inst__PredInstInfo_87, &hlds__error_msg_inst__HOPieces_88);
              }
              {
                *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__HOPieces_88, hlds__error_msg_inst__Suffix_10);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__error_msg_inst__Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 3)));
              MR_String hlds__error_msg_inst__BoundName_16;
              MR_Word hlds__error_msg_inst__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 2)));
              MR_Box hlds__error_msg_inst__conv1_BoundName_16;

              {
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__Uniq_13, (MR_String) "bound", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv1_BoundName_16);
              }
              hlds__error_msg_inst__BoundName_16 = ((MR_String) hlds__error_msg_inst__conv1_BoundName_16);
              if ((hlds__error_msg_inst__BoundInsts_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word hlds__error_msg_inst__V_83_83;

                  {
                    hlds__error_msg_inst__V_83_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_83_83, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_16));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__error_msg_inst__Pieces_11 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_83_83));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                  }
                  *hlds__error_msg_inst__STATE_VARIABLE_Expansions_34 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33;
                }
              else
                {
                  MR_Word hlds__error_msg_inst__HeadBoundInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__BoundInsts_15, (MR_Integer) 0)));
                  MR_Word hlds__error_msg_inst__TailBoundInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__error_msg_inst__BoundInsts_15, (MR_Integer) 1)));
                  MR_Word hlds__error_msg_inst__BoundPieces_19;
                  MR_Word hlds__error_msg_inst__V_69_69;
                  MR_Word hlds__error_msg_inst__V_70_70;
                  MR_Word hlds__error_msg_inst__V_71_71;
                  MR_Word hlds__error_msg_inst__V_74_74;
                  MR_Word hlds__error_msg_inst__V_77_77;
                  MR_Word hlds__error_msg_inst__V_80_80;

                  {
                    hlds__error_msg_inst__bound_insts_to_pieces_7_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33, hlds__error_msg_inst__STATE_VARIABLE_Expansions_34, hlds__error_msg_inst__HeadBoundInst_17, hlds__error_msg_inst__TailBoundInsts_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__BoundPieces_19);
                  }
                  {
                    hlds__error_msg_inst__V_70_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_70_70, 0) = ((MR_Box) (hlds__error_msg_inst__BoundName_16));
                  }
                  {
                    hlds__error_msg_inst__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[13])));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_74_74, 1) = ((MR_Box) (hlds__error_msg_inst__BoundPieces_19));
                  }
                  {
                    hlds__error_msg_inst__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[12])));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_71_71, 1) = ((MR_Box) (hlds__error_msg_inst__V_74_74));
                  }
                  {
                    hlds__error_msg_inst__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_69_69, 0) = ((MR_Box) (hlds__error_msg_inst__V_70_70));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_69_69, 1) = ((MR_Box) (hlds__error_msg_inst__V_71_71));
                  }
                  {
                    hlds__error_msg_inst__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[0])));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_80_80, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                  }
                  {
                    hlds__error_msg_inst__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_77_77, 1) = ((MR_Box) (hlds__error_msg_inst__V_80_80));
                  }
                  {
                    *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__V_69_69, hlds__error_msg_inst__V_77_77);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__error_msg_inst__HOInstInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 2)));
              MR_Word hlds__error_msg_inst__Uniq_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 1)));

              if ((hlds__error_msg_inst__HOInstInfo_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_String hlds__error_msg_inst__Str_23;
                  MR_Word hlds__error_msg_inst__V_62_62;
                  MR_Box hlds__error_msg_inst__conv3_Str_23;

                  {
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__Uniq_86, (MR_String) "ground", ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv3_Str_23);
                  }
                  hlds__error_msg_inst__Str_23 = ((MR_String) hlds__error_msg_inst__conv3_Str_23);
                  {
                    hlds__error_msg_inst__V_62_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_62_62, 0) = ((MR_Box) (hlds__error_msg_inst__Str_23));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__error_msg_inst__Pieces_11 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_62_62));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
                  }
                  *hlds__error_msg_inst__STATE_VARIABLE_Expansions_34 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33;
                }
              else
                {
                  MR_Word hlds__error_msg_inst__PredInstInfo_21 = (MR_Word) MR_body(((MR_Word) hlds__error_msg_inst__HOInstInfo_20), (MR_Integer) 1);
                  MR_Word hlds__error_msg_inst__HOPieces_22;

                  {
                    hlds__error_msg_inst__pred_inst_info_to_pieces_7_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33, hlds__error_msg_inst__STATE_VARIABLE_Expansions_34, (MR_String) "", hlds__error_msg_inst__Uniq_86, hlds__error_msg_inst__PredInstInfo_21, &hlds__error_msg_inst__HOPieces_22);
                  }
                  {
                    *hlds__error_msg_inst__Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__HOPieces_22, hlds__error_msg_inst__Suffix_10);
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__error_msg_inst__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__InstVarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
              MR_String hlds__error_msg_inst__Name_26;
              MR_Word hlds__error_msg_inst__V_55_55;
              MR_Word hlds__error_msg_inst__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
              MR_Word hlds__error_msg_inst__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
              MR_Box hlds__error_msg_inst__conv4_Name_26;

              {
                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__InstVarSet_25, (MR_Integer) 0, hlds__error_msg_inst__Var_24, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv4_Name_26);
              }
              hlds__error_msg_inst__Name_26 = ((MR_String) hlds__error_msg_inst__conv4_Name_26);
              {
                hlds__error_msg_inst__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__error_msg_inst__V_55_55, 0) = ((MR_Box) (hlds__error_msg_inst__Name_26));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__error_msg_inst__Pieces_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__error_msg_inst__V_55_55));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
              }
              *hlds__error_msg_inst__STATE_VARIABLE_Expansions_34 = hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__error_msg_inst__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__ConstrainedInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 2)));
              MR_String hlds__error_msg_inst__Names_29;
              MR_Word hlds__error_msg_inst__InstPieces_30;
              MR_Word hlds__error_msg_inst__V_40_40;
              MR_Word hlds__error_msg_inst__V_43_43;
              MR_Word hlds__error_msg_inst__V_48_48;
              MR_Word hlds__error_msg_inst__V_49_49;
              MR_Word hlds__error_msg_inst__V_50_50;
              MR_Word hlds__error_msg_inst__InstVarSet_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 1)));
              MR_Word hlds__error_msg_inst__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 0)));
              MR_Word hlds__error_msg_inst__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_7, (MR_Integer) 2)));
              MR_Box hlds__error_msg_inst__conv2_Names_29;

              {
                hlds__error_msg_inst__V_40_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) &hlds__error_msg_inst_scalar_common_1[2], hlds__error_msg_inst__Vars_27);
              }
              {
                parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[1], hlds__error_msg_inst__InstVarSet_98, (MR_Integer) 0, hlds__error_msg_inst__V_40_40, ((MR_Box) ((MR_String) "")), &hlds__error_msg_inst__conv2_Names_29);
              }
              hlds__error_msg_inst__Names_29 = ((MR_String) hlds__error_msg_inst__conv2_Names_29);
              {
                hlds__error_msg_inst__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[0])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_43_43, 1) = ((MR_Box) (hlds__error_msg_inst__Suffix_10));
              }
              {
                hlds__error_msg_inst__inst_to_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33, hlds__error_msg_inst__STATE_VARIABLE_Expansions_34, hlds__error_msg_inst__ConstrainedInst_28, hlds__error_msg_inst__V_43_43, &hlds__error_msg_inst__InstPieces_30);
              }
              {
                hlds__error_msg_inst__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), hlds__error_msg_inst__V_49_49, 1) = ((MR_Box) (hlds__error_msg_inst__Names_29));
              }
              {
                hlds__error_msg_inst__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[2])));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_50_50, 1) = ((MR_Box) (hlds__error_msg_inst__InstPieces_30));
              }
              {
                hlds__error_msg_inst__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_48_48, 0) = ((MR_Box) (hlds__error_msg_inst__V_49_49));
                MR_hl_field(MR_mktag(1), hlds__error_msg_inst__V_48_48, 1) = ((MR_Box) (hlds__error_msg_inst__V_50_50));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__error_msg_inst__Pieces_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__error_msg_inst_scalar_common_3[1])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__error_msg_inst__V_48_48));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__error_msg_inst__InstName_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 1)));

              {
                hlds__error_msg_inst__inst_name_to_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33, hlds__error_msg_inst__STATE_VARIABLE_Expansions_34, hlds__error_msg_inst__InstName_100, hlds__error_msg_inst__Suffix_10, hlds__error_msg_inst__Pieces_11);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__error_msg_inst__ArgInsts_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 2)));
              MR_Word hlds__error_msg_inst__InstName_32;
              MR_Word hlds__error_msg_inst__Name_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__error_msg_inst__Inst_9, (MR_Integer) 1)));

              {
                hlds__error_msg_inst__InstName_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_32, 0) = ((MR_Box) (hlds__error_msg_inst__Name_99));
                MR_hl_field(MR_mktag(0), hlds__error_msg_inst__InstName_32, 1) = ((MR_Box) (hlds__error_msg_inst__ArgInsts_31));
              }
              {
                hlds__error_msg_inst__inst_name_to_pieces_6_p_0(hlds__error_msg_inst__Info_7, hlds__error_msg_inst__STATE_VARIABLE_Expansions_0_33, hlds__error_msg_inst__STATE_VARIABLE_Expansions_34, hlds__error_msg_inst__InstName_32, hlds__error_msg_inst__Suffix_10, hlds__error_msg_inst__Pieces_11);
              }
            }
            break;
        }
        break;
    }
  }
}

MR_Word MR_CALL 
hlds__error_msg_inst__error_msg_inst_8_f_0(
  MR_Word hlds__error_msg_inst__ModuleInfo_10,
  MR_Word hlds__error_msg_inst__InstVarSet_11,
  MR_Word hlds__error_msg_inst__ExpandNamedInsts_12,
  MR_Word hlds__error_msg_inst__ShortInstQF_13,
  MR_Word hlds__error_msg_inst__ShortInstSuffix_14,
  MR_Word hlds__error_msg_inst__LongInstPrefix_15,
  MR_Word hlds__error_msg_inst__LongInstSuffix_16,
  MR_Word hlds__error_msg_inst__Inst0_17)
{
  {
    MR_bool hlds__error_msg_inst__succeeded;
    MR_Word hlds__error_msg_inst__Pieces_18;
    MR_Word hlds__error_msg_inst__Info_19;
    MR_Word hlds__error_msg_inst__Inst_20;
    MR_Word hlds__error_msg_inst__Expansions0_21;
    MR_Word hlds__error_msg_inst__InlinePieces_24;
    MR_String hlds__error_msg_inst__InlineStr_25;
    MR_Word hlds__error_msg_inst__V_30_30;
    MR_Word hlds__error_msg_inst__V_31_31;
    MR_Word hlds__error_msg_inst___InlineExpansions_23;
    MR_Integer hlds__error_msg_inst__Len_26;

    {
      hlds__error_msg_inst__Info_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_19, 0) = ((MR_Box) (hlds__error_msg_inst__ModuleInfo_10));
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_19, 1) = ((MR_Box) (hlds__error_msg_inst__InstVarSet_11));
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Info_19, 2) = ((MR_Box) (hlds__error_msg_inst__ExpandNamedInsts_12));
    }
    {
      parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(hlds__error_msg_inst__Inst0_17, &hlds__error_msg_inst__Inst_20);
    }
    {
      hlds__error_msg_inst__V_30_30 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (MR_Word) &hlds__error_msg_inst_scalar_common_1[0]);
    }
    {
      hlds__error_msg_inst__V_31_31 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
    {
      hlds__error_msg_inst__Expansions0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Expansions0_21, 0) = ((MR_Box) (hlds__error_msg_inst__V_30_30));
      MR_hl_field(MR_mktag(0), hlds__error_msg_inst__Expansions0_21, 1) = ((MR_Box) (hlds__error_msg_inst__V_31_31));
    }
    {
      hlds__error_msg_inst__inst_to_inline_pieces_6_p_0(hlds__error_msg_inst__Info_19, hlds__error_msg_inst__Expansions0_21, &hlds__error_msg_inst___InlineExpansions_23, hlds__error_msg_inst__Inst_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__error_msg_inst__InlinePieces_24);
    }
    {
      hlds__error_msg_inst__InlineStr_25 = parse_tree__error_util__error_pieces_to_string_1_f_0(hlds__error_msg_inst__InlinePieces_24);
    }
    {
      mercury__string__length_2_p_0(hlds__error_msg_inst__InlineStr_25, &hlds__error_msg_inst__Len_26);
    }
    hlds__error_msg_inst__succeeded = (hlds__error_msg_inst__Len_26 < (MR_Integer) 40);
    if (hlds__error_msg_inst__succeeded)
      {
        MR_Word hlds__error_msg_inst__InlinePiece_27;

        switch (hlds__error_msg_inst__ShortInstQF_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              hlds__error_msg_inst__InlinePiece_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__error_msg_inst__InlinePiece_27, 0) = ((MR_Box) (hlds__error_msg_inst__InlineStr_25));
            }
            break;
          case (MR_Integer) 0:
            {
              hlds__error_msg_inst__InlinePiece_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InlinePiece_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), hlds__error_msg_inst__InlinePiece_27, 1) = ((MR_Box) (hlds__error_msg_inst__InlineStr_25));
            }
            break;
        }
        {
          hlds__error_msg_inst__Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_18, 0) = ((MR_Box) (hlds__error_msg_inst__InlinePiece_27));
          MR_hl_field(MR_mktag(1), hlds__error_msg_inst__Pieces_18, 1) = ((MR_Box) (hlds__error_msg_inst__ShortInstSuffix_14));
        }
      }
    else
      {
        MR_Word hlds__error_msg_inst__NonInlinePieces_29;
        MR_Word hlds__error_msg_inst___NonInlineExpansions_28;

        {
          hlds__error_msg_inst__inst_to_pieces_6_p_0(hlds__error_msg_inst__Info_19, hlds__error_msg_inst__Expansions0_21, &hlds__error_msg_inst___NonInlineExpansions_28, hlds__error_msg_inst__Inst_20, hlds__error_msg_inst__LongInstSuffix_16, &hlds__error_msg_inst__NonInlinePieces_29);
        }
        {
          hlds__error_msg_inst__Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__error_msg_inst__LongInstPrefix_15, hlds__error_msg_inst__NonInlinePieces_29);
        }
      }
    return hlds__error_msg_inst__Pieces_18;
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

/* :- end_module hlds.error_msg_inst. */
