/*
** Automatically generated from `make_hlds_separate_items.m'
** by the Mercury compiler,
** version 2017-08-21
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


/* :- module hlds.make_hlds.make_hlds_passes.make_hlds_separate_items. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "require.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_stats.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_mode.mih"
#include "hlds.make_hlds.add_mutable_aux_preds.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_solver.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.add_type.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "hlds.make_hlds.make_hlds_passes.du_type_layout.mih"




static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho4_40_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * STATE_VARIABLE_RevItemPromises_20,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * STATE_VARIABLE_RevItemInstances_24,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * STATE_VARIABLE_RevItemInitialises_26,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * STATE_VARIABLE_RevItemFinalises_28,
  MR_Word STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * STATE_VARIABLE_RevItemMutables_30,
  MR_Word STATE_VARIABLE_RevItemReserveTags_0_31,
  MR_Word * STATE_VARIABLE_RevItemReserveTags_32,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_33,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_34,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_35,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_36,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_37,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_38,
  MR_Word STATE_VARIABLE_RevItemClauses_0_39,
  MR_Word * STATE_VARIABLE_RevItemClauses_40);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__src_module_section_status_2_p_0(
  MR_Word SrcSection_3,
  MR_Word * SectionInfo_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_40_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * STATE_VARIABLE_RevItemPromises_20,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * STATE_VARIABLE_RevItemInstances_24,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * STATE_VARIABLE_RevItemInitialises_26,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * STATE_VARIABLE_RevItemFinalises_28,
  MR_Word STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * STATE_VARIABLE_RevItemMutables_30,
  MR_Word STATE_VARIABLE_RevItemReserveTags_0_31,
  MR_Word * STATE_VARIABLE_RevItemReserveTags_32,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_33,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_34,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_35,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_36,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_37,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_38,
  MR_Word STATE_VARIABLE_RevItemClauses_0_39,
  MR_Word * STATE_VARIABLE_RevItemClauses_40);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__int_module_section_status_2_p_0(
  MR_Word IntSection_3,
  MR_Word * SectionInfo_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho2_40_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * STATE_VARIABLE_RevItemPromises_20,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * STATE_VARIABLE_RevItemInstances_24,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * STATE_VARIABLE_RevItemInitialises_26,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * STATE_VARIABLE_RevItemFinalises_28,
  MR_Word STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * STATE_VARIABLE_RevItemMutables_30,
  MR_Word STATE_VARIABLE_RevItemReserveTags_0_31,
  MR_Word * STATE_VARIABLE_RevItemReserveTags_32,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_33,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_34,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_35,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_36,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_37,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_38,
  MR_Word STATE_VARIABLE_RevItemClauses_0_39,
  MR_Word * STATE_VARIABLE_RevItemClauses_40);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word * SectionInfo_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho1_40_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * STATE_VARIABLE_RevItemPromises_20,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * STATE_VARIABLE_RevItemInstances_24,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * STATE_VARIABLE_RevItemInitialises_26,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * STATE_VARIABLE_RevItemFinalises_28,
  MR_Word STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * STATE_VARIABLE_RevItemMutables_30,
  MR_Word STATE_VARIABLE_RevItemReserveTags_0_31,
  MR_Word * STATE_VARIABLE_RevItemReserveTags_32,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_33,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_34,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_35,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_36,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_37,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_38,
  MR_Word STATE_VARIABLE_RevItemClauses_0_39,
  MR_Word * STATE_VARIABLE_RevItemClauses_40);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word * SectionInfo_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_38_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_4,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_5,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_8,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_9,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_10,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_11,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_12,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_13,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_14,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_15,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_16,
  MR_Word STATE_VARIABLE_RevItemPromises_0_17,
  MR_Word * STATE_VARIABLE_RevItemPromises_18,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_19,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_20,
  MR_Word STATE_VARIABLE_RevItemInstances_0_21,
  MR_Word * STATE_VARIABLE_RevItemInstances_22,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_23,
  MR_Word * STATE_VARIABLE_RevItemInitialises_24,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_25,
  MR_Word * STATE_VARIABLE_RevItemFinalises_26,
  MR_Word STATE_VARIABLE_RevItemMutables_0_27,
  MR_Word * STATE_VARIABLE_RevItemMutables_28,
  MR_Word STATE_VARIABLE_RevItemReserveTags_0_29,
  MR_Word * STATE_VARIABLE_RevItemReserveTags_30,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_31,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_32,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_33,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_34,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_35,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_36,
  MR_Word STATE_VARIABLE_RevItemClauses_0_37,
  MR_Word * STATE_VARIABLE_RevItemClauses_38);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[16][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[5][1];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[16][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[0]))),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[5][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_20_p_0(
  MR_Word AugCompUnit_21,
  MR_Word * ItemAvailLists_22,
  MR_Word * ItemTypeDefnsAbstract_23,
  MR_Word * ItemTypeDefnsMercury_24,
  MR_Word * ItemTypeDefnsForeign_25,
  MR_Word * ItemInstDefns_26,
  MR_Word * ItemModeDefns_27,
  MR_Word * ItemPredDecls_28,
  MR_Word * ItemModeDecls_29,
  MR_Word * ItemPromises_30,
  MR_Word * ItemTypeclasses_31,
  MR_Word * ItemInstances_32,
  MR_Word * ItemInitialises_33,
  MR_Word * ItemFinalises_34,
  MR_Word * ItemMutables_35,
  MR_Word * ItemReserveTags_36,
  MR_Word * ItemForeignEnums_37,
  MR_Word * ItemPragmas2_38,
  MR_Word * ItemPragmas3_39,
  MR_Word * ItemClauses_40)
{
  {
    MR_Word TypeInfo_202_202;
    MR_Word TypeInfo_213_213;
    MR_Word SrcItemBlocks_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_21, (MR_Integer) 3)));
    MR_Word DirectIntItemBlocks_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_21, (MR_Integer) 4)));
    MR_Word IndirectIntItemBlocks_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_21, (MR_Integer) 5)));
    MR_Word OptItemBlocks_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_21, (MR_Integer) 6)));
    MR_Word IntForOptItemBlocks_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_21, (MR_Integer) 7)));
    MR_Word STATE_VARIABLE_RevItemAvailLists_88_88;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_89_89;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_90_90;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_91_91;
    MR_Word STATE_VARIABLE_RevItemInstDefns_92_92;
    MR_Word STATE_VARIABLE_RevItemModeDefns_93_93;
    MR_Word STATE_VARIABLE_RevItemPredDecls_94_94;
    MR_Word STATE_VARIABLE_RevItemModeDecls_95_95;
    MR_Word STATE_VARIABLE_RevItemPromises_96_96;
    MR_Word STATE_VARIABLE_RevItemTypeclasses_97_97;
    MR_Word STATE_VARIABLE_RevItemInstances_98_98;
    MR_Word STATE_VARIABLE_RevItemInitialises_99_99;
    MR_Word STATE_VARIABLE_RevItemFinalises_100_100;
    MR_Word STATE_VARIABLE_RevItemMutables_101_101;
    MR_Word STATE_VARIABLE_RevItemReserveTags_102_102;
    MR_Word STATE_VARIABLE_RevItemForeignEnums_103_103;
    MR_Word STATE_VARIABLE_RevItemPragmas2_104_104;
    MR_Word STATE_VARIABLE_RevItemPragmas3_105_105;
    MR_Word STATE_VARIABLE_RevItemClauses_106_106;
    MR_Word STATE_VARIABLE_RevItemAvailLists_108_108;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_109_109;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_110_110;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_111_111;
    MR_Word STATE_VARIABLE_RevItemInstDefns_112_112;
    MR_Word STATE_VARIABLE_RevItemModeDefns_113_113;
    MR_Word STATE_VARIABLE_RevItemPredDecls_114_114;
    MR_Word STATE_VARIABLE_RevItemModeDecls_115_115;
    MR_Word STATE_VARIABLE_RevItemPromises_116_116;
    MR_Word STATE_VARIABLE_RevItemTypeclasses_117_117;
    MR_Word STATE_VARIABLE_RevItemInstances_118_118;
    MR_Word STATE_VARIABLE_RevItemInitialises_119_119;
    MR_Word STATE_VARIABLE_RevItemFinalises_120_120;
    MR_Word STATE_VARIABLE_RevItemMutables_121_121;
    MR_Word STATE_VARIABLE_RevItemReserveTags_122_122;
    MR_Word STATE_VARIABLE_RevItemForeignEnums_123_123;
    MR_Word STATE_VARIABLE_RevItemPragmas2_124_124;
    MR_Word STATE_VARIABLE_RevItemPragmas3_125_125;
    MR_Word STATE_VARIABLE_RevItemClauses_126_126;
    MR_Word STATE_VARIABLE_RevItemAvailLists_128_128;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_129_129;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_130_130;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_131_131;
    MR_Word STATE_VARIABLE_RevItemInstDefns_132_132;
    MR_Word STATE_VARIABLE_RevItemModeDefns_133_133;
    MR_Word STATE_VARIABLE_RevItemPredDecls_134_134;
    MR_Word STATE_VARIABLE_RevItemModeDecls_135_135;
    MR_Word STATE_VARIABLE_RevItemPromises_136_136;
    MR_Word STATE_VARIABLE_RevItemTypeclasses_137_137;
    MR_Word STATE_VARIABLE_RevItemInstances_138_138;
    MR_Word STATE_VARIABLE_RevItemInitialises_139_139;
    MR_Word STATE_VARIABLE_RevItemFinalises_140_140;
    MR_Word STATE_VARIABLE_RevItemMutables_141_141;
    MR_Word STATE_VARIABLE_RevItemReserveTags_142_142;
    MR_Word STATE_VARIABLE_RevItemForeignEnums_143_143;
    MR_Word STATE_VARIABLE_RevItemPragmas2_144_144;
    MR_Word STATE_VARIABLE_RevItemPragmas3_145_145;
    MR_Word STATE_VARIABLE_RevItemClauses_146_146;
    MR_Word STATE_VARIABLE_RevItemAvailLists_148_148;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_149_149;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_150_150;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_151_151;
    MR_Word STATE_VARIABLE_RevItemInstDefns_152_152;
    MR_Word STATE_VARIABLE_RevItemModeDefns_153_153;
    MR_Word STATE_VARIABLE_RevItemPredDecls_154_154;
    MR_Word STATE_VARIABLE_RevItemModeDecls_155_155;
    MR_Word STATE_VARIABLE_RevItemPromises_156_156;
    MR_Word STATE_VARIABLE_RevItemTypeclasses_157_157;
    MR_Word STATE_VARIABLE_RevItemInstances_158_158;
    MR_Word STATE_VARIABLE_RevItemInitialises_159_159;
    MR_Word STATE_VARIABLE_RevItemFinalises_160_160;
    MR_Word STATE_VARIABLE_RevItemMutables_161_161;
    MR_Word STATE_VARIABLE_RevItemReserveTags_162_162;
    MR_Word STATE_VARIABLE_RevItemForeignEnums_163_163;
    MR_Word STATE_VARIABLE_RevItemPragmas2_164_164;
    MR_Word STATE_VARIABLE_RevItemPragmas3_165_165;
    MR_Word STATE_VARIABLE_RevItemClauses_166_166;
    MR_Word STATE_VARIABLE_RevItemAvailLists_168_168;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_170_170;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_171_171;
    MR_Word STATE_VARIABLE_RevItemInstDefns_172_172;
    MR_Word STATE_VARIABLE_RevItemModeDefns_173_173;
    MR_Word STATE_VARIABLE_RevItemPredDecls_174_174;
    MR_Word STATE_VARIABLE_RevItemModeDecls_175_175;
    MR_Word STATE_VARIABLE_RevItemPromises_176_176;
    MR_Word STATE_VARIABLE_RevItemTypeclasses_177_177;
    MR_Word STATE_VARIABLE_RevItemInstances_178_178;
    MR_Word STATE_VARIABLE_RevItemInitialises_179_179;
    MR_Word STATE_VARIABLE_RevItemFinalises_180_180;
    MR_Word STATE_VARIABLE_RevItemMutables_181_181;
    MR_Word STATE_VARIABLE_RevItemReserveTags_182_182;
    MR_Word STATE_VARIABLE_RevItemForeignEnums_183_183;
    MR_Word STATE_VARIABLE_RevItemPragmas2_184_184;
    MR_Word STATE_VARIABLE_RevItemPragmas3_185_185;
    MR_Word STATE_VARIABLE_RevItemClauses_186_186;
    MR_Word _ModuleName_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_21, (MR_Integer) 0)));
    MR_Word _ModuleNameContext_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_21, (MR_Integer) 1)));
    MR_Word _ModuleVersionNumbers_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_21, (MR_Integer) 2)));

    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho4_40_p_0(SrcItemBlocks_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemAvailLists_88_88, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemTypeDefnsAbstract_89_89, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemTypeDefnsMercury_90_90, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemTypeDefnsForeign_91_91, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemInstDefns_92_92, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemModeDefns_93_93, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemPredDecls_94_94, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemModeDecls_95_95, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemPromises_96_96, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemTypeclasses_97_97, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemInstances_98_98, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemInitialises_99_99, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemFinalises_100_100, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemMutables_101_101, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemReserveTags_102_102, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemForeignEnums_103_103, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemPragmas2_104_104, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemPragmas3_105_105, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_RevItemClauses_106_106);
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_40_p_0(DirectIntItemBlocks_45, STATE_VARIABLE_RevItemAvailLists_88_88, &STATE_VARIABLE_RevItemAvailLists_108_108, STATE_VARIABLE_RevItemTypeDefnsAbstract_89_89, &STATE_VARIABLE_RevItemTypeDefnsAbstract_109_109, STATE_VARIABLE_RevItemTypeDefnsMercury_90_90, &STATE_VARIABLE_RevItemTypeDefnsMercury_110_110, STATE_VARIABLE_RevItemTypeDefnsForeign_91_91, &STATE_VARIABLE_RevItemTypeDefnsForeign_111_111, STATE_VARIABLE_RevItemInstDefns_92_92, &STATE_VARIABLE_RevItemInstDefns_112_112, STATE_VARIABLE_RevItemModeDefns_93_93, &STATE_VARIABLE_RevItemModeDefns_113_113, STATE_VARIABLE_RevItemPredDecls_94_94, &STATE_VARIABLE_RevItemPredDecls_114_114, STATE_VARIABLE_RevItemModeDecls_95_95, &STATE_VARIABLE_RevItemModeDecls_115_115, STATE_VARIABLE_RevItemPromises_96_96, &STATE_VARIABLE_RevItemPromises_116_116, STATE_VARIABLE_RevItemTypeclasses_97_97, &STATE_VARIABLE_RevItemTypeclasses_117_117, STATE_VARIABLE_RevItemInstances_98_98, &STATE_VARIABLE_RevItemInstances_118_118, STATE_VARIABLE_RevItemInitialises_99_99, &STATE_VARIABLE_RevItemInitialises_119_119, STATE_VARIABLE_RevItemFinalises_100_100, &STATE_VARIABLE_RevItemFinalises_120_120, STATE_VARIABLE_RevItemMutables_101_101, &STATE_VARIABLE_RevItemMutables_121_121, STATE_VARIABLE_RevItemReserveTags_102_102, &STATE_VARIABLE_RevItemReserveTags_122_122, STATE_VARIABLE_RevItemForeignEnums_103_103, &STATE_VARIABLE_RevItemForeignEnums_123_123, STATE_VARIABLE_RevItemPragmas2_104_104, &STATE_VARIABLE_RevItemPragmas2_124_124, STATE_VARIABLE_RevItemPragmas3_105_105, &STATE_VARIABLE_RevItemPragmas3_125_125, STATE_VARIABLE_RevItemClauses_106_106, &STATE_VARIABLE_RevItemClauses_126_126);
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_40_p_0(IndirectIntItemBlocks_46, STATE_VARIABLE_RevItemAvailLists_108_108, &STATE_VARIABLE_RevItemAvailLists_128_128, STATE_VARIABLE_RevItemTypeDefnsAbstract_109_109, &STATE_VARIABLE_RevItemTypeDefnsAbstract_129_129, STATE_VARIABLE_RevItemTypeDefnsMercury_110_110, &STATE_VARIABLE_RevItemTypeDefnsMercury_130_130, STATE_VARIABLE_RevItemTypeDefnsForeign_111_111, &STATE_VARIABLE_RevItemTypeDefnsForeign_131_131, STATE_VARIABLE_RevItemInstDefns_112_112, &STATE_VARIABLE_RevItemInstDefns_132_132, STATE_VARIABLE_RevItemModeDefns_113_113, &STATE_VARIABLE_RevItemModeDefns_133_133, STATE_VARIABLE_RevItemPredDecls_114_114, &STATE_VARIABLE_RevItemPredDecls_134_134, STATE_VARIABLE_RevItemModeDecls_115_115, &STATE_VARIABLE_RevItemModeDecls_135_135, STATE_VARIABLE_RevItemPromises_116_116, &STATE_VARIABLE_RevItemPromises_136_136, STATE_VARIABLE_RevItemTypeclasses_117_117, &STATE_VARIABLE_RevItemTypeclasses_137_137, STATE_VARIABLE_RevItemInstances_118_118, &STATE_VARIABLE_RevItemInstances_138_138, STATE_VARIABLE_RevItemInitialises_119_119, &STATE_VARIABLE_RevItemInitialises_139_139, STATE_VARIABLE_RevItemFinalises_120_120, &STATE_VARIABLE_RevItemFinalises_140_140, STATE_VARIABLE_RevItemMutables_121_121, &STATE_VARIABLE_RevItemMutables_141_141, STATE_VARIABLE_RevItemReserveTags_122_122, &STATE_VARIABLE_RevItemReserveTags_142_142, STATE_VARIABLE_RevItemForeignEnums_123_123, &STATE_VARIABLE_RevItemForeignEnums_143_143, STATE_VARIABLE_RevItemPragmas2_124_124, &STATE_VARIABLE_RevItemPragmas2_144_144, STATE_VARIABLE_RevItemPragmas3_125_125, &STATE_VARIABLE_RevItemPragmas3_145_145, STATE_VARIABLE_RevItemClauses_126_126, &STATE_VARIABLE_RevItemClauses_146_146);
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho2_40_p_0(IntForOptItemBlocks_48, STATE_VARIABLE_RevItemAvailLists_128_128, &STATE_VARIABLE_RevItemAvailLists_148_148, STATE_VARIABLE_RevItemTypeDefnsAbstract_129_129, &STATE_VARIABLE_RevItemTypeDefnsAbstract_149_149, STATE_VARIABLE_RevItemTypeDefnsMercury_130_130, &STATE_VARIABLE_RevItemTypeDefnsMercury_150_150, STATE_VARIABLE_RevItemTypeDefnsForeign_131_131, &STATE_VARIABLE_RevItemTypeDefnsForeign_151_151, STATE_VARIABLE_RevItemInstDefns_132_132, &STATE_VARIABLE_RevItemInstDefns_152_152, STATE_VARIABLE_RevItemModeDefns_133_133, &STATE_VARIABLE_RevItemModeDefns_153_153, STATE_VARIABLE_RevItemPredDecls_134_134, &STATE_VARIABLE_RevItemPredDecls_154_154, STATE_VARIABLE_RevItemModeDecls_135_135, &STATE_VARIABLE_RevItemModeDecls_155_155, STATE_VARIABLE_RevItemPromises_136_136, &STATE_VARIABLE_RevItemPromises_156_156, STATE_VARIABLE_RevItemTypeclasses_137_137, &STATE_VARIABLE_RevItemTypeclasses_157_157, STATE_VARIABLE_RevItemInstances_138_138, &STATE_VARIABLE_RevItemInstances_158_158, STATE_VARIABLE_RevItemInitialises_139_139, &STATE_VARIABLE_RevItemInitialises_159_159, STATE_VARIABLE_RevItemFinalises_140_140, &STATE_VARIABLE_RevItemFinalises_160_160, STATE_VARIABLE_RevItemMutables_141_141, &STATE_VARIABLE_RevItemMutables_161_161, STATE_VARIABLE_RevItemReserveTags_142_142, &STATE_VARIABLE_RevItemReserveTags_162_162, STATE_VARIABLE_RevItemForeignEnums_143_143, &STATE_VARIABLE_RevItemForeignEnums_163_163, STATE_VARIABLE_RevItemPragmas2_144_144, &STATE_VARIABLE_RevItemPragmas2_164_164, STATE_VARIABLE_RevItemPragmas3_145_145, &STATE_VARIABLE_RevItemPragmas3_165_165, STATE_VARIABLE_RevItemClauses_146_146, &STATE_VARIABLE_RevItemClauses_166_166);
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho1_40_p_0(OptItemBlocks_47, STATE_VARIABLE_RevItemAvailLists_148_148, &STATE_VARIABLE_RevItemAvailLists_168_168, STATE_VARIABLE_RevItemTypeDefnsAbstract_149_149, &STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169, STATE_VARIABLE_RevItemTypeDefnsMercury_150_150, &STATE_VARIABLE_RevItemTypeDefnsMercury_170_170, STATE_VARIABLE_RevItemTypeDefnsForeign_151_151, &STATE_VARIABLE_RevItemTypeDefnsForeign_171_171, STATE_VARIABLE_RevItemInstDefns_152_152, &STATE_VARIABLE_RevItemInstDefns_172_172, STATE_VARIABLE_RevItemModeDefns_153_153, &STATE_VARIABLE_RevItemModeDefns_173_173, STATE_VARIABLE_RevItemPredDecls_154_154, &STATE_VARIABLE_RevItemPredDecls_174_174, STATE_VARIABLE_RevItemModeDecls_155_155, &STATE_VARIABLE_RevItemModeDecls_175_175, STATE_VARIABLE_RevItemPromises_156_156, &STATE_VARIABLE_RevItemPromises_176_176, STATE_VARIABLE_RevItemTypeclasses_157_157, &STATE_VARIABLE_RevItemTypeclasses_177_177, STATE_VARIABLE_RevItemInstances_158_158, &STATE_VARIABLE_RevItemInstances_178_178, STATE_VARIABLE_RevItemInitialises_159_159, &STATE_VARIABLE_RevItemInitialises_179_179, STATE_VARIABLE_RevItemFinalises_160_160, &STATE_VARIABLE_RevItemFinalises_180_180, STATE_VARIABLE_RevItemMutables_161_161, &STATE_VARIABLE_RevItemMutables_181_181, STATE_VARIABLE_RevItemReserveTags_162_162, &STATE_VARIABLE_RevItemReserveTags_182_182, STATE_VARIABLE_RevItemForeignEnums_163_163, &STATE_VARIABLE_RevItemForeignEnums_183_183, STATE_VARIABLE_RevItemPragmas2_164_164, &STATE_VARIABLE_RevItemPragmas2_184_184, STATE_VARIABLE_RevItemPragmas3_165_165, &STATE_VARIABLE_RevItemPragmas3_185_185, STATE_VARIABLE_RevItemClauses_166_166, &STATE_VARIABLE_RevItemClauses_186_186);
    mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1], STATE_VARIABLE_RevItemAvailLists_168_168, ItemAvailLists_22);
    TypeInfo_202_202 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[2];
    mercury__list__reverse_2_p_0(TypeInfo_202_202, STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169, ItemTypeDefnsAbstract_23);
    mercury__list__reverse_2_p_0(TypeInfo_202_202, STATE_VARIABLE_RevItemTypeDefnsMercury_170_170, ItemTypeDefnsMercury_24);
    mercury__list__reverse_2_p_0(TypeInfo_202_202, STATE_VARIABLE_RevItemTypeDefnsForeign_171_171, ItemTypeDefnsForeign_25);
    mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[3], STATE_VARIABLE_RevItemInstDefns_172_172, ItemInstDefns_26);
    mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[4], STATE_VARIABLE_RevItemModeDefns_173_173, ItemModeDefns_27);
    mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[5], STATE_VARIABLE_RevItemPredDecls_174_174, ItemPredDecls_28);
    mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[6], STATE_VARIABLE_RevItemModeDecls_175_175, ItemModeDecls_29);
    mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[7], STATE_VARIABLE_RevItemPromises_176_176, ItemPromises_30);
    mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[8], STATE_VARIABLE_RevItemTypeclasses_177_177, ItemTypeclasses_31);
    mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[9], STATE_VARIABLE_RevItemInstances_178_178, ItemInstances_32);
    mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[10], STATE_VARIABLE_RevItemInitialises_179_179, ItemInitialises_33);
    mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[11], STATE_VARIABLE_RevItemFinalises_180_180, ItemFinalises_34);
    mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[12], STATE_VARIABLE_RevItemMutables_181_181, ItemMutables_35);
    TypeInfo_213_213 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[13];
    *ItemReserveTags_36 = mercury__list__inst_preserving_reverse_1_f_0(TypeInfo_213_213, STATE_VARIABLE_RevItemReserveTags_182_182);
    *ItemForeignEnums_37 = mercury__list__inst_preserving_reverse_1_f_0(TypeInfo_213_213, STATE_VARIABLE_RevItemForeignEnums_183_183);
    *ItemPragmas2_38 = mercury__list__inst_preserving_reverse_1_f_0(TypeInfo_213_213, STATE_VARIABLE_RevItemPragmas2_184_184);
    *ItemPragmas3_39 = mercury__list__inst_preserving_reverse_1_f_0(TypeInfo_213_213, STATE_VARIABLE_RevItemPragmas3_185_185);
    mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[14], STATE_VARIABLE_RevItemClauses_186_186, ItemClauses_40);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho4_40_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * STATE_VARIABLE_RevItemPromises_20,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * STATE_VARIABLE_RevItemInstances_24,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * STATE_VARIABLE_RevItemInitialises_26,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * STATE_VARIABLE_RevItemFinalises_28,
  MR_Word STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * STATE_VARIABLE_RevItemMutables_30,
  MR_Word STATE_VARIABLE_RevItemReserveTags_0_31,
  MR_Word * STATE_VARIABLE_RevItemReserveTags_32,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_33,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_34,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_35,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_36,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_37,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_38,
  MR_Word STATE_VARIABLE_RevItemClauses_0_39,
  MR_Word * STATE_VARIABLE_RevItemClauses_40)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_RevItemClauses_40 = STATE_VARIABLE_RevItemClauses_0_39;
      *STATE_VARIABLE_RevItemPragmas3_38 = STATE_VARIABLE_RevItemPragmas3_0_37;
      *STATE_VARIABLE_RevItemPragmas2_36 = STATE_VARIABLE_RevItemPragmas2_0_35;
      *STATE_VARIABLE_RevItemForeignEnums_34 = STATE_VARIABLE_RevItemForeignEnums_0_33;
      *STATE_VARIABLE_RevItemReserveTags_32 = STATE_VARIABLE_RevItemReserveTags_0_31;
      *STATE_VARIABLE_RevItemMutables_30 = STATE_VARIABLE_RevItemMutables_0_29;
      *STATE_VARIABLE_RevItemFinalises_28 = STATE_VARIABLE_RevItemFinalises_0_27;
      *STATE_VARIABLE_RevItemInitialises_26 = STATE_VARIABLE_RevItemInitialises_0_25;
      *STATE_VARIABLE_RevItemInstances_24 = STATE_VARIABLE_RevItemInstances_0_23;
      *STATE_VARIABLE_RevItemTypeclasses_22 = STATE_VARIABLE_RevItemTypeclasses_0_21;
      *STATE_VARIABLE_RevItemPromises_20 = STATE_VARIABLE_RevItemPromises_0_19;
      *STATE_VARIABLE_RevItemModeDecls_18 = STATE_VARIABLE_RevItemModeDecls_0_17;
      *STATE_VARIABLE_RevItemPredDecls_16 = STATE_VARIABLE_RevItemPredDecls_0_15;
      *STATE_VARIABLE_RevItemModeDefns_14 = STATE_VARIABLE_RevItemModeDefns_0_13;
      *STATE_VARIABLE_RevItemInstDefns_12 = STATE_VARIABLE_RevItemInstDefns_0_11;
      *STATE_VARIABLE_RevItemTypeDefnsForeign_10 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
      *STATE_VARIABLE_RevItemTypeDefnsMercury_8 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
      *STATE_VARIABLE_RevItemTypeDefnsAbstract_6 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
      *STATE_VARIABLE_RevItemAvailLists_4 = STATE_VARIABLE_RevItemAvailLists_0_3;
    }
    else
    {
      MR_Word ItemBlock_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ItemBlocks_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Section_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 0)));
      MR_Word Avails_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 3)));
      MR_Word Items_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 4)));
      MR_Word SectionInfo_126;
      MR_Word ItemMercuryStatus_127;
      MR_Word AvailSectionItem_129;
      MR_Word STATE_VARIABLE_RevItemAvailLists_168_168;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_170_170;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_171_171;
      MR_Word STATE_VARIABLE_RevItemInstDefns_172_172;
      MR_Word STATE_VARIABLE_RevItemModeDefns_173_173;
      MR_Word STATE_VARIABLE_RevItemPredDecls_174_174;
      MR_Word STATE_VARIABLE_RevItemModeDecls_175_175;
      MR_Word STATE_VARIABLE_RevItemPromises_176_176;
      MR_Word STATE_VARIABLE_RevItemTypeclasses_177_177;
      MR_Word STATE_VARIABLE_RevItemInstances_178_178;
      MR_Word STATE_VARIABLE_RevItemInitialises_179_179;
      MR_Word STATE_VARIABLE_RevItemFinalises_180_180;
      MR_Word STATE_VARIABLE_RevItemMutables_181_181;
      MR_Word STATE_VARIABLE_RevItemReserveTags_182_182;
      MR_Word STATE_VARIABLE_RevItemForeignEnums_183_183;
      MR_Word STATE_VARIABLE_RevItemPragmas2_184_184;
      MR_Word STATE_VARIABLE_RevItemPragmas3_185_185;
      MR_Word STATE_VARIABLE_RevItemClauses_186_186;
      MR_Word Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 1)));
      MR_Word _Incls_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 2)));
      MR_Word _NeedQual_128;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPromises_0_19;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstances_0_23;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInitialises_0_25;
      MR_Word next_value_of_STATE_VARIABLE_RevItemFinalises_0_27;
      MR_Word next_value_of_STATE_VARIABLE_RevItemMutables_0_29;
      MR_Word next_value_of_STATE_VARIABLE_RevItemReserveTags_0_31;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_33;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37;
      MR_Word next_value_of_STATE_VARIABLE_RevItemClauses_0_39;

      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__src_module_section_status_2_p_0(Section_121, &SectionInfo_126);
      ItemMercuryStatus_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionInfo_126, (MR_Integer) 0)));
      _NeedQual_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionInfo_126, (MR_Integer) 1)));
      {
        AvailSectionItem_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AvailSectionItem_129, 0) = ((MR_Box) (ItemMercuryStatus_127));
        MR_hl_field(MR_mktag(0), AvailSectionItem_129, 1) = ((MR_Box) (Avails_124));
      }
      {
        STATE_VARIABLE_RevItemAvailLists_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_168_168, 0) = ((MR_Box) (AvailSectionItem_129));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevItemAvailLists_0_3));
      }
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_38_p_0(Items_125, SectionInfo_126, STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5, &STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169, STATE_VARIABLE_RevItemTypeDefnsMercury_0_7, &STATE_VARIABLE_RevItemTypeDefnsMercury_170_170, STATE_VARIABLE_RevItemTypeDefnsForeign_0_9, &STATE_VARIABLE_RevItemTypeDefnsForeign_171_171, STATE_VARIABLE_RevItemInstDefns_0_11, &STATE_VARIABLE_RevItemInstDefns_172_172, STATE_VARIABLE_RevItemModeDefns_0_13, &STATE_VARIABLE_RevItemModeDefns_173_173, STATE_VARIABLE_RevItemPredDecls_0_15, &STATE_VARIABLE_RevItemPredDecls_174_174, STATE_VARIABLE_RevItemModeDecls_0_17, &STATE_VARIABLE_RevItemModeDecls_175_175, STATE_VARIABLE_RevItemPromises_0_19, &STATE_VARIABLE_RevItemPromises_176_176, STATE_VARIABLE_RevItemTypeclasses_0_21, &STATE_VARIABLE_RevItemTypeclasses_177_177, STATE_VARIABLE_RevItemInstances_0_23, &STATE_VARIABLE_RevItemInstances_178_178, STATE_VARIABLE_RevItemInitialises_0_25, &STATE_VARIABLE_RevItemInitialises_179_179, STATE_VARIABLE_RevItemFinalises_0_27, &STATE_VARIABLE_RevItemFinalises_180_180, STATE_VARIABLE_RevItemMutables_0_29, &STATE_VARIABLE_RevItemMutables_181_181, STATE_VARIABLE_RevItemReserveTags_0_31, &STATE_VARIABLE_RevItemReserveTags_182_182, STATE_VARIABLE_RevItemForeignEnums_0_33, &STATE_VARIABLE_RevItemForeignEnums_183_183, STATE_VARIABLE_RevItemPragmas2_0_35, &STATE_VARIABLE_RevItemPragmas2_184_184, STATE_VARIABLE_RevItemPragmas3_0_37, &STATE_VARIABLE_RevItemPragmas3_185_185, STATE_VARIABLE_RevItemClauses_0_39, &STATE_VARIABLE_RevItemClauses_186_186);
      /* direct tailcall eliminated */
      next_value_of_HeadVar__1_1 = ItemBlocks_100;
      next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3 = STATE_VARIABLE_RevItemAvailLists_168_168;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = STATE_VARIABLE_RevItemTypeDefnsMercury_170_170;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = STATE_VARIABLE_RevItemTypeDefnsForeign_171_171;
      next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11 = STATE_VARIABLE_RevItemInstDefns_172_172;
      next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13 = STATE_VARIABLE_RevItemModeDefns_173_173;
      next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15 = STATE_VARIABLE_RevItemPredDecls_174_174;
      next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17 = STATE_VARIABLE_RevItemModeDecls_175_175;
      next_value_of_STATE_VARIABLE_RevItemPromises_0_19 = STATE_VARIABLE_RevItemPromises_176_176;
      next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21 = STATE_VARIABLE_RevItemTypeclasses_177_177;
      next_value_of_STATE_VARIABLE_RevItemInstances_0_23 = STATE_VARIABLE_RevItemInstances_178_178;
      next_value_of_STATE_VARIABLE_RevItemInitialises_0_25 = STATE_VARIABLE_RevItemInitialises_179_179;
      next_value_of_STATE_VARIABLE_RevItemFinalises_0_27 = STATE_VARIABLE_RevItemFinalises_180_180;
      next_value_of_STATE_VARIABLE_RevItemMutables_0_29 = STATE_VARIABLE_RevItemMutables_181_181;
      next_value_of_STATE_VARIABLE_RevItemReserveTags_0_31 = STATE_VARIABLE_RevItemReserveTags_182_182;
      next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_33 = STATE_VARIABLE_RevItemForeignEnums_183_183;
      next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35 = STATE_VARIABLE_RevItemPragmas2_184_184;
      next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37 = STATE_VARIABLE_RevItemPragmas3_185_185;
      next_value_of_STATE_VARIABLE_RevItemClauses_0_39 = STATE_VARIABLE_RevItemClauses_186_186;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevItemAvailLists_0_3 = next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
      STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
      STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
      STATE_VARIABLE_RevItemInstDefns_0_11 = next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11;
      STATE_VARIABLE_RevItemModeDefns_0_13 = next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13;
      STATE_VARIABLE_RevItemPredDecls_0_15 = next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15;
      STATE_VARIABLE_RevItemModeDecls_0_17 = next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17;
      STATE_VARIABLE_RevItemPromises_0_19 = next_value_of_STATE_VARIABLE_RevItemPromises_0_19;
      STATE_VARIABLE_RevItemTypeclasses_0_21 = next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21;
      STATE_VARIABLE_RevItemInstances_0_23 = next_value_of_STATE_VARIABLE_RevItemInstances_0_23;
      STATE_VARIABLE_RevItemInitialises_0_25 = next_value_of_STATE_VARIABLE_RevItemInitialises_0_25;
      STATE_VARIABLE_RevItemFinalises_0_27 = next_value_of_STATE_VARIABLE_RevItemFinalises_0_27;
      STATE_VARIABLE_RevItemMutables_0_29 = next_value_of_STATE_VARIABLE_RevItemMutables_0_29;
      STATE_VARIABLE_RevItemReserveTags_0_31 = next_value_of_STATE_VARIABLE_RevItemReserveTags_0_31;
      STATE_VARIABLE_RevItemForeignEnums_0_33 = next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_33;
      STATE_VARIABLE_RevItemPragmas2_0_35 = next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35;
      STATE_VARIABLE_RevItemPragmas3_0_37 = next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37;
      STATE_VARIABLE_RevItemClauses_0_39 = next_value_of_STATE_VARIABLE_RevItemClauses_0_39;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__src_module_section_status_2_p_0(
  MR_Word SrcSection_3,
  MR_Word * SectionInfo_4)
{
  {
    MR_Word Status_5;
    MR_Word NeedQual_6;

    switch (SrcSection_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          Status_5 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[2];
          NeedQual_6 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          Status_5 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[3];
          NeedQual_6 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        {
          Status_5 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[4];
          NeedQual_6 = (MR_Integer) 1;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *SectionInfo_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Status_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NeedQual_6));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_40_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * STATE_VARIABLE_RevItemPromises_20,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * STATE_VARIABLE_RevItemInstances_24,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * STATE_VARIABLE_RevItemInitialises_26,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * STATE_VARIABLE_RevItemFinalises_28,
  MR_Word STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * STATE_VARIABLE_RevItemMutables_30,
  MR_Word STATE_VARIABLE_RevItemReserveTags_0_31,
  MR_Word * STATE_VARIABLE_RevItemReserveTags_32,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_33,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_34,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_35,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_36,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_37,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_38,
  MR_Word STATE_VARIABLE_RevItemClauses_0_39,
  MR_Word * STATE_VARIABLE_RevItemClauses_40)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_RevItemClauses_40 = STATE_VARIABLE_RevItemClauses_0_39;
      *STATE_VARIABLE_RevItemPragmas3_38 = STATE_VARIABLE_RevItemPragmas3_0_37;
      *STATE_VARIABLE_RevItemPragmas2_36 = STATE_VARIABLE_RevItemPragmas2_0_35;
      *STATE_VARIABLE_RevItemForeignEnums_34 = STATE_VARIABLE_RevItemForeignEnums_0_33;
      *STATE_VARIABLE_RevItemReserveTags_32 = STATE_VARIABLE_RevItemReserveTags_0_31;
      *STATE_VARIABLE_RevItemMutables_30 = STATE_VARIABLE_RevItemMutables_0_29;
      *STATE_VARIABLE_RevItemFinalises_28 = STATE_VARIABLE_RevItemFinalises_0_27;
      *STATE_VARIABLE_RevItemInitialises_26 = STATE_VARIABLE_RevItemInitialises_0_25;
      *STATE_VARIABLE_RevItemInstances_24 = STATE_VARIABLE_RevItemInstances_0_23;
      *STATE_VARIABLE_RevItemTypeclasses_22 = STATE_VARIABLE_RevItemTypeclasses_0_21;
      *STATE_VARIABLE_RevItemPromises_20 = STATE_VARIABLE_RevItemPromises_0_19;
      *STATE_VARIABLE_RevItemModeDecls_18 = STATE_VARIABLE_RevItemModeDecls_0_17;
      *STATE_VARIABLE_RevItemPredDecls_16 = STATE_VARIABLE_RevItemPredDecls_0_15;
      *STATE_VARIABLE_RevItemModeDefns_14 = STATE_VARIABLE_RevItemModeDefns_0_13;
      *STATE_VARIABLE_RevItemInstDefns_12 = STATE_VARIABLE_RevItemInstDefns_0_11;
      *STATE_VARIABLE_RevItemTypeDefnsForeign_10 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
      *STATE_VARIABLE_RevItemTypeDefnsMercury_8 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
      *STATE_VARIABLE_RevItemTypeDefnsAbstract_6 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
      *STATE_VARIABLE_RevItemAvailLists_4 = STATE_VARIABLE_RevItemAvailLists_0_3;
    }
    else
    {
      MR_Word ItemBlock_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ItemBlocks_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Section_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 0)));
      MR_Word Avails_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 3)));
      MR_Word Items_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 4)));
      MR_Word SectionInfo_126;
      MR_Word ItemMercuryStatus_127;
      MR_Word AvailSectionItem_129;
      MR_Word STATE_VARIABLE_RevItemAvailLists_168_168;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_170_170;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_171_171;
      MR_Word STATE_VARIABLE_RevItemInstDefns_172_172;
      MR_Word STATE_VARIABLE_RevItemModeDefns_173_173;
      MR_Word STATE_VARIABLE_RevItemPredDecls_174_174;
      MR_Word STATE_VARIABLE_RevItemModeDecls_175_175;
      MR_Word STATE_VARIABLE_RevItemPromises_176_176;
      MR_Word STATE_VARIABLE_RevItemTypeclasses_177_177;
      MR_Word STATE_VARIABLE_RevItemInstances_178_178;
      MR_Word STATE_VARIABLE_RevItemInitialises_179_179;
      MR_Word STATE_VARIABLE_RevItemFinalises_180_180;
      MR_Word STATE_VARIABLE_RevItemMutables_181_181;
      MR_Word STATE_VARIABLE_RevItemReserveTags_182_182;
      MR_Word STATE_VARIABLE_RevItemForeignEnums_183_183;
      MR_Word STATE_VARIABLE_RevItemPragmas2_184_184;
      MR_Word STATE_VARIABLE_RevItemPragmas3_185_185;
      MR_Word STATE_VARIABLE_RevItemClauses_186_186;
      MR_Word Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 1)));
      MR_Word _Incls_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 2)));
      MR_Word _NeedQual_128;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPromises_0_19;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstances_0_23;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInitialises_0_25;
      MR_Word next_value_of_STATE_VARIABLE_RevItemFinalises_0_27;
      MR_Word next_value_of_STATE_VARIABLE_RevItemMutables_0_29;
      MR_Word next_value_of_STATE_VARIABLE_RevItemReserveTags_0_31;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_33;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37;
      MR_Word next_value_of_STATE_VARIABLE_RevItemClauses_0_39;

      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__int_module_section_status_2_p_0(Section_121, &SectionInfo_126);
      ItemMercuryStatus_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionInfo_126, (MR_Integer) 0)));
      _NeedQual_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionInfo_126, (MR_Integer) 1)));
      {
        AvailSectionItem_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AvailSectionItem_129, 0) = ((MR_Box) (ItemMercuryStatus_127));
        MR_hl_field(MR_mktag(0), AvailSectionItem_129, 1) = ((MR_Box) (Avails_124));
      }
      {
        STATE_VARIABLE_RevItemAvailLists_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_168_168, 0) = ((MR_Box) (AvailSectionItem_129));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevItemAvailLists_0_3));
      }
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_38_p_0(Items_125, SectionInfo_126, STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5, &STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169, STATE_VARIABLE_RevItemTypeDefnsMercury_0_7, &STATE_VARIABLE_RevItemTypeDefnsMercury_170_170, STATE_VARIABLE_RevItemTypeDefnsForeign_0_9, &STATE_VARIABLE_RevItemTypeDefnsForeign_171_171, STATE_VARIABLE_RevItemInstDefns_0_11, &STATE_VARIABLE_RevItemInstDefns_172_172, STATE_VARIABLE_RevItemModeDefns_0_13, &STATE_VARIABLE_RevItemModeDefns_173_173, STATE_VARIABLE_RevItemPredDecls_0_15, &STATE_VARIABLE_RevItemPredDecls_174_174, STATE_VARIABLE_RevItemModeDecls_0_17, &STATE_VARIABLE_RevItemModeDecls_175_175, STATE_VARIABLE_RevItemPromises_0_19, &STATE_VARIABLE_RevItemPromises_176_176, STATE_VARIABLE_RevItemTypeclasses_0_21, &STATE_VARIABLE_RevItemTypeclasses_177_177, STATE_VARIABLE_RevItemInstances_0_23, &STATE_VARIABLE_RevItemInstances_178_178, STATE_VARIABLE_RevItemInitialises_0_25, &STATE_VARIABLE_RevItemInitialises_179_179, STATE_VARIABLE_RevItemFinalises_0_27, &STATE_VARIABLE_RevItemFinalises_180_180, STATE_VARIABLE_RevItemMutables_0_29, &STATE_VARIABLE_RevItemMutables_181_181, STATE_VARIABLE_RevItemReserveTags_0_31, &STATE_VARIABLE_RevItemReserveTags_182_182, STATE_VARIABLE_RevItemForeignEnums_0_33, &STATE_VARIABLE_RevItemForeignEnums_183_183, STATE_VARIABLE_RevItemPragmas2_0_35, &STATE_VARIABLE_RevItemPragmas2_184_184, STATE_VARIABLE_RevItemPragmas3_0_37, &STATE_VARIABLE_RevItemPragmas3_185_185, STATE_VARIABLE_RevItemClauses_0_39, &STATE_VARIABLE_RevItemClauses_186_186);
      /* direct tailcall eliminated */
      next_value_of_HeadVar__1_1 = ItemBlocks_100;
      next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3 = STATE_VARIABLE_RevItemAvailLists_168_168;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = STATE_VARIABLE_RevItemTypeDefnsMercury_170_170;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = STATE_VARIABLE_RevItemTypeDefnsForeign_171_171;
      next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11 = STATE_VARIABLE_RevItemInstDefns_172_172;
      next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13 = STATE_VARIABLE_RevItemModeDefns_173_173;
      next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15 = STATE_VARIABLE_RevItemPredDecls_174_174;
      next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17 = STATE_VARIABLE_RevItemModeDecls_175_175;
      next_value_of_STATE_VARIABLE_RevItemPromises_0_19 = STATE_VARIABLE_RevItemPromises_176_176;
      next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21 = STATE_VARIABLE_RevItemTypeclasses_177_177;
      next_value_of_STATE_VARIABLE_RevItemInstances_0_23 = STATE_VARIABLE_RevItemInstances_178_178;
      next_value_of_STATE_VARIABLE_RevItemInitialises_0_25 = STATE_VARIABLE_RevItemInitialises_179_179;
      next_value_of_STATE_VARIABLE_RevItemFinalises_0_27 = STATE_VARIABLE_RevItemFinalises_180_180;
      next_value_of_STATE_VARIABLE_RevItemMutables_0_29 = STATE_VARIABLE_RevItemMutables_181_181;
      next_value_of_STATE_VARIABLE_RevItemReserveTags_0_31 = STATE_VARIABLE_RevItemReserveTags_182_182;
      next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_33 = STATE_VARIABLE_RevItemForeignEnums_183_183;
      next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35 = STATE_VARIABLE_RevItemPragmas2_184_184;
      next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37 = STATE_VARIABLE_RevItemPragmas3_185_185;
      next_value_of_STATE_VARIABLE_RevItemClauses_0_39 = STATE_VARIABLE_RevItemClauses_186_186;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevItemAvailLists_0_3 = next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
      STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
      STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
      STATE_VARIABLE_RevItemInstDefns_0_11 = next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11;
      STATE_VARIABLE_RevItemModeDefns_0_13 = next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13;
      STATE_VARIABLE_RevItemPredDecls_0_15 = next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15;
      STATE_VARIABLE_RevItemModeDecls_0_17 = next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17;
      STATE_VARIABLE_RevItemPromises_0_19 = next_value_of_STATE_VARIABLE_RevItemPromises_0_19;
      STATE_VARIABLE_RevItemTypeclasses_0_21 = next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21;
      STATE_VARIABLE_RevItemInstances_0_23 = next_value_of_STATE_VARIABLE_RevItemInstances_0_23;
      STATE_VARIABLE_RevItemInitialises_0_25 = next_value_of_STATE_VARIABLE_RevItemInitialises_0_25;
      STATE_VARIABLE_RevItemFinalises_0_27 = next_value_of_STATE_VARIABLE_RevItemFinalises_0_27;
      STATE_VARIABLE_RevItemMutables_0_29 = next_value_of_STATE_VARIABLE_RevItemMutables_0_29;
      STATE_VARIABLE_RevItemReserveTags_0_31 = next_value_of_STATE_VARIABLE_RevItemReserveTags_0_31;
      STATE_VARIABLE_RevItemForeignEnums_0_33 = next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_33;
      STATE_VARIABLE_RevItemPragmas2_0_35 = next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35;
      STATE_VARIABLE_RevItemPragmas3_0_37 = next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37;
      STATE_VARIABLE_RevItemClauses_0_39 = next_value_of_STATE_VARIABLE_RevItemClauses_0_39;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__int_module_section_status_2_p_0(
  MR_Word IntSection_3,
  MR_Word * SectionInfo_4)
{
  {
    MR_Word Status_9;
    MR_Word NeedQual_10;

    if (((MR_tag((MR_Word) IntSection_3)) == (MR_mktag((MR_Integer) 1))))
    {
      Status_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[1]);
      NeedQual_10 = (MR_Integer) 0;
    }
    else
    {
      MR_Word ImportLocn_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), IntSection_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
      MR_Word ImportedOrUsed_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), IntSection_3, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
      MR_Word Var_12;
      MR_Word _ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntSection_3, (MR_Integer) 0)));
      MR_Word _IntFileKind_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), IntSection_3, (MR_Integer) 1)))) & (MR_Integer) 3);

      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (ImportLocn_7));
      }
      {
        Status_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Status_9, 0) = ((MR_Box) (Var_12));
      }
      switch (ImportedOrUsed_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          NeedQual_10 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          NeedQual_10 = (MR_Integer) 0;
          break;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *SectionInfo_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Status_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NeedQual_10));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho2_40_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * STATE_VARIABLE_RevItemPromises_20,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * STATE_VARIABLE_RevItemInstances_24,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * STATE_VARIABLE_RevItemInitialises_26,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * STATE_VARIABLE_RevItemFinalises_28,
  MR_Word STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * STATE_VARIABLE_RevItemMutables_30,
  MR_Word STATE_VARIABLE_RevItemReserveTags_0_31,
  MR_Word * STATE_VARIABLE_RevItemReserveTags_32,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_33,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_34,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_35,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_36,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_37,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_38,
  MR_Word STATE_VARIABLE_RevItemClauses_0_39,
  MR_Word * STATE_VARIABLE_RevItemClauses_40)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_RevItemClauses_40 = STATE_VARIABLE_RevItemClauses_0_39;
      *STATE_VARIABLE_RevItemPragmas3_38 = STATE_VARIABLE_RevItemPragmas3_0_37;
      *STATE_VARIABLE_RevItemPragmas2_36 = STATE_VARIABLE_RevItemPragmas2_0_35;
      *STATE_VARIABLE_RevItemForeignEnums_34 = STATE_VARIABLE_RevItemForeignEnums_0_33;
      *STATE_VARIABLE_RevItemReserveTags_32 = STATE_VARIABLE_RevItemReserveTags_0_31;
      *STATE_VARIABLE_RevItemMutables_30 = STATE_VARIABLE_RevItemMutables_0_29;
      *STATE_VARIABLE_RevItemFinalises_28 = STATE_VARIABLE_RevItemFinalises_0_27;
      *STATE_VARIABLE_RevItemInitialises_26 = STATE_VARIABLE_RevItemInitialises_0_25;
      *STATE_VARIABLE_RevItemInstances_24 = STATE_VARIABLE_RevItemInstances_0_23;
      *STATE_VARIABLE_RevItemTypeclasses_22 = STATE_VARIABLE_RevItemTypeclasses_0_21;
      *STATE_VARIABLE_RevItemPromises_20 = STATE_VARIABLE_RevItemPromises_0_19;
      *STATE_VARIABLE_RevItemModeDecls_18 = STATE_VARIABLE_RevItemModeDecls_0_17;
      *STATE_VARIABLE_RevItemPredDecls_16 = STATE_VARIABLE_RevItemPredDecls_0_15;
      *STATE_VARIABLE_RevItemModeDefns_14 = STATE_VARIABLE_RevItemModeDefns_0_13;
      *STATE_VARIABLE_RevItemInstDefns_12 = STATE_VARIABLE_RevItemInstDefns_0_11;
      *STATE_VARIABLE_RevItemTypeDefnsForeign_10 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
      *STATE_VARIABLE_RevItemTypeDefnsMercury_8 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
      *STATE_VARIABLE_RevItemTypeDefnsAbstract_6 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
      *STATE_VARIABLE_RevItemAvailLists_4 = STATE_VARIABLE_RevItemAvailLists_0_3;
    }
    else
    {
      MR_Word ItemBlock_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ItemBlocks_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Avails_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 3)));
      MR_Word Items_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 4)));
      MR_Word SectionInfo_126;
      MR_Word ItemMercuryStatus_127;
      MR_Word AvailSectionItem_129;
      MR_Word STATE_VARIABLE_RevItemAvailLists_168_168;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_170_170;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_171_171;
      MR_Word STATE_VARIABLE_RevItemInstDefns_172_172;
      MR_Word STATE_VARIABLE_RevItemModeDefns_173_173;
      MR_Word STATE_VARIABLE_RevItemPredDecls_174_174;
      MR_Word STATE_VARIABLE_RevItemModeDecls_175_175;
      MR_Word STATE_VARIABLE_RevItemPromises_176_176;
      MR_Word STATE_VARIABLE_RevItemTypeclasses_177_177;
      MR_Word STATE_VARIABLE_RevItemInstances_178_178;
      MR_Word STATE_VARIABLE_RevItemInitialises_179_179;
      MR_Word STATE_VARIABLE_RevItemFinalises_180_180;
      MR_Word STATE_VARIABLE_RevItemMutables_181_181;
      MR_Word STATE_VARIABLE_RevItemReserveTags_182_182;
      MR_Word STATE_VARIABLE_RevItemForeignEnums_183_183;
      MR_Word STATE_VARIABLE_RevItemPragmas2_184_184;
      MR_Word STATE_VARIABLE_RevItemPragmas3_185_185;
      MR_Word STATE_VARIABLE_RevItemClauses_186_186;
      MR_Word Section_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 0)));
      MR_Word Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 1)));
      MR_Word _Incls_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 2)));
      MR_Word _NeedQual_128;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPromises_0_19;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstances_0_23;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInitialises_0_25;
      MR_Word next_value_of_STATE_VARIABLE_RevItemFinalises_0_27;
      MR_Word next_value_of_STATE_VARIABLE_RevItemMutables_0_29;
      MR_Word next_value_of_STATE_VARIABLE_RevItemReserveTags_0_31;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_33;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37;
      MR_Word next_value_of_STATE_VARIABLE_RevItemClauses_0_39;

      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(&SectionInfo_126);
      ItemMercuryStatus_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionInfo_126, (MR_Integer) 0)));
      _NeedQual_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionInfo_126, (MR_Integer) 1)));
      {
        AvailSectionItem_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AvailSectionItem_129, 0) = ((MR_Box) (ItemMercuryStatus_127));
        MR_hl_field(MR_mktag(0), AvailSectionItem_129, 1) = ((MR_Box) (Avails_124));
      }
      {
        STATE_VARIABLE_RevItemAvailLists_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_168_168, 0) = ((MR_Box) (AvailSectionItem_129));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevItemAvailLists_0_3));
      }
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_38_p_0(Items_125, SectionInfo_126, STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5, &STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169, STATE_VARIABLE_RevItemTypeDefnsMercury_0_7, &STATE_VARIABLE_RevItemTypeDefnsMercury_170_170, STATE_VARIABLE_RevItemTypeDefnsForeign_0_9, &STATE_VARIABLE_RevItemTypeDefnsForeign_171_171, STATE_VARIABLE_RevItemInstDefns_0_11, &STATE_VARIABLE_RevItemInstDefns_172_172, STATE_VARIABLE_RevItemModeDefns_0_13, &STATE_VARIABLE_RevItemModeDefns_173_173, STATE_VARIABLE_RevItemPredDecls_0_15, &STATE_VARIABLE_RevItemPredDecls_174_174, STATE_VARIABLE_RevItemModeDecls_0_17, &STATE_VARIABLE_RevItemModeDecls_175_175, STATE_VARIABLE_RevItemPromises_0_19, &STATE_VARIABLE_RevItemPromises_176_176, STATE_VARIABLE_RevItemTypeclasses_0_21, &STATE_VARIABLE_RevItemTypeclasses_177_177, STATE_VARIABLE_RevItemInstances_0_23, &STATE_VARIABLE_RevItemInstances_178_178, STATE_VARIABLE_RevItemInitialises_0_25, &STATE_VARIABLE_RevItemInitialises_179_179, STATE_VARIABLE_RevItemFinalises_0_27, &STATE_VARIABLE_RevItemFinalises_180_180, STATE_VARIABLE_RevItemMutables_0_29, &STATE_VARIABLE_RevItemMutables_181_181, STATE_VARIABLE_RevItemReserveTags_0_31, &STATE_VARIABLE_RevItemReserveTags_182_182, STATE_VARIABLE_RevItemForeignEnums_0_33, &STATE_VARIABLE_RevItemForeignEnums_183_183, STATE_VARIABLE_RevItemPragmas2_0_35, &STATE_VARIABLE_RevItemPragmas2_184_184, STATE_VARIABLE_RevItemPragmas3_0_37, &STATE_VARIABLE_RevItemPragmas3_185_185, STATE_VARIABLE_RevItemClauses_0_39, &STATE_VARIABLE_RevItemClauses_186_186);
      /* direct tailcall eliminated */
      next_value_of_HeadVar__1_1 = ItemBlocks_100;
      next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3 = STATE_VARIABLE_RevItemAvailLists_168_168;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = STATE_VARIABLE_RevItemTypeDefnsMercury_170_170;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = STATE_VARIABLE_RevItemTypeDefnsForeign_171_171;
      next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11 = STATE_VARIABLE_RevItemInstDefns_172_172;
      next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13 = STATE_VARIABLE_RevItemModeDefns_173_173;
      next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15 = STATE_VARIABLE_RevItemPredDecls_174_174;
      next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17 = STATE_VARIABLE_RevItemModeDecls_175_175;
      next_value_of_STATE_VARIABLE_RevItemPromises_0_19 = STATE_VARIABLE_RevItemPromises_176_176;
      next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21 = STATE_VARIABLE_RevItemTypeclasses_177_177;
      next_value_of_STATE_VARIABLE_RevItemInstances_0_23 = STATE_VARIABLE_RevItemInstances_178_178;
      next_value_of_STATE_VARIABLE_RevItemInitialises_0_25 = STATE_VARIABLE_RevItemInitialises_179_179;
      next_value_of_STATE_VARIABLE_RevItemFinalises_0_27 = STATE_VARIABLE_RevItemFinalises_180_180;
      next_value_of_STATE_VARIABLE_RevItemMutables_0_29 = STATE_VARIABLE_RevItemMutables_181_181;
      next_value_of_STATE_VARIABLE_RevItemReserveTags_0_31 = STATE_VARIABLE_RevItemReserveTags_182_182;
      next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_33 = STATE_VARIABLE_RevItemForeignEnums_183_183;
      next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35 = STATE_VARIABLE_RevItemPragmas2_184_184;
      next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37 = STATE_VARIABLE_RevItemPragmas3_185_185;
      next_value_of_STATE_VARIABLE_RevItemClauses_0_39 = STATE_VARIABLE_RevItemClauses_186_186;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevItemAvailLists_0_3 = next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
      STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
      STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
      STATE_VARIABLE_RevItemInstDefns_0_11 = next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11;
      STATE_VARIABLE_RevItemModeDefns_0_13 = next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13;
      STATE_VARIABLE_RevItemPredDecls_0_15 = next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15;
      STATE_VARIABLE_RevItemModeDecls_0_17 = next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17;
      STATE_VARIABLE_RevItemPromises_0_19 = next_value_of_STATE_VARIABLE_RevItemPromises_0_19;
      STATE_VARIABLE_RevItemTypeclasses_0_21 = next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21;
      STATE_VARIABLE_RevItemInstances_0_23 = next_value_of_STATE_VARIABLE_RevItemInstances_0_23;
      STATE_VARIABLE_RevItemInitialises_0_25 = next_value_of_STATE_VARIABLE_RevItemInitialises_0_25;
      STATE_VARIABLE_RevItemFinalises_0_27 = next_value_of_STATE_VARIABLE_RevItemFinalises_0_27;
      STATE_VARIABLE_RevItemMutables_0_29 = next_value_of_STATE_VARIABLE_RevItemMutables_0_29;
      STATE_VARIABLE_RevItemReserveTags_0_31 = next_value_of_STATE_VARIABLE_RevItemReserveTags_0_31;
      STATE_VARIABLE_RevItemForeignEnums_0_33 = next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_33;
      STATE_VARIABLE_RevItemPragmas2_0_35 = next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35;
      STATE_VARIABLE_RevItemPragmas3_0_37 = next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37;
      STATE_VARIABLE_RevItemClauses_0_39 = next_value_of_STATE_VARIABLE_RevItemClauses_0_39;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word * SectionInfo_4)
{
  {
    *SectionInfo_4 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[15];
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho1_40_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * STATE_VARIABLE_RevItemPromises_20,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * STATE_VARIABLE_RevItemInstances_24,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * STATE_VARIABLE_RevItemInitialises_26,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * STATE_VARIABLE_RevItemFinalises_28,
  MR_Word STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * STATE_VARIABLE_RevItemMutables_30,
  MR_Word STATE_VARIABLE_RevItemReserveTags_0_31,
  MR_Word * STATE_VARIABLE_RevItemReserveTags_32,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_33,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_34,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_35,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_36,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_37,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_38,
  MR_Word STATE_VARIABLE_RevItemClauses_0_39,
  MR_Word * STATE_VARIABLE_RevItemClauses_40)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_RevItemClauses_40 = STATE_VARIABLE_RevItemClauses_0_39;
      *STATE_VARIABLE_RevItemPragmas3_38 = STATE_VARIABLE_RevItemPragmas3_0_37;
      *STATE_VARIABLE_RevItemPragmas2_36 = STATE_VARIABLE_RevItemPragmas2_0_35;
      *STATE_VARIABLE_RevItemForeignEnums_34 = STATE_VARIABLE_RevItemForeignEnums_0_33;
      *STATE_VARIABLE_RevItemReserveTags_32 = STATE_VARIABLE_RevItemReserveTags_0_31;
      *STATE_VARIABLE_RevItemMutables_30 = STATE_VARIABLE_RevItemMutables_0_29;
      *STATE_VARIABLE_RevItemFinalises_28 = STATE_VARIABLE_RevItemFinalises_0_27;
      *STATE_VARIABLE_RevItemInitialises_26 = STATE_VARIABLE_RevItemInitialises_0_25;
      *STATE_VARIABLE_RevItemInstances_24 = STATE_VARIABLE_RevItemInstances_0_23;
      *STATE_VARIABLE_RevItemTypeclasses_22 = STATE_VARIABLE_RevItemTypeclasses_0_21;
      *STATE_VARIABLE_RevItemPromises_20 = STATE_VARIABLE_RevItemPromises_0_19;
      *STATE_VARIABLE_RevItemModeDecls_18 = STATE_VARIABLE_RevItemModeDecls_0_17;
      *STATE_VARIABLE_RevItemPredDecls_16 = STATE_VARIABLE_RevItemPredDecls_0_15;
      *STATE_VARIABLE_RevItemModeDefns_14 = STATE_VARIABLE_RevItemModeDefns_0_13;
      *STATE_VARIABLE_RevItemInstDefns_12 = STATE_VARIABLE_RevItemInstDefns_0_11;
      *STATE_VARIABLE_RevItemTypeDefnsForeign_10 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
      *STATE_VARIABLE_RevItemTypeDefnsMercury_8 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
      *STATE_VARIABLE_RevItemTypeDefnsAbstract_6 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
      *STATE_VARIABLE_RevItemAvailLists_4 = STATE_VARIABLE_RevItemAvailLists_0_3;
    }
    else
    {
      MR_Word ItemBlock_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ItemBlocks_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Avails_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 3)));
      MR_Word Items_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 4)));
      MR_Word SectionInfo_126;
      MR_Word ItemMercuryStatus_127;
      MR_Word AvailSectionItem_129;
      MR_Word STATE_VARIABLE_RevItemAvailLists_168_168;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_170_170;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_171_171;
      MR_Word STATE_VARIABLE_RevItemInstDefns_172_172;
      MR_Word STATE_VARIABLE_RevItemModeDefns_173_173;
      MR_Word STATE_VARIABLE_RevItemPredDecls_174_174;
      MR_Word STATE_VARIABLE_RevItemModeDecls_175_175;
      MR_Word STATE_VARIABLE_RevItemPromises_176_176;
      MR_Word STATE_VARIABLE_RevItemTypeclasses_177_177;
      MR_Word STATE_VARIABLE_RevItemInstances_178_178;
      MR_Word STATE_VARIABLE_RevItemInitialises_179_179;
      MR_Word STATE_VARIABLE_RevItemFinalises_180_180;
      MR_Word STATE_VARIABLE_RevItemMutables_181_181;
      MR_Word STATE_VARIABLE_RevItemReserveTags_182_182;
      MR_Word STATE_VARIABLE_RevItemForeignEnums_183_183;
      MR_Word STATE_VARIABLE_RevItemPragmas2_184_184;
      MR_Word STATE_VARIABLE_RevItemPragmas3_185_185;
      MR_Word STATE_VARIABLE_RevItemClauses_186_186;
      MR_Word Section_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 0)));
      MR_Word Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 1)));
      MR_Word _Incls_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_99, (MR_Integer) 2)));
      MR_Word _NeedQual_128;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPromises_0_19;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstances_0_23;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInitialises_0_25;
      MR_Word next_value_of_STATE_VARIABLE_RevItemFinalises_0_27;
      MR_Word next_value_of_STATE_VARIABLE_RevItemMutables_0_29;
      MR_Word next_value_of_STATE_VARIABLE_RevItemReserveTags_0_31;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_33;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37;
      MR_Word next_value_of_STATE_VARIABLE_RevItemClauses_0_39;

      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(&SectionInfo_126);
      ItemMercuryStatus_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionInfo_126, (MR_Integer) 0)));
      _NeedQual_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionInfo_126, (MR_Integer) 1)));
      {
        AvailSectionItem_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AvailSectionItem_129, 0) = ((MR_Box) (ItemMercuryStatus_127));
        MR_hl_field(MR_mktag(0), AvailSectionItem_129, 1) = ((MR_Box) (Avails_124));
      }
      {
        STATE_VARIABLE_RevItemAvailLists_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_168_168, 0) = ((MR_Box) (AvailSectionItem_129));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_168_168, 1) = ((MR_Box) (STATE_VARIABLE_RevItemAvailLists_0_3));
      }
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_38_p_0(Items_125, SectionInfo_126, STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5, &STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169, STATE_VARIABLE_RevItemTypeDefnsMercury_0_7, &STATE_VARIABLE_RevItemTypeDefnsMercury_170_170, STATE_VARIABLE_RevItemTypeDefnsForeign_0_9, &STATE_VARIABLE_RevItemTypeDefnsForeign_171_171, STATE_VARIABLE_RevItemInstDefns_0_11, &STATE_VARIABLE_RevItemInstDefns_172_172, STATE_VARIABLE_RevItemModeDefns_0_13, &STATE_VARIABLE_RevItemModeDefns_173_173, STATE_VARIABLE_RevItemPredDecls_0_15, &STATE_VARIABLE_RevItemPredDecls_174_174, STATE_VARIABLE_RevItemModeDecls_0_17, &STATE_VARIABLE_RevItemModeDecls_175_175, STATE_VARIABLE_RevItemPromises_0_19, &STATE_VARIABLE_RevItemPromises_176_176, STATE_VARIABLE_RevItemTypeclasses_0_21, &STATE_VARIABLE_RevItemTypeclasses_177_177, STATE_VARIABLE_RevItemInstances_0_23, &STATE_VARIABLE_RevItemInstances_178_178, STATE_VARIABLE_RevItemInitialises_0_25, &STATE_VARIABLE_RevItemInitialises_179_179, STATE_VARIABLE_RevItemFinalises_0_27, &STATE_VARIABLE_RevItemFinalises_180_180, STATE_VARIABLE_RevItemMutables_0_29, &STATE_VARIABLE_RevItemMutables_181_181, STATE_VARIABLE_RevItemReserveTags_0_31, &STATE_VARIABLE_RevItemReserveTags_182_182, STATE_VARIABLE_RevItemForeignEnums_0_33, &STATE_VARIABLE_RevItemForeignEnums_183_183, STATE_VARIABLE_RevItemPragmas2_0_35, &STATE_VARIABLE_RevItemPragmas2_184_184, STATE_VARIABLE_RevItemPragmas3_0_37, &STATE_VARIABLE_RevItemPragmas3_185_185, STATE_VARIABLE_RevItemClauses_0_39, &STATE_VARIABLE_RevItemClauses_186_186);
      /* direct tailcall eliminated */
      next_value_of_HeadVar__1_1 = ItemBlocks_100;
      next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3 = STATE_VARIABLE_RevItemAvailLists_168_168;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = STATE_VARIABLE_RevItemTypeDefnsAbstract_169_169;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = STATE_VARIABLE_RevItemTypeDefnsMercury_170_170;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = STATE_VARIABLE_RevItemTypeDefnsForeign_171_171;
      next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11 = STATE_VARIABLE_RevItemInstDefns_172_172;
      next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13 = STATE_VARIABLE_RevItemModeDefns_173_173;
      next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15 = STATE_VARIABLE_RevItemPredDecls_174_174;
      next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17 = STATE_VARIABLE_RevItemModeDecls_175_175;
      next_value_of_STATE_VARIABLE_RevItemPromises_0_19 = STATE_VARIABLE_RevItemPromises_176_176;
      next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21 = STATE_VARIABLE_RevItemTypeclasses_177_177;
      next_value_of_STATE_VARIABLE_RevItemInstances_0_23 = STATE_VARIABLE_RevItemInstances_178_178;
      next_value_of_STATE_VARIABLE_RevItemInitialises_0_25 = STATE_VARIABLE_RevItemInitialises_179_179;
      next_value_of_STATE_VARIABLE_RevItemFinalises_0_27 = STATE_VARIABLE_RevItemFinalises_180_180;
      next_value_of_STATE_VARIABLE_RevItemMutables_0_29 = STATE_VARIABLE_RevItemMutables_181_181;
      next_value_of_STATE_VARIABLE_RevItemReserveTags_0_31 = STATE_VARIABLE_RevItemReserveTags_182_182;
      next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_33 = STATE_VARIABLE_RevItemForeignEnums_183_183;
      next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35 = STATE_VARIABLE_RevItemPragmas2_184_184;
      next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37 = STATE_VARIABLE_RevItemPragmas3_185_185;
      next_value_of_STATE_VARIABLE_RevItemClauses_0_39 = STATE_VARIABLE_RevItemClauses_186_186;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevItemAvailLists_0_3 = next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
      STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
      STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
      STATE_VARIABLE_RevItemInstDefns_0_11 = next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11;
      STATE_VARIABLE_RevItemModeDefns_0_13 = next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13;
      STATE_VARIABLE_RevItemPredDecls_0_15 = next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15;
      STATE_VARIABLE_RevItemModeDecls_0_17 = next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17;
      STATE_VARIABLE_RevItemPromises_0_19 = next_value_of_STATE_VARIABLE_RevItemPromises_0_19;
      STATE_VARIABLE_RevItemTypeclasses_0_21 = next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21;
      STATE_VARIABLE_RevItemInstances_0_23 = next_value_of_STATE_VARIABLE_RevItemInstances_0_23;
      STATE_VARIABLE_RevItemInitialises_0_25 = next_value_of_STATE_VARIABLE_RevItemInitialises_0_25;
      STATE_VARIABLE_RevItemFinalises_0_27 = next_value_of_STATE_VARIABLE_RevItemFinalises_0_27;
      STATE_VARIABLE_RevItemMutables_0_29 = next_value_of_STATE_VARIABLE_RevItemMutables_0_29;
      STATE_VARIABLE_RevItemReserveTags_0_31 = next_value_of_STATE_VARIABLE_RevItemReserveTags_0_31;
      STATE_VARIABLE_RevItemForeignEnums_0_33 = next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_33;
      STATE_VARIABLE_RevItemPragmas2_0_35 = next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35;
      STATE_VARIABLE_RevItemPragmas3_0_37 = next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37;
      STATE_VARIABLE_RevItemClauses_0_39 = next_value_of_STATE_VARIABLE_RevItemClauses_0_39;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word * SectionInfo_4)
{
  {
    *SectionInfo_4 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[15];
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_38_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_4,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_5,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_8,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_9,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_10,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_11,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_12,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_13,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_14,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_15,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_16,
  MR_Word STATE_VARIABLE_RevItemPromises_0_17,
  MR_Word * STATE_VARIABLE_RevItemPromises_18,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_19,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_20,
  MR_Word STATE_VARIABLE_RevItemInstances_0_21,
  MR_Word * STATE_VARIABLE_RevItemInstances_22,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_23,
  MR_Word * STATE_VARIABLE_RevItemInitialises_24,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_25,
  MR_Word * STATE_VARIABLE_RevItemFinalises_26,
  MR_Word STATE_VARIABLE_RevItemMutables_0_27,
  MR_Word * STATE_VARIABLE_RevItemMutables_28,
  MR_Word STATE_VARIABLE_RevItemReserveTags_0_29,
  MR_Word * STATE_VARIABLE_RevItemReserveTags_30,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_31,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_32,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_33,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_34,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_35,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_36,
  MR_Word STATE_VARIABLE_RevItemClauses_0_37,
  MR_Word * STATE_VARIABLE_RevItemClauses_38)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_RevItemClauses_38 = STATE_VARIABLE_RevItemClauses_0_37;
      *STATE_VARIABLE_RevItemPragmas3_36 = STATE_VARIABLE_RevItemPragmas3_0_35;
      *STATE_VARIABLE_RevItemPragmas2_34 = STATE_VARIABLE_RevItemPragmas2_0_33;
      *STATE_VARIABLE_RevItemForeignEnums_32 = STATE_VARIABLE_RevItemForeignEnums_0_31;
      *STATE_VARIABLE_RevItemReserveTags_30 = STATE_VARIABLE_RevItemReserveTags_0_29;
      *STATE_VARIABLE_RevItemMutables_28 = STATE_VARIABLE_RevItemMutables_0_27;
      *STATE_VARIABLE_RevItemFinalises_26 = STATE_VARIABLE_RevItemFinalises_0_25;
      *STATE_VARIABLE_RevItemInitialises_24 = STATE_VARIABLE_RevItemInitialises_0_23;
      *STATE_VARIABLE_RevItemInstances_22 = STATE_VARIABLE_RevItemInstances_0_21;
      *STATE_VARIABLE_RevItemTypeclasses_20 = STATE_VARIABLE_RevItemTypeclasses_0_19;
      *STATE_VARIABLE_RevItemPromises_18 = STATE_VARIABLE_RevItemPromises_0_17;
      *STATE_VARIABLE_RevItemModeDecls_16 = STATE_VARIABLE_RevItemModeDecls_0_15;
      *STATE_VARIABLE_RevItemPredDecls_14 = STATE_VARIABLE_RevItemPredDecls_0_13;
      *STATE_VARIABLE_RevItemModeDefns_12 = STATE_VARIABLE_RevItemModeDefns_0_11;
      *STATE_VARIABLE_RevItemInstDefns_10 = STATE_VARIABLE_RevItemInstDefns_0_9;
      *STATE_VARIABLE_RevItemTypeDefnsForeign_8 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
      *STATE_VARIABLE_RevItemTypeDefnsMercury_6 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
      *STATE_VARIABLE_RevItemTypeDefnsAbstract_4 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
    }
    else
    {
      MR_Word Item_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Items_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_RevItemPragmas3_234_234;
      MR_Word STATE_VARIABLE_RevItemPragmas2_235_235;
      MR_Word STATE_VARIABLE_RevItemForeignEnums_236_236;
      MR_Word STATE_VARIABLE_RevItemReserveTags_237_237;
      MR_Word STATE_VARIABLE_RevItemMutables_238_238;
      MR_Word STATE_VARIABLE_RevItemFinalises_239_239;
      MR_Word STATE_VARIABLE_RevItemInitialises_240_240;
      MR_Word STATE_VARIABLE_RevItemInstances_241_241;
      MR_Word STATE_VARIABLE_RevItemTypeclasses_242_242;
      MR_Word STATE_VARIABLE_RevItemPromises_243_243;
      MR_Word STATE_VARIABLE_RevItemModeDecls_244_244;
      MR_Word STATE_VARIABLE_RevItemPredDecls_245_245;
      MR_Word STATE_VARIABLE_RevItemModeDefns_246_246;
      MR_Word STATE_VARIABLE_RevItemInstDefns_247_247;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_248_248;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_249_249;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250;
      MR_Word STATE_VARIABLE_RevItemClauses_251_251;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstDefns_0_9;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDefns_0_11;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPredDecls_0_13;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDecls_0_15;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPromises_0_17;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_19;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstances_0_21;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInitialises_0_23;
      MR_Word next_value_of_STATE_VARIABLE_RevItemFinalises_0_25;
      MR_Word next_value_of_STATE_VARIABLE_RevItemMutables_0_27;
      MR_Word next_value_of_STATE_VARIABLE_RevItemReserveTags_0_29;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_31;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas2_0_33;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas3_0_35;
      MR_Word next_value_of_STATE_VARIABLE_RevItemClauses_0_37;

      switch (MR_tag((MR_Word) Item_94)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClauseInfo_115 = (MR_Word) MR_body(((MR_Word) Item_94), (MR_Integer) 0);
            MR_Word ItemMercuryStatus_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ClauseStatusItem_118;
            MR_Word _NeedQual_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

            {
              ClauseStatusItem_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ClauseStatusItem_118, 0) = ((MR_Box) (ItemMercuryStatus_116));
              MR_hl_field(MR_mktag(0), ClauseStatusItem_118, 1) = ((MR_Box) (ItemClauseInfo_115));
            }
            {
              STATE_VARIABLE_RevItemClauses_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemClauses_251_251, 0) = ((MR_Box) (ClauseStatusItem_118));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemClauses_251_251, 1) = ((MR_Box) (STATE_VARIABLE_RevItemClauses_0_37));
            }
            STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
            STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
            STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
            STATE_VARIABLE_RevItemInstDefns_247_247 = STATE_VARIABLE_RevItemInstDefns_0_9;
            STATE_VARIABLE_RevItemModeDefns_246_246 = STATE_VARIABLE_RevItemModeDefns_0_11;
            STATE_VARIABLE_RevItemPredDecls_245_245 = STATE_VARIABLE_RevItemPredDecls_0_13;
            STATE_VARIABLE_RevItemModeDecls_244_244 = STATE_VARIABLE_RevItemModeDecls_0_15;
            STATE_VARIABLE_RevItemPromises_243_243 = STATE_VARIABLE_RevItemPromises_0_17;
            STATE_VARIABLE_RevItemTypeclasses_242_242 = STATE_VARIABLE_RevItemTypeclasses_0_19;
            STATE_VARIABLE_RevItemInstances_241_241 = STATE_VARIABLE_RevItemInstances_0_21;
            STATE_VARIABLE_RevItemInitialises_240_240 = STATE_VARIABLE_RevItemInitialises_0_23;
            STATE_VARIABLE_RevItemFinalises_239_239 = STATE_VARIABLE_RevItemFinalises_0_25;
            STATE_VARIABLE_RevItemMutables_238_238 = STATE_VARIABLE_RevItemMutables_0_27;
            STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
            STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
            STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
            STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefnInfo_119 = (MR_Word) MR_body(((MR_Word) Item_94), (MR_Integer) 1);
            MR_Word TypeDefnSectionItem_120;
            MR_Word TypeDefn_123;
            MR_Word Var_121;
            MR_Word Var_122;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Integer Var_126;

            {
              TypeDefnSectionItem_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeDefnSectionItem_120, 0) = ((MR_Box) (HeadVar__2_2));
              MR_hl_field(MR_mktag(0), TypeDefnSectionItem_120, 1) = ((MR_Box) (ItemTypeDefnInfo_119));
            }
            Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_119, (MR_Integer) 0)));
            Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_119, (MR_Integer) 1)));
            TypeDefn_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_119, (MR_Integer) 2)));
            Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_119, (MR_Integer) 3)));
            Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_119, (MR_Integer) 4)));
            Var_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_119, (MR_Integer) 5)));
            switch (MR_tag((MR_Word) TypeDefn_123)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  {
                    STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsMercury_249_249, 0) = ((MR_Box) (TypeDefnSectionItem_120));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsMercury_249_249, 1) = ((MR_Box) (STATE_VARIABLE_RevItemTypeDefnsMercury_0_5));
                  }
                  STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                  STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsForeign_248_248, 0) = ((MR_Box) (TypeDefnSectionItem_120));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsForeign_248_248, 1) = ((MR_Box) (STATE_VARIABLE_RevItemTypeDefnsForeign_0_7));
                  }
                  STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                  STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeDefn_123, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsMercury_249_249, 0) = ((MR_Box) (TypeDefnSectionItem_120));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsMercury_249_249, 1) = ((MR_Box) (STATE_VARIABLE_RevItemTypeDefnsMercury_0_5));
                      }
                      STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                      STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250, 0) = ((MR_Box) (TypeDefnSectionItem_120));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250, 1) = ((MR_Box) (STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3));
                      }
                      STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                      STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                    }
                    break;
                }
                break;
            }
            STATE_VARIABLE_RevItemInstDefns_247_247 = STATE_VARIABLE_RevItemInstDefns_0_9;
            STATE_VARIABLE_RevItemModeDefns_246_246 = STATE_VARIABLE_RevItemModeDefns_0_11;
            STATE_VARIABLE_RevItemPredDecls_245_245 = STATE_VARIABLE_RevItemPredDecls_0_13;
            STATE_VARIABLE_RevItemModeDecls_244_244 = STATE_VARIABLE_RevItemModeDecls_0_15;
            STATE_VARIABLE_RevItemPromises_243_243 = STATE_VARIABLE_RevItemPromises_0_17;
            STATE_VARIABLE_RevItemTypeclasses_242_242 = STATE_VARIABLE_RevItemTypeclasses_0_19;
            STATE_VARIABLE_RevItemInstances_241_241 = STATE_VARIABLE_RevItemInstances_0_21;
            STATE_VARIABLE_RevItemInitialises_240_240 = STATE_VARIABLE_RevItemInitialises_0_23;
            STATE_VARIABLE_RevItemFinalises_239_239 = STATE_VARIABLE_RevItemFinalises_0_25;
            STATE_VARIABLE_RevItemMutables_238_238 = STATE_VARIABLE_RevItemMutables_0_27;
            STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
            STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
            STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
            STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
            STATE_VARIABLE_RevItemClauses_251_251 = STATE_VARIABLE_RevItemClauses_0_37;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemInstDefnInfo_132 = (MR_Word) MR_body(((MR_Word) Item_94), (MR_Integer) 2);
            MR_Word InstDefnStatusItem_133;
            MR_Word ItemMercuryStatus_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
            MR_Word _NeedQual_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

            {
              InstDefnStatusItem_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InstDefnStatusItem_133, 0) = ((MR_Box) (ItemMercuryStatus_271));
              MR_hl_field(MR_mktag(0), InstDefnStatusItem_133, 1) = ((MR_Box) (ItemInstDefnInfo_132));
            }
            {
              STATE_VARIABLE_RevItemInstDefns_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemInstDefns_247_247, 0) = ((MR_Box) (InstDefnStatusItem_133));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemInstDefns_247_247, 1) = ((MR_Box) (STATE_VARIABLE_RevItemInstDefns_0_9));
            }
            STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
            STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
            STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
            STATE_VARIABLE_RevItemModeDefns_246_246 = STATE_VARIABLE_RevItemModeDefns_0_11;
            STATE_VARIABLE_RevItemPredDecls_245_245 = STATE_VARIABLE_RevItemPredDecls_0_13;
            STATE_VARIABLE_RevItemModeDecls_244_244 = STATE_VARIABLE_RevItemModeDecls_0_15;
            STATE_VARIABLE_RevItemPromises_243_243 = STATE_VARIABLE_RevItemPromises_0_17;
            STATE_VARIABLE_RevItemTypeclasses_242_242 = STATE_VARIABLE_RevItemTypeclasses_0_19;
            STATE_VARIABLE_RevItemInstances_241_241 = STATE_VARIABLE_RevItemInstances_0_21;
            STATE_VARIABLE_RevItemInitialises_240_240 = STATE_VARIABLE_RevItemInitialises_0_23;
            STATE_VARIABLE_RevItemFinalises_239_239 = STATE_VARIABLE_RevItemFinalises_0_25;
            STATE_VARIABLE_RevItemMutables_238_238 = STATE_VARIABLE_RevItemMutables_0_27;
            STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
            STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
            STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
            STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
            STATE_VARIABLE_RevItemClauses_251_251 = STATE_VARIABLE_RevItemClauses_0_37;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item_94, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemModeDefnInfo_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_94, (MR_Integer) 1)));
                MR_Word ModeDefnStatusItem_135;
                MR_Word ItemMercuryStatus_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
                MR_Word _NeedQual_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

                {
                  ModeDefnStatusItem_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ModeDefnStatusItem_135, 0) = ((MR_Box) (ItemMercuryStatus_274));
                  MR_hl_field(MR_mktag(0), ModeDefnStatusItem_135, 1) = ((MR_Box) (ItemModeDefnInfo_134));
                }
                {
                  STATE_VARIABLE_RevItemModeDefns_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemModeDefns_246_246, 0) = ((MR_Box) (ModeDefnStatusItem_135));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemModeDefns_246_246, 1) = ((MR_Box) (STATE_VARIABLE_RevItemModeDefns_0_11));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_247_247 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemPredDecls_245_245 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_244_244 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_243_243 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_242_242 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_241_241 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_240_240 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_239_239 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_238_238 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
                STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
                STATE_VARIABLE_RevItemClauses_251_251 = STATE_VARIABLE_RevItemClauses_0_37;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemPredDeclInfo_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_94, (MR_Integer) 1)));
                MR_Word PredDeclSectionItem_137;

                {
                  PredDeclSectionItem_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PredDeclSectionItem_137, 0) = ((MR_Box) (HeadVar__2_2));
                  MR_hl_field(MR_mktag(0), PredDeclSectionItem_137, 1) = ((MR_Box) (ItemPredDeclInfo_136));
                }
                {
                  STATE_VARIABLE_RevItemPredDecls_245_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPredDecls_245_245, 0) = ((MR_Box) (PredDeclSectionItem_137));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPredDecls_245_245, 1) = ((MR_Box) (STATE_VARIABLE_RevItemPredDecls_0_13));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_247_247 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_246_246 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemModeDecls_244_244 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_243_243 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_242_242 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_241_241 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_240_240 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_239_239 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_238_238 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
                STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
                STATE_VARIABLE_RevItemClauses_251_251 = STATE_VARIABLE_RevItemClauses_0_37;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemModeDeclInfo_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_94, (MR_Integer) 1)));
                MR_Word ModeDeclStatusItem_139;
                MR_Word ItemMercuryStatus_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
                MR_Word _NeedQual_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

                {
                  ModeDeclStatusItem_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ModeDeclStatusItem_139, 0) = ((MR_Box) (ItemMercuryStatus_277));
                  MR_hl_field(MR_mktag(0), ModeDeclStatusItem_139, 1) = ((MR_Box) (ItemModeDeclInfo_138));
                }
                {
                  STATE_VARIABLE_RevItemModeDecls_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemModeDecls_244_244, 0) = ((MR_Box) (ModeDeclStatusItem_139));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemModeDecls_244_244, 1) = ((MR_Box) (STATE_VARIABLE_RevItemModeDecls_0_15));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_247_247 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_246_246 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_245_245 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemPromises_243_243 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_242_242 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_241_241 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_240_240 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_239_239 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_238_238 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
                STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
                STATE_VARIABLE_RevItemClauses_251_251 = STATE_VARIABLE_RevItemClauses_0_37;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragmaInfo0_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_94, (MR_Integer) 1)));
                MR_Word PragmaType_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragmaInfo0_152, (MR_Integer) 0)));
                MR_Word ItemMercuryStatus_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
                MR_Word MaybeAttrs_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragmaInfo0_152, (MR_Integer) 1)));
                MR_Word Context_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragmaInfo0_152, (MR_Integer) 2)));
                MR_Integer SeqNum_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPragmaInfo0_152, (MR_Integer) 3)));
                MR_Word _NeedQual_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) PragmaType_153)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word Pragma2StatusItem_185;

                      {
                        Pragma2StatusItem_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Pragma2StatusItem_185, 0) = ((MR_Box) (ItemMercuryStatus_295));
                        MR_hl_field(MR_mktag(0), Pragma2StatusItem_185, 1) = ((MR_Box) (ItemPragmaInfo0_152));
                      }
                      {
                        STATE_VARIABLE_RevItemPragmas2_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas2_235_235, 0) = ((MR_Box) (Pragma2StatusItem_185));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas2_235_235, 1) = ((MR_Box) (STATE_VARIABLE_RevItemPragmas2_0_33));
                      }
                      STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                      STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                      STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Pragma3StatusItem_196;

                      {
                        Pragma3StatusItem_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Pragma3StatusItem_196, 0) = ((MR_Box) (ItemMercuryStatus_295));
                        MR_hl_field(MR_mktag(0), Pragma3StatusItem_196, 1) = ((MR_Box) (ItemPragmaInfo0_152));
                      }
                      {
                        STATE_VARIABLE_RevItemPragmas3_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas3_234_234, 0) = ((MR_Box) (Pragma3StatusItem_196));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas3_234_234, 1) = ((MR_Box) (STATE_VARIABLE_RevItemPragmas3_0_35));
                      }
                      STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                      STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                      STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_153, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 4:
                      case (MR_Integer) 15:
                      case (MR_Integer) 16:
                      case (MR_Integer) 17:
                      case (MR_Integer) 21:
                      case (MR_Integer) 22:
                      case (MR_Integer) 27:
                      case (MR_Integer) 28:
                        {
                          MR_Word Pragma3StatusItem_196;

                          {
                            Pragma3StatusItem_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Pragma3StatusItem_196, 0) = ((MR_Box) (ItemMercuryStatus_295));
                            MR_hl_field(MR_mktag(0), Pragma3StatusItem_196, 1) = ((MR_Box) (ItemPragmaInfo0_152));
                          }
                          {
                            STATE_VARIABLE_RevItemPragmas3_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas3_234_234, 0) = ((MR_Box) (Pragma3StatusItem_196));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas3_234_234, 1) = ((MR_Box) (STATE_VARIABLE_RevItemPragmas3_0_35));
                          }
                          STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                          STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                          STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
                        }
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 3:
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                      case (MR_Integer) 8:
                      case (MR_Integer) 9:
                      case (MR_Integer) 10:
                      case (MR_Integer) 11:
                      case (MR_Integer) 12:
                      case (MR_Integer) 13:
                      case (MR_Integer) 14:
                      case (MR_Integer) 18:
                      case (MR_Integer) 19:
                      case (MR_Integer) 20:
                      case (MR_Integer) 23:
                      case (MR_Integer) 24:
                      case (MR_Integer) 25:
                      case (MR_Integer) 26:
                      case (MR_Integer) 29:
                      case (MR_Integer) 31:
                        {
                          MR_Word Pragma2StatusItem_185;

                          {
                            Pragma2StatusItem_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Pragma2StatusItem_185, 0) = ((MR_Box) (ItemMercuryStatus_295));
                            MR_hl_field(MR_mktag(0), Pragma2StatusItem_185, 1) = ((MR_Box) (ItemPragmaInfo0_152));
                          }
                          {
                            STATE_VARIABLE_RevItemPragmas2_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas2_235_235, 0) = ((MR_Box) (Pragma2StatusItem_185));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas2_235_235, 1) = ((MR_Box) (STATE_VARIABLE_RevItemPragmas2_0_33));
                          }
                          STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                          STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                          STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word PragmaFEStatusItem_161;

                          {
                            PragmaFEStatusItem_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PragmaFEStatusItem_161, 0) = ((MR_Box) (ItemMercuryStatus_295));
                            MR_hl_field(MR_mktag(0), PragmaFEStatusItem_161, 1) = ((MR_Box) (ItemPragmaInfo0_152));
                          }
                          {
                            STATE_VARIABLE_RevItemForeignEnums_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemForeignEnums_236_236, 0) = ((MR_Box) (PragmaFEStatusItem_161));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemForeignEnums_236_236, 1) = ((MR_Box) (STATE_VARIABLE_RevItemForeignEnums_0_31));
                          }
                          STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                          STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
                          STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
                        }
                        break;
                      case (MR_Integer) 30:
                        {
                          MR_Word PragmaRTStatusItem_159;

                          {
                            PragmaRTStatusItem_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), PragmaRTStatusItem_159, 0) = ((MR_Box) (ItemMercuryStatus_295));
                            MR_hl_field(MR_mktag(0), PragmaRTStatusItem_159, 1) = ((MR_Box) (ItemPragmaInfo0_152));
                          }
                          {
                            STATE_VARIABLE_RevItemReserveTags_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemReserveTags_237_237, 0) = ((MR_Box) (PragmaRTStatusItem_159));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemReserveTags_237_237, 1) = ((MR_Box) (STATE_VARIABLE_RevItemReserveTags_0_29));
                          }
                          STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                          STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
                          STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_247_247 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_246_246 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_245_245 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_244_244 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_243_243 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_242_242 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_241_241 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_240_240 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_239_239 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_238_238 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemClauses_251_251 = STATE_VARIABLE_RevItemClauses_0_37;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromiseInfo_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_94, (MR_Integer) 1)));
                MR_Word PromiseStatusItem_141;
                MR_Word ItemMercuryStatus_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
                MR_Word _NeedQual_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

                {
                  PromiseStatusItem_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PromiseStatusItem_141, 0) = ((MR_Box) (ItemMercuryStatus_280));
                  MR_hl_field(MR_mktag(0), PromiseStatusItem_141, 1) = ((MR_Box) (ItemPromiseInfo_140));
                }
                {
                  STATE_VARIABLE_RevItemPromises_243_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPromises_243_243, 0) = ((MR_Box) (PromiseStatusItem_141));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPromises_243_243, 1) = ((MR_Box) (STATE_VARIABLE_RevItemPromises_0_17));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_247_247 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_246_246 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_245_245 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_244_244 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemTypeclasses_242_242 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_241_241 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_240_240 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_239_239 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_238_238 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
                STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
                STATE_VARIABLE_RevItemClauses_251_251 = STATE_VARIABLE_RevItemClauses_0_37;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeclassInfo_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_94, (MR_Integer) 1)));
                MR_Word TypeclassSectionItem_143;

                {
                  TypeclassSectionItem_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeclassSectionItem_143, 0) = ((MR_Box) (HeadVar__2_2));
                  MR_hl_field(MR_mktag(0), TypeclassSectionItem_143, 1) = ((MR_Box) (ItemTypeclassInfo_142));
                }
                {
                  STATE_VARIABLE_RevItemTypeclasses_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeclasses_242_242, 0) = ((MR_Box) (TypeclassSectionItem_143));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeclasses_242_242, 1) = ((MR_Box) (STATE_VARIABLE_RevItemTypeclasses_0_19));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_247_247 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_246_246 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_245_245 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_244_244 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_243_243 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemInstances_241_241 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_240_240 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_239_239 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_238_238 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
                STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
                STATE_VARIABLE_RevItemClauses_251_251 = STATE_VARIABLE_RevItemClauses_0_37;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_94, (MR_Integer) 1)));
                MR_Word InstanceStatusItem_145;
                MR_Word ItemMercuryStatus_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
                MR_Word _NeedQual_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

                {
                  InstanceStatusItem_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InstanceStatusItem_145, 0) = ((MR_Box) (ItemMercuryStatus_283));
                  MR_hl_field(MR_mktag(0), InstanceStatusItem_145, 1) = ((MR_Box) (ItemInstanceInfo_144));
                }
                {
                  STATE_VARIABLE_RevItemInstances_241_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemInstances_241_241, 0) = ((MR_Box) (InstanceStatusItem_145));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemInstances_241_241, 1) = ((MR_Box) (STATE_VARIABLE_RevItemInstances_0_21));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_247_247 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_246_246 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_245_245 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_244_244 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_243_243 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_242_242 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInitialises_240_240 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_239_239 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_238_238 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
                STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
                STATE_VARIABLE_RevItemClauses_251_251 = STATE_VARIABLE_RevItemClauses_0_37;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInitialiseInfo_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_94, (MR_Integer) 1)));
                MR_Word InitialiseStatusItem_147;
                MR_Word ItemMercuryStatus_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
                MR_Word _NeedQual_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

                {
                  InitialiseStatusItem_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InitialiseStatusItem_147, 0) = ((MR_Box) (ItemMercuryStatus_286));
                  MR_hl_field(MR_mktag(0), InitialiseStatusItem_147, 1) = ((MR_Box) (ItemInitialiseInfo_146));
                }
                {
                  STATE_VARIABLE_RevItemInitialises_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemInitialises_240_240, 0) = ((MR_Box) (InitialiseStatusItem_147));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemInitialises_240_240, 1) = ((MR_Box) (STATE_VARIABLE_RevItemInitialises_0_23));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_247_247 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_246_246 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_245_245 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_244_244 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_243_243 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_242_242 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_241_241 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemFinalises_239_239 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_238_238 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
                STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
                STATE_VARIABLE_RevItemClauses_251_251 = STATE_VARIABLE_RevItemClauses_0_37;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word ItemFinaliseInfo_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_94, (MR_Integer) 1)));
                MR_Word FinaliseStatusItem_149;
                MR_Word ItemMercuryStatus_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
                MR_Word _NeedQual_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

                {
                  FinaliseStatusItem_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), FinaliseStatusItem_149, 0) = ((MR_Box) (ItemMercuryStatus_289));
                  MR_hl_field(MR_mktag(0), FinaliseStatusItem_149, 1) = ((MR_Box) (ItemFinaliseInfo_148));
                }
                {
                  STATE_VARIABLE_RevItemFinalises_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemFinalises_239_239, 0) = ((MR_Box) (FinaliseStatusItem_149));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemFinalises_239_239, 1) = ((MR_Box) (STATE_VARIABLE_RevItemFinalises_0_25));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_247_247 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_246_246 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_245_245 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_244_244 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_243_243 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_242_242 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_241_241 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_240_240 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemMutables_238_238 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
                STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
                STATE_VARIABLE_RevItemClauses_251_251 = STATE_VARIABLE_RevItemClauses_0_37;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemMutableInfo_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_94, (MR_Integer) 1)));
                MR_Word MutableSectionItem_151;

                {
                  MutableSectionItem_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MutableSectionItem_151, 0) = ((MR_Box) (HeadVar__2_2));
                  MR_hl_field(MR_mktag(0), MutableSectionItem_151, 1) = ((MR_Box) (ItemMutableInfo_150));
                }
                {
                  STATE_VARIABLE_RevItemMutables_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemMutables_238_238, 0) = ((MR_Box) (MutableSectionItem_151));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemMutables_238_238, 1) = ((MR_Box) (STATE_VARIABLE_RevItemMutables_0_27));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_247_247 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_246_246 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_245_245 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_244_244 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_243_243 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_242_242 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_241_241 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_240_240 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_239_239 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
                STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
                STATE_VARIABLE_RevItemClauses_251_251 = STATE_VARIABLE_RevItemClauses_0_37;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_249_249 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_248_248 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_247_247 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_246_246 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_245_245 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_244_244 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_243_243 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_242_242 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_241_241 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_240_240 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_239_239 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_238_238 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemReserveTags_237_237 = STATE_VARIABLE_RevItemReserveTags_0_29;
                STATE_VARIABLE_RevItemForeignEnums_236_236 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemPragmas2_235_235 = STATE_VARIABLE_RevItemPragmas2_0_33;
                STATE_VARIABLE_RevItemPragmas3_234_234 = STATE_VARIABLE_RevItemPragmas3_0_35;
                STATE_VARIABLE_RevItemClauses_251_251 = STATE_VARIABLE_RevItemClauses_0_37;
              }
              break;
          }
          break;
      }
      /* direct tailcall eliminated */
      next_value_of_HeadVar__1_1 = Items_95;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3 = STATE_VARIABLE_RevItemTypeDefnsAbstract_250_250;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_5 = STATE_VARIABLE_RevItemTypeDefnsMercury_249_249;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_7 = STATE_VARIABLE_RevItemTypeDefnsForeign_248_248;
      next_value_of_STATE_VARIABLE_RevItemInstDefns_0_9 = STATE_VARIABLE_RevItemInstDefns_247_247;
      next_value_of_STATE_VARIABLE_RevItemModeDefns_0_11 = STATE_VARIABLE_RevItemModeDefns_246_246;
      next_value_of_STATE_VARIABLE_RevItemPredDecls_0_13 = STATE_VARIABLE_RevItemPredDecls_245_245;
      next_value_of_STATE_VARIABLE_RevItemModeDecls_0_15 = STATE_VARIABLE_RevItemModeDecls_244_244;
      next_value_of_STATE_VARIABLE_RevItemPromises_0_17 = STATE_VARIABLE_RevItemPromises_243_243;
      next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_19 = STATE_VARIABLE_RevItemTypeclasses_242_242;
      next_value_of_STATE_VARIABLE_RevItemInstances_0_21 = STATE_VARIABLE_RevItemInstances_241_241;
      next_value_of_STATE_VARIABLE_RevItemInitialises_0_23 = STATE_VARIABLE_RevItemInitialises_240_240;
      next_value_of_STATE_VARIABLE_RevItemFinalises_0_25 = STATE_VARIABLE_RevItemFinalises_239_239;
      next_value_of_STATE_VARIABLE_RevItemMutables_0_27 = STATE_VARIABLE_RevItemMutables_238_238;
      next_value_of_STATE_VARIABLE_RevItemReserveTags_0_29 = STATE_VARIABLE_RevItemReserveTags_237_237;
      next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_31 = STATE_VARIABLE_RevItemForeignEnums_236_236;
      next_value_of_STATE_VARIABLE_RevItemPragmas2_0_33 = STATE_VARIABLE_RevItemPragmas2_235_235;
      next_value_of_STATE_VARIABLE_RevItemPragmas3_0_35 = STATE_VARIABLE_RevItemPragmas3_234_234;
      next_value_of_STATE_VARIABLE_RevItemClauses_0_37 = STATE_VARIABLE_RevItemClauses_251_251;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
      STATE_VARIABLE_RevItemTypeDefnsMercury_0_5 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
      STATE_VARIABLE_RevItemTypeDefnsForeign_0_7 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
      STATE_VARIABLE_RevItemInstDefns_0_9 = next_value_of_STATE_VARIABLE_RevItemInstDefns_0_9;
      STATE_VARIABLE_RevItemModeDefns_0_11 = next_value_of_STATE_VARIABLE_RevItemModeDefns_0_11;
      STATE_VARIABLE_RevItemPredDecls_0_13 = next_value_of_STATE_VARIABLE_RevItemPredDecls_0_13;
      STATE_VARIABLE_RevItemModeDecls_0_15 = next_value_of_STATE_VARIABLE_RevItemModeDecls_0_15;
      STATE_VARIABLE_RevItemPromises_0_17 = next_value_of_STATE_VARIABLE_RevItemPromises_0_17;
      STATE_VARIABLE_RevItemTypeclasses_0_19 = next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_19;
      STATE_VARIABLE_RevItemInstances_0_21 = next_value_of_STATE_VARIABLE_RevItemInstances_0_21;
      STATE_VARIABLE_RevItemInitialises_0_23 = next_value_of_STATE_VARIABLE_RevItemInitialises_0_23;
      STATE_VARIABLE_RevItemFinalises_0_25 = next_value_of_STATE_VARIABLE_RevItemFinalises_0_25;
      STATE_VARIABLE_RevItemMutables_0_27 = next_value_of_STATE_VARIABLE_RevItemMutables_0_27;
      STATE_VARIABLE_RevItemReserveTags_0_29 = next_value_of_STATE_VARIABLE_RevItemReserveTags_0_29;
      STATE_VARIABLE_RevItemForeignEnums_0_31 = next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_31;
      STATE_VARIABLE_RevItemPragmas2_0_33 = next_value_of_STATE_VARIABLE_RevItemPragmas2_0_33;
      STATE_VARIABLE_RevItemPragmas3_0_35 = next_value_of_STATE_VARIABLE_RevItemPragmas3_0_35;
      STATE_VARIABLE_RevItemClauses_0_37 = next_value_of_STATE_VARIABLE_RevItemClauses_0_37;
      continue;
    }
    break;
  }
}

void mercury__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.make_hlds.make_hlds_passes.make_hlds_separate_items. */
