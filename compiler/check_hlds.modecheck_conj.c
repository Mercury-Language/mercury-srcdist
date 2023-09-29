/*
** Automatically generated from `modecheck_conj.m'
** by the Mercury compiler,
** version rotd-2023-09-29
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


// :- module check_hlds.modecheck_conj.
// :- implementation.

/*
INIT mercury__check_hlds__modecheck_conj__init
ENDINIT
*/

#include "check_hlds.modecheck_conj.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(
  MR_Word HeadVars_3,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Goals_0_3,
  MR_Word * STATE_VARIABLE_Goals_4,
  MR_Word STATE_VARIABLE_ImpurityErrors_0_5,
  MR_Word * STATE_VARIABLE_ImpurityErrors_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_7,
  MR_Word * STATE_VARIABLE_ModeInfo_8);

static MR_bool MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(
  MR_Word Goal_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_ImpurityErrors_0_33,
  MR_Word * STATE_VARIABLE_ImpurityErrors_34,
  MR_Word STATE_VARIABLE_ModeInfo_0_35,
  MR_Word * STATE_VARIABLE_ModeInfo_36);

static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0(
  MR_Word ConjType_9,
  MR_Word DelayedGoals0_10,
  MR_Word * DelayedGoals_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_ImpurityErrors_0_25,
  MR_Word * STATE_VARIABLE_ImpurityErrors_26,
  MR_Word STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * STATE_VARIABLE_ModeInfo_28);

static void MR_CALL 
check_hlds__modecheck_conj__redelay_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DelayInfo_0_2,
  MR_Word * STATE_VARIABLE_DelayInfo_3);

static void MR_CALL 
check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Vars_3);

static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_2[2][5];

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_3[1][3];




