/*
** Automatically generated from `make_hlds_separate_items.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 177 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
#line 177 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4);

#line 175 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
#line 175 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4);

#line 232 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho4_36_p_0(
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36);

#line 232 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_36_p_0(
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36);

#line 232 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho2_36_p_0(
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36);

#line 232 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho1_36_p_0(
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36);

#line 294 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_34_p_0(
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_4,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_6,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_8,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_10,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_12,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_14,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_16,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_18,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_20,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_22,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_24,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_26,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_28,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_30,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_32,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_34);

#line 173 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__int_module_section_status_2_p_0(
#line 173 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3,
#line 173 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4);

#line 171 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__src_module_section_status_2_p_0(
#line 171 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SrcSection_3,
#line 171 "make_hlds_separate_items.m"
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



#line 177 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
#line 177 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4)
#line 177 "make_hlds_separate_items.m"
{
#line 222 "make_hlds_separate_items.m"
  {
#line 222 "make_hlds_separate_items.m"
    MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;

#line 228 "make_hlds_separate_items.m"
    *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[15];
#line 222 "make_hlds_separate_items.m"
  }
#line 177 "make_hlds_separate_items.m"
}

#line 175 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
#line 175 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4)
#line 175 "make_hlds_separate_items.m"
{
#line 214 "make_hlds_separate_items.m"
  {
#line 214 "make_hlds_separate_items.m"
    MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;

#line 220 "make_hlds_separate_items.m"
    *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[15];
#line 214 "make_hlds_separate_items.m"
  }
#line 175 "make_hlds_separate_items.m"
}

#line 232 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho4_36_p_0(
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36)
#line 232 "make_hlds_separate_items.m"
{
#line 254 "make_hlds_separate_items.m"
  while (MR_TRUE)
#line 254 "make_hlds_separate_items.m"
    {
#line 254 "make_hlds_separate_items.m"
      /* tailcall optimized into a loop */
#line 254 "make_hlds_separate_items.m"
      {
#line 254 "make_hlds_separate_items.m"
        MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;

#line 254 "make_hlds_separate_items.m"
        if ((hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "make_hlds_separate_items.m"
          {
#line 262 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35;
#line 262 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33;
#line 262 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31;
#line 261 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29;
#line 261 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27;
#line 261 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25;
#line 260 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23;
#line 260 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21;
#line 259 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19;
#line 259 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17;
#line 259 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15;
#line 258 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13;
#line 258 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11;
#line 257 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
#line 256 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
#line 256 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
#line 255 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3;
#line 254 "make_hlds_separate_items.m"
          }
#line 254 "make_hlds_separate_items.m"
        else
#line 271 "make_hlds_separate_items.m"
          {
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 0)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 1)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 0)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 3)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 4)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;
#line 272 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 1)));
#line 272 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___Incls_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 2)));
#line 274 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116;

#line 273 "make_hlds_separate_items.m"
            {
#line 273 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__src_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_109, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114);
            }
#line 274 "make_hlds_separate_items.m"
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 0)));
#line 274 "make_hlds_separate_items.m"
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 1)));
#line 275 "make_hlds_separate_items.m"
            {
#line 275 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 275 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115));
#line 275 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112));
#line 275 "make_hlds_separate_items.m"
            }
#line 276 "make_hlds_separate_items.m"
            {
#line 276 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117));
#line 276 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3));
#line 276 "make_hlds_separate_items.m"
            }
#line 277 "make_hlds_separate_items.m"
            {
#line 277 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_34_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168);
            }
#line 285 "make_hlds_separate_items.m"
            /* direct tailcall eliminated */
#line 285 "make_hlds_separate_items.m"
            {
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0__tmp_copy_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0__tmp_copy_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0__tmp_copy_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0__tmp_copy_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0__tmp_copy_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0__tmp_copy_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0__tmp_copy_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0__tmp_copy_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0__tmp_copy_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0__tmp_copy_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0__tmp_copy_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0__tmp_copy_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0__tmp_copy_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0__tmp_copy_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;

#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0__tmp_copy_35;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0__tmp_copy_33;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0__tmp_copy_31;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0__tmp_copy_29;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0__tmp_copy_27;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0__tmp_copy_25;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0__tmp_copy_23;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0__tmp_copy_21;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0__tmp_copy_19;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0__tmp_copy_17;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0__tmp_copy_15;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0__tmp_copy_13;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0__tmp_copy_11;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0__tmp_copy_9;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0__tmp_copy_7;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0__tmp_copy_5;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0__tmp_copy_3;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1__tmp_copy_1;
#line 285 "make_hlds_separate_items.m"
            }
#line 285 "make_hlds_separate_items.m"
            continue;
#line 271 "make_hlds_separate_items.m"
          }
#line 254 "make_hlds_separate_items.m"
      }
#line 254 "make_hlds_separate_items.m"
      break;
#line 254 "make_hlds_separate_items.m"
    }
#line 232 "make_hlds_separate_items.m"
}

#line 232 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_36_p_0(
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36)
#line 232 "make_hlds_separate_items.m"
{
#line 254 "make_hlds_separate_items.m"
  while (MR_TRUE)
#line 254 "make_hlds_separate_items.m"
    {
#line 254 "make_hlds_separate_items.m"
      /* tailcall optimized into a loop */
#line 254 "make_hlds_separate_items.m"
      {
#line 254 "make_hlds_separate_items.m"
        MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;

#line 254 "make_hlds_separate_items.m"
        if ((hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "make_hlds_separate_items.m"
          {
#line 262 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35;
#line 262 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33;
#line 262 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31;
#line 261 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29;
#line 261 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27;
#line 261 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25;
#line 260 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23;
#line 260 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21;
#line 259 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19;
#line 259 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17;
#line 259 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15;
#line 258 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13;
#line 258 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11;
#line 257 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
#line 256 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
#line 256 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
#line 255 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3;
#line 254 "make_hlds_separate_items.m"
          }
#line 254 "make_hlds_separate_items.m"
        else
#line 271 "make_hlds_separate_items.m"
          {
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 0)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 1)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 0)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 3)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 4)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;
#line 272 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 1)));
#line 272 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___Incls_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 2)));
#line 274 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116;

#line 273 "make_hlds_separate_items.m"
            {
#line 273 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__int_module_section_status_2_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_109, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114);
            }
#line 274 "make_hlds_separate_items.m"
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 0)));
#line 274 "make_hlds_separate_items.m"
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 1)));
#line 275 "make_hlds_separate_items.m"
            {
#line 275 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 275 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115));
#line 275 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112));
#line 275 "make_hlds_separate_items.m"
            }
#line 276 "make_hlds_separate_items.m"
            {
#line 276 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117));
#line 276 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3));
#line 276 "make_hlds_separate_items.m"
            }
#line 277 "make_hlds_separate_items.m"
            {
#line 277 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_34_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168);
            }
