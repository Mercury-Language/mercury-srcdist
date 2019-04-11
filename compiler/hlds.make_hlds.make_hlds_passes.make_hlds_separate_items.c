/*
** Automatically generated from `make_hlds_separate_items.m'
** by the Mercury compiler,
** version rotd-2017-06-02
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
#include "check_hlds.unify_proc.mih"
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
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho4_36_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_36_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho2_36_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho1_36_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_34_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_4,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_6,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_8,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_10,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_12,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_14,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_16,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_18,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_20,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_22,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_24,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_26,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_28,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_30,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_32,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_34);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__int_module_section_status_2_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__src_module_section_status_2_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SrcSection_3,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4);


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
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[4]))),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;

    *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[15];
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;

    *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[15];
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho4_36_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;

        if ((hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3;
          }
        else
          {
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 3)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 4)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___Incls_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116;

            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__src_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_109, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114);
            }
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 0)));
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 1)));
            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112));
            }
            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3));
            }
            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_34_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPromises_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstances_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInitialises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemFinalises_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemMutables_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas2_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas3_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemClauses_0_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;

              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemClauses_0_35;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas3_0_33;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas2_0_31;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemMutables_0_29;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemFinalises_0_27;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInitialises_0_25;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstances_0_23;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPromises_0_19;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_36_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;

        if ((hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3;
          }
        else
          {
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 3)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 4)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___Incls_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116;

            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__int_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_109, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114);
            }
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 0)));
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 1)));
            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112));
            }
            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3));
            }
            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_34_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPromises_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstances_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInitialises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemFinalises_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemMutables_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas2_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas3_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemClauses_0_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;

              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemClauses_0_35;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas3_0_33;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas2_0_31;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemMutables_0_29;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemFinalises_0_27;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInitialises_0_25;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstances_0_23;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPromises_0_19;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho2_36_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;

        if ((hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3;
          }
        else
          {
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 3)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 4)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___Incls_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116;

            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114);
            }
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 0)));
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 1)));
            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112));
            }
            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3));
            }
            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_34_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPromises_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstances_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInitialises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemFinalises_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemMutables_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas2_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas3_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemClauses_0_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;

              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemClauses_0_35;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas3_0_33;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas2_0_31;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemMutables_0_29;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemFinalises_0_27;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInitialises_0_25;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstances_0_23;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPromises_0_19;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho1_36_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;

        if ((hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3;
          }
        else
          {
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 3)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 4)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___Incls_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116;

            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114);
            }
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 0)));
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 1)));
            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112));
            }
            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3));
            }
            {
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_34_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPromises_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstances_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInitialises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemFinalises_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemMutables_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas2_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas3_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemClauses_0_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;

              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemClauses_0_35;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas3_0_33;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas2_0_31;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemMutables_0_29;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemFinalises_0_27;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInitialises_0_25;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstances_0_23;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_21;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPromises_0_19;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDecls_0_17;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPredDecls_0_15;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDefns_0_13;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstDefns_0_11;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_34_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_4,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_6,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_8,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_10,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_12,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_14,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_16,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_18,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_20,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_22,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_24,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_26,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_28,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_30,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_32,
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_34)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;

        if ((hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_34 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_32 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_30 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_28 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_26 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_24 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_22 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_20 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_18 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_16 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_14 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_12 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_10 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_8 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_6 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_4 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
          }
        else
          {
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235;
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236;

            switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemClauseInfo_103 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84), (MR_Integer) 0);
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ClauseStatusItem_106;
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

                  {
                    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ClauseStatusItem_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ClauseStatusItem_106, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_104));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ClauseStatusItem_106, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemClauseInfo_103));
                  }
                  {
                    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ClauseStatusItem_106));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33));
                  }
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84), (MR_Integer) 1);
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108;
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefn_111;
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_109;
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_110;
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_112;
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_113;
                  MR_Integer hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_114;

                  {
                    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107));
                  }
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107, (MR_Integer) 0)));
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107, (MR_Integer) 1)));
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefn_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107, (MR_Integer) 2)));
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107, (MR_Integer) 3)));
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107, (MR_Integer) 4)));
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107, (MR_Integer) 5)));
                  switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefn_111)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      {
                        {
                          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5));
                        }
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3));
                        }
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefn_111, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            {
                              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5));
                            }
                            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            {
                              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7));
                            }
                            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                          }
                          break;
                      }
                      break;
                  }
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstDefnInfo_125 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84), (MR_Integer) 2);
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstDefnStatusItem_126;
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

                  {
                    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstDefnStatusItem_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstDefnStatusItem_126, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_254));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstDefnStatusItem_126, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstDefnInfo_125));
                  }
                  {
                    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstDefnStatusItem_126));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9));
                  }
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDefnInfo_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDefnStatusItem_128;
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDefnStatusItem_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDefnStatusItem_128, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_257));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDefnStatusItem_128, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDefnInfo_127));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDefnStatusItem_128));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11));
                      }
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPredDeclInfo_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PredDeclSectionItem_130;

                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PredDeclSectionItem_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PredDeclSectionItem_130, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PredDeclSectionItem_130, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPredDeclInfo_129));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PredDeclSectionItem_130));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13));
                      }
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDeclInfo_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDeclStatusItem_132;
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDeclStatusItem_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDeclStatusItem_132, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_260));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDeclStatusItem_132, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDeclInfo_131));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDeclStatusItem_132));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15));
                      }
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PragmaType_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_145, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__MaybeAttrs_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_145, (MR_Integer) 1)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Context_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_145, (MR_Integer) 2)));
                      MR_Integer hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SeqNum_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_145, (MR_Integer) 3)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

                      switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PragmaType_146)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                          {
                            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_175;

                            {
                              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_175, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_276));
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_175, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_145));
                            }
                            {
                              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_175));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29));
                            }
                            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_187;

                            {
                              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_187, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_276));
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_187, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_145));
                            }
                            {
                              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_187));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31));
                            }
                            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                          }
                          break;
                        case (MR_Integer) 3:
                          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PragmaType_146, (MR_Integer) 0)))) {
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
                            case (MR_Integer) 30:
                              {
                                MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_187;

                                {
                                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_187, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_276));
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_187, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_145));
                                }
                                {
                                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_187));
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31));
                                }
                                hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                              }
                              break;
                            case (MR_Integer) 1:
                            case (MR_Integer) 2:
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
                                MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_175;

                                {
                                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_175, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_276));
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_175, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_145));
                                }
                                {
                                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_175));
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29));
                                }
                                hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                              }
                              break;
                          }
                          break;
                      }
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPromiseInfo_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PromiseStatusItem_134;
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PromiseStatusItem_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PromiseStatusItem_134, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_263));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PromiseStatusItem_134, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPromiseInfo_133));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PromiseStatusItem_134));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17));
                      }
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeclassInfo_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeclassSectionItem_136;

                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeclassSectionItem_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeclassSectionItem_136, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeclassSectionItem_136, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeclassInfo_135));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeclassSectionItem_136));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19));
                      }
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstanceInfo_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstanceStatusItem_138;
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstanceStatusItem_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstanceStatusItem_138, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_266));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstanceStatusItem_138, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstanceInfo_137));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstanceStatusItem_138));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21));
                      }
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInitialiseInfo_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InitialiseStatusItem_140;
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InitialiseStatusItem_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InitialiseStatusItem_140, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_269));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InitialiseStatusItem_140, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInitialiseInfo_139));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InitialiseStatusItem_140));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23));
                      }
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemFinaliseInfo_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__FinaliseStatusItem_142;
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__FinaliseStatusItem_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__FinaliseStatusItem_142, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_272));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__FinaliseStatusItem_142, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemFinaliseInfo_141));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__FinaliseStatusItem_142));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25));
                      }
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMutableInfo_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__MutableSectionItem_144;

                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__MutableSectionItem_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__MutableSectionItem_144, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__MutableSectionItem_144, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMutableInfo_143));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__MutableSectionItem_144));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27));
                      }
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
                    }
                    break;
                  case (MR_Integer) 10:
                    {
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
                    }
                    break;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_85;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_235_235;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_234_234;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_233_233;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstDefns_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_232_232;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_231_231;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPredDecls_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_230_230;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_229_229;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPromises_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_228_228;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_227_227;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstances_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_226_226;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInitialises_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_225_225;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemFinalises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_224_224;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemMutables_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_223_223;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas2_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_222_222;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas3_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_221_221;
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemClauses_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_236_236;

              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemClauses_0_33;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas3_0_31;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPragmas2_0_29;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemMutables_0_27;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemFinalises_0_25;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInitialises_0_23;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstances_0_21;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_19;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPromises_0_17;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDecls_0_15;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemPredDecls_0_13;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemModeDefns_0_11;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemInstDefns_0_9;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__int_module_section_status_2_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_9;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_10;

    if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3)) == (MR_mktag((MR_Integer) 1))))
      {
        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[3]);
        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_10 = (MR_Integer) 0;
      }
    else
      {
        MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ImportLocn_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
        MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ImportedOrUsed_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
        MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_12;
        MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___IntFileKind_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3, (MR_Integer) 1)))) & (MR_Integer) 3);

        {
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_12, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ImportLocn_7));
        }
        {
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_9, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Var_12));
        }
        switch (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ImportedOrUsed_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_10 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_10 = (MR_Integer) 0;
            break;
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_10));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__src_module_section_status_2_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SrcSection_3,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_5;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_6;

    switch (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SrcSection_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_5 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[0];
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_6 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_5 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[1];
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_6 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_5 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[2];
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_6 = (MR_Integer) 1;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_6));
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_18_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemAvailLists_20,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnsAbstract_21,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnsMercury_22,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnsForeign_23,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstDefns_24,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDefns_25,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPredDecls_26,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDecls_27,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPromises_28,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeclasses_29,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstances_30,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInitialises_31,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemFinalises_32,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMutables_33,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmas2_34,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmas3_35,
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemClauses_36)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_184_184;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_195_195;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SrcItemBlocks_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__DirectIntItemBlocks_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IndirectIntItemBlocks_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__OptItemBlocks_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntForOptItemBlocks_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_80_80;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_81_81;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_82_82;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_83_83;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_84_84;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_85_85;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_86_86;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_87_87;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_88_88;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_89_89;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_90_90;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_91_91;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_92_92;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_93_93;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_94_94;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_95_95;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_96_96;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_98_98;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_99_99;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_100_100;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_101_101;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_102_102;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_103_103;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_104_104;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_105_105;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_106_106;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_107_107;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_108_108;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_109_109;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_110_110;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_111_111;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_112_112;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_113_113;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_114_114;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_116_116;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_117_117;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_118_118;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_119_119;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_120_120;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_121_121;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_122_122;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_123_123;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_124_124;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_125_125;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_126_126;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_127_127;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_128_128;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_129_129;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_130_130;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_131_131;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_132_132;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_134_134;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_135_135;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_136_136;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_137_137;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_138_138;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_139_139;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_140_140;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_141_141;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_142_142;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_143_143;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_144_144;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_145_145;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_146_146;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_147_147;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_148_148;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_149_149;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_150_150;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___ModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___ModuleNameContext_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___ModuleVersionNumbers_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 2)));

    {
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho4_36_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SrcItemBlocks_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_80_80, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_81_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_82_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_83_83, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_84_84, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_85_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_86_86, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_87_87, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_88_88, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_89_89, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_90_90, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_91_91, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_92_92, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_93_93, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_94_94, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_95_95, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_96_96);
    }
    {
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_36_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__DirectIntItemBlocks_41, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_80_80, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_98_98, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_81_81, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_99_99, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_82_82, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_100_100, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_83_83, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_101_101, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_84_84, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_102_102, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_85_85, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_103_103, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_86_86, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_104_104, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_87_87, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_105_105, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_88_88, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_106_106, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_89_89, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_107_107, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_90_90, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_108_108, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_91_91, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_109_109, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_92_92, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_110_110, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_93_93, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_111_111, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_94_94, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_112_112, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_95_95, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_113_113, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_96_96, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_114_114);
    }
    {
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_36_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IndirectIntItemBlocks_42, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_98_98, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_116_116, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_99_99, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_117_117, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_100_100, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_118_118, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_101_101, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_119_119, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_102_102, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_120_120, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_103_103, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_121_121, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_104_104, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_122_122, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_105_105, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_123_123, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_106_106, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_124_124, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_107_107, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_125_125, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_108_108, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_126_126, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_109_109, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_127_127, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_110_110, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_128_128, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_111_111, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_129_129, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_112_112, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_130_130, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_113_113, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_131_131, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_114_114, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_132_132);
    }
    {
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho2_36_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntForOptItemBlocks_44, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_116_116, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_134_134, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_117_117, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_135_135, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_118_118, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_136_136, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_119_119, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_137_137, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_120_120, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_138_138, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_121_121, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_139_139, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_122_122, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_140_140, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_123_123, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_141_141, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_124_124, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_142_142, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_125_125, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_143_143, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_126_126, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_144_144, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_127_127, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_145_145, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_128_128, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_146_146, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_129_129, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_147_147, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_130_130, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_148_148, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_131_131, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_149_149, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_132_132, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_150_150);
    }
    {
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho1_36_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__OptItemBlocks_43, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_134_134, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_135_135, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_136_136, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_137_137, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_138_138, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_139_139, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_140_140, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_141_141, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_142_142, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_143_143, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_144_144, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_145_145, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_146_146, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_147_147, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_148_148, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_149_149, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_150_150, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemAvailLists_20);
    }
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_184_184 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[2];
    {
      mercury__list__reverse_2_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_184_184, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnsAbstract_21);
    }
    {
      mercury__list__reverse_2_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_184_184, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnsMercury_22);
    }
    {
      mercury__list__reverse_2_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_184_184, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnsForeign_23);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[3], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstDefns_24);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[4], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDefns_25);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[5], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPredDecls_26);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[6], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDecls_27);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[7], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPromises_28);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[8], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeclasses_29);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[9], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstances_30);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[10], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInitialises_31);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[11], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemFinalises_32);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[12], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMutables_33);
    }
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_195_195 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[13];
    {
      *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmas2_34 = mercury__list__inst_preserving_reverse_1_f_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_195_195, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166);
    }
    {
      *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmas3_35 = mercury__list__inst_preserving_reverse_1_f_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_195_195, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[14], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemClauses_36);
    }
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
