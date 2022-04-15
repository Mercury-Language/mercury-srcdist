/*
** Automatically generated from `simplify_proc.m'
** by the Mercury compiler,
** version rotd-2022-04-15
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
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.error_util.mih"
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
#include "parse_tree.set_of_var.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__282__1_4_p_0(
  MR_Word HeadVar__1_135,
  MR_String HeadVar__2_136,
  MR_Word HeadVar__3_137,
  MR_Word * HeadVar__4_138);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50,
  MR_Word STATE_VARIABLE_ProcInfo_0_51,
  MR_Word * STATE_VARIABLE_ProcInfo_52,
  MR_Word * STATE_VARIABLE_Specs_53);

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
check_hlds__simplify__simplify_proc__maybe_warn_about_may_export_body_attribute_5_p_0(
  MR_Word MayExportBody_6,
  MR_Word Markers_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_8_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word ImplicitStreamWarnings_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word * FormatSpecs_13,
  MR_Word STATE_VARIABLE_ProcInfo_0_29,
  MR_Word * STATE_VARIABLE_ProcInfo_30);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_mark_modecheck_clauses_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_13,
  MR_Word * STATE_VARIABLE_ProcInfo_14);

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
  MR_Word STATE_VARIABLE_SimplifyTasks_0_19,
  MR_Word * STATE_VARIABLE_SimplifyTasks_20);


static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_1[22][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_5[1][7];




static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_1[22][2] = {
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
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma on the predicate."))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "no_inline"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[4])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute on the foreign_proc contradicts the"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "may_duplicate"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[4])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "may_not_duplicate"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "may_export_body"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[8])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[20])))
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
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
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
    ((MR_Box) (&check_hlds__simplify__simplify_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static void MR_CALL 
check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__282__1_4_p_0(
  MR_Word HeadVar__1_135,
  MR_String HeadVar__2_136,
  MR_Word HeadVar__3_137,
  MR_Word * HeadVar__4_138)
{
  mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_135, HeadVar__2_136, HeadVar__3_137, HeadVar__4_138);
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_goal_update_vars_in_proc_11_p_0(
  MR_Word SimplifyTasks_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word STATE_VARIABLE_ProcInfo_0_31,
  MR_Word * STATE_VARIABLE_ProcInfo_32,
  MR_Word InstMap0_17,
  MR_Word STATE_VARIABLE_Goal_0_33,
  MR_Word * STATE_VARIABLE_Goal_34,
  MR_Integer * CostDelta_19)
{
  MR_Word SimplifyInfo0_20;
  MR_Word SimplifyInfo_25;
  MR_Word VarSet_26;
  MR_Word VarTypes_27;
  MR_Word RttiVarMaps_28;
  MR_Word STATE_VARIABLE_ProcInfo_37_37;

  check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_14, ProcId_15, STATE_VARIABLE_ProcInfo_0_31, SimplifyTasks_12, &SimplifyInfo0_20);
  check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(STATE_VARIABLE_Goal_0_33, STATE_VARIABLE_Goal_34, (MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_2[0]), InstMap0_17, SimplifyInfo0_20, &SimplifyInfo_25);
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(SimplifyInfo_25, STATE_VARIABLE_ModuleInfo_30);
  check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(SimplifyInfo_25, &VarSet_26);
  check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(SimplifyInfo_25, &VarTypes_27);
  check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(SimplifyInfo_25, &RttiVarMaps_28);
  hlds__hlds_pred__proc_info_set_varset_vartypes_4_p_0(VarSet_26, VarTypes_27, STATE_VARIABLE_ProcInfo_0_31, &STATE_VARIABLE_ProcInfo_37_37);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_28, STATE_VARIABLE_ProcInfo_37_37, STATE_VARIABLE_ProcInfo_32);
  check_hlds__simplify__simplify_info__simplify_info_get_cost_delta_2_p_0(SimplifyInfo_25, CostDelta_19);
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(
  MR_Word SimplifyTasks_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_17,
  MR_Word * STATE_VARIABLE_ProcInfo_18)
{
  MR_Word Var_14;

  hlds__passes_aux__write_pred_progress_message_5_p_0(STATE_VARIABLE_ModuleInfo_0_15, (MR_String) "Simplifying", PredId_9);
  check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(SimplifyTasks_8, PredId_9, ProcId_10, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_ProcInfo_0_17, STATE_VARIABLE_ProcInfo_18, &Var_14);
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_pred_procs_9_p_0(
  MR_Word SimplifyTasks_1,
  MR_Word PredId_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5,
  MR_Word STATE_VARIABLE_PredInfo_0_6,
  MR_Word * STATE_VARIABLE_PredInfo_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
      *STATE_VARIABLE_PredInfo_7 = STATE_VARIABLE_PredInfo_0_6;
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
    }
    else
    {
      MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ProcIds_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_34_34;
      MR_Word STATE_VARIABLE_PredInfo_35_35;
      MR_Word STATE_VARIABLE_Specs_36_36;
      MR_Word ProcTable0_52;
      MR_Word ProcInfo0_53;
      MR_Word ProcInfo_54;
      MR_Word ProcSpecs_55;
      MR_Word HasParallelConj_56;
      MR_Word HasUserEvent_57;
      MR_Word ProcTable_58;
      MR_Word STATE_VARIABLE_ModuleInfo_29_59;
      MR_Word STATE_VARIABLE_ModuleInfo_30_60;
      MR_Box conv0_ProcInfo0_53;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_PredInfo_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_6, &ProcTable0_52);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_52, ((MR_Box) (ProcId_23)), &conv0_ProcInfo0_53);
      ProcInfo0_53 = ((MR_Word) (conv0_ProcInfo0_53));
      check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(SimplifyTasks_1, PredId_2, ProcId_23, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_29_59, ProcInfo0_53, &ProcInfo_54, &ProcSpecs_55);
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_54, &HasParallelConj_56);
      switch (HasParallelConj_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_ModuleInfo_30_60 = STATE_VARIABLE_ModuleInfo_29_59;
          break;
        case (MR_Integer) 0:
          hlds__hlds_module__module_info_set_has_parallel_conj_2_p_0(STATE_VARIABLE_ModuleInfo_29_59, &STATE_VARIABLE_ModuleInfo_30_60);
          break;
      }
      hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(ProcInfo_54, &HasUserEvent_57);
      switch (HasUserEvent_57) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_ModuleInfo_34_34 = STATE_VARIABLE_ModuleInfo_30_60;
          break;
        case (MR_Integer) 0:
          hlds__hlds_module__module_info_set_has_user_event_2_p_0(STATE_VARIABLE_ModuleInfo_30_60, &STATE_VARIABLE_ModuleInfo_34_34);
          break;
      }
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_23)), ((MR_Box) (ProcInfo_54)), ProcTable0_52, &ProcTable_58);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_58, STATE_VARIABLE_PredInfo_0_6, &STATE_VARIABLE_PredInfo_35_35);
      parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(ProcSpecs_55, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_36_36);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_24;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = STATE_VARIABLE_ModuleInfo_34_34;
      next_value_of_STATE_VARIABLE_PredInfo_0_6 = STATE_VARIABLE_PredInfo_35_35;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_36_36;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ModuleInfo_0_4 = next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      STATE_VARIABLE_PredInfo_0_6 = next_value_of_STATE_VARIABLE_PredInfo_0_6;
      STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
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
  MR_Word conv0_HeadVar__4_138;

  check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__282__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_138);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_138));
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(
  MR_Word SimplifyTasks0_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50,
  MR_Word STATE_VARIABLE_ProcInfo_0_51,
  MR_Word * STATE_VARIABLE_ProcInfo_52,
  MR_Word * STATE_VARIABLE_Specs_53)
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
  MR_Word VarSet0_30;
  MR_Word VarTypes0_31;
  MR_Word RttiVarMaps_32;
  MR_Word ElimVarsLists0_33;
  MR_Word ElimVarsLists_34;
  MR_Word ElimVars_35;
  MR_Word VarSet1_36;
  MR_Word VarTypes_37;
  MR_Word VarSet_39;
  MR_Word HasParallelConj_42;
  MR_Word HasUserEvent_43;
  MR_Word CurDeletedCallCallees_44;
  MR_Word DeletedCallCallees0_45;
  MR_Word DeletedCallCallees_46;
  MR_Word Status_47;
  MR_Word IsDefinedHere_48;
  MR_Word STATE_VARIABLE_ProcInfo_55_55;
  MR_Word STATE_VARIABLE_ModuleInfo_60_60;
  MR_Word STATE_VARIABLE_ProcInfo_61_61;
  MR_Word STATE_VARIABLE_ProcInfo_63_63;
  MR_Word STATE_VARIABLE_ModuleInfo_64_64;
  MR_Word STATE_VARIABLE_ProcInfo_67_67;
  MR_Word STATE_VARIABLE_ProcInfo_69_69;
  MR_Word STATE_VARIABLE_ProcInfo_70_70;
  MR_Word STATE_VARIABLE_ProcInfo_71_71;
  MR_Word STATE_VARIABLE_ProcInfo_72_72;
  MR_Word STATE_VARIABLE_Specs_74_74;
  MR_Word STATE_VARIABLE_Specs_75_75;
  MR_Word STATE_VARIABLE_Specs_76_76;
  MR_Word Var_80;
  MR_Word Var_57;

  check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(STATE_VARIABLE_ModuleInfo_0_49, PredId_10, STATE_VARIABLE_ProcInfo_0_51, SimplifyTasks0_9, &SimplifyTasks_15);
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_49, PredId_10, &PredInfo0_16);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_16, &Markers0_17);
  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_17, (MR_Integer) 22);
  if (succeeded)
    check_hlds__simplify__simplify_proc__simplify_proc_maybe_mark_modecheck_clauses_2_p_0(STATE_VARIABLE_ProcInfo_0_51, &STATE_VARIABLE_ProcInfo_55_55);
  else
    STATE_VARIABLE_ProcInfo_55_55 = STATE_VARIABLE_ProcInfo_0_51;
  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_17, (MR_Integer) 26);
  if (succeeded)
  {
    Var_80 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_15, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
    Var_57 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_15, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
    succeeded = (Var_57 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word ImplicitStreamWarnings_18;

    switch (Var_80) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ImplicitStreamWarnings_18 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ImplicitStreamWarnings_18 = (MR_Integer) 1;
        break;
    }
    check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_8_p_0(STATE_VARIABLE_ModuleInfo_0_49, &STATE_VARIABLE_ModuleInfo_60_60, ImplicitStreamWarnings_18, PredId_10, ProcId_11, &FormatSpecs_19, STATE_VARIABLE_ProcInfo_55_55, &STATE_VARIABLE_ProcInfo_61_61);
  }
  else
  {
    FormatSpecs_19 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ProcInfo_61_61 = STATE_VARIABLE_ProcInfo_55_55;
    STATE_VARIABLE_ModuleInfo_60_60 = STATE_VARIABLE_ModuleInfo_0_49;
  }
  check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_60_60, PredId_10, ProcId_11, STATE_VARIABLE_ProcInfo_61_61, SimplifyTasks_15, &Info0_20);
  CodeModel_23 = hlds__code_model__proc_info_interface_code_model_1_f_0(STATE_VARIABLE_ProcInfo_61_61);
  switch (CodeModel_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      ProcIsModelNon_24 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      ProcIsModelNon_24 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_3[0]));
      break;
  }
  {
    NestedContext0_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), NestedContext0_25, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), NestedContext0_25, 1) = ((MR_Box) (ProcIsModelNon_24));
    MR_hl_field(MR_mktag(0), NestedContext0_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_ProcInfo_61_61, &InstMap0_26);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_61_61, &Goal0_27);
  check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(Goal0_27, &Goal_28, NestedContext0_25, InstMap0_26, Info0_20, &Info_29);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_28, STATE_VARIABLE_ProcInfo_61_61, &STATE_VARIABLE_ProcInfo_63_63);
  check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(Info_29, &VarSet0_30);
  check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(Info_29, &VarTypes0_31);
  check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(Info_29, &RttiVarMaps_32);
  check_hlds__simplify__simplify_info__simplify_info_get_elim_vars_2_p_0(Info_29, &ElimVarsLists0_33);
  mercury__list__sort_2_p_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[1]), ElimVarsLists0_33, &ElimVarsLists_34);
  mercury__list__condense_2_p_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]), ElimVarsLists_34, &ElimVars_35);
  mercury__varset__delete_sorted_vars_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ElimVars_35, VarSet0_30, &VarSet1_36);
  hlds__vartypes__delete_sorted_var_types_3_p_0(ElimVars_35, VarTypes0_31, &VarTypes_37);
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(Info_29, &STATE_VARIABLE_ModuleInfo_64_64);
  succeeded = check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(Info_29);
  if (succeeded)
  {
    MR_Word VarNameRemap_38;
    MR_Word HeadVars_40;
    MR_Word ArgModes_41;
    MR_Word Var_66;
    MR_Box conv1_VarSet_39;

    hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(STATE_VARIABLE_ProcInfo_63_63, &VarNameRemap_38);
    mercury__map__foldl_4_p_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[2]), (MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_2[2]), VarNameRemap_38, ((MR_Box) (VarSet1_36)), &conv1_VarSet_39);
    VarSet_39 = ((MR_Word) (conv1_VarSet_39));
    Var_66 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    hlds__hlds_pred__proc_info_set_var_name_remap_3_p_0(Var_66, STATE_VARIABLE_ProcInfo_63_63, &STATE_VARIABLE_ProcInfo_67_67);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_67_67, &HeadVars_40);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_67_67, &ArgModes_41);
    transform_hlds__direct_arg_in_out__find_and_record_any_direct_arg_in_out_posns_7_p_0(PredId_10, ProcId_11, VarTypes_37, HeadVars_40, ArgModes_41, STATE_VARIABLE_ModuleInfo_64_64, STATE_VARIABLE_ModuleInfo_50);
  }
  else
  {
    VarSet_39 = VarSet0_30;
    STATE_VARIABLE_ProcInfo_67_67 = STATE_VARIABLE_ProcInfo_63_63;
    *STATE_VARIABLE_ModuleInfo_50 = STATE_VARIABLE_ModuleInfo_64_64;
  }
  hlds__hlds_pred__proc_info_set_varset_vartypes_4_p_0(VarSet_39, VarTypes_37, STATE_VARIABLE_ProcInfo_67_67, &STATE_VARIABLE_ProcInfo_69_69);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_32, STATE_VARIABLE_ProcInfo_69_69, &STATE_VARIABLE_ProcInfo_70_70);
  check_hlds__simplify__simplify_info__simplify_info_get_has_parallel_conj_2_p_0(Info_29, &HasParallelConj_42);
  hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0(HasParallelConj_42, STATE_VARIABLE_ProcInfo_70_70, &STATE_VARIABLE_ProcInfo_71_71);
  check_hlds__simplify__simplify_info__simplify_info_get_has_user_event_2_p_0(Info_29, &HasUserEvent_43);
  hlds__hlds_pred__proc_info_set_has_user_event_3_p_0(HasUserEvent_43, STATE_VARIABLE_ProcInfo_71_71, &STATE_VARIABLE_ProcInfo_72_72);
  check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(Info_29, &CurDeletedCallCallees_44);
  hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_ProcInfo_72_72, &DeletedCallCallees0_45);
  mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CurDeletedCallCallees_44, DeletedCallCallees0_45, &DeletedCallCallees_46);
  hlds__hlds_pred__proc_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_46, STATE_VARIABLE_ProcInfo_72_72, STATE_VARIABLE_ProcInfo_52);
  check_hlds__simplify__simplify_info__simplify_info_get_error_specs_2_p_0(Info_29, &STATE_VARIABLE_Specs_74_74);
  STATE_VARIABLE_Specs_75_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), FormatSpecs_19, STATE_VARIABLE_Specs_74_74);
  check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_attribute_conflict_5_p_0(*STATE_VARIABLE_ModuleInfo_50, PredId_10, *STATE_VARIABLE_ProcInfo_52, STATE_VARIABLE_Specs_75_75, &STATE_VARIABLE_Specs_76_76);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_16, &Status_47);
  IsDefinedHere_48 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_47);
  switch (IsDefinedHere_48) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_53 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_76_76;
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
  MR_Word Var_195;
  MR_Word Var_198;
  MR_Word Var_200;

  check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(STATE_VARIABLE_Info_0_17, &OriginalSimplifyTasks_12);
  Var_200 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OriginalSimplifyTasks_12, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
  Var_198 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OriginalSimplifyTasks_12, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
  Var_195 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OriginalSimplifyTasks_12, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
  succeeded = (Var_198 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (Var_195 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (Var_200 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_SimplifyTasks_25_25;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_SimplifyTasks_37_37;
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OriginalSimplifyTasks_12, (MR_Integer) 0)));
    MR_Unsigned packed_word_2;

    {
      STATE_VARIABLE_SimplifyTasks_25_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SimplifyTasks_25_25, 0) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 10240U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 11)) | (((MR_Unsigned) ((MR_Integer) 0) << 13))))));
    }
    check_hlds__simplify__simplify_info__simplify_info_set_simplify_tasks_3_p_0(STATE_VARIABLE_SimplifyTasks_25_25, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_27_27);
    check_hlds__simplify__simplify_proc__do_simplify_top_level_goal_6_p_0(STATE_VARIABLE_Goal_0_15, &STATE_VARIABLE_Goal_28_28, NestedContext0_8, InstMap0_9, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_29_29);
    check_hlds__simplify__simplify_info__simplify_info_set_allow_messages_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_32_32);
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OriginalSimplifyTasks_12, (MR_Integer) 0)));
    {
      STATE_VARIABLE_SimplifyTasks_37_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SimplifyTasks_37_37, 0) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 328U)))) | (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) ((MR_Integer) 1) << 6)) | (((MR_Unsigned) ((MR_Integer) 1) << 8))))))));
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
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 2))));
    MR_Word Goal_16;
    MR_Word GoalContainsTrace_17;
    MR_Word STATE_VARIABLE_ContainsTrace_20_20;

    check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(Goal0_15, &Goal_16, &GoalContainsTrace_17);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(MR_mktag(0), Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(MR_mktag(0), Case_10, 2) = ((MR_Box) (Goal_16));
    }
    STATE_VARIABLE_ContainsTrace_20_20 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_17, STATE_VARIABLE_ContainsTrace_0_3);
    check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_cases_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_ContainsTrace_20_20, STATE_VARIABLE_ContainsTrace_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_11));
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
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word GoalContainsTrace_13;
    MR_Word STATE_VARIABLE_ContainsTrace_16_16;

    check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(Goal0_8, &Goal_10, &GoalContainsTrace_13);
    STATE_VARIABLE_ContainsTrace_16_16 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_13, STATE_VARIABLE_ContainsTrace_0_3);
    check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goals_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_ContainsTrace_16_16, STATE_VARIABLE_ContainsTrace_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_11));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(
  MR_Word Goal0_4,
  MR_Word * Goal_5,
  MR_Word * ContainsTrace_6)
{
  MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_4, (MR_Integer) 0))));
  MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_4, (MR_Integer) 1))));
  MR_Word GoalExpr_32;
  MR_Word GoalInfo_94;

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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 0))))) {
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
            MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word SubGoals0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2))));
            MR_Word SubGoals_36;

            check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goals_4_p_0(SubGoals0_34, &SubGoals_36, (MR_Integer) 1, ContainsTrace_6);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = (MR_Box) ((MR_Unsigned) (ConjType_33));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (SubGoals_36));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals0_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));
            MR_Word SubGoals_102;

            check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goals_4_p_0(SubGoals0_100, &SubGoals_102, (MR_Integer) 1, ContainsTrace_6);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (SubGoals_102));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));
            MR_Word CanFail_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 3))));
            MR_Word Cases_40;

            check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_cases_4_p_0(Cases0_39, &Cases_40, (MR_Integer) 1, ContainsTrace_6);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (SwitchVar_37));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = (MR_Box) ((MR_Unsigned) (CanFail_38));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 3) = ((MR_Box) (Cases_40));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2))));
            MR_Word SubGoal_105;

            switch (MR_tag((MR_Word) Reason_53)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(SubGoal0_104, &SubGoal_105, ContainsTrace_6);
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_53, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 8:
                    check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(SubGoal0_104, &SubGoal_105, ContainsTrace_6);
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word FGT_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_53, (MR_Integer) 2))) & (MR_Integer) 3);

                      switch (FGT_60) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                        case (MR_Integer) 2:
                          {
                            SubGoal_105 = SubGoal0_104;
                            *ContainsTrace_6 = (MR_Integer) 1;
                          }
                          break;
                        case (MR_Integer) 0:
                        case (MR_Integer) 3:
                          check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(SubGoal0_104, &SubGoal_105, ContainsTrace_6);
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      SubGoal_105 = SubGoal0_104;
                      *ContainsTrace_6 = (MR_Integer) 0;
                    }
                    break;
                }
                break;
            }
            {
              GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (Reason_53));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (SubGoal_105));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Cond0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2))));
            MR_Word Then0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 3))));
            MR_Word Else0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 4))));
            MR_Word Cond_45;
            MR_Word CondContainsTrace_46;
            MR_Word Then_47;
            MR_Word ThenContainsTrace_48;
            MR_Word Else_49;
            MR_Word ElseContainsTrace_50;
            MR_Word Var_97;

            check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(Cond0_42, &Cond_45, &CondContainsTrace_46);
            check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(Then0_43, &Then_47, &ThenContainsTrace_48);
            check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(Else0_44, &Else_49, &ElseContainsTrace_50);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (Vars_41));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (Cond_45));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 3) = ((MR_Box) (Then_47));
              MR_hl_field(MR_mktag(3), GoalExpr_32, 4) = ((MR_Box) (Else_49));
            }
            Var_97 = hlds__hlds_goal__worst_contains_trace_2_f_0(ThenContainsTrace_48, ElseContainsTrace_50);
            *ContainsTrace_6 = hlds__hlds_goal__worst_contains_trace_2_f_0(CondContainsTrace_46, Var_97);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand0_76)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_proc.set_goal_contains_trace_features_in_goal\'/3", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_76, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_76, (MR_Integer) 1))));
                  MR_Word Inner_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_76, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_76, (MR_Integer) 3))));
                  MR_Word MainGoal0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_76, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_76, (MR_Integer) 5))));
                  MR_Word OrElseInners_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_76, (MR_Integer) 6))));
                  MR_Word MainGoal_84;
                  MR_Word MainContainsTrace_85;
                  MR_Word OrElseGoals_87;
                  MR_Word OrElseContainsTrace_88;
                  MR_Word ShortHand_89;

                  check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(MainGoal0_81, &MainGoal_84, &MainContainsTrace_85);
                  check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goals_4_p_0(OrElseGoals0_82, &OrElseGoals_87, (MR_Integer) 1, &OrElseContainsTrace_88);
                  {
                    ShortHand_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ShortHand_89, 0) = (MR_Box) ((MR_Unsigned) (GoalType_77));
                    MR_hl_field(MR_mktag(1), ShortHand_89, 1) = ((MR_Box) (Outer_78));
                    MR_hl_field(MR_mktag(1), ShortHand_89, 2) = ((MR_Box) (Inner_79));
                    MR_hl_field(MR_mktag(1), ShortHand_89, 3) = ((MR_Box) (MaybeOutputVars_80));
                    MR_hl_field(MR_mktag(1), ShortHand_89, 4) = ((MR_Box) (MainGoal_84));
                    MR_hl_field(MR_mktag(1), ShortHand_89, 5) = ((MR_Box) (OrElseGoals_87));
                    MR_hl_field(MR_mktag(1), ShortHand_89, 6) = ((MR_Box) (OrElseInners_83));
                  }
                  {
                    GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (ShortHand_89));
                  }
                  *ContainsTrace_6 = hlds__hlds_goal__worst_contains_trace_2_f_0(MainContainsTrace_85, OrElseContainsTrace_88);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_90 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_76, (MR_Integer) 0))));
                  MR_Word ResultVar_91 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_76, (MR_Integer) 1))));
                  MR_Word SubGoal0_106 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_76, (MR_Integer) 2))));
                  MR_Word SubGoal_107;
                  MR_Word ShortHand_108;

                  check_hlds__simplify__simplify_proc__set_goal_contains_trace_features_in_goal_3_p_0(SubGoal0_106, &SubGoal_107, ContainsTrace_6);
                  {
                    ShortHand_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ShortHand_108, 0) = ((MR_Box) (MaybeIO_90));
                    MR_hl_field(MR_mktag(2), ShortHand_108, 1) = ((MR_Box) (ResultVar_91));
                    MR_hl_field(MR_mktag(2), ShortHand_108, 2) = ((MR_Box) (SubGoal_107));
                  }
                  {
                    GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (ShortHand_108));
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
      hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, GoalInfo0_8, &GoalInfo_94);
      break;
    case (MR_Integer) 0:
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, GoalInfo0_8, &GoalInfo_94);
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_5 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_32));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_94));
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
  MR_Word GoalInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_16, (MR_Integer) 1))));
  MR_Word SimplifyTasks_13;
  MR_Word Common0_14;
  MR_Word STATE_VARIABLE_Goal_20_20;
  MR_Word STATE_VARIABLE_Info_21_21;
  MR_Word RerunQuantDelta_32;
  MR_Word RerunDet_40;
  MR_Word STATE_VARIABLE_Goal_46_63;
  MR_Word STATE_VARIABLE_Info_48_65;
  MR_Word _Common_15;

  check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(STATE_VARIABLE_Info_0_18, &SimplifyTasks_13);
  Common0_14 = check_hlds__simplify__common__common_info_init_1_f_0(SimplifyTasks_13);
  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(STATE_VARIABLE_Goal_0_16, &STATE_VARIABLE_Goal_20_20, NestedContext0_8, InstMap0_9, Common0_14, &_Common_15, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_21_21);
  check_hlds__simplify__simplify_info__simplify_info_get_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_21_21, &RerunQuantDelta_32);
  switch (RerunQuantDelta_32) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_Goal_46_63 = STATE_VARIABLE_Goal_20_20;
        STATE_VARIABLE_Info_48_65 = STATE_VARIABLE_Info_21_21;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word NonLocals_33;
        MR_Word InstVarSet_39;
        MR_Word STATE_VARIABLE_VarSet_33_50;
        MR_Word STATE_VARIABLE_VarTypes_34_51;
        MR_Word STATE_VARIABLE_RttiVarMaps_35_52;
        MR_Word STATE_VARIABLE_Goal_37_54;
        MR_Word STATE_VARIABLE_VarSet_38_55;
        MR_Word STATE_VARIABLE_VarTypes_39_56;
        MR_Word STATE_VARIABLE_RttiVarMaps_40_57;
        MR_Word STATE_VARIABLE_Info_41_58;
        MR_Word STATE_VARIABLE_Info_42_59;
        MR_Word STATE_VARIABLE_Info_43_60;
        MR_Word STATE_VARIABLE_ModuleInfo_44_61;
        MR_Word STATE_VARIABLE_ModuleInfo_47_64;
        MR_Word Var_38;

        NonLocals_33 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_12);
        check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_VarSet_33_50);
        check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_VarTypes_34_51);
        check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_RttiVarMaps_35_52);
        hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 0, NonLocals_33, &Var_38, STATE_VARIABLE_Goal_20_20, &STATE_VARIABLE_Goal_37_54, STATE_VARIABLE_VarSet_33_50, &STATE_VARIABLE_VarSet_38_55, STATE_VARIABLE_VarTypes_34_51, &STATE_VARIABLE_VarTypes_39_56, STATE_VARIABLE_RttiVarMaps_35_52, &STATE_VARIABLE_RttiVarMaps_40_57);
        check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(STATE_VARIABLE_VarSet_38_55, STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_Info_41_58);
        check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(STATE_VARIABLE_VarTypes_39_56, STATE_VARIABLE_Info_41_58, &STATE_VARIABLE_Info_42_59);
        check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(STATE_VARIABLE_RttiVarMaps_40_57, STATE_VARIABLE_Info_42_59, &STATE_VARIABLE_Info_43_60);
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_43_60, &STATE_VARIABLE_ModuleInfo_44_61);
        check_hlds__simplify__simplify_info__simplify_info_get_inst_varset_2_p_0(STATE_VARIABLE_Info_43_60, &InstVarSet_39);
        check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 0, STATE_VARIABLE_Goal_37_54, &STATE_VARIABLE_Goal_46_63, STATE_VARIABLE_VarTypes_39_56, InstVarSet_39, InstMap0_9, STATE_VARIABLE_ModuleInfo_44_61, &STATE_VARIABLE_ModuleInfo_47_64);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_47_64, STATE_VARIABLE_Info_43_60, &STATE_VARIABLE_Info_48_65);
      }
      break;
  }
  check_hlds__simplify__simplify_info__simplify_info_get_rerun_det_2_p_0(STATE_VARIABLE_Info_48_65, &RerunDet_40);
  switch (RerunDet_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_Goal_17 = STATE_VARIABLE_Goal_46_63;
        *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_48_65;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Detism_41;
        MR_Word SolnContext_43;
        MR_Word PredProcId_44;
        MR_Word PredInfo_45;
        MR_Word DetInfo0_46;
        MR_Word DetInfo_49;
        MR_Word STATE_VARIABLE_ModuleInfo_49_66;
        MR_Word STATE_VARIABLE_VarSet_50_67;
        MR_Word STATE_VARIABLE_VarTypes_51_68;
        MR_Word STATE_VARIABLE_RttiVarMaps_52_69;
        MR_Word STATE_VARIABLE_ProcInfo_53_70;
        MR_Word STATE_VARIABLE_ProcInfo_54_71;
        MR_Word STATE_VARIABLE_ProcInfo_55_72;
        MR_Word STATE_VARIABLE_ModuleInfo_56_73;
        MR_Word STATE_VARIABLE_Info_57_74;
        MR_Word STATE_VARIABLE_ModuleInfo_63_80;
        MR_Word STATE_VARIABLE_VarTypes_64_81;
        MR_Word STATE_VARIABLE_Info_65_82;
        MR_Word Var_47;
        MR_Word Var_48;

        Detism_41 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_12);
        check_hlds__det_analysis__det_get_soln_context_2_p_0(Detism_41, &SolnContext_43);
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_48_65, &STATE_VARIABLE_ModuleInfo_49_66);
        check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_48_65, &STATE_VARIABLE_VarSet_50_67);
        check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_48_65, &STATE_VARIABLE_VarTypes_51_68);
        check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_48_65, &STATE_VARIABLE_RttiVarMaps_52_69);
        check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_48_65, &PredProcId_44);
        hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_49_66, PredProcId_44, &PredInfo_45, &STATE_VARIABLE_ProcInfo_53_70);
        hlds__hlds_pred__proc_info_set_varset_vartypes_4_p_0(STATE_VARIABLE_VarSet_50_67, STATE_VARIABLE_VarTypes_51_68, STATE_VARIABLE_ProcInfo_53_70, &STATE_VARIABLE_ProcInfo_54_71);
        hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(STATE_VARIABLE_RttiVarMaps_52_69, STATE_VARIABLE_ProcInfo_54_71, &STATE_VARIABLE_ProcInfo_55_72);
        hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PredProcId_44, PredInfo_45, STATE_VARIABLE_ProcInfo_55_72, STATE_VARIABLE_ModuleInfo_49_66, &STATE_VARIABLE_ModuleInfo_56_73);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_56_73, STATE_VARIABLE_Info_48_65, &STATE_VARIABLE_Info_57_74);
        check_hlds__det_util__det_info_init_7_p_0(STATE_VARIABLE_ModuleInfo_56_73, PredProcId_44, STATE_VARIABLE_VarSet_50_67, STATE_VARIABLE_VarTypes_51_68, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &DetInfo0_46);
        check_hlds__det_analysis__det_infer_goal_10_p_0(STATE_VARIABLE_Goal_46_63, STATE_VARIABLE_Goal_17, InstMap0_9, SolnContext_43, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Var_47, &Var_48, DetInfo0_46, &DetInfo_49);
        check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_49, &STATE_VARIABLE_ModuleInfo_63_80);
        check_hlds__det_util__det_info_get_vartypes_2_p_0(DetInfo_49, &STATE_VARIABLE_VarTypes_64_81);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_63_80, STATE_VARIABLE_Info_57_74, &STATE_VARIABLE_Info_65_82);
        check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(STATE_VARIABLE_VarTypes_64_81, STATE_VARIABLE_Info_65_82, STATE_VARIABLE_Info_19);
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
  GoalExpr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 0))));
  GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 1))));
  succeeded = ((((MR_tag((MR_Word) GoalExpr_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    Attributes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 1))));
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
        MR_Word MayDuplicate_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayDuplicate_23, (MR_Integer) 0))));

        switch (MayDuplicate_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_11, (MR_Integer) 7);
              if (succeeded)
              {
                MR_Word Spec_38;

                {
                  Spec_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_proc.maybe_warn_about_may_duplicate_attributes\'/5"));
                  MR_hl_field(MR_mktag(1), Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_proc_scalar_common_3[1])));
                  MR_hl_field(MR_mktag(1), Spec_38, 3) = ((MR_Box) (Context_22));
                  MR_hl_field(MR_mktag(1), Spec_38, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[12])));
                }
                {
                  STATE_VARIABLE_Specs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_29_29, 0) = ((MR_Box) (Spec_38));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
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
                MR_Word Spec_82;

                {
                  Spec_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_82, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_proc.maybe_warn_about_may_duplicate_attributes\'/5"));
                  MR_hl_field(MR_mktag(1), Spec_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_82, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_proc_scalar_common_3[1])));
                  MR_hl_field(MR_mktag(1), Spec_82, 3) = ((MR_Box) (Context_22));
                  MR_hl_field(MR_mktag(1), Spec_82, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[18])));
                }
                {
                  STATE_VARIABLE_Specs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_29_29, 0) = ((MR_Box) (Spec_82));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
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
        MR_Word MayExportBody_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayExportBody_25, (MR_Integer) 0))));

        check_hlds__simplify__simplify_proc__maybe_warn_about_may_export_body_attribute_5_p_0(MayExportBody_26, Markers_11, Context_22, STATE_VARIABLE_Specs_29_29, STATE_VARIABLE_Specs_28);
      }
    }
  }
  else
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__maybe_warn_about_may_export_body_attribute_5_p_0(
  MR_Word MayExportBody_6,
  MR_Word Markers_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  MR_bool succeeded;

  switch (MayExportBody_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_7, (MR_Integer) 7);
        if (succeeded)
        {
          MR_Word Spec_11;

          {
            Spec_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_proc.maybe_warn_about_may_export_body_attribute\'/5"));
            MR_hl_field(MR_mktag(1), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_proc_scalar_common_3[1])));
            MR_hl_field(MR_mktag(1), Spec_11, 3) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(1), Spec_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[21])));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
          }
        }
        else
          *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_8_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word ImplicitStreamWarnings_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word * FormatSpecs_13,
  MR_Word STATE_VARIABLE_ProcInfo_0_29,
  MR_Word * STATE_VARIABLE_ProcInfo_30)
{
  MR_Word Goal0_15;
  MR_Word VarSet0_16;
  MR_Word VarTypes0_17;
  MR_Word MaybeGoal_18;
  MR_Word VarSet_19;
  MR_Word VarTypes_20;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_29, &Goal0_15);
  hlds__hlds_pred__proc_info_get_varset_vartypes_3_p_0(STATE_VARIABLE_ProcInfo_0_29, &VarSet0_16, &VarTypes0_17);
  check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0(STATE_VARIABLE_ModuleInfo_0_27, ImplicitStreamWarnings_10, Goal0_15, &MaybeGoal_18, FormatSpecs_13, VarSet0_16, &VarSet_19, VarTypes0_17, &VarTypes_20);
  if ((MaybeGoal_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
    *STATE_VARIABLE_ProcInfo_30 = STATE_VARIABLE_ProcInfo_0_29;
  }
  else
  {
    MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_18, (MR_Integer) 0))));
    MR_Word PredInfo0_22;
    MR_Word PredInfo1_23;
    MR_Word Markers1_24;
    MR_Word Markers_25;
    MR_Word PredInfo_26;
    MR_Word STATE_VARIABLE_ProcInfo_31_31;
    MR_Word STATE_VARIABLE_ProcInfo_32_32;
    MR_Word STATE_VARIABLE_ProcInfo_34_34;
    MR_Word STATE_VARIABLE_ModuleInfo_37_37;

    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_21, STATE_VARIABLE_ProcInfo_0_29, &STATE_VARIABLE_ProcInfo_31_31);
    hlds__hlds_pred__proc_info_set_varset_vartypes_4_p_0(VarSet_19, VarTypes_20, STATE_VARIABLE_ProcInfo_31_31, &STATE_VARIABLE_ProcInfo_32_32);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_32_32, &STATE_VARIABLE_ProcInfo_34_34);
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_34_34, STATE_VARIABLE_ProcInfo_30, STATE_VARIABLE_ModuleInfo_0_27, &STATE_VARIABLE_ModuleInfo_37_37);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_37_37, PredId_11, &PredInfo0_22);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_12, *STATE_VARIABLE_ProcInfo_30, PredInfo0_22, &PredInfo1_23);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo1_23, &Markers1_24);
    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 26, Markers1_24, &Markers_25);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_25, PredInfo1_23, &PredInfo_26);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_11, PredInfo_26, STATE_VARIABLE_ModuleInfo_37_37, STATE_VARIABLE_ModuleInfo_28);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_mark_modecheck_clauses_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_13,
  MR_Word * STATE_VARIABLE_ProcInfo_14)
{
  MR_bool succeeded;
  MR_Word Goal0_4;
  MR_Word GoalExpr0_5;
  MR_Word GoalInfo0_6;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_13, &Goal0_4);
  GoalExpr0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_4, (MR_Integer) 0))));
  GoalInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_4, (MR_Integer) 1))));
  if (((((MR_tag((MR_Word) GoalExpr0_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
    succeeded = MR_TRUE;
  else
  if (((((MR_tag((MR_Word) GoalExpr0_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    MR_Word GoalInfo_11;
    MR_Word Goal_12;

    hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 17, GoalInfo0_6, &GoalInfo_11);
    {
      Goal_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_12, 0) = ((MR_Box) (GoalExpr0_5));
      MR_hl_field(MR_mktag(0), Goal_12, 1) = ((MR_Box) (GoalInfo_11));
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_12, STATE_VARIABLE_ProcInfo_0_13, STATE_VARIABLE_ProcInfo_14);
  }
  else
    *STATE_VARIABLE_ProcInfo_14 = STATE_VARIABLE_ProcInfo_0_13;
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
  MR_Word STATE_VARIABLE_SimplifyTasks_0_19,
  MR_Word * STATE_VARIABLE_SimplifyTasks_20)
{
  MR_bool succeeded;
  MR_Word Globals_10;
  MR_String CommonStructPreds_11;
  MR_Word TurnOffCommonStructByRequest_12;
  MR_Word VarTypes0_17;
  MR_Integer NumVars_18;
  MR_Word _VarSet0_16;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 209, &CommonStructPreds_11);
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
  hlds__hlds_pred__proc_info_get_varset_vartypes_3_p_0(ProcInfo_8, &_VarSet0_16, &VarTypes0_17);
  hlds__vartypes__vartypes_count_2_p_0(VarTypes0_17, &NumVars_18);
  succeeded = (TurnOffCommonStructByRequest_12 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (NumVars_18 > (MR_Integer) 12000);
  if (succeeded)
  {
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SimplifyTasks_0_19, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_SimplifyTasks_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
    }
  }
  else
    *STATE_VARIABLE_SimplifyTasks_20 = STATE_VARIABLE_SimplifyTasks_0_19;
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
