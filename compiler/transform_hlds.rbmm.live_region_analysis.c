/*
** Automatically generated from `rbmm.live_region_analysis.m'
** by the Mercury compiler,
** version rotd-2020-03-25
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


// :- module transform_hlds.rbmm.live_region_analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__live_region_analysis__init
ENDINIT
*/

#include "transform_hlds.rbmm.live_region_analysis.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
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
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0(
  MR_Word Graph_8,
  MR_Word ModuleInfo_9,
  MR_Word ProcInfo_10,
  MR_Word ProgPoint_11,
  MR_Word LVs_12,
  MR_Word STATE_VARIABLE_ProcLRMap_0_15,
  MR_Word * STATE_VARIABLE_ProcLRMap_16);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_p_0(
  MR_Word Var_95,
  MR_Word Var_96,
  MR_Word Var_97,
  MR_Word Var_98,
  MR_Word Var_99,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_A_0_3,
  MR_Word * STATE_VARIABLE_A_4,
  MR_Word STATE_VARIABLE_B_0_5,
  MR_Word * STATE_VARIABLE_B_6,
  MR_Word STATE_VARIABLE_C_0_7,
  MR_Word * STATE_VARIABLE_C_8,
  MR_Word STATE_VARIABLE_D_0_9,
  MR_Word * STATE_VARIABLE_D_10,
  MR_Word STATE_VARIABLE_E_0_11,
  MR_Word * STATE_VARIABLE_E_12,
  MR_Word STATE_VARIABLE_F_0_13,
  MR_Word * STATE_VARIABLE_F_14,
  MR_Word STATE_VARIABLE_G_0_15,
  MR_Word * STATE_VARIABLE_G_16,
  MR_Word STATE_VARIABLE_H_0_17,
  MR_Word * STATE_VARIABLE_H_18);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0(
  MR_Word ModuleInfo_23,
  MR_Word RptaInfoTable_24,
  MR_Word LVBeforeTable_25,
  MR_Word LVAfterTable_26,
  MR_Word VoidVarTable_27,
  MR_Word PredId_28,
  MR_Word STATE_VARIABLE_LRBeforeTable_0_39,
  MR_Word * STATE_VARIABLE_LRBeforeTable_40,
  MR_Word STATE_VARIABLE_LRAfterTable_0_41,
  MR_Word * STATE_VARIABLE_LRAfterTable_42,
  MR_Word STATE_VARIABLE_VoidVarRegionTable_0_43,
  MR_Word * STATE_VARIABLE_VoidVarRegionTable_44,
  MR_Word STATE_VARIABLE_InputRTable_0_45,
  MR_Word * STATE_VARIABLE_InputRTable_46,
  MR_Word STATE_VARIABLE_OutputRTable_0_47,
  MR_Word * STATE_VARIABLE_OutputRTable_48,
  MR_Word STATE_VARIABLE_BornRTable_0_49,
  MR_Word * STATE_VARIABLE_BornRTable_50,
  MR_Word STATE_VARIABLE_DeadRTable_0_51,
  MR_Word * STATE_VARIABLE_DeadRTable_52,
  MR_Word STATE_VARIABLE_LocalRTable_0_53,
  MR_Word * STATE_VARIABLE_LocalRTable_54);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_p_0(
  MR_Word Var_95,
  MR_Word Var_96,
  MR_Word Var_97,
  MR_Word Var_98,
  MR_Word Var_99,
  MR_Word Var_100,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_A_0_3,
  MR_Word * STATE_VARIABLE_A_4,
  MR_Word STATE_VARIABLE_B_0_5,
  MR_Word * STATE_VARIABLE_B_6,
  MR_Word STATE_VARIABLE_C_0_7,
  MR_Word * STATE_VARIABLE_C_8,
  MR_Word STATE_VARIABLE_D_0_9,
  MR_Word * STATE_VARIABLE_D_10,
  MR_Word STATE_VARIABLE_E_0_11,
  MR_Word * STATE_VARIABLE_E_12,
  MR_Word STATE_VARIABLE_F_0_13,
  MR_Word * STATE_VARIABLE_F_14,
  MR_Word STATE_VARIABLE_G_0_15,
  MR_Word * STATE_VARIABLE_G_16,
  MR_Word STATE_VARIABLE_H_0_17,
  MR_Word * STATE_VARIABLE_H_18);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0(
  MR_Word ModuleInfo_24,
  MR_Word RptaInfoTable_25,
  MR_Word LVBeforeTable_26,
  MR_Word LVAfterTable_27,
  MR_Word VoidVarTable_28,
  MR_Word PredId_29,
  MR_Integer ProcId_30,
  MR_Word STATE_VARIABLE_LRBeforeTable_0_58,
  MR_Word * STATE_VARIABLE_LRBeforeTable_59,
  MR_Word STATE_VARIABLE_LRAfterTable_0_60,
  MR_Word * STATE_VARIABLE_LRAfterTable_61,
  MR_Word STATE_VARIABLE_VoidVarRegionTable_0_62,
  MR_Word * STATE_VARIABLE_VoidVarRegionTable_63,
  MR_Word STATE_VARIABLE_InputRTable_0_64,
  MR_Word * STATE_VARIABLE_InputRTable_65,
  MR_Word STATE_VARIABLE_OutputRTable_0_66,
  MR_Word * STATE_VARIABLE_OutputRTable_67,
  MR_Word STATE_VARIABLE_BornRTable_0_68,
  MR_Word * STATE_VARIABLE_BornRTable_69,
  MR_Word STATE_VARIABLE_DeadRTable_0_70,
  MR_Word * STATE_VARIABLE_DeadRTable_71,
  MR_Word STATE_VARIABLE_LocalRTable_0_72,
  MR_Word * STATE_VARIABLE_LocalRTable_73);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0(
  MR_Word LVSet_6,
  MR_Word Graph_7,
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word * LRSet_10);


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
    ((MR_Box) ((MR_Integer) 6)),
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
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__live_region_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_region_analysis__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__live_region_analysis__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__6_6;

    transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0(
  MR_Word Graph_8,
  MR_Word ModuleInfo_9,
  MR_Word ProcInfo_10,
  MR_Word ProgPoint_11,
  MR_Word LVs_12,
  MR_Word STATE_VARIABLE_ProcLRMap_0_15,
  MR_Word * STATE_VARIABLE_ProcLRMap_16)
{
  {
    MR_bool succeeded;
    MR_Word LRs_14;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]), LVs_12);
    if (succeeded)
      mercury__set__init_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), &LRs_14);
    else
    {
      MR_Word LRSet0_25;
      MR_Word Var_26;
      MR_Box conv1_LRs_14;

      mercury__set__init_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), &LRSet0_25);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Graph_8));
        MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (ModuleInfo_9));
        MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (ProcInfo_10));
      }
      mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), Var_26, LVs_12, ((MR_Box) (LRSet0_25)), &conv1_LRs_14);
      LRs_14 = ((MR_Word) (conv1_LRs_14));
    }
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), ((MR_Box) (ProgPoint_11)), ((MR_Box) (LRs_14)), STATE_VARIABLE_ProcLRMap_0_15, STATE_VARIABLE_ProcLRMap_16);
  }
}