#line 285 "make_hlds_separate_items.m"
            /* direct tailcall eliminated */
#line 285 "make_hlds_separate_items.m"
            {
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0__tmp_copy_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0__tmp_copy_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0__tmp_copy_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0__tmp_copy_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0__tmp_copy_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0__tmp_copy_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0__tmp_copy_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0__tmp_copy_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0__tmp_copy_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0__tmp_copy_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0__tmp_copy_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0__tmp_copy_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0__tmp_copy_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0__tmp_copy_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;

#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0__tmp_copy_35;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0__tmp_copy_33;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0__tmp_copy_31;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0__tmp_copy_29;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0__tmp_copy_27;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0__tmp_copy_25;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0__tmp_copy_23;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0__tmp_copy_21;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0__tmp_copy_19;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0__tmp_copy_17;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0__tmp_copy_15;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0__tmp_copy_13;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0__tmp_copy_11;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0__tmp_copy_9;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0__tmp_copy_7;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0__tmp_copy_5;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0__tmp_copy_3;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1__tmp_copy_1;
#line 285 "make_hlds_separate_items.m"
            }
#line 285 "make_hlds_separate_items.m"
            continue;
#line 271 "make_hlds_separate_items.m"
          }
#line 254 "make_hlds_separate_items.m"
      }
#line 254 "make_hlds_separate_items.m"
      break;
#line 254 "make_hlds_separate_items.m"
    }
#line 232 "make_hlds_separate_items.m"
}

#line 232 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho2_36_p_0(
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36)
#line 232 "make_hlds_separate_items.m"
{
#line 254 "make_hlds_separate_items.m"
  while (MR_TRUE)
#line 254 "make_hlds_separate_items.m"
    {
#line 254 "make_hlds_separate_items.m"
      /* tailcall optimized into a loop */
#line 254 "make_hlds_separate_items.m"
      {
#line 254 "make_hlds_separate_items.m"
        MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;

#line 254 "make_hlds_separate_items.m"
        if ((hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "make_hlds_separate_items.m"
          {
#line 262 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35;
#line 262 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33;
#line 262 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31;
#line 261 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29;
#line 261 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27;
#line 261 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25;
#line 260 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23;
#line 260 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21;
#line 259 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19;
#line 259 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17;
#line 259 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15;
#line 258 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13;
#line 258 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11;
#line 257 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
#line 256 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
#line 256 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
#line 255 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3;
#line 254 "make_hlds_separate_items.m"
          }
#line 254 "make_hlds_separate_items.m"
        else
#line 271 "make_hlds_separate_items.m"
          {
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 0)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 1)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 3)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 4)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;
#line 272 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 0)));
#line 272 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 1)));
#line 272 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___Incls_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 2)));
#line 274 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116;

#line 273 "make_hlds_separate_items.m"
            {
#line 273 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114);
            }
#line 274 "make_hlds_separate_items.m"
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 0)));
#line 274 "make_hlds_separate_items.m"
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 1)));
#line 275 "make_hlds_separate_items.m"
            {
#line 275 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 275 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115));
#line 275 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112));
#line 275 "make_hlds_separate_items.m"
            }
#line 276 "make_hlds_separate_items.m"
            {
#line 276 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117));
#line 276 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3));
#line 276 "make_hlds_separate_items.m"
            }
#line 277 "make_hlds_separate_items.m"
            {
#line 277 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_34_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168);
            }
#line 285 "make_hlds_separate_items.m"
            /* direct tailcall eliminated */
#line 285 "make_hlds_separate_items.m"
            {
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0__tmp_copy_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0__tmp_copy_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0__tmp_copy_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0__tmp_copy_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0__tmp_copy_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0__tmp_copy_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0__tmp_copy_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0__tmp_copy_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0__tmp_copy_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0__tmp_copy_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0__tmp_copy_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0__tmp_copy_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0__tmp_copy_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0__tmp_copy_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;

#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0__tmp_copy_35;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0__tmp_copy_33;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0__tmp_copy_31;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0__tmp_copy_29;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0__tmp_copy_27;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0__tmp_copy_25;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0__tmp_copy_23;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0__tmp_copy_21;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0__tmp_copy_19;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0__tmp_copy_17;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0__tmp_copy_15;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0__tmp_copy_13;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0__tmp_copy_11;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0__tmp_copy_9;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0__tmp_copy_7;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0__tmp_copy_5;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0__tmp_copy_3;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1__tmp_copy_1;
#line 285 "make_hlds_separate_items.m"
            }
#line 285 "make_hlds_separate_items.m"
            continue;
#line 271 "make_hlds_separate_items.m"
          }
#line 254 "make_hlds_separate_items.m"
      }
#line 254 "make_hlds_separate_items.m"
      break;
#line 254 "make_hlds_separate_items.m"
    }
#line 232 "make_hlds_separate_items.m"
}

#line 232 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho1_36_p_0(
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34,
#line 232 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35,
#line 232 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36)
#line 232 "make_hlds_separate_items.m"
{
#line 254 "make_hlds_separate_items.m"
  while (MR_TRUE)
#line 254 "make_hlds_separate_items.m"
    {
#line 254 "make_hlds_separate_items.m"
      /* tailcall optimized into a loop */
#line 254 "make_hlds_separate_items.m"
      {
#line 254 "make_hlds_separate_items.m"
        MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;

#line 254 "make_hlds_separate_items.m"
        if ((hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "make_hlds_separate_items.m"
          {
#line 262 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_36 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35;
#line 262 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_34 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33;
#line 262 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_32 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31;
#line 261 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_30 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29;
#line 261 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_28 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27;
#line 261 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_26 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25;
#line 260 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_24 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23;
#line 260 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_22 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21;
#line 259 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_20 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19;
#line 259 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_18 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17;
#line 259 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_16 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15;
#line 258 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_14 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13;
#line 258 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_12 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11;
#line 257 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_10 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9;
#line 256 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_8 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7;
#line 256 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_6 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5;
#line 255 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_4 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3;
#line 254 "make_hlds_separate_items.m"
          }
#line 254 "make_hlds_separate_items.m"
        else
#line 271 "make_hlds_separate_items.m"
          {
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 0)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 1)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 3)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 4)));
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
#line 271 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;
#line 272 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 0)));
#line 272 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 1)));
#line 272 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___Incls_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlock_89, (MR_Integer) 2)));
#line 274 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116;

#line 273 "make_hlds_separate_items.m"
            {
#line 273 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114);
            }
#line 274 "make_hlds_separate_items.m"
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 0)));
#line 274 "make_hlds_separate_items.m"
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, (MR_Integer) 1)));
#line 275 "make_hlds_separate_items.m"
            {
#line 275 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 275 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_115));
#line 275 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Avails_112));
#line 275 "make_hlds_separate_items.m"
            }
#line 276 "make_hlds_separate_items.m"
            {
#line 276 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AvailSectionItem_117));
#line 276 "make_hlds_separate_items.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3));
#line 276 "make_hlds_separate_items.m"
            }
