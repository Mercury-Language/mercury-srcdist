/*
** Automatically generated from `rbmm.execution_path.m'
** by the Mercury compiler,
** version rotd-2022-12-29
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


// :- module transform_hlds.rbmm.execution_path.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__execution_path__init
ENDINIT
*/

#include "transform_hlds.rbmm.execution_path.mih"


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
#include "term_context.mih"
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
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"




static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__execution_path__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__execution_path__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static MR_bool MR_CALL 
transform_hlds__rbmm__execution_path__IntroducedFrom__pred__execution_paths_covered_cases__215__1_2_p_0(
  MR_Word OtherConsIds_15,
  MR_Word HeadVar__2_54);

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ExecPathTable_0_13,
  MR_Word * STATE_VARIABLE_ExecPathTable_14);

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(
  MR_Word tscc_proc_1_input_1_Goal_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ExecPaths_25);

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_109_112_111_117_110_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(
  MR_Word tscc_proc_2_input_1_CompoundGoal_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_ExecPaths_0_52,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ExecPaths_25);

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_110_106_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ExecPaths_0_3,
  MR_Word * STATE_VARIABLE_ExecPaths_4);

static MR_bool MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word Switch_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ExecPaths_0_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_100_105_115_106_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ExecPaths_0_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Extensions_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__rbmm__execution_path__extend_exectution_path_3_p_0(
  MR_Word ExecPath_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ExecPathTable_0_10,
  MR_Word * STATE_VARIABLE_ExecPathTable_11);

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_1[2][3];

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_2[4][2];

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_3[1][7];

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_4[1][8];

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_5[1][5];




static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_2[1]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_2[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__execution_path__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__execution_path__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__execution_path__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__execution_path__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__execution_path__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
  }
};