static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_2[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_2[0])),
    ((MR_Box) (check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_conj__check_hlds__modecheck_conj__type_ctor_info_impurity_errors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__modecheck_conj____Unify____impurity_errors_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_conj____Compare____impurity_errors_0_0_10001)),
  (MR_String) "check_hlds.modecheck_conj",
  (MR_String) "impurity_errors",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__modecheck_conj__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_conj_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_conj_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(
  MR_Word HeadVars_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word Var_7;
  MR_Word RHS_8;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));

  succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_7 = ((MR_Word) ((MR_hl_field(1, Var_13, (MR_Integer) 0))));
    RHS_8 = ((MR_Word) ((MR_hl_field(1, Var_13, (MR_Integer) 1))));
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__modecheck_conj_scalar_common_1[0]), ((MR_Box) (Var_7)), HeadVars_3);
    if (!(succeeded))
    {
      MR_Word TypeInfo_16_16;
      MR_Word OtherVar_12;

      succeeded = ((MR_tag((MR_Word) RHS_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        OtherVar_12 = ((MR_Word) ((MR_hl_field(0, RHS_8, (MR_Integer) 0))));
        TypeInfo_16_16 = (MR_Word) (&check_hlds__modecheck_conj_scalar_common_1[0]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_16_16, ((MR_Box) (OtherVar_12)), HeadVars_3);
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Goal_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));

  return Goal_5;
}

void MR_CALL 
check_hlds__modecheck_conj__modecheck_conj_list_5_p_0(
  MR_Word ConjType_6,
  MR_Word Goals0_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_37,
  MR_Word * STATE_VARIABLE_ModeInfo_38)
{
  MR_Word OldErrors_10;
  MR_Word DelayInfo0_11;
  MR_Word DelayInfo1_12;
  MR_Word LiveVars1_13;
  MR_Word Goals1_14;
  MR_Word RevImpurityErrors0_15;
  MR_Word DelayInfo2_16;
  MR_Word DelayedGoals0_17;
  MR_Word DelayInfo3_18;
  MR_Word DelayedGoals_19;
  MR_Word Goals2_20;
  MR_Word RevImpurityErrors_21;
  MR_Word NewErrors_22;
  MR_Word Errors_23;
  MR_Word STATE_VARIABLE_ModeInfo_40_40;
  MR_Word STATE_VARIABLE_ModeInfo_41_41;
  MR_Word STATE_VARIABLE_ModeInfo_42_42;
  MR_Word STATE_VARIABLE_ModeInfo_44_44;
  MR_Word STATE_VARIABLE_ModeInfo_45_45;
  MR_Word STATE_VARIABLE_ModeInfo_46_46;
  MR_Word STATE_VARIABLE_ModeInfo_47_47;
  MR_Word GoalsCord_54;
  MR_Word Var_55;

  check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_37, &OldErrors_10);
  check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_37, &STATE_VARIABLE_ModeInfo_40_40);
  check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_40_40, &DelayInfo0_11);
  check_hlds__delay_info__delay_info_enter_conj_2_p_0(DelayInfo0_11, &DelayInfo1_12);
  check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo1_12, STATE_VARIABLE_ModeInfo_40_40, &STATE_VARIABLE_ModeInfo_41_41);
  check_hlds__mode_info__mode_info_get_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_41_41, &LiveVars1_13);
  check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(ConjType_6, Goals0_7, STATE_VARIABLE_ModeInfo_41_41, &STATE_VARIABLE_ModeInfo_42_42);
  Var_55 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
  check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(ConjType_6, Goals0_7, Var_55, &GoalsCord_54, (MR_Word) ((MR_Unsigned) 0U), &RevImpurityErrors0_15, STATE_VARIABLE_ModeInfo_42_42, &STATE_VARIABLE_ModeInfo_44_44);
  Goals1_14 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalsCord_54);
  check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_44_44, &DelayInfo2_16);
  check_hlds__delay_info__delay_info_leave_conj_3_p_0(DelayInfo2_16, &DelayedGoals0_17, &DelayInfo3_18);
  check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo3_18, STATE_VARIABLE_ModeInfo_44_44, &STATE_VARIABLE_ModeInfo_45_45);
  check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0(ConjType_6, DelayedGoals0_17, &DelayedGoals_19, &Goals2_20, RevImpurityErrors0_15, &RevImpurityErrors_21, STATE_VARIABLE_ModeInfo_45_45, &STATE_VARIABLE_ModeInfo_46_46);
  *Goals_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals1_14, Goals2_20);
  check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_46_46, &NewErrors_22);
  Errors_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), OldErrors_10, NewErrors_22);
  check_hlds__mode_info__mode_info_set_errors_3_p_0(Errors_23, STATE_VARIABLE_ModeInfo_46_46, &STATE_VARIABLE_ModeInfo_47_47);
  if ((DelayedGoals_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ImpurityErrors_24;
    MR_Word Errors5_25;
    MR_Word Errors6_26;

    mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), RevImpurityErrors_21, &ImpurityErrors_24);
    check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_47_47, &Errors5_25);
    Errors6_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), Errors5_25, ImpurityErrors_24);
    check_hlds__mode_info__mode_info_set_errors_3_p_0(Errors6_26, STATE_VARIABLE_ModeInfo_47_47, STATE_VARIABLE_ModeInfo_38);
  }
  else
  {
    MR_Word HeadDelayedGoal_27 = ((MR_Word) ((MR_hl_field(1, DelayedGoals_19, (MR_Integer) 0))));
    MR_Word TailDelayedGoals_28 = ((MR_Word) ((MR_hl_field(1, DelayedGoals_19, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_ModeInfo_49_49;

    check_hlds__mode_info__mode_info_set_live_vars_3_p_0(LiveVars1_13, STATE_VARIABLE_ModeInfo_47_47, &STATE_VARIABLE_ModeInfo_49_49);
    if ((TailDelayedGoals_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Error_30 = ((MR_Word) ((MR_hl_field(0, HeadDelayedGoal_27, (MR_Integer) 1))));

      check_hlds__mode_info__mode_info_add_error_3_p_0(Error_30, STATE_VARIABLE_ModeInfo_49_49, STATE_VARIABLE_ModeInfo_38);
    }
    else
    {
      MR_Word Vars_34;
      MR_Word OoMDelayedGoals_35;
      MR_Word ModeError_36;
      MR_Word Var_57;
      MR_Word Vars1_60;
      MR_Word Rest_63;
      MR_Word Vars2_66;
      MR_Word Var_67;

      Var_57 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      Var_67 = ((MR_Word) ((MR_hl_field(1, DelayedGoals_19, (MR_Integer) 0))));
      Rest_63 = ((MR_Word) ((MR_hl_field(1, DelayedGoals_19, (MR_Integer) 1))));
      Vars1_60 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 0))));
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_57, Vars1_60, &Vars2_66);
      check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(Rest_63, Vars2_66, &Vars_34);
      {
        OoMDelayedGoals_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OoMDelayedGoals_35, 0) = ((MR_Box) (HeadDelayedGoal_27));
        MR_hl_field(0, OoMDelayedGoals_35, 1) = ((MR_Box) (TailDelayedGoals_28));
      }
      {
        ModeError_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ModeError_36, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(3, ModeError_36, 1) = ((MR_Box) (OoMDelayedGoals_35));
        MR_hl_field(3, ModeError_36, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(Vars_34, ModeError_36, STATE_VARIABLE_ModeInfo_49_49, STATE_VARIABLE_ModeInfo_38);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Goals_0_3,
  MR_Word * STATE_VARIABLE_Goals_4,
  MR_Word STATE_VARIABLE_ImpurityErrors_0_5,
  MR_Word * STATE_VARIABLE_ImpurityErrors_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_7,
  MR_Word * STATE_VARIABLE_ModeInfo_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModeInfo_8 = STATE_VARIABLE_ModeInfo_0_7;
      *STATE_VARIABLE_ImpurityErrors_6 = STATE_VARIABLE_ImpurityErrors_0_5;
      *STATE_VARIABLE_Goals_4 = STATE_VARIABLE_Goals_0_3;
    }
    else
    {
      MR_Word Goal0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ConjGoals_25;
      MR_Word Var_63;
      MR_Word Var_64;

      succeeded = (HeadVar__1_1 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_63 = ((MR_Word) ((MR_hl_field(0, Goal0_20, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Var_63)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_63, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_64 = ((MR_Unsigned) ((MR_hl_field(3, Var_63, (MR_Integer) 1))) & (MR_Integer) 1);
          ConjGoals_25 = ((MR_Word) ((MR_hl_field(3, Var_63, (MR_Integer) 2))));
          succeeded = (Var_64 == (MR_Integer) 0);
        }
      }
      if (succeeded)
      {
        MR_Word Goals1_27;
        MR_Word next_value_of_HeadVar__2_2;

        Goals1_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConjGoals_25, Goals0_21);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Goals1_27;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word Purity_28;
        MR_Word Impure_29;
        MR_Word InstMap0_31;
        MR_Word DelayInfo0_32;
        MR_Word NonLocalVars_33;
        MR_Word Goal_34;
        MR_Word Errors_35;
        MR_Word DelayInfo1_38;
        MR_Word WokenGoals_50;
        MR_Word DelayInfo_51;
        MR_Word InstMap_56;
        MR_Word STATE_VARIABLE_ImpurityErrors_68_68;
        MR_Word STATE_VARIABLE_ModeInfo_69_69;
        MR_Word STATE_VARIABLE_Goals_70_70;
        MR_Word STATE_VARIABLE_ModeInfo_72_72;
        MR_Word STATE_VARIABLE_ModeInfo_73_73;
        MR_Word STATE_VARIABLE_ModeInfo_77_77;
        MR_Word STATE_VARIABLE_ImpurityErrors_81_81;
        MR_Word STATE_VARIABLE_Goals_83_83;
        MR_Word STATE_VARIABLE_ModeInfo_89_89;
        MR_Word STATE_VARIABLE_ModeInfo_94_94;
        MR_Word Goals1_99;

        Purity_28 = hlds__hlds_goal__goal_get_purity_1_f_0(Goal0_20);
        switch (Purity_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              MR_Word ScheduledSolverGoals_30;
              MR_Word Var_71;

              Impure_29 = (MR_Integer) 1;
              check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(Goal0_20, &ScheduledSolverGoals_30, STATE_VARIABLE_ImpurityErrors_0_5, &STATE_VARIABLE_ImpurityErrors_68_68, STATE_VARIABLE_ModeInfo_0_7, &STATE_VARIABLE_ModeInfo_69_69);
              Var_71 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ScheduledSolverGoals_30);
              STATE_VARIABLE_Goals_70_70 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_Goals_0_3, Var_71);
            }
            break;
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              Impure_29 = (MR_Integer) 0;
              STATE_VARIABLE_Goals_70_70 = STATE_VARIABLE_Goals_0_3;
              STATE_VARIABLE_ImpurityErrors_68_68 = STATE_VARIABLE_ImpurityErrors_0_5;
              STATE_VARIABLE_ModeInfo_69_69 = STATE_VARIABLE_ModeInfo_0_7;
            }
            break;
        }
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &InstMap0_31);
        check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &DelayInfo0_32);
        NonLocalVars_33 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_20);
        check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocalVars_33, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_72_72);
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_20, &Goal_34, STATE_VARIABLE_ModeInfo_72_72, &STATE_VARIABLE_ModeInfo_73_73);
        check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_73_73, &Errors_35);
        if ((Errors_35 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SubGoals_48;
          MR_Word Var_82;
          MR_Word Var_105;

          check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_73_73, &DelayInfo1_38);
          Var_82 = ((MR_Word) ((MR_hl_field(0, Goal_34, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) Var_82)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_82, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_105 = ((MR_Unsigned) ((MR_hl_field(3, Var_82, (MR_Integer) 1))) & (MR_Integer) 1);
            SubGoals_48 = ((MR_Word) ((MR_hl_field(3, Var_82, (MR_Integer) 2))));
            succeeded = (HeadVar__1_1 == Var_105);
          }
          if (succeeded)
          {
            MR_Word Var_84;

            Var_84 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubGoals_48);
            STATE_VARIABLE_Goals_83_83 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_Goals_70_70, Var_84);
          }
          else
            STATE_VARIABLE_Goals_83_83 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_Goals_70_70, ((MR_Box) (Goal_34)));
          STATE_VARIABLE_ImpurityErrors_81_81 = STATE_VARIABLE_ImpurityErrors_68_68;
          STATE_VARIABLE_ModeInfo_77_77 = STATE_VARIABLE_ModeInfo_73_73;
        }
        else
        {
          MR_Word FirstErrorInfo_36 = ((MR_Word) ((MR_hl_field(1, Errors_35, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_ModeInfo_75_75;
          MR_Word STATE_VARIABLE_ModeInfo_76_76;

          check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_73_73, &STATE_VARIABLE_ModeInfo_75_75);
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_31, STATE_VARIABLE_ModeInfo_75_75, &STATE_VARIABLE_ModeInfo_76_76);
          check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocalVars_33, STATE_VARIABLE_ModeInfo_76_76, &STATE_VARIABLE_ModeInfo_77_77);
          check_hlds__delay_info__delay_info_delay_goal_4_p_0(FirstErrorInfo_36, Goal0_20, DelayInfo0_32, &DelayInfo1_38);
          switch (Impure_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ImpurityErrors_81_81 = STATE_VARIABLE_ImpurityErrors_68_68;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Vars_39 = ((MR_Word) ((MR_hl_field(0, FirstErrorInfo_36, (MR_Integer) 0))));
                MR_Word DelayedError_43;
                MR_Word ImpureError_44;
                MR_Word Context_45;
                MR_Word ModeContext_46;
                MR_Word ImpureErrorInfo_47;
                MR_Word Var_78;

                {
                  DelayedError_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, DelayedError_43, 0) = ((MR_Box) (Vars_39));
                  MR_hl_field(0, DelayedError_43, 1) = ((MR_Box) (FirstErrorInfo_36));
                  MR_hl_field(0, DelayedError_43, 2) = ((MR_Box) (Goal0_20));
                }
                {
                  Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_78, 0) = ((MR_Box) (DelayedError_43));
                  MR_hl_field(0, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  ImpureError_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ImpureError_44, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                  MR_hl_field(3, ImpureError_44, 1) = ((MR_Box) (Var_78));
                  MR_hl_field(3, ImpureError_44, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__mode_info__mode_info_get_context_2_p_0(STATE_VARIABLE_ModeInfo_77_77, &Context_45);
                check_hlds__mode_info__mode_info_get_mode_context_2_p_0(STATE_VARIABLE_ModeInfo_77_77, &ModeContext_46);
                {
                  ImpureErrorInfo_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, ImpureErrorInfo_47, 0) = ((MR_Box) (Vars_39));
                  MR_hl_field(0, ImpureErrorInfo_47, 1) = ((MR_Box) (ImpureError_44));
                  MR_hl_field(0, ImpureErrorInfo_47, 2) = ((MR_Box) (Context_45));
                  MR_hl_field(0, ImpureErrorInfo_47, 3) = ((MR_Box) (ModeContext_46));
                }
                {
                  STATE_VARIABLE_ImpurityErrors_81_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_ImpurityErrors_81_81, 0) = ((MR_Box) (ImpureErrorInfo_47));
                  MR_hl_field(1, STATE_VARIABLE_ImpurityErrors_81_81, 1) = ((MR_Box) (STATE_VARIABLE_ImpurityErrors_68_68));
                }
              }
              break;
          }
          STATE_VARIABLE_Goals_83_83 = STATE_VARIABLE_Goals_70_70;
        }
        check_hlds__delay_info__delay_info_wakeup_goals_3_p_0(&WokenGoals_50, DelayInfo1_38, &DelayInfo_51);
        Goals1_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WokenGoals_50, Goals0_21);
        if ((WokenGoals_50 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_ModeInfo_89_89 = STATE_VARIABLE_ModeInfo_77_77;
        else
        {
          MR_Word Var_106 = ((MR_Word) ((MR_hl_field(1, WokenGoals_50, (MR_Integer) 1))));

          if ((Var_106 == (MR_Word) ((MR_Unsigned) 0U)))
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 2, (MR_String) "goal", STATE_VARIABLE_ModeInfo_77_77, &STATE_VARIABLE_ModeInfo_89_89);
          else
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 2, (MR_String) "goals", STATE_VARIABLE_ModeInfo_77_77, &STATE_VARIABLE_ModeInfo_89_89);
        }
        check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo_51, STATE_VARIABLE_ModeInfo_89_89, &STATE_VARIABLE_ModeInfo_94_94);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_94_94, &InstMap_56);
        succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap_56);
        if (succeeded)
        {
          check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(Goals1_99, STATE_VARIABLE_ModeInfo_94_94, STATE_VARIABLE_ModeInfo_8);
          *STATE_VARIABLE_ImpurityErrors_6 = STATE_VARIABLE_ImpurityErrors_81_81;
          *STATE_VARIABLE_Goals_4 = STATE_VARIABLE_Goals_83_83;
        }
        else
        {
          MR_Word next_value_of_HeadVar__2_2 = Goals1_99;
          MR_Word next_value_of_STATE_VARIABLE_Goals_0_3 = STATE_VARIABLE_Goals_83_83;
          MR_Word next_value_of_STATE_VARIABLE_ImpurityErrors_0_5 = STATE_VARIABLE_ImpurityErrors_81_81;
          MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_7 = STATE_VARIABLE_ModeInfo_94_94;

          // direct tailcall eliminated
          ;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Goals_0_3 = next_value_of_STATE_VARIABLE_Goals_0_3;
          STATE_VARIABLE_ImpurityErrors_0_5 = next_value_of_STATE_VARIABLE_ImpurityErrors_0_5;
          STATE_VARIABLE_ModeInfo_0_7 = next_value_of_STATE_VARIABLE_ModeInfo_0_7;
          continue;
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(
  MR_Word Goal_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_ImpurityErrors_0_33,
  MR_Word * STATE_VARIABLE_ImpurityErrors_34,
  MR_Word STATE_VARIABLE_ModeInfo_0_35,
  MR_Word * STATE_VARIABLE_ModeInfo_36)
{
  MR_bool succeeded;
  MR_Word DelayInfo0_11;
  MR_Word DelayedGoals0_12;
  MR_Word DelayInfo1_13;
  MR_Word ModuleInfo_14;
  MR_Word PredId_15;
  MR_Word PredInfo_16;
  MR_Word ClausesInfo_17;
  MR_Word HeadVars_18;
  MR_Word HeadVarUnificationGoals_19;
  MR_Word NonHeadVarUnificationGoals0_20;
  MR_Word NonHeadVarUnificationGoals_21;
  MR_Word DelayInfo2_22;
  MR_Word DelayInfo3_23;
  MR_Word DelayInfo_24;
  MR_Word STATE_VARIABLE_ModeInfo_37_37;
  MR_Word STATE_VARIABLE_ImpurityErrors_39_39;
  MR_Word STATE_VARIABLE_ModeInfo_40_40;
  MR_Word Var_43;

  check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_0_35, &DelayInfo0_11);
  check_hlds__delay_info__delay_info_leave_conj_3_p_0(DelayInfo0_11, &DelayedGoals0_12, &DelayInfo1_13);
  check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo1_13, STATE_VARIABLE_ModeInfo_0_35, &STATE_VARIABLE_ModeInfo_37_37);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_37_37, &ModuleInfo_14);
  check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_37_37, &PredId_15);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_14, PredId_15, &PredInfo_16);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_16, &ClausesInfo_17);
  hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_17, &HeadVars_18);
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_2[1]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (HeadVars_18));
  }
  mercury__list__filter_4_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), Var_43, DelayedGoals0_12, &HeadVarUnificationGoals_19, &NonHeadVarUnificationGoals0_20);
  check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0((MR_Integer) 0, NonHeadVarUnificationGoals0_20, &NonHeadVarUnificationGoals_21, Goals_8, STATE_VARIABLE_ImpurityErrors_0_33, &STATE_VARIABLE_ImpurityErrors_39_39, STATE_VARIABLE_ModeInfo_37_37, &STATE_VARIABLE_ModeInfo_40_40);
  check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_40_40, &DelayInfo2_22);
  check_hlds__delay_info__delay_info_enter_conj_2_p_0(DelayInfo2_22, &DelayInfo3_23);
  check_hlds__modecheck_conj__redelay_goals_3_p_0(HeadVarUnificationGoals_19, DelayInfo3_23, &DelayInfo_24);
  check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo_24, STATE_VARIABLE_ModeInfo_40_40, STATE_VARIABLE_ModeInfo_36);
  if ((NonHeadVarUnificationGoals_21 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ImpurityErrors_34 = STATE_VARIABLE_ImpurityErrors_39_39;
  else
  {
    MR_Word HeadGoal_25 = ((MR_Word) ((MR_hl_field(1, NonHeadVarUnificationGoals_21, (MR_Integer) 0))));
    MR_Word TailGoals_26 = ((MR_Word) ((MR_hl_field(1, NonHeadVarUnificationGoals_21, (MR_Integer) 1))));
    MR_Word Vars_27;
    MR_Word OoMNonHeadVarUnificationGoals_28;
    MR_Word ModeError_29;
    MR_Word Context_30;
    MR_Word ModeContext_31;
    MR_Word ImpurityError_32;
    MR_Word Var_42;
    MR_Word Var_45;
    MR_Word Vars1_48;
    MR_Word Rest_51;
    MR_Word Vars2_54;
    MR_Word Var_55;

    Var_45 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_55 = ((MR_Word) ((MR_hl_field(1, NonHeadVarUnificationGoals_21, (MR_Integer) 0))));
    Rest_51 = ((MR_Word) ((MR_hl_field(1, NonHeadVarUnificationGoals_21, (MR_Integer) 1))));
    Vars1_48 = ((MR_Word) ((MR_hl_field(0, Var_55, (MR_Integer) 0))));
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_45, Vars1_48, &Vars2_54);
    check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(Rest_51, Vars2_54, &Vars_27);
    {
      OoMNonHeadVarUnificationGoals_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OoMNonHeadVarUnificationGoals_28, 0) = ((MR_Box) (HeadGoal_25));
      MR_hl_field(0, OoMNonHeadVarUnificationGoals_28, 1) = ((MR_Box) (TailGoals_26));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (Goal_7));
    }
    {
      ModeError_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_29, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(3, ModeError_29, 1) = ((MR_Box) (OoMNonHeadVarUnificationGoals_28));
      MR_hl_field(3, ModeError_29, 2) = ((MR_Box) (Var_42));
    }
    check_hlds__mode_info__mode_info_get_context_2_p_0(*STATE_VARIABLE_ModeInfo_36, &Context_30);
    check_hlds__mode_info__mode_info_get_mode_context_2_p_0(*STATE_VARIABLE_ModeInfo_36, &ModeContext_31);
    {
      ImpurityError_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ImpurityError_32, 0) = ((MR_Box) (Vars_27));
      MR_hl_field(0, ImpurityError_32, 1) = ((MR_Box) (ModeError_29));
      MR_hl_field(0, ImpurityError_32, 2) = ((MR_Box) (Context_30));
      MR_hl_field(0, ImpurityError_32, 3) = ((MR_Box) (ModeContext_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ImpurityErrors_34 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ImpurityError_32));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ImpurityErrors_39_39));
    }
  }
}