#line 277 "make_hlds_separate_items.m"
            {
#line 277 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_34_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_113, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_114, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168);
            }
#line 285 "make_hlds_separate_items.m"
            /* direct tailcall eliminated */
#line 285 "make_hlds_separate_items.m"
            {
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemBlocks_90;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0__tmp_copy_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0__tmp_copy_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0__tmp_copy_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0__tmp_copy_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0__tmp_copy_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0__tmp_copy_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0__tmp_copy_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0__tmp_copy_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0__tmp_copy_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0__tmp_copy_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0__tmp_copy_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0__tmp_copy_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0__tmp_copy_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
#line 285 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0__tmp_copy_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;

#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_35 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0__tmp_copy_35;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0__tmp_copy_33;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0__tmp_copy_31;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0__tmp_copy_29;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0__tmp_copy_27;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0__tmp_copy_25;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0__tmp_copy_23;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0__tmp_copy_21;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0__tmp_copy_19;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0__tmp_copy_17;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0__tmp_copy_15;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0__tmp_copy_13;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0__tmp_copy_11;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0__tmp_copy_9;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0__tmp_copy_7;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0__tmp_copy_5;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_0__tmp_copy_3;
#line 285 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1__tmp_copy_1;
#line 285 "make_hlds_separate_items.m"
            }
#line 285 "make_hlds_separate_items.m"
            continue;
#line 271 "make_hlds_separate_items.m"
          }
#line 254 "make_hlds_separate_items.m"
      }
#line 254 "make_hlds_separate_items.m"
      break;
#line 254 "make_hlds_separate_items.m"
    }
#line 232 "make_hlds_separate_items.m"
}

#line 294 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_34_p_0(
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_4,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_6,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_8,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_10,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_12,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_14,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_16,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_18,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_20,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_22,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_24,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_26,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_28,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_30,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_32,
#line 294 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33,
#line 294 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_34)
#line 294 "make_hlds_separate_items.m"
{
#line 314 "make_hlds_separate_items.m"
  while (MR_TRUE)
#line 314 "make_hlds_separate_items.m"
    {
#line 314 "make_hlds_separate_items.m"
      /* tailcall optimized into a loop */
#line 314 "make_hlds_separate_items.m"
      {
#line 314 "make_hlds_separate_items.m"
        MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;

#line 314 "make_hlds_separate_items.m"
        if ((hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 314 "make_hlds_separate_items.m"
          {
#line 321 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_34 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
#line 321 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_32 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 321 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_30 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 320 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_28 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
#line 320 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_26 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
#line 320 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_24 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
#line 319 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_22 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
#line 319 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_20 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
#line 318 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_18 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
#line 318 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_16 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
#line 318 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_14 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
#line 317 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_12 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
#line 317 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_10 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
#line 316 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_8 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 315 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_6 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 315 "make_hlds_separate_items.m"
            *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_4 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 314 "make_hlds_separate_items.m"
          }
#line 314 "make_hlds_separate_items.m"
        else
#line 329 "make_hlds_separate_items.m"
          {
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 0)));
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1, (MR_Integer) 1)));
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234;
#line 329 "make_hlds_separate_items.m"
            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235;

#line 335 "make_hlds_separate_items.m"
#line 335 "make_hlds_separate_items.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84)) {
#line 335 "make_hlds_separate_items.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 335 "make_hlds_separate_items.m"
              case (MR_Integer) 0:
#line 331 "make_hlds_separate_items.m"
                {
#line 331 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemClauseInfo_103 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84), (MR_Integer) 0);
#line 331 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
#line 331 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ClauseStatusItem_106;
#line 332 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

#line 333 "make_hlds_separate_items.m"
                  {
#line 333 "make_hlds_separate_items.m"
                    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ClauseStatusItem_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "make_hlds_separate_items.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ClauseStatusItem_106, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_104));
#line 333 "make_hlds_separate_items.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ClauseStatusItem_106, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemClauseInfo_103));
#line 333 "make_hlds_separate_items.m"
                  }
#line 334 "make_hlds_separate_items.m"
                  {
#line 334 "make_hlds_separate_items.m"
                    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "make_hlds_separate_items.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ClauseStatusItem_106));
#line 334 "make_hlds_separate_items.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33));
#line 334 "make_hlds_separate_items.m"
                  }
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 331 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 331 "make_hlds_separate_items.m"
                }
#line 335 "make_hlds_separate_items.m"
                break;
#line 335 "make_hlds_separate_items.m"
              case (MR_Integer) 1:
#line 336 "make_hlds_separate_items.m"
                {
#line 336 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84), (MR_Integer) 1);
#line 336 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108;
#line 336 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefn_111;
#line 338 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_109_109;
#line 338 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_110_110;
#line 338 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_112_112;
#line 338 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_113_113;
#line 338 "make_hlds_separate_items.m"
                  MR_Integer hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_114_114;

#line 337 "make_hlds_separate_items.m"
                  {
#line 337 "make_hlds_separate_items.m"
                    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "make_hlds_separate_items.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2));
#line 337 "make_hlds_separate_items.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107));
#line 337 "make_hlds_separate_items.m"
                  }
#line 338 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107, (MR_Integer) 0)));
#line 338 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107, (MR_Integer) 1)));
#line 338 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefn_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107, (MR_Integer) 2)));
#line 338 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107, (MR_Integer) 3)));
#line 338 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107, (MR_Integer) 4)));
#line 338 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnInfo_107, (MR_Integer) 5)));
#line 343 "make_hlds_separate_items.m"
#line 343 "make_hlds_separate_items.m"
                  switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefn_111)) {
#line 343 "make_hlds_separate_items.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 343 "make_hlds_separate_items.m"
                    case (MR_Integer) 0:
#line 343 "make_hlds_separate_items.m"
                    case (MR_Integer) 1:
#line 347 "make_hlds_separate_items.m"
                      {
#line 348 "make_hlds_separate_items.m"
                        {
#line 348 "make_hlds_separate_items.m"
                          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "make_hlds_separate_items.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108));
#line 348 "make_hlds_separate_items.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5));
#line 348 "make_hlds_separate_items.m"
                        }
#line 347 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 347 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 347 "make_hlds_separate_items.m"
                      }
#line 343 "make_hlds_separate_items.m"
                      break;
#line 343 "make_hlds_separate_items.m"
                    case (MR_Integer) 2:
#line 340 "make_hlds_separate_items.m"
                      {
#line 341 "make_hlds_separate_items.m"
                        {
#line 341 "make_hlds_separate_items.m"
                          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "make_hlds_separate_items.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108));
#line 341 "make_hlds_separate_items.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3));
#line 341 "make_hlds_separate_items.m"
                        }
#line 340 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 340 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 340 "make_hlds_separate_items.m"
                      }
#line 343 "make_hlds_separate_items.m"
                      break;
#line 343 "make_hlds_separate_items.m"
                    case (MR_Integer) 3:
#line 343 "make_hlds_separate_items.m"
#line 343 "make_hlds_separate_items.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefn_111, (MR_Integer) 0)))) {
#line 343 "make_hlds_separate_items.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 343 "make_hlds_separate_items.m"
                        case (MR_Integer) 0:
#line 347 "make_hlds_separate_items.m"
                          {
#line 348 "make_hlds_separate_items.m"
                            {
#line 348 "make_hlds_separate_items.m"
                              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "make_hlds_separate_items.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108));
#line 348 "make_hlds_separate_items.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5));
#line 348 "make_hlds_separate_items.m"
                            }
#line 347 "make_hlds_separate_items.m"
                            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 347 "make_hlds_separate_items.m"
                            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 347 "make_hlds_separate_items.m"
                          }
#line 343 "make_hlds_separate_items.m"
                          break;
#line 343 "make_hlds_separate_items.m"
                        case (MR_Integer) 1:
#line 351 "make_hlds_separate_items.m"
                          {
#line 352 "make_hlds_separate_items.m"
                            {
#line 352 "make_hlds_separate_items.m"
                              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "make_hlds_separate_items.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeDefnSectionItem_108));
#line 352 "make_hlds_separate_items.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7));
#line 352 "make_hlds_separate_items.m"
                            }
#line 351 "make_hlds_separate_items.m"
                            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 351 "make_hlds_separate_items.m"
                            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 351 "make_hlds_separate_items.m"
                          }
#line 343 "make_hlds_separate_items.m"
                          break;
#line 343 "make_hlds_separate_items.m"
                      }
