/*
** Automatically generated from `unique_modes.m'
** by the Mercury compiler,
** version rotd-2026-03-05
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


// :- module check_hlds.unique_modes.
// :- implementation.

/*
INIT mercury__check_hlds__unique_modes__init
ENDINIT
*/

#include "check_hlds.unique_modes.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_make.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_call.mih"
#include "check_hlds.modecheck_unify.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.modes.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_lookup.mih"
#include "hlds.inst_match.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.mode_util.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__unique_modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unique_modes__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static MR_bool MR_CALL 
check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__549__1_2_p_0(
  MR_Word LambdaHeadVar__1_21,
  MR_Word * LambdaHeadVar__2_22);

static MR_bool MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0(
  MR_Word Goals0_7,
  MR_Word NonLocalVarsBag_8,
  MR_Word * Goals_9,
  MR_Word * Instmaps_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_1_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_flatten_and_check_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_p_0(
  MR_Word GoalType_12,
  MR_Word Outer_13,
  MR_Word Inner_14,
  MR_Word MaybeOutputVars_15,
  MR_Word MainGoal0_16,
  MR_Word OrElseGoals0_17,
  MR_Word OrElseInners_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalExpr_20,
  MR_Word STATE_VARIABLE_ModeInfo_0_34,
  MR_Word * STATE_VARIABLE_ModeInfo_35);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_scope_6_p_0(
  MR_Word Reason_7,
  MR_Word SubGoal0_8,
  MR_Word GoalInfo0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_44,
  MR_Word * STATE_VARIABLE_ModeInfo_45);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_negation_5_p_0(
  MR_Word SubGoal0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_16,
  MR_Word * STATE_VARIABLE_ModeInfo_17);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_p_0(
  MR_Word Vars_9,
  MR_Word Cond0_10,
  MR_Word Then0_11,
  MR_Word Else0_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_34,
  MR_Word * STATE_VARIABLE_ModeInfo_35);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * STATE_VARIABLE_ModeInfo_6);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_switch_7_p_0(
  MR_Word Var_8,
  MR_Word CanFail_9,
  MR_Word Cases0_10,
  MR_Word GoalInfo0_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_21,
  MR_Word * STATE_VARIABLE_ModeInfo_22);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_disjuncts_7_p_0(
  MR_Word DisjDetism_1,
  MR_Word DisjNonLocals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * STATE_VARIABLE_ModeInfo_7);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_disj_5_p_0(
  MR_Word Goals0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_conj_6_p_0(
  MR_Word ConjType_7,
  MR_Word Goals0_8,
  MR_Word GoalInfo0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * STATE_VARIABLE_ModeInfo_16);

static void MR_CALL 
check_hlds__unique_modes__select_changed_inst_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__unique_modes__select_live_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModeInfo_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_generic_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31);

static MR_Box MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_foreign_call_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_foreign_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_plain_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * STATE_VARIABLE_ModeInfo_18);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_plain_or_foreign_call_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId0_9,
  MR_Word ArgVars_10,
  MR_Word GoalInfo_11,
  MR_Integer * ProcId_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_38,
  MR_Word * STATE_VARIABLE_ModeInfo_39);

static void MR_CALL 
check_hlds__unique_modes__select_nondet_live_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModeInfo_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__unique_modes__make_vars_mostly_uniq_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModeInfo_0_2,
  MR_Word * STATE_VARIABLE_ModeInfo_3);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_unify_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * STATE_VARIABLE_ModeInfo_16);


static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_3[2][5];




static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_3[0])),
    ((MR_Box) (check_hlds__unique_modes__unique_modes_check_goal_foreign_call_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_3[1])),
    ((MR_Box) (check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unique_modes__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unique_modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unique_modes__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__unique_modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static MR_bool MR_CALL 
check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__549__1_2_p_0(
  MR_Word LambdaHeadVar__1_21,
  MR_Word * LambdaHeadVar__2_22)
{
  MR_bool succeeded;
  MR_Integer Multiplicity_9;

  *LambdaHeadVar__2_22 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_21, 0))));
  Multiplicity_9 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__1_21, 1))));
  succeeded = (Multiplicity_9 > (MR_Integer) 1);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_22;

  succeeded = check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__549__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_22);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_22));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0(
  MR_Word Goals0_7,
  MR_Word NonLocalVarsBag_8,
  MR_Word * Goals_9,
  MR_Word * Instmaps_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_ModeInfo_1_14;
  MR_Word NonLocalVarsList_15;
  MR_Word SharedVars_16;
  MR_Word InstMap0_17;
  MR_Word SharedVarOrigInsts_18;
  MR_Word ModuleInfo0_19;
  MR_Word SharedVarTypes_20;
  MR_Word SharedVarInsts_21;
  MR_Word ModuleInfo1_22;
  MR_Word InstMap1_23;
  MR_Word STATE_VARIABLE_ModeInfo_1_25;

  mercury__bag__to_assoc_list_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]), NonLocalVarsBag_8, &NonLocalVarsList_15);
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_2[0]), (MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]), (MR_Word) (&check_hlds__unique_modes_scalar_common_2[3]), NonLocalVarsList_15, &SharedVars_16);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_12, &InstMap0_17);
  hlds__instmap__instmap_lookup_vars_3_p_0(InstMap0_17, SharedVars_16, &SharedVarOrigInsts_18);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_12, &ModuleInfo0_19);
  check_hlds__mode_info__mode_info_get_types_of_vars_3_p_0(STATE_VARIABLE_ModeInfo_0_12, SharedVars_16, &SharedVarTypes_20);
  check_hlds__inst_make__make_shared_inst_list_5_p_0(SharedVarTypes_20, SharedVarOrigInsts_18, &SharedVarInsts_21, ModuleInfo0_19, &ModuleInfo1_22);
  check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo1_22, STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_1_25);
  hlds__instmap__instmap_set_vars_corresponding_4_p_0(SharedVars_16, SharedVarInsts_21, InstMap0_17, &InstMap1_23);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap1_23, STATE_VARIABLE_ModeInfo_1_25, &STATE_VARIABLE_ModeInfo_1_14);
  check_hlds__unique_modes__unique_modes_check_par_conj_1_5_p_0(Goals0_7, Goals_9, Instmaps_10, STATE_VARIABLE_ModeInfo_1_14, STATE_VARIABLE_ModeInfo_13);
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_1_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
  }
  else
  {
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_11;
    MR_Word Goals_12;
    MR_Word InstMap_13;
    MR_Word NonLocals_14;
    MR_Word InstMaps_15;
    MR_Word InstMap0_17;
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_ModeInfo_1_21;
    MR_Word STATE_VARIABLE_ModeInfo_2_22;

    NonLocals_14 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_9);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_4, &InstMap0_17);
    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_9, &Goal_11, STATE_VARIABLE_ModeInfo_0_4, &STATE_VARIABLE_ModeInfo_1_21);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_21, &InstMap_13);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (InstMap_13));
      MR_hl_field(0, Var_20, 1) = ((MR_Box) (NonLocals_14));
    }
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_17, STATE_VARIABLE_ModeInfo_1_21, &STATE_VARIABLE_ModeInfo_2_22);
    check_hlds__unique_modes__unique_modes_check_par_conj_1_5_p_0(Goals0_10, &Goals_12, &InstMaps_15, STATE_VARIABLE_ModeInfo_2_22, STATE_VARIABLE_ModeInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (InstMaps_15));
    }
  }
}

