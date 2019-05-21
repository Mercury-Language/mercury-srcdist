/*
** Automatically generated from `modecheck_conj.m'
** by the Mercury compiler,
** version rotd-2018-02-20
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
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "int.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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
  MR_Word STATE_VARIABLE_ImpurityErrors_0_32,
  MR_Word * STATE_VARIABLE_ImpurityErrors_33,
  MR_Word STATE_VARIABLE_ModeInfo_0_34,
  MR_Word * STATE_VARIABLE_ModeInfo_35);

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
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_2[0])),
    ((MR_Box) (check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_conj__check_hlds__modecheck_conj__type_ctor_info_impurity_errors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__modecheck_conj____Unify____impurity_errors_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_conj____Compare____impurity_errors_0_0_10001)),
  (MR_String) "check_hlds.modecheck_conj",
  (MR_String) "impurity_errors",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__modecheck_conj__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(
  MR_Word HeadVars_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
    MR_Word Var_7;
    MR_Word RHS_8;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0)));
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1)));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0)));
      RHS_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 1)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 2)));
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 3)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 4)));
      succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[0], ((MR_Box) (Var_7)), HeadVars_3);
      if (!(succeeded))
      {
        MR_Word TypeInfo_16_16;
        MR_Word OtherVar_12;

        succeeded = ((MR_tag((MR_Word) RHS_8)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          OtherVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_8, (MR_Integer) 0)));
          TypeInfo_16_16 = (MR_Word) &check_hlds__modecheck_conj_scalar_common_1[0];
          succeeded = mercury__list__member_2_p_0(TypeInfo_16_16, ((MR_Box) (OtherVar_12)), HeadVars_3);
        }
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Word _WaitingVars_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word _ModeError_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

    return Goal_5;
  }
}

void MR_CALL 
check_hlds__modecheck_conj__modecheck_conj_list_5_p_0(
  MR_Word ConjType_6,
  MR_Word Goals0_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_36,
  MR_Word * STATE_VARIABLE_ModeInfo_37)
{
  {
    MR_Word TypeCtorInfo_53_53;
    MR_Word TypeCtorInfo_21_67;
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
    MR_Word STATE_VARIABLE_ModeInfo_39_39;
    MR_Word STATE_VARIABLE_ModeInfo_40_40;
    MR_Word STATE_VARIABLE_ModeInfo_41_41;
    MR_Word STATE_VARIABLE_ModeInfo_43_43;
    MR_Word STATE_VARIABLE_ModeInfo_44_44;
    MR_Word STATE_VARIABLE_ModeInfo_45_45;
    MR_Word STATE_VARIABLE_ModeInfo_46_46;
    MR_Word GoalsCord_63;
    MR_Word Var_64;

    check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_36, &OldErrors_10);
    check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_ModeInfo_0_36, &STATE_VARIABLE_ModeInfo_39_39);
    check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_39_39, &DelayInfo0_11);
    check_hlds__delay_info__delay_info_enter_conj_2_p_0(DelayInfo0_11, &DelayInfo1_12);
    check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo1_12, STATE_VARIABLE_ModeInfo_39_39, &STATE_VARIABLE_ModeInfo_40_40);
    check_hlds__mode_info__mode_info_get_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_40_40, &LiveVars1_13);
    check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(ConjType_6, Goals0_7, STATE_VARIABLE_ModeInfo_40_40, &STATE_VARIABLE_ModeInfo_41_41);
    TypeCtorInfo_21_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    Var_64 = mercury__cord__init_0_f_0(TypeCtorInfo_21_67);
    check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(ConjType_6, Goals0_7, Var_64, &GoalsCord_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevImpurityErrors0_15, STATE_VARIABLE_ModeInfo_41_41, &STATE_VARIABLE_ModeInfo_43_43);
    Goals1_14 = mercury__cord__list_1_f_0(TypeCtorInfo_21_67, GoalsCord_63);
    check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_43_43, &DelayInfo2_16);
    check_hlds__delay_info__delay_info_leave_conj_3_p_0(DelayInfo2_16, &DelayedGoals0_17, &DelayInfo3_18);
    check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo3_18, STATE_VARIABLE_ModeInfo_43_43, &STATE_VARIABLE_ModeInfo_44_44);
    check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0(ConjType_6, DelayedGoals0_17, &DelayedGoals_19, &Goals2_20, RevImpurityErrors0_15, &RevImpurityErrors_21, STATE_VARIABLE_ModeInfo_44_44, &STATE_VARIABLE_ModeInfo_45_45);
    *Goals_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, Goals1_14, Goals2_20);
    check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_45_45, &NewErrors_22);
    TypeCtorInfo_53_53 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
    Errors_23 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_53_53, OldErrors_10, NewErrors_22);
    check_hlds__mode_info__mode_info_set_errors_3_p_0(Errors_23, STATE_VARIABLE_ModeInfo_45_45, &STATE_VARIABLE_ModeInfo_46_46);
    if ((DelayedGoals_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ImpurityErrors_24;
      MR_Word Errors5_25;
      MR_Word Errors6_26;

      mercury__list__reverse_2_p_0(TypeCtorInfo_53_53, RevImpurityErrors_21, &ImpurityErrors_24);
      check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_46_46, &Errors5_25);
      Errors6_26 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_53_53, Errors5_25, ImpurityErrors_24);
      check_hlds__mode_info__mode_info_set_errors_3_p_0(Errors6_26, STATE_VARIABLE_ModeInfo_46_46, STATE_VARIABLE_ModeInfo_37);
    }
    else
    {
      MR_Word FirstDelayedGoal_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), DelayedGoals_19, (MR_Integer) 0)));
      MR_Word MoreDelayedGoals_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), DelayedGoals_19, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_ModeInfo_47_47;

      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(LiveVars1_13, STATE_VARIABLE_ModeInfo_46_46, &STATE_VARIABLE_ModeInfo_47_47);
      if ((MoreDelayedGoals_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Error_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstDelayedGoal_27, (MR_Integer) 1)));
        MR_Word _DVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstDelayedGoal_27, (MR_Integer) 0)));
        MR_Word _DGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstDelayedGoal_27, (MR_Integer) 2)));

        check_hlds__mode_info__mode_info_add_error_3_p_0(Error_30, STATE_VARIABLE_ModeInfo_47_47, STATE_VARIABLE_ModeInfo_37);
      }
      else
      {
        MR_Word Vars_34;
        MR_Word ModeError_35;
        MR_Word Var_70;
        MR_Word Vars1_73;
        MR_Word Rest_76;
        MR_Word Vars2_79;
        MR_Word Var_80;
        MR_Word Var_74;
        MR_Word Var_75;

        Var_70 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), DelayedGoals_19, (MR_Integer) 0)));
        Rest_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), DelayedGoals_19, (MR_Integer) 1)));
        Vars1_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_80, (MR_Integer) 0)));
        Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_80, (MR_Integer) 1)));
        Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_80, (MR_Integer) 2)));
        parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_70, Vars1_73, &Vars2_79);
        check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(Rest_76, Vars2_79, &Vars_34);
        {
          ModeError_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ModeError_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
          MR_hl_field(MR_mktag(3), ModeError_35, 1) = ((MR_Box) (DelayedGoals_19));
          MR_hl_field(MR_mktag(3), ModeError_35, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        }
        check_hlds__mode_info__mode_info_error_4_p_0(Vars_34, ModeError_35, STATE_VARIABLE_ModeInfo_47_47, STATE_VARIABLE_ModeInfo_37);
      }
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
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_ModeInfo_8 = STATE_VARIABLE_ModeInfo_0_7;
      *STATE_VARIABLE_ImpurityErrors_6 = STATE_VARIABLE_ImpurityErrors_0_5;
      *STATE_VARIABLE_Goals_4 = STATE_VARIABLE_Goals_0_3;
    }
    else
    {
      MR_Word Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Goals0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ConjGoals_25;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_26;

      succeeded = (HeadVar__1_1 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_20, (MR_Integer) 0)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_20, (MR_Integer) 1)));
        succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 1)));
          ConjGoals_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 2)));
          succeeded = (Var_63 == (MR_Integer) 0);
        }
      }
      if (succeeded)
      {
        MR_Word Goals1_27;
        MR_Word next_value_of_HeadVar__2_2;

        Goals1_27 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ConjGoals_25, Goals0_21);
        // direct tailcall eliminated
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
        MR_Word WokenGoals_49;
        MR_Word DelayInfo_50;
        MR_Word InstMap_55;
        MR_Word STATE_VARIABLE_ImpurityErrors_67_67;
        MR_Word STATE_VARIABLE_ModeInfo_68_68;
        MR_Word STATE_VARIABLE_Goals_69_69;
        MR_Word STATE_VARIABLE_ModeInfo_71_71;
        MR_Word STATE_VARIABLE_ModeInfo_72_72;
        MR_Word STATE_VARIABLE_Goals_74_74;
        MR_Word STATE_VARIABLE_ModeInfo_80_80;
        MR_Word STATE_VARIABLE_ImpurityErrors_85_85;
        MR_Word STATE_VARIABLE_ModeInfo_93_93;
        MR_Word STATE_VARIABLE_ModeInfo_94_94;
        MR_Word Goals1_99;

        Purity_28 = hlds__hlds_goal__goal_get_purity_1_f_0(Goal0_20);
        switch (Purity_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              MR_Word TypeCtorInfo_101_101;
              MR_Word ScheduledSolverGoals_30;
              MR_Word Var_70;

              Impure_29 = (MR_Integer) 1;
              check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(Goal0_20, &ScheduledSolverGoals_30, STATE_VARIABLE_ImpurityErrors_0_5, &STATE_VARIABLE_ImpurityErrors_67_67, STATE_VARIABLE_ModeInfo_0_7, &STATE_VARIABLE_ModeInfo_68_68);
              TypeCtorInfo_101_101 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              Var_70 = mercury__cord__from_list_1_f_0(TypeCtorInfo_101_101, ScheduledSolverGoals_30);
              STATE_VARIABLE_Goals_69_69 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_101_101, STATE_VARIABLE_Goals_0_3, Var_70);
            }
            break;
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              Impure_29 = (MR_Integer) 0;
              STATE_VARIABLE_Goals_69_69 = STATE_VARIABLE_Goals_0_3;
              STATE_VARIABLE_ImpurityErrors_67_67 = STATE_VARIABLE_ImpurityErrors_0_5;
              STATE_VARIABLE_ModeInfo_68_68 = STATE_VARIABLE_ModeInfo_0_7;
            }
            break;
        }
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_68_68, &InstMap0_31);
        check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_68_68, &DelayInfo0_32);
        NonLocalVars_33 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_20);
        check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocalVars_33, STATE_VARIABLE_ModeInfo_68_68, &STATE_VARIABLE_ModeInfo_71_71);
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_20, &Goal_34, STATE_VARIABLE_ModeInfo_71_71, &STATE_VARIABLE_ModeInfo_72_72);
        check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_72_72, &Errors_35);
        if ((Errors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word SubGoals_47;
          MR_Word Var_73;
          MR_Word Var_105;
          MR_Word Var_48;

          check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_72_72, &DelayInfo1_38);
          Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_34, (MR_Integer) 0)));
          Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_34, (MR_Integer) 1)));
          succeeded = ((((MR_tag((MR_Word) Var_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_73, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_73, (MR_Integer) 1)));
            SubGoals_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_73, (MR_Integer) 2)));
            succeeded = (HeadVar__1_1 == Var_105);
          }
          if (succeeded)
          {
            MR_Word TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
            MR_Word Var_75;

            Var_75 = mercury__cord__from_list_1_f_0(TypeCtorInfo_102_102, SubGoals_47);
            STATE_VARIABLE_Goals_74_74 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_102_102, STATE_VARIABLE_Goals_69_69, Var_75);
          }
          else
          {
            STATE_VARIABLE_Goals_74_74 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, STATE_VARIABLE_Goals_69_69, ((MR_Box) (Goal_34)));
          }
          STATE_VARIABLE_ImpurityErrors_85_85 = STATE_VARIABLE_ImpurityErrors_67_67;
          STATE_VARIABLE_ModeInfo_80_80 = STATE_VARIABLE_ModeInfo_72_72;
        }
        else
        {
          MR_Word FirstErrorInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), Errors_35, (MR_Integer) 0)));
          MR_Word STATE_VARIABLE_ModeInfo_78_78;
          MR_Word STATE_VARIABLE_ModeInfo_79_79;
          MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), Errors_35, (MR_Integer) 1)));

          check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_ModeInfo_72_72, &STATE_VARIABLE_ModeInfo_78_78);
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_31, STATE_VARIABLE_ModeInfo_78_78, &STATE_VARIABLE_ModeInfo_79_79);
          check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocalVars_33, STATE_VARIABLE_ModeInfo_79_79, &STATE_VARIABLE_ModeInfo_80_80);
          check_hlds__delay_info__delay_info_delay_goal_4_p_0(FirstErrorInfo_36, Goal0_20, DelayInfo0_32, &DelayInfo1_38);
          switch (Impure_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ImpurityErrors_85_85 = STATE_VARIABLE_ImpurityErrors_67_67;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Vars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstErrorInfo_36, (MR_Integer) 0)));
                MR_Word ImpureError_43;
                MR_Word Context_44;
                MR_Word ModeContext_45;
                MR_Word ImpureErrorInfo_46;
                MR_Word Var_81;
                MR_Word Var_82;
                MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstErrorInfo_36, (MR_Integer) 1)));
                MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstErrorInfo_36, (MR_Integer) 2)));
                MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstErrorInfo_36, (MR_Integer) 3)));

                {
                  Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Vars_39));
                  MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (FirstErrorInfo_36));
                  MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) (Goal0_20));
                }
                {
                  Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
                  MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ImpureError_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ImpureError_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                  MR_hl_field(MR_mktag(3), ImpureError_43, 1) = ((MR_Box) (Var_81));
                  MR_hl_field(MR_mktag(3), ImpureError_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                check_hlds__mode_info__mode_info_get_context_2_p_0(STATE_VARIABLE_ModeInfo_80_80, &Context_44);
                check_hlds__mode_info__mode_info_get_mode_context_2_p_0(STATE_VARIABLE_ModeInfo_80_80, &ModeContext_45);
                {
                  ImpureErrorInfo_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ImpureErrorInfo_46, 0) = ((MR_Box) (Vars_39));
                  MR_hl_field(MR_mktag(0), ImpureErrorInfo_46, 1) = ((MR_Box) (ImpureError_43));
                  MR_hl_field(MR_mktag(0), ImpureErrorInfo_46, 2) = ((MR_Box) (Context_44));
                  MR_hl_field(MR_mktag(0), ImpureErrorInfo_46, 3) = ((MR_Box) (ModeContext_45));
                }
                {
                  STATE_VARIABLE_ImpurityErrors_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpurityErrors_85_85, 0) = ((MR_Box) (ImpureErrorInfo_46));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_ImpurityErrors_85_85, 1) = ((MR_Box) (STATE_VARIABLE_ImpurityErrors_67_67));
                }
              }
              break;
          }
          STATE_VARIABLE_Goals_74_74 = STATE_VARIABLE_Goals_69_69;
        }
        check_hlds__delay_info__delay_info_wakeup_goals_3_p_0(&WokenGoals_49, DelayInfo1_38, &DelayInfo_50);
        Goals1_99 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, WokenGoals_49, Goals0_21);
        if ((WokenGoals_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          STATE_VARIABLE_ModeInfo_93_93 = STATE_VARIABLE_ModeInfo_80_80;
        else
        {
          MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), WokenGoals_49, (MR_Integer) 1)));
          MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), WokenGoals_49, (MR_Integer) 0)));

          if ((Var_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 2, (MR_String) "goal", STATE_VARIABLE_ModeInfo_80_80, &STATE_VARIABLE_ModeInfo_93_93);
          }
          else
          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 2, (MR_String) "goals", STATE_VARIABLE_ModeInfo_80_80, &STATE_VARIABLE_ModeInfo_93_93);
          }
        }
        check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo_50, STATE_VARIABLE_ModeInfo_93_93, &STATE_VARIABLE_ModeInfo_94_94);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_94_94, &InstMap_55);
        succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap_55);
        if (succeeded)
        {
          check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(Goals1_99, STATE_VARIABLE_ModeInfo_94_94, STATE_VARIABLE_ModeInfo_8);
          *STATE_VARIABLE_ImpurityErrors_6 = STATE_VARIABLE_ImpurityErrors_85_85;
          *STATE_VARIABLE_Goals_4 = STATE_VARIABLE_Goals_74_74;
        }
        else
        {
          MR_Word next_value_of_HeadVar__2_2 = Goals1_99;
          MR_Word next_value_of_STATE_VARIABLE_Goals_0_3 = STATE_VARIABLE_Goals_74_74;
          MR_Word next_value_of_STATE_VARIABLE_ImpurityErrors_0_5 = STATE_VARIABLE_ImpurityErrors_85_85;
          MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_7 = STATE_VARIABLE_ModeInfo_94_94;

          // direct tailcall eliminated
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
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(
  MR_Word Goal_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_ImpurityErrors_0_32,
  MR_Word * STATE_VARIABLE_ImpurityErrors_33,
  MR_Word STATE_VARIABLE_ModeInfo_0_34,
  MR_Word * STATE_VARIABLE_ModeInfo_35)
{
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
    MR_Word STATE_VARIABLE_ModeInfo_36_36;
    MR_Word STATE_VARIABLE_ImpurityErrors_38_38;
    MR_Word STATE_VARIABLE_ModeInfo_39_39;
    MR_Word Var_47;

    check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_0_34, &DelayInfo0_11);
    check_hlds__delay_info__delay_info_leave_conj_3_p_0(DelayInfo0_11, &DelayedGoals0_12, &DelayInfo1_13);
    check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo1_13, STATE_VARIABLE_ModeInfo_0_34, &STATE_VARIABLE_ModeInfo_36_36);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_36_36, &ModuleInfo_14);
    check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_36_36, &PredId_15);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_14, PredId_15, &PredInfo_16);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_16, &ClausesInfo_17);
    hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_17, &HeadVars_18);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (HeadVars_18));
    }
    mercury__list__filter_4_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, Var_47, DelayedGoals0_12, &HeadVarUnificationGoals_19, &NonHeadVarUnificationGoals0_20);
    check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0((MR_Integer) 0, NonHeadVarUnificationGoals0_20, &NonHeadVarUnificationGoals_21, Goals_8, STATE_VARIABLE_ImpurityErrors_0_32, &STATE_VARIABLE_ImpurityErrors_38_38, STATE_VARIABLE_ModeInfo_36_36, &STATE_VARIABLE_ModeInfo_39_39);
    check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_39_39, &DelayInfo2_22);
    check_hlds__delay_info__delay_info_enter_conj_2_p_0(DelayInfo2_22, &DelayInfo3_23);
    check_hlds__modecheck_conj__redelay_goals_3_p_0(HeadVarUnificationGoals_19, DelayInfo3_23, &DelayInfo_24);
    check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo_24, STATE_VARIABLE_ModeInfo_39_39, STATE_VARIABLE_ModeInfo_35);
    if ((NonHeadVarUnificationGoals_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_ImpurityErrors_33 = STATE_VARIABLE_ImpurityErrors_38_38;
    else
    {
      MR_Word Vars_27;
      MR_Word ModeError_28;
      MR_Word Context_29;
      MR_Word ModeContext_30;
      MR_Word ImpurityError_31;
      MR_Word Var_41;
      MR_Word Var_52;
      MR_Word Vars1_55;
      MR_Word Rest_58;
      MR_Word Vars2_61;
      MR_Word Var_62;
      MR_Word Var_56;
      MR_Word Var_57;

      Var_52 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonHeadVarUnificationGoals_21, (MR_Integer) 0)));
      Rest_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonHeadVarUnificationGoals_21, (MR_Integer) 1)));
      Vars1_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 0)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 1)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 2)));
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_52, Vars1_55, &Vars2_61);
      check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(Rest_58, Vars2_61, &Vars_27);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Goal_7));
      }
      {
        ModeError_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ModeError_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
        MR_hl_field(MR_mktag(3), ModeError_28, 1) = ((MR_Box) (NonHeadVarUnificationGoals_21));
        MR_hl_field(MR_mktag(3), ModeError_28, 2) = ((MR_Box) (Var_41));
      }
      check_hlds__mode_info__mode_info_get_context_2_p_0(*STATE_VARIABLE_ModeInfo_35, &Context_29);
      check_hlds__mode_info__mode_info_get_mode_context_2_p_0(*STATE_VARIABLE_ModeInfo_35, &ModeContext_30);
      {
        ImpurityError_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ImpurityError_31, 0) = ((MR_Box) (Vars_27));
        MR_hl_field(MR_mktag(0), ImpurityError_31, 1) = ((MR_Box) (ModeError_28));
        MR_hl_field(MR_mktag(0), ImpurityError_31, 2) = ((MR_Box) (Context_29));
        MR_hl_field(MR_mktag(0), ImpurityError_31, 3) = ((MR_Box) (ModeContext_30));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ImpurityErrors_33 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ImpurityError_31));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ImpurityErrors_38_38));
      }
    }
  }
}

static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Goal_5;

    conv0_Goal_5 = check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_Goal_5));
    return wrapper_arg_2;
  }
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
  {
    MR_bool succeeded;

    if ((DelayedGoals0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *DelayedGoals_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ImpurityErrors_26 = STATE_VARIABLE_ImpurityErrors_0_25;
      *STATE_VARIABLE_ModeInfo_28 = STATE_VARIABLE_ModeInfo_0_27;
    }
    else
    {
      MR_Word TypeCtorInfo_38_38 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
      MR_Word TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
      MR_Word TypeCtorInfo_21_55;
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
      MR_Word GoalsCord_51;
      MR_Word Var_52;
      MR_Integer Var_34;
      MR_Integer Var_35;

      Goals0_17 = mercury__list__map_2_f_0(TypeCtorInfo_38_38, TypeCtorInfo_39_39, (MR_Word) &check_hlds__modecheck_conj_scalar_common_3[0], DelayedGoals0_10);
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_0_27, &DelayInfo0_18);
      check_hlds__delay_info__delay_info_enter_conj_2_p_0(DelayInfo0_18, &DelayInfo1_19);
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo1_19, STATE_VARIABLE_ModeInfo_0_27, &STATE_VARIABLE_ModeInfo_30_30);
      TypeCtorInfo_21_55 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
      Var_52 = mercury__cord__init_0_f_0(TypeCtorInfo_21_55);
      check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(ConjType_9, Goals0_17, Var_52, &GoalsCord_51, STATE_VARIABLE_ImpurityErrors_0_25, &STATE_VARIABLE_ImpurityErrors_31_31, STATE_VARIABLE_ModeInfo_30_30, &STATE_VARIABLE_ModeInfo_32_32);
      Goals1_20 = mercury__cord__list_1_f_0(TypeCtorInfo_21_55, GoalsCord_51);
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_32_32, &DelayInfo2_21);
      check_hlds__delay_info__delay_info_leave_conj_3_p_0(DelayInfo2_21, &DelayedGoals1_22, &DelayInfo3_23);
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo3_23, STATE_VARIABLE_ModeInfo_32_32, &STATE_VARIABLE_ModeInfo_33_33);
      Var_34 = mercury__list__length_1_f_0(TypeCtorInfo_38_38, DelayedGoals1_22);
      Var_35 = mercury__list__length_1_f_0(TypeCtorInfo_38_38, DelayedGoals0_10);
      succeeded = (Var_34 < Var_35);
      if (succeeded)
      {
        MR_Word Goals2_24;

        check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0(ConjType_9, DelayedGoals1_22, DelayedGoals_11, &Goals2_24, STATE_VARIABLE_ImpurityErrors_31_31, STATE_VARIABLE_ImpurityErrors_26, STATE_VARIABLE_ModeInfo_33_33, STATE_VARIABLE_ModeInfo_28);
        *Goals_12 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_39_39, Goals1_20, Goals2_24);
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_DelayInfo_3 = STATE_VARIABLE_DelayInfo_0_2;
    else
    {
      MR_Word DelayedGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word DelayedGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ModeErrorInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), DelayedGoal_7, (MR_Integer) 1)));
      MR_Word Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), DelayedGoal_7, (MR_Integer) 2)));
      MR_Word STATE_VARIABLE_DelayInfo_15_15;
      MR_Word _WaitingVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), DelayedGoal_7, (MR_Integer) 0)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_DelayInfo_0_2;

      check_hlds__delay_info__delay_info_delay_goal_4_p_0(ModeErrorInfo_11, Goal_12, STATE_VARIABLE_DelayInfo_0_2, &STATE_VARIABLE_DelayInfo_15_15);
      // direct tailcall eliminated
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Vars_3 = HeadVar__2_2;
    else
    {
      MR_Word Vars1_5;
      MR_Word Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Vars2_11;
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Var_6;
      MR_Word Var_7;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      Vars1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0)));
      Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1)));
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 2)));
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, HeadVar__2_2, Vars1_5, &Vars2_11);
      // direct tailcall eliminated
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
  {
    MR_bool succeeded;

    succeeded = check_hlds__modecheck_conj____Unify____impurity_errors_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modecheck_conj____Compare____impurity_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