#line 343 "make_hlds_separate_items.m"
                      break;
#line 343 "make_hlds_separate_items.m"
                  }
#line 336 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
#line 336 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
#line 336 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
#line 336 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
#line 336 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
#line 336 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
#line 336 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
#line 336 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
#line 336 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
#line 336 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
#line 336 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 336 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 336 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
#line 336 "make_hlds_separate_items.m"
                }
#line 335 "make_hlds_separate_items.m"
                break;
#line 335 "make_hlds_separate_items.m"
              case (MR_Integer) 2:
#line 356 "make_hlds_separate_items.m"
                {
#line 356 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstDefnInfo_125 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84), (MR_Integer) 2);
#line 356 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstDefnStatusItem_127;
#line 356 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
#line 357 "make_hlds_separate_items.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

#line 358 "make_hlds_separate_items.m"
                  {
#line 358 "make_hlds_separate_items.m"
                    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstDefnStatusItem_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 358 "make_hlds_separate_items.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstDefnStatusItem_127, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_252));
#line 358 "make_hlds_separate_items.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstDefnStatusItem_127, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstDefnInfo_125));
#line 358 "make_hlds_separate_items.m"
                  }
#line 359 "make_hlds_separate_items.m"
                  {
#line 359 "make_hlds_separate_items.m"
                    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "make_hlds_separate_items.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstDefnStatusItem_127));
#line 359 "make_hlds_separate_items.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9));
#line 359 "make_hlds_separate_items.m"
                  }
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 356 "make_hlds_separate_items.m"
                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
#line 356 "make_hlds_separate_items.m"
                }
#line 335 "make_hlds_separate_items.m"
                break;
#line 335 "make_hlds_separate_items.m"
              case (MR_Integer) 3:
#line 335 "make_hlds_separate_items.m"
#line 335 "make_hlds_separate_items.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 0)))) {
#line 335 "make_hlds_separate_items.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 335 "make_hlds_separate_items.m"
                  case (MR_Integer) 0:
#line 361 "make_hlds_separate_items.m"
                    {
#line 361 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDefnInfo_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
#line 361 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDefnStatusItem_129;
#line 361 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
#line 362 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

#line 363 "make_hlds_separate_items.m"
                      {
#line 363 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDefnStatusItem_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 363 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDefnStatusItem_129, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_254));
#line 363 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDefnStatusItem_129, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDefnInfo_128));
#line 363 "make_hlds_separate_items.m"
                      }
#line 364 "make_hlds_separate_items.m"
                      {
#line 364 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDefnStatusItem_129));
#line 364 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11));
#line 364 "make_hlds_separate_items.m"
                      }
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 361 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
#line 361 "make_hlds_separate_items.m"
                    }
#line 335 "make_hlds_separate_items.m"
                    break;
#line 335 "make_hlds_separate_items.m"
                  case (MR_Integer) 1:
#line 366 "make_hlds_separate_items.m"
                    {
#line 366 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPredDeclInfo_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
#line 366 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PredDeclSectionItem_131;

#line 367 "make_hlds_separate_items.m"
                      {
#line 367 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PredDeclSectionItem_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 367 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PredDeclSectionItem_131, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2));
#line 367 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PredDeclSectionItem_131, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPredDeclInfo_130));
#line 367 "make_hlds_separate_items.m"
                      }
#line 368 "make_hlds_separate_items.m"
                      {
#line 368 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PredDeclSectionItem_131));
#line 368 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13));
#line 368 "make_hlds_separate_items.m"
                      }
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 366 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
#line 366 "make_hlds_separate_items.m"
                    }
#line 335 "make_hlds_separate_items.m"
                    break;
#line 335 "make_hlds_separate_items.m"
                  case (MR_Integer) 2:
#line 370 "make_hlds_separate_items.m"
                    {
#line 370 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDeclInfo_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
#line 370 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDeclStatusItem_133;
#line 370 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
#line 371 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

#line 372 "make_hlds_separate_items.m"
                      {
#line 372 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDeclStatusItem_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 372 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDeclStatusItem_133, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_257));
#line 372 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDeclStatusItem_133, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDeclInfo_132));
#line 372 "make_hlds_separate_items.m"
                      }
#line 373 "make_hlds_separate_items.m"
                      {
#line 373 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ModeDeclStatusItem_133));
#line 373 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15));
#line 373 "make_hlds_separate_items.m"
                      }
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 370 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
#line 370 "make_hlds_separate_items.m"
                    }
#line 335 "make_hlds_separate_items.m"
                    break;
#line 335 "make_hlds_separate_items.m"
                  case (MR_Integer) 3:
#line 404 "make_hlds_separate_items.m"
                    {
#line 404 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
#line 404 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PragmaType_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_146, (MR_Integer) 0)));
#line 404 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
#line 405 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__MaybeAttrs_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_146, (MR_Integer) 1)));
#line 405 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Context_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_146, (MR_Integer) 2)));
#line 405 "make_hlds_separate_items.m"
                      MR_Integer hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SeqNum_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_146, (MR_Integer) 3)));
#line 407 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