static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_5;

  conv0_Goal_5 = check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Goal_5));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0(
  MR_Word ConjType_9,
  MR_Word DelayedGoals0_10,
  MR_Word * DelayedGoals_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_ImpurityErrors_0_25,
  MR_Word * STATE_VARIABLE_ImpurityErrors_26,
  MR_Word STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * STATE_VARIABLE_ModeInfo_28)
{
  MR_bool succeeded;

  if ((DelayedGoals0_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *DelayedGoals_11 = (MR_Word) ((MR_Unsigned) 0U);
    *Goals_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ImpurityErrors_26 = STATE_VARIABLE_ImpurityErrors_0_25;
    *STATE_VARIABLE_ModeInfo_28 = STATE_VARIABLE_ModeInfo_0_27;
  }
  else
  {
    MR_Word Goals0_17;
    MR_Word DelayInfo0_18;
    MR_Word DelayInfo1_19;
    MR_Word Goals1_20;
    MR_Word DelayInfo2_21;
    MR_Word DelayedGoals1_22;
    MR_Word DelayInfo3_23;
    MR_Word STATE_VARIABLE_ModeInfo_30_30;
    MR_Word STATE_VARIABLE_ImpurityErrors_31_31;
    MR_Word STATE_VARIABLE_ModeInfo_32_32;
    MR_Word STATE_VARIABLE_ModeInfo_33_33;
    MR_Word GoalsCord_38;
    MR_Word Var_39;
    MR_Integer Var_34;
    MR_Integer Var_35;

    Goals0_17 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__modecheck_conj_scalar_common_3[0]), DelayedGoals0_10);
    check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_0_27, &DelayInfo0_18);
    check_hlds__delay_info__delay_info_enter_conj_2_p_0(DelayInfo0_18, &DelayInfo1_19);
    check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo1_19, STATE_VARIABLE_ModeInfo_0_27, &STATE_VARIABLE_ModeInfo_30_30);
    Var_39 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
    check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(ConjType_9, Goals0_17, Var_39, &GoalsCord_38, STATE_VARIABLE_ImpurityErrors_0_25, &STATE_VARIABLE_ImpurityErrors_31_31, STATE_VARIABLE_ModeInfo_30_30, &STATE_VARIABLE_ModeInfo_32_32);
    Goals1_20 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalsCord_38);
    check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_32_32, &DelayInfo2_21);
    check_hlds__delay_info__delay_info_leave_conj_3_p_0(DelayInfo2_21, &DelayedGoals1_22, &DelayInfo3_23);
    check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo3_23, STATE_VARIABLE_ModeInfo_32_32, &STATE_VARIABLE_ModeInfo_33_33);
    Var_34 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), DelayedGoals1_22);
    Var_35 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), DelayedGoals0_10);
    succeeded = (Var_34 < Var_35);
    if (succeeded)
    {
      MR_Word Goals2_24;

      check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0(ConjType_9, DelayedGoals1_22, DelayedGoals_11, &Goals2_24, STATE_VARIABLE_ImpurityErrors_31_31, STATE_VARIABLE_ImpurityErrors_26, STATE_VARIABLE_ModeInfo_33_33, STATE_VARIABLE_ModeInfo_28);
      *Goals_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals1_20, Goals2_24);
    }
    else
    {
      *DelayedGoals_11 = DelayedGoals1_22;
      *Goals_12 = Goals1_20;
      *STATE_VARIABLE_ModeInfo_28 = STATE_VARIABLE_ModeInfo_33_33;
      *STATE_VARIABLE_ImpurityErrors_26 = STATE_VARIABLE_ImpurityErrors_31_31;
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_conj__redelay_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DelayInfo_0_2,
  MR_Word * STATE_VARIABLE_DelayInfo_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DelayInfo_3 = STATE_VARIABLE_DelayInfo_0_2;
    else
    {
      MR_Word DelayedGoal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word DelayedGoals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModeErrorInfo_11 = ((MR_Word) ((MR_hl_field(0, DelayedGoal_7, (MR_Integer) 1))));
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(0, DelayedGoal_7, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_DelayInfo_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_DelayInfo_0_2;

      check_hlds__delay_info__delay_info_delay_goal_4_p_0(ModeErrorInfo_11, Goal_12, STATE_VARIABLE_DelayInfo_0_2, &STATE_VARIABLE_DelayInfo_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = DelayedGoals_8;
      next_value_of_STATE_VARIABLE_DelayInfo_0_2 = STATE_VARIABLE_DelayInfo_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_DelayInfo_0_2 = next_value_of_STATE_VARIABLE_DelayInfo_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Vars_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *Vars_3 = HeadVar__2_2;
    else
    {
      MR_Word Vars1_5;
      MR_Word Rest_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Vars2_11;
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      Vars1_5 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__2_2, Vars1_5, &Vars2_11);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_8;
      next_value_of_HeadVar__2_2 = Vars2_11;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_conj____Unify____impurity_errors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_conj____Compare____impurity_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__modecheck_conj__init(void)
{
}

void mercury__check_hlds__modecheck_conj__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__modecheck_conj__check_hlds__modecheck_conj__type_ctor_info_impurity_errors_0);
}

void mercury__check_hlds__modecheck_conj__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__modecheck_conj__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.modecheck_conj.