void MR_CALL 
check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(
  MR_Word ModeInfo0_3,
  MR_Word * ModeInfo_4)
{
  MR_bool succeeded;
  MR_Word FullInstMap0_5;

  check_hlds__mode_info__mode_info_get_instmap_2_p_0(ModeInfo0_3, &FullInstMap0_5);
  succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_5);
  if (succeeded)
  {
    MR_Word AllVars_6;
    MR_Word NondetLiveVars_7;

    hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_5, &AllVars_6);
    check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_6, ModeInfo0_3, &NondetLiveVars_7);
    check_hlds__unique_modes__make_vars_mostly_uniq_3_p_0(NondetLiveVars_7, ModeInfo0_3, ModeInfo_4);
  }
  else
    *ModeInfo_4 = ModeInfo0_3;
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_flatten_and_check_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
    }
    else
    {
      MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ConjGoals_15;
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Goal0_11, 0))));
      MR_Word Var_22;

      succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_20, 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_22 = ((MR_Unsigned) ((MR_hl_field(3, Var_20, 1))) & (MR_Integer) 1);
        ConjGoals_15 = ((MR_Word) ((MR_hl_field(3, Var_20, 2))));
        succeeded = (HeadVar__1_1 == Var_22);
      }
      if (succeeded)
      {
        MR_Word Goals1_17;
        MR_Word next_value_of_HeadVar__2_2;

        mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConjGoals_15, Goals0_12, &Goals1_17);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Goals1_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word Goal_23;
        MR_Word Goals_24;
        MR_Word NonLocals_25;
        MR_Word InstMap_26;
        MR_Word STATE_VARIABLE_ModeInfo_1_27;
        MR_Word STATE_VARIABLE_ModeInfo_2_28;

        NonLocals_25 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_11);
        check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_25, STATE_VARIABLE_ModeInfo_0_4, &STATE_VARIABLE_ModeInfo_1_27);
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_11, &Goal_23, STATE_VARIABLE_ModeInfo_1_27, &STATE_VARIABLE_ModeInfo_2_28);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_28, &InstMap_26);
        succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap_26);
        if (succeeded)
        {
          check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(Goals0_12, STATE_VARIABLE_ModeInfo_2_28, STATE_VARIABLE_ModeInfo_5);
          Goals_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
          check_hlds__unique_modes__unique_modes_flatten_and_check_conj_5_p_0(HeadVar__1_1, Goals0_12, &Goals_24, STATE_VARIABLE_ModeInfo_2_28, STATE_VARIABLE_ModeInfo_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_23));
          MR_hl_field(1, base, 1) = ((MR_Box) (Goals_24));
        }
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_p_0(
  MR_Word GoalType_12,
  MR_Word Outer_13,
  MR_Word Inner_14,
  MR_Word MaybeOutputVars_15,
  MR_Word MainGoal0_16,
  MR_Word OrElseGoals0_17,
  MR_Word OrElseInners_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalExpr_20,
  MR_Word STATE_VARIABLE_ModeInfo_0_34,
  MR_Word * STATE_VARIABLE_ModeInfo_35)
{
  MR_bool succeeded;
  MR_Word MainGoal_22;
  MR_Word OrElseGoals_23;
  MR_Word ShortHand_33;
  MR_Word STATE_VARIABLE_ModeInfo_1_38;
  MR_Word STATE_VARIABLE_ModeInfo_2_39;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "atomic_goal", GoalInfo0_19, STATE_VARIABLE_ModeInfo_0_34, &STATE_VARIABLE_ModeInfo_1_38);
  if ((OrElseGoals0_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(MainGoal0_16, &MainGoal_22, STATE_VARIABLE_ModeInfo_1_38, &STATE_VARIABLE_ModeInfo_2_39);
    OrElseGoals_23 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word NonLocals_26;
    MR_Word Determinism_27;
    MR_Word Goals_30;
    MR_Word InstMaps_31;
    MR_Word ArmInstMaps_32;
    MR_Word STATE_VARIABLE_ModeInfo_5_43;
    MR_Word STATE_VARIABLE_ModeInfo_6_44;
    MR_Word InstMap_65;
    MR_Word InstMaps_66;
    MR_Word InstMap0_67;
    MR_Word STATE_VARIABLE_ModeInfo_1_70;
    MR_Word STATE_VARIABLE_ModeInfo_2_71;
    MR_Word STATE_VARIABLE_ModeInfo_3_72;
    MR_Word Goal0_79;
    MR_Word Goals0_80;
    MR_Word Goal_81;
    MR_Word Goals_82;
    MR_Word InstMap_83;
    MR_Word InstMaps_84;
    MR_Word InstMap0_85;
    MR_Word STATE_VARIABLE_ModeInfo_1_88;
    MR_Word STATE_VARIABLE_ModeInfo_2_89;
    MR_Word STATE_VARIABLE_ModeInfo_3_90;
    MR_Word Var_51;
    MR_Word Var_28;

    NonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_19);
    Determinism_27 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_19);
    parse_tree__prog_data__determinism_components_3_p_0(Determinism_27, &Var_28, &Var_51);
    succeeded = ((MR_Integer) 3 == Var_51);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_ModeInfo_3_41;
      MR_Word STATE_VARIABLE_ModeInfo_4_42;
      MR_Word FullInstMap0_52;

      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_26, STATE_VARIABLE_ModeInfo_1_38, &STATE_VARIABLE_ModeInfo_3_41);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_3_41, &FullInstMap0_52);
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_52);
      if (succeeded)
      {
        MR_Word AllVars_53;
        MR_Word NondetLiveVars_54;

        hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_52, &AllVars_53);
        check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_53, STATE_VARIABLE_ModeInfo_3_41, &NondetLiveVars_54);
        check_hlds__unique_modes__make_vars_mostly_uniq_3_p_0(NondetLiveVars_54, STATE_VARIABLE_ModeInfo_3_41, &STATE_VARIABLE_ModeInfo_4_42);
      }
      else
        STATE_VARIABLE_ModeInfo_4_42 = STATE_VARIABLE_ModeInfo_3_41;
      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_26, STATE_VARIABLE_ModeInfo_4_42, &STATE_VARIABLE_ModeInfo_5_43);
    }
    else
      STATE_VARIABLE_ModeInfo_5_43 = STATE_VARIABLE_ModeInfo_1_38;
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_5_43, &InstMap0_67);
    check_hlds__unique_modes__unique_modes_prepare_for_disjunct_5_p_0(MainGoal0_16, Determinism_27, NonLocals_26, STATE_VARIABLE_ModeInfo_5_43, &STATE_VARIABLE_ModeInfo_1_70);
    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(MainGoal0_16, &MainGoal_22, STATE_VARIABLE_ModeInfo_1_70, &STATE_VARIABLE_ModeInfo_2_71);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_71, &InstMap_65);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_67, STATE_VARIABLE_ModeInfo_2_71, &STATE_VARIABLE_ModeInfo_3_72);
    Goal0_79 = ((MR_Word) ((MR_hl_field(1, OrElseGoals0_17, 0))));
    Goals0_80 = ((MR_Word) ((MR_hl_field(1, OrElseGoals0_17, 1))));
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_3_72, &InstMap0_85);
    check_hlds__unique_modes__unique_modes_prepare_for_disjunct_5_p_0(Goal0_79, Determinism_27, NonLocals_26, STATE_VARIABLE_ModeInfo_3_72, &STATE_VARIABLE_ModeInfo_1_88);
    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_79, &Goal_81, STATE_VARIABLE_ModeInfo_1_88, &STATE_VARIABLE_ModeInfo_2_89);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_89, &InstMap_83);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_85, STATE_VARIABLE_ModeInfo_2_89, &STATE_VARIABLE_ModeInfo_3_90);
    check_hlds__unique_modes__unique_modes_check_disjuncts_7_p_0(Determinism_27, NonLocals_26, Goals0_80, &Goals_82, &InstMaps_84, STATE_VARIABLE_ModeInfo_3_90, &STATE_VARIABLE_ModeInfo_6_44);
    {
      OrElseGoals_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, OrElseGoals_23, 0) = ((MR_Box) (Goal_81));
      MR_hl_field(1, OrElseGoals_23, 1) = ((MR_Box) (Goals_82));
    }
    {
      InstMaps_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InstMaps_66, 0) = ((MR_Box) (InstMap_83));
      MR_hl_field(1, InstMaps_66, 1) = ((MR_Box) (InstMaps_84));
    }
    {
      Goals_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Goals_30, 0) = ((MR_Box) (MainGoal_22));
      MR_hl_field(1, Goals_30, 1) = ((MR_Box) (OrElseGoals_23));
    }
    {
      InstMaps_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InstMaps_31, 0) = ((MR_Box) (InstMap_65));
      MR_hl_field(1, InstMaps_31, 1) = ((MR_Box) (InstMaps_66));
    }
    hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Goals_30, InstMaps_31, &ArmInstMaps_32);
    hlds__instmap__instmap_merge_5_p_0(NonLocals_26, ArmInstMaps_32, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_6_44, &STATE_VARIABLE_ModeInfo_2_39);
  }
  {
    ShortHand_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ShortHand_33, 0) = (MR_Box) ((MR_Unsigned) (GoalType_12));
    MR_hl_field(1, ShortHand_33, 1) = ((MR_Box) (Outer_13));
    MR_hl_field(1, ShortHand_33, 2) = ((MR_Box) (Inner_14));
    MR_hl_field(1, ShortHand_33, 3) = ((MR_Box) (MaybeOutputVars_15));
    MR_hl_field(1, ShortHand_33, 4) = ((MR_Box) (MainGoal_22));
    MR_hl_field(1, ShortHand_33, 5) = ((MR_Box) (OrElseGoals_23));
    MR_hl_field(1, ShortHand_33, 6) = ((MR_Box) (OrElseInners_18));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_20 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_33));
  }
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "atomic_goal", GoalInfo0_19, STATE_VARIABLE_ModeInfo_2_39, STATE_VARIABLE_ModeInfo_35);
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_scope_6_p_0(
  MR_Word Reason_7,
  MR_Word SubGoal0_8,
  MR_Word GoalInfo0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_44,
  MR_Word * STATE_VARIABLE_ModeInfo_45)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Reason_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_ModeInfo_13_80;
        MR_Word STATE_VARIABLE_ModeInfo_14_81;
        MR_Word SubGoal_98;

        check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_44, &STATE_VARIABLE_ModeInfo_13_80);
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_8, &SubGoal_98, STATE_VARIABLE_ModeInfo_13_80, &STATE_VARIABLE_ModeInfo_14_81);
        check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_14_81, STATE_VARIABLE_ModeInfo_45);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_10 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
          MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_98));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Reason_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 8:
          {
            MR_Word STATE_VARIABLE_ModeInfo_13_80;
            MR_Word STATE_VARIABLE_ModeInfo_14_81;
            MR_Word SubGoal_98;

            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_44, &STATE_VARIABLE_ModeInfo_13_80);
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_8, &SubGoal_98, STATE_VARIABLE_ModeInfo_13_80, &STATE_VARIABLE_ModeInfo_14_81);
            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_14_81, STATE_VARIABLE_ModeInfo_45);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_98));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word TermVar_20 = ((MR_Word) ((MR_hl_field(3, Reason_7, 1))));
            MR_Word FGT_21 = ((MR_Unsigned) ((MR_hl_field(3, Reason_7, 2))) & (MR_Integer) 3);

            switch (FGT_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word LiveTermVar_22;
                  MR_Word STATE_VARIABLE_ModeInfo_7_60;
                  MR_Word STATE_VARIABLE_ModeInfo_8_61;

                  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "fgt_construct scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_44, &STATE_VARIABLE_ModeInfo_7_60);
                  check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_7_60, TermVar_20, &LiveTermVar_22);
                  switch (LiveTermVar_22) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        *GoalExpr_10 = (MR_Word) (MR_mkword(3, &check_hlds__unique_modes_scalar_common_2[1]));
                        STATE_VARIABLE_ModeInfo_8_61 = STATE_VARIABLE_ModeInfo_7_60;
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word SubGoalInfo_24 = ((MR_Word) ((MR_hl_field(0, SubGoal0_8, 1))));
                        MR_Word InstMapDelta_25;
                        MR_Word TermVarInst_26;

                        InstMapDelta_25 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(SubGoalInfo_24);
                        succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_25, TermVar_20, &TermVarInst_26);
                        if (succeeded)
                        {
                          MR_Word InstMap_27;
                          MR_Word InstMap0_85;

                          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_7_60, &InstMap0_85);
                          hlds__instmap__instmap_set_var_4_p_0(TermVar_20, TermVarInst_26, InstMap0_85, &InstMap_27);
                          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_27, STATE_VARIABLE_ModeInfo_7_60, &STATE_VARIABLE_ModeInfo_8_61);
                        }
                        else
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", (MR_String) "bad InstMapDelta");
                            return;
                          }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_10 = base;
                          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
                          MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal0_8));
                        }
                      }
                      break;
                  }
                  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "fgt_construct scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_8_61, STATE_VARIABLE_ModeInfo_45);
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  MR_Word STATE_VARIABLE_ModeInfo_10_71;
                  MR_Word STATE_VARIABLE_ModeInfo_11_72;
                  MR_Word SubGoal_93;

                  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "fgt_non_construct scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_44, &STATE_VARIABLE_ModeInfo_10_71);
                  check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_8, &SubGoal_93, STATE_VARIABLE_ModeInfo_10_71, &STATE_VARIABLE_ModeInfo_11_72);
                  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "fgt_non_construct scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_11_72, STATE_VARIABLE_ModeInfo_45);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
                    MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_93));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", (MR_String) "from_ground_term_initial");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word InstMap0_17;
            MR_Word NonLocals_18;
            MR_Word SubGoal_19;
            MR_Word STATE_VARIABLE_ModeInfo_1_48;
            MR_Word STATE_VARIABLE_ModeInfo_2_50;
            MR_Word STATE_VARIABLE_ModeInfo_3_51;
            MR_Word STATE_VARIABLE_ModeInfo_4_53;
            MR_Word STATE_VARIABLE_ModeInfo_5_54;

            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "trace scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_44, &STATE_VARIABLE_ModeInfo_1_48);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_48, &InstMap0_17);
            NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_9);
            check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 8U), NonLocals_18, STATE_VARIABLE_ModeInfo_1_48, &STATE_VARIABLE_ModeInfo_2_50);
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_8, &SubGoal_19, STATE_VARIABLE_ModeInfo_2_50, &STATE_VARIABLE_ModeInfo_3_51);
            check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 8U), NonLocals_18, STATE_VARIABLE_ModeInfo_3_51, &STATE_VARIABLE_ModeInfo_4_53);
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_17, STATE_VARIABLE_ModeInfo_4_53, &STATE_VARIABLE_ModeInfo_5_54);
            check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "trace scope", GoalInfo0_9, STATE_VARIABLE_ModeInfo_5_54, STATE_VARIABLE_ModeInfo_45);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_19));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_negation_5_p_0(
  MR_Word SubGoal0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_16,
  MR_Word * STATE_VARIABLE_ModeInfo_17)
{
  MR_Word InstMap0_10;
  MR_Word NonLocals_11;
  MR_Word NonLocalsList_12;
  MR_Word LiveNonLocals_13;
  MR_Word LiveVars0_14;
  MR_Word SubGoal_15;
  MR_Word STATE_VARIABLE_ModeInfo_1_20;
  MR_Word STATE_VARIABLE_ModeInfo_2_21;
  MR_Word Var_22;
  MR_Word STATE_VARIABLE_ModeInfo_3_23;
  MR_Word STATE_VARIABLE_ModeInfo_4_25;
  MR_Word STATE_VARIABLE_ModeInfo_5_26;
  MR_Word STATE_VARIABLE_ModeInfo_6_28;
  MR_Word STATE_VARIABLE_ModeInfo_7_29;
  MR_Word STATE_VARIABLE_ModeInfo_8_30;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "not", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_16, &STATE_VARIABLE_ModeInfo_1_20);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_20, &InstMap0_10);
  NonLocals_11 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_11, &NonLocalsList_12);
  check_hlds__unique_modes__select_live_vars_3_p_0(NonLocalsList_12, STATE_VARIABLE_ModeInfo_1_20, &LiveNonLocals_13);
  check_hlds__unique_modes__make_vars_mostly_uniq_3_p_0(LiveNonLocals_13, STATE_VARIABLE_ModeInfo_1_20, &STATE_VARIABLE_ModeInfo_2_21);
  check_hlds__mode_info__mode_info_get_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_2_21, &LiveVars0_14);
  Var_22 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
  check_hlds__mode_info__mode_info_set_live_vars_3_p_0(Var_22, STATE_VARIABLE_ModeInfo_2_21, &STATE_VARIABLE_ModeInfo_3_23);
  check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 0U), NonLocals_11, STATE_VARIABLE_ModeInfo_3_23, &STATE_VARIABLE_ModeInfo_4_25);
  check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_6, &SubGoal_15, STATE_VARIABLE_ModeInfo_4_25, &STATE_VARIABLE_ModeInfo_5_26);
  check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 0U), NonLocals_11, STATE_VARIABLE_ModeInfo_5_26, &STATE_VARIABLE_ModeInfo_6_28);
  check_hlds__mode_info__mode_info_set_live_vars_3_p_0(LiveVars0_14, STATE_VARIABLE_ModeInfo_6_28, &STATE_VARIABLE_ModeInfo_7_29);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_10, STATE_VARIABLE_ModeInfo_7_29, &STATE_VARIABLE_ModeInfo_8_30);
  *GoalExpr_8 = (MR_Word) ((MR_Word) (SubGoal_15));
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "not", GoalInfo0_7, STATE_VARIABLE_ModeInfo_8_30, STATE_VARIABLE_ModeInfo_17);
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_p_0(
  MR_Word Vars_9,
  MR_Word Cond0_10,
  MR_Word Then0_11,
  MR_Word Else0_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_34,
  MR_Word * STATE_VARIABLE_ModeInfo_35)
{
  MR_bool succeeded;
  MR_Word NonLocals_16;
  MR_Word CondVars_17;
  MR_Word ThenVars_18;
  MR_Word ElseVars_19;
  MR_Word InstMap0_20;
  MR_Word CondVarList_21;
  MR_Word CondLiveVars_22;
  MR_Word CondInfo0_24;
  MR_Word CondDeltaInstMap0_25;
  MR_Word ChangedVars_26;
  MR_Word Cond_27;
  MR_Word InstMapCond_28;
  MR_Word Then_29;
  MR_Word InstMapThen_30;
  MR_Word Else_31;
  MR_Word InstMapElse_32;
  MR_Word ArmInstMaps_33;
  MR_Word STATE_VARIABLE_ModeInfo_1_38;
  MR_Word STATE_VARIABLE_ModeInfo_2_40;
  MR_Word STATE_VARIABLE_ModeInfo_3_41;
  MR_Word STATE_VARIABLE_ModeInfo_4_42;
  MR_Word STATE_VARIABLE_ModeInfo_5_43;
  MR_Word STATE_VARIABLE_ModeInfo_6_44;
  MR_Word STATE_VARIABLE_ModeInfo_7_45;
  MR_Word STATE_VARIABLE_ModeInfo_8_46;
  MR_Word STATE_VARIABLE_ModeInfo_9_48;
  MR_Word STATE_VARIABLE_ModeInfo_10_49;
  MR_Word STATE_VARIABLE_ModeInfo_11_50;
  MR_Word STATE_VARIABLE_ModeInfo_12_51;
  MR_Word STATE_VARIABLE_ModeInfo_13_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word STATE_VARIABLE_ModeInfo_14_60;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "if-then-else", GoalInfo0_13, STATE_VARIABLE_ModeInfo_0_34, &STATE_VARIABLE_ModeInfo_1_38);
  NonLocals_16 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
  CondVars_17 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Cond0_10);
  ThenVars_18 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Then0_11);
  ElseVars_19 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Else0_12);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_38, &InstMap0_20);
  check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 4U), NonLocals_16, STATE_VARIABLE_ModeInfo_1_38, &STATE_VARIABLE_ModeInfo_2_40);
  check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ElseVars_19, STATE_VARIABLE_ModeInfo_2_40, &STATE_VARIABLE_ModeInfo_3_41);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondVars_17, &CondVarList_21);
  check_hlds__unique_modes__select_live_vars_3_p_0(CondVarList_21, STATE_VARIABLE_ModeInfo_3_41, &CondLiveVars_22);
  CondInfo0_24 = ((MR_Word) ((MR_hl_field(0, Cond0_10, 1))));
  CondDeltaInstMap0_25 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo0_24);
  check_hlds__unique_modes__select_changed_inst_vars_4_p_0(CondLiveVars_22, CondDeltaInstMap0_25, STATE_VARIABLE_ModeInfo_3_41, &ChangedVars_26);
  check_hlds__unique_modes__make_vars_mostly_uniq_3_p_0(ChangedVars_26, STATE_VARIABLE_ModeInfo_3_41, &STATE_VARIABLE_ModeInfo_4_42);
  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ElseVars_19, STATE_VARIABLE_ModeInfo_4_42, &STATE_VARIABLE_ModeInfo_5_43);
  check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ThenVars_18, STATE_VARIABLE_ModeInfo_5_43, &STATE_VARIABLE_ModeInfo_6_44);
  check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Cond0_10, &Cond_27, STATE_VARIABLE_ModeInfo_6_44, &STATE_VARIABLE_ModeInfo_7_45);
  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ThenVars_18, STATE_VARIABLE_ModeInfo_7_45, &STATE_VARIABLE_ModeInfo_8_46);
  check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 4U), NonLocals_16, STATE_VARIABLE_ModeInfo_8_46, &STATE_VARIABLE_ModeInfo_9_48);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_9_48, &InstMapCond_28);
  succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMapCond_28);
  if (succeeded)
  {
    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Then0_11, &Then_29, STATE_VARIABLE_ModeInfo_9_48, &STATE_VARIABLE_ModeInfo_10_49);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_10_49, &InstMapThen_30);
  }
  else
  {
    Then_29 = hlds__make_goal__true_goal_0_f_0();
    InstMapThen_30 = InstMapCond_28;
    STATE_VARIABLE_ModeInfo_10_49 = STATE_VARIABLE_ModeInfo_9_48;
  }
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_20, STATE_VARIABLE_ModeInfo_10_49, &STATE_VARIABLE_ModeInfo_11_50);
  check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Else0_12, &Else_31, STATE_VARIABLE_ModeInfo_11_50, &STATE_VARIABLE_ModeInfo_12_51);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_12_51, &InstMapElse_32);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_20, STATE_VARIABLE_ModeInfo_12_51, &STATE_VARIABLE_ModeInfo_13_52);
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Else_31));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (Then_29));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (InstMapElse_32));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (InstMapThen_30));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
  }
  hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Var_53, Var_54, &ArmInstMaps_33);
  hlds__instmap__instmap_merge_5_p_0(NonLocals_16, ArmInstMaps_33, (MR_Integer) 1, STATE_VARIABLE_ModeInfo_13_52, &STATE_VARIABLE_ModeInfo_14_60);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_14 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Vars_9));
    MR_hl_field(3, base, 2) = ((MR_Box) (Cond_27));
    MR_hl_field(3, base, 3) = ((MR_Box) (Then_29));
    MR_hl_field(3, base, 4) = ((MR_Box) (Else_31));
  }
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "if-then-else", GoalInfo0_13, STATE_VARIABLE_ModeInfo_14_60, STATE_VARIABLE_ModeInfo_35);
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * STATE_VARIABLE_ModeInfo_6)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModeInfo_6 = STATE_VARIABLE_ModeInfo_0_5;
  }
  else
  {
    MR_Word Case0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_14;
    MR_Word Cases_15;
    MR_Word InstMap_16;
    MR_Word InstMaps_17;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case0_11, 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case0_11, 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(0, Case0_11, 2))));
    MR_Word InstMap0_22;
    MR_Word InstMap1_23;
    MR_Word Goal1_24;
    MR_Word Goal_25;
    MR_Word STATE_VARIABLE_ModeInfo_1_28;
    MR_Word STATE_VARIABLE_ModeInfo_2_29;
    MR_Word STATE_VARIABLE_ModeInfo_3_30;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_5, &InstMap0_22);
    check_hlds__modecheck_util__modecheck_record_functors_test_5_p_0(HeadVar__2_2, MainConsId_19, OtherConsIds_20, STATE_VARIABLE_ModeInfo_0_5, &STATE_VARIABLE_ModeInfo_1_28);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_28, &InstMap1_23);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap1_23);
    if (succeeded)
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_21, &Goal1_24, STATE_VARIABLE_ModeInfo_1_28, &STATE_VARIABLE_ModeInfo_2_29);
    else
    {
      Goal1_24 = hlds__make_goal__true_goal_0_f_0();
      STATE_VARIABLE_ModeInfo_2_29 = STATE_VARIABLE_ModeInfo_1_28;
    }
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_29, &InstMap_16);
    check_hlds__modecheck_util__fixup_instmap_switch_var_5_p_0(HeadVar__2_2, InstMap0_22, InstMap_16, Goal1_24, &Goal_25);
    {
      Case_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_14, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(0, Case_14, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(0, Case_14, 2) = ((MR_Box) (Goal_25));
    }
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_22, STATE_VARIABLE_ModeInfo_2_29, &STATE_VARIABLE_ModeInfo_3_30);
    check_hlds__unique_modes__unique_modes_check_cases_6_p_0(Cases0_12, HeadVar__2_2, &Cases_15, &InstMaps_17, STATE_VARIABLE_ModeInfo_3_30, STATE_VARIABLE_ModeInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMap_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (InstMaps_17));
    }
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_switch_7_p_0(
  MR_Word Var_8,
  MR_Word CanFail_9,
  MR_Word Cases0_10,
  MR_Word GoalInfo0_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_21,
  MR_Word * STATE_VARIABLE_ModeInfo_22)
{
  MR_Word Cases_14;
  MR_Word STATE_VARIABLE_ModeInfo_1_25;
  MR_Word STATE_VARIABLE_ModeInfo_2_26;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "switch", GoalInfo0_11, STATE_VARIABLE_ModeInfo_0_21, &STATE_VARIABLE_ModeInfo_1_25);
  if ((Cases0_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word InstMap_15;

    Cases_14 = (MR_Word) ((MR_Unsigned) 0U);
    hlds__instmap__init_unreachable_1_p_0(&InstMap_15);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_15, STATE_VARIABLE_ModeInfo_1_25, &STATE_VARIABLE_ModeInfo_2_26);
  }
  else
  {
    MR_Word NonLocals_18;
    MR_Word InstMaps_19;
    MR_Word ArmInstMaps_20;
    MR_Word STATE_VARIABLE_ModeInfo_3_27;

    NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_11);
    check_hlds__unique_modes__unique_modes_check_cases_6_p_0(Cases0_10, Var_8, &Cases_14, &InstMaps_19, STATE_VARIABLE_ModeInfo_1_25, &STATE_VARIABLE_ModeInfo_3_27);
    hlds__instmap__make_arm_instmaps_for_cases_3_p_0(Cases_14, InstMaps_19, &ArmInstMaps_20);
    hlds__instmap__instmap_merge_5_p_0(NonLocals_18, ArmInstMaps_20, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_3_27, &STATE_VARIABLE_ModeInfo_2_26);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_12 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_8));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_9));
    MR_hl_field(3, base, 3) = ((MR_Box) (Cases_14));
  }
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "switch", GoalInfo0_11, STATE_VARIABLE_ModeInfo_2_26, STATE_VARIABLE_ModeInfo_22);
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_disjuncts_7_p_0(
  MR_Word DisjDetism_1,
  MR_Word DisjNonLocals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * STATE_VARIABLE_ModeInfo_7)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModeInfo_7 = STATE_VARIABLE_ModeInfo_0_6;
  }
  else
  {
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Goal_17;
    MR_Word Goals_18;
    MR_Word InstMap_19;
    MR_Word InstMaps_20;
    MR_Word InstMap0_22;
    MR_Word STATE_VARIABLE_ModeInfo_1_25;
    MR_Word STATE_VARIABLE_ModeInfo_2_26;
    MR_Word STATE_VARIABLE_ModeInfo_3_27;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_6, &InstMap0_22);
    check_hlds__unique_modes__unique_modes_prepare_for_disjunct_5_p_0(Goal0_15, DisjDetism_1, DisjNonLocals_2, STATE_VARIABLE_ModeInfo_0_6, &STATE_VARIABLE_ModeInfo_1_25);
    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_15, &Goal_17, STATE_VARIABLE_ModeInfo_1_25, &STATE_VARIABLE_ModeInfo_2_26);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_26, &InstMap_19);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_22, STATE_VARIABLE_ModeInfo_2_26, &STATE_VARIABLE_ModeInfo_3_27);
    check_hlds__unique_modes__unique_modes_check_disjuncts_7_p_0(DisjDetism_1, DisjNonLocals_2, Goals0_16, &Goals_18, &InstMaps_20, STATE_VARIABLE_ModeInfo_3_27, STATE_VARIABLE_ModeInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMap_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (InstMaps_20));
    }
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_disj_5_p_0(
  MR_Word Goals0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20)
{
  MR_bool succeeded;
  MR_Word Goals_10;
  MR_Word STATE_VARIABLE_ModeInfo_1_23;
  MR_Word STATE_VARIABLE_ModeInfo_2_24;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "disj", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_19, &STATE_VARIABLE_ModeInfo_1_23);
  if ((Goals0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word InstMap_11;

    Goals_10 = (MR_Word) ((MR_Unsigned) 0U);
    hlds__instmap__init_unreachable_1_p_0(&InstMap_11);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_11, STATE_VARIABLE_ModeInfo_1_23, &STATE_VARIABLE_ModeInfo_2_24);
  }
  else
  {
    MR_Word NonLocals_14;
    MR_Word Determinism_15;
    MR_Word InstMaps_17;
    MR_Word ArmInstMaps_18;
    MR_Word STATE_VARIABLE_ModeInfo_5_28;
    MR_Word STATE_VARIABLE_ModeInfo_6_29;
    MR_Word Goal0_44;
    MR_Word Goals0_45;
    MR_Word Goal_46;
    MR_Word Goals_47;
    MR_Word InstMap_48;
    MR_Word InstMaps_49;
    MR_Word InstMap0_50;
    MR_Word STATE_VARIABLE_ModeInfo_1_53;
    MR_Word STATE_VARIABLE_ModeInfo_2_54;
    MR_Word STATE_VARIABLE_ModeInfo_3_55;
    MR_Word Var_34;
    MR_Word Var_16;

    NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
    Determinism_15 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
    parse_tree__prog_data__determinism_components_3_p_0(Determinism_15, &Var_16, &Var_34);
    succeeded = ((MR_Integer) 3 == Var_34);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_ModeInfo_3_26;
      MR_Word STATE_VARIABLE_ModeInfo_4_27;
      MR_Word FullInstMap0_35;

      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_14, STATE_VARIABLE_ModeInfo_1_23, &STATE_VARIABLE_ModeInfo_3_26);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_3_26, &FullInstMap0_35);
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_35);
      if (succeeded)
      {
        MR_Word AllVars_36;
        MR_Word NondetLiveVars_37;

        hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_35, &AllVars_36);
        check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_36, STATE_VARIABLE_ModeInfo_3_26, &NondetLiveVars_37);
        check_hlds__unique_modes__make_vars_mostly_uniq_3_p_0(NondetLiveVars_37, STATE_VARIABLE_ModeInfo_3_26, &STATE_VARIABLE_ModeInfo_4_27);
      }
      else
        STATE_VARIABLE_ModeInfo_4_27 = STATE_VARIABLE_ModeInfo_3_26;
      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_14, STATE_VARIABLE_ModeInfo_4_27, &STATE_VARIABLE_ModeInfo_5_28);
    }
    else
      STATE_VARIABLE_ModeInfo_5_28 = STATE_VARIABLE_ModeInfo_1_23;
    Goal0_44 = ((MR_Word) ((MR_hl_field(1, Goals0_6, 0))));
    Goals0_45 = ((MR_Word) ((MR_hl_field(1, Goals0_6, 1))));
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_5_28, &InstMap0_50);
    check_hlds__unique_modes__unique_modes_prepare_for_disjunct_5_p_0(Goal0_44, Determinism_15, NonLocals_14, STATE_VARIABLE_ModeInfo_5_28, &STATE_VARIABLE_ModeInfo_1_53);
    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_44, &Goal_46, STATE_VARIABLE_ModeInfo_1_53, &STATE_VARIABLE_ModeInfo_2_54);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_54, &InstMap_48);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_50, STATE_VARIABLE_ModeInfo_2_54, &STATE_VARIABLE_ModeInfo_3_55);
    check_hlds__unique_modes__unique_modes_check_disjuncts_7_p_0(Determinism_15, NonLocals_14, Goals0_45, &Goals_47, &InstMaps_49, STATE_VARIABLE_ModeInfo_3_55, &STATE_VARIABLE_ModeInfo_6_29);
    {
      Goals_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Goals_10, 0) = ((MR_Box) (Goal_46));
      MR_hl_field(1, Goals_10, 1) = ((MR_Box) (Goals_47));
    }
    {
      InstMaps_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InstMaps_17, 0) = ((MR_Box) (InstMap_48));
      MR_hl_field(1, InstMaps_17, 1) = ((MR_Box) (InstMaps_49));
    }
    hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Goals_10, InstMaps_17, &ArmInstMaps_18);
    hlds__instmap__instmap_merge_5_p_0(NonLocals_14, ArmInstMaps_18, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_6_29, &STATE_VARIABLE_ModeInfo_2_24);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_8 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Goals_10));
  }
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "disj", GoalInfo0_7, STATE_VARIABLE_ModeInfo_2_24, STATE_VARIABLE_ModeInfo_20);
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_conj_6_p_0(
  MR_Word ConjType_7,
  MR_Word Goals0_8,
  MR_Word GoalInfo0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * STATE_VARIABLE_ModeInfo_16)
{
  MR_Word Goals_12;
  MR_Word STATE_VARIABLE_ModeInfo_1_19;
  MR_Word STATE_VARIABLE_ModeInfo_3_21;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "conj", GoalInfo0_9, STATE_VARIABLE_ModeInfo_0_15, &STATE_VARIABLE_ModeInfo_1_19);
  if ((Goals0_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    Goals_12 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ModeInfo_3_21 = STATE_VARIABLE_ModeInfo_1_19;
  }
  else
  {
    MR_Word STATE_VARIABLE_ModeInfo_2_20;

    check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(ConjType_7, Goals0_8, STATE_VARIABLE_ModeInfo_1_19, &STATE_VARIABLE_ModeInfo_2_20);
    check_hlds__unique_modes__unique_modes_flatten_and_check_conj_5_p_0(ConjType_7, Goals0_8, &Goals_12, STATE_VARIABLE_ModeInfo_2_20, &STATE_VARIABLE_ModeInfo_3_21);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_10 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_7));
    MR_hl_field(3, base, 2) = ((MR_Box) (Goals_12));
  }
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "conj", GoalInfo0_9, STATE_VARIABLE_ModeInfo_3_21, STATE_VARIABLE_ModeInfo_16);
}