#line 442 "make_hlds_separate_items.m"
#line 442 "make_hlds_separate_items.m"
                      switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PragmaType_147)) {
#line 442 "make_hlds_separate_items.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 442 "make_hlds_separate_items.m"
                        case (MR_Integer) 0:
#line 442 "make_hlds_separate_items.m"
                        case (MR_Integer) 1:
#line 437 "make_hlds_separate_items.m"
                          {
#line 437 "make_hlds_separate_items.m"
                            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_174;

#line 440 "make_hlds_separate_items.m"
                            {
#line 440 "make_hlds_separate_items.m"
                              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 440 "make_hlds_separate_items.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_174, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_273));
#line 440 "make_hlds_separate_items.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_174, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_146));
#line 440 "make_hlds_separate_items.m"
                            }
#line 441 "make_hlds_separate_items.m"
                            {
#line 441 "make_hlds_separate_items.m"
                              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "make_hlds_separate_items.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_174));
#line 441 "make_hlds_separate_items.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29));
#line 441 "make_hlds_separate_items.m"
                            }
#line 437 "make_hlds_separate_items.m"
                            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 437 "make_hlds_separate_items.m"
                          }
#line 442 "make_hlds_separate_items.m"
                          break;
#line 442 "make_hlds_separate_items.m"
                        case (MR_Integer) 2:
#line 457 "make_hlds_separate_items.m"
                          {
#line 457 "make_hlds_separate_items.m"
                            MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_186;

#line 460 "make_hlds_separate_items.m"
                            {
#line 460 "make_hlds_separate_items.m"
                              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 460 "make_hlds_separate_items.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_186, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_273));
#line 460 "make_hlds_separate_items.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_186, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_146));
#line 460 "make_hlds_separate_items.m"
                            }
#line 461 "make_hlds_separate_items.m"
                            {
#line 461 "make_hlds_separate_items.m"
                              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "make_hlds_separate_items.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_186));
#line 461 "make_hlds_separate_items.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31));
#line 461 "make_hlds_separate_items.m"
                            }
#line 457 "make_hlds_separate_items.m"
                            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 457 "make_hlds_separate_items.m"
                          }
#line 442 "make_hlds_separate_items.m"
                          break;
#line 442 "make_hlds_separate_items.m"
                        case (MR_Integer) 3:
#line 442 "make_hlds_separate_items.m"
#line 442 "make_hlds_separate_items.m"
                          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PragmaType_147, (MR_Integer) 0)))) {
#line 442 "make_hlds_separate_items.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 0:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 4:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 13:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 14:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 15:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 19:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 20:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 25:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 26:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 28:
#line 457 "make_hlds_separate_items.m"
                              {
#line 457 "make_hlds_separate_items.m"
                                MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_186;

#line 460 "make_hlds_separate_items.m"
                                {
#line 460 "make_hlds_separate_items.m"
                                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 460 "make_hlds_separate_items.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_186, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_273));
#line 460 "make_hlds_separate_items.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_186, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_146));
#line 460 "make_hlds_separate_items.m"
                                }
#line 461 "make_hlds_separate_items.m"
                                {
#line 461 "make_hlds_separate_items.m"
                                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "make_hlds_separate_items.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma3StatusItem_186));
#line 461 "make_hlds_separate_items.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31));
#line 461 "make_hlds_separate_items.m"
                                }
#line 457 "make_hlds_separate_items.m"
                                hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 457 "make_hlds_separate_items.m"
                              }
#line 442 "make_hlds_separate_items.m"
                              break;
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 1:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 2:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 3:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 5:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 6:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 7:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 8:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 9:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 10:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 11:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 12:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 16:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 17:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 18:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 21:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 22:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 23:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 24:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 27:
#line 442 "make_hlds_separate_items.m"
                            case (MR_Integer) 29:
#line 437 "make_hlds_separate_items.m"
                              {
#line 437 "make_hlds_separate_items.m"
                                MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_174;

#line 440 "make_hlds_separate_items.m"
                                {
#line 440 "make_hlds_separate_items.m"
                                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 440 "make_hlds_separate_items.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_174, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_273));
#line 440 "make_hlds_separate_items.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_174, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmaInfo0_146));
#line 440 "make_hlds_separate_items.m"
                                }
#line 441 "make_hlds_separate_items.m"
                                {
#line 441 "make_hlds_separate_items.m"
                                  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "make_hlds_separate_items.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Pragma2StatusItem_174));
#line 441 "make_hlds_separate_items.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29));
#line 441 "make_hlds_separate_items.m"
                                }
#line 437 "make_hlds_separate_items.m"
                                hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 437 "make_hlds_separate_items.m"
                              }
#line 442 "make_hlds_separate_items.m"
                              break;
#line 442 "make_hlds_separate_items.m"
                          }
#line 442 "make_hlds_separate_items.m"
                          break;
#line 442 "make_hlds_separate_items.m"
                      }
#line 404 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 404 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 404 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 404 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
#line 404 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
#line 404 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
#line 404 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
#line 404 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
#line 404 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
#line 404 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
#line 404 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
#line 404 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
#line 404 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
#line 404 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
#line 404 "make_hlds_separate_items.m"
                    }
#line 335 "make_hlds_separate_items.m"
                    break;
#line 335 "make_hlds_separate_items.m"
                  case (MR_Integer) 4:
#line 375 "make_hlds_separate_items.m"
                    {
#line 375 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPromiseInfo_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
#line 375 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PromiseStatusItem_135;
#line 375 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
#line 376 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

#line 377 "make_hlds_separate_items.m"
                      {
#line 377 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PromiseStatusItem_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 377 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PromiseStatusItem_135, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_260));
#line 377 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PromiseStatusItem_135, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPromiseInfo_134));
#line 377 "make_hlds_separate_items.m"
                      }
#line 378 "make_hlds_separate_items.m"
                      {
#line 378 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__PromiseStatusItem_135));
#line 378 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17));
#line 378 "make_hlds_separate_items.m"
                      }
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 375 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
#line 375 "make_hlds_separate_items.m"
                    }
#line 335 "make_hlds_separate_items.m"
                    break;
#line 335 "make_hlds_separate_items.m"
                  case (MR_Integer) 5:
#line 380 "make_hlds_separate_items.m"
                    {
#line 380 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeclassInfo_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
#line 380 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeclassSectionItem_137;

#line 381 "make_hlds_separate_items.m"
                      {
#line 381 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeclassSectionItem_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 381 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeclassSectionItem_137, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2));
#line 381 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeclassSectionItem_137, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeclassInfo_136));
#line 381 "make_hlds_separate_items.m"
                      }
#line 382 "make_hlds_separate_items.m"
                      {
#line 382 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeclassSectionItem_137));
#line 382 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19));
#line 382 "make_hlds_separate_items.m"
                      }
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 380 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
#line 380 "make_hlds_separate_items.m"
                    }
#line 335 "make_hlds_separate_items.m"
                    break;
#line 335 "make_hlds_separate_items.m"
                  case (MR_Integer) 6:
#line 384 "make_hlds_separate_items.m"
                    {
#line 384 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstanceInfo_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
#line 384 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstanceStatusItem_139;
#line 384 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
#line 385 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

#line 386 "make_hlds_separate_items.m"
                      {
#line 386 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstanceStatusItem_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 386 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstanceStatusItem_139, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_263));
#line 386 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstanceStatusItem_139, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstanceInfo_138));
#line 386 "make_hlds_separate_items.m"
                      }
#line 387 "make_hlds_separate_items.m"
                      {
#line 387 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InstanceStatusItem_139));
#line 387 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21));
#line 387 "make_hlds_separate_items.m"
                      }
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 384 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
#line 384 "make_hlds_separate_items.m"
                    }
#line 335 "make_hlds_separate_items.m"
                    break;
#line 335 "make_hlds_separate_items.m"
                  case (MR_Integer) 7:
#line 389 "make_hlds_separate_items.m"
                    {
#line 389 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInitialiseInfo_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
#line 389 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InitialiseStatusItem_141;
#line 389 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
#line 390 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

#line 391 "make_hlds_separate_items.m"
                      {
#line 391 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InitialiseStatusItem_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 391 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InitialiseStatusItem_141, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_266));
#line 391 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InitialiseStatusItem_141, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInitialiseInfo_140));
#line 391 "make_hlds_separate_items.m"
                      }
#line 393 "make_hlds_separate_items.m"
                      {
#line 393 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__InitialiseStatusItem_141));
#line 393 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23));
#line 393 "make_hlds_separate_items.m"
                      }
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 389 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
#line 389 "make_hlds_separate_items.m"
                    }
#line 335 "make_hlds_separate_items.m"
                    break;
#line 335 "make_hlds_separate_items.m"
                  case (MR_Integer) 8:
#line 395 "make_hlds_separate_items.m"
                    {
#line 395 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemFinaliseInfo_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
#line 395 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__FinaliseStatusItem_143;
#line 395 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 0)));
#line 396 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___NeedQual_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2, (MR_Integer) 1)));

#line 397 "make_hlds_separate_items.m"
                      {
#line 397 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__FinaliseStatusItem_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__FinaliseStatusItem_143, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMercuryStatus_269));
#line 397 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__FinaliseStatusItem_143, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemFinaliseInfo_142));
#line 397 "make_hlds_separate_items.m"
                      }
#line 398 "make_hlds_separate_items.m"
                      {
#line 398 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__FinaliseStatusItem_143));
#line 398 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25));
#line 398 "make_hlds_separate_items.m"
                      }
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 395 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
#line 395 "make_hlds_separate_items.m"
                    }
#line 335 "make_hlds_separate_items.m"
                    break;
#line 335 "make_hlds_separate_items.m"
                  case (MR_Integer) 9:
#line 400 "make_hlds_separate_items.m"
                    {
#line 400 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMutableInfo_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Item_84, (MR_Integer) 1)));
#line 400 "make_hlds_separate_items.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__MutableSectionItem_145;

#line 401 "make_hlds_separate_items.m"
                      {
#line 401 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__MutableSectionItem_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__MutableSectionItem_145, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__2_2));
#line 401 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__MutableSectionItem_145, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMutableInfo_144));
#line 401 "make_hlds_separate_items.m"
                      }
#line 402 "make_hlds_separate_items.m"
                      {
#line 402 "make_hlds_separate_items.m"
                        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__MutableSectionItem_145));
#line 402 "make_hlds_separate_items.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27));
#line 402 "make_hlds_separate_items.m"
                      }
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 400 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
#line 400 "make_hlds_separate_items.m"
                    }
#line 335 "make_hlds_separate_items.m"
                    break;
#line 335 "make_hlds_separate_items.m"
                  case (MR_Integer) 10:
#line 464 "make_hlds_separate_items.m"
                    {
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31;
#line 464 "make_hlds_separate_items.m"
                      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33;
#line 464 "make_hlds_separate_items.m"
                    }
#line 335 "make_hlds_separate_items.m"
                    break;
#line 335 "make_hlds_separate_items.m"
                }
#line 335 "make_hlds_separate_items.m"
                break;
#line 335 "make_hlds_separate_items.m"
            }
#line 466 "make_hlds_separate_items.m"
            /* direct tailcall eliminated */
#line 466 "make_hlds_separate_items.m"
            {
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Items_85;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0__tmp_copy_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_234_234;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0__tmp_copy_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_233_233;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0__tmp_copy_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_232_232;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0__tmp_copy_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_231_231;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0__tmp_copy_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_230_230;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0__tmp_copy_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_229_229;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0__tmp_copy_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_228_228;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0__tmp_copy_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_227_227;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0__tmp_copy_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_226_226;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0__tmp_copy_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_225_225;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0__tmp_copy_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_224_224;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0__tmp_copy_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_223_223;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0__tmp_copy_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_222_222;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0__tmp_copy_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_221_221;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0__tmp_copy_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_220_220;
#line 466 "make_hlds_separate_items.m"
              MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0__tmp_copy_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_235_235;

#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0_33 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_0__tmp_copy_33;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0_31 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_0__tmp_copy_31;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0_29 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_0__tmp_copy_29;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0_27 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_0__tmp_copy_27;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0_25 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_0__tmp_copy_25;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0_23 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_0__tmp_copy_23;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0_21 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_0__tmp_copy_21;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0_19 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_0__tmp_copy_19;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0_17 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_0__tmp_copy_17;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0_15 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_0__tmp_copy_15;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0_13 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_0__tmp_copy_13;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0_11 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_0__tmp_copy_11;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0_9 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_0__tmp_copy_9;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0_7 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_0__tmp_copy_7;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0_5 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_0__tmp_copy_5;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_0__tmp_copy_3;
#line 466 "make_hlds_separate_items.m"
              hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1_1 = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__HeadVar__1__tmp_copy_1;
#line 466 "make_hlds_separate_items.m"
            }
#line 466 "make_hlds_separate_items.m"
            continue;
#line 329 "make_hlds_separate_items.m"
          }
#line 314 "make_hlds_separate_items.m"
      }
#line 314 "make_hlds_separate_items.m"
      break;
#line 314 "make_hlds_separate_items.m"
    }
#line 294 "make_hlds_separate_items.m"
}

#line 173 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__int_module_section_status_2_p_0(
#line 173 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3,
#line 173 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4)
#line 173 "make_hlds_separate_items.m"
{
#line 196 "make_hlds_separate_items.m"
  {
#line 196 "make_hlds_separate_items.m"
    MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;
#line 196 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_8;
#line 196 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_9;

#line 202 "make_hlds_separate_items.m"
#line 202 "make_hlds_separate_items.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3)) {
#line 202 "make_hlds_separate_items.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 202 "make_hlds_separate_items.m"
      case (MR_Integer) 0:
#line 198 "make_hlds_separate_items.m"
        {
#line 198 "make_hlds_separate_items.m"
          MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 198 "make_hlds_separate_items.m"
          MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_12_12;
#line 198 "make_hlds_separate_items.m"
          MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3, (MR_Integer) 0)));
