/*
** Automatically generated from `rbmm.live_region_analysis.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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


/* :- module transform_hlds.rbmm.live_region_analysis. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__live_region_analysis__init
ENDINIT
*/

#include "transform_hlds.rbmm.live_region_analysis.mih"


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
#include "hlds.pred_table.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"
#include "transform_hlds.rbmm.condition_renaming.mih"
#include "transform_hlds.rbmm.execution_path.mih"
#include "transform_hlds.rbmm.interproc_region_lifetime.mih"
#include "transform_hlds.rbmm.live_variable_analysis.mih"
#include "transform_hlds.rbmm.points_to_analysis.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0_1(
  MR_Box transform_hlds__rbmm__live_region_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__live_region_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0(
  MR_Word transform_hlds__rbmm__live_region_analysis__Graph_8,
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_9,
  MR_Word transform_hlds__rbmm__live_region_analysis__ProcInfo_10,
  MR_Word transform_hlds__rbmm__live_region_analysis__ProgPoint_11,
  MR_Word transform_hlds__rbmm__live_region_analysis__LVs_12,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_ProcLRMap_0_15,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_ProcLRMap_16);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_p_0(
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_95,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_96,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_97,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_98,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_99,
  MR_Word transform_hlds__rbmm__live_region_analysis__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_4,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_6,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_8,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_10,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_12,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_14,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_16,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_18);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0(
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_23,
  MR_Word transform_hlds__rbmm__live_region_analysis__RptaInfoTable_24,
  MR_Word transform_hlds__rbmm__live_region_analysis__LVBeforeTable_25,
  MR_Word transform_hlds__rbmm__live_region_analysis__LVAfterTable_26,
  MR_Word transform_hlds__rbmm__live_region_analysis__VoidVarTable_27,
  MR_Word transform_hlds__rbmm__live_region_analysis__PredId_28,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_0_39,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_40,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_0_41,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_42,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_0_43,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_44,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_0_45,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_46,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_0_47,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_48,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_0_49,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_50,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_0_51,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_52,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_0_53,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_54);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_p_0(
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_95,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_96,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_97,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_98,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_99,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_100,
  MR_Word transform_hlds__rbmm__live_region_analysis__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_4,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_6,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_8,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_10,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_12,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_14,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_16,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_18);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_1(
  MR_Box transform_hlds__rbmm__live_region_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_3,
  MR_Box * transform_hlds__rbmm__live_region_analysis__wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0(
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_24,
  MR_Word transform_hlds__rbmm__live_region_analysis__RptaInfoTable_25,
  MR_Word transform_hlds__rbmm__live_region_analysis__LVBeforeTable_26,
  MR_Word transform_hlds__rbmm__live_region_analysis__LVAfterTable_27,
  MR_Word transform_hlds__rbmm__live_region_analysis__VoidVarTable_28,
  MR_Word transform_hlds__rbmm__live_region_analysis__PredId_29,
  MR_Integer transform_hlds__rbmm__live_region_analysis__ProcId_30,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_0_58,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_59,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_0_60,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_61,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_0_62,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_63,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_0_64,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_65,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_0_66,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_67,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_0_68,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_69,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_0_70,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_71,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_0_72,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_73);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0_1(
  MR_Box transform_hlds__rbmm__live_region_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__live_region_analysis__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0(
  MR_Word transform_hlds__rbmm__live_region_analysis__LVSet_6,
  MR_Word transform_hlds__rbmm__live_region_analysis__Graph_7,
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_8,
  MR_Word transform_hlds__rbmm__live_region_analysis__ProcInfo_9,
  MR_Word * transform_hlds__rbmm__live_region_analysis__LRSet_10);


static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_2[2][3];

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_3[1][9];

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_4[1][10];




static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_region_analysis_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__live_region_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0_1(
  MR_Box transform_hlds__rbmm__live_region_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__live_region_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__live_region_analysis__closure = transform_hlds__rbmm__live_region_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__live_region_analysis__conv0_HeadVar__6_6;

    transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__live_region_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__live_region_analysis__wrapper_arg_2), &transform_hlds__rbmm__live_region_analysis__conv0_HeadVar__6_6);
    *transform_hlds__rbmm__live_region_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0(
  MR_Word transform_hlds__rbmm__live_region_analysis__Graph_8,
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_9,
  MR_Word transform_hlds__rbmm__live_region_analysis__ProcInfo_10,
  MR_Word transform_hlds__rbmm__live_region_analysis__ProgPoint_11,
  MR_Word transform_hlds__rbmm__live_region_analysis__LVs_12,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_ProcLRMap_0_15,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_ProcLRMap_16)
{
  {
    MR_bool transform_hlds__rbmm__live_region_analysis__succeeded;
    MR_Word transform_hlds__rbmm__live_region_analysis__LRs_14;

    transform_hlds__rbmm__live_region_analysis__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[1], transform_hlds__rbmm__live_region_analysis__LVs_12);
    if (transform_hlds__rbmm__live_region_analysis__succeeded)
    {
      mercury__set__init_1_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, &transform_hlds__rbmm__live_region_analysis__LRs_14);
    }
    else
    {
      MR_Word transform_hlds__rbmm__live_region_analysis__LRSet0_25;
      MR_Word transform_hlds__rbmm__live_region_analysis__Var_26;
      MR_Box transform_hlds__rbmm__live_region_analysis__conv1_LRs_14;

      mercury__set__init_1_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, &transform_hlds__rbmm__live_region_analysis__LRSet0_25);
      {
        transform_hlds__rbmm__live_region_analysis__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_26, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_26, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_26, 3) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__Graph_8));
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_26, 4) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ModuleInfo_9));
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_26, 5) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProcInfo_10));
      }
      mercury__set__fold_4_p_0((MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[0], transform_hlds__rbmm__live_region_analysis__Var_26, transform_hlds__rbmm__live_region_analysis__LVs_12, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__LRSet0_25)), &transform_hlds__rbmm__live_region_analysis__conv1_LRs_14);
      transform_hlds__rbmm__live_region_analysis__LRs_14 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv1_LRs_14);
    }
    mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProgPoint_11)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__LRs_14)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_ProcLRMap_0_15, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_ProcLRMap_16);
  }
}