void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_18,
  MR_Word * STATE_VARIABLE_ModeInfo_19)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));
  MR_Word Context_10;
  MR_Word InstMap0_11;
  MR_Word NondetLiveVars0_12;
  MR_Word Detism_13;
  MR_Word GoalExpr_16;
  MR_Word GoalInfo_17;
  MR_Word STATE_VARIABLE_ModeInfo_1_20;
  MR_Word STATE_VARIABLE_ModeInfo_2_23;
  MR_Word STATE_VARIABLE_ModeInfo_5_28;
  MR_Word STATE_VARIABLE_ModeInfo_7_30;
  MR_Word Var_32;
  MR_Word Var_14;

  Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
  succeeded = mercury__term_context__is_dummy_context_1_p_0(Context_10);
  if (succeeded)
    STATE_VARIABLE_ModeInfo_1_20 = STATE_VARIABLE_ModeInfo_0_18;
  else
    check_hlds__mode_info__mode_info_set_context_3_p_0(Context_10, STATE_VARIABLE_ModeInfo_0_18, &STATE_VARIABLE_ModeInfo_1_20);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_20, &InstMap0_11);
  check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_1_20, &NondetLiveVars0_12);
  Detism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_9);
  parse_tree__prog_data__determinism_components_3_p_0(Detism_13, &Var_14, &Var_32);
  succeeded = ((MR_Integer) 3 == Var_32);
  if (succeeded)
    STATE_VARIABLE_ModeInfo_2_23 = STATE_VARIABLE_ModeInfo_1_20;
  else
  {
    MR_Word Var_22;

    Var_22 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
    check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(Var_22, STATE_VARIABLE_ModeInfo_1_20, &STATE_VARIABLE_ModeInfo_2_23);
  }
  succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_9, (MR_Integer) 17);
  if (succeeded)
  {
    MR_Word InDuplForSwitch_15;
    MR_Word STATE_VARIABLE_ModeInfo_3_26;
    MR_Word STATE_VARIABLE_ModeInfo_4_27;

    check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(STATE_VARIABLE_ModeInfo_2_23, &InDuplForSwitch_15);
    check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_3_26);
    switch (MR_tag((MR_Word) GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_65 = (MR_Word) ((MR_Word) (GoalExpr0_8));

          check_hlds__unique_modes__unique_modes_check_goal_negation_5_p_0(SubGoal0_65, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_3_26, &STATE_VARIABLE_ModeInfo_4_27);
        }
        break;
      case (MR_Integer) 1:
        check_hlds__unique_modes__unique_modes_check_goal_unify_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_3_26, &STATE_VARIABLE_ModeInfo_4_27);
        break;
      case (MR_Integer) 2:
        check_hlds__unique_modes__unique_modes_check_goal_plain_call_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_3_26, &STATE_VARIABLE_ModeInfo_4_27);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__unique_modes__unique_modes_check_goal_generic_call_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_3_26, &STATE_VARIABLE_ModeInfo_4_27);
            break;
          case (MR_Integer) 1:
            check_hlds__unique_modes__unique_modes_check_goal_foreign_call_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_3_26, &STATE_VARIABLE_ModeInfo_4_27);
            break;
          case (MR_Integer) 2:
            {
              MR_Word GoalType0_56 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, 1))) & (MR_Integer) 1);
              MR_Word Goals0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));

              check_hlds__unique_modes__unique_modes_check_goal_conj_6_p_0(GoalType0_56, Goals0_57, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_3_26, &STATE_VARIABLE_ModeInfo_4_27);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_89 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));

              check_hlds__unique_modes__unique_modes_check_goal_disj_5_p_0(Goals0_89, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_3_26, &STATE_VARIABLE_ModeInfo_4_27);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var0_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
              MR_Word CanFail0_59 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, 2))) & (MR_Integer) 1);
              MR_Word Cases0_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 3))));

              check_hlds__unique_modes__unique_modes_check_goal_switch_7_p_0(Var0_58, CanFail0_59, Cases0_60, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_3_26, &STATE_VARIABLE_ModeInfo_4_27);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason0_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
              MR_Word SubGoal0_90 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));

              check_hlds__unique_modes__unique_modes_check_goal_scope_6_p_0(Reason0_66, SubGoal0_90, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_3_26, &STATE_VARIABLE_ModeInfo_4_27);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars0_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
              MR_Word Cond0_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
              MR_Word Then0_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 3))));
              MR_Word Else0_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 4))));

              check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_p_0(Vars0_61, Cond0_62, Then0_63, Else0_64, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_3_26, &STATE_VARIABLE_ModeInfo_4_27);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));

              switch (MR_tag((MR_Word) ShortHand0_67)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_expr\'/5", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_68 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_67, 0))) & (MR_Integer) 3);
                    MR_Word Outer_69 = ((MR_Word) ((MR_hl_field(1, ShortHand0_67, 1))));
                    MR_Word Inner_70 = ((MR_Word) ((MR_hl_field(1, ShortHand0_67, 2))));
                    MR_Word MaybeOutputVars_71 = ((MR_Word) ((MR_hl_field(1, ShortHand0_67, 3))));
                    MR_Word MainGoal0_72 = ((MR_Word) ((MR_hl_field(1, ShortHand0_67, 4))));
                    MR_Word OrElseGoals0_73 = ((MR_Word) ((MR_hl_field(1, ShortHand0_67, 5))));
                    MR_Word OrElseInners0_74 = ((MR_Word) ((MR_hl_field(1, ShortHand0_67, 6))));

                    check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_p_0(GoalType_68, Outer_69, Inner_70, MaybeOutputVars_71, MainGoal0_72, OrElseGoals0_73, OrElseInners0_74, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_3_26, &STATE_VARIABLE_ModeInfo_4_27);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_75 = ((MR_Word) ((MR_hl_field(2, ShortHand0_67, 0))));
                    MR_Word ResultVar_76 = ((MR_Word) ((MR_hl_field(2, ShortHand0_67, 1))));
                    MR_Word SubGoal_77;
                    MR_Word ShortHand_78;
                    MR_Word STATE_VARIABLE_ModeInfo_12_83;
                    MR_Word STATE_VARIABLE_ModeInfo_13_84;
                    MR_Word SubGoal0_91 = ((MR_Word) ((MR_hl_field(2, ShortHand0_67, 2))));

                    check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "try", GoalInfo0_9, STATE_VARIABLE_ModeInfo_3_26, &STATE_VARIABLE_ModeInfo_12_83);
                    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_91, &SubGoal_77, STATE_VARIABLE_ModeInfo_12_83, &STATE_VARIABLE_ModeInfo_13_84);
                    {
                      ShortHand_78 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ShortHand_78, 0) = ((MR_Box) (MaybeIO_75));
                      MR_hl_field(2, ShortHand_78, 1) = ((MR_Box) (ResultVar_76));
                      MR_hl_field(2, ShortHand_78, 2) = ((MR_Box) (SubGoal_77));
                    }
                    {
                      GoalExpr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(3, GoalExpr_16, 1) = ((MR_Box) (ShortHand_78));
                    }
                    check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "try", GoalInfo0_9, STATE_VARIABLE_ModeInfo_13_84, &STATE_VARIABLE_ModeInfo_4_27);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(InDuplForSwitch_15, STATE_VARIABLE_ModeInfo_4_27, &STATE_VARIABLE_ModeInfo_5_28);
  }
  else
    switch (MR_tag((MR_Word) GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_124 = (MR_Word) ((MR_Word) (GoalExpr0_8));

          check_hlds__unique_modes__unique_modes_check_goal_negation_5_p_0(SubGoal0_124, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_5_28);
        }
        break;
      case (MR_Integer) 1:
        check_hlds__unique_modes__unique_modes_check_goal_unify_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_5_28);
        break;
      case (MR_Integer) 2:
        check_hlds__unique_modes__unique_modes_check_goal_plain_call_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_5_28);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__unique_modes__unique_modes_check_goal_generic_call_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_5_28);
            break;
          case (MR_Integer) 1:
            check_hlds__unique_modes__unique_modes_check_goal_foreign_call_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_5_28);
            break;
          case (MR_Integer) 2:
            {
              MR_Word GoalType0_115 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, 1))) & (MR_Integer) 1);
              MR_Word Goals0_116 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));

              check_hlds__unique_modes__unique_modes_check_goal_conj_6_p_0(GoalType0_115, Goals0_116, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_5_28);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_148 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));

              check_hlds__unique_modes__unique_modes_check_goal_disj_5_p_0(Goals0_148, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_5_28);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var0_117 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
              MR_Word CanFail0_118 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, 2))) & (MR_Integer) 1);
              MR_Word Cases0_119 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 3))));

              check_hlds__unique_modes__unique_modes_check_goal_switch_7_p_0(Var0_117, CanFail0_118, Cases0_119, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_5_28);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason0_125 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
              MR_Word SubGoal0_149 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));

              check_hlds__unique_modes__unique_modes_check_goal_scope_6_p_0(Reason0_125, SubGoal0_149, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_5_28);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars0_120 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
              MR_Word Cond0_121 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
              MR_Word Then0_122 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 3))));
              MR_Word Else0_123 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 4))));

              check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_p_0(Vars0_120, Cond0_121, Then0_122, Else0_123, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_5_28);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_126 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));

              switch (MR_tag((MR_Word) ShortHand0_126)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_expr\'/5", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_127 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_126, 0))) & (MR_Integer) 3);
                    MR_Word Outer_128 = ((MR_Word) ((MR_hl_field(1, ShortHand0_126, 1))));
                    MR_Word Inner_129 = ((MR_Word) ((MR_hl_field(1, ShortHand0_126, 2))));
                    MR_Word MaybeOutputVars_130 = ((MR_Word) ((MR_hl_field(1, ShortHand0_126, 3))));
                    MR_Word MainGoal0_131 = ((MR_Word) ((MR_hl_field(1, ShortHand0_126, 4))));
                    MR_Word OrElseGoals0_132 = ((MR_Word) ((MR_hl_field(1, ShortHand0_126, 5))));
                    MR_Word OrElseInners0_133 = ((MR_Word) ((MR_hl_field(1, ShortHand0_126, 6))));

                    check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_p_0(GoalType_127, Outer_128, Inner_129, MaybeOutputVars_130, MainGoal0_131, OrElseGoals0_132, OrElseInners0_133, GoalInfo0_9, &GoalExpr_16, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_5_28);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_134 = ((MR_Word) ((MR_hl_field(2, ShortHand0_126, 0))));
                    MR_Word ResultVar_135 = ((MR_Word) ((MR_hl_field(2, ShortHand0_126, 1))));
                    MR_Word SubGoal_136;
                    MR_Word ShortHand_137;
                    MR_Word STATE_VARIABLE_ModeInfo_12_142;
                    MR_Word STATE_VARIABLE_ModeInfo_13_143;
                    MR_Word SubGoal0_150 = ((MR_Word) ((MR_hl_field(2, ShortHand0_126, 2))));

                    check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "try", GoalInfo0_9, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_12_142);
                    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_150, &SubGoal_136, STATE_VARIABLE_ModeInfo_12_142, &STATE_VARIABLE_ModeInfo_13_143);
                    {
                      ShortHand_137 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ShortHand_137, 0) = ((MR_Box) (MaybeIO_134));
                      MR_hl_field(2, ShortHand_137, 1) = ((MR_Box) (ResultVar_135));
                      MR_hl_field(2, ShortHand_137, 2) = ((MR_Box) (SubGoal_136));
                    }
                    {
                      GoalExpr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(3, GoalExpr_16, 1) = ((MR_Box) (ShortHand_137));
                    }
                    check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "try", GoalInfo0_9, STATE_VARIABLE_ModeInfo_13_143, &STATE_VARIABLE_ModeInfo_5_28);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
  check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars0_12, STATE_VARIABLE_ModeInfo_5_28, &STATE_VARIABLE_ModeInfo_7_30);
  check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(InstMap0_11, GoalExpr_16, GoalInfo0_9, &GoalInfo_17, STATE_VARIABLE_ModeInfo_7_30, STATE_VARIABLE_ModeInfo_19);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_17));
  }
}