#line 198 "make_hlds_separate_items.m"
          MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___IntFileKind_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3, (MR_Integer) 1)))) & (MR_Integer) 3);

#line 200 "make_hlds_separate_items.m"
          {
#line 200 "make_hlds_separate_items.m"
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 200 "make_hlds_separate_items.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_12_12, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_7));
#line 200 "make_hlds_separate_items.m"
          }
#line 200 "make_hlds_separate_items.m"
          {
#line 200 "make_hlds_separate_items.m"
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 200 "make_hlds_separate_items.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_8, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_12_12));
#line 200 "make_hlds_separate_items.m"
          }
#line 201 "make_hlds_separate_items.m"
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_9 = (MR_Integer) 1;
#line 198 "make_hlds_separate_items.m"
        }
#line 202 "make_hlds_separate_items.m"
        break;
#line 202 "make_hlds_separate_items.m"
      case (MR_Integer) 1:
#line 203 "make_hlds_separate_items.m"
        {
#line 203 "make_hlds_separate_items.m"
          MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_11_11;
#line 203 "make_hlds_separate_items.m"
          MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 203 "make_hlds_separate_items.m"
          MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3, (MR_Integer) 0)));
#line 203 "make_hlds_separate_items.m"
          MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___IntFileKind_14 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntSection_3, (MR_Integer) 1)))) & (MR_Integer) 3);

#line 205 "make_hlds_separate_items.m"
          {
#line 205 "make_hlds_separate_items.m"
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 205 "make_hlds_separate_items.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_11_11, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Section_17));
#line 205 "make_hlds_separate_items.m"
          }
#line 205 "make_hlds_separate_items.m"
          {
#line 205 "make_hlds_separate_items.m"
            hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 205 "make_hlds_separate_items.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_8, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__V_11_11));
#line 205 "make_hlds_separate_items.m"
          }
#line 206 "make_hlds_separate_items.m"
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_9 = (MR_Integer) 0;
#line 203 "make_hlds_separate_items.m"
        }
#line 202 "make_hlds_separate_items.m"
        break;
#line 202 "make_hlds_separate_items.m"
      case (MR_Integer) 2:
#line 208 "make_hlds_separate_items.m"
        {
#line 209 "make_hlds_separate_items.m"
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_8 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[3]);
#line 210 "make_hlds_separate_items.m"
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_9 = (MR_Integer) 0;
#line 208 "make_hlds_separate_items.m"
        }
#line 202 "make_hlds_separate_items.m"
        break;
#line 202 "make_hlds_separate_items.m"
    }
#line 212 "make_hlds_separate_items.m"
    {
#line 212 "make_hlds_separate_items.m"
      MR_Word base;
#line 212 "make_hlds_separate_items.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 212 "make_hlds_separate_items.m"
      *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4 = base;
#line 212 "make_hlds_separate_items.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_8));
#line 212 "make_hlds_separate_items.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_9));
#line 212 "make_hlds_separate_items.m"
    }
#line 196 "make_hlds_separate_items.m"
  }
#line 173 "make_hlds_separate_items.m"
}

#line 171 "make_hlds_separate_items.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__src_module_section_status_2_p_0(
#line 171 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SrcSection_3,
#line 171 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4)
#line 171 "make_hlds_separate_items.m"
{
#line 180 "make_hlds_separate_items.m"
  {
#line 180 "make_hlds_separate_items.m"
    MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;
#line 180 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_5;
#line 180 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_6;

#line 185 "make_hlds_separate_items.m"
#line 185 "make_hlds_separate_items.m"
    switch (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SrcSection_3) {
#line 185 "make_hlds_separate_items.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 185 "make_hlds_separate_items.m"
      case (MR_Integer) 2:
#line 190 "make_hlds_separate_items.m"
        {
#line 191 "make_hlds_separate_items.m"
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_5 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[0];
#line 192 "make_hlds_separate_items.m"
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_6 = (MR_Integer) 1;
#line 190 "make_hlds_separate_items.m"
        }
#line 185 "make_hlds_separate_items.m"
        break;
#line 185 "make_hlds_separate_items.m"
      case (MR_Integer) 1:
#line 186 "make_hlds_separate_items.m"
        {
#line 187 "make_hlds_separate_items.m"
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_5 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[1];
#line 188 "make_hlds_separate_items.m"
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_6 = (MR_Integer) 1;
#line 186 "make_hlds_separate_items.m"
        }
#line 185 "make_hlds_separate_items.m"
        break;
#line 185 "make_hlds_separate_items.m"
      case (MR_Integer) 0:
#line 182 "make_hlds_separate_items.m"
        {
#line 183 "make_hlds_separate_items.m"
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_5 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[2];
#line 184 "make_hlds_separate_items.m"
          hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_6 = (MR_Integer) 1;
#line 182 "make_hlds_separate_items.m"
        }
#line 185 "make_hlds_separate_items.m"
        break;
#line 185 "make_hlds_separate_items.m"
    }
#line 194 "make_hlds_separate_items.m"
    {
#line 194 "make_hlds_separate_items.m"
      MR_Word base;
#line 194 "make_hlds_separate_items.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 194 "make_hlds_separate_items.m"
      *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SectionInfo_4 = base;
#line 194 "make_hlds_separate_items.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__Status_5));
#line 194 "make_hlds_separate_items.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__NeedQual_6));
#line 194 "make_hlds_separate_items.m"
    }
#line 180 "make_hlds_separate_items.m"
  }
#line 171 "make_hlds_separate_items.m"
}

#line 37 "make_hlds_separate_items.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_18_p_0(
#line 37 "make_hlds_separate_items.m"
  MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemAvailLists_20,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnsAbstract_21,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnsMercury_22,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnsForeign_23,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstDefns_24,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDefns_25,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPredDecls_26,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDecls_27,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPromises_28,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeclasses_29,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstances_30,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInitialises_31,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemFinalises_32,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMutables_33,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmas2_34,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmas3_35,