void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_p_0(
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_14,
  MR_Word transform_hlds__rbmm__live_region_analysis__RptaInfoTable_15,
  MR_Word transform_hlds__rbmm__live_region_analysis__LVBeforeTable_16,
  MR_Word transform_hlds__rbmm__live_region_analysis__LVAfterTable_17,
  MR_Word transform_hlds__rbmm__live_region_analysis__VoidVarTable_18,
  MR_Word * transform_hlds__rbmm__live_region_analysis__LRBeforeTable_19,
  MR_Word * transform_hlds__rbmm__live_region_analysis__LRAfterTable_20,
  MR_Word * transform_hlds__rbmm__live_region_analysis__VoidVarRegionTable_21,
  MR_Word * transform_hlds__rbmm__live_region_analysis__InputRTable_22,
  MR_Word * transform_hlds__rbmm__live_region_analysis__OutputRTable_23,
  MR_Word * transform_hlds__rbmm__live_region_analysis__BornRTable_24,
  MR_Word * transform_hlds__rbmm__live_region_analysis__DeadRTable_25,
  MR_Word * transform_hlds__rbmm__live_region_analysis__LocalRTable_26)
{
  {
    MR_Word transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37;
    MR_Word transform_hlds__rbmm__live_region_analysis__TypeInfo_38_38;
    MR_Word transform_hlds__rbmm__live_region_analysis__TypeInfo_39_39;
    MR_Word transform_hlds__rbmm__live_region_analysis__PredIds_27;
    MR_Word transform_hlds__rbmm__live_region_analysis__LRBeforeTable0_28;
    MR_Word transform_hlds__rbmm__live_region_analysis__LRAfterTable0_29;
    MR_Word transform_hlds__rbmm__live_region_analysis__VoidVarRegionTable0_30;
    MR_Word transform_hlds__rbmm__live_region_analysis__InputRTable0_31;
    MR_Word transform_hlds__rbmm__live_region_analysis__OutputRTable0_32;
    MR_Word transform_hlds__rbmm__live_region_analysis__BornRTable0_33;
    MR_Word transform_hlds__rbmm__live_region_analysis__DeadRTable0_34;
    MR_Word transform_hlds__rbmm__live_region_analysis__LocalRTable0_35;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__rbmm__live_region_analysis__ModuleInfo_14, &transform_hlds__rbmm__live_region_analysis__PredIds_27);
    transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    transform_hlds__rbmm__live_region_analysis__TypeInfo_38_38 = (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_2[0];
    mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_38_38, &transform_hlds__rbmm__live_region_analysis__LRBeforeTable0_28);
    mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_38_38, &transform_hlds__rbmm__live_region_analysis__LRAfterTable0_29);
    mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_38_38, &transform_hlds__rbmm__live_region_analysis__VoidVarRegionTable0_30);
    transform_hlds__rbmm__live_region_analysis__TypeInfo_39_39 = (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[0];
    mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_39_39, &transform_hlds__rbmm__live_region_analysis__InputRTable0_31);
    mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_39_39, &transform_hlds__rbmm__live_region_analysis__OutputRTable0_32);
    mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_39_39, &transform_hlds__rbmm__live_region_analysis__BornRTable0_33);
    mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_39_39, &transform_hlds__rbmm__live_region_analysis__DeadRTable0_34);
    mercury__map__init_1_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_37_37, transform_hlds__rbmm__live_region_analysis__TypeInfo_39_39, &transform_hlds__rbmm__live_region_analysis__LocalRTable0_35);
    transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_p_0(transform_hlds__rbmm__live_region_analysis__ModuleInfo_14, transform_hlds__rbmm__live_region_analysis__RptaInfoTable_15, transform_hlds__rbmm__live_region_analysis__LVBeforeTable_16, transform_hlds__rbmm__live_region_analysis__LVAfterTable_17, transform_hlds__rbmm__live_region_analysis__VoidVarTable_18, transform_hlds__rbmm__live_region_analysis__PredIds_27, transform_hlds__rbmm__live_region_analysis__LRBeforeTable0_28, transform_hlds__rbmm__live_region_analysis__LRBeforeTable_19, transform_hlds__rbmm__live_region_analysis__LRAfterTable0_29, transform_hlds__rbmm__live_region_analysis__LRAfterTable_20, transform_hlds__rbmm__live_region_analysis__VoidVarRegionTable0_30, transform_hlds__rbmm__live_region_analysis__VoidVarRegionTable_21, transform_hlds__rbmm__live_region_analysis__InputRTable0_31, transform_hlds__rbmm__live_region_analysis__InputRTable_22, transform_hlds__rbmm__live_region_analysis__OutputRTable0_32, transform_hlds__rbmm__live_region_analysis__OutputRTable_23, transform_hlds__rbmm__live_region_analysis__BornRTable0_33, transform_hlds__rbmm__live_region_analysis__BornRTable_24, transform_hlds__rbmm__live_region_analysis__DeadRTable0_34, transform_hlds__rbmm__live_region_analysis__DeadRTable_25, transform_hlds__rbmm__live_region_analysis__LocalRTable0_35, transform_hlds__rbmm__live_region_analysis__LocalRTable_26);
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_p_0(
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_95,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_96,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_97,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_98,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_99,
  MR_Word transform_hlds__rbmm__live_region_analysis__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_4,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_6,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_8,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_10,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_12,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_14,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_16,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__rbmm__live_region_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_18 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_16 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_14 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_12 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_10 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_8 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_6 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_4 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Word transform_hlds__rbmm__live_region_analysis__H_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_region_analysis__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__rbmm__live_region_analysis__T_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_region_analysis__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_70_70;
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_71_71;
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_72_72;
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_73_73;
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_74_74;
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_75_75;
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_76_76;
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_77_77;

      transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0(transform_hlds__rbmm__live_region_analysis__Var_95, transform_hlds__rbmm__live_region_analysis__Var_96, transform_hlds__rbmm__live_region_analysis__Var_97, transform_hlds__rbmm__live_region_analysis__Var_98, transform_hlds__rbmm__live_region_analysis__Var_99, transform_hlds__rbmm__live_region_analysis__H_45, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_70_70, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_71_71, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_72_72, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_73_73, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_74_74, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_75_75, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_76_76, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_77_77);
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_HeadVar__2_2 = transform_hlds__rbmm__live_region_analysis__T_46;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_A_0_3 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_70_70;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_B_0_5 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_71_71;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_C_0_7 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_72_72;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_D_0_9 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_73_73;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_E_0_11 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_74_74;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_F_0_13 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_75_75;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_G_0_15 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_76_76;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_H_0_17 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_77_77;

        transform_hlds__rbmm__live_region_analysis__HeadVar__2_2 = transform_hlds__rbmm__live_region_analysis__next_value_of_HeadVar__2_2;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_A_0_3;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_B_0_5;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_C_0_7;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_D_0_9;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_E_0_11;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_F_0_13;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_G_0_15;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_H_0_17;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0(
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_23,
  MR_Word transform_hlds__rbmm__live_region_analysis__RptaInfoTable_24,
  MR_Word transform_hlds__rbmm__live_region_analysis__LVBeforeTable_25,
  MR_Word transform_hlds__rbmm__live_region_analysis__LVAfterTable_26,
  MR_Word transform_hlds__rbmm__live_region_analysis__VoidVarTable_27,
  MR_Word transform_hlds__rbmm__live_region_analysis__PredId_28,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_0_39,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_40,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_0_41,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_42,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_0_43,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_44,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_0_45,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_46,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_0_47,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_48,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_0_49,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_50,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_0_51,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_52,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_0_53,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_54)
{
  {
    MR_Word transform_hlds__rbmm__live_region_analysis__PredInfo_37;
    MR_Word transform_hlds__rbmm__live_region_analysis__ProcIds_38;

    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__live_region_analysis__ModuleInfo_23, transform_hlds__rbmm__live_region_analysis__PredId_28, &transform_hlds__rbmm__live_region_analysis__PredInfo_37);
    transform_hlds__rbmm__live_region_analysis__ProcIds_38 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__live_region_analysis__PredInfo_37);
    transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_p_0(transform_hlds__rbmm__live_region_analysis__ModuleInfo_23, transform_hlds__rbmm__live_region_analysis__RptaInfoTable_24, transform_hlds__rbmm__live_region_analysis__LVBeforeTable_25, transform_hlds__rbmm__live_region_analysis__LVAfterTable_26, transform_hlds__rbmm__live_region_analysis__VoidVarTable_27, transform_hlds__rbmm__live_region_analysis__PredId_28, transform_hlds__rbmm__live_region_analysis__ProcIds_38, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_0_39, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_40, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_0_41, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_42, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_0_43, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_44, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_0_45, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_46, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_0_47, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_48, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_0_49, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_50, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_0_51, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_52, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_0_53, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_54);
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_p_0(
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_95,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_96,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_97,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_98,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_99,
  MR_Word transform_hlds__rbmm__live_region_analysis__Var_100,
  MR_Word transform_hlds__rbmm__live_region_analysis__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_4,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_6,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_8,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_10,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_12,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_14,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_16,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__rbmm__live_region_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_18 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_16 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_14 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_12 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_10 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_8 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_6 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_4 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Integer transform_hlds__rbmm__live_region_analysis__H_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_region_analysis__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__rbmm__live_region_analysis__T_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_region_analysis__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_70_70;
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_71_71;
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_72_72;
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_73_73;
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_74_74;
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_75_75;
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_76_76;
      MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_77_77;

      transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0(transform_hlds__rbmm__live_region_analysis__Var_95, transform_hlds__rbmm__live_region_analysis__Var_96, transform_hlds__rbmm__live_region_analysis__Var_97, transform_hlds__rbmm__live_region_analysis__Var_98, transform_hlds__rbmm__live_region_analysis__Var_99, transform_hlds__rbmm__live_region_analysis__Var_100, transform_hlds__rbmm__live_region_analysis__H_45, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_70_70, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_71_71, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_72_72, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_73_73, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_74_74, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_75_75, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_76_76, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17, &transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_77_77);
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_HeadVar__2_2 = transform_hlds__rbmm__live_region_analysis__T_46;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_A_0_3 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_70_70;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_B_0_5 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_71_71;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_C_0_7 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_72_72;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_D_0_9 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_73_73;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_E_0_11 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_74_74;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_F_0_13 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_75_75;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_G_0_15 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_76_76;
        MR_Word transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_H_0_17 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_77_77;

        transform_hlds__rbmm__live_region_analysis__HeadVar__2_2 = transform_hlds__rbmm__live_region_analysis__next_value_of_HeadVar__2_2;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_A_0_3 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_A_0_3;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_B_0_5 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_B_0_5;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_C_0_7 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_C_0_7;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_D_0_9 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_D_0_9;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_E_0_11 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_E_0_11;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_F_0_13 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_F_0_13;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_G_0_15 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_G_0_15;
        transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_H_0_17 = transform_hlds__rbmm__live_region_analysis__next_value_of_STATE_VARIABLE_H_0_17;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_1(
  MR_Box transform_hlds__rbmm__live_region_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_3,
  MR_Box * transform_hlds__rbmm__live_region_analysis__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__rbmm__live_region_analysis__closure = transform_hlds__rbmm__live_region_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__live_region_analysis__conv1_STATE_VARIABLE_ProcLRMap_16;

    transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__live_region_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__live_region_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__live_region_analysis__wrapper_arg_3), &transform_hlds__rbmm__live_region_analysis__conv1_STATE_VARIABLE_ProcLRMap_16);
    *transform_hlds__rbmm__live_region_analysis__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__conv1_STATE_VARIABLE_ProcLRMap_16));
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0(
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_24,
  MR_Word transform_hlds__rbmm__live_region_analysis__RptaInfoTable_25,
  MR_Word transform_hlds__rbmm__live_region_analysis__LVBeforeTable_26,
  MR_Word transform_hlds__rbmm__live_region_analysis__LVAfterTable_27,
  MR_Word transform_hlds__rbmm__live_region_analysis__VoidVarTable_28,
  MR_Word transform_hlds__rbmm__live_region_analysis__PredId_29,
  MR_Integer transform_hlds__rbmm__live_region_analysis__ProcId_30,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_0_58,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_59,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_0_60,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_61,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_0_62,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_63,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_0_64,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_65,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_0_66,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_67,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_0_68,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_69,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_0_70,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_71,
  MR_Word transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_0_72,
  MR_Word * transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_73)
{
  {
    MR_bool transform_hlds__rbmm__live_region_analysis__succeeded;
    MR_Word transform_hlds__rbmm__live_region_analysis__PPId_39;
    MR_Word transform_hlds__rbmm__live_region_analysis__Var_74;

    {
      transform_hlds__rbmm__live_region_analysis__PPId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__PPId_39, 0) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PredId_29));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__PPId_39, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProcId_30));
    }
    {
      transform_hlds__rbmm__live_region_analysis__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_region_analysis__Var_74, 0) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39));
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_region_analysis__Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    transform_hlds__rbmm__live_region_analysis__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__live_region_analysis__Var_74, transform_hlds__rbmm__live_region_analysis__ModuleInfo_24);
    if (transform_hlds__rbmm__live_region_analysis__succeeded)
    {
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_73 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_0_72;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_71 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_0_70;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_69 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_0_68;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_67 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_0_66;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_65 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_0_64;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_63 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_0_62;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_61 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_0_60;
      *transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_59 = transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_0_58;
    }
    else
    {
      MR_Word transform_hlds__rbmm__live_region_analysis__RptaInfo_40;

      transform_hlds__rbmm__live_region_analysis__succeeded = transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(transform_hlds__rbmm__live_region_analysis__PPId_39, transform_hlds__rbmm__live_region_analysis__RptaInfoTable_25, &transform_hlds__rbmm__live_region_analysis__RptaInfo_40);
      if (transform_hlds__rbmm__live_region_analysis__succeeded)
      {
        MR_Word transform_hlds__rbmm__live_region_analysis__TypeInfo_97_97;
        MR_Word transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98;
        MR_Word transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99;
        MR_Word transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_100_100;
        MR_Word transform_hlds__rbmm__live_region_analysis__TypeInfo_101_101;
        MR_Word transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106;
        MR_Word transform_hlds__rbmm__live_region_analysis__TypeInfo_107_107;
        MR_Word transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108;
        MR_Word transform_hlds__rbmm__live_region_analysis__Graph_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__RptaInfo_40, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__live_region_analysis__ProcInfo_43;
        MR_Word transform_hlds__rbmm__live_region_analysis__Inputs_44;
        MR_Word transform_hlds__rbmm__live_region_analysis__Outputs_45;
        MR_Word transform_hlds__rbmm__live_region_analysis__InputR_46;
        MR_Word transform_hlds__rbmm__live_region_analysis__OutputR_47;
        MR_Word transform_hlds__rbmm__live_region_analysis__BornR_48;
        MR_Word transform_hlds__rbmm__live_region_analysis__DeadR_49;
        MR_Word transform_hlds__rbmm__live_region_analysis__Nodes_50;
        MR_Word transform_hlds__rbmm__live_region_analysis__LocalR_51;
        MR_Word transform_hlds__rbmm__live_region_analysis__ProcLVBefore_52;
        MR_Word transform_hlds__rbmm__live_region_analysis__ProcLRBefore_53;
        MR_Word transform_hlds__rbmm__live_region_analysis__ProcLVAfter_54;
        MR_Word transform_hlds__rbmm__live_region_analysis__ProcLRAfter_55;
        MR_Word transform_hlds__rbmm__live_region_analysis__ProcVoidVar_56;
        MR_Word transform_hlds__rbmm__live_region_analysis__ProcVoidVarRegion_57;
        MR_Word transform_hlds__rbmm__live_region_analysis__Var_76;
        MR_Word transform_hlds__rbmm__live_region_analysis__Var_77;
        MR_Word transform_hlds__rbmm__live_region_analysis__Var_82;
        MR_Word transform_hlds__rbmm__live_region_analysis__Var_83;
        MR_Word transform_hlds__rbmm__live_region_analysis__Var_85;
        MR_Word transform_hlds__rbmm__live_region_analysis__Var_86;
        MR_Word transform_hlds__rbmm__live_region_analysis__Var_89;
        MR_Word transform_hlds__rbmm__live_region_analysis__Var_92;
        MR_Word transform_hlds__rbmm__live_region_analysis___ALpha_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__RptaInfo_40, (MR_Integer) 1)));
        MR_Box transform_hlds__rbmm__live_region_analysis__conv0_ProcLVBefore_52;
        MR_Box transform_hlds__rbmm__live_region_analysis__conv2_ProcLRBefore_53;
        MR_Box transform_hlds__rbmm__live_region_analysis__conv3_ProcLVAfter_54;
        MR_Box transform_hlds__rbmm__live_region_analysis__conv4_ProcLRAfter_55;
        MR_Box transform_hlds__rbmm__live_region_analysis__conv5_ProcVoidVar_56;
        MR_Box transform_hlds__rbmm__live_region_analysis__conv6_ProcVoidVarRegion_57;

        hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__live_region_analysis__ModuleInfo_24, transform_hlds__rbmm__live_region_analysis__PPId_39, &transform_hlds__rbmm__live_region_analysis__ProcInfo_43);
        transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_p_0(transform_hlds__rbmm__live_region_analysis__ModuleInfo_24, transform_hlds__rbmm__live_region_analysis__ProcInfo_43, &transform_hlds__rbmm__live_region_analysis__Inputs_44, &transform_hlds__rbmm__live_region_analysis__Outputs_45);
        transform_hlds__rbmm__live_region_analysis__TypeInfo_97_97 = (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[1];
        transform_hlds__rbmm__live_region_analysis__Var_76 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__live_region_analysis__TypeInfo_97_97, transform_hlds__rbmm__live_region_analysis__Inputs_44);
        transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0(transform_hlds__rbmm__live_region_analysis__Var_76, transform_hlds__rbmm__live_region_analysis__Graph_41, transform_hlds__rbmm__live_region_analysis__ModuleInfo_24, transform_hlds__rbmm__live_region_analysis__ProcInfo_43, &transform_hlds__rbmm__live_region_analysis__InputR_46);
        transform_hlds__rbmm__live_region_analysis__Var_77 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__live_region_analysis__TypeInfo_97_97, transform_hlds__rbmm__live_region_analysis__Outputs_45);
        transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0(transform_hlds__rbmm__live_region_analysis__Var_77, transform_hlds__rbmm__live_region_analysis__Graph_41, transform_hlds__rbmm__live_region_analysis__ModuleInfo_24, transform_hlds__rbmm__live_region_analysis__ProcInfo_43, &transform_hlds__rbmm__live_region_analysis__OutputR_47);
        transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99 = (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[0];
        mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__InputR_46)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_0_64, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_InputRTable_65);
        mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__OutputR_47)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_0_66, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_OutputRTable_67);
        transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_100_100 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
        mercury__set__difference_3_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_100_100, transform_hlds__rbmm__live_region_analysis__OutputR_47, transform_hlds__rbmm__live_region_analysis__InputR_46, &transform_hlds__rbmm__live_region_analysis__BornR_48);
        mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__BornR_48)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_0_68, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_BornRTable_69);
        mercury__set__difference_3_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_100_100, transform_hlds__rbmm__live_region_analysis__InputR_46, transform_hlds__rbmm__live_region_analysis__OutputR_47, &transform_hlds__rbmm__live_region_analysis__DeadR_49);
        mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__DeadR_49)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_0_70, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_DeadRTable_71);
        transform_hlds__rbmm__live_region_analysis__Nodes_50 = transform_hlds__rbmm__points_to_graph__rptg_get_nodes_as_list_1_f_0(transform_hlds__rbmm__live_region_analysis__Graph_41);
        transform_hlds__rbmm__live_region_analysis__Var_83 = mercury__set__from_list_1_f_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_100_100, transform_hlds__rbmm__live_region_analysis__Nodes_50);
        transform_hlds__rbmm__live_region_analysis__Var_82 = mercury__set__difference_2_f_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_100_100, transform_hlds__rbmm__live_region_analysis__Var_83, transform_hlds__rbmm__live_region_analysis__InputR_46);
        mercury__set__difference_3_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_100_100, transform_hlds__rbmm__live_region_analysis__Var_82, transform_hlds__rbmm__live_region_analysis__OutputR_47, &transform_hlds__rbmm__live_region_analysis__LocalR_51);
        mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__LocalR_51)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_0_72, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LocalRTable_73);
        transform_hlds__rbmm__live_region_analysis__TypeInfo_101_101 = (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_2[1];
        mercury__map__lookup_3_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_101_101, transform_hlds__rbmm__live_region_analysis__LVBeforeTable_26, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), &transform_hlds__rbmm__live_region_analysis__conv0_ProcLVBefore_52);
        transform_hlds__rbmm__live_region_analysis__ProcLVBefore_52 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv0_ProcLVBefore_52);
        {
          transform_hlds__rbmm__live_region_analysis__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_85, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_85, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_85, 3) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__Graph_41));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_85, 4) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ModuleInfo_24));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_85, 5) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProcInfo_43));
        }
        transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
        transform_hlds__rbmm__live_region_analysis__Var_86 = mercury__map__init_0_f_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99);
        transform_hlds__rbmm__live_region_analysis__TypeInfo_107_107 = (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[2];
        transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108 = (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_2[0];
        mercury__map__foldl_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106, transform_hlds__rbmm__live_region_analysis__TypeInfo_107_107, transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108, transform_hlds__rbmm__live_region_analysis__Var_85, transform_hlds__rbmm__live_region_analysis__ProcLVBefore_52, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__Var_86)), &transform_hlds__rbmm__live_region_analysis__conv2_ProcLRBefore_53);
        transform_hlds__rbmm__live_region_analysis__ProcLRBefore_53 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv2_ProcLRBefore_53);
        mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProcLRBefore_53)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_0_58, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRBeforeTable_59);
        mercury__map__lookup_3_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_101_101, transform_hlds__rbmm__live_region_analysis__LVAfterTable_27, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), &transform_hlds__rbmm__live_region_analysis__conv3_ProcLVAfter_54);
        transform_hlds__rbmm__live_region_analysis__ProcLVAfter_54 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv3_ProcLVAfter_54);
        transform_hlds__rbmm__live_region_analysis__Var_89 = mercury__map__init_0_f_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99);
        mercury__map__foldl_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106, transform_hlds__rbmm__live_region_analysis__TypeInfo_107_107, transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108, transform_hlds__rbmm__live_region_analysis__Var_85, transform_hlds__rbmm__live_region_analysis__ProcLVAfter_54, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__Var_89)), &transform_hlds__rbmm__live_region_analysis__conv4_ProcLRAfter_55);
        transform_hlds__rbmm__live_region_analysis__ProcLRAfter_55 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv4_ProcLRAfter_55);
        mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProcLRAfter_55)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_0_60, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_LRAfterTable_61);
        mercury__map__lookup_3_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_101_101, transform_hlds__rbmm__live_region_analysis__VoidVarTable_28, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), &transform_hlds__rbmm__live_region_analysis__conv5_ProcVoidVar_56);
        transform_hlds__rbmm__live_region_analysis__ProcVoidVar_56 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv5_ProcVoidVar_56);
        transform_hlds__rbmm__live_region_analysis__Var_92 = mercury__map__init_0_f_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106, transform_hlds__rbmm__live_region_analysis__TypeInfo_99_99);
        mercury__map__foldl_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_106_106, transform_hlds__rbmm__live_region_analysis__TypeInfo_107_107, transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108, transform_hlds__rbmm__live_region_analysis__Var_85, transform_hlds__rbmm__live_region_analysis__ProcVoidVar_56, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__Var_92)), &transform_hlds__rbmm__live_region_analysis__conv6_ProcVoidVarRegion_57);
        transform_hlds__rbmm__live_region_analysis__ProcVoidVarRegion_57 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv6_ProcVoidVarRegion_57);
        mercury__map__set_4_p_0(transform_hlds__rbmm__live_region_analysis__TypeCtorInfo_98_98, transform_hlds__rbmm__live_region_analysis__TypeInfo_108_108, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__PPId_39)), ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProcVoidVarRegion_57)), transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_0_62, transform_hlds__rbmm__live_region_analysis__STATE_VARIABLE_VoidVarRegionTable_63);
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.live_region_analysis", (MR_String) "predicate \140transform_hlds.rbmm.live_region_analysis.live_region_analysis_proc\'/23", (MR_String) "no rpta_info");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0_1(
  MR_Box transform_hlds__rbmm__live_region_analysis__closure_arg,
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__live_region_analysis__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__live_region_analysis__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__live_region_analysis__closure = transform_hlds__rbmm__live_region_analysis__closure_arg;
    MR_Word transform_hlds__rbmm__live_region_analysis__conv0_HeadVar__6_6;

    transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__live_region_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__live_region_analysis__wrapper_arg_2), &transform_hlds__rbmm__live_region_analysis__conv0_HeadVar__6_6);
    *transform_hlds__rbmm__live_region_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0(
  MR_Word transform_hlds__rbmm__live_region_analysis__LVSet_6,
  MR_Word transform_hlds__rbmm__live_region_analysis__Graph_7,
  MR_Word transform_hlds__rbmm__live_region_analysis__ModuleInfo_8,
  MR_Word transform_hlds__rbmm__live_region_analysis__ProcInfo_9,
  MR_Word * transform_hlds__rbmm__live_region_analysis__LRSet_10)
{
  {
    MR_bool transform_hlds__rbmm__live_region_analysis__succeeded;

    transform_hlds__rbmm__live_region_analysis__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[1], transform_hlds__rbmm__live_region_analysis__LVSet_6);
    if (transform_hlds__rbmm__live_region_analysis__succeeded)
    {
      mercury__set__init_1_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__live_region_analysis__LRSet_10);
    }
    else
    {
      MR_Word transform_hlds__rbmm__live_region_analysis__LRSet0_11;
      MR_Word transform_hlds__rbmm__live_region_analysis__Var_12;
      MR_Box transform_hlds__rbmm__live_region_analysis__conv1_LRSet_10;

      mercury__set__init_1_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, &transform_hlds__rbmm__live_region_analysis__LRSet0_11);
      {
        transform_hlds__rbmm__live_region_analysis__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_12, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_12, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_12, 3) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__Graph_7));
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_12, 4) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ModuleInfo_8));
        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_region_analysis__Var_12, 5) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__ProcInfo_9));
      }
      mercury__set__fold_4_p_0((MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__live_region_analysis_scalar_common_1[0], transform_hlds__rbmm__live_region_analysis__Var_12, transform_hlds__rbmm__live_region_analysis__LVSet_6, ((MR_Box) (transform_hlds__rbmm__live_region_analysis__LRSet0_11)), &transform_hlds__rbmm__live_region_analysis__conv1_LRSet_10);
      *transform_hlds__rbmm__live_region_analysis__LRSet_10 = ((MR_Word) transform_hlds__rbmm__live_region_analysis__conv1_LRSet_10);
    }
  }
}

void mercury__transform_hlds__rbmm__live_region_analysis__init(void)
{
}

void mercury__transform_hlds__rbmm__live_region_analysis__init_type_tables(void)
{
}

void mercury__transform_hlds__rbmm__live_region_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__live_region_analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.rbmm.live_region_analysis. */