void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word RptaInfoTable_15,
  MR_Word LVBeforeTable_16,
  MR_Word LVAfterTable_17,
  MR_Word VoidVarTable_18,
  MR_Word * LRBeforeTable_19,
  MR_Word * LRAfterTable_20,
  MR_Word * VoidVarRegionTable_21,
  MR_Word * InputRTable_22,
  MR_Word * OutputRTable_23,
  MR_Word * BornRTable_24,
  MR_Word * DeadRTable_25,
  MR_Word * LocalRTable_26)
{
  {
    MR_Word PredIds_27;
    MR_Word LRBeforeTable0_28;
    MR_Word LRAfterTable0_29;
    MR_Word VoidVarRegionTable0_30;
    MR_Word InputRTable0_31;
    MR_Word OutputRTable0_32;
    MR_Word BornRTable0_33;
    MR_Word DeadRTable0_34;
    MR_Word LocalRTable0_35;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_14, &PredIds_27);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), &LRBeforeTable0_28);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), &LRAfterTable0_29);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), &VoidVarRegionTable0_30);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), &InputRTable0_31);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), &OutputRTable0_32);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), &BornRTable0_33);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), &DeadRTable0_34);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), &LocalRTable0_35);
    transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_p_0(ModuleInfo_14, RptaInfoTable_15, LVBeforeTable_16, LVAfterTable_17, VoidVarTable_18, PredIds_27, LRBeforeTable0_28, LRBeforeTable_19, LRAfterTable0_29, LRAfterTable_20, VoidVarRegionTable0_30, VoidVarRegionTable_21, InputRTable0_31, InputRTable_22, OutputRTable0_32, OutputRTable_23, BornRTable0_33, BornRTable_24, DeadRTable0_34, DeadRTable_25, LocalRTable0_35, LocalRTable_26);
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_50_95_95_91_54_93_95_48_18_p_0(
  MR_Word Var_95,
  MR_Word Var_96,
  MR_Word Var_97,
  MR_Word Var_98,
  MR_Word Var_99,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_A_0_3,
  MR_Word * STATE_VARIABLE_A_4,
  MR_Word STATE_VARIABLE_B_0_5,
  MR_Word * STATE_VARIABLE_B_6,
  MR_Word STATE_VARIABLE_C_0_7,
  MR_Word * STATE_VARIABLE_C_8,
  MR_Word STATE_VARIABLE_D_0_9,
  MR_Word * STATE_VARIABLE_D_10,
  MR_Word STATE_VARIABLE_E_0_11,
  MR_Word * STATE_VARIABLE_E_12,
  MR_Word STATE_VARIABLE_F_0_13,
  MR_Word * STATE_VARIABLE_F_14,
  MR_Word STATE_VARIABLE_G_0_15,
  MR_Word * STATE_VARIABLE_G_16,
  MR_Word STATE_VARIABLE_H_0_17,
  MR_Word * STATE_VARIABLE_H_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_H_18 = STATE_VARIABLE_H_0_17;
      *STATE_VARIABLE_G_16 = STATE_VARIABLE_G_0_15;
      *STATE_VARIABLE_F_14 = STATE_VARIABLE_F_0_13;
      *STATE_VARIABLE_E_12 = STATE_VARIABLE_E_0_11;
      *STATE_VARIABLE_D_10 = STATE_VARIABLE_D_0_9;
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Word H_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word T_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_A_70_70;
      MR_Word STATE_VARIABLE_B_71_71;
      MR_Word STATE_VARIABLE_C_72_72;
      MR_Word STATE_VARIABLE_D_73_73;
      MR_Word STATE_VARIABLE_E_74_74;
      MR_Word STATE_VARIABLE_F_75_75;
      MR_Word STATE_VARIABLE_G_76_76;
      MR_Word STATE_VARIABLE_H_77_77;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_A_0_3;
      MR_Word next_value_of_STATE_VARIABLE_B_0_5;
      MR_Word next_value_of_STATE_VARIABLE_C_0_7;
      MR_Word next_value_of_STATE_VARIABLE_D_0_9;
      MR_Word next_value_of_STATE_VARIABLE_E_0_11;
      MR_Word next_value_of_STATE_VARIABLE_F_0_13;
      MR_Word next_value_of_STATE_VARIABLE_G_0_15;
      MR_Word next_value_of_STATE_VARIABLE_H_0_17;

      transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0(Var_95, Var_96, Var_97, Var_98, Var_99, H_45, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_70_70, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_71_71, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_72_72, STATE_VARIABLE_D_0_9, &STATE_VARIABLE_D_73_73, STATE_VARIABLE_E_0_11, &STATE_VARIABLE_E_74_74, STATE_VARIABLE_F_0_13, &STATE_VARIABLE_F_75_75, STATE_VARIABLE_G_0_15, &STATE_VARIABLE_G_76_76, STATE_VARIABLE_H_0_17, &STATE_VARIABLE_H_77_77);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = T_46;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_70_70;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_71_71;
      next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_72_72;
      next_value_of_STATE_VARIABLE_D_0_9 = STATE_VARIABLE_D_73_73;
      next_value_of_STATE_VARIABLE_E_0_11 = STATE_VARIABLE_E_74_74;
      next_value_of_STATE_VARIABLE_F_0_13 = STATE_VARIABLE_F_75_75;
      next_value_of_STATE_VARIABLE_G_0_15 = STATE_VARIABLE_G_76_76;
      next_value_of_STATE_VARIABLE_H_0_17 = STATE_VARIABLE_H_77_77;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
      STATE_VARIABLE_D_0_9 = next_value_of_STATE_VARIABLE_D_0_9;
      STATE_VARIABLE_E_0_11 = next_value_of_STATE_VARIABLE_E_0_11;
      STATE_VARIABLE_F_0_13 = next_value_of_STATE_VARIABLE_F_0_13;
      STATE_VARIABLE_G_0_15 = next_value_of_STATE_VARIABLE_G_0_15;
      STATE_VARIABLE_H_0_17 = next_value_of_STATE_VARIABLE_H_0_17;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_pred_22_p_0(
  MR_Word ModuleInfo_23,
  MR_Word RptaInfoTable_24,
  MR_Word LVBeforeTable_25,
  MR_Word LVAfterTable_26,
  MR_Word VoidVarTable_27,
  MR_Word PredId_28,
  MR_Word STATE_VARIABLE_LRBeforeTable_0_39,
  MR_Word * STATE_VARIABLE_LRBeforeTable_40,
  MR_Word STATE_VARIABLE_LRAfterTable_0_41,
  MR_Word * STATE_VARIABLE_LRAfterTable_42,
  MR_Word STATE_VARIABLE_VoidVarRegionTable_0_43,
  MR_Word * STATE_VARIABLE_VoidVarRegionTable_44,
  MR_Word STATE_VARIABLE_InputRTable_0_45,
  MR_Word * STATE_VARIABLE_InputRTable_46,
  MR_Word STATE_VARIABLE_OutputRTable_0_47,
  MR_Word * STATE_VARIABLE_OutputRTable_48,
  MR_Word STATE_VARIABLE_BornRTable_0_49,
  MR_Word * STATE_VARIABLE_BornRTable_50,
  MR_Word STATE_VARIABLE_DeadRTable_0_51,
  MR_Word * STATE_VARIABLE_DeadRTable_52,
  MR_Word STATE_VARIABLE_LocalRTable_0_53,
  MR_Word * STATE_VARIABLE_LocalRTable_54)
{
  {
    MR_Word PredInfo_37;
    MR_Word ProcIds_38;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_23, PredId_28, &PredInfo_37);
    ProcIds_38 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_37);
    transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_p_0(ModuleInfo_23, RptaInfoTable_24, LVBeforeTable_25, LVAfterTable_26, VoidVarTable_27, PredId_28, ProcIds_38, STATE_VARIABLE_LRBeforeTable_0_39, STATE_VARIABLE_LRBeforeTable_40, STATE_VARIABLE_LRAfterTable_0_41, STATE_VARIABLE_LRAfterTable_42, STATE_VARIABLE_VoidVarRegionTable_0_43, STATE_VARIABLE_VoidVarRegionTable_44, STATE_VARIABLE_InputRTable_0_45, STATE_VARIABLE_InputRTable_46, STATE_VARIABLE_OutputRTable_0_47, STATE_VARIABLE_OutputRTable_48, STATE_VARIABLE_BornRTable_0_49, STATE_VARIABLE_BornRTable_50, STATE_VARIABLE_DeadRTable_0_51, STATE_VARIABLE_DeadRTable_52, STATE_VARIABLE_LocalRTable_0_53, STATE_VARIABLE_LocalRTable_54);
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_56_95_95_104_111_49_95_95_91_55_93_95_48_18_p_0(
  MR_Word Var_95,
  MR_Word Var_96,
  MR_Word Var_97,
  MR_Word Var_98,
  MR_Word Var_99,
  MR_Word Var_100,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_A_0_3,
  MR_Word * STATE_VARIABLE_A_4,
  MR_Word STATE_VARIABLE_B_0_5,
  MR_Word * STATE_VARIABLE_B_6,
  MR_Word STATE_VARIABLE_C_0_7,
  MR_Word * STATE_VARIABLE_C_8,
  MR_Word STATE_VARIABLE_D_0_9,
  MR_Word * STATE_VARIABLE_D_10,
  MR_Word STATE_VARIABLE_E_0_11,
  MR_Word * STATE_VARIABLE_E_12,
  MR_Word STATE_VARIABLE_F_0_13,
  MR_Word * STATE_VARIABLE_F_14,
  MR_Word STATE_VARIABLE_G_0_15,
  MR_Word * STATE_VARIABLE_G_16,
  MR_Word STATE_VARIABLE_H_0_17,
  MR_Word * STATE_VARIABLE_H_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_H_18 = STATE_VARIABLE_H_0_17;
      *STATE_VARIABLE_G_16 = STATE_VARIABLE_G_0_15;
      *STATE_VARIABLE_F_14 = STATE_VARIABLE_F_0_13;
      *STATE_VARIABLE_E_12 = STATE_VARIABLE_E_0_11;
      *STATE_VARIABLE_D_10 = STATE_VARIABLE_D_0_9;
      *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
      *STATE_VARIABLE_B_6 = STATE_VARIABLE_B_0_5;
      *STATE_VARIABLE_A_4 = STATE_VARIABLE_A_0_3;
    }
    else
    {
      MR_Integer H_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word T_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_A_70_70;
      MR_Word STATE_VARIABLE_B_71_71;
      MR_Word STATE_VARIABLE_C_72_72;
      MR_Word STATE_VARIABLE_D_73_73;
      MR_Word STATE_VARIABLE_E_74_74;
      MR_Word STATE_VARIABLE_F_75_75;
      MR_Word STATE_VARIABLE_G_76_76;
      MR_Word STATE_VARIABLE_H_77_77;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_A_0_3;
      MR_Word next_value_of_STATE_VARIABLE_B_0_5;
      MR_Word next_value_of_STATE_VARIABLE_C_0_7;
      MR_Word next_value_of_STATE_VARIABLE_D_0_9;
      MR_Word next_value_of_STATE_VARIABLE_E_0_11;
      MR_Word next_value_of_STATE_VARIABLE_F_0_13;
      MR_Word next_value_of_STATE_VARIABLE_G_0_15;
      MR_Word next_value_of_STATE_VARIABLE_H_0_17;

      transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0(Var_95, Var_96, Var_97, Var_98, Var_99, Var_100, H_45, STATE_VARIABLE_A_0_3, &STATE_VARIABLE_A_70_70, STATE_VARIABLE_B_0_5, &STATE_VARIABLE_B_71_71, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_72_72, STATE_VARIABLE_D_0_9, &STATE_VARIABLE_D_73_73, STATE_VARIABLE_E_0_11, &STATE_VARIABLE_E_74_74, STATE_VARIABLE_F_0_13, &STATE_VARIABLE_F_75_75, STATE_VARIABLE_G_0_15, &STATE_VARIABLE_G_76_76, STATE_VARIABLE_H_0_17, &STATE_VARIABLE_H_77_77);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = T_46;
      next_value_of_STATE_VARIABLE_A_0_3 = STATE_VARIABLE_A_70_70;
      next_value_of_STATE_VARIABLE_B_0_5 = STATE_VARIABLE_B_71_71;
      next_value_of_STATE_VARIABLE_C_0_7 = STATE_VARIABLE_C_72_72;
      next_value_of_STATE_VARIABLE_D_0_9 = STATE_VARIABLE_D_73_73;
      next_value_of_STATE_VARIABLE_E_0_11 = STATE_VARIABLE_E_74_74;
      next_value_of_STATE_VARIABLE_F_0_13 = STATE_VARIABLE_F_75_75;
      next_value_of_STATE_VARIABLE_G_0_15 = STATE_VARIABLE_G_76_76;
      next_value_of_STATE_VARIABLE_H_0_17 = STATE_VARIABLE_H_77_77;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_A_0_3 = next_value_of_STATE_VARIABLE_A_0_3;
      STATE_VARIABLE_B_0_5 = next_value_of_STATE_VARIABLE_B_0_5;
      STATE_VARIABLE_C_0_7 = next_value_of_STATE_VARIABLE_C_0_7;
      STATE_VARIABLE_D_0_9 = next_value_of_STATE_VARIABLE_D_0_9;
      STATE_VARIABLE_E_0_11 = next_value_of_STATE_VARIABLE_E_0_11;
      STATE_VARIABLE_F_0_13 = next_value_of_STATE_VARIABLE_F_0_13;
      STATE_VARIABLE_G_0_15 = next_value_of_STATE_VARIABLE_G_0_15;
      STATE_VARIABLE_H_0_17 = next_value_of_STATE_VARIABLE_H_0_17;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ProcLRMap_16;

    transform_hlds__rbmm__live_region_analysis__proc_lv_to_proc_lr_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ProcLRMap_16);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ProcLRMap_16));
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0(
  MR_Word ModuleInfo_24,
  MR_Word RptaInfoTable_25,
  MR_Word LVBeforeTable_26,
  MR_Word LVAfterTable_27,
  MR_Word VoidVarTable_28,
  MR_Word PredId_29,
  MR_Integer ProcId_30,
  MR_Word STATE_VARIABLE_LRBeforeTable_0_58,
  MR_Word * STATE_VARIABLE_LRBeforeTable_59,
  MR_Word STATE_VARIABLE_LRAfterTable_0_60,
  MR_Word * STATE_VARIABLE_LRAfterTable_61,
  MR_Word STATE_VARIABLE_VoidVarRegionTable_0_62,
  MR_Word * STATE_VARIABLE_VoidVarRegionTable_63,
  MR_Word STATE_VARIABLE_InputRTable_0_64,
  MR_Word * STATE_VARIABLE_InputRTable_65,
  MR_Word STATE_VARIABLE_OutputRTable_0_66,
  MR_Word * STATE_VARIABLE_OutputRTable_67,
  MR_Word STATE_VARIABLE_BornRTable_0_68,
  MR_Word * STATE_VARIABLE_BornRTable_69,
  MR_Word STATE_VARIABLE_DeadRTable_0_70,
  MR_Word * STATE_VARIABLE_DeadRTable_71,
  MR_Word STATE_VARIABLE_LocalRTable_0_72,
  MR_Word * STATE_VARIABLE_LocalRTable_73)
{
  {
    MR_bool succeeded;
    MR_Word PPId_39;
    MR_Word Var_74;

    {
      PPId_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PPId_39, 0) = ((MR_Box) (PredId_29));
      MR_hl_field(MR_mktag(0), PPId_39, 1) = ((MR_Box) (ProcId_30));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (PPId_39));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_74, ModuleInfo_24);
    if (succeeded)
    {
      *STATE_VARIABLE_LocalRTable_73 = STATE_VARIABLE_LocalRTable_0_72;
      *STATE_VARIABLE_DeadRTable_71 = STATE_VARIABLE_DeadRTable_0_70;
      *STATE_VARIABLE_BornRTable_69 = STATE_VARIABLE_BornRTable_0_68;
      *STATE_VARIABLE_OutputRTable_67 = STATE_VARIABLE_OutputRTable_0_66;
      *STATE_VARIABLE_InputRTable_65 = STATE_VARIABLE_InputRTable_0_64;
      *STATE_VARIABLE_VoidVarRegionTable_63 = STATE_VARIABLE_VoidVarRegionTable_0_62;
      *STATE_VARIABLE_LRAfterTable_61 = STATE_VARIABLE_LRAfterTable_0_60;
      *STATE_VARIABLE_LRBeforeTable_59 = STATE_VARIABLE_LRBeforeTable_0_58;
    }
    else
    {
      MR_Word RptaInfo_40;

      succeeded = transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(PPId_39, RptaInfoTable_25, &RptaInfo_40);
      if (succeeded)
      {
        MR_Word Graph_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RptaInfo_40, (MR_Integer) 0))));
        MR_Word ProcInfo_43;
        MR_Word Inputs_44;
        MR_Word Outputs_45;
        MR_Word InputR_46;
        MR_Word OutputR_47;
        MR_Word BornR_48;
        MR_Word DeadR_49;
        MR_Word Nodes_50;
        MR_Word LocalR_51;
        MR_Word ProcLVBefore_52;
        MR_Word ProcLRBefore_53;
        MR_Word ProcLVAfter_54;
        MR_Word ProcLRAfter_55;
        MR_Word ProcVoidVar_56;
        MR_Word ProcVoidVarRegion_57;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_89;
        MR_Word Var_92;
        MR_Box conv0_ProcLVBefore_52;
        MR_Box conv2_ProcLRBefore_53;
        MR_Box conv3_ProcLVAfter_54;
        MR_Box conv4_ProcLRAfter_55;
        MR_Box conv5_ProcVoidVar_56;
        MR_Box conv6_ProcVoidVarRegion_57;

        hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_24, PPId_39, &ProcInfo_43);
        transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_p_0(ModuleInfo_24, ProcInfo_43, &Inputs_44, &Outputs_45);
        Var_76 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]), Inputs_44);
        transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0(Var_76, Graph_41, ModuleInfo_24, ProcInfo_43, &InputR_46);
        Var_77 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]), Outputs_45);
        transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0(Var_77, Graph_41, ModuleInfo_24, ProcInfo_43, &OutputR_47);
        mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), ((MR_Box) (PPId_39)), ((MR_Box) (InputR_46)), STATE_VARIABLE_InputRTable_0_64, STATE_VARIABLE_InputRTable_65);
        mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), ((MR_Box) (PPId_39)), ((MR_Box) (OutputR_47)), STATE_VARIABLE_OutputRTable_0_66, STATE_VARIABLE_OutputRTable_67);
        mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutputR_47, InputR_46, &BornR_48);
        mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), ((MR_Box) (PPId_39)), ((MR_Box) (BornR_48)), STATE_VARIABLE_BornRTable_0_68, STATE_VARIABLE_BornRTable_69);
        mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), InputR_46, OutputR_47, &DeadR_49);
        mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), ((MR_Box) (PPId_39)), ((MR_Box) (DeadR_49)), STATE_VARIABLE_DeadRTable_0_70, STATE_VARIABLE_DeadRTable_71);
        Nodes_50 = transform_hlds__rbmm__points_to_graph__rptg_get_nodes_as_list_1_f_0(Graph_41);
        Var_83 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Nodes_50);
        Var_82 = mercury__set__difference_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_83, InputR_46);
        mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_82, OutputR_47, &LocalR_51);
        mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), ((MR_Box) (PPId_39)), ((MR_Box) (LocalR_51)), STATE_VARIABLE_LocalRTable_0_72, STATE_VARIABLE_LocalRTable_73);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[1]), LVBeforeTable_26, ((MR_Box) (PPId_39)), &conv0_ProcLVBefore_52);
        ProcLVBefore_52 = ((MR_Word) (conv0_ProcLVBefore_52));
        {
          Var_85 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__live_region_analysis_proc_23_p_0_1));
          MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (Graph_41));
          MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (ModuleInfo_24));
          MR_hl_field(MR_mktag(0), Var_85, 5) = ((MR_Box) (ProcInfo_43));
        }
        Var_86 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]));
        mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), Var_85, ProcLVBefore_52, ((MR_Box) (Var_86)), &conv2_ProcLRBefore_53);
        ProcLRBefore_53 = ((MR_Word) (conv2_ProcLRBefore_53));
        mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), ((MR_Box) (PPId_39)), ((MR_Box) (ProcLRBefore_53)), STATE_VARIABLE_LRBeforeTable_0_58, STATE_VARIABLE_LRBeforeTable_59);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[1]), LVAfterTable_27, ((MR_Box) (PPId_39)), &conv3_ProcLVAfter_54);
        ProcLVAfter_54 = ((MR_Word) (conv3_ProcLVAfter_54));
        Var_89 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]));
        mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), Var_85, ProcLVAfter_54, ((MR_Box) (Var_89)), &conv4_ProcLRAfter_55);
        ProcLRAfter_55 = ((MR_Word) (conv4_ProcLRAfter_55));
        mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), ((MR_Box) (PPId_39)), ((MR_Box) (ProcLRAfter_55)), STATE_VARIABLE_LRAfterTable_0_60, STATE_VARIABLE_LRAfterTable_61);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[1]), VoidVarTable_28, ((MR_Box) (PPId_39)), &conv5_ProcVoidVar_56);
        ProcVoidVar_56 = ((MR_Word) (conv5_ProcVoidVar_56));
        Var_92 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]));
        mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), Var_85, ProcVoidVar_56, ((MR_Box) (Var_92)), &conv6_ProcVoidVarRegion_57);
        ProcVoidVarRegion_57 = ((MR_Word) (conv6_ProcVoidVarRegion_57));
        mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_2[0]), ((MR_Box) (PPId_39)), ((MR_Box) (ProcVoidVarRegion_57)), STATE_VARIABLE_VoidVarRegionTable_0_62, STATE_VARIABLE_VoidVarRegionTable_63);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.live_region_analysis.live_region_analysis_proc\'/23", (MR_String) "no rpta_info");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__6_6;

    transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0(
  MR_Word LVSet_6,
  MR_Word Graph_7,
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word * LRSet_10)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]), LVSet_6);
    if (succeeded)
      mercury__set__init_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LRSet_10);
    else
    {
      MR_Word LRSet0_11;
      MR_Word Var_12;
      MR_Box conv1_LRSet_10;

      mercury__set__init_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), &LRSet0_11);
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__rbmm__live_region_analysis_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__rbmm__live_region_analysis__lv_to_lr_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Graph_7));
        MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (ModuleInfo_8));
        MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (ProcInfo_9));
      }
      mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__live_region_analysis_scalar_common_1[0]), Var_12, LVSet_6, ((MR_Box) (LRSet0_11)), &conv1_LRSet_10);
      *LRSet_10 = ((MR_Word) (conv1_LRSet_10));
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

// :- end_module transform_hlds.rbmm.live_region_analysis.