#line 37 "make_hlds_separate_items.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemClauses_36)
#line 37 "make_hlds_separate_items.m"
{
#line 65 "make_hlds_separate_items.m"
  {
#line 65 "make_hlds_separate_items.m"
    MR_bool hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__succeeded;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_184_184;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_195_195;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SrcItemBlocks_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 3)));
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__DirectIntItemBlocks_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 4)));
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IndirectIntItemBlocks_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 5)));
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__OptItemBlocks_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 6)));
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntForOptItemBlocks_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 7)));
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_80_80;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_81_81;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_82_82;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_83_83;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_84_84;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_85_85;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_86_86;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_87_87;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_88_88;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_89_89;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_90_90;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_91_91;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_92_92;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_93_93;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_94_94;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_95_95;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_96_96;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_98_98;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_99_99;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_100_100;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_101_101;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_102_102;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_103_103;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_104_104;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_105_105;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_106_106;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_107_107;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_108_108;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_109_109;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_110_110;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_111_111;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_112_112;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_113_113;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_114_114;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_116_116;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_117_117;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_118_118;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_119_119;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_120_120;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_121_121;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_122_122;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_123_123;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_124_124;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_125_125;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_126_126;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_127_127;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_128_128;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_129_129;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_130_130;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_131_131;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_132_132;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_134_134;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_135_135;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_136_136;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_137_137;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_138_138;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_139_139;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_140_140;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_141_141;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_142_142;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_143_143;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_144_144;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_145_145;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_146_146;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_147_147;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_148_148;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_149_149;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_150_150;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167;
#line 65 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168;
#line 66 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___ModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 0)));
#line 66 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___ModuleNameContext_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 1)));
#line 66 "make_hlds_separate_items.m"
    MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items___ModuleVersionNumbers_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__AugCompUnit_19, (MR_Integer) 2)));

#line 101 "make_hlds_separate_items.m"
    {
#line 101 "make_hlds_separate_items.m"
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho4_36_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__SrcItemBlocks_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_80_80, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_81_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_82_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_83_83, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_84_84, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_85_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_86_86, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_87_87, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_88_88, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_89_89, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_90_90, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_91_91, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_92_92, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_93_93, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_94_94, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_95_95, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_96_96);
    }
#line 110 "make_hlds_separate_items.m"
    {
#line 110 "make_hlds_separate_items.m"
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_36_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__DirectIntItemBlocks_41, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_80_80, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_98_98, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_81_81, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_99_99, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_82_82, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_100_100, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_83_83, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_101_101, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_84_84, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_102_102, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_85_85, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_103_103, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_86_86, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_104_104, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_87_87, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_105_105, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_88_88, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_106_106, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_89_89, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_107_107, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_90_90, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_108_108, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_91_91, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_109_109, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_92_92, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_110_110, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_93_93, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_111_111, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_94_94, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_112_112, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_95_95, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_113_113, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_96_96, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_114_114);
    }
#line 119 "make_hlds_separate_items.m"
    {
#line 119 "make_hlds_separate_items.m"
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_36_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IndirectIntItemBlocks_42, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_98_98, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_116_116, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_99_99, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_117_117, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_100_100, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_118_118, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_101_101, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_119_119, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_102_102, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_120_120, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_103_103, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_121_121, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_104_104, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_122_122, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_105_105, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_123_123, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_106_106, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_124_124, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_107_107, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_125_125, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_108_108, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_126_126, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_109_109, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_127_127, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_110_110, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_128_128, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_111_111, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_129_129, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_112_112, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_130_130, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_113_113, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_131_131, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_114_114, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_132_132);
    }
#line 128 "make_hlds_separate_items.m"
    {
#line 128 "make_hlds_separate_items.m"
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho2_36_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntForOptItemBlocks_44, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_116_116, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_134_134, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_117_117, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_135_135, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_118_118, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_136_136, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_119_119, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_137_137, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_120_120, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_138_138, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_121_121, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_139_139, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_122_122, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_140_140, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_123_123, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_141_141, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_124_124, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_142_142, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_125_125, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_143_143, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_126_126, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_144_144, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_127_127, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_145_145, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_128_128, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_146_146, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_129_129, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_147_147, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_130_130, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_148_148, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_131_131, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_149_149, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_132_132, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_150_150);
    }
#line 137 "make_hlds_separate_items.m"
    {
#line 137 "make_hlds_separate_items.m"
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho1_36_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__OptItemBlocks_43, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_134_134, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_135_135, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_136_136, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_137_137, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_138_138, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_139_139, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_140_140, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_141_141, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_142_142, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_143_143, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_144_144, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_145_145, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_146_146, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_147_147, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_148_148, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_149_149, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_150_150, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168);
    }
#line 147 "make_hlds_separate_items.m"
    {
#line 147 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemAvailLists_152_152, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemAvailLists_20);
    }
#line 3920 "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.c"
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_184_184 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[2];
#line 148 "make_hlds_separate_items.m"
    {
#line 148 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_184_184, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsAbstract_153_153, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnsAbstract_21);
    }
#line 149 "make_hlds_separate_items.m"
    {
#line 149 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_184_184, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsMercury_154_154, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnsMercury_22);
    }
#line 150 "make_hlds_separate_items.m"
    {
#line 150 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_184_184, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeDefnsForeign_155_155, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeDefnsForeign_23);
    }
#line 151 "make_hlds_separate_items.m"
    {
#line 151 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[3], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstDefns_156_156, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstDefns_24);
    }
#line 152 "make_hlds_separate_items.m"
    {
#line 152 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[4], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDefns_157_157, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDefns_25);
    }
#line 153 "make_hlds_separate_items.m"
    {
#line 153 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[5], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPredDecls_158_158, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPredDecls_26);
    }
#line 154 "make_hlds_separate_items.m"
    {
#line 154 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[6], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemModeDecls_159_159, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemModeDecls_27);
    }
#line 155 "make_hlds_separate_items.m"
    {
#line 155 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[7], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPromises_160_160, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPromises_28);
    }
#line 156 "make_hlds_separate_items.m"
    {
#line 156 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[8], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemTypeclasses_161_161, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemTypeclasses_29);
    }
#line 157 "make_hlds_separate_items.m"
    {
#line 157 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[9], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInstances_162_162, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInstances_30);
    }
#line 158 "make_hlds_separate_items.m"
    {
#line 158 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[10], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemInitialises_163_163, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemInitialises_31);
    }
#line 159 "make_hlds_separate_items.m"
    {
#line 159 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[11], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemFinalises_164_164, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemFinalises_32);
    }
#line 160 "make_hlds_separate_items.m"
    {
#line 160 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[12], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemMutables_165_165, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemMutables_33);
    }
#line 3987 "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.c"
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_195_195 = (MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[13];
#line 161 "make_hlds_separate_items.m"
    {
#line 161 "make_hlds_separate_items.m"
      *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmas2_34 = mercury__list__inst_preserving_reverse_1_f_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_195_195, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas2_166_166);
    }
#line 162 "make_hlds_separate_items.m"
    {
#line 162 "make_hlds_separate_items.m"
      *hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemPragmas3_35 = mercury__list__inst_preserving_reverse_1_f_0(hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__TypeInfo_195_195, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemPragmas3_167_167);
    }
#line 163 "make_hlds_separate_items.m"
    {
#line 163 "make_hlds_separate_items.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[14], hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__STATE_VARIABLE_RevItemClauses_168_168, hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__ItemClauses_36);
    }
#line 65 "make_hlds_separate_items.m"
  }
#line 37 "make_hlds_separate_items.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.make_hlds_passes.make_hlds_separate_items. */