static MR_bool MR_CALL 
transform_hlds__rbmm__execution_path__IntroducedFrom__pred__execution_paths_covered_cases__215__1_2_p_0(
  MR_Word OtherConsIds_15,
  MR_Word HeadVar__2_54)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__execution_path_scalar_common_2[2]), ((MR_Box) (OtherConsIds_15)), ((MR_Box) (HeadVar__2_54)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ExecPathTable_0_13,
  MR_Word * STATE_VARIABLE_ExecPathTable_14)
{
  MR_bool succeeded;
  MR_Word PPId_10;
  MR_Word Var_15;

  {
    PPId_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PPId_10, 0) = ((MR_Box) (PredId_7));
    MR_hl_field(0, PPId_10, 1) = ((MR_Box) (ProcId_8));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (PPId_10));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_15, ModuleInfo_6);
  if (succeeded)
    *STATE_VARIABLE_ExecPathTable_14 = STATE_VARIABLE_ExecPathTable_0_13;
  else
  {
    MR_Word ProcInfo_11;
    MR_Word ExecPaths_12;
    MR_Word ProcInfo_19;
    MR_Word Goal_20;

    hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_6, PPId_10, &ProcInfo_11);
    hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(ModuleInfo_6, ProcInfo_11, &ProcInfo_19);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_19, &Goal_20);
    transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(Goal_20, (MR_Word) (MR_mkword(1, &transform_hlds__rbmm__execution_path_scalar_common_2[3])), &ExecPaths_12);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__execution_path_scalar_common_2[1]), ((MR_Box) (PPId_10)), ((MR_Box) (ExecPaths_12)), STATE_VARIABLE_ExecPathTable_0_13, STATE_VARIABLE_ExecPathTable_14);
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(
  MR_Word tscc_proc_1_input_1_Goal_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ExecPaths_25)
{
  MR_Word tscc_proc_2_input_1_CompoundGoal_6;
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_ExecPaths_0_52;
  MR_Word tscc_output_1_STATE_VARIABLE_ExecPaths_25;

  // The code for TSCC PROC 1: pred transform_hlds.rbmm.execution_path.UnusedArgs__pred__execution_paths_covered_goal__[1]_0/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred transform_hlds.rbmm.execution_path.UnusedArgs__pred__execution_paths_covered_goal__[1]_0/4-0
  ;
  // proc 2 in TSCC: pred transform_hlds.rbmm.execution_path.UnusedArgs__pred__execution_paths_covered_compound_goal__[1]_0/4-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Goal_6 = tscc_proc_1_input_1_Goal_6;
    MR_Word STATE_VARIABLE_ExecPaths_0_24 = tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24;
    MR_Word STATE_VARIABLE_ExecPaths_25;
    MR_bool succeeded;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 1))));
    MR_Word HasSubGoals_10;

    HasSubGoals_10 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr_8);
    switch (HasSubGoals_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          switch (MR_tag((MR_Word) GoalExpr_8)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));

                    succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

                    succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                  break;
              }
              break;
          }
          if (succeeded)
          {
            MR_Word ProgPoint_23;
            MR_Word Var_28;
            MR_Word Var_30;
            MR_Word Var_31;

            ProgPoint_23 = transform_hlds__smm_common__program_point_init_1_f_0(GoalInfo_9);
            Var_31 = mercury__pair__pair_2_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (ProgPoint_23)), ((MR_Box) (Goal_6)));
            {
              Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
              MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_30));
              MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(STATE_VARIABLE_ExecPaths_0_24, Var_28, &STATE_VARIABLE_ExecPaths_25);
          }
          else
            transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(STATE_VARIABLE_ExecPaths_0_24, (MR_Word) (MR_mkword(1, &transform_hlds__rbmm__execution_path_scalar_common_2[3])), &STATE_VARIABLE_ExecPaths_25);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_CompoundGoal_6 = Goal_6;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ExecPaths_0_52 = STATE_VARIABLE_ExecPaths_0_24;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_CompoundGoal_6 = next_value_of_tscc_proc_2_input_1_CompoundGoal_6;
          tscc_proc_2_input_2_STATE_VARIABLE_ExecPaths_0_52 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ExecPaths_0_52;
          goto top_of_proc_2;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_ExecPaths_25 = STATE_VARIABLE_ExecPaths_25;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word CompoundGoal_6 = tscc_proc_2_input_1_CompoundGoal_6;
    MR_Word STATE_VARIABLE_ExecPaths_0_52 = tscc_proc_2_input_2_STATE_VARIABLE_ExecPaths_0_52;
    MR_Word STATE_VARIABLE_ExecPaths_53;
    MR_Word Expr_8 = ((MR_Word) ((MR_hl_field(0, CompoundGoal_6, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) Expr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal_18 = (MR_Word) ((MR_Word) (Expr_8));
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_18;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24 = STATE_VARIABLE_ExecPaths_0_52;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
          tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Expr_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_86 = ((MR_Word) ((MR_hl_field(3, Expr_8, (MR_Integer) 2))));

              if ((Var_86 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
                  return;
                }
              else
              {
                MR_Word Conj_93 = ((MR_Word) ((MR_hl_field(1, Var_86, (MR_Integer) 0))));
                MR_Word Conjs_94 = ((MR_Word) ((MR_hl_field(1, Var_86, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_ExecPaths_15_97;

                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(Conj_93, STATE_VARIABLE_ExecPaths_0_52, &STATE_VARIABLE_ExecPaths_15_97);
                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_110_106_95_95_91_49_93_95_48_4_p_0(Conjs_94, STATE_VARIABLE_ExecPaths_15_97, &STATE_VARIABLE_ExecPaths_53);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_88 = ((MR_Word) ((MR_hl_field(3, Expr_8, (MR_Integer) 1))));

              if ((Var_88 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
                  return;
                }
              else
              {
                MR_Word Disj_101 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 0))));
                MR_Word Disjs_102 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 1))));
                MR_Word ExecPathsDisj_103;
                MR_Word ExecPathsDisjs_104;

                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(Disj_101, STATE_VARIABLE_ExecPaths_0_52, &ExecPathsDisj_103);
                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_100_105_115_106_95_95_91_49_93_95_48_4_p_0(Disjs_102, STATE_VARIABLE_ExecPaths_0_52, &ExecPathsDisjs_104);
                STATE_VARIABLE_ExecPaths_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__execution_path_scalar_common_2[0]), ExecPathsDisj_103, ExecPathsDisjs_104);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_15 = ((MR_Word) ((MR_hl_field(3, Expr_8, (MR_Integer) 3))));

              transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(CompoundGoal_6, Cases_15, STATE_VARIABLE_ExecPaths_0_52, &STATE_VARIABLE_ExecPaths_53);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Goal_68 = ((MR_Word) ((MR_hl_field(3, Expr_8, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_68;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24 = STATE_VARIABLE_ExecPaths_0_52;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
              tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_21 = ((MR_Word) ((MR_hl_field(3, Expr_8, (MR_Integer) 2))));
              MR_Word Then_22 = ((MR_Word) ((MR_hl_field(3, Expr_8, (MR_Integer) 3))));
              MR_Word Else_23 = ((MR_Word) ((MR_hl_field(3, Expr_8, (MR_Integer) 4))));
              MR_Word ExecPathsCond_24;
              MR_Word ExecPathsCondThen_25;
              MR_Word ExecPathsElse_26;

              transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(Cond_21, STATE_VARIABLE_ExecPaths_0_52, &ExecPathsCond_24);
              transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(Then_22, ExecPathsCond_24, &ExecPathsCondThen_25);
              transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(Else_23, STATE_VARIABLE_ExecPaths_0_52, &ExecPathsElse_26);
              STATE_VARIABLE_ExecPaths_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__execution_path_scalar_common_2[0]), ExecPathsCondThen_25, ExecPathsElse_26);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
              return;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_ExecPaths_25 = STATE_VARIABLE_ExecPaths_53;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_ExecPaths_25 = tscc_output_1_STATE_VARIABLE_ExecPaths_25;
  return;
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_109_112_111_117_110_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(
  MR_Word tscc_proc_2_input_1_CompoundGoal_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_ExecPaths_0_52,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ExecPaths_25)
{
  MR_Word tscc_proc_1_input_1_Goal_6;
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24;
  MR_Word tscc_output_1_STATE_VARIABLE_ExecPaths_25;

  // The code for TSCC PROC 2: pred transform_hlds.rbmm.execution_path.UnusedArgs__pred__execution_paths_covered_compound_goal__[1]_0/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred transform_hlds.rbmm.execution_path.UnusedArgs__pred__execution_paths_covered_goal__[1]_0/4-0
  ;
  // proc 2 in TSCC: pred transform_hlds.rbmm.execution_path.UnusedArgs__pred__execution_paths_covered_compound_goal__[1]_0/4-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Goal_6 = tscc_proc_1_input_1_Goal_6;
    MR_Word STATE_VARIABLE_ExecPaths_0_24 = tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24;
    MR_Word STATE_VARIABLE_ExecPaths_25;
    MR_bool succeeded;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 1))));
    MR_Word HasSubGoals_10;

    HasSubGoals_10 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr_8);
    switch (HasSubGoals_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          switch (MR_tag((MR_Word) GoalExpr_8)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));

                    succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

                    succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                  break;
              }
              break;
          }
          if (succeeded)
          {
            MR_Word ProgPoint_23;
            MR_Word Var_28;
            MR_Word Var_30;
            MR_Word Var_31;

            ProgPoint_23 = transform_hlds__smm_common__program_point_init_1_f_0(GoalInfo_9);
            Var_31 = mercury__pair__pair_2_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (ProgPoint_23)), ((MR_Box) (Goal_6)));
            {
              Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
              MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_30));
              MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(STATE_VARIABLE_ExecPaths_0_24, Var_28, &STATE_VARIABLE_ExecPaths_25);
          }
          else
            transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(STATE_VARIABLE_ExecPaths_0_24, (MR_Word) (MR_mkword(1, &transform_hlds__rbmm__execution_path_scalar_common_2[3])), &STATE_VARIABLE_ExecPaths_25);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_CompoundGoal_6 = Goal_6;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ExecPaths_0_52 = STATE_VARIABLE_ExecPaths_0_24;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_CompoundGoal_6 = next_value_of_tscc_proc_2_input_1_CompoundGoal_6;
          tscc_proc_2_input_2_STATE_VARIABLE_ExecPaths_0_52 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ExecPaths_0_52;
          goto top_of_proc_2;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_ExecPaths_25 = STATE_VARIABLE_ExecPaths_25;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word CompoundGoal_6 = tscc_proc_2_input_1_CompoundGoal_6;
    MR_Word STATE_VARIABLE_ExecPaths_0_52 = tscc_proc_2_input_2_STATE_VARIABLE_ExecPaths_0_52;
    MR_Word STATE_VARIABLE_ExecPaths_53;
    MR_Word Expr_8 = ((MR_Word) ((MR_hl_field(0, CompoundGoal_6, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) Expr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal_18 = (MR_Word) ((MR_Word) (Expr_8));
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_18;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24 = STATE_VARIABLE_ExecPaths_0_52;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
          tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Expr_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_86 = ((MR_Word) ((MR_hl_field(3, Expr_8, (MR_Integer) 2))));

              if ((Var_86 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
                  return;
                }
              else
              {
                MR_Word Conj_93 = ((MR_Word) ((MR_hl_field(1, Var_86, (MR_Integer) 0))));
                MR_Word Conjs_94 = ((MR_Word) ((MR_hl_field(1, Var_86, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_ExecPaths_15_97;

                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(Conj_93, STATE_VARIABLE_ExecPaths_0_52, &STATE_VARIABLE_ExecPaths_15_97);
                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_110_106_95_95_91_49_93_95_48_4_p_0(Conjs_94, STATE_VARIABLE_ExecPaths_15_97, &STATE_VARIABLE_ExecPaths_53);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_88 = ((MR_Word) ((MR_hl_field(3, Expr_8, (MR_Integer) 1))));

              if ((Var_88 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
                  return;
                }
              else
              {
                MR_Word Disj_101 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 0))));
                MR_Word Disjs_102 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 1))));
                MR_Word ExecPathsDisj_103;
                MR_Word ExecPathsDisjs_104;

                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(Disj_101, STATE_VARIABLE_ExecPaths_0_52, &ExecPathsDisj_103);
                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_100_105_115_106_95_95_91_49_93_95_48_4_p_0(Disjs_102, STATE_VARIABLE_ExecPaths_0_52, &ExecPathsDisjs_104);
                STATE_VARIABLE_ExecPaths_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__execution_path_scalar_common_2[0]), ExecPathsDisj_103, ExecPathsDisjs_104);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_15 = ((MR_Word) ((MR_hl_field(3, Expr_8, (MR_Integer) 3))));

              transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(CompoundGoal_6, Cases_15, STATE_VARIABLE_ExecPaths_0_52, &STATE_VARIABLE_ExecPaths_53);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Goal_68 = ((MR_Word) ((MR_hl_field(3, Expr_8, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_68;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24 = STATE_VARIABLE_ExecPaths_0_52;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
              tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ExecPaths_0_24;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_21 = ((MR_Word) ((MR_hl_field(3, Expr_8, (MR_Integer) 2))));
              MR_Word Then_22 = ((MR_Word) ((MR_hl_field(3, Expr_8, (MR_Integer) 3))));
              MR_Word Else_23 = ((MR_Word) ((MR_hl_field(3, Expr_8, (MR_Integer) 4))));
              MR_Word ExecPathsCond_24;
              MR_Word ExecPathsCondThen_25;
              MR_Word ExecPathsElse_26;

              transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(Cond_21, STATE_VARIABLE_ExecPaths_0_52, &ExecPathsCond_24);
              transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(Then_22, ExecPathsCond_24, &ExecPathsCondThen_25);
              transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(Else_23, STATE_VARIABLE_ExecPaths_0_52, &ExecPathsElse_26);
              STATE_VARIABLE_ExecPaths_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__execution_path_scalar_common_2[0]), ExecPathsCondThen_25, ExecPathsElse_26);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
              return;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_ExecPaths_25 = STATE_VARIABLE_ExecPaths_53;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_ExecPaths_25 = tscc_output_1_STATE_VARIABLE_ExecPaths_25;
  return;
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_110_106_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ExecPaths_0_3,
  MR_Word * STATE_VARIABLE_ExecPaths_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ExecPaths_4 = STATE_VARIABLE_ExecPaths_0_3;
    else
    {
      MR_Word Conj_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Conjs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ExecPaths_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ExecPaths_0_3;

      transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(Conj_10, STATE_VARIABLE_ExecPaths_0_3, &STATE_VARIABLE_ExecPaths_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Conjs_11;
      next_value_of_STATE_VARIABLE_ExecPaths_0_3 = STATE_VARIABLE_ExecPaths_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ExecPaths_0_3 = next_value_of_STATE_VARIABLE_ExecPaths_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__rbmm__execution_path__IntroducedFrom__pred__execution_paths_covered_cases__215__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word Switch_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ExecPaths_0_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Case_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word MainConsId_14 = ((MR_Word) ((MR_hl_field(0, Case_11, (MR_Integer) 0))));
    MR_Word OtherConsIds_15 = ((MR_Word) ((MR_hl_field(0, Case_11, (MR_Integer) 1))));
    MR_Word CaseGoal_16 = ((MR_Word) ((MR_hl_field(0, Case_11, (MR_Integer) 2))));
    MR_Word Info_18;
    MR_Word ProgPoint_19;
    MR_Word ExecPathsBeforeCase_23;
    MR_Word ExecPathsCase_47;
    MR_Word ExecPathsCases_48;
    MR_Word Var_51;

    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_5[0]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0_1));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) (OtherConsIds_15));
      MR_hl_field(0, Var_51, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_51, (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_cases\'/5", (MR_String) "NYI: multi-cons-id cases");
    Info_18 = ((MR_Word) ((MR_hl_field(0, Switch_2, (MR_Integer) 1))));
    ProgPoint_19 = transform_hlds__smm_common__program_point_init_1_f_0(Info_18);
    switch (MR_tag((MR_Word) MainConsId_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_cases\'/5", (MR_String) "unexpected cons_id");
          return;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_cases\'/5", (MR_String) "unexpected cons_id");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, MainConsId_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_cases\'/5", (MR_String) "unexpected cons_id");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(3, MainConsId_14, (MR_Integer) 2))));

              succeeded = (Arity_21 == (MR_Integer) 0);
              if (succeeded)
              {
                MR_Word Var_55;
                MR_Word Var_56;
                MR_Word Var_57;

                Var_57 = mercury__pair__pair_2_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (ProgPoint_19)), ((MR_Box) (Switch_2)));
                {
                  Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
                  MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
                  MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(STATE_VARIABLE_ExecPaths_0_4, Var_55, &ExecPathsBeforeCase_23);
              }
              else
                ExecPathsBeforeCase_23 = STATE_VARIABLE_ExecPaths_0_4;
            }
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word Var_62;

              Var_62 = mercury__pair__pair_2_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (ProgPoint_19)), ((MR_Box) (Switch_2)));
              {
                Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
                MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
                MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(STATE_VARIABLE_ExecPaths_0_4, Var_60, &ExecPathsBeforeCase_23);
            }
            break;
        }
        break;
    }
    transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(CaseGoal_16, ExecPathsBeforeCase_23, &ExecPathsCase_47);
    transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(Switch_2, Cases_12, STATE_VARIABLE_ExecPaths_0_4, &ExecPathsCases_48);
    *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__execution_path_scalar_common_2[0]), ExecPathsCase_47, ExecPathsCases_48);
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_100_105_115_106_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ExecPaths_0_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Disj_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Disjs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ExecPathsDisj_11;
    MR_Word ExecPathsDisjs_12;

    transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(Disj_8, STATE_VARIABLE_ExecPaths_0_3, &ExecPathsDisj_11);
    transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_100_105_115_106_95_95_91_49_93_95_48_4_p_0(Disjs_9, STATE_VARIABLE_ExecPaths_0_3, &ExecPathsDisjs_12);
    *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__execution_path_scalar_common_2[0]), ExecPathsDisj_11, ExecPathsDisjs_12);
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Extensions_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ExecPath_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ExecPaths_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ExtendedExecPaths0_9;
    MR_Word ExtendedExecPaths1_10;

    transform_hlds__rbmm__execution_path__extend_exectution_path_3_p_0(ExecPath_5, Extensions_2, &ExtendedExecPaths0_9);
    transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(ExecPaths_6, Extensions_2, &ExtendedExecPaths1_10);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__execution_path_scalar_common_2[0]), ExtendedExecPaths0_9, ExtendedExecPaths1_10);
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__extend_exectution_path_3_p_0(
  MR_Word ExecPath_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Extension_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Extensions_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ExtendedExecPath_9;
    MR_Word ExtendedExecPaths0_10;

    ExtendedExecPath_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__execution_path_scalar_common_1[0]), ExecPath_1, Extension_6);
    transform_hlds__rbmm__execution_path__extend_exectution_path_3_p_0(ExecPath_1, Extensions_7, &ExtendedExecPaths0_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ExtendedExecPath_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (ExtendedExecPaths0_10));
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ExecPathTable_14;

  transform_hlds__rbmm__execution_path__execution_path_analysis_proc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ExecPathTable_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ExecPathTable_14));
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ExecPathTable_0_10,
  MR_Word * STATE_VARIABLE_ExecPathTable_11)
{
  MR_Word PredInfo_8;
  MR_Word ProcIds_9;
  MR_Word Var_12;
  MR_Box conv1_STATE_VARIABLE_ExecPathTable_11;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_8);
  ProcIds_9 = hlds__hlds_pred__pred_info_valid_non_imported_procids_1_f_0(PredInfo_8);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_4[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (PredId_6));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__rbmm__execution_path_scalar_common_1[1]), Var_12, ProcIds_9, ((MR_Box) (STATE_VARIABLE_ExecPathTable_0_10)), &conv1_STATE_VARIABLE_ExecPathTable_11);
  *STATE_VARIABLE_ExecPathTable_11 = ((MR_Word) (conv1_STATE_VARIABLE_ExecPathTable_11));
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ExecPathTable_11;

  transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ExecPathTable_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ExecPathTable_11));
}

void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * ExecPathTable_4)
{
  MR_Word PredIds_5;
  MR_Word ExecPathTable0_6;
  MR_Word Var_7;
  MR_Box conv1_ExecPathTable_4;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_3, &PredIds_5);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__execution_path_scalar_common_2[1]), &ExecPathTable0_6);
  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_3[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (ModuleInfo_3));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__rbmm__execution_path_scalar_common_1[1]), Var_7, PredIds_5, ((MR_Box) (ExecPathTable0_6)), &conv1_ExecPathTable_4);
  *ExecPathTable_4 = ((MR_Word) (conv1_ExecPathTable_4));
}

void mercury__transform_hlds__rbmm__execution_path__init(void)
{
}

void mercury__transform_hlds__rbmm__execution_path__init_type_tables(void)
{
}

void mercury__transform_hlds__rbmm__execution_path__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__execution_path__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.rbmm.execution_path.
