/*
** Automatically generated from `simplify_proc.m'
** by the Mercury compiler,
** version rotd-2023-07-10
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


// :- module check_hlds.simplify.simplify_proc.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_proc__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_proc.mih"


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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "check_hlds.simplify.mih"
#include "hlds.code_model.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.direct_arg_in_out.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.format_call.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__292__1_4_p_0(
  MR_Word LambdaHeadVar__1_70,
  MR_String LambdaHeadVar__2_71,
  MR_Word LambdaHeadVar__3_72,
  MR_Word * LambdaHeadVar__4_73);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(
  MR_Word SimplifyTasks0_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word STATE_VARIABLE_ModuleInfo_0_54,
  MR_Word * STATE_VARIABLE_ModuleInfo_55,
  MR_Word STATE_VARIABLE_ProcInfo_0_56,
  MR_Word * STATE_VARIABLE_ProcInfo_57,
  MR_Word * STATE_VARIABLE_Specs_58);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Word NestedContext0_8,
  MR_Word InstMap0_9,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4);

static void MR_CALL 
check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4);

static void MR_CALL 
check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(
  MR_Word Goal0_4,
  MR_Word * Goal_5,
  MR_Word * ContainsTrace_6);

static void MR_CALL 
check_hlds__simplify__simplify_proc__do_simplify_top_level_goal_6_p_0(
  MR_Word STATE_VARIABLE_Goal_0_16,
  MR_Word * STATE_VARIABLE_Goal_17,
  MR_Word NestedContext0_8,
  MR_Word InstMap0_9,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_attribute_conflict_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_9_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word PredId_11,
  MR_Word PredInfo0_12,
  MR_Integer ProcId_13,
  MR_Word STATE_VARIABLE_ProcInfo_0_28,
  MR_Word * STATE_VARIABLE_ProcInfo_29,
  MR_Word ImplicitStreamWarnings_15,
  MR_Word * FormatSpecs_16);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_SimplifyTasks_0_18,
  MR_Word * STATE_VARIABLE_SimplifyTasks_19);


static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_1[21][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_5[1][7];




static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_1[21][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "pragma on the predicate."))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "no_inline"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[3])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "attribute on the foreign_proc contradicts the"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "may_duplicate"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[3])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "may_not_duplicate"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "may_export_body"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[7])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_proc_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[19])))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_2[3][3] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_4[0])),
    ((MR_Box) (check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_5[0])),
    ((MR_Box) (check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static void MR_CALL 
check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__292__1_4_p_0(
  MR_Word LambdaHeadVar__1_70,
  MR_String LambdaHeadVar__2_71,
  MR_Word LambdaHeadVar__3_72,
  MR_Word * LambdaHeadVar__4_73)
{
  MR_Word E0_42;
  MR_Word E_43;
  MR_Word Var_145;
  MR_Word Var_146;

  parse_tree__var_table__lookup_var_entry_3_p_0(LambdaHeadVar__3_72, LambdaHeadVar__1_70, &E0_42);
  Var_145 = ((MR_Word) ((MR_hl_field(0, E0_42, (MR_Integer) 1))));
  Var_146 = ((MR_Unsigned) ((MR_hl_field(0, E0_42, (MR_Integer) 2))) & (MR_Integer) 1);
  {
    E_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, E_43, 0) = ((MR_Box) (LambdaHeadVar__2_71));
    MR_hl_field(0, E_43, 1) = ((MR_Box) (Var_145));
    MR_hl_field(0, E_43, 2) = (MR_Box) ((MR_Unsigned) (Var_146));
  }
  parse_tree__var_table__update_var_entry_4_p_0(LambdaHeadVar__1_70, E_43, LambdaHeadVar__3_72, LambdaHeadVar__4_73);
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_goal_update_vars_in_proc_11_p_0(
  MR_Word SimplifyTasks_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word STATE_VARIABLE_ProcInfo_0_30,
  MR_Word * STATE_VARIABLE_ProcInfo_31,
  MR_Word InstMap0_17,
  MR_Word STATE_VARIABLE_Goal_0_32,
  MR_Word * STATE_VARIABLE_Goal_33,
  MR_Integer * CostDelta_19)
{
  MR_Word SimplifyInfo0_20;
  MR_Word SimplifyInfo_25;
  MR_Word VarTable_26;
  MR_Word RttiVarMaps_27;
  MR_Word STATE_VARIABLE_ProcInfo_36_36;

  check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_0_28, PredId_14, ProcId_15, STATE_VARIABLE_ProcInfo_0_30, SimplifyTasks_12, &SimplifyInfo0_20);
  check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(STATE_VARIABLE_Goal_0_32, STATE_VARIABLE_Goal_33, (MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_2[0]), InstMap0_17, SimplifyInfo0_20, &SimplifyInfo_25);
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(SimplifyInfo_25, STATE_VARIABLE_ModuleInfo_29);
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(SimplifyInfo_25, &VarTable_26);
  check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(SimplifyInfo_25, &RttiVarMaps_27);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_26, STATE_VARIABLE_ProcInfo_0_30, &STATE_VARIABLE_ProcInfo_36_36);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_27, STATE_VARIABLE_ProcInfo_36_36, STATE_VARIABLE_ProcInfo_31);
  check_hlds__simplify__simplify_info__simplify_info_get_cost_delta_2_p_0(SimplifyInfo_25, CostDelta_19);
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_8_p_0(
  MR_Word MaybeProgressStream_9,
  MR_Word SimplifyTasks_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_ProcInfo_0_20,
  MR_Word * STATE_VARIABLE_ProcInfo_21)
{
  MR_Word Var_17;

  if (!((MaybeProgressStream_9 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ProgressStream_16 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_9, (MR_Integer) 0))));

    hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(ProgressStream_16, STATE_VARIABLE_ModuleInfo_0_18, (MR_String) "Simplifying", PredId_11);
  }
  check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(SimplifyTasks_10, PredId_11, ProcId_12, STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ProcInfo_0_20, STATE_VARIABLE_ProcInfo_21, &Var_17);
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_pred_procs_10_p_0(
  MR_Word MaybeProgressStream_1,
  MR_Word SimplifyTasks_2,
  MR_Word PredId_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6,
  MR_Word STATE_VARIABLE_PredInfo_0_7,
  MR_Word * STATE_VARIABLE_PredInfo_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  check_hlds__simplify__simplify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_112_114_101_100_95_112_114_111_99_115_95_95_91_49_93_95_48_10_p_0(SimplifyTasks_2, PredId_3, HeadVar__4_4, STATE_VARIABLE_ModuleInfo_0_5, STATE_VARIABLE_ModuleInfo_6, STATE_VARIABLE_PredInfo_0_7, STATE_VARIABLE_PredInfo_8, STATE_VARIABLE_Specs_0_9, STATE_VARIABLE_Specs_10);
}

void MR_CALL 
check_hlds__simplify__simplify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_112_114_101_100_95_112_114_111_99_115_95_95_91_49_93_95_48_10_p_0(
  MR_Word SimplifyTasks_2,
  MR_Word PredId_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6,
  MR_Word STATE_VARIABLE_PredInfo_0_7,
  MR_Word * STATE_VARIABLE_PredInfo_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
      *STATE_VARIABLE_PredInfo_8 = STATE_VARIABLE_PredInfo_0_7;
      *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
    }
    else
    {
      MR_Integer ProcId_26 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ProcIds_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_37_37;
      MR_Word STATE_VARIABLE_PredInfo_38_38;
      MR_Word STATE_VARIABLE_Specs_39_39;
      MR_Word ProcTable0_40;
      MR_Word ProcInfo0_41;
      MR_Word ProcInfo_42;
      MR_Word ProcSpecs_43;
      MR_Word HasParallelConj_44;
      MR_Word HasUserEvent_45;
      MR_Word ProcTable_46;
      MR_Word STATE_VARIABLE_ModuleInfo_31_47;
      MR_Word STATE_VARIABLE_ModuleInfo_32_48;
      MR_Box conv0_ProcInfo0_41;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_PredInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_7, &ProcTable0_40);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_40, ((MR_Box) (ProcId_26)), &conv0_ProcInfo0_41);
      ProcInfo0_41 = ((MR_Word) (conv0_ProcInfo0_41));
      check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(SimplifyTasks_2, PredId_3, ProcId_26, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_31_47, ProcInfo0_41, &ProcInfo_42, &ProcSpecs_43);
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_42, &HasParallelConj_44);
      switch (HasParallelConj_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_ModuleInfo_32_48 = STATE_VARIABLE_ModuleInfo_31_47;
          break;
        case (MR_Integer) 0:
          hlds__hlds_module__module_info_set_has_parallel_conj_2_p_0(STATE_VARIABLE_ModuleInfo_31_47, &STATE_VARIABLE_ModuleInfo_32_48);
          break;
      }
      hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(ProcInfo_42, &HasUserEvent_45);
      switch (HasUserEvent_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_ModuleInfo_37_37 = STATE_VARIABLE_ModuleInfo_32_48;
          break;
        case (MR_Integer) 0:
          hlds__hlds_module__module_info_set_has_user_event_2_p_0(STATE_VARIABLE_ModuleInfo_32_48, &STATE_VARIABLE_ModuleInfo_37_37);
          break;
      }
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_26)), ((MR_Box) (ProcInfo_42)), ProcTable0_40, &ProcTable_46);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_46, STATE_VARIABLE_PredInfo_0_7, &STATE_VARIABLE_PredInfo_38_38);
      parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(ProcSpecs_43, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_39_39);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ProcIds_27;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_5 = STATE_VARIABLE_ModuleInfo_37_37;
      next_value_of_STATE_VARIABLE_PredInfo_0_7 = STATE_VARIABLE_PredInfo_38_38;
      next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_39_39;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_ModuleInfo_0_5 = next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
      STATE_VARIABLE_PredInfo_0_7 = next_value_of_STATE_VARIABLE_PredInfo_0_7;
      STATE_VARIABLE_Specs_0_9 = next_value_of_STATE_VARIABLE_Specs_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__4_73;

  check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__292__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_73);
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_73));
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(
  MR_Word SimplifyTasks0_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word STATE_VARIABLE_ModuleInfo_0_54,
  MR_Word * STATE_VARIABLE_ModuleInfo_55,
  MR_Word STATE_VARIABLE_ProcInfo_0_56,
  MR_Word * STATE_VARIABLE_ProcInfo_57,
  MR_Word * STATE_VARIABLE_Specs_58)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_15;
  MR_Word PredInfo0_16;
  MR_Word Markers0_17;
  MR_Word FormatSpecs_19;
  MR_Word Info0_20;
  MR_Word CodeModel_23;
  MR_Word ProcIsModelNon_24;
  MR_Word NestedContext0_25;
  MR_Word InstMap0_26;
  MR_Word Goal0_27;
  MR_Word Goal_28;
  MR_Word Info_29;
  MR_Word VarTable0_30;
  MR_Word RttiVarMaps_31;
  MR_Word ElimVarsLists0_32;
  MR_Word ElimVarsLists_33;
  MR_Word ElimVars_34;
  MR_Word VarTable1_35;
  MR_Word VarTable_44;
  MR_Word HasParallelConj_47;
  MR_Word HasUserEvent_48;
  MR_Word CurDeletedCallCallees_49;
  MR_Word DeletedCallCallees0_50;
  MR_Word DeletedCallCallees_51;
  MR_Word Status_52;
  MR_Word IsDefinedHere_53;
  MR_Word STATE_VARIABLE_ProcInfo_60_60;
  MR_Word STATE_VARIABLE_ModuleInfo_65_65;
  MR_Word STATE_VARIABLE_ProcInfo_66_66;
  MR_Word STATE_VARIABLE_ProcInfo_68_68;
  MR_Word STATE_VARIABLE_ModuleInfo_69_69;
  MR_Word STATE_VARIABLE_ProcInfo_75_75;
  MR_Word STATE_VARIABLE_ProcInfo_77_77;
  MR_Word STATE_VARIABLE_ProcInfo_78_78;
  MR_Word STATE_VARIABLE_ProcInfo_79_79;
  MR_Word STATE_VARIABLE_ProcInfo_80_80;
  MR_Word STATE_VARIABLE_Specs_82_82;
  MR_Word STATE_VARIABLE_Specs_83_83;
  MR_Word STATE_VARIABLE_Specs_84_84;
  MR_Word Var_92;
  MR_Word Var_62;

  check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(STATE_VARIABLE_ModuleInfo_0_54, PredId_10, STATE_VARIABLE_ProcInfo_0_56, SimplifyTasks0_9, &SimplifyTasks_15);
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_54, PredId_10, &PredInfo0_16);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_16, &Markers0_17);
  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_17, (MR_Integer) 23);
  if (succeeded)
  {
    MR_Word Goal0_153;
    MR_Word GoalExpr0_154;
    MR_Word GoalInfo0_155;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_56, &Goal0_153);
    GoalExpr0_154 = ((MR_Word) ((MR_hl_field(0, Goal0_153, (MR_Integer) 0))));
    GoalInfo0_155 = ((MR_Word) ((MR_hl_field(0, Goal0_153, (MR_Integer) 1))));
    if (((((MR_tag((MR_Word) GoalExpr0_154)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_154, (MR_Integer) 0)))) == (MR_Integer) 3))))
      succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) GoalExpr0_154)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_154, (MR_Integer) 0)))) == (MR_Integer) 4))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word GoalInfo_160;
      MR_Word Goal_161;

      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 17, GoalInfo0_155, &GoalInfo_160);
      {
        Goal_161 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal_161, 0) = ((MR_Box) (GoalExpr0_154));
        MR_hl_field(0, Goal_161, 1) = ((MR_Box) (GoalInfo_160));
      }
      hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_161, STATE_VARIABLE_ProcInfo_0_56, &STATE_VARIABLE_ProcInfo_60_60);
    }
    else
      STATE_VARIABLE_ProcInfo_60_60 = STATE_VARIABLE_ProcInfo_0_56;
  }
  else
    STATE_VARIABLE_ProcInfo_60_60 = STATE_VARIABLE_ProcInfo_0_56;
  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_17, (MR_Integer) 27);
  if (succeeded)
  {
    Var_92 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks_15, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
    Var_62 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks_15, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
    succeeded = (Var_62 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word ImplicitStreamWarnings_18;

    switch (Var_92) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ImplicitStreamWarnings_18 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ImplicitStreamWarnings_18 = (MR_Integer) 1;
        break;
    }
    check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_9_p_0(STATE_VARIABLE_ModuleInfo_0_54, &STATE_VARIABLE_ModuleInfo_65_65, PredId_10, PredInfo0_16, ProcId_11, STATE_VARIABLE_ProcInfo_60_60, &STATE_VARIABLE_ProcInfo_66_66, ImplicitStreamWarnings_18, &FormatSpecs_19);
  }
  else
  {
    FormatSpecs_19 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ProcInfo_66_66 = STATE_VARIABLE_ProcInfo_60_60;
    STATE_VARIABLE_ModuleInfo_65_65 = STATE_VARIABLE_ModuleInfo_0_54;
  }
  check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_65_65, PredId_10, ProcId_11, STATE_VARIABLE_ProcInfo_66_66, SimplifyTasks_15, &Info0_20);
  CodeModel_23 = hlds__code_model__proc_info_interface_code_model_1_f_0(STATE_VARIABLE_ProcInfo_66_66);
  switch (CodeModel_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      ProcIsModelNon_24 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      ProcIsModelNon_24 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_3[0]));
      break;
  }
  {
    NestedContext0_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NestedContext0_25, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, NestedContext0_25, 1) = ((MR_Box) (ProcIsModelNon_24));
    MR_hl_field(0, NestedContext0_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_65_65, STATE_VARIABLE_ProcInfo_66_66, &InstMap0_26);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_66_66, &Goal0_27);
  check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(Goal0_27, &Goal_28, NestedContext0_25, InstMap0_26, Info0_20, &Info_29);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_28, STATE_VARIABLE_ProcInfo_66_66, &STATE_VARIABLE_ProcInfo_68_68);
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(Info_29, &VarTable0_30);
  check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(Info_29, &RttiVarMaps_31);
  check_hlds__simplify__simplify_info__simplify_info_get_elim_vars_2_p_0(Info_29, &ElimVarsLists0_32);
  mercury__list__sort_2_p_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[1]), ElimVarsLists0_32, &ElimVarsLists_33);
  mercury__list__condense_2_p_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]), ElimVarsLists_33, &ElimVars_34);
  parse_tree__var_table__delete_var_entries_3_p_0(ElimVars_34, VarTable0_30, &VarTable1_35);
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(Info_29, &STATE_VARIABLE_ModuleInfo_69_69);
  succeeded = check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(Info_29);
  if (succeeded)
  {
    MR_Word VarNameRemap_36;
    MR_Word HeadVars_45;
    MR_Word ArgModes_46;
    MR_Word Var_74;
    MR_Box conv1_VarTable_44;

    hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(STATE_VARIABLE_ProcInfo_68_68, &VarNameRemap_36);
    mercury__map__foldl_4_p_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_2[2]), VarNameRemap_36, ((MR_Box) (VarTable1_35)), &conv1_VarTable_44);
    VarTable_44 = ((MR_Word) (conv1_VarTable_44));
    Var_74 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    hlds__hlds_pred__proc_info_set_var_name_remap_3_p_0(Var_74, STATE_VARIABLE_ProcInfo_68_68, &STATE_VARIABLE_ProcInfo_75_75);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_75_75, &HeadVars_45);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_75_75, &ArgModes_46);
    transform_hlds__direct_arg_in_out__find_and_record_any_direct_arg_in_out_posns_7_p_0(PredId_10, ProcId_11, VarTable_44, HeadVars_45, ArgModes_46, STATE_VARIABLE_ModuleInfo_69_69, STATE_VARIABLE_ModuleInfo_55);
  }
  else
  {
    VarTable_44 = VarTable1_35;
    STATE_VARIABLE_ProcInfo_75_75 = STATE_VARIABLE_ProcInfo_68_68;
    *STATE_VARIABLE_ModuleInfo_55 = STATE_VARIABLE_ModuleInfo_69_69;
  }
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_44, STATE_VARIABLE_ProcInfo_75_75, &STATE_VARIABLE_ProcInfo_77_77);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_31, STATE_VARIABLE_ProcInfo_77_77, &STATE_VARIABLE_ProcInfo_78_78);
  check_hlds__simplify__simplify_info__simplify_info_get_has_parallel_conj_2_p_0(Info_29, &HasParallelConj_47);
  hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0(HasParallelConj_47, STATE_VARIABLE_ProcInfo_78_78, &STATE_VARIABLE_ProcInfo_79_79);
  check_hlds__simplify__simplify_info__simplify_info_get_has_user_event_2_p_0(Info_29, &HasUserEvent_48);
  hlds__hlds_pred__proc_info_set_has_user_event_3_p_0(HasUserEvent_48, STATE_VARIABLE_ProcInfo_79_79, &STATE_VARIABLE_ProcInfo_80_80);
  check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(Info_29, &CurDeletedCallCallees_49);
  hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_ProcInfo_80_80, &DeletedCallCallees0_50);
  mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CurDeletedCallCallees_49, DeletedCallCallees0_50, &DeletedCallCallees_51);
  hlds__hlds_pred__proc_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_51, STATE_VARIABLE_ProcInfo_80_80, STATE_VARIABLE_ProcInfo_57);
  check_hlds__simplify__simplify_info__simplify_info_get_error_specs_2_p_0(Info_29, &STATE_VARIABLE_Specs_82_82);
  STATE_VARIABLE_Specs_83_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FormatSpecs_19, STATE_VARIABLE_Specs_82_82);
  check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_attribute_conflict_5_p_0(*STATE_VARIABLE_ModuleInfo_55, PredId_10, *STATE_VARIABLE_ProcInfo_57, STATE_VARIABLE_Specs_83_83, &STATE_VARIABLE_Specs_84_84);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_16, &Status_52);
  IsDefinedHere_53 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_52);
  switch (IsDefinedHere_53) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_58 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_84_84;
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Word NestedContext0_8,
  MR_Word InstMap0_9,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_bool succeeded;
  MR_Word OriginalSimplifyTasks_12;
  MR_Word FoundContainsTrace_13;
  MR_Word STATE_VARIABLE_Goal_28_28;
  MR_Word STATE_VARIABLE_Info_39_39;
  MR_Word STATE_VARIABLE_Goal_40_40;
  MR_Word Var_193;
  MR_Word Var_196;
  MR_Word Var_198;

  check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(STATE_VARIABLE_Info_0_17, &OriginalSimplifyTasks_12);
  Var_198 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_12, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
  Var_196 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_12, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
  Var_193 = ((((MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_12, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
  succeeded = (Var_196 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (Var_193 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (Var_198 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_SimplifyTasks_25_25;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_SimplifyTasks_37_37;
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_12, (MR_Integer) 0)));
    MR_Unsigned packed_word_2;

    {
      STATE_VARIABLE_SimplifyTasks_25_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_25_25, 0) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 10240U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 11)) | (((MR_Unsigned) ((MR_Integer) 0) << 13))))));
    }
    check_hlds__simplify__simplify_info__simplify_info_set_simplify_tasks_3_p_0(STATE_VARIABLE_SimplifyTasks_25_25, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_27_27);
    check_hlds__simplify__simplify_proc__do_simplify_top_level_goal_6_p_0(STATE_VARIABLE_Goal_0_15, &STATE_VARIABLE_Goal_28_28, NestedContext0_8, InstMap0_9, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_29_29);
    check_hlds__simplify__simplify_info__simplify_info_set_allow_messages_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_32_32);
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, OriginalSimplifyTasks_12, (MR_Integer) 0)));
    {
      STATE_VARIABLE_SimplifyTasks_37_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_37_37, 0) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 328U)))) | (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) ((MR_Integer) 1) << 6)) | (((MR_Unsigned) ((MR_Integer) 1) << 8))))))));
    }
    check_hlds__simplify__simplify_info__simplify_info_reinit_3_p_0(STATE_VARIABLE_SimplifyTasks_37_37, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_39_39);
  }
  else
  {
    STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_17;
    STATE_VARIABLE_Goal_28_28 = STATE_VARIABLE_Goal_0_15;
  }
  check_hlds__simplify__simplify_proc__do_simplify_top_level_goal_6_p_0(STATE_VARIABLE_Goal_28_28, &STATE_VARIABLE_Goal_40_40, NestedContext0_8, InstMap0_9, STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Info_18);
  check_hlds__simplify__simplify_info__simplify_info_get_found_contains_trace_2_p_0(*STATE_VARIABLE_Info_18, &FoundContainsTrace_13);
  switch (FoundContainsTrace_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Goal_16 = STATE_VARIABLE_Goal_40_40;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_14;

        check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(STATE_VARIABLE_Goal_40_40, STATE_VARIABLE_Goal_16, &Var_14);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ContainsTrace_4 = STATE_VARIABLE_ContainsTrace_0_3;
  }
  else
  {
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_8, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_8, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_8, (MR_Integer) 2))));
    MR_Word Goal_16;
    MR_Word GoalContainsTrace_17;
    MR_Word STATE_VARIABLE_ContainsTrace_20_20;

    check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(Goal0_15, &Goal_16, &GoalContainsTrace_17);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_10, 2) = ((MR_Box) (Goal_16));
    }
    STATE_VARIABLE_ContainsTrace_20_20 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_17, STATE_VARIABLE_ContainsTrace_0_3);
    check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_cases_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_ContainsTrace_20_20, STATE_VARIABLE_ContainsTrace_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_11));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ContainsTrace_4 = STATE_VARIABLE_ContainsTrace_0_3;
  }
  else
  {
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word GoalContainsTrace_13;
    MR_Word STATE_VARIABLE_ContainsTrace_16_16;

    check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(Goal0_8, &Goal_10, &GoalContainsTrace_13);
    STATE_VARIABLE_ContainsTrace_16_16 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_13, STATE_VARIABLE_ContainsTrace_0_3);
    check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goals_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_ContainsTrace_16_16, STATE_VARIABLE_ContainsTrace_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_11));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(
  MR_Word Goal0_4,
  MR_Word * Goal_5,
  MR_Word * ContainsTrace_6)
{
  MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(0, Goal0_4, (MR_Integer) 0))));
  MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_4, (MR_Integer) 1))));
  MR_Word GoalExpr_32;
  MR_Word GoalInfo_95;

  switch (MR_tag((MR_Word) GoalExpr0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_51 = (MR_Word) ((MR_Word) (GoalExpr0_7));
        MR_Word SubGoal_52;

        check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(SubGoal0_51, &SubGoal_52, ContainsTrace_6);
        GoalExpr_32 = (MR_Word) ((MR_Word) (SubGoal_52));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        GoalExpr_32 = GoalExpr0_7;
        *ContainsTrace_6 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            GoalExpr_32 = GoalExpr0_7;
            *ContainsTrace_6 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word SubGoals0_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word SubGoals_36;

            check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goals_4_p_0(SubGoals0_34, &SubGoals_36, (MR_Integer) 1, ContainsTrace_6);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_32, 1) = (MR_Box) ((MR_Unsigned) (ConjType_33));
              MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (SubGoals_36));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals0_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word SubGoals_103;

            check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goals_4_p_0(SubGoals0_101, &SubGoals_103, (MR_Integer) 1, ContainsTrace_6);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (SubGoals_103));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word CanFail_38 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 3))));
            MR_Word Cases_40;

            check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_cases_4_p_0(Cases0_39, &Cases_40, (MR_Integer) 1, ContainsTrace_6);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (SwitchVar_37));
              MR_hl_field(3, GoalExpr_32, 2) = (MR_Box) ((MR_Unsigned) (CanFail_38));
              MR_hl_field(3, GoalExpr_32, 3) = ((MR_Box) (Cases_40));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_105 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word SubGoal_106;

            switch (MR_tag((MR_Word) Reason_53)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(SubGoal0_105, &SubGoal_106, ContainsTrace_6);
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_53, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 8:
                    check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(SubGoal0_105, &SubGoal_106, ContainsTrace_6);
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word FGT_60 = ((MR_Unsigned) ((MR_hl_field(3, Reason_53, (MR_Integer) 2))) & (MR_Integer) 3);

                      switch (FGT_60) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                        case (MR_Integer) 2:
                          {
                            SubGoal_106 = SubGoal0_105;
                            *ContainsTrace_6 = (MR_Integer) 1;
                          }
                          break;
                        case (MR_Integer) 0:
                        case (MR_Integer) 3:
                          check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(SubGoal0_105, &SubGoal_106, ContainsTrace_6);
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      SubGoal_106 = SubGoal0_105;
                      *ContainsTrace_6 = (MR_Integer) 0;
                    }
                    break;
                }
                break;
            }
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Reason_53));
              MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (SubGoal_106));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Cond0_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word Then0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 3))));
            MR_Word Else0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 4))));
            MR_Word Cond_45;
            MR_Word CondContainsTrace_46;
            MR_Word Then_47;
            MR_Word ThenContainsTrace_48;
            MR_Word Else_49;
            MR_Word ElseContainsTrace_50;
            MR_Word Var_96;

            check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(Cond0_42, &Cond_45, &CondContainsTrace_46);
            check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(Then0_43, &Then_47, &ThenContainsTrace_48);
            check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(Else0_44, &Else_49, &ElseContainsTrace_50);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Vars_41));
              MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (Cond_45));
              MR_hl_field(3, GoalExpr_32, 3) = ((MR_Box) (Then_47));
              MR_hl_field(3, GoalExpr_32, 4) = ((MR_Box) (Else_49));
            }
            Var_96 = hlds__hlds_goal__worst_contains_trace_2_f_0(ThenContainsTrace_48, ElseContainsTrace_50);
            *ContainsTrace_6 = hlds__hlds_goal__worst_contains_trace_2_f_0(CondContainsTrace_46, Var_96);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand0_77)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_proc.set_goal_contains_trace_features_in_goal\'/3", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_78 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_77, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_79 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, (MR_Integer) 1))));
                  MR_Word Inner_80 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_81 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, (MR_Integer) 3))));
                  MR_Word MainGoal0_82 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_83 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, (MR_Integer) 5))));
                  MR_Word OrElseInners_84 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, (MR_Integer) 6))));
                  MR_Word MainGoal_85;
                  MR_Word MainContainsTrace_86;
                  MR_Word OrElseGoals_88;
                  MR_Word OrElseContainsTrace_89;
                  MR_Word ShortHand_90;

                  check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(MainGoal0_82, &MainGoal_85, &MainContainsTrace_86);
                  check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goals_4_p_0(OrElseGoals0_83, &OrElseGoals_88, (MR_Integer) 1, &OrElseContainsTrace_89);
                  {
                    ShortHand_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_90, 0) = (MR_Box) ((MR_Unsigned) (GoalType_78));
                    MR_hl_field(1, ShortHand_90, 1) = ((MR_Box) (Outer_79));
                    MR_hl_field(1, ShortHand_90, 2) = ((MR_Box) (Inner_80));
                    MR_hl_field(1, ShortHand_90, 3) = ((MR_Box) (MaybeOutputVars_81));
                    MR_hl_field(1, ShortHand_90, 4) = ((MR_Box) (MainGoal_85));
                    MR_hl_field(1, ShortHand_90, 5) = ((MR_Box) (OrElseGoals_88));
                    MR_hl_field(1, ShortHand_90, 6) = ((MR_Box) (OrElseInners_84));
                  }
                  {
                    GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (ShortHand_90));
                  }
                  *ContainsTrace_6 = hlds__hlds_goal__worst_contains_trace_2_f_0(MainContainsTrace_86, OrElseContainsTrace_89);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_91 = ((MR_Word) ((MR_hl_field(2, ShortHand0_77, (MR_Integer) 0))));
                  MR_Word ResultVar_92 = ((MR_Word) ((MR_hl_field(2, ShortHand0_77, (MR_Integer) 1))));
                  MR_Word SubGoal0_107 = ((MR_Word) ((MR_hl_field(2, ShortHand0_77, (MR_Integer) 2))));
                  MR_Word SubGoal_108;
                  MR_Word ShortHand_109;

                  check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(SubGoal0_107, &SubGoal_108, ContainsTrace_6);
                  {
                    ShortHand_109 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_109, 0) = ((MR_Box) (MaybeIO_91));
                    MR_hl_field(2, ShortHand_109, 1) = ((MR_Box) (ResultVar_92));
                    MR_hl_field(2, ShortHand_109, 2) = ((MR_Box) (SubGoal_108));
                  }
                  {
                    GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (ShortHand_109));
                  }
                }
                break;
            }
          }
          break;
      }
      break;
  }
  switch (*ContainsTrace_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, GoalInfo0_8, &GoalInfo_95);
      break;
    case (MR_Integer) 0:
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, GoalInfo0_8, &GoalInfo_95);
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_32));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_95));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__do_simplify_top_level_goal_6_p_0(
  MR_Word STATE_VARIABLE_Goal_0_16,
  MR_Word * STATE_VARIABLE_Goal_17,
  MR_Word NestedContext0_8,
  MR_Word InstMap0_9,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word GoalInfo0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_16, (MR_Integer) 1))));
  MR_Word SimplifyTasks_13;
  MR_Word Common0_14;
  MR_Word STATE_VARIABLE_Goal_20_20;
  MR_Word STATE_VARIABLE_Info_21_21;
  MR_Word RerunQuantDelta_22;
  MR_Word RerunDet_26;
  MR_Word STATE_VARIABLE_Goal_42_45;
  MR_Word STATE_VARIABLE_Info_44_47;
  MR_Word _Common_15;

  check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(STATE_VARIABLE_Info_0_18, &SimplifyTasks_13);
  Common0_14 = check_hlds__simplify__common__common_info_init_1_f_0(SimplifyTasks_13);
  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(STATE_VARIABLE_Goal_0_16, &STATE_VARIABLE_Goal_20_20, NestedContext0_8, InstMap0_9, Common0_14, &_Common_15, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_21_21);
  check_hlds__simplify__simplify_info__simplify_info_get_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_21_21, &RerunQuantDelta_22);
  switch (RerunQuantDelta_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_Goal_42_45 = STATE_VARIABLE_Goal_20_20;
        STATE_VARIABLE_Info_44_47 = STATE_VARIABLE_Info_21_21;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word NonLocals_23;
        MR_Word InstVarSet_25;
        MR_Word STATE_VARIABLE_VarTable_32_35;
        MR_Word STATE_VARIABLE_RttiVarMaps_33_36;
        MR_Word STATE_VARIABLE_Goal_35_38;
        MR_Word STATE_VARIABLE_VarTable_36_39;
        MR_Word STATE_VARIABLE_RttiVarMaps_37_40;
        MR_Word STATE_VARIABLE_Info_38_41;
        MR_Word STATE_VARIABLE_Info_39_42;
        MR_Word STATE_VARIABLE_ModuleInfo_40_43;
        MR_Word STATE_VARIABLE_ModuleInfo_43_46;
        MR_Word Var_24;

        NonLocals_23 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_12);
        check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_VarTable_32_35);
        check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_RttiVarMaps_33_36);
        hlds__quantification__implicitly_quantify_goal_general_9_p_0((MR_Integer) 0, NonLocals_23, &Var_24, STATE_VARIABLE_Goal_20_20, &STATE_VARIABLE_Goal_35_38, STATE_VARIABLE_VarTable_32_35, &STATE_VARIABLE_VarTable_36_39, STATE_VARIABLE_RttiVarMaps_33_36, &STATE_VARIABLE_RttiVarMaps_37_40);
        check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_36_39, STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_Info_38_41);
        check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(STATE_VARIABLE_RttiVarMaps_37_40, STATE_VARIABLE_Info_38_41, &STATE_VARIABLE_Info_39_42);
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_39_42, &STATE_VARIABLE_ModuleInfo_40_43);
        check_hlds__simplify__simplify_info__simplify_info_get_inst_varset_2_p_0(STATE_VARIABLE_Info_39_42, &InstVarSet_25);
        check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 0, STATE_VARIABLE_VarTable_36_39, InstVarSet_25, InstMap0_9, STATE_VARIABLE_Goal_35_38, &STATE_VARIABLE_Goal_42_45, STATE_VARIABLE_ModuleInfo_40_43, &STATE_VARIABLE_ModuleInfo_43_46);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_43_46, STATE_VARIABLE_Info_39_42, &STATE_VARIABLE_Info_44_47);
      }
      break;
  }
  check_hlds__simplify__simplify_info__simplify_info_get_rerun_det_2_p_0(STATE_VARIABLE_Info_44_47, &RerunDet_26);
  switch (RerunDet_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_Goal_17 = STATE_VARIABLE_Goal_42_45;
        *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_44_47;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Detism_27;
        MR_Word SolnContext_28;
        MR_Word PredProcId_29;
        MR_Word PredInfo_30;
        MR_Word DetInfo0_31;
        MR_Word DetInfo_34;
        MR_Word STATE_VARIABLE_ModuleInfo_45_48;
        MR_Word STATE_VARIABLE_VarTable_46_49;
        MR_Word STATE_VARIABLE_RttiVarMaps_47_50;
        MR_Word STATE_VARIABLE_ProcInfo_48_51;
        MR_Word STATE_VARIABLE_ProcInfo_49_52;
        MR_Word STATE_VARIABLE_ProcInfo_50_53;
        MR_Word STATE_VARIABLE_ModuleInfo_51_54;
        MR_Word STATE_VARIABLE_Info_52_55;
        MR_Word STATE_VARIABLE_ModuleInfo_58_60;
        MR_Word STATE_VARIABLE_VarTable_59_61;
        MR_Word STATE_VARIABLE_Info_60_62;
        MR_Word Var_32;
        MR_Word Var_33;

        Detism_27 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_12);
        check_hlds__det_analysis__det_get_soln_context_2_p_0(Detism_27, &SolnContext_28);
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_44_47, &STATE_VARIABLE_ModuleInfo_45_48);
        check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_44_47, &STATE_VARIABLE_VarTable_46_49);
        check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_44_47, &STATE_VARIABLE_RttiVarMaps_47_50);
        check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_44_47, &PredProcId_29);
        hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_45_48, PredProcId_29, &PredInfo_30, &STATE_VARIABLE_ProcInfo_48_51);
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_46_49, STATE_VARIABLE_ProcInfo_48_51, &STATE_VARIABLE_ProcInfo_49_52);
        hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(STATE_VARIABLE_RttiVarMaps_47_50, STATE_VARIABLE_ProcInfo_49_52, &STATE_VARIABLE_ProcInfo_50_53);
        hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PredProcId_29, PredInfo_30, STATE_VARIABLE_ProcInfo_50_53, STATE_VARIABLE_ModuleInfo_45_48, &STATE_VARIABLE_ModuleInfo_51_54);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_51_54, STATE_VARIABLE_Info_44_47, &STATE_VARIABLE_Info_52_55);
        check_hlds__det_util__det_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_51_54, PredProcId_29, STATE_VARIABLE_VarTable_46_49, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &DetInfo0_31);
        check_hlds__det_analysis__det_infer_goal_10_p_0(STATE_VARIABLE_Goal_42_45, STATE_VARIABLE_Goal_17, InstMap0_9, SolnContext_28, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Var_32, &Var_33, DetInfo0_31, &DetInfo_34);
        check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_34, &STATE_VARIABLE_ModuleInfo_58_60);
        check_hlds__det_util__det_info_get_var_table_2_p_0(DetInfo_34, &STATE_VARIABLE_VarTable_59_61);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_58_60, STATE_VARIABLE_Info_52_55, &STATE_VARIABLE_Info_60_62);
        check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_59_61, STATE_VARIABLE_Info_60_62, STATE_VARIABLE_Info_19);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_attribute_conflict_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_bool succeeded;
  MR_Word PredInfo_10;
  MR_Word Markers_11;
  MR_Word Goal_12;
  MR_Word GoalExpr_13;
  MR_Word GoalInfo_14;
  MR_Word Attributes_15;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_7, &PredInfo_10);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_11);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_8, &Goal_12);
  GoalExpr_13 = ((MR_Word) ((MR_hl_field(0, Goal_12, (MR_Integer) 0))));
  GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Goal_12, (MR_Integer) 1))));
  succeeded = ((((MR_tag((MR_Word) GoalExpr_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    Attributes_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 1))));
    {
      MR_Word Context_22;
      MR_Word MaybeMayDuplicate_23;
      MR_Word MaybeMayExportBody_25;
      MR_Word STATE_VARIABLE_Specs_29_29;

      Context_22 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
      MaybeMayDuplicate_23 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attributes_15);
      if ((MaybeMayDuplicate_23 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_29_29 = STATE_VARIABLE_Specs_0_27;
      else
      {
        MR_Word MayDuplicate_24 = ((MR_Word) ((MR_hl_field(1, MaybeMayDuplicate_23, (MR_Integer) 0))));

        switch (MayDuplicate_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_11, (MR_Integer) 8);
              if (succeeded)
              {
                MR_Word Spec_31;

                {
                  Spec_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_proc.maybe_warn_about_may_duplicate_attributes\'/5"));
                  MR_hl_field(1, Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_31, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_proc_scalar_common_3[1])));
                  MR_hl_field(1, Spec_31, 3) = ((MR_Box) (Context_22));
                  MR_hl_field(1, Spec_31, 4) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[11])));
                }
                {
                  STATE_VARIABLE_Specs_29_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_29_29, 0) = ((MR_Box) (Spec_31));
                  MR_hl_field(1, STATE_VARIABLE_Specs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
                }
              }
              else
                STATE_VARIABLE_Specs_29_29 = STATE_VARIABLE_Specs_0_27;
            }
            break;
          case (MR_Integer) 1:
            {
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_11, (MR_Integer) 6);
              if (succeeded)
              {
                MR_Word Spec_43;

                {
                  Spec_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_proc.maybe_warn_about_may_duplicate_attributes\'/5"));
                  MR_hl_field(1, Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_43, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_proc_scalar_common_3[1])));
                  MR_hl_field(1, Spec_43, 3) = ((MR_Box) (Context_22));
                  MR_hl_field(1, Spec_43, 4) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[17])));
                }
                {
                  STATE_VARIABLE_Specs_29_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_Specs_29_29, 0) = ((MR_Box) (Spec_43));
                  MR_hl_field(1, STATE_VARIABLE_Specs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
                }
              }
              else
                STATE_VARIABLE_Specs_29_29 = STATE_VARIABLE_Specs_0_27;
            }
            break;
        }
      }
      MaybeMayExportBody_25 = parse_tree__prog_data_foreign__get_may_export_body_1_f_0(Attributes_15);
      if ((MaybeMayExportBody_25 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_29_29;
      else
      {
        MR_Word MayExportBody_26 = ((MR_Word) ((MR_hl_field(1, MaybeMayExportBody_25, (MR_Integer) 0))));

        switch (MayExportBody_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_11, (MR_Integer) 8);
              if (succeeded)
              {
                MR_Word Spec_45;

                {
                  Spec_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_45, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_proc.maybe_warn_about_may_export_body_attribute\'/5"));
                  MR_hl_field(1, Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_45, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_proc_scalar_common_3[1])));
                  MR_hl_field(1, Spec_45, 3) = ((MR_Box) (Context_22));
                  MR_hl_field(1, Spec_45, 4) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_proc_scalar_common_1[20])));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_28 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Spec_45));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_29_29));
                }
              }
              else
                *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_29_29;
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_29_29;
            break;
        }
      }
    }
  }
  else
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_9_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word PredId_11,
  MR_Word PredInfo0_12,
  MR_Integer ProcId_13,
  MR_Word STATE_VARIABLE_ProcInfo_0_28,
  MR_Word * STATE_VARIABLE_ProcInfo_29,
  MR_Word ImplicitStreamWarnings_15,
  MR_Word * FormatSpecs_16)
{
  MR_Word Goal0_17;
  MR_Word VarTable0_18;
  MR_Word MaybeGoal_19;
  MR_Word VarTable_20;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_28, &Goal0_17);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_28, &VarTable0_18);
  check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0(STATE_VARIABLE_ModuleInfo_0_26, PredInfo0_12, STATE_VARIABLE_ProcInfo_0_28, ImplicitStreamWarnings_15, Goal0_17, &MaybeGoal_19, FormatSpecs_16, VarTable0_18, &VarTable_20);
  if ((MaybeGoal_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
    *STATE_VARIABLE_ProcInfo_29 = STATE_VARIABLE_ProcInfo_0_28;
  }
  else
  {
    MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_19, (MR_Integer) 0))));
    MR_Word PredInfo1_22;
    MR_Word Markers1_23;
    MR_Word Markers_24;
    MR_Word PredInfo_25;
    MR_Word STATE_VARIABLE_ProcInfo_30_30;
    MR_Word STATE_VARIABLE_ProcInfo_31_31;
    MR_Word STATE_VARIABLE_ProcInfo_33_33;
    MR_Word STATE_VARIABLE_ModuleInfo_36_36;

    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_21, STATE_VARIABLE_ProcInfo_0_28, &STATE_VARIABLE_ProcInfo_30_30);
    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_20, STATE_VARIABLE_ProcInfo_30_30, &STATE_VARIABLE_ProcInfo_31_31);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_31_31, &STATE_VARIABLE_ProcInfo_33_33);
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_33_33, STATE_VARIABLE_ProcInfo_29, STATE_VARIABLE_ModuleInfo_0_26, &STATE_VARIABLE_ModuleInfo_36_36);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_13, *STATE_VARIABLE_ProcInfo_29, PredInfo0_12, &PredInfo1_22);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo1_22, &Markers1_23);
    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 27, Markers1_23, &Markers_24);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_24, PredInfo1_22, &PredInfo_25);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_11, PredInfo_25, STATE_VARIABLE_ModuleInfo_36_36, STATE_VARIABLE_ModuleInfo_27);
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  succeeded = mercury__string__to_int_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_SimplifyTasks_0_18,
  MR_Word * STATE_VARIABLE_SimplifyTasks_19)
{
  MR_bool succeeded;
  MR_Word Globals_10;
  MR_String CommonStructPreds_11;
  MR_Word TurnOffCommonStructByRequest_12;
  MR_Word VarTable0_16;
  MR_Integer NumVars_17;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 216, &CommonStructPreds_11);
  succeeded = (strcmp(CommonStructPreds_11, (MR_String) "") == 0);
  if (succeeded)
    TurnOffCommonStructByRequest_12 = (MR_Integer) 0;
  else
  {
    MR_Word CommonStructPredIdStrs_13;
    MR_Word CommonStructPredIdInts_14;

    CommonStructPredIdStrs_13 = mercury__string__split_at_char_2_f_0((MR_Char) 44, CommonStructPreds_11);
    succeeded = mercury__list__map_3_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_2[1]), CommonStructPredIdStrs_13, &CommonStructPredIdInts_14);
    if (succeeded)
    {
      MR_Integer PredIdInt_15;

      PredIdInt_15 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_7);
      succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (PredIdInt_15)), CommonStructPredIdInts_14);
      if (succeeded)
        TurnOffCommonStructByRequest_12 = (MR_Integer) 0;
      else
        TurnOffCommonStructByRequest_12 = (MR_Integer) 1;
    }
    else
      TurnOffCommonStructByRequest_12 = (MR_Integer) 0;
  }
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_8, &VarTable0_16);
  parse_tree__var_table__var_table_count_2_p_0(VarTable0_16, &NumVars_17);
  succeeded = (TurnOffCommonStructByRequest_12 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (NumVars_17 > (MR_Integer) 12000);
  if (succeeded)
  {
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SimplifyTasks_0_18, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_SimplifyTasks_19 = base;
      MR_hl_field(0, base, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
    }
  }
  else
    *STATE_VARIABLE_SimplifyTasks_19 = STATE_VARIABLE_SimplifyTasks_0_18;
}

void mercury__check_hlds__simplify__simplify_proc__init(void)
{
}

void mercury__check_hlds__simplify__simplify_proc__init_type_tables(void)
{
}

void mercury__check_hlds__simplify__simplify_proc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_proc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_proc.
