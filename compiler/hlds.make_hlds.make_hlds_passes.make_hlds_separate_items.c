/*
** Automatically generated from `make_hlds_separate_items.m'
** by the Mercury compiler,
** version rotd-2020-01-20
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


// :- module hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.
// :- implementation.

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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.add_pred.mih"
#include "hlds.add_special_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.default_func_mode.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
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
#include "require.mih"
#include "robdd.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_mode.mih"
#include "hlds.make_hlds.add_mutable_aux_preds.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_solver.mih"
#include "hlds.make_hlds.add_type.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"




static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho4_44_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_ItemFIMsCord_0_5,
  MR_Word * STATE_VARIABLE_ItemFIMsCord_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_10,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_11,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_12,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_14,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_15,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_16,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_18,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_19,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_20,
  MR_Word STATE_VARIABLE_RevItemPromises_0_21,
  MR_Word * STATE_VARIABLE_RevItemPromises_22,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_23,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_24,
  MR_Word STATE_VARIABLE_RevItemInstances_0_25,
  MR_Word * STATE_VARIABLE_RevItemInstances_26,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_27,
  MR_Word * STATE_VARIABLE_RevItemInitialises_28,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_29,
  MR_Word * STATE_VARIABLE_RevItemFinalises_30,
  MR_Word STATE_VARIABLE_RevItemMutables_0_31,
  MR_Word * STATE_VARIABLE_RevItemMutables_32,
  MR_Word STATE_VARIABLE_RevItemTypeRepns_0_33,
  MR_Word * STATE_VARIABLE_RevItemTypeRepns_34,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_35,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_36,
  MR_Word STATE_VARIABLE_RevItemForeignExportEnums_0_37,
  MR_Word * STATE_VARIABLE_RevItemForeignExportEnums_38,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_39,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_40,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_41,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_42,
  MR_Word STATE_VARIABLE_RevItemClauses_0_43,
  MR_Word * STATE_VARIABLE_RevItemClauses_44);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__src_module_section_status_2_p_0(
  MR_Word SrcSection_3,
  MR_Word * SectionInfo_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_44_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_ItemFIMsCord_0_5,
  MR_Word * STATE_VARIABLE_ItemFIMsCord_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_10,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_11,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_12,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_14,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_15,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_16,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_18,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_19,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_20,
  MR_Word STATE_VARIABLE_RevItemPromises_0_21,
  MR_Word * STATE_VARIABLE_RevItemPromises_22,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_23,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_24,
  MR_Word STATE_VARIABLE_RevItemInstances_0_25,
  MR_Word * STATE_VARIABLE_RevItemInstances_26,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_27,
  MR_Word * STATE_VARIABLE_RevItemInitialises_28,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_29,
  MR_Word * STATE_VARIABLE_RevItemFinalises_30,
  MR_Word STATE_VARIABLE_RevItemMutables_0_31,
  MR_Word * STATE_VARIABLE_RevItemMutables_32,
  MR_Word STATE_VARIABLE_RevItemTypeRepns_0_33,
  MR_Word * STATE_VARIABLE_RevItemTypeRepns_34,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_35,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_36,
  MR_Word STATE_VARIABLE_RevItemForeignExportEnums_0_37,
  MR_Word * STATE_VARIABLE_RevItemForeignExportEnums_38,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_39,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_40,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_41,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_42,
  MR_Word STATE_VARIABLE_RevItemClauses_0_43,
  MR_Word * STATE_VARIABLE_RevItemClauses_44);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__int_module_section_status_2_p_0(
  MR_Word IntSection_3,
  MR_Word * SectionInfo_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho2_44_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_ItemFIMsCord_0_5,
  MR_Word * STATE_VARIABLE_ItemFIMsCord_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_10,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_11,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_12,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_14,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_15,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_16,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_18,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_19,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_20,
  MR_Word STATE_VARIABLE_RevItemPromises_0_21,
  MR_Word * STATE_VARIABLE_RevItemPromises_22,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_23,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_24,
  MR_Word STATE_VARIABLE_RevItemInstances_0_25,
  MR_Word * STATE_VARIABLE_RevItemInstances_26,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_27,
  MR_Word * STATE_VARIABLE_RevItemInitialises_28,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_29,
  MR_Word * STATE_VARIABLE_RevItemFinalises_30,
  MR_Word STATE_VARIABLE_RevItemMutables_0_31,
  MR_Word * STATE_VARIABLE_RevItemMutables_32,
  MR_Word STATE_VARIABLE_RevItemTypeRepns_0_33,
  MR_Word * STATE_VARIABLE_RevItemTypeRepns_34,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_35,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_36,
  MR_Word STATE_VARIABLE_RevItemForeignExportEnums_0_37,
  MR_Word * STATE_VARIABLE_RevItemForeignExportEnums_38,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_39,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_40,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_41,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_42,
  MR_Word STATE_VARIABLE_RevItemClauses_0_43,
  MR_Word * STATE_VARIABLE_RevItemClauses_44);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word * SectionInfo_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho1_44_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_ItemFIMsCord_0_5,
  MR_Word * STATE_VARIABLE_ItemFIMsCord_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_10,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_11,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_12,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_14,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_15,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_16,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_18,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_19,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_20,
  MR_Word STATE_VARIABLE_RevItemPromises_0_21,
  MR_Word * STATE_VARIABLE_RevItemPromises_22,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_23,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_24,
  MR_Word STATE_VARIABLE_RevItemInstances_0_25,
  MR_Word * STATE_VARIABLE_RevItemInstances_26,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_27,
  MR_Word * STATE_VARIABLE_RevItemInitialises_28,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_29,
  MR_Word * STATE_VARIABLE_RevItemFinalises_30,
  MR_Word STATE_VARIABLE_RevItemMutables_0_31,
  MR_Word * STATE_VARIABLE_RevItemMutables_32,
  MR_Word STATE_VARIABLE_RevItemTypeRepns_0_33,
  MR_Word * STATE_VARIABLE_RevItemTypeRepns_34,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_35,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_36,
  MR_Word STATE_VARIABLE_RevItemForeignExportEnums_0_37,
  MR_Word * STATE_VARIABLE_RevItemForeignExportEnums_38,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_39,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_40,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_41,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_42,
  MR_Word STATE_VARIABLE_RevItemClauses_0_43,
  MR_Word * STATE_VARIABLE_RevItemClauses_44);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word * SectionInfo_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_40_p_0(
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
  MR_Word STATE_VARIABLE_RevItemTypeRepns_0_29,
  MR_Word * STATE_VARIABLE_RevItemTypeRepns_30,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_31,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_32,
  MR_Word STATE_VARIABLE_RevItemForeignExportEnums_0_33,
  MR_Word * STATE_VARIABLE_RevItemForeignExportEnums_34,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_35,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_36,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_37,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_38,
  MR_Word STATE_VARIABLE_RevItemClauses_0_39,
  MR_Word * STATE_VARIABLE_RevItemClauses_40);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[18][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[5][1];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[18][2] = {
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_type_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[14]))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[0]))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_22_p_0(
  MR_Word AugCompUnit_23,
  MR_Word * ItemAvailLists_24,
  MR_Word * ItemFIMs_25,
  MR_Word * ItemTypeDefnsAbstract_26,
  MR_Word * ItemTypeDefnsMercury_27,
  MR_Word * ItemTypeDefnsForeign_28,
  MR_Word * ItemInstDefns_29,
  MR_Word * ItemModeDefns_30,
  MR_Word * ItemPredDecls_31,
  MR_Word * ItemModeDecls_32,
  MR_Word * ItemPromises_33,
  MR_Word * ItemTypeclasses_34,
  MR_Word * ItemInstances_35,
  MR_Word * ItemInitialises_36,
  MR_Word * ItemFinalises_37,
  MR_Word * ItemMutables_38,
  MR_Word * ItemTypeRepns_39,
  MR_Word * ItemForeignEnums_40,
  MR_Word * ItemForeignExportEnums_41,
  MR_Word * ItemPragmas2_42,
  MR_Word * ItemPragmas3_43,
  MR_Word * ItemClauses_44)
{
  {
    MR_Word SrcItemBlocks_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_23, (MR_Integer) 3))));
    MR_Word DirectIntItemBlocks_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_23, (MR_Integer) 4))));
    MR_Word IndirectIntItemBlocks_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_23, (MR_Integer) 5))));
    MR_Word OptItemBlocks_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_23, (MR_Integer) 6))));
    MR_Word IntForOptItemBlocks_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_23, (MR_Integer) 7))));
    MR_Word STATE_VARIABLE_ItemFIMsCord_75_75;
    MR_Word STATE_VARIABLE_RevItemAvailLists_96_96;
    MR_Word STATE_VARIABLE_ItemFIMsCord_97_97;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_98_98;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_99_99;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_100_100;
    MR_Word STATE_VARIABLE_RevItemInstDefns_101_101;
    MR_Word STATE_VARIABLE_RevItemModeDefns_102_102;
    MR_Word STATE_VARIABLE_RevItemPredDecls_103_103;
    MR_Word STATE_VARIABLE_RevItemModeDecls_104_104;
    MR_Word STATE_VARIABLE_RevItemPromises_105_105;
    MR_Word STATE_VARIABLE_RevItemTypeclasses_106_106;
    MR_Word STATE_VARIABLE_RevItemInstances_107_107;
    MR_Word STATE_VARIABLE_RevItemInitialises_108_108;
    MR_Word STATE_VARIABLE_RevItemFinalises_109_109;
    MR_Word STATE_VARIABLE_RevItemMutables_110_110;
    MR_Word STATE_VARIABLE_RevItemTypeRepns_111_111;
    MR_Word STATE_VARIABLE_RevItemForeignEnums_112_112;
    MR_Word STATE_VARIABLE_RevItemForeignExportEnums_113_113;
    MR_Word STATE_VARIABLE_RevItemPragmas2_114_114;
    MR_Word STATE_VARIABLE_RevItemPragmas3_115_115;
    MR_Word STATE_VARIABLE_RevItemClauses_116_116;
    MR_Word STATE_VARIABLE_RevItemAvailLists_118_118;
    MR_Word STATE_VARIABLE_ItemFIMsCord_119_119;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_120_120;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_121_121;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_122_122;
    MR_Word STATE_VARIABLE_RevItemInstDefns_123_123;
    MR_Word STATE_VARIABLE_RevItemModeDefns_124_124;
    MR_Word STATE_VARIABLE_RevItemPredDecls_125_125;
    MR_Word STATE_VARIABLE_RevItemModeDecls_126_126;
    MR_Word STATE_VARIABLE_RevItemPromises_127_127;
    MR_Word STATE_VARIABLE_RevItemTypeclasses_128_128;
    MR_Word STATE_VARIABLE_RevItemInstances_129_129;
    MR_Word STATE_VARIABLE_RevItemInitialises_130_130;
    MR_Word STATE_VARIABLE_RevItemFinalises_131_131;
    MR_Word STATE_VARIABLE_RevItemMutables_132_132;
    MR_Word STATE_VARIABLE_RevItemTypeRepns_133_133;
    MR_Word STATE_VARIABLE_RevItemForeignEnums_134_134;
    MR_Word STATE_VARIABLE_RevItemForeignExportEnums_135_135;
    MR_Word STATE_VARIABLE_RevItemPragmas2_136_136;
    MR_Word STATE_VARIABLE_RevItemPragmas3_137_137;
    MR_Word STATE_VARIABLE_RevItemClauses_138_138;
    MR_Word STATE_VARIABLE_RevItemAvailLists_140_140;
    MR_Word STATE_VARIABLE_ItemFIMsCord_141_141;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_142_142;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_143_143;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_144_144;
    MR_Word STATE_VARIABLE_RevItemInstDefns_145_145;
    MR_Word STATE_VARIABLE_RevItemModeDefns_146_146;
    MR_Word STATE_VARIABLE_RevItemPredDecls_147_147;
    MR_Word STATE_VARIABLE_RevItemModeDecls_148_148;
    MR_Word STATE_VARIABLE_RevItemPromises_149_149;
    MR_Word STATE_VARIABLE_RevItemTypeclasses_150_150;
    MR_Word STATE_VARIABLE_RevItemInstances_151_151;
    MR_Word STATE_VARIABLE_RevItemInitialises_152_152;
    MR_Word STATE_VARIABLE_RevItemFinalises_153_153;
    MR_Word STATE_VARIABLE_RevItemMutables_154_154;
    MR_Word STATE_VARIABLE_RevItemTypeRepns_155_155;
    MR_Word STATE_VARIABLE_RevItemForeignEnums_156_156;
    MR_Word STATE_VARIABLE_RevItemForeignExportEnums_157_157;
    MR_Word STATE_VARIABLE_RevItemPragmas2_158_158;
    MR_Word STATE_VARIABLE_RevItemPragmas3_159_159;
    MR_Word STATE_VARIABLE_RevItemClauses_160_160;
    MR_Word STATE_VARIABLE_RevItemAvailLists_162_162;
    MR_Word STATE_VARIABLE_ItemFIMsCord_163_163;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_164_164;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_165_165;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_166_166;
    MR_Word STATE_VARIABLE_RevItemInstDefns_167_167;
    MR_Word STATE_VARIABLE_RevItemModeDefns_168_168;
    MR_Word STATE_VARIABLE_RevItemPredDecls_169_169;
    MR_Word STATE_VARIABLE_RevItemModeDecls_170_170;
    MR_Word STATE_VARIABLE_RevItemPromises_171_171;
    MR_Word STATE_VARIABLE_RevItemTypeclasses_172_172;
    MR_Word STATE_VARIABLE_RevItemInstances_173_173;
    MR_Word STATE_VARIABLE_RevItemInitialises_174_174;
    MR_Word STATE_VARIABLE_RevItemFinalises_175_175;
    MR_Word STATE_VARIABLE_RevItemMutables_176_176;
    MR_Word STATE_VARIABLE_RevItemTypeRepns_177_177;
    MR_Word STATE_VARIABLE_RevItemForeignEnums_178_178;
    MR_Word STATE_VARIABLE_RevItemForeignExportEnums_179_179;
    MR_Word STATE_VARIABLE_RevItemPragmas2_180_180;
    MR_Word STATE_VARIABLE_RevItemPragmas3_181_181;
    MR_Word STATE_VARIABLE_RevItemClauses_182_182;
    MR_Word STATE_VARIABLE_RevItemAvailLists_184_184;
    MR_Word STATE_VARIABLE_ItemFIMsCord_185_185;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_186_186;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_187_187;
    MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_188_188;
    MR_Word STATE_VARIABLE_RevItemInstDefns_189_189;
    MR_Word STATE_VARIABLE_RevItemModeDefns_190_190;
    MR_Word STATE_VARIABLE_RevItemPredDecls_191_191;
    MR_Word STATE_VARIABLE_RevItemModeDecls_192_192;
    MR_Word STATE_VARIABLE_RevItemPromises_193_193;
    MR_Word STATE_VARIABLE_RevItemTypeclasses_194_194;
    MR_Word STATE_VARIABLE_RevItemInstances_195_195;
    MR_Word STATE_VARIABLE_RevItemInitialises_196_196;
    MR_Word STATE_VARIABLE_RevItemFinalises_197_197;
    MR_Word STATE_VARIABLE_RevItemMutables_198_198;
    MR_Word STATE_VARIABLE_RevItemTypeRepns_199_199;
    MR_Word STATE_VARIABLE_RevItemForeignEnums_200_200;
    MR_Word STATE_VARIABLE_RevItemForeignExportEnums_201_201;
    MR_Word STATE_VARIABLE_RevItemPragmas2_202_202;
    MR_Word STATE_VARIABLE_RevItemPragmas3_203_203;
    MR_Word STATE_VARIABLE_RevItemClauses_204_204;

    STATE_VARIABLE_ItemFIMsCord_75_75 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho4_44_p_0(SrcItemBlocks_48, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemAvailLists_96_96, STATE_VARIABLE_ItemFIMsCord_75_75, &STATE_VARIABLE_ItemFIMsCord_97_97, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemTypeDefnsAbstract_98_98, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemTypeDefnsMercury_99_99, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemTypeDefnsForeign_100_100, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemInstDefns_101_101, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemModeDefns_102_102, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemPredDecls_103_103, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemModeDecls_104_104, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemPromises_105_105, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemTypeclasses_106_106, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemInstances_107_107, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemInitialises_108_108, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemFinalises_109_109, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemMutables_110_110, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemTypeRepns_111_111, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemForeignEnums_112_112, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemForeignExportEnums_113_113, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemPragmas2_114_114, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemPragmas3_115_115, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevItemClauses_116_116);
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_44_p_0(DirectIntItemBlocks_49, STATE_VARIABLE_RevItemAvailLists_96_96, &STATE_VARIABLE_RevItemAvailLists_118_118, STATE_VARIABLE_ItemFIMsCord_97_97, &STATE_VARIABLE_ItemFIMsCord_119_119, STATE_VARIABLE_RevItemTypeDefnsAbstract_98_98, &STATE_VARIABLE_RevItemTypeDefnsAbstract_120_120, STATE_VARIABLE_RevItemTypeDefnsMercury_99_99, &STATE_VARIABLE_RevItemTypeDefnsMercury_121_121, STATE_VARIABLE_RevItemTypeDefnsForeign_100_100, &STATE_VARIABLE_RevItemTypeDefnsForeign_122_122, STATE_VARIABLE_RevItemInstDefns_101_101, &STATE_VARIABLE_RevItemInstDefns_123_123, STATE_VARIABLE_RevItemModeDefns_102_102, &STATE_VARIABLE_RevItemModeDefns_124_124, STATE_VARIABLE_RevItemPredDecls_103_103, &STATE_VARIABLE_RevItemPredDecls_125_125, STATE_VARIABLE_RevItemModeDecls_104_104, &STATE_VARIABLE_RevItemModeDecls_126_126, STATE_VARIABLE_RevItemPromises_105_105, &STATE_VARIABLE_RevItemPromises_127_127, STATE_VARIABLE_RevItemTypeclasses_106_106, &STATE_VARIABLE_RevItemTypeclasses_128_128, STATE_VARIABLE_RevItemInstances_107_107, &STATE_VARIABLE_RevItemInstances_129_129, STATE_VARIABLE_RevItemInitialises_108_108, &STATE_VARIABLE_RevItemInitialises_130_130, STATE_VARIABLE_RevItemFinalises_109_109, &STATE_VARIABLE_RevItemFinalises_131_131, STATE_VARIABLE_RevItemMutables_110_110, &STATE_VARIABLE_RevItemMutables_132_132, STATE_VARIABLE_RevItemTypeRepns_111_111, &STATE_VARIABLE_RevItemTypeRepns_133_133, STATE_VARIABLE_RevItemForeignEnums_112_112, &STATE_VARIABLE_RevItemForeignEnums_134_134, STATE_VARIABLE_RevItemForeignExportEnums_113_113, &STATE_VARIABLE_RevItemForeignExportEnums_135_135, STATE_VARIABLE_RevItemPragmas2_114_114, &STATE_VARIABLE_RevItemPragmas2_136_136, STATE_VARIABLE_RevItemPragmas3_115_115, &STATE_VARIABLE_RevItemPragmas3_137_137, STATE_VARIABLE_RevItemClauses_116_116, &STATE_VARIABLE_RevItemClauses_138_138);
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_44_p_0(IndirectIntItemBlocks_50, STATE_VARIABLE_RevItemAvailLists_118_118, &STATE_VARIABLE_RevItemAvailLists_140_140, STATE_VARIABLE_ItemFIMsCord_119_119, &STATE_VARIABLE_ItemFIMsCord_141_141, STATE_VARIABLE_RevItemTypeDefnsAbstract_120_120, &STATE_VARIABLE_RevItemTypeDefnsAbstract_142_142, STATE_VARIABLE_RevItemTypeDefnsMercury_121_121, &STATE_VARIABLE_RevItemTypeDefnsMercury_143_143, STATE_VARIABLE_RevItemTypeDefnsForeign_122_122, &STATE_VARIABLE_RevItemTypeDefnsForeign_144_144, STATE_VARIABLE_RevItemInstDefns_123_123, &STATE_VARIABLE_RevItemInstDefns_145_145, STATE_VARIABLE_RevItemModeDefns_124_124, &STATE_VARIABLE_RevItemModeDefns_146_146, STATE_VARIABLE_RevItemPredDecls_125_125, &STATE_VARIABLE_RevItemPredDecls_147_147, STATE_VARIABLE_RevItemModeDecls_126_126, &STATE_VARIABLE_RevItemModeDecls_148_148, STATE_VARIABLE_RevItemPromises_127_127, &STATE_VARIABLE_RevItemPromises_149_149, STATE_VARIABLE_RevItemTypeclasses_128_128, &STATE_VARIABLE_RevItemTypeclasses_150_150, STATE_VARIABLE_RevItemInstances_129_129, &STATE_VARIABLE_RevItemInstances_151_151, STATE_VARIABLE_RevItemInitialises_130_130, &STATE_VARIABLE_RevItemInitialises_152_152, STATE_VARIABLE_RevItemFinalises_131_131, &STATE_VARIABLE_RevItemFinalises_153_153, STATE_VARIABLE_RevItemMutables_132_132, &STATE_VARIABLE_RevItemMutables_154_154, STATE_VARIABLE_RevItemTypeRepns_133_133, &STATE_VARIABLE_RevItemTypeRepns_155_155, STATE_VARIABLE_RevItemForeignEnums_134_134, &STATE_VARIABLE_RevItemForeignEnums_156_156, STATE_VARIABLE_RevItemForeignExportEnums_135_135, &STATE_VARIABLE_RevItemForeignExportEnums_157_157, STATE_VARIABLE_RevItemPragmas2_136_136, &STATE_VARIABLE_RevItemPragmas2_158_158, STATE_VARIABLE_RevItemPragmas3_137_137, &STATE_VARIABLE_RevItemPragmas3_159_159, STATE_VARIABLE_RevItemClauses_138_138, &STATE_VARIABLE_RevItemClauses_160_160);
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho2_44_p_0(IntForOptItemBlocks_52, STATE_VARIABLE_RevItemAvailLists_140_140, &STATE_VARIABLE_RevItemAvailLists_162_162, STATE_VARIABLE_ItemFIMsCord_141_141, &STATE_VARIABLE_ItemFIMsCord_163_163, STATE_VARIABLE_RevItemTypeDefnsAbstract_142_142, &STATE_VARIABLE_RevItemTypeDefnsAbstract_164_164, STATE_VARIABLE_RevItemTypeDefnsMercury_143_143, &STATE_VARIABLE_RevItemTypeDefnsMercury_165_165, STATE_VARIABLE_RevItemTypeDefnsForeign_144_144, &STATE_VARIABLE_RevItemTypeDefnsForeign_166_166, STATE_VARIABLE_RevItemInstDefns_145_145, &STATE_VARIABLE_RevItemInstDefns_167_167, STATE_VARIABLE_RevItemModeDefns_146_146, &STATE_VARIABLE_RevItemModeDefns_168_168, STATE_VARIABLE_RevItemPredDecls_147_147, &STATE_VARIABLE_RevItemPredDecls_169_169, STATE_VARIABLE_RevItemModeDecls_148_148, &STATE_VARIABLE_RevItemModeDecls_170_170, STATE_VARIABLE_RevItemPromises_149_149, &STATE_VARIABLE_RevItemPromises_171_171, STATE_VARIABLE_RevItemTypeclasses_150_150, &STATE_VARIABLE_RevItemTypeclasses_172_172, STATE_VARIABLE_RevItemInstances_151_151, &STATE_VARIABLE_RevItemInstances_173_173, STATE_VARIABLE_RevItemInitialises_152_152, &STATE_VARIABLE_RevItemInitialises_174_174, STATE_VARIABLE_RevItemFinalises_153_153, &STATE_VARIABLE_RevItemFinalises_175_175, STATE_VARIABLE_RevItemMutables_154_154, &STATE_VARIABLE_RevItemMutables_176_176, STATE_VARIABLE_RevItemTypeRepns_155_155, &STATE_VARIABLE_RevItemTypeRepns_177_177, STATE_VARIABLE_RevItemForeignEnums_156_156, &STATE_VARIABLE_RevItemForeignEnums_178_178, STATE_VARIABLE_RevItemForeignExportEnums_157_157, &STATE_VARIABLE_RevItemForeignExportEnums_179_179, STATE_VARIABLE_RevItemPragmas2_158_158, &STATE_VARIABLE_RevItemPragmas2_180_180, STATE_VARIABLE_RevItemPragmas3_159_159, &STATE_VARIABLE_RevItemPragmas3_181_181, STATE_VARIABLE_RevItemClauses_160_160, &STATE_VARIABLE_RevItemClauses_182_182);
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho1_44_p_0(OptItemBlocks_51, STATE_VARIABLE_RevItemAvailLists_162_162, &STATE_VARIABLE_RevItemAvailLists_184_184, STATE_VARIABLE_ItemFIMsCord_163_163, &STATE_VARIABLE_ItemFIMsCord_185_185, STATE_VARIABLE_RevItemTypeDefnsAbstract_164_164, &STATE_VARIABLE_RevItemTypeDefnsAbstract_186_186, STATE_VARIABLE_RevItemTypeDefnsMercury_165_165, &STATE_VARIABLE_RevItemTypeDefnsMercury_187_187, STATE_VARIABLE_RevItemTypeDefnsForeign_166_166, &STATE_VARIABLE_RevItemTypeDefnsForeign_188_188, STATE_VARIABLE_RevItemInstDefns_167_167, &STATE_VARIABLE_RevItemInstDefns_189_189, STATE_VARIABLE_RevItemModeDefns_168_168, &STATE_VARIABLE_RevItemModeDefns_190_190, STATE_VARIABLE_RevItemPredDecls_169_169, &STATE_VARIABLE_RevItemPredDecls_191_191, STATE_VARIABLE_RevItemModeDecls_170_170, &STATE_VARIABLE_RevItemModeDecls_192_192, STATE_VARIABLE_RevItemPromises_171_171, &STATE_VARIABLE_RevItemPromises_193_193, STATE_VARIABLE_RevItemTypeclasses_172_172, &STATE_VARIABLE_RevItemTypeclasses_194_194, STATE_VARIABLE_RevItemInstances_173_173, &STATE_VARIABLE_RevItemInstances_195_195, STATE_VARIABLE_RevItemInitialises_174_174, &STATE_VARIABLE_RevItemInitialises_196_196, STATE_VARIABLE_RevItemFinalises_175_175, &STATE_VARIABLE_RevItemFinalises_197_197, STATE_VARIABLE_RevItemMutables_176_176, &STATE_VARIABLE_RevItemMutables_198_198, STATE_VARIABLE_RevItemTypeRepns_177_177, &STATE_VARIABLE_RevItemTypeRepns_199_199, STATE_VARIABLE_RevItemForeignEnums_178_178, &STATE_VARIABLE_RevItemForeignEnums_200_200, STATE_VARIABLE_RevItemForeignExportEnums_179_179, &STATE_VARIABLE_RevItemForeignExportEnums_201_201, STATE_VARIABLE_RevItemPragmas2_180_180, &STATE_VARIABLE_RevItemPragmas2_202_202, STATE_VARIABLE_RevItemPragmas3_181_181, &STATE_VARIABLE_RevItemPragmas3_203_203, STATE_VARIABLE_RevItemClauses_182_182, &STATE_VARIABLE_RevItemClauses_204_204);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), STATE_VARIABLE_RevItemAvailLists_184_184, ItemAvailLists_24);
    *ItemFIMs_25 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), STATE_VARIABLE_ItemFIMsCord_185_185);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[3]), STATE_VARIABLE_RevItemTypeDefnsAbstract_186_186, ItemTypeDefnsAbstract_26);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[3]), STATE_VARIABLE_RevItemTypeDefnsMercury_187_187, ItemTypeDefnsMercury_27);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[3]), STATE_VARIABLE_RevItemTypeDefnsForeign_188_188, ItemTypeDefnsForeign_28);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[4]), STATE_VARIABLE_RevItemInstDefns_189_189, ItemInstDefns_29);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[5]), STATE_VARIABLE_RevItemModeDefns_190_190, ItemModeDefns_30);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[6]), STATE_VARIABLE_RevItemPredDecls_191_191, ItemPredDecls_31);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[7]), STATE_VARIABLE_RevItemModeDecls_192_192, ItemModeDecls_32);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[8]), STATE_VARIABLE_RevItemPromises_193_193, ItemPromises_33);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[9]), STATE_VARIABLE_RevItemTypeclasses_194_194, ItemTypeclasses_34);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[10]), STATE_VARIABLE_RevItemInstances_195_195, ItemInstances_35);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[11]), STATE_VARIABLE_RevItemInitialises_196_196, ItemInitialises_36);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[12]), STATE_VARIABLE_RevItemFinalises_197_197, ItemFinalises_37);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[13]), STATE_VARIABLE_RevItemMutables_198_198, ItemMutables_38);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), STATE_VARIABLE_RevItemTypeRepns_199_199, ItemTypeRepns_39);
    *ItemForeignEnums_40 = mercury__list__inst_preserving_reverse_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[0]), STATE_VARIABLE_RevItemForeignEnums_200_200);
    *ItemForeignExportEnums_41 = mercury__list__inst_preserving_reverse_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), STATE_VARIABLE_RevItemForeignExportEnums_201_201);
    *ItemPragmas2_42 = mercury__list__inst_preserving_reverse_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[15]), STATE_VARIABLE_RevItemPragmas2_202_202);
    *ItemPragmas3_43 = mercury__list__inst_preserving_reverse_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[15]), STATE_VARIABLE_RevItemPragmas3_203_203);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[16]), STATE_VARIABLE_RevItemClauses_204_204, ItemClauses_44);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho4_44_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_ItemFIMsCord_0_5,
  MR_Word * STATE_VARIABLE_ItemFIMsCord_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_10,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_11,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_12,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_14,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_15,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_16,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_18,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_19,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_20,
  MR_Word STATE_VARIABLE_RevItemPromises_0_21,
  MR_Word * STATE_VARIABLE_RevItemPromises_22,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_23,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_24,
  MR_Word STATE_VARIABLE_RevItemInstances_0_25,
  MR_Word * STATE_VARIABLE_RevItemInstances_26,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_27,
  MR_Word * STATE_VARIABLE_RevItemInitialises_28,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_29,
  MR_Word * STATE_VARIABLE_RevItemFinalises_30,
  MR_Word STATE_VARIABLE_RevItemMutables_0_31,
  MR_Word * STATE_VARIABLE_RevItemMutables_32,
  MR_Word STATE_VARIABLE_RevItemTypeRepns_0_33,
  MR_Word * STATE_VARIABLE_RevItemTypeRepns_34,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_35,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_36,
  MR_Word STATE_VARIABLE_RevItemForeignExportEnums_0_37,
  MR_Word * STATE_VARIABLE_RevItemForeignExportEnums_38,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_39,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_40,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_41,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_42,
  MR_Word STATE_VARIABLE_RevItemClauses_0_43,
  MR_Word * STATE_VARIABLE_RevItemClauses_44)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevItemClauses_44 = STATE_VARIABLE_RevItemClauses_0_43;
      *STATE_VARIABLE_RevItemPragmas3_42 = STATE_VARIABLE_RevItemPragmas3_0_41;
      *STATE_VARIABLE_RevItemPragmas2_40 = STATE_VARIABLE_RevItemPragmas2_0_39;
      *STATE_VARIABLE_RevItemForeignExportEnums_38 = STATE_VARIABLE_RevItemForeignExportEnums_0_37;
      *STATE_VARIABLE_RevItemForeignEnums_36 = STATE_VARIABLE_RevItemForeignEnums_0_35;
      *STATE_VARIABLE_RevItemTypeRepns_34 = STATE_VARIABLE_RevItemTypeRepns_0_33;
      *STATE_VARIABLE_RevItemMutables_32 = STATE_VARIABLE_RevItemMutables_0_31;
      *STATE_VARIABLE_RevItemFinalises_30 = STATE_VARIABLE_RevItemFinalises_0_29;
      *STATE_VARIABLE_RevItemInitialises_28 = STATE_VARIABLE_RevItemInitialises_0_27;
      *STATE_VARIABLE_RevItemInstances_26 = STATE_VARIABLE_RevItemInstances_0_25;
      *STATE_VARIABLE_RevItemTypeclasses_24 = STATE_VARIABLE_RevItemTypeclasses_0_23;
      *STATE_VARIABLE_RevItemPromises_22 = STATE_VARIABLE_RevItemPromises_0_21;
      *STATE_VARIABLE_RevItemModeDecls_20 = STATE_VARIABLE_RevItemModeDecls_0_19;
      *STATE_VARIABLE_RevItemPredDecls_18 = STATE_VARIABLE_RevItemPredDecls_0_17;
      *STATE_VARIABLE_RevItemModeDefns_16 = STATE_VARIABLE_RevItemModeDefns_0_15;
      *STATE_VARIABLE_RevItemInstDefns_14 = STATE_VARIABLE_RevItemInstDefns_0_13;
      *STATE_VARIABLE_RevItemTypeDefnsForeign_12 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_11;
      *STATE_VARIABLE_RevItemTypeDefnsMercury_10 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_9;
      *STATE_VARIABLE_RevItemTypeDefnsAbstract_8 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7;
      *STATE_VARIABLE_ItemFIMsCord_6 = STATE_VARIABLE_ItemFIMsCord_0_5;
      *STATE_VARIABLE_RevItemAvailLists_4 = STATE_VARIABLE_RevItemAvailLists_0_3;
    }
    else
    {
      MR_Word ItemBlock_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_109, (MR_Integer) 1))));
      MR_Word Avails_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_109, (MR_Integer) 3))));
      MR_Word FIMs_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_109, (MR_Integer) 4))));
      MR_Word Items_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_109, (MR_Integer) 5))));
      MR_Word SectionInfo_139;
      MR_Word ItemMercuryStatus_140;
      MR_Word AvailSectionItem_142;
      MR_Word STATE_VARIABLE_ItemFIMsCord_185_185;
      MR_Word Var_186;
      MR_Word STATE_VARIABLE_RevItemAvailLists_187_187;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_188_188;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_189_189;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_190_190;
      MR_Word STATE_VARIABLE_RevItemInstDefns_191_191;
      MR_Word STATE_VARIABLE_RevItemModeDefns_192_192;
      MR_Word STATE_VARIABLE_RevItemPredDecls_193_193;
      MR_Word STATE_VARIABLE_RevItemModeDecls_194_194;
      MR_Word STATE_VARIABLE_RevItemPromises_195_195;
      MR_Word STATE_VARIABLE_RevItemTypeclasses_196_196;
      MR_Word STATE_VARIABLE_RevItemInstances_197_197;
      MR_Word STATE_VARIABLE_RevItemInitialises_198_198;
      MR_Word STATE_VARIABLE_RevItemFinalises_199_199;
      MR_Word STATE_VARIABLE_RevItemMutables_200_200;
      MR_Word STATE_VARIABLE_RevItemTypeRepns_201_201;
      MR_Word STATE_VARIABLE_RevItemForeignEnums_202_202;
      MR_Word STATE_VARIABLE_RevItemForeignExportEnums_203_203;
      MR_Word STATE_VARIABLE_RevItemPragmas2_204_204;
      MR_Word STATE_VARIABLE_RevItemPragmas3_205_205;
      MR_Word STATE_VARIABLE_RevItemClauses_206_206;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ItemFIMsCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_9;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_11;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstDefns_0_13;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDefns_0_15;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPredDecls_0_17;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDecls_0_19;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPromises_0_21;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_23;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstances_0_25;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInitialises_0_27;
      MR_Word next_value_of_STATE_VARIABLE_RevItemFinalises_0_29;
      MR_Word next_value_of_STATE_VARIABLE_RevItemMutables_0_31;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_33;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_35;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_37;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas2_0_39;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas3_0_41;
      MR_Word next_value_of_STATE_VARIABLE_RevItemClauses_0_43;

      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__src_module_section_status_2_p_0(Section_134, &SectionInfo_139);
      ItemMercuryStatus_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_139, (MR_Integer) 0))));
      {
        AvailSectionItem_142 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AvailSectionItem_142, 0) = ((MR_Box) (ItemMercuryStatus_140));
        MR_hl_field(MR_mktag(0), AvailSectionItem_142, 1) = ((MR_Box) (Avails_136));
      }
      Var_186 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMs_137);
      STATE_VARIABLE_ItemFIMsCord_185_185 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), STATE_VARIABLE_ItemFIMsCord_0_5, Var_186);
      {
        STATE_VARIABLE_RevItemAvailLists_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_187_187, 0) = ((MR_Box) (AvailSectionItem_142));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_187_187, 1) = ((MR_Box) (STATE_VARIABLE_RevItemAvailLists_0_3));
      }
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_40_p_0(Items_138, SectionInfo_139, STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7, &STATE_VARIABLE_RevItemTypeDefnsAbstract_188_188, STATE_VARIABLE_RevItemTypeDefnsMercury_0_9, &STATE_VARIABLE_RevItemTypeDefnsMercury_189_189, STATE_VARIABLE_RevItemTypeDefnsForeign_0_11, &STATE_VARIABLE_RevItemTypeDefnsForeign_190_190, STATE_VARIABLE_RevItemInstDefns_0_13, &STATE_VARIABLE_RevItemInstDefns_191_191, STATE_VARIABLE_RevItemModeDefns_0_15, &STATE_VARIABLE_RevItemModeDefns_192_192, STATE_VARIABLE_RevItemPredDecls_0_17, &STATE_VARIABLE_RevItemPredDecls_193_193, STATE_VARIABLE_RevItemModeDecls_0_19, &STATE_VARIABLE_RevItemModeDecls_194_194, STATE_VARIABLE_RevItemPromises_0_21, &STATE_VARIABLE_RevItemPromises_195_195, STATE_VARIABLE_RevItemTypeclasses_0_23, &STATE_VARIABLE_RevItemTypeclasses_196_196, STATE_VARIABLE_RevItemInstances_0_25, &STATE_VARIABLE_RevItemInstances_197_197, STATE_VARIABLE_RevItemInitialises_0_27, &STATE_VARIABLE_RevItemInitialises_198_198, STATE_VARIABLE_RevItemFinalises_0_29, &STATE_VARIABLE_RevItemFinalises_199_199, STATE_VARIABLE_RevItemMutables_0_31, &STATE_VARIABLE_RevItemMutables_200_200, STATE_VARIABLE_RevItemTypeRepns_0_33, &STATE_VARIABLE_RevItemTypeRepns_201_201, STATE_VARIABLE_RevItemForeignEnums_0_35, &STATE_VARIABLE_RevItemForeignEnums_202_202, STATE_VARIABLE_RevItemForeignExportEnums_0_37, &STATE_VARIABLE_RevItemForeignExportEnums_203_203, STATE_VARIABLE_RevItemPragmas2_0_39, &STATE_VARIABLE_RevItemPragmas2_204_204, STATE_VARIABLE_RevItemPragmas3_0_41, &STATE_VARIABLE_RevItemPragmas3_205_205, STATE_VARIABLE_RevItemClauses_0_43, &STATE_VARIABLE_RevItemClauses_206_206);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_110;
      next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3 = STATE_VARIABLE_RevItemAvailLists_187_187;
      next_value_of_STATE_VARIABLE_ItemFIMsCord_0_5 = STATE_VARIABLE_ItemFIMsCord_185_185;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7 = STATE_VARIABLE_RevItemTypeDefnsAbstract_188_188;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_9 = STATE_VARIABLE_RevItemTypeDefnsMercury_189_189;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_11 = STATE_VARIABLE_RevItemTypeDefnsForeign_190_190;
      next_value_of_STATE_VARIABLE_RevItemInstDefns_0_13 = STATE_VARIABLE_RevItemInstDefns_191_191;
      next_value_of_STATE_VARIABLE_RevItemModeDefns_0_15 = STATE_VARIABLE_RevItemModeDefns_192_192;
      next_value_of_STATE_VARIABLE_RevItemPredDecls_0_17 = STATE_VARIABLE_RevItemPredDecls_193_193;
      next_value_of_STATE_VARIABLE_RevItemModeDecls_0_19 = STATE_VARIABLE_RevItemModeDecls_194_194;
      next_value_of_STATE_VARIABLE_RevItemPromises_0_21 = STATE_VARIABLE_RevItemPromises_195_195;
      next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_23 = STATE_VARIABLE_RevItemTypeclasses_196_196;
      next_value_of_STATE_VARIABLE_RevItemInstances_0_25 = STATE_VARIABLE_RevItemInstances_197_197;
      next_value_of_STATE_VARIABLE_RevItemInitialises_0_27 = STATE_VARIABLE_RevItemInitialises_198_198;
      next_value_of_STATE_VARIABLE_RevItemFinalises_0_29 = STATE_VARIABLE_RevItemFinalises_199_199;
      next_value_of_STATE_VARIABLE_RevItemMutables_0_31 = STATE_VARIABLE_RevItemMutables_200_200;
      next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_33 = STATE_VARIABLE_RevItemTypeRepns_201_201;
      next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_35 = STATE_VARIABLE_RevItemForeignEnums_202_202;
      next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_37 = STATE_VARIABLE_RevItemForeignExportEnums_203_203;
      next_value_of_STATE_VARIABLE_RevItemPragmas2_0_39 = STATE_VARIABLE_RevItemPragmas2_204_204;
      next_value_of_STATE_VARIABLE_RevItemPragmas3_0_41 = STATE_VARIABLE_RevItemPragmas3_205_205;
      next_value_of_STATE_VARIABLE_RevItemClauses_0_43 = STATE_VARIABLE_RevItemClauses_206_206;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevItemAvailLists_0_3 = next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      STATE_VARIABLE_ItemFIMsCord_0_5 = next_value_of_STATE_VARIABLE_ItemFIMsCord_0_5;
      STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7;
      STATE_VARIABLE_RevItemTypeDefnsMercury_0_9 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_9;
      STATE_VARIABLE_RevItemTypeDefnsForeign_0_11 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_11;
      STATE_VARIABLE_RevItemInstDefns_0_13 = next_value_of_STATE_VARIABLE_RevItemInstDefns_0_13;
      STATE_VARIABLE_RevItemModeDefns_0_15 = next_value_of_STATE_VARIABLE_RevItemModeDefns_0_15;
      STATE_VARIABLE_RevItemPredDecls_0_17 = next_value_of_STATE_VARIABLE_RevItemPredDecls_0_17;
      STATE_VARIABLE_RevItemModeDecls_0_19 = next_value_of_STATE_VARIABLE_RevItemModeDecls_0_19;
      STATE_VARIABLE_RevItemPromises_0_21 = next_value_of_STATE_VARIABLE_RevItemPromises_0_21;
      STATE_VARIABLE_RevItemTypeclasses_0_23 = next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_23;
      STATE_VARIABLE_RevItemInstances_0_25 = next_value_of_STATE_VARIABLE_RevItemInstances_0_25;
      STATE_VARIABLE_RevItemInitialises_0_27 = next_value_of_STATE_VARIABLE_RevItemInitialises_0_27;
      STATE_VARIABLE_RevItemFinalises_0_29 = next_value_of_STATE_VARIABLE_RevItemFinalises_0_29;
      STATE_VARIABLE_RevItemMutables_0_31 = next_value_of_STATE_VARIABLE_RevItemMutables_0_31;
      STATE_VARIABLE_RevItemTypeRepns_0_33 = next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_33;
      STATE_VARIABLE_RevItemForeignEnums_0_35 = next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_35;
      STATE_VARIABLE_RevItemForeignExportEnums_0_37 = next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_37;
      STATE_VARIABLE_RevItemPragmas2_0_39 = next_value_of_STATE_VARIABLE_RevItemPragmas2_0_39;
      STATE_VARIABLE_RevItemPragmas3_0_41 = next_value_of_STATE_VARIABLE_RevItemPragmas3_0_41;
      STATE_VARIABLE_RevItemClauses_0_43 = next_value_of_STATE_VARIABLE_RevItemClauses_0_43;
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
          Status_5 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[2]);
          NeedQual_6 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          Status_5 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[3]);
          NeedQual_6 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 0:
        {
          Status_5 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[4]);
          NeedQual_6 = (MR_Integer) 1;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *SectionInfo_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Status_5));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (NeedQual_6));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho3_44_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_ItemFIMsCord_0_5,
  MR_Word * STATE_VARIABLE_ItemFIMsCord_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_10,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_11,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_12,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_14,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_15,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_16,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_18,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_19,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_20,
  MR_Word STATE_VARIABLE_RevItemPromises_0_21,
  MR_Word * STATE_VARIABLE_RevItemPromises_22,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_23,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_24,
  MR_Word STATE_VARIABLE_RevItemInstances_0_25,
  MR_Word * STATE_VARIABLE_RevItemInstances_26,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_27,
  MR_Word * STATE_VARIABLE_RevItemInitialises_28,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_29,
  MR_Word * STATE_VARIABLE_RevItemFinalises_30,
  MR_Word STATE_VARIABLE_RevItemMutables_0_31,
  MR_Word * STATE_VARIABLE_RevItemMutables_32,
  MR_Word STATE_VARIABLE_RevItemTypeRepns_0_33,
  MR_Word * STATE_VARIABLE_RevItemTypeRepns_34,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_35,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_36,
  MR_Word STATE_VARIABLE_RevItemForeignExportEnums_0_37,
  MR_Word * STATE_VARIABLE_RevItemForeignExportEnums_38,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_39,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_40,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_41,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_42,
  MR_Word STATE_VARIABLE_RevItemClauses_0_43,
  MR_Word * STATE_VARIABLE_RevItemClauses_44)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevItemClauses_44 = STATE_VARIABLE_RevItemClauses_0_43;
      *STATE_VARIABLE_RevItemPragmas3_42 = STATE_VARIABLE_RevItemPragmas3_0_41;
      *STATE_VARIABLE_RevItemPragmas2_40 = STATE_VARIABLE_RevItemPragmas2_0_39;
      *STATE_VARIABLE_RevItemForeignExportEnums_38 = STATE_VARIABLE_RevItemForeignExportEnums_0_37;
      *STATE_VARIABLE_RevItemForeignEnums_36 = STATE_VARIABLE_RevItemForeignEnums_0_35;
      *STATE_VARIABLE_RevItemTypeRepns_34 = STATE_VARIABLE_RevItemTypeRepns_0_33;
      *STATE_VARIABLE_RevItemMutables_32 = STATE_VARIABLE_RevItemMutables_0_31;
      *STATE_VARIABLE_RevItemFinalises_30 = STATE_VARIABLE_RevItemFinalises_0_29;
      *STATE_VARIABLE_RevItemInitialises_28 = STATE_VARIABLE_RevItemInitialises_0_27;
      *STATE_VARIABLE_RevItemInstances_26 = STATE_VARIABLE_RevItemInstances_0_25;
      *STATE_VARIABLE_RevItemTypeclasses_24 = STATE_VARIABLE_RevItemTypeclasses_0_23;
      *STATE_VARIABLE_RevItemPromises_22 = STATE_VARIABLE_RevItemPromises_0_21;
      *STATE_VARIABLE_RevItemModeDecls_20 = STATE_VARIABLE_RevItemModeDecls_0_19;
      *STATE_VARIABLE_RevItemPredDecls_18 = STATE_VARIABLE_RevItemPredDecls_0_17;
      *STATE_VARIABLE_RevItemModeDefns_16 = STATE_VARIABLE_RevItemModeDefns_0_15;
      *STATE_VARIABLE_RevItemInstDefns_14 = STATE_VARIABLE_RevItemInstDefns_0_13;
      *STATE_VARIABLE_RevItemTypeDefnsForeign_12 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_11;
      *STATE_VARIABLE_RevItemTypeDefnsMercury_10 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_9;
      *STATE_VARIABLE_RevItemTypeDefnsAbstract_8 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7;
      *STATE_VARIABLE_ItemFIMsCord_6 = STATE_VARIABLE_ItemFIMsCord_0_5;
      *STATE_VARIABLE_RevItemAvailLists_4 = STATE_VARIABLE_RevItemAvailLists_0_3;
    }
    else
    {
      MR_Word ItemBlock_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_109, (MR_Integer) 1))));
      MR_Word Avails_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_109, (MR_Integer) 3))));
      MR_Word FIMs_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_109, (MR_Integer) 4))));
      MR_Word Items_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_109, (MR_Integer) 5))));
      MR_Word SectionInfo_139;
      MR_Word ItemMercuryStatus_140;
      MR_Word AvailSectionItem_142;
      MR_Word STATE_VARIABLE_ItemFIMsCord_185_185;
      MR_Word Var_186;
      MR_Word STATE_VARIABLE_RevItemAvailLists_187_187;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_188_188;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_189_189;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_190_190;
      MR_Word STATE_VARIABLE_RevItemInstDefns_191_191;
      MR_Word STATE_VARIABLE_RevItemModeDefns_192_192;
      MR_Word STATE_VARIABLE_RevItemPredDecls_193_193;
      MR_Word STATE_VARIABLE_RevItemModeDecls_194_194;
      MR_Word STATE_VARIABLE_RevItemPromises_195_195;
      MR_Word STATE_VARIABLE_RevItemTypeclasses_196_196;
      MR_Word STATE_VARIABLE_RevItemInstances_197_197;
      MR_Word STATE_VARIABLE_RevItemInitialises_198_198;
      MR_Word STATE_VARIABLE_RevItemFinalises_199_199;
      MR_Word STATE_VARIABLE_RevItemMutables_200_200;
      MR_Word STATE_VARIABLE_RevItemTypeRepns_201_201;
      MR_Word STATE_VARIABLE_RevItemForeignEnums_202_202;
      MR_Word STATE_VARIABLE_RevItemForeignExportEnums_203_203;
      MR_Word STATE_VARIABLE_RevItemPragmas2_204_204;
      MR_Word STATE_VARIABLE_RevItemPragmas3_205_205;
      MR_Word STATE_VARIABLE_RevItemClauses_206_206;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ItemFIMsCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_9;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_11;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstDefns_0_13;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDefns_0_15;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPredDecls_0_17;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDecls_0_19;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPromises_0_21;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_23;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstances_0_25;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInitialises_0_27;
      MR_Word next_value_of_STATE_VARIABLE_RevItemFinalises_0_29;
      MR_Word next_value_of_STATE_VARIABLE_RevItemMutables_0_31;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_33;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_35;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_37;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas2_0_39;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas3_0_41;
      MR_Word next_value_of_STATE_VARIABLE_RevItemClauses_0_43;

      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__int_module_section_status_2_p_0(Section_134, &SectionInfo_139);
      ItemMercuryStatus_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_139, (MR_Integer) 0))));
      {
        AvailSectionItem_142 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AvailSectionItem_142, 0) = ((MR_Box) (ItemMercuryStatus_140));
        MR_hl_field(MR_mktag(0), AvailSectionItem_142, 1) = ((MR_Box) (Avails_136));
      }
      Var_186 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMs_137);
      STATE_VARIABLE_ItemFIMsCord_185_185 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), STATE_VARIABLE_ItemFIMsCord_0_5, Var_186);
      {
        STATE_VARIABLE_RevItemAvailLists_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_187_187, 0) = ((MR_Box) (AvailSectionItem_142));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_187_187, 1) = ((MR_Box) (STATE_VARIABLE_RevItemAvailLists_0_3));
      }
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_40_p_0(Items_138, SectionInfo_139, STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7, &STATE_VARIABLE_RevItemTypeDefnsAbstract_188_188, STATE_VARIABLE_RevItemTypeDefnsMercury_0_9, &STATE_VARIABLE_RevItemTypeDefnsMercury_189_189, STATE_VARIABLE_RevItemTypeDefnsForeign_0_11, &STATE_VARIABLE_RevItemTypeDefnsForeign_190_190, STATE_VARIABLE_RevItemInstDefns_0_13, &STATE_VARIABLE_RevItemInstDefns_191_191, STATE_VARIABLE_RevItemModeDefns_0_15, &STATE_VARIABLE_RevItemModeDefns_192_192, STATE_VARIABLE_RevItemPredDecls_0_17, &STATE_VARIABLE_RevItemPredDecls_193_193, STATE_VARIABLE_RevItemModeDecls_0_19, &STATE_VARIABLE_RevItemModeDecls_194_194, STATE_VARIABLE_RevItemPromises_0_21, &STATE_VARIABLE_RevItemPromises_195_195, STATE_VARIABLE_RevItemTypeclasses_0_23, &STATE_VARIABLE_RevItemTypeclasses_196_196, STATE_VARIABLE_RevItemInstances_0_25, &STATE_VARIABLE_RevItemInstances_197_197, STATE_VARIABLE_RevItemInitialises_0_27, &STATE_VARIABLE_RevItemInitialises_198_198, STATE_VARIABLE_RevItemFinalises_0_29, &STATE_VARIABLE_RevItemFinalises_199_199, STATE_VARIABLE_RevItemMutables_0_31, &STATE_VARIABLE_RevItemMutables_200_200, STATE_VARIABLE_RevItemTypeRepns_0_33, &STATE_VARIABLE_RevItemTypeRepns_201_201, STATE_VARIABLE_RevItemForeignEnums_0_35, &STATE_VARIABLE_RevItemForeignEnums_202_202, STATE_VARIABLE_RevItemForeignExportEnums_0_37, &STATE_VARIABLE_RevItemForeignExportEnums_203_203, STATE_VARIABLE_RevItemPragmas2_0_39, &STATE_VARIABLE_RevItemPragmas2_204_204, STATE_VARIABLE_RevItemPragmas3_0_41, &STATE_VARIABLE_RevItemPragmas3_205_205, STATE_VARIABLE_RevItemClauses_0_43, &STATE_VARIABLE_RevItemClauses_206_206);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_110;
      next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3 = STATE_VARIABLE_RevItemAvailLists_187_187;
      next_value_of_STATE_VARIABLE_ItemFIMsCord_0_5 = STATE_VARIABLE_ItemFIMsCord_185_185;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7 = STATE_VARIABLE_RevItemTypeDefnsAbstract_188_188;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_9 = STATE_VARIABLE_RevItemTypeDefnsMercury_189_189;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_11 = STATE_VARIABLE_RevItemTypeDefnsForeign_190_190;
      next_value_of_STATE_VARIABLE_RevItemInstDefns_0_13 = STATE_VARIABLE_RevItemInstDefns_191_191;
      next_value_of_STATE_VARIABLE_RevItemModeDefns_0_15 = STATE_VARIABLE_RevItemModeDefns_192_192;
      next_value_of_STATE_VARIABLE_RevItemPredDecls_0_17 = STATE_VARIABLE_RevItemPredDecls_193_193;
      next_value_of_STATE_VARIABLE_RevItemModeDecls_0_19 = STATE_VARIABLE_RevItemModeDecls_194_194;
      next_value_of_STATE_VARIABLE_RevItemPromises_0_21 = STATE_VARIABLE_RevItemPromises_195_195;
      next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_23 = STATE_VARIABLE_RevItemTypeclasses_196_196;
      next_value_of_STATE_VARIABLE_RevItemInstances_0_25 = STATE_VARIABLE_RevItemInstances_197_197;
      next_value_of_STATE_VARIABLE_RevItemInitialises_0_27 = STATE_VARIABLE_RevItemInitialises_198_198;
      next_value_of_STATE_VARIABLE_RevItemFinalises_0_29 = STATE_VARIABLE_RevItemFinalises_199_199;
      next_value_of_STATE_VARIABLE_RevItemMutables_0_31 = STATE_VARIABLE_RevItemMutables_200_200;
      next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_33 = STATE_VARIABLE_RevItemTypeRepns_201_201;
      next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_35 = STATE_VARIABLE_RevItemForeignEnums_202_202;
      next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_37 = STATE_VARIABLE_RevItemForeignExportEnums_203_203;
      next_value_of_STATE_VARIABLE_RevItemPragmas2_0_39 = STATE_VARIABLE_RevItemPragmas2_204_204;
      next_value_of_STATE_VARIABLE_RevItemPragmas3_0_41 = STATE_VARIABLE_RevItemPragmas3_205_205;
      next_value_of_STATE_VARIABLE_RevItemClauses_0_43 = STATE_VARIABLE_RevItemClauses_206_206;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevItemAvailLists_0_3 = next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      STATE_VARIABLE_ItemFIMsCord_0_5 = next_value_of_STATE_VARIABLE_ItemFIMsCord_0_5;
      STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7;
      STATE_VARIABLE_RevItemTypeDefnsMercury_0_9 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_9;
      STATE_VARIABLE_RevItemTypeDefnsForeign_0_11 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_11;
      STATE_VARIABLE_RevItemInstDefns_0_13 = next_value_of_STATE_VARIABLE_RevItemInstDefns_0_13;
      STATE_VARIABLE_RevItemModeDefns_0_15 = next_value_of_STATE_VARIABLE_RevItemModeDefns_0_15;
      STATE_VARIABLE_RevItemPredDecls_0_17 = next_value_of_STATE_VARIABLE_RevItemPredDecls_0_17;
      STATE_VARIABLE_RevItemModeDecls_0_19 = next_value_of_STATE_VARIABLE_RevItemModeDecls_0_19;
      STATE_VARIABLE_RevItemPromises_0_21 = next_value_of_STATE_VARIABLE_RevItemPromises_0_21;
      STATE_VARIABLE_RevItemTypeclasses_0_23 = next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_23;
      STATE_VARIABLE_RevItemInstances_0_25 = next_value_of_STATE_VARIABLE_RevItemInstances_0_25;
      STATE_VARIABLE_RevItemInitialises_0_27 = next_value_of_STATE_VARIABLE_RevItemInitialises_0_27;
      STATE_VARIABLE_RevItemFinalises_0_29 = next_value_of_STATE_VARIABLE_RevItemFinalises_0_29;
      STATE_VARIABLE_RevItemMutables_0_31 = next_value_of_STATE_VARIABLE_RevItemMutables_0_31;
      STATE_VARIABLE_RevItemTypeRepns_0_33 = next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_33;
      STATE_VARIABLE_RevItemForeignEnums_0_35 = next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_35;
      STATE_VARIABLE_RevItemForeignExportEnums_0_37 = next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_37;
      STATE_VARIABLE_RevItemPragmas2_0_39 = next_value_of_STATE_VARIABLE_RevItemPragmas2_0_39;
      STATE_VARIABLE_RevItemPragmas3_0_41 = next_value_of_STATE_VARIABLE_RevItemPragmas3_0_41;
      STATE_VARIABLE_RevItemClauses_0_43 = next_value_of_STATE_VARIABLE_RevItemClauses_0_43;
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

    if (((MR_tag((MR_Word) IntSection_3)) == (MR_Integer) 1))
    {
      Status_9 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[1]));
      NeedQual_10 = (MR_Integer) 0;
    }
    else
    {
      MR_Word ImportLocn_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntSection_3, (MR_Integer) 1))) >> 2)) & (MR_Integer) 7);
      MR_Word ImportedOrUsed_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntSection_3, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word Var_12;

      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = (MR_Box) ((MR_Unsigned) (ImportLocn_7));
      }
      {
        Status_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *SectionInfo_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Status_9));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (NeedQual_10));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho2_44_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_ItemFIMsCord_0_5,
  MR_Word * STATE_VARIABLE_ItemFIMsCord_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_10,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_11,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_12,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_14,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_15,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_16,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_18,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_19,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_20,
  MR_Word STATE_VARIABLE_RevItemPromises_0_21,
  MR_Word * STATE_VARIABLE_RevItemPromises_22,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_23,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_24,
  MR_Word STATE_VARIABLE_RevItemInstances_0_25,
  MR_Word * STATE_VARIABLE_RevItemInstances_26,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_27,
  MR_Word * STATE_VARIABLE_RevItemInitialises_28,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_29,
  MR_Word * STATE_VARIABLE_RevItemFinalises_30,
  MR_Word STATE_VARIABLE_RevItemMutables_0_31,
  MR_Word * STATE_VARIABLE_RevItemMutables_32,
  MR_Word STATE_VARIABLE_RevItemTypeRepns_0_33,
  MR_Word * STATE_VARIABLE_RevItemTypeRepns_34,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_35,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_36,
  MR_Word STATE_VARIABLE_RevItemForeignExportEnums_0_37,
  MR_Word * STATE_VARIABLE_RevItemForeignExportEnums_38,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_39,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_40,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_41,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_42,
  MR_Word STATE_VARIABLE_RevItemClauses_0_43,
  MR_Word * STATE_VARIABLE_RevItemClauses_44)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevItemClauses_44 = STATE_VARIABLE_RevItemClauses_0_43;
      *STATE_VARIABLE_RevItemPragmas3_42 = STATE_VARIABLE_RevItemPragmas3_0_41;
      *STATE_VARIABLE_RevItemPragmas2_40 = STATE_VARIABLE_RevItemPragmas2_0_39;
      *STATE_VARIABLE_RevItemForeignExportEnums_38 = STATE_VARIABLE_RevItemForeignExportEnums_0_37;
      *STATE_VARIABLE_RevItemForeignEnums_36 = STATE_VARIABLE_RevItemForeignEnums_0_35;
      *STATE_VARIABLE_RevItemTypeRepns_34 = STATE_VARIABLE_RevItemTypeRepns_0_33;
      *STATE_VARIABLE_RevItemMutables_32 = STATE_VARIABLE_RevItemMutables_0_31;
      *STATE_VARIABLE_RevItemFinalises_30 = STATE_VARIABLE_RevItemFinalises_0_29;
      *STATE_VARIABLE_RevItemInitialises_28 = STATE_VARIABLE_RevItemInitialises_0_27;
      *STATE_VARIABLE_RevItemInstances_26 = STATE_VARIABLE_RevItemInstances_0_25;
      *STATE_VARIABLE_RevItemTypeclasses_24 = STATE_VARIABLE_RevItemTypeclasses_0_23;
      *STATE_VARIABLE_RevItemPromises_22 = STATE_VARIABLE_RevItemPromises_0_21;
      *STATE_VARIABLE_RevItemModeDecls_20 = STATE_VARIABLE_RevItemModeDecls_0_19;
      *STATE_VARIABLE_RevItemPredDecls_18 = STATE_VARIABLE_RevItemPredDecls_0_17;
      *STATE_VARIABLE_RevItemModeDefns_16 = STATE_VARIABLE_RevItemModeDefns_0_15;
      *STATE_VARIABLE_RevItemInstDefns_14 = STATE_VARIABLE_RevItemInstDefns_0_13;
      *STATE_VARIABLE_RevItemTypeDefnsForeign_12 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_11;
      *STATE_VARIABLE_RevItemTypeDefnsMercury_10 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_9;
      *STATE_VARIABLE_RevItemTypeDefnsAbstract_8 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7;
      *STATE_VARIABLE_ItemFIMsCord_6 = STATE_VARIABLE_ItemFIMsCord_0_5;
      *STATE_VARIABLE_RevItemAvailLists_4 = STATE_VARIABLE_RevItemAvailLists_0_3;
    }
    else
    {
      MR_Word ItemBlock_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Avails_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_109, (MR_Integer) 3))));
      MR_Word FIMs_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_109, (MR_Integer) 4))));
      MR_Word Items_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_109, (MR_Integer) 5))));
      MR_Word SectionInfo_139;
      MR_Word ItemMercuryStatus_140;
      MR_Word AvailSectionItem_142;
      MR_Word STATE_VARIABLE_ItemFIMsCord_185_185;
      MR_Word Var_186;
      MR_Word STATE_VARIABLE_RevItemAvailLists_187_187;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_188_188;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_189_189;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_190_190;
      MR_Word STATE_VARIABLE_RevItemInstDefns_191_191;
      MR_Word STATE_VARIABLE_RevItemModeDefns_192_192;
      MR_Word STATE_VARIABLE_RevItemPredDecls_193_193;
      MR_Word STATE_VARIABLE_RevItemModeDecls_194_194;
      MR_Word STATE_VARIABLE_RevItemPromises_195_195;
      MR_Word STATE_VARIABLE_RevItemTypeclasses_196_196;
      MR_Word STATE_VARIABLE_RevItemInstances_197_197;
      MR_Word STATE_VARIABLE_RevItemInitialises_198_198;
      MR_Word STATE_VARIABLE_RevItemFinalises_199_199;
      MR_Word STATE_VARIABLE_RevItemMutables_200_200;
      MR_Word STATE_VARIABLE_RevItemTypeRepns_201_201;
      MR_Word STATE_VARIABLE_RevItemForeignEnums_202_202;
      MR_Word STATE_VARIABLE_RevItemForeignExportEnums_203_203;
      MR_Word STATE_VARIABLE_RevItemPragmas2_204_204;
      MR_Word STATE_VARIABLE_RevItemPragmas3_205_205;
      MR_Word STATE_VARIABLE_RevItemClauses_206_206;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ItemFIMsCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_9;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_11;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstDefns_0_13;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDefns_0_15;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPredDecls_0_17;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDecls_0_19;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPromises_0_21;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_23;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstances_0_25;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInitialises_0_27;
      MR_Word next_value_of_STATE_VARIABLE_RevItemFinalises_0_29;
      MR_Word next_value_of_STATE_VARIABLE_RevItemMutables_0_31;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_33;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_35;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_37;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas2_0_39;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas3_0_41;
      MR_Word next_value_of_STATE_VARIABLE_RevItemClauses_0_43;

      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(&SectionInfo_139);
      ItemMercuryStatus_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_139, (MR_Integer) 0))));
      {
        AvailSectionItem_142 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AvailSectionItem_142, 0) = ((MR_Box) (ItemMercuryStatus_140));
        MR_hl_field(MR_mktag(0), AvailSectionItem_142, 1) = ((MR_Box) (Avails_136));
      }
      Var_186 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMs_137);
      STATE_VARIABLE_ItemFIMsCord_185_185 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), STATE_VARIABLE_ItemFIMsCord_0_5, Var_186);
      {
        STATE_VARIABLE_RevItemAvailLists_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_187_187, 0) = ((MR_Box) (AvailSectionItem_142));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_187_187, 1) = ((MR_Box) (STATE_VARIABLE_RevItemAvailLists_0_3));
      }
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_40_p_0(Items_138, SectionInfo_139, STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7, &STATE_VARIABLE_RevItemTypeDefnsAbstract_188_188, STATE_VARIABLE_RevItemTypeDefnsMercury_0_9, &STATE_VARIABLE_RevItemTypeDefnsMercury_189_189, STATE_VARIABLE_RevItemTypeDefnsForeign_0_11, &STATE_VARIABLE_RevItemTypeDefnsForeign_190_190, STATE_VARIABLE_RevItemInstDefns_0_13, &STATE_VARIABLE_RevItemInstDefns_191_191, STATE_VARIABLE_RevItemModeDefns_0_15, &STATE_VARIABLE_RevItemModeDefns_192_192, STATE_VARIABLE_RevItemPredDecls_0_17, &STATE_VARIABLE_RevItemPredDecls_193_193, STATE_VARIABLE_RevItemModeDecls_0_19, &STATE_VARIABLE_RevItemModeDecls_194_194, STATE_VARIABLE_RevItemPromises_0_21, &STATE_VARIABLE_RevItemPromises_195_195, STATE_VARIABLE_RevItemTypeclasses_0_23, &STATE_VARIABLE_RevItemTypeclasses_196_196, STATE_VARIABLE_RevItemInstances_0_25, &STATE_VARIABLE_RevItemInstances_197_197, STATE_VARIABLE_RevItemInitialises_0_27, &STATE_VARIABLE_RevItemInitialises_198_198, STATE_VARIABLE_RevItemFinalises_0_29, &STATE_VARIABLE_RevItemFinalises_199_199, STATE_VARIABLE_RevItemMutables_0_31, &STATE_VARIABLE_RevItemMutables_200_200, STATE_VARIABLE_RevItemTypeRepns_0_33, &STATE_VARIABLE_RevItemTypeRepns_201_201, STATE_VARIABLE_RevItemForeignEnums_0_35, &STATE_VARIABLE_RevItemForeignEnums_202_202, STATE_VARIABLE_RevItemForeignExportEnums_0_37, &STATE_VARIABLE_RevItemForeignExportEnums_203_203, STATE_VARIABLE_RevItemPragmas2_0_39, &STATE_VARIABLE_RevItemPragmas2_204_204, STATE_VARIABLE_RevItemPragmas3_0_41, &STATE_VARIABLE_RevItemPragmas3_205_205, STATE_VARIABLE_RevItemClauses_0_43, &STATE_VARIABLE_RevItemClauses_206_206);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_110;
      next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3 = STATE_VARIABLE_RevItemAvailLists_187_187;
      next_value_of_STATE_VARIABLE_ItemFIMsCord_0_5 = STATE_VARIABLE_ItemFIMsCord_185_185;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7 = STATE_VARIABLE_RevItemTypeDefnsAbstract_188_188;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_9 = STATE_VARIABLE_RevItemTypeDefnsMercury_189_189;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_11 = STATE_VARIABLE_RevItemTypeDefnsForeign_190_190;
      next_value_of_STATE_VARIABLE_RevItemInstDefns_0_13 = STATE_VARIABLE_RevItemInstDefns_191_191;
      next_value_of_STATE_VARIABLE_RevItemModeDefns_0_15 = STATE_VARIABLE_RevItemModeDefns_192_192;
      next_value_of_STATE_VARIABLE_RevItemPredDecls_0_17 = STATE_VARIABLE_RevItemPredDecls_193_193;
      next_value_of_STATE_VARIABLE_RevItemModeDecls_0_19 = STATE_VARIABLE_RevItemModeDecls_194_194;
      next_value_of_STATE_VARIABLE_RevItemPromises_0_21 = STATE_VARIABLE_RevItemPromises_195_195;
      next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_23 = STATE_VARIABLE_RevItemTypeclasses_196_196;
      next_value_of_STATE_VARIABLE_RevItemInstances_0_25 = STATE_VARIABLE_RevItemInstances_197_197;
      next_value_of_STATE_VARIABLE_RevItemInitialises_0_27 = STATE_VARIABLE_RevItemInitialises_198_198;
      next_value_of_STATE_VARIABLE_RevItemFinalises_0_29 = STATE_VARIABLE_RevItemFinalises_199_199;
      next_value_of_STATE_VARIABLE_RevItemMutables_0_31 = STATE_VARIABLE_RevItemMutables_200_200;
      next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_33 = STATE_VARIABLE_RevItemTypeRepns_201_201;
      next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_35 = STATE_VARIABLE_RevItemForeignEnums_202_202;
      next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_37 = STATE_VARIABLE_RevItemForeignExportEnums_203_203;
      next_value_of_STATE_VARIABLE_RevItemPragmas2_0_39 = STATE_VARIABLE_RevItemPragmas2_204_204;
      next_value_of_STATE_VARIABLE_RevItemPragmas3_0_41 = STATE_VARIABLE_RevItemPragmas3_205_205;
      next_value_of_STATE_VARIABLE_RevItemClauses_0_43 = STATE_VARIABLE_RevItemClauses_206_206;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevItemAvailLists_0_3 = next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      STATE_VARIABLE_ItemFIMsCord_0_5 = next_value_of_STATE_VARIABLE_ItemFIMsCord_0_5;
      STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7;
      STATE_VARIABLE_RevItemTypeDefnsMercury_0_9 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_9;
      STATE_VARIABLE_RevItemTypeDefnsForeign_0_11 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_11;
      STATE_VARIABLE_RevItemInstDefns_0_13 = next_value_of_STATE_VARIABLE_RevItemInstDefns_0_13;
      STATE_VARIABLE_RevItemModeDefns_0_15 = next_value_of_STATE_VARIABLE_RevItemModeDefns_0_15;
      STATE_VARIABLE_RevItemPredDecls_0_17 = next_value_of_STATE_VARIABLE_RevItemPredDecls_0_17;
      STATE_VARIABLE_RevItemModeDecls_0_19 = next_value_of_STATE_VARIABLE_RevItemModeDecls_0_19;
      STATE_VARIABLE_RevItemPromises_0_21 = next_value_of_STATE_VARIABLE_RevItemPromises_0_21;
      STATE_VARIABLE_RevItemTypeclasses_0_23 = next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_23;
      STATE_VARIABLE_RevItemInstances_0_25 = next_value_of_STATE_VARIABLE_RevItemInstances_0_25;
      STATE_VARIABLE_RevItemInitialises_0_27 = next_value_of_STATE_VARIABLE_RevItemInitialises_0_27;
      STATE_VARIABLE_RevItemFinalises_0_29 = next_value_of_STATE_VARIABLE_RevItemFinalises_0_29;
      STATE_VARIABLE_RevItemMutables_0_31 = next_value_of_STATE_VARIABLE_RevItemMutables_0_31;
      STATE_VARIABLE_RevItemTypeRepns_0_33 = next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_33;
      STATE_VARIABLE_RevItemForeignEnums_0_35 = next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_35;
      STATE_VARIABLE_RevItemForeignExportEnums_0_37 = next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_37;
      STATE_VARIABLE_RevItemPragmas2_0_39 = next_value_of_STATE_VARIABLE_RevItemPragmas2_0_39;
      STATE_VARIABLE_RevItemPragmas3_0_41 = next_value_of_STATE_VARIABLE_RevItemPragmas3_0_41;
      STATE_VARIABLE_RevItemClauses_0_43 = next_value_of_STATE_VARIABLE_RevItemClauses_0_43;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_95_102_111_114_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word * SectionInfo_4)
{
  *SectionInfo_4 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[17]);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_blocks__ho1_44_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevItemAvailLists_0_3,
  MR_Word * STATE_VARIABLE_RevItemAvailLists_4,
  MR_Word STATE_VARIABLE_ItemFIMsCord_0_5,
  MR_Word * STATE_VARIABLE_ItemFIMsCord_6,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsAbstract_8,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_0_9,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsMercury_10,
  MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_0_11,
  MR_Word * STATE_VARIABLE_RevItemTypeDefnsForeign_12,
  MR_Word STATE_VARIABLE_RevItemInstDefns_0_13,
  MR_Word * STATE_VARIABLE_RevItemInstDefns_14,
  MR_Word STATE_VARIABLE_RevItemModeDefns_0_15,
  MR_Word * STATE_VARIABLE_RevItemModeDefns_16,
  MR_Word STATE_VARIABLE_RevItemPredDecls_0_17,
  MR_Word * STATE_VARIABLE_RevItemPredDecls_18,
  MR_Word STATE_VARIABLE_RevItemModeDecls_0_19,
  MR_Word * STATE_VARIABLE_RevItemModeDecls_20,
  MR_Word STATE_VARIABLE_RevItemPromises_0_21,
  MR_Word * STATE_VARIABLE_RevItemPromises_22,
  MR_Word STATE_VARIABLE_RevItemTypeclasses_0_23,
  MR_Word * STATE_VARIABLE_RevItemTypeclasses_24,
  MR_Word STATE_VARIABLE_RevItemInstances_0_25,
  MR_Word * STATE_VARIABLE_RevItemInstances_26,
  MR_Word STATE_VARIABLE_RevItemInitialises_0_27,
  MR_Word * STATE_VARIABLE_RevItemInitialises_28,
  MR_Word STATE_VARIABLE_RevItemFinalises_0_29,
  MR_Word * STATE_VARIABLE_RevItemFinalises_30,
  MR_Word STATE_VARIABLE_RevItemMutables_0_31,
  MR_Word * STATE_VARIABLE_RevItemMutables_32,
  MR_Word STATE_VARIABLE_RevItemTypeRepns_0_33,
  MR_Word * STATE_VARIABLE_RevItemTypeRepns_34,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_35,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_36,
  MR_Word STATE_VARIABLE_RevItemForeignExportEnums_0_37,
  MR_Word * STATE_VARIABLE_RevItemForeignExportEnums_38,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_39,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_40,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_41,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_42,
  MR_Word STATE_VARIABLE_RevItemClauses_0_43,
  MR_Word * STATE_VARIABLE_RevItemClauses_44)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevItemClauses_44 = STATE_VARIABLE_RevItemClauses_0_43;
      *STATE_VARIABLE_RevItemPragmas3_42 = STATE_VARIABLE_RevItemPragmas3_0_41;
      *STATE_VARIABLE_RevItemPragmas2_40 = STATE_VARIABLE_RevItemPragmas2_0_39;
      *STATE_VARIABLE_RevItemForeignExportEnums_38 = STATE_VARIABLE_RevItemForeignExportEnums_0_37;
      *STATE_VARIABLE_RevItemForeignEnums_36 = STATE_VARIABLE_RevItemForeignEnums_0_35;
      *STATE_VARIABLE_RevItemTypeRepns_34 = STATE_VARIABLE_RevItemTypeRepns_0_33;
      *STATE_VARIABLE_RevItemMutables_32 = STATE_VARIABLE_RevItemMutables_0_31;
      *STATE_VARIABLE_RevItemFinalises_30 = STATE_VARIABLE_RevItemFinalises_0_29;
      *STATE_VARIABLE_RevItemInitialises_28 = STATE_VARIABLE_RevItemInitialises_0_27;
      *STATE_VARIABLE_RevItemInstances_26 = STATE_VARIABLE_RevItemInstances_0_25;
      *STATE_VARIABLE_RevItemTypeclasses_24 = STATE_VARIABLE_RevItemTypeclasses_0_23;
      *STATE_VARIABLE_RevItemPromises_22 = STATE_VARIABLE_RevItemPromises_0_21;
      *STATE_VARIABLE_RevItemModeDecls_20 = STATE_VARIABLE_RevItemModeDecls_0_19;
      *STATE_VARIABLE_RevItemPredDecls_18 = STATE_VARIABLE_RevItemPredDecls_0_17;
      *STATE_VARIABLE_RevItemModeDefns_16 = STATE_VARIABLE_RevItemModeDefns_0_15;
      *STATE_VARIABLE_RevItemInstDefns_14 = STATE_VARIABLE_RevItemInstDefns_0_13;
      *STATE_VARIABLE_RevItemTypeDefnsForeign_12 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_11;
      *STATE_VARIABLE_RevItemTypeDefnsMercury_10 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_9;
      *STATE_VARIABLE_RevItemTypeDefnsAbstract_8 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7;
      *STATE_VARIABLE_ItemFIMsCord_6 = STATE_VARIABLE_ItemFIMsCord_0_5;
      *STATE_VARIABLE_RevItemAvailLists_4 = STATE_VARIABLE_RevItemAvailLists_0_3;
    }
    else
    {
      MR_Word ItemBlock_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Avails_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_109, (MR_Integer) 3))));
      MR_Word FIMs_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_109, (MR_Integer) 4))));
      MR_Word Items_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_109, (MR_Integer) 5))));
      MR_Word SectionInfo_139;
      MR_Word ItemMercuryStatus_140;
      MR_Word AvailSectionItem_142;
      MR_Word STATE_VARIABLE_ItemFIMsCord_185_185;
      MR_Word Var_186;
      MR_Word STATE_VARIABLE_RevItemAvailLists_187_187;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_188_188;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_189_189;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_190_190;
      MR_Word STATE_VARIABLE_RevItemInstDefns_191_191;
      MR_Word STATE_VARIABLE_RevItemModeDefns_192_192;
      MR_Word STATE_VARIABLE_RevItemPredDecls_193_193;
      MR_Word STATE_VARIABLE_RevItemModeDecls_194_194;
      MR_Word STATE_VARIABLE_RevItemPromises_195_195;
      MR_Word STATE_VARIABLE_RevItemTypeclasses_196_196;
      MR_Word STATE_VARIABLE_RevItemInstances_197_197;
      MR_Word STATE_VARIABLE_RevItemInitialises_198_198;
      MR_Word STATE_VARIABLE_RevItemFinalises_199_199;
      MR_Word STATE_VARIABLE_RevItemMutables_200_200;
      MR_Word STATE_VARIABLE_RevItemTypeRepns_201_201;
      MR_Word STATE_VARIABLE_RevItemForeignEnums_202_202;
      MR_Word STATE_VARIABLE_RevItemForeignExportEnums_203_203;
      MR_Word STATE_VARIABLE_RevItemPragmas2_204_204;
      MR_Word STATE_VARIABLE_RevItemPragmas3_205_205;
      MR_Word STATE_VARIABLE_RevItemClauses_206_206;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ItemFIMsCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_9;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_11;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstDefns_0_13;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDefns_0_15;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPredDecls_0_17;
      MR_Word next_value_of_STATE_VARIABLE_RevItemModeDecls_0_19;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPromises_0_21;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_23;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInstances_0_25;
      MR_Word next_value_of_STATE_VARIABLE_RevItemInitialises_0_27;
      MR_Word next_value_of_STATE_VARIABLE_RevItemFinalises_0_29;
      MR_Word next_value_of_STATE_VARIABLE_RevItemMutables_0_31;
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_33;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_35;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_37;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas2_0_39;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas3_0_41;
      MR_Word next_value_of_STATE_VARIABLE_RevItemClauses_0_43;

      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(&SectionInfo_139);
      ItemMercuryStatus_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_139, (MR_Integer) 0))));
      {
        AvailSectionItem_142 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AvailSectionItem_142, 0) = ((MR_Box) (ItemMercuryStatus_140));
        MR_hl_field(MR_mktag(0), AvailSectionItem_142, 1) = ((MR_Box) (Avails_136));
      }
      Var_186 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMs_137);
      STATE_VARIABLE_ItemFIMsCord_185_185 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), STATE_VARIABLE_ItemFIMsCord_0_5, Var_186);
      {
        STATE_VARIABLE_RevItemAvailLists_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_187_187, 0) = ((MR_Box) (AvailSectionItem_142));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemAvailLists_187_187, 1) = ((MR_Box) (STATE_VARIABLE_RevItemAvailLists_0_3));
      }
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_40_p_0(Items_138, SectionInfo_139, STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7, &STATE_VARIABLE_RevItemTypeDefnsAbstract_188_188, STATE_VARIABLE_RevItemTypeDefnsMercury_0_9, &STATE_VARIABLE_RevItemTypeDefnsMercury_189_189, STATE_VARIABLE_RevItemTypeDefnsForeign_0_11, &STATE_VARIABLE_RevItemTypeDefnsForeign_190_190, STATE_VARIABLE_RevItemInstDefns_0_13, &STATE_VARIABLE_RevItemInstDefns_191_191, STATE_VARIABLE_RevItemModeDefns_0_15, &STATE_VARIABLE_RevItemModeDefns_192_192, STATE_VARIABLE_RevItemPredDecls_0_17, &STATE_VARIABLE_RevItemPredDecls_193_193, STATE_VARIABLE_RevItemModeDecls_0_19, &STATE_VARIABLE_RevItemModeDecls_194_194, STATE_VARIABLE_RevItemPromises_0_21, &STATE_VARIABLE_RevItemPromises_195_195, STATE_VARIABLE_RevItemTypeclasses_0_23, &STATE_VARIABLE_RevItemTypeclasses_196_196, STATE_VARIABLE_RevItemInstances_0_25, &STATE_VARIABLE_RevItemInstances_197_197, STATE_VARIABLE_RevItemInitialises_0_27, &STATE_VARIABLE_RevItemInitialises_198_198, STATE_VARIABLE_RevItemFinalises_0_29, &STATE_VARIABLE_RevItemFinalises_199_199, STATE_VARIABLE_RevItemMutables_0_31, &STATE_VARIABLE_RevItemMutables_200_200, STATE_VARIABLE_RevItemTypeRepns_0_33, &STATE_VARIABLE_RevItemTypeRepns_201_201, STATE_VARIABLE_RevItemForeignEnums_0_35, &STATE_VARIABLE_RevItemForeignEnums_202_202, STATE_VARIABLE_RevItemForeignExportEnums_0_37, &STATE_VARIABLE_RevItemForeignExportEnums_203_203, STATE_VARIABLE_RevItemPragmas2_0_39, &STATE_VARIABLE_RevItemPragmas2_204_204, STATE_VARIABLE_RevItemPragmas3_0_41, &STATE_VARIABLE_RevItemPragmas3_205_205, STATE_VARIABLE_RevItemClauses_0_43, &STATE_VARIABLE_RevItemClauses_206_206);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_110;
      next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3 = STATE_VARIABLE_RevItemAvailLists_187_187;
      next_value_of_STATE_VARIABLE_ItemFIMsCord_0_5 = STATE_VARIABLE_ItemFIMsCord_185_185;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7 = STATE_VARIABLE_RevItemTypeDefnsAbstract_188_188;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_9 = STATE_VARIABLE_RevItemTypeDefnsMercury_189_189;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_11 = STATE_VARIABLE_RevItemTypeDefnsForeign_190_190;
      next_value_of_STATE_VARIABLE_RevItemInstDefns_0_13 = STATE_VARIABLE_RevItemInstDefns_191_191;
      next_value_of_STATE_VARIABLE_RevItemModeDefns_0_15 = STATE_VARIABLE_RevItemModeDefns_192_192;
      next_value_of_STATE_VARIABLE_RevItemPredDecls_0_17 = STATE_VARIABLE_RevItemPredDecls_193_193;
      next_value_of_STATE_VARIABLE_RevItemModeDecls_0_19 = STATE_VARIABLE_RevItemModeDecls_194_194;
      next_value_of_STATE_VARIABLE_RevItemPromises_0_21 = STATE_VARIABLE_RevItemPromises_195_195;
      next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_23 = STATE_VARIABLE_RevItemTypeclasses_196_196;
      next_value_of_STATE_VARIABLE_RevItemInstances_0_25 = STATE_VARIABLE_RevItemInstances_197_197;
      next_value_of_STATE_VARIABLE_RevItemInitialises_0_27 = STATE_VARIABLE_RevItemInitialises_198_198;
      next_value_of_STATE_VARIABLE_RevItemFinalises_0_29 = STATE_VARIABLE_RevItemFinalises_199_199;
      next_value_of_STATE_VARIABLE_RevItemMutables_0_31 = STATE_VARIABLE_RevItemMutables_200_200;
      next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_33 = STATE_VARIABLE_RevItemTypeRepns_201_201;
      next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_35 = STATE_VARIABLE_RevItemForeignEnums_202_202;
      next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_37 = STATE_VARIABLE_RevItemForeignExportEnums_203_203;
      next_value_of_STATE_VARIABLE_RevItemPragmas2_0_39 = STATE_VARIABLE_RevItemPragmas2_204_204;
      next_value_of_STATE_VARIABLE_RevItemPragmas3_0_41 = STATE_VARIABLE_RevItemPragmas3_205_205;
      next_value_of_STATE_VARIABLE_RevItemClauses_0_43 = STATE_VARIABLE_RevItemClauses_206_206;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevItemAvailLists_0_3 = next_value_of_STATE_VARIABLE_RevItemAvailLists_0_3;
      STATE_VARIABLE_ItemFIMsCord_0_5 = next_value_of_STATE_VARIABLE_ItemFIMsCord_0_5;
      STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_7;
      STATE_VARIABLE_RevItemTypeDefnsMercury_0_9 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_9;
      STATE_VARIABLE_RevItemTypeDefnsForeign_0_11 = next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_11;
      STATE_VARIABLE_RevItemInstDefns_0_13 = next_value_of_STATE_VARIABLE_RevItemInstDefns_0_13;
      STATE_VARIABLE_RevItemModeDefns_0_15 = next_value_of_STATE_VARIABLE_RevItemModeDefns_0_15;
      STATE_VARIABLE_RevItemPredDecls_0_17 = next_value_of_STATE_VARIABLE_RevItemPredDecls_0_17;
      STATE_VARIABLE_RevItemModeDecls_0_19 = next_value_of_STATE_VARIABLE_RevItemModeDecls_0_19;
      STATE_VARIABLE_RevItemPromises_0_21 = next_value_of_STATE_VARIABLE_RevItemPromises_0_21;
      STATE_VARIABLE_RevItemTypeclasses_0_23 = next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_23;
      STATE_VARIABLE_RevItemInstances_0_25 = next_value_of_STATE_VARIABLE_RevItemInstances_0_25;
      STATE_VARIABLE_RevItemInitialises_0_27 = next_value_of_STATE_VARIABLE_RevItemInitialises_0_27;
      STATE_VARIABLE_RevItemFinalises_0_29 = next_value_of_STATE_VARIABLE_RevItemFinalises_0_29;
      STATE_VARIABLE_RevItemMutables_0_31 = next_value_of_STATE_VARIABLE_RevItemMutables_0_31;
      STATE_VARIABLE_RevItemTypeRepns_0_33 = next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_33;
      STATE_VARIABLE_RevItemForeignEnums_0_35 = next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_35;
      STATE_VARIABLE_RevItemForeignExportEnums_0_37 = next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_37;
      STATE_VARIABLE_RevItemPragmas2_0_39 = next_value_of_STATE_VARIABLE_RevItemPragmas2_0_39;
      STATE_VARIABLE_RevItemPragmas3_0_41 = next_value_of_STATE_VARIABLE_RevItemPragmas3_0_41;
      STATE_VARIABLE_RevItemClauses_0_43 = next_value_of_STATE_VARIABLE_RevItemClauses_0_43;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_95_109_111_100_117_108_101_95_115_101_99_116_105_111_110_95_115_116_97_116_117_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word * SectionInfo_4)
{
  *SectionInfo_4 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[17]);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_40_p_0(
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
  MR_Word STATE_VARIABLE_RevItemTypeRepns_0_29,
  MR_Word * STATE_VARIABLE_RevItemTypeRepns_30,
  MR_Word STATE_VARIABLE_RevItemForeignEnums_0_31,
  MR_Word * STATE_VARIABLE_RevItemForeignEnums_32,
  MR_Word STATE_VARIABLE_RevItemForeignExportEnums_0_33,
  MR_Word * STATE_VARIABLE_RevItemForeignExportEnums_34,
  MR_Word STATE_VARIABLE_RevItemPragmas2_0_35,
  MR_Word * STATE_VARIABLE_RevItemPragmas2_36,
  MR_Word STATE_VARIABLE_RevItemPragmas3_0_37,
  MR_Word * STATE_VARIABLE_RevItemPragmas3_38,
  MR_Word STATE_VARIABLE_RevItemClauses_0_39,
  MR_Word * STATE_VARIABLE_RevItemClauses_40)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevItemClauses_40 = STATE_VARIABLE_RevItemClauses_0_39;
      *STATE_VARIABLE_RevItemPragmas3_38 = STATE_VARIABLE_RevItemPragmas3_0_37;
      *STATE_VARIABLE_RevItemPragmas2_36 = STATE_VARIABLE_RevItemPragmas2_0_35;
      *STATE_VARIABLE_RevItemForeignExportEnums_34 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
      *STATE_VARIABLE_RevItemForeignEnums_32 = STATE_VARIABLE_RevItemForeignEnums_0_31;
      *STATE_VARIABLE_RevItemTypeRepns_30 = STATE_VARIABLE_RevItemTypeRepns_0_29;
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
      MR_Word Item_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevItemPragmas3_239_239;
      MR_Word STATE_VARIABLE_RevItemPragmas2_240_240;
      MR_Word STATE_VARIABLE_RevItemForeignExportEnums_241_241;
      MR_Word STATE_VARIABLE_RevItemForeignEnums_242_242;
      MR_Word STATE_VARIABLE_RevItemTypeRepns_243_243;
      MR_Word STATE_VARIABLE_RevItemMutables_244_244;
      MR_Word STATE_VARIABLE_RevItemFinalises_245_245;
      MR_Word STATE_VARIABLE_RevItemInitialises_246_246;
      MR_Word STATE_VARIABLE_RevItemInstances_247_247;
      MR_Word STATE_VARIABLE_RevItemTypeclasses_248_248;
      MR_Word STATE_VARIABLE_RevItemPromises_249_249;
      MR_Word STATE_VARIABLE_RevItemModeDecls_250_250;
      MR_Word STATE_VARIABLE_RevItemPredDecls_251_251;
      MR_Word STATE_VARIABLE_RevItemModeDefns_252_252;
      MR_Word STATE_VARIABLE_RevItemInstDefns_253_253;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsForeign_254_254;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsMercury_255_255;
      MR_Word STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256;
      MR_Word STATE_VARIABLE_RevItemClauses_257_257;
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
      MR_Word next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_29;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_31;
      MR_Word next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_33;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35;
      MR_Word next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37;
      MR_Word next_value_of_STATE_VARIABLE_RevItemClauses_0_39;

      switch (MR_tag((MR_Word) Item_99)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClauseInfo_121 = (MR_Word) ((MR_Word) (Item_99));
            MR_Word ItemMercuryStatus_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
            MR_Word ClauseStatusItem_124;

            {
              ClauseStatusItem_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ClauseStatusItem_124, 0) = ((MR_Box) (ItemMercuryStatus_122));
              MR_hl_field(MR_mktag(0), ClauseStatusItem_124, 1) = ((MR_Box) (ItemClauseInfo_121));
            }
            {
              STATE_VARIABLE_RevItemClauses_257_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemClauses_257_257, 0) = ((MR_Box) (ClauseStatusItem_124));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemClauses_257_257, 1) = ((MR_Box) (STATE_VARIABLE_RevItemClauses_0_39));
            }
            STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
            STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
            STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
            STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
            STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
            STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
            STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
            STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
            STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
            STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
            STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
            STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
            STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
            STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
            STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
            STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
            STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
            STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemInstDefnInfo_138 = (MR_Word) (MR_body((MR_Word) (Item_99), (MR_Integer) 1));
            MR_Word InstDefnStatusItem_139;
            MR_Word ItemMercuryStatus_278 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            {
              InstDefnStatusItem_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InstDefnStatusItem_139, 0) = ((MR_Box) (ItemMercuryStatus_278));
              MR_hl_field(MR_mktag(0), InstDefnStatusItem_139, 1) = ((MR_Box) (ItemInstDefnInfo_138));
            }
            {
              STATE_VARIABLE_RevItemInstDefns_253_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemInstDefns_253_253, 0) = ((MR_Box) (InstDefnStatusItem_139));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemInstDefns_253_253, 1) = ((MR_Box) (STATE_VARIABLE_RevItemInstDefns_0_9));
            }
            STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
            STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
            STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
            STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
            STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
            STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
            STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
            STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
            STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
            STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
            STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
            STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
            STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
            STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
            STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
            STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
            STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
            STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDefnInfo_140 = (MR_Word) (MR_body((MR_Word) (Item_99), (MR_Integer) 2));
            MR_Word ModeDefnStatusItem_141;
            MR_Word ItemMercuryStatus_281 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            {
              ModeDefnStatusItem_141 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ModeDefnStatusItem_141, 0) = ((MR_Box) (ItemMercuryStatus_281));
              MR_hl_field(MR_mktag(0), ModeDefnStatusItem_141, 1) = ((MR_Box) (ItemModeDefnInfo_140));
            }
            {
              STATE_VARIABLE_RevItemModeDefns_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemModeDefns_252_252, 0) = ((MR_Box) (ModeDefnStatusItem_141));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemModeDefns_252_252, 1) = ((MR_Box) (STATE_VARIABLE_RevItemModeDefns_0_11));
            }
            STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
            STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
            STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
            STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
            STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
            STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
            STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
            STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
            STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
            STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
            STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
            STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
            STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
            STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
            STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
            STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
            STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
            STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_99, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemPredDeclInfo_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_99, (MR_Integer) 1))));
                MR_Word PredDeclSectionItem_143;

                {
                  PredDeclSectionItem_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PredDeclSectionItem_143, 0) = ((MR_Box) (HeadVar__2_2));
                  MR_hl_field(MR_mktag(0), PredDeclSectionItem_143, 1) = ((MR_Box) (ItemPredDeclInfo_142));
                }
                {
                  STATE_VARIABLE_RevItemPredDecls_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPredDecls_251_251, 0) = ((MR_Box) (PredDeclSectionItem_143));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPredDecls_251_251, 1) = ((MR_Box) (STATE_VARIABLE_RevItemPredDecls_0_13));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
                STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
                STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
                STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
                STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ItemModeDeclInfo_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_99, (MR_Integer) 1))));
                MR_Word ModeDeclStatusItem_145;
                MR_Word ItemMercuryStatus_284 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

                {
                  ModeDeclStatusItem_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ModeDeclStatusItem_145, 0) = ((MR_Box) (ItemMercuryStatus_284));
                  MR_hl_field(MR_mktag(0), ModeDeclStatusItem_145, 1) = ((MR_Box) (ItemModeDeclInfo_144));
                }
                {
                  STATE_VARIABLE_RevItemModeDecls_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemModeDecls_250_250, 0) = ((MR_Box) (ModeDeclStatusItem_145));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemModeDecls_250_250, 1) = ((MR_Box) (STATE_VARIABLE_RevItemModeDecls_0_15));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
                STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
                STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
                STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
                STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnumInfo_159 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_99, (MR_Integer) 1))));
                MR_Tuple ForeignEnumStatusItem_160;
                MR_Word ItemMercuryStatus_299 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

                {
                  ForeignEnumStatusItem_160 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ForeignEnumStatusItem_160, 0) = ((MR_Box) (ItemMercuryStatus_299));
                  MR_hl_field(MR_mktag(0), ForeignEnumStatusItem_160, 1) = ((MR_Box) (ItemForeignEnumInfo_159));
                }
                {
                  STATE_VARIABLE_RevItemForeignEnums_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemForeignEnums_242_242, 0) = ((MR_Box) (ForeignEnumStatusItem_160));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemForeignEnums_242_242, 1) = ((MR_Box) (STATE_VARIABLE_RevItemForeignEnums_0_31));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
                STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
                STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
                STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
                STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemForeignExportEnumInfo_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_99, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevItemForeignExportEnums_241_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemForeignExportEnums_241_241, 0) = ((MR_Box) (ItemForeignExportEnumInfo_161));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemForeignExportEnums_241_241, 1) = ((MR_Box) (STATE_VARIABLE_RevItemForeignExportEnums_0_33));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
                STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
                STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
                STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromiseInfo_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_99, (MR_Integer) 1))));
                MR_Word PromiseStatusItem_147;
                MR_Word ItemMercuryStatus_287 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

                {
                  PromiseStatusItem_147 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PromiseStatusItem_147, 0) = ((MR_Box) (ItemMercuryStatus_287));
                  MR_hl_field(MR_mktag(0), PromiseStatusItem_147, 1) = ((MR_Box) (ItemPromiseInfo_146));
                }
                {
                  STATE_VARIABLE_RevItemPromises_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPromises_249_249, 0) = ((MR_Box) (PromiseStatusItem_147));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPromises_249_249, 1) = ((MR_Box) (STATE_VARIABLE_RevItemPromises_0_17));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
                STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
                STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
                STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
                STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ItemTypeclassInfo_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_99, (MR_Integer) 1))));
                MR_Word TypeclassSectionItem_149;

                {
                  TypeclassSectionItem_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeclassSectionItem_149, 0) = ((MR_Box) (HeadVar__2_2));
                  MR_hl_field(MR_mktag(0), TypeclassSectionItem_149, 1) = ((MR_Box) (ItemTypeclassInfo_148));
                }
                {
                  STATE_VARIABLE_RevItemTypeclasses_248_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeclasses_248_248, 0) = ((MR_Box) (TypeclassSectionItem_149));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeclasses_248_248, 1) = ((MR_Box) (STATE_VARIABLE_RevItemTypeclasses_0_19));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
                STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
                STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
                STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
                STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstanceInfo_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_99, (MR_Integer) 1))));
                MR_Word InstanceStatusItem_151;
                MR_Word ItemMercuryStatus_290 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

                {
                  InstanceStatusItem_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InstanceStatusItem_151, 0) = ((MR_Box) (ItemMercuryStatus_290));
                  MR_hl_field(MR_mktag(0), InstanceStatusItem_151, 1) = ((MR_Box) (ItemInstanceInfo_150));
                }
                {
                  STATE_VARIABLE_RevItemInstances_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemInstances_247_247, 0) = ((MR_Box) (InstanceStatusItem_151));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemInstances_247_247, 1) = ((MR_Box) (STATE_VARIABLE_RevItemInstances_0_21));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
                STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
                STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
                STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
                STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ItemInitialiseInfo_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_99, (MR_Integer) 1))));
                MR_Word InitialiseStatusItem_153;
                MR_Word ItemMercuryStatus_293 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

                {
                  InitialiseStatusItem_153 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InitialiseStatusItem_153, 0) = ((MR_Box) (ItemMercuryStatus_293));
                  MR_hl_field(MR_mktag(0), InitialiseStatusItem_153, 1) = ((MR_Box) (ItemInitialiseInfo_152));
                }
                {
                  STATE_VARIABLE_RevItemInitialises_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemInitialises_246_246, 0) = ((MR_Box) (InitialiseStatusItem_153));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemInitialises_246_246, 1) = ((MR_Box) (STATE_VARIABLE_RevItemInitialises_0_23));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
                STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
                STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
                STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
                STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word ItemFinaliseInfo_154 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_99, (MR_Integer) 1))));
                MR_Word FinaliseStatusItem_155;
                MR_Word ItemMercuryStatus_296 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

                {
                  FinaliseStatusItem_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), FinaliseStatusItem_155, 0) = ((MR_Box) (ItemMercuryStatus_296));
                  MR_hl_field(MR_mktag(0), FinaliseStatusItem_155, 1) = ((MR_Box) (ItemFinaliseInfo_154));
                }
                {
                  STATE_VARIABLE_RevItemFinalises_245_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemFinalises_245_245, 0) = ((MR_Box) (FinaliseStatusItem_155));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemFinalises_245_245, 1) = ((MR_Box) (STATE_VARIABLE_RevItemFinalises_0_25));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
                STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
                STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
                STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
                STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemMutableInfo_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_99, (MR_Integer) 1))));
                MR_Word MutableSectionItem_157;

                {
                  MutableSectionItem_157 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MutableSectionItem_157, 0) = ((MR_Box) (HeadVar__2_2));
                  MR_hl_field(MR_mktag(0), MutableSectionItem_157, 1) = ((MR_Box) (ItemMutableInfo_156));
                }
                {
                  STATE_VARIABLE_RevItemMutables_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemMutables_244_244, 0) = ((MR_Box) (MutableSectionItem_157));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemMutables_244_244, 1) = ((MR_Box) (STATE_VARIABLE_RevItemMutables_0_27));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
                STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
                STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
                STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
                STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemTypeRepnInfo_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_99, (MR_Integer) 1))));

                {
                  STATE_VARIABLE_RevItemTypeRepns_243_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeRepns_243_243, 0) = ((MR_Box) (ItemTypeRepnInfo_158));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeRepns_243_243, 1) = ((MR_Box) (STATE_VARIABLE_RevItemTypeRepns_0_29));
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
                STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
                STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
                STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ItemTypeDefnInfo_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_99, (MR_Integer) 1))));
                MR_Word TypeDefnSectionItem_126;
                MR_Word TypeDefn_129;

                {
                  TypeDefnSectionItem_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeDefnSectionItem_126, 0) = ((MR_Box) (HeadVar__2_2));
                  MR_hl_field(MR_mktag(0), TypeDefnSectionItem_126, 1) = ((MR_Box) (ItemTypeDefnInfo_125));
                }
                TypeDefn_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_125, (MR_Integer) 2))));
                switch (MR_tag((MR_Word) TypeDefn_129)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      {
                        STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsMercury_255_255, 0) = ((MR_Box) (TypeDefnSectionItem_126));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsMercury_255_255, 1) = ((MR_Box) (STATE_VARIABLE_RevItemTypeDefnsMercury_0_5));
                      }
                      STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                      STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsMercury_255_255, 0) = ((MR_Box) (TypeDefnSectionItem_126));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsMercury_255_255, 1) = ((MR_Box) (STATE_VARIABLE_RevItemTypeDefnsMercury_0_5));
                      }
                      STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                      STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_129, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256, 0) = ((MR_Box) (TypeDefnSectionItem_126));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256, 1) = ((MR_Box) (STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3));
                          }
                          STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                          STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsForeign_254_254, 0) = ((MR_Box) (TypeDefnSectionItem_126));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemTypeDefnsForeign_254_254, 1) = ((MR_Box) (STATE_VARIABLE_RevItemTypeDefnsForeign_0_7));
                          }
                          STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                          STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
                STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
                STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
                STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
                STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemPragmaInfo0_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_99, (MR_Integer) 1))));
                MR_Word PragmaType_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo0_162, (MR_Integer) 0))));
                MR_Word ItemMercuryStatus_303 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

                switch (MR_tag((MR_Word) PragmaType_163)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word Pragma2StatusItem_189;

                      {
                        Pragma2StatusItem_189 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Pragma2StatusItem_189, 0) = ((MR_Box) (ItemMercuryStatus_303));
                        MR_hl_field(MR_mktag(0), Pragma2StatusItem_189, 1) = ((MR_Box) (ItemPragmaInfo0_162));
                      }
                      {
                        STATE_VARIABLE_RevItemPragmas2_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas2_240_240, 0) = ((MR_Box) (Pragma2StatusItem_189));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas2_240_240, 1) = ((MR_Box) (STATE_VARIABLE_RevItemPragmas2_0_35));
                      }
                      STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Pragma3StatusItem_200;

                      {
                        Pragma3StatusItem_200 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Pragma3StatusItem_200, 0) = ((MR_Box) (ItemMercuryStatus_303));
                        MR_hl_field(MR_mktag(0), Pragma3StatusItem_200, 1) = ((MR_Box) (ItemPragmaInfo0_162));
                      }
                      {
                        STATE_VARIABLE_RevItemPragmas3_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas3_239_239, 0) = ((MR_Box) (Pragma3StatusItem_200));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas3_239_239, 1) = ((MR_Box) (STATE_VARIABLE_RevItemPragmas3_0_37));
                      }
                      STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), PragmaType_163, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 2:
                      case (MR_Integer) 12:
                      case (MR_Integer) 13:
                      case (MR_Integer) 14:
                      case (MR_Integer) 18:
                      case (MR_Integer) 19:
                      case (MR_Integer) 24:
                      case (MR_Integer) 25:
                        {
                          MR_Word Pragma3StatusItem_200;

                          {
                            Pragma3StatusItem_200 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Pragma3StatusItem_200, 0) = ((MR_Box) (ItemMercuryStatus_303));
                            MR_hl_field(MR_mktag(0), Pragma3StatusItem_200, 1) = ((MR_Box) (ItemPragmaInfo0_162));
                          }
                          {
                            STATE_VARIABLE_RevItemPragmas3_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas3_239_239, 0) = ((MR_Box) (Pragma3StatusItem_200));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas3_239_239, 1) = ((MR_Box) (STATE_VARIABLE_RevItemPragmas3_0_37));
                          }
                          STATE_VARIABLE_RevItemPragmas2_240_240 = STATE_VARIABLE_RevItemPragmas2_0_35;
                        }
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                      case (MR_Integer) 8:
                      case (MR_Integer) 9:
                      case (MR_Integer) 10:
                      case (MR_Integer) 11:
                      case (MR_Integer) 15:
                      case (MR_Integer) 16:
                      case (MR_Integer) 17:
                      case (MR_Integer) 20:
                      case (MR_Integer) 21:
                      case (MR_Integer) 22:
                      case (MR_Integer) 23:
                      case (MR_Integer) 26:
                      case (MR_Integer) 27:
                      case (MR_Integer) 28:
                        {
                          MR_Word Pragma2StatusItem_189;

                          {
                            Pragma2StatusItem_189 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Pragma2StatusItem_189, 0) = ((MR_Box) (ItemMercuryStatus_303));
                            MR_hl_field(MR_mktag(0), Pragma2StatusItem_189, 1) = ((MR_Box) (ItemPragmaInfo0_162));
                          }
                          {
                            STATE_VARIABLE_RevItemPragmas2_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas2_240_240, 0) = ((MR_Box) (Pragma2StatusItem_189));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItemPragmas2_240_240, 1) = ((MR_Box) (STATE_VARIABLE_RevItemPragmas2_0_35));
                          }
                          STATE_VARIABLE_RevItemPragmas3_239_239 = STATE_VARIABLE_RevItemPragmas3_0_37;
                        }
                        break;
                    }
                    break;
                }
                STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256 = STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3;
                STATE_VARIABLE_RevItemTypeDefnsMercury_255_255 = STATE_VARIABLE_RevItemTypeDefnsMercury_0_5;
                STATE_VARIABLE_RevItemTypeDefnsForeign_254_254 = STATE_VARIABLE_RevItemTypeDefnsForeign_0_7;
                STATE_VARIABLE_RevItemInstDefns_253_253 = STATE_VARIABLE_RevItemInstDefns_0_9;
                STATE_VARIABLE_RevItemModeDefns_252_252 = STATE_VARIABLE_RevItemModeDefns_0_11;
                STATE_VARIABLE_RevItemPredDecls_251_251 = STATE_VARIABLE_RevItemPredDecls_0_13;
                STATE_VARIABLE_RevItemModeDecls_250_250 = STATE_VARIABLE_RevItemModeDecls_0_15;
                STATE_VARIABLE_RevItemPromises_249_249 = STATE_VARIABLE_RevItemPromises_0_17;
                STATE_VARIABLE_RevItemTypeclasses_248_248 = STATE_VARIABLE_RevItemTypeclasses_0_19;
                STATE_VARIABLE_RevItemInstances_247_247 = STATE_VARIABLE_RevItemInstances_0_21;
                STATE_VARIABLE_RevItemInitialises_246_246 = STATE_VARIABLE_RevItemInitialises_0_23;
                STATE_VARIABLE_RevItemFinalises_245_245 = STATE_VARIABLE_RevItemFinalises_0_25;
                STATE_VARIABLE_RevItemMutables_244_244 = STATE_VARIABLE_RevItemMutables_0_27;
                STATE_VARIABLE_RevItemTypeRepns_243_243 = STATE_VARIABLE_RevItemTypeRepns_0_29;
                STATE_VARIABLE_RevItemForeignEnums_242_242 = STATE_VARIABLE_RevItemForeignEnums_0_31;
                STATE_VARIABLE_RevItemForeignExportEnums_241_241 = STATE_VARIABLE_RevItemForeignExportEnums_0_33;
                STATE_VARIABLE_RevItemClauses_257_257 = STATE_VARIABLE_RevItemClauses_0_39;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_100;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsAbstract_0_3 = STATE_VARIABLE_RevItemTypeDefnsAbstract_256_256;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsMercury_0_5 = STATE_VARIABLE_RevItemTypeDefnsMercury_255_255;
      next_value_of_STATE_VARIABLE_RevItemTypeDefnsForeign_0_7 = STATE_VARIABLE_RevItemTypeDefnsForeign_254_254;
      next_value_of_STATE_VARIABLE_RevItemInstDefns_0_9 = STATE_VARIABLE_RevItemInstDefns_253_253;
      next_value_of_STATE_VARIABLE_RevItemModeDefns_0_11 = STATE_VARIABLE_RevItemModeDefns_252_252;
      next_value_of_STATE_VARIABLE_RevItemPredDecls_0_13 = STATE_VARIABLE_RevItemPredDecls_251_251;
      next_value_of_STATE_VARIABLE_RevItemModeDecls_0_15 = STATE_VARIABLE_RevItemModeDecls_250_250;
      next_value_of_STATE_VARIABLE_RevItemPromises_0_17 = STATE_VARIABLE_RevItemPromises_249_249;
      next_value_of_STATE_VARIABLE_RevItemTypeclasses_0_19 = STATE_VARIABLE_RevItemTypeclasses_248_248;
      next_value_of_STATE_VARIABLE_RevItemInstances_0_21 = STATE_VARIABLE_RevItemInstances_247_247;
      next_value_of_STATE_VARIABLE_RevItemInitialises_0_23 = STATE_VARIABLE_RevItemInitialises_246_246;
      next_value_of_STATE_VARIABLE_RevItemFinalises_0_25 = STATE_VARIABLE_RevItemFinalises_245_245;
      next_value_of_STATE_VARIABLE_RevItemMutables_0_27 = STATE_VARIABLE_RevItemMutables_244_244;
      next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_29 = STATE_VARIABLE_RevItemTypeRepns_243_243;
      next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_31 = STATE_VARIABLE_RevItemForeignEnums_242_242;
      next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_33 = STATE_VARIABLE_RevItemForeignExportEnums_241_241;
      next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35 = STATE_VARIABLE_RevItemPragmas2_240_240;
      next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37 = STATE_VARIABLE_RevItemPragmas3_239_239;
      next_value_of_STATE_VARIABLE_RevItemClauses_0_39 = STATE_VARIABLE_RevItemClauses_257_257;
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
      STATE_VARIABLE_RevItemTypeRepns_0_29 = next_value_of_STATE_VARIABLE_RevItemTypeRepns_0_29;
      STATE_VARIABLE_RevItemForeignEnums_0_31 = next_value_of_STATE_VARIABLE_RevItemForeignEnums_0_31;
      STATE_VARIABLE_RevItemForeignExportEnums_0_33 = next_value_of_STATE_VARIABLE_RevItemForeignExportEnums_0_33;
      STATE_VARIABLE_RevItemPragmas2_0_35 = next_value_of_STATE_VARIABLE_RevItemPragmas2_0_35;
      STATE_VARIABLE_RevItemPragmas3_0_37 = next_value_of_STATE_VARIABLE_RevItemPragmas3_0_37;
      STATE_VARIABLE_RevItemClauses_0_39 = next_value_of_STATE_VARIABLE_RevItemClauses_0_39;
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

// :- end_module hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.