static void MR_CALL 
check_hlds__unique_modes__select_changed_inst_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ModuleInfo_12;
      MR_Word InstMap0_13;
      MR_Word Inst0_14;
      MR_Word VarTable_15;
      MR_Word Type_16;
      MR_Word Inst_17;

      check_hlds__mode_info__mode_info_get_module_info_2_p_0(HeadVar__3_3, &ModuleInfo_12);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(HeadVar__3_3, &InstMap0_13);
      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Var_7, &Inst0_14);
      check_hlds__mode_info__mode_info_get_var_table_2_p_0(HeadVar__3_3, &VarTable_15);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_15, Var_7, &Type_16);
      succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(HeadVar__2_2);
      if (succeeded)
      {
        succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(HeadVar__2_2, Var_7, &Inst_17);
        if (succeeded)
        {
          succeeded = hlds__inst_match__inst_matches_final_4_p_0(ModuleInfo_12, Type_16, Inst_17, Inst0_14);
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
      {
        MR_Word ChangedVars1_18;

        check_hlds__unique_modes__select_changed_inst_vars_4_p_0(Vars_8, HeadVar__2_2, HeadVar__3_3, &ChangedVars1_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_7));
          MR_hl_field(1, base, 1) = ((MR_Box) (ChangedVars1_18));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Vars_8;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unique_modes__select_live_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModeInfo_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Vars_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_11;

      check_hlds__mode_info__mode_info_var_is_live_3_p_0(ModeInfo_2, Var_5, &Var_11);
      succeeded = ((MR_Integer) 0 == Var_11);
      if (succeeded)
      {
        MR_Word LiveVars1_9;

        check_hlds__unique_modes__select_live_vars_3_p_0(Vars_6, ModeInfo_2, &LiveVars1_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_5));
          MR_hl_field(1, base, 1) = ((MR_Box) (LiveVars1_9));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Vars_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
check_hlds__unique_modes__unique_modes_prepare_for_disjunct_5_p_0(
  MR_Word Goal0_6,
  MR_Word DisjDetism_7,
  MR_Word DisjNonLocals_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * STATE_VARIABLE_ModeInfo_18)
{
  MR_bool succeeded;
  MR_Word DisjMaxSolns_11;
  MR_Word GoalInfo0_13;
  MR_Word Determinism_14;
  MR_Word CanFail_15;
  MR_Word Var_10;
  MR_Word Var_16;

  parse_tree__prog_data__determinism_components_3_p_0(DisjDetism_7, &Var_10, &DisjMaxSolns_11);
  GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_6, 1))));
  Determinism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_13);
  parse_tree__prog_data__determinism_components_3_p_0(Determinism_14, &CanFail_15, &Var_16);
  succeeded = (DisjMaxSolns_11 != (MR_Integer) 3);
  if (succeeded)
    succeeded = (CanFail_15 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_ModeInfo_1_19;
    MR_Word STATE_VARIABLE_ModeInfo_2_20;
    MR_Word FullInstMap0_21;

    check_hlds__mode_info__mode_info_add_live_vars_3_p_0(DisjNonLocals_8, STATE_VARIABLE_ModeInfo_0_17, &STATE_VARIABLE_ModeInfo_1_19);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_1_19, &FullInstMap0_21);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_21);
    if (succeeded)
    {
      MR_Word AllVars_22;
      MR_Word NondetLiveVars_23;

      hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_21, &AllVars_22);
      check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_22, STATE_VARIABLE_ModeInfo_1_19, &NondetLiveVars_23);
      check_hlds__unique_modes__make_vars_mostly_uniq_3_p_0(NondetLiveVars_23, STATE_VARIABLE_ModeInfo_1_19, &STATE_VARIABLE_ModeInfo_2_20);
    }
    else
      STATE_VARIABLE_ModeInfo_2_20 = STATE_VARIABLE_ModeInfo_1_19;
    check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(DisjNonLocals_8, STATE_VARIABLE_ModeInfo_2_20, STATE_VARIABLE_ModeInfo_18);
  }
  else
    *STATE_VARIABLE_ModeInfo_18 = STATE_VARIABLE_ModeInfo_0_17;
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_generic_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31)
{
  MR_bool succeeded;
  MR_Word GenericCall_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
  MR_Word ArgVars_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 2))));
  MR_Word ArgModes_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 3))));
  MR_Word Detism_14 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_6, 5))) & (MR_Integer) 7);
  MR_Word CallId_15;
  MR_Word ArgOffset_23;
  MR_Word STATE_VARIABLE_ModeInfo_1_34;
  MR_Word Var_35;
  MR_Word STATE_VARIABLE_ModeInfo_2_36;
  MR_Word Var_38;
  MR_Word STATE_VARIABLE_ModeInfo_3_39;
  MR_Word STATE_VARIABLE_ModeInfo_4_40;
  MR_Word ModuleInfo_44;
  MR_Word InitialInsts_45;
  MR_Word InstVarSub_46;
  MR_Word FinalInsts0_48;
  MR_Word FinalInsts_49;
  MR_Word NewArgVars_50;
  MR_Word ExtraGoals_51;
  MR_Word STATE_VARIABLE_ModeInfo_1_54;
  MR_Word STATE_VARIABLE_ModeInfo_2_55;
  MR_Word _BadInstVars_47;
  MR_Word Var_43;
  MR_Word Var_16;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "generic_call", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_30, &STATE_VARIABLE_ModeInfo_1_34);
  {
    CallId_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CallId_15, 0) = ((MR_Box) (GenericCall_10));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (CallId_15));
  }
  check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_35, STATE_VARIABLE_ModeInfo_1_34, &STATE_VARIABLE_ModeInfo_2_36);
  switch (MR_tag((MR_Word) GenericCall_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ArgOffset_23 = check_hlds__modecheck_util__higher_order_modecheck_arg_offset_0_f_0();
      break;
    case (MR_Integer) 1:
      ArgOffset_23 = check_hlds__modecheck_util__unify_method_event_cast_modecheck_arg_offset_0_f_0();
      break;
    case (MR_Integer) 2:
      ArgOffset_23 = check_hlds__modecheck_util__unify_method_event_cast_modecheck_arg_offset_0_f_0();
      break;
    case (MR_Integer) 3:
      ArgOffset_23 = check_hlds__modecheck_util__unify_method_event_cast_modecheck_arg_offset_0_f_0();
      break;
  }
  {
    Var_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_38, 0) = ((MR_Box) (GenericCall_10));
  }
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_2_36, &ModuleInfo_44);
  hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_44, ArgModes_12, &InitialInsts_45);
  check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_8_p_0(Var_38, ArgOffset_23, ArgVars_11, InitialInsts_45, &InstVarSub_46, &_BadInstVars_47, STATE_VARIABLE_ModeInfo_2_36, &STATE_VARIABLE_ModeInfo_1_54);
  hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_44, ArgModes_12, &FinalInsts0_48);
  parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_46, FinalInsts0_48, &FinalInsts_49);
  check_hlds__modecheck_util__modecheck_set_var_insts_8_p_0(ArgOffset_23, ArgVars_11, InitialInsts_45, FinalInsts_49, &NewArgVars_50, &ExtraGoals_51, STATE_VARIABLE_ModeInfo_1_54, &STATE_VARIABLE_ModeInfo_2_55);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[1]), ((MR_Box) (NewArgVars_50)), ((MR_Box) (ArgVars_11)));
  if (succeeded)
    succeeded = (ExtraGoals_51 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/8", (MR_String) "call to implied mode\?");
      return;
    }
  parse_tree__prog_data__determinism_components_3_p_0(Detism_14, &Var_16, &Var_43);
  succeeded = ((MR_Integer) 0 == Var_43);
  if (succeeded)
  {
    MR_Word InstMap_52;

    hlds__instmap__init_unreachable_1_p_0(&InstMap_52);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_52, STATE_VARIABLE_ModeInfo_2_55, &STATE_VARIABLE_ModeInfo_3_39);
  }
  else
  {
    MR_Word Var_59;
    MR_Word Var_53;

    parse_tree__prog_data__determinism_components_3_p_0(Detism_14, &Var_53, &Var_59);
    succeeded = ((MR_Integer) 3 == Var_59);
    if (succeeded)
    {
      MR_Word FullInstMap0_61;

      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_55, &FullInstMap0_61);
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_61);
      if (succeeded)
      {
        MR_Word AllVars_62;
        MR_Word NondetLiveVars_63;

        hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_61, &AllVars_62);
        check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_62, STATE_VARIABLE_ModeInfo_2_55, &NondetLiveVars_63);
        check_hlds__unique_modes__make_vars_mostly_uniq_3_p_0(NondetLiveVars_63, STATE_VARIABLE_ModeInfo_2_55, &STATE_VARIABLE_ModeInfo_3_39);
      }
      else
        STATE_VARIABLE_ModeInfo_3_39 = STATE_VARIABLE_ModeInfo_2_55;
    }
    else
      STATE_VARIABLE_ModeInfo_3_39 = STATE_VARIABLE_ModeInfo_2_55;
  }
  *GoalExpr_8 = GoalExpr0_6;
  check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_3_39, &STATE_VARIABLE_ModeInfo_4_40);
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "generic_call", GoalInfo0_7, STATE_VARIABLE_ModeInfo_4_40, STATE_VARIABLE_ModeInfo_31);
}

static MR_Box MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_foreign_call_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_foreign_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20)
{
  MR_Word Attributes_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
  MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 2))));
  MR_Integer ProcId0_12 = ((MR_Integer) ((MR_hl_field(3, GoalExpr0_6, 3))));
  MR_Word Args_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 4))));
  MR_Word ExtraArgs_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 5))));
  MR_Word MaybeTraceRuntimeCond_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 6))));
  MR_Word PragmaCode_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 7))));
  MR_Word ArgVars_17;
  MR_Integer ProcId_18;
  MR_Word STATE_VARIABLE_ModeInfo_1_23;
  MR_Word Var_24;
  MR_Word STATE_VARIABLE_ModeInfo_2_25;
  MR_Word Var_26;
  MR_Word STATE_VARIABLE_ModeInfo_3_28;
  MR_Word STATE_VARIABLE_ModeInfo_4_29;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "foreign_proc", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_19, &STATE_VARIABLE_ModeInfo_1_23);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (PredId_11));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_26));
  }
  check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_24, STATE_VARIABLE_ModeInfo_1_23, &STATE_VARIABLE_ModeInfo_2_25);
  ArgVars_17 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]), (MR_Word) (&check_hlds__unique_modes_scalar_common_2[2]), Args_13);
  check_hlds__unique_modes__unique_modes_check_plain_or_foreign_call_7_p_0(PredId_11, ProcId0_12, ArgVars_17, GoalInfo0_7, &ProcId_18, STATE_VARIABLE_ModeInfo_2_25, &STATE_VARIABLE_ModeInfo_3_28);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_8 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Attributes_10));
    MR_hl_field(3, base, 2) = ((MR_Box) (PredId_11));
    MR_hl_field(3, base, 3) = ((MR_Box) (ProcId_18));
    MR_hl_field(3, base, 4) = ((MR_Box) (Args_13));
    MR_hl_field(3, base, 5) = ((MR_Box) (ExtraArgs_14));
    MR_hl_field(3, base, 6) = ((MR_Box) (MaybeTraceRuntimeCond_15));
    MR_hl_field(3, base, 7) = ((MR_Box) (PragmaCode_16));
  }
  check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_3_28, &STATE_VARIABLE_ModeInfo_4_29);
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "foreign_proc", GoalInfo0_7, STATE_VARIABLE_ModeInfo_4_29, STATE_VARIABLE_ModeInfo_20);
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_plain_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * STATE_VARIABLE_ModeInfo_18)
{
  MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, 0))));
  MR_Integer ProcId0_11 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_6, 1))));
  MR_Word ArgVars_12 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, 2))));
  MR_Word Builtin_13 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_6, 3))) & (MR_Integer) 1);
  MR_Word MaybeUnifyContext_14 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, 4))));
  MR_Word PredSymName_15 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, 5))));
  MR_Integer ProcId_16;
  MR_Word STATE_VARIABLE_ModeInfo_1_21;
  MR_Word Var_22;
  MR_Word STATE_VARIABLE_ModeInfo_2_23;
  MR_Word Var_24;
  MR_Word STATE_VARIABLE_ModeInfo_3_25;
  MR_Word STATE_VARIABLE_ModeInfo_4_26;

  check_hlds__mode_debug__mode_checkpoint_sn_6_p_0((MR_Integer) 0, (MR_String) "call", PredSymName_15, GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_17, &STATE_VARIABLE_ModeInfo_1_21);
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (PredId_10));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_24));
  }
  check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_22, STATE_VARIABLE_ModeInfo_1_21, &STATE_VARIABLE_ModeInfo_2_23);
  check_hlds__unique_modes__unique_modes_check_plain_or_foreign_call_7_p_0(PredId_10, ProcId0_11, ArgVars_12, GoalInfo0_7, &ProcId_16, STATE_VARIABLE_ModeInfo_2_23, &STATE_VARIABLE_ModeInfo_3_25);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_8 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (PredId_10));
    MR_hl_field(2, base, 1) = ((MR_Box) (ProcId_16));
    MR_hl_field(2, base, 2) = ((MR_Box) (ArgVars_12));
    MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (Builtin_13));
    MR_hl_field(2, base, 4) = ((MR_Box) (MaybeUnifyContext_14));
    MR_hl_field(2, base, 5) = ((MR_Box) (PredSymName_15));
  }
  check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_3_25, &STATE_VARIABLE_ModeInfo_4_26);
  check_hlds__mode_debug__mode_checkpoint_sn_6_p_0((MR_Integer) 1, (MR_String) "call", PredSymName_15, GoalInfo0_7, STATE_VARIABLE_ModeInfo_4_26, STATE_VARIABLE_ModeInfo_18);
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_plain_or_foreign_call_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId0_9,
  MR_Word ArgVars_10,
  MR_Word GoalInfo_11,
  MR_Integer * ProcId_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_38,
  MR_Word * STATE_VARIABLE_ModeInfo_39)
{
  MR_bool succeeded;
  MR_Word OldErrors_14;
  MR_Word InstMap0_15;
  MR_Word ModuleInfo_16;
  MR_Word PredInfo_17;
  MR_Word ProcInfo_18;
  MR_Word ArgOffset_19;
  MR_Word ProcArgModes0_20;
  MR_Word InterfaceDeterminism_21;
  MR_Word CanSucceed_22;
  MR_Word CalleeModeErrors_23;
  MR_Word Errors_30;
  MR_Word MayChangeCalledProc_31;
  MR_Word STATE_VARIABLE_ModeInfo_1_41;
  MR_Word Var_42;
  MR_Word STATE_VARIABLE_ModeInfo_2_43;
  MR_Word STATE_VARIABLE_ModeInfo_3_44;
  MR_Word STATE_VARIABLE_ModeInfo_4_45;
  MR_Word ModuleInfo_55;
  MR_Word InitialInsts_56;
  MR_Word InstVarSub_57;
  MR_Word FinalInsts0_59;
  MR_Word FinalInsts_60;
  MR_Word NewArgVars_61;
  MR_Word ExtraGoals_62;
  MR_Word STATE_VARIABLE_ModeInfo_1_65;
  MR_Word STATE_VARIABLE_ModeInfo_2_66;
  MR_Word _BadInstVars_58;

  check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_38, &OldErrors_14);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_38, &InstMap0_15);
  check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_38, &STATE_VARIABLE_ModeInfo_1_41);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_1_41, &ModuleInfo_16);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_16, PredId_8, ProcId0_9, &PredInfo_17, &ProcInfo_18);
  ArgOffset_19 = check_hlds__modecheck_util__compute_pred_modecheck_arg_offset_1_f_0(PredInfo_17);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_18, &ProcArgModes0_20);
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(ProcInfo_18, &InterfaceDeterminism_21);
  hlds__hlds_proc_util__can_proc_info_ever_succeed_2_p_0(ProcInfo_18, &CanSucceed_22);
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (PredId_8));
  }
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_1_41, &ModuleInfo_55);
  hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_55, ProcArgModes0_20, &InitialInsts_56);
  check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_8_p_0(Var_42, ArgOffset_19, ArgVars_10, InitialInsts_56, &InstVarSub_57, &_BadInstVars_58, STATE_VARIABLE_ModeInfo_1_41, &STATE_VARIABLE_ModeInfo_1_65);
  hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_55, ProcArgModes0_20, &FinalInsts0_59);
  parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_57, FinalInsts0_59, &FinalInsts_60);
  check_hlds__modecheck_util__modecheck_set_var_insts_8_p_0(ArgOffset_19, ArgVars_10, InitialInsts_56, FinalInsts_60, &NewArgVars_61, &ExtraGoals_62, STATE_VARIABLE_ModeInfo_1_65, &STATE_VARIABLE_ModeInfo_2_66);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[1]), ((MR_Box) (NewArgVars_61)), ((MR_Box) (ArgVars_10)));
  if (succeeded)
    succeeded = (ExtraGoals_62 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/8", (MR_String) "call to implied mode\?");
      return;
    }
  switch (CanSucceed_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_70;
        MR_Word Var_64;

        parse_tree__prog_data__determinism_components_3_p_0(InterfaceDeterminism_21, &Var_64, &Var_70);
        succeeded = ((MR_Integer) 3 == Var_70);
        if (succeeded)
        {
          MR_Word FullInstMap0_72;

          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_66, &FullInstMap0_72);
          succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_72);
          if (succeeded)
          {
            MR_Word AllVars_73;
            MR_Word NondetLiveVars_74;

            hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_72, &AllVars_73);
            check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_73, STATE_VARIABLE_ModeInfo_2_66, &NondetLiveVars_74);
            check_hlds__unique_modes__make_vars_mostly_uniq_3_p_0(NondetLiveVars_74, STATE_VARIABLE_ModeInfo_2_66, &STATE_VARIABLE_ModeInfo_2_43);
          }
          else
            STATE_VARIABLE_ModeInfo_2_43 = STATE_VARIABLE_ModeInfo_2_66;
        }
        else
          STATE_VARIABLE_ModeInfo_2_43 = STATE_VARIABLE_ModeInfo_2_66;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstMap_63;

        hlds__instmap__init_unreachable_1_p_0(&InstMap_63);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_63, STATE_VARIABLE_ModeInfo_2_66, &STATE_VARIABLE_ModeInfo_2_43);
      }
      break;
  }
  check_hlds__mode_info__look_up_proc_mode_errors_4_p_0(STATE_VARIABLE_ModeInfo_2_43, PredId_8, ProcId0_9, &CalleeModeErrors_23);
  if ((CalleeModeErrors_23 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ModeInfo_3_44 = STATE_VARIABLE_ModeInfo_2_43;
  else
  {
    MR_Word WaitingVars_26;
    MR_Word InstMap_27;
    MR_Word ArgInsts_28;
    MR_Word ModeError_29;

    WaitingVars_26 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_10);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_2_43, &InstMap_27);
    hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_27, ArgVars_10, &ArgInsts_28);
    {
      ModeError_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_29, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(3, ModeError_29, 1) = ((MR_Box) (ArgVars_10));
      MR_hl_field(3, ModeError_29, 2) = ((MR_Box) (ArgInsts_28));
      MR_hl_field(3, ModeError_29, 3) = ((MR_Box) (PredId_8));
      MR_hl_field(3, ModeError_29, 4) = ((MR_Box) (ProcId0_9));
      MR_hl_field(3, ModeError_29, 5) = ((MR_Box) (CalleeModeErrors_23));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_26, ModeError_29, STATE_VARIABLE_ModeInfo_2_43, &STATE_VARIABLE_ModeInfo_3_44);
  }
  check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_3_44, &Errors_30);
  check_hlds__mode_info__mode_info_set_errors_3_p_0(OldErrors_14, STATE_VARIABLE_ModeInfo_3_44, &STATE_VARIABLE_ModeInfo_4_45);
  check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(STATE_VARIABLE_ModeInfo_4_45, &MayChangeCalledProc_31);
  if ((Errors_30 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *ProcId_12 = ProcId0_9;
    *STATE_VARIABLE_ModeInfo_39 = STATE_VARIABLE_ModeInfo_4_45;
  }
  else
    switch (MayChangeCalledProc_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Determinism_35;
          MR_Word NewArgVars_36;
          MR_Word ExtraGoals_37;
          MR_Word STATE_VARIABLE_ModeInfo_6_47;
          MR_Word Var_48;

          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_15, STATE_VARIABLE_ModeInfo_4_45, &STATE_VARIABLE_ModeInfo_6_47);
          hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_18, &Determinism_35);
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (Determinism_35));
          }
          check_hlds__modecheck_call__modecheck_plain_or_foreign_call_10_p_0(PredId_8, Var_48, ProcId0_9, ProcId_12, ArgVars_10, &NewArgVars_36, GoalInfo_11, &ExtraGoals_37, STATE_VARIABLE_ModeInfo_6_47, STATE_VARIABLE_ModeInfo_39);
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[1]), ((MR_Box) (NewArgVars_36)), ((MR_Box) (ArgVars_10)));
          if (succeeded)
            succeeded = (ExtraGoals_37 == (MR_Word) ((MR_Unsigned) 0U));
          if (!(succeeded))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_plain_or_foreign_call\'/7", (MR_String) "call to implied mode\?");
              return;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word AllErrors_34;

          *ProcId_12 = ProcId0_9;
          mercury__list__append_3_p_1((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), OldErrors_14, Errors_30, &AllErrors_34);
          check_hlds__mode_info__mode_info_set_errors_3_p_0(AllErrors_34, STATE_VARIABLE_ModeInfo_4_45, STATE_VARIABLE_ModeInfo_39);
        }
        break;
    }
}

static void MR_CALL 
check_hlds__unique_modes__select_nondet_live_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModeInfo_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Vars_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_11;

      check_hlds__mode_info__mode_info_var_is_nondet_live_3_p_0(ModeInfo_2, Var_5, &Var_11);
      succeeded = ((MR_Integer) 0 == Var_11);
      if (succeeded)
      {
        MR_Word NondetLiveVars1_9;

        check_hlds__unique_modes__select_nondet_live_vars_3_p_0(Vars_6, ModeInfo_2, &NondetLiveVars1_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_5));
          MR_hl_field(1, base, 1) = ((MR_Box) (NondetLiveVars1_9));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Vars_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unique_modes__make_vars_mostly_uniq_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModeInfo_0_2,
  MR_Word * STATE_VARIABLE_ModeInfo_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModeInfo_3 = STATE_VARIABLE_ModeInfo_0_2;
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ModeInfo_1_12;
      MR_Word InstMap0_13;
      MR_Word ModuleInfo0_14;
      MR_Word Inst0_16;
      MR_Word TypeInfo_26_31;
      MR_Word Vars_15;
      MR_Word Inst1_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_2;

      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_2, &InstMap0_13);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_2, &ModuleInfo0_14);
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_13);
      if (succeeded)
      {
        hlds__instmap__instmap_vars_list_2_p_0(InstMap0_13, &Vars_15);
        TypeInfo_26_31 = (MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_26_31, ((MR_Box) (Var_7)), Vars_15);
        if (succeeded)
        {
          hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Var_7, &Inst0_16);
          hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo0_14, Inst0_16, &Inst1_17);
          switch (MR_tag((MR_Word) Inst1_17)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(1, Inst1_17, 0))) & (MR_Integer) 7);

                succeeded = (Var_27 == (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_28 = ((MR_Unsigned) ((MR_hl_field(2, Inst1_17, 0))) & (MR_Integer) 7);

                succeeded = (Var_28 == (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Inst1_17, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_29 = ((MR_Unsigned) ((MR_hl_field(3, Inst1_17, 1))) & (MR_Integer) 7);

                    succeeded = (Var_29 == (MR_Integer) 1);
                  }
                  break;
              }
              break;
          }
        }
      }
      if (succeeded)
      {
        MR_Word VarTable_22;
        MR_Word Type_23;
        MR_Word Inst_24;
        MR_Word ModuleInfo_25;
        MR_Word InstMap_26;
        MR_Word STATE_VARIABLE_ModeInfo_1_30;

        check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_2, &VarTable_22);
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_22, Var_7, &Type_23);
        check_hlds__inst_make__make_mostly_uniq_inst_5_p_0(Type_23, Inst0_16, &Inst_24, ModuleInfo0_14, &ModuleInfo_25);
        check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_25, STATE_VARIABLE_ModeInfo_0_2, &STATE_VARIABLE_ModeInfo_1_30);
        hlds__instmap__instmap_set_var_4_p_0(Var_7, Inst_24, InstMap0_13, &InstMap_26);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_26, STATE_VARIABLE_ModeInfo_1_30, &STATE_VARIABLE_ModeInfo_1_12);
      }
      else
        STATE_VARIABLE_ModeInfo_1_12 = STATE_VARIABLE_ModeInfo_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_8;
      next_value_of_STATE_VARIABLE_ModeInfo_0_2 = STATE_VARIABLE_ModeInfo_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModeInfo_0_2 = next_value_of_STATE_VARIABLE_ModeInfo_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_unify_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * STATE_VARIABLE_ModeInfo_16)
{
  MR_Word LHS0_10 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, 0))));
  MR_Word RHS0_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, 1))));
  MR_Word Unification0_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, 3))));
  MR_Word UnifyContext_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, 4))));
  MR_Word STATE_VARIABLE_ModeInfo_1_19;
  MR_Word Var_20;
  MR_Word STATE_VARIABLE_ModeInfo_2_21;
  MR_Word STATE_VARIABLE_ModeInfo_3_22;
  MR_Word STATE_VARIABLE_ModeInfo_4_23;

  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 0, (MR_String) "unify", GoalInfo0_7, STATE_VARIABLE_ModeInfo_0_15, &STATE_VARIABLE_ModeInfo_1_19);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (UnifyContext_14));
  }
  check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_20, STATE_VARIABLE_ModeInfo_1_19, &STATE_VARIABLE_ModeInfo_2_21);
  check_hlds__modecheck_unify__modecheck_unify_8_p_0(LHS0_10, RHS0_11, Unification0_13, UnifyContext_14, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_2_21, &STATE_VARIABLE_ModeInfo_3_22);
  check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_3_22, &STATE_VARIABLE_ModeInfo_4_23);
  check_hlds__mode_debug__mode_checkpoint_5_p_0((MR_Integer) 1, (MR_String) "unify", GoalInfo0_7, STATE_VARIABLE_ModeInfo_4_23, STATE_VARIABLE_ModeInfo_16);
}

void MR_CALL 
check_hlds__unique_modes__unique_modes_check_module_4_p_0(
  MR_Word ProgressStream_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10,
  MR_Word * Specs_7)
{
  MR_Word _SafeToContinue_8;

  check_hlds__modes__modecheck_all_preds_in_module_7_p_0(ProgressStream_5, (MR_Integer) 1, (MR_Integer) 0, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10, &_SafeToContinue_8, Specs_7);
}

void mercury__check_hlds__unique_modes__init(void)
{
}

void mercury__check_hlds__unique_modes__init_type_tables(void)
{
}

void mercury__check_hlds__unique_modes__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__unique_modes__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.unique_modes.
