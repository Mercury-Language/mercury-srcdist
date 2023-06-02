/*
** Automatically generated from `simplify_goal_conj.m'
** by the Mercury compiler,
** version rotd-2023-06-02
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


// :- module check_hlds.simplify.simplify_goal_conj.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_goal_conj__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_conj.mih"


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
#include "enum.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "check_hlds.mode_info.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_7_p_0(
  MR_Word Info_1,
  MR_Word ConjNonLocals_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevGoals_0_4,
  MR_Word * STATE_VARIABLE_RevGoals_5,
  MR_Word STATE_VARIABLE_Subn_0_6,
  MR_Word * STATE_VARIABLE_Subn_7);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(
  MR_Word Subn_4,
  MR_Word Var0_5,
  MR_Word * Var_6);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_conj_10_p_0(
  MR_Word STATE_VARIABLE_PrevGoals_0_1,
  MR_Word HeadVar__2_2,
  MR_Word * Goals_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Common_0_7,
  MR_Word * STATE_VARIABLE_Common_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__try_to_opt_test_after_switch_8_p_0(
  MR_Word STATE_VARIABLE_PrevGoals_0_44,
  MR_Word * STATE_VARIABLE_PrevGoals_45,
  MR_Word HeadGoal1_10,
  MR_Word TailGoals0_11,
  MR_Word * TailGoals1_12,
  MR_Word ConjInfo_13,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__no_conjunct_refers_to_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TestVar_2);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__all_cases_construct_test_var_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TestVar_2,
  MR_Word TestConsId_3,
  MR_Word STATE_VARIABLE_RevTruncatedSameCases_0_4,
  MR_Word * STATE_VARIABLE_RevTruncatedSameCases_5,
  MR_Word STATE_VARIABLE_RevDiffCases_0_6,
  MR_Word * STATE_VARIABLE_RevDiffCases_7);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_3[1][6];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__type_ctor_info_var_renaming_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_conj",
  (MR_String) "var_renaming",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_parallel_conj_10_p_0(
  MR_Word Goals0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word NestedContext0_15,
  MR_Word InstMap0_16,
  MR_Word STATE_VARIABLE_Common_0_27,
  MR_Word * STATE_VARIABLE_Common_28,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded;

  if ((Goals0_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Context_19;
    MR_Word Var_31;

    Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
    Var_31 = hlds__make_goal__true_goal_with_context_1_f_0(Context_19);
    *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
    *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 1))));
    *STATE_VARIABLE_Common_28 = STATE_VARIABLE_Common_0_27;
    *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
  }
  else
  {
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, Goals0_11, (MR_Integer) 1))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, Goals0_11, (MR_Integer) 0))));

    if ((Var_43 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SingleGoal_21;
      MR_Word SingleGoalInfo_22;
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_Info_35_35;

      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Var_44, &Var_33, NestedContext0_15, InstMap0_16, STATE_VARIABLE_Common_0_27, STATE_VARIABLE_Common_28, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_35_35);
      SingleGoal_21 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
      SingleGoalInfo_22 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 1))));
      check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(GoalInfo0_13, SingleGoalInfo_22, SingleGoal_21, GoalExpr_12, GoalInfo_14, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_30);
    }
    else
    {
      succeeded = check_hlds__simplify__simplify_info__simplify_do_ignore_par_conjunctions_1_p_0(STATE_VARIABLE_Info_0_29);
      if (succeeded)
        check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(Goals0_11, GoalExpr_12, GoalInfo0_13, GoalInfo_14, NestedContext0_15, InstMap0_16, STATE_VARIABLE_Common_0_27, STATE_VARIABLE_Common_28, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
      else
      {
        MR_Word Goals_26;
        MR_Word STATE_VARIABLE_Info_40_40;
        MR_Word Goal0_50;
        MR_Word Goals0_51;
        MR_Word Goal_52;
        MR_Word Goals_53;
        MR_Word InstMap1_58;
        MR_Word STATE_VARIABLE_Info_26_61;
        MR_Word _Common1_57;

        *GoalInfo_14 = GoalInfo0_13;
        Goal0_50 = ((MR_Word) ((MR_hl_field(1, Goals0_11, (MR_Integer) 0))));
        Goals0_51 = ((MR_Word) ((MR_hl_field(1, Goals0_11, (MR_Integer) 1))));
        check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Goal0_50, &Goal_52, NestedContext0_15, InstMap0_16, STATE_VARIABLE_Common_0_27, &_Common1_57, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_26_61);
        hlds__goal_util__update_instmap_3_p_0(Goal_52, InstMap0_16, &InstMap1_58);
        check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(Goals0_51, &Goals_53, NestedContext0_15, InstMap1_58, STATE_VARIABLE_Common_0_27, STATE_VARIABLE_Info_26_61, &STATE_VARIABLE_Info_40_40);
        {
          Goals_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Goals_26, 0) = ((MR_Box) (Goal_52));
          MR_hl_field(1, Goals_26, 1) = ((MR_Box) (Goals_53));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_12 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(3, base, 2) = ((MR_Box) (Goals_26));
        }
        check_hlds__simplify__simplify_info__simplify_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_30);
        *STATE_VARIABLE_Common_28 = STATE_VARIABLE_Common_0_27;
      }
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_16;
    MR_Word Goals_17;
    MR_Word InstMap1_23;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word _Common1_22;

    check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Goal0_14, &Goal_16, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, &_Common1_22, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_26_26);
    hlds__goal_util__update_instmap_3_p_0(Goal_16, HeadVar__4_4, &InstMap1_23);
    check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(Goals0_15, &Goals_17, HeadVar__3_3, InstMap1_23, HeadVar__5_5, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Var_6;

  check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Var_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Var_6));
}

void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(
  MR_Word Goals0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word NestedContext0_15,
  MR_Word InstMap0_16,
  MR_Word STATE_VARIABLE_Common_0_38,
  MR_Word * STATE_VARIABLE_Common_39,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  MR_bool succeeded;
  MR_Word Goals1_19;
  MR_Word Goals_20;
  MR_Word STATE_VARIABLE_Info_42_42;
  MR_Word Var_43;
  MR_Word STATE_VARIABLE_Info_45_45;

  succeeded = check_hlds__simplify__simplify_info__simplify_do_excess_assign_1_p_0(STATE_VARIABLE_Info_0_40);
  if (succeeded)
  {
    MR_Word ConjNonLocals_89;
    MR_Word Subn0_90;
    MR_Word RevGoals_91;
    MR_Word Subn1_92;

    ConjNonLocals_89 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
    mercury__map__init_1_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), &Subn0_90);
    check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_7_p_0(STATE_VARIABLE_Info_0_40, ConjNonLocals_89, Goals0_11, (MR_Word) ((MR_Unsigned) 0U), &RevGoals_91, Subn0_90, &Subn1_92);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), Subn1_92);
    if (succeeded)
    {
      Goals1_19 = Goals0_11;
      STATE_VARIABLE_Info_42_42 = STATE_VARIABLE_Info_0_40;
    }
    else
    {
      MR_Word Goals1_93;
      MR_Word Subn_94;
      MR_Word RemovedVars_95;
      MR_Word VarTable0_96;
      MR_Word VarTable_97;
      MR_Word RttiVarMaps0_98;
      MR_Word RttiVarMaps_99;
      MR_Word STATE_VARIABLE_Info_25_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_109;

      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevGoals_91, &Goals1_93);
      {
        Var_109 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_109, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_3[0]));
        MR_hl_field(0, Var_109, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1));
        MR_hl_field(0, Var_109, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_109, 3) = ((MR_Box) (Subn1_92));
      }
      mercury__map__map_values_only_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), Var_109, Subn1_92, &Subn_94);
      hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, Subn_94, Goals1_93, &Goals1_19);
      mercury__map__sorted_keys_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), Subn0_90, &RemovedVars_95);
      check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_40, &VarTable0_96);
      parse_tree__var_table__delete_sorted_var_entries_3_p_0(RemovedVars_95, VarTable0_96, &VarTable_97);
      check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_97, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_25_102);
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_25_102, &RttiVarMaps0_98);
      Var_103 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[1]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[1]));
      Var_104 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
      hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(Var_103, Var_104, Subn_94, RttiVarMaps0_98, &RttiVarMaps_99);
      check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(RttiVarMaps_99, STATE_VARIABLE_Info_25_102, &STATE_VARIABLE_Info_42_42);
    }
  }
  else
  {
    Goals1_19 = Goals0_11;
    STATE_VARIABLE_Info_42_42 = STATE_VARIABLE_Info_0_40;
  }
  Var_43 = mercury__cord__empty_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
  check_hlds__simplify__simplify_goal_conj__simplify_conj_10_p_0(Var_43, Goals1_19, &Goals_20, GoalInfo0_13, NestedContext0_15, InstMap0_16, STATE_VARIABLE_Common_0_38, STATE_VARIABLE_Common_39, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_45_45);
  if ((Goals_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Context_21;
    MR_Word Var_46;

    Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
    Var_46 = hlds__make_goal__true_goal_with_context_1_f_0(Context_21);
    *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));
    *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_41 = STATE_VARIABLE_Info_45_45;
  }
  else
  {
    MR_Word Var_87 = ((MR_Word) ((MR_hl_field(1, Goals_20, (MR_Integer) 1))));
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(1, Goals_20, (MR_Integer) 0))));

    if ((Var_87 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SingleGoalExpr_23 = ((MR_Word) ((MR_hl_field(0, Var_88, (MR_Integer) 0))));
      MR_Word SingleGoalInfo_24 = ((MR_Word) ((MR_hl_field(0, Var_88, (MR_Integer) 1))));

      check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(GoalInfo0_13, SingleGoalInfo_24, SingleGoalExpr_23, GoalExpr_12, GoalInfo_14, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_41);
    }
    else
    {
      MR_Word Detism_28;
      MR_Word CanFail_29;
      MR_Word Var_86;

      Detism_28 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_13);
      parse_tree__prog_data__determinism_components_3_p_0(Detism_28, &CanFail_29, &Var_86);
      succeeded = ((MR_Integer) 0 == Var_86);
      if (succeeded)
      {
        succeeded = check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(STATE_VARIABLE_Info_45_45);
        if (succeeded)
          succeeded = check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0(Goals_20);
      }
      if (succeeded)
      {
        MR_Word InnerDetism_30;
        MR_Word InnerInfo_31;
        MR_Word InnerGoal_32;
        MR_Word Var_52;

        parse_tree__prog_data__determinism_components_3_p_1(&InnerDetism_30, CanFail_29, (MR_Integer) 3);
        hlds__hlds_goal__goal_info_set_determinism_3_p_0(InnerDetism_30, GoalInfo0_13, &InnerInfo_31);
        {
          Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_52, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_52, 2) = ((MR_Box) (Goals_20));
        }
        {
          InnerGoal_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InnerGoal_32, 0) = ((MR_Box) (Var_52));
          MR_hl_field(0, InnerGoal_32, 1) = ((MR_Box) (InnerInfo_31));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_12 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_conj_scalar_common_1[2])));
          MR_hl_field(3, base, 2) = ((MR_Box) (InnerGoal_32));
        }
        check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_41);
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_12 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, base, 2) = ((MR_Box) (Goals_20));
        }
        *STATE_VARIABLE_Info_41 = STATE_VARIABLE_Info_45_45;
      }
      *GoalInfo_14 = GoalInfo0_13;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_7_p_0(
  MR_Word Info_1,
  MR_Word ConjNonLocals_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevGoals_0_4,
  MR_Word * STATE_VARIABLE_RevGoals_5,
  MR_Word STATE_VARIABLE_Subn_0_6,
  MR_Word * STATE_VARIABLE_Subn_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Subn_7 = STATE_VARIABLE_Subn_0_6;
      *STATE_VARIABLE_RevGoals_5 = STATE_VARIABLE_RevGoals_0_4;
    }
    else
    {
      MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Goals_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevGoals_27_27;
      MR_Word STATE_VARIABLE_Subn_28_28;
      MR_Word STATE_VARIABLE_Subn_26_26;
      MR_Word TypeInfo_33_50;
      MR_Word Unif_32;
      MR_Word LeftVar0_35;
      MR_Word RightVar0_36;
      MR_Word LeftVar_37;
      MR_Word RightVar_38;
      MR_Word CanElimRight_40;
      MR_Word VarTable_41;
      MR_Word ElimVar_42;
      MR_Word ReplacementVar_43;
      MR_Word EffTraceLevel_44;
      MR_Word TraceOptimized_45;
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Goal_18, (MR_Integer) 0))));
      MR_Word TypeCtorInfo_32_49;
      MR_Word TypeCtorInfo_31_48;
      MR_Word Var_47;
      MR_Word Entry_58;
      MR_String Name_59;
      MR_String Suffix_60;
      MR_String Var_62;
      MR_Integer Var_61;
      MR_Word Entry_65;
      MR_String Name_66;
      MR_String Suffix_67;
      MR_String Var_69;
      MR_Integer Var_68;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevGoals_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Subn_0_6;

      succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unif_32 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unif_32)) == (MR_Integer) 2);
        if (succeeded)
        {
          LeftVar0_35 = ((MR_Word) ((MR_hl_field(2, Unif_32, (MR_Integer) 0))));
          RightVar0_36 = ((MR_Word) ((MR_hl_field(2, Unif_32, (MR_Integer) 1))));
          check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(STATE_VARIABLE_Subn_0_6, LeftVar0_35, &LeftVar_37);
          check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(STATE_VARIABLE_Subn_0_6, RightVar0_36, &RightVar_38);
          TypeCtorInfo_32_49 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_32_49, ConjNonLocals_2, RightVar_38);
          if (succeeded)
            CanElimRight_40 = (MR_Integer) 0;
          else
            CanElimRight_40 = (MR_Integer) 1;
          check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(Info_1, &VarTable_41);
          TypeCtorInfo_31_48 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_31_48, ConjNonLocals_2, LeftVar_37);
          if (succeeded)
          {
            succeeded = (CanElimRight_40 == (MR_Integer) 1);
            if (succeeded)
            {
              ElimVar_42 = RightVar_38;
              ReplacementVar_43 = LeftVar_37;
              succeeded = MR_TRUE;
            }
          }
          else
          {
            switch (CanElimRight_40) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  ElimVar_42 = LeftVar_37;
                  ReplacementVar_43 = RightVar_38;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Entry_51;
                  MR_String Name_52;
                  MR_String Suffix_53;
                  MR_String Var_55;
                  MR_Integer Var_54;

                  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_41, LeftVar_37, &Entry_51);
                  Name_52 = ((MR_String) ((MR_hl_field(0, Entry_51, (MR_Integer) 0))));
                  succeeded = (strcmp(Name_52, (MR_String) "") == 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    Var_55 = (MR_String) "HeadVar__";
                    succeeded = mercury__string__append_3_p_1(Var_55, &Suffix_53, Name_52);
                    if (succeeded)
                      succeeded = mercury__string__to_int_2_p_0(Suffix_53, &Var_54);
                    succeeded = !(succeeded);
                  }
                  if (succeeded)
                  {
                    ElimVar_42 = RightVar_38;
                    ReplacementVar_43 = LeftVar_37;
                  }
                  else
                  {
                    ElimVar_42 = LeftVar_37;
                    ReplacementVar_43 = RightVar_38;
                  }
                }
                break;
            }
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            check_hlds__simplify__simplify_info__simplify_info_get_eff_trace_level_optimized_3_p_0(Info_1, &EffTraceLevel_44, &TraceOptimized_45);
            Var_47 = libs__trace_params__eff_trace_level_needs_meaningful_var_names_1_f_0(EffTraceLevel_44);
            succeeded = (Var_47 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (TraceOptimized_45 == (MR_Integer) 0);
              if (succeeded)
              {
                parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_41, ElimVar_42, &Entry_58);
                Name_59 = ((MR_String) ((MR_hl_field(0, Entry_58, (MR_Integer) 0))));
                succeeded = (strcmp(Name_59, (MR_String) "") == 0);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_62 = (MR_String) "HeadVar__";
                  succeeded = mercury__string__append_3_p_1(Var_62, &Suffix_60, Name_59);
                  if (succeeded)
                    succeeded = mercury__string__to_int_2_p_0(Suffix_60, &Var_61);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_41, ReplacementVar_43, &Entry_65);
                    Name_66 = ((MR_String) ((MR_hl_field(0, Entry_65, (MR_Integer) 0))));
                    succeeded = (strcmp(Name_66, (MR_String) "") == 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      Var_69 = (MR_String) "HeadVar__";
                      succeeded = mercury__string__append_3_p_1(Var_69, &Suffix_67, Name_66);
                      if (succeeded)
                        succeeded = mercury__string__to_int_2_p_0(Suffix_67, &Var_68);
                      succeeded = !(succeeded);
                    }
                    succeeded = !(succeeded);
                  }
                }
              }
            }
            succeeded = !(succeeded);
            if (succeeded)
            {
              TypeInfo_33_50 = (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]);
              mercury__map__det_insert_4_p_0(TypeInfo_33_50, TypeInfo_33_50, ((MR_Box) (ElimVar_42)), ((MR_Box) (ReplacementVar_43)), STATE_VARIABLE_Subn_0_6, &STATE_VARIABLE_Subn_26_26);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_Subn_28_28 = STATE_VARIABLE_Subn_26_26;
        STATE_VARIABLE_RevGoals_27_27 = STATE_VARIABLE_RevGoals_0_4;
      }
      else
      {
        {
          STATE_VARIABLE_RevGoals_27_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevGoals_27_27, 0) = ((MR_Box) (Goal_18));
          MR_hl_field(1, STATE_VARIABLE_RevGoals_27_27, 1) = ((MR_Box) (STATE_VARIABLE_RevGoals_0_4));
        }
        STATE_VARIABLE_Subn_28_28 = STATE_VARIABLE_Subn_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Goals_19;
      next_value_of_STATE_VARIABLE_RevGoals_0_4 = STATE_VARIABLE_RevGoals_27_27;
      next_value_of_STATE_VARIABLE_Subn_0_6 = STATE_VARIABLE_Subn_28_28;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RevGoals_0_4 = next_value_of_STATE_VARIABLE_RevGoals_0_4;
      STATE_VARIABLE_Subn_0_6 = next_value_of_STATE_VARIABLE_Subn_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(
  MR_Word Subn_4,
  MR_Word Var0_5,
  MR_Word * Var_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Var1_7;
    MR_Box conv0_Var1_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]), Subn_4, ((MR_Box) (Var0_5)), &conv0_Var1_7);
    if (succeeded)
    {
      Var1_7 = ((MR_Word) (conv0_Var1_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word next_value_of_Var0_5 = Var1_7;

      // direct tailcall eliminated
      ;
      Var0_5 = next_value_of_Var0_5;
      continue;
    }
    else
      *Var_6 = Var0_5;
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_conj_10_p_0(
  MR_Word STATE_VARIABLE_PrevGoals_0_1,
  MR_Word HeadVar__2_2,
  MR_Word * Goals_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Common_0_7,
  MR_Word * STATE_VARIABLE_Common_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Goals_3 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_PrevGoals_0_1);
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Common_8 = STATE_VARIABLE_Common_0_7;
    }
    else
    {
      MR_Word HeadGoal0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailGoals0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word HeadSubGoals0_32;
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, HeadGoal0_24, (MR_Integer) 0))));
      MR_Word Var_53;

      succeeded = ((((MR_tag((MR_Word) Var_52)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_52, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_53 = ((MR_Unsigned) ((MR_hl_field(3, Var_52, (MR_Integer) 1))) & (MR_Integer) 1);
        HeadSubGoals0_32 = ((MR_Word) ((MR_hl_field(3, Var_52, (MR_Integer) 2))));
        succeeded = (Var_53 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        MR_Word HeadTailGoals1_34;
        MR_Word next_value_of_HeadVar__2_2;

        HeadTailGoals1_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadSubGoals0_32, TailGoals0_25);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = HeadTailGoals1_34;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word HeadGoal1_36;
        MR_Word HeadGoalExpr1_37;
        MR_Word HeadGoalInfo1_38;
        MR_Word STATE_VARIABLE_Common_56_56;
        MR_Word STATE_VARIABLE_Info_57_57;
        MR_Word HeadSubGoals1_39;
        MR_Word Var_58;

        check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(HeadGoal0_24, &HeadGoal1_36, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_Common_0_7, &STATE_VARIABLE_Common_56_56, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_57_57);
        HeadGoalExpr1_37 = ((MR_Word) ((MR_hl_field(0, HeadGoal1_36, (MR_Integer) 0))));
        HeadGoalInfo1_38 = ((MR_Word) ((MR_hl_field(0, HeadGoal1_36, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) HeadGoalExpr1_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadGoalExpr1_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_58 = ((MR_Unsigned) ((MR_hl_field(3, HeadGoalExpr1_37, (MR_Integer) 1))) & (MR_Integer) 1);
          HeadSubGoals1_39 = ((MR_Word) ((MR_hl_field(3, HeadGoalExpr1_37, (MR_Integer) 2))));
          succeeded = (Var_58 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word HeadTailGoals1_69;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

          HeadTailGoals1_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadSubGoals1_39, TailGoals0_25);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = HeadTailGoals1_69;
          next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_57_57;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
          continue;
        }
        else
        {
          MR_Word InstMap1_40;

          hlds__goal_util__update_instmap_3_p_0(HeadGoal1_36, HeadVar__6_6, &InstMap1_40);
          succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap1_40);
          if (!(succeeded))
          {
            MR_Word Detism1_41;
            MR_Word Var_73;
            MR_Word Var_42;

            Detism1_41 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(HeadGoalInfo1_38);
            parse_tree__prog_data__determinism_components_3_p_0(Detism1_41, &Var_42, &Var_73);
            succeeded = ((MR_Integer) 0 == Var_73);
          }
          if (succeeded)
          {
            MR_Word HeadGoalInfo0_44 = ((MR_Word) ((MR_hl_field(0, HeadGoal0_24, (MR_Integer) 1))));
            MR_Word HeadGoalContext0_45;
            MR_Word STATE_VARIABLE_Info_63_63;
            MR_Word DeletedCallCallees0_74;
            MR_Word SubGoalCalledProcs_75;
            MR_Word DeletedCallCallees_76;
            MR_Word STATE_VARIABLE_PrevGoals_23_79;
            MR_Word STATE_VARIABLE_PrevGoals_26_82;

            HeadGoalContext0_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(HeadGoalInfo0_44);
            check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_Info_57_57, &DeletedCallCallees0_74);
            SubGoalCalledProcs_75 = hlds__goal_util__goals_proc_refs_1_f_0(TailGoals0_25);
            mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SubGoalCalledProcs_75, DeletedCallCallees0_74, &DeletedCallCallees_76);
            check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_76, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_63_63);
            STATE_VARIABLE_PrevGoals_23_79 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_PrevGoals_0_1, ((MR_Box) (HeadGoal1_36)));
            {
              MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, HeadGoal1_36, (MR_Integer) 0))));
              MR_Word Var_81;

              succeeded = ((((MR_tag((MR_Word) Var_80)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_80, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_81 = ((MR_Word) ((MR_hl_field(3, Var_80, (MR_Integer) 1))));
                succeeded = (Var_81 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (!(succeeded))
              succeeded = (TailGoals0_25 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              STATE_VARIABLE_PrevGoals_26_82 = STATE_VARIABLE_PrevGoals_23_79;
            else
            {
              MR_Word FailGoal_78;

              FailGoal_78 = hlds__make_goal__fail_goal_with_context_1_f_0(HeadGoalContext0_45);
              STATE_VARIABLE_PrevGoals_26_82 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_PrevGoals_23_79, ((MR_Box) (FailGoal_78)));
            }
            *Goals_3 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_PrevGoals_26_82);
            check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_63_63, STATE_VARIABLE_Info_10);
            *STATE_VARIABLE_Common_8 = STATE_VARIABLE_Common_56_56;
          }
          else
          {
            MR_Word TailGoals1_46;
            MR_Word STATE_VARIABLE_PrevGoals_65_65;
            MR_Word STATE_VARIABLE_Info_66_66;
            MR_Word next_value_of_STATE_VARIABLE_PrevGoals_0_1;
            MR_Word next_value_of_HeadVar__2_2;
            MR_Word next_value_of_HeadVar__6_6;
            MR_Word next_value_of_STATE_VARIABLE_Common_0_7;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

            check_hlds__simplify__simplify_goal_conj__try_to_opt_test_after_switch_8_p_0(STATE_VARIABLE_PrevGoals_0_1, &STATE_VARIABLE_PrevGoals_65_65, HeadGoal1_36, TailGoals0_25, &TailGoals1_46, HeadVar__4_4, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_66_66);
            // direct tailcall eliminated
            ;
            next_value_of_STATE_VARIABLE_PrevGoals_0_1 = STATE_VARIABLE_PrevGoals_65_65;
            next_value_of_HeadVar__2_2 = TailGoals1_46;
            next_value_of_HeadVar__6_6 = InstMap1_40;
            next_value_of_STATE_VARIABLE_Common_0_7 = STATE_VARIABLE_Common_56_56;
            next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_66_66;
            STATE_VARIABLE_PrevGoals_0_1 = next_value_of_STATE_VARIABLE_PrevGoals_0_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__6_6 = next_value_of_HeadVar__6_6;
            STATE_VARIABLE_Common_0_7 = next_value_of_STATE_VARIABLE_Common_0_7;
            STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
            continue;
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__try_to_opt_test_after_switch_8_p_0(
  MR_Word STATE_VARIABLE_PrevGoals_0_44,
  MR_Word * STATE_VARIABLE_PrevGoals_45,
  MR_Word HeadGoal1_10,
  MR_Word TailGoals0_11,
  MR_Word * TailGoals1_12,
  MR_Word ConjInfo_13,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47)
{
  MR_bool succeeded;
  MR_Word HeadGoalInfo1_16;
  MR_Word SwitchVar_17;
  MR_Word SwitchCanFail1_18;
  MR_Word TailTailGoals0_21;
  MR_Word RevTruncatedSameCases_35;
  MR_Word RevDiffCases_36;
  MR_Word HeadGoalExpr1_15;
  MR_Word Cases1_19;
  MR_Word HeadTailGoal0_20;
  MR_Word HeadTailGoalExpr0_22;
  MR_Word Unification_27;
  MR_Word TestVar_29;
  MR_Word TestConsId_30;
  MR_Word TestArgs_31;
  MR_Word DeconstructCanFail_33;
  MR_Word ConjNonLocals_37;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word TypeCtorInfo_50_50;

  succeeded = check_hlds__simplify__simplify_info__simplify_do_test_after_switch_1_p_0(STATE_VARIABLE_Info_0_46);
  if (succeeded)
  {
    HeadGoalExpr1_15 = ((MR_Word) ((MR_hl_field(0, HeadGoal1_10, (MR_Integer) 0))));
    HeadGoalInfo1_16 = ((MR_Word) ((MR_hl_field(0, HeadGoal1_10, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) HeadGoalExpr1_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadGoalExpr1_15, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      SwitchVar_17 = ((MR_Word) ((MR_hl_field(3, HeadGoalExpr1_15, (MR_Integer) 1))));
      SwitchCanFail1_18 = ((MR_Unsigned) ((MR_hl_field(3, HeadGoalExpr1_15, (MR_Integer) 2))) & (MR_Integer) 1);
      Cases1_19 = ((MR_Word) ((MR_hl_field(3, HeadGoalExpr1_15, (MR_Integer) 3))));
      succeeded = (TailGoals0_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadTailGoal0_20 = ((MR_Word) ((MR_hl_field(1, TailGoals0_11, (MR_Integer) 0))));
        TailTailGoals0_21 = ((MR_Word) ((MR_hl_field(1, TailGoals0_11, (MR_Integer) 1))));
        HeadTailGoalExpr0_22 = ((MR_Word) ((MR_hl_field(0, HeadTailGoal0_20, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) HeadTailGoalExpr0_22)) == (MR_Integer) 1);
        if (succeeded)
        {
          Unification_27 = ((MR_Word) ((MR_hl_field(1, HeadTailGoalExpr0_22, (MR_Integer) 3))));
          succeeded = ((MR_tag((MR_Word) Unification_27)) == (MR_Integer) 1);
          if (succeeded)
          {
            TestVar_29 = ((MR_Word) ((MR_hl_field(1, Unification_27, (MR_Integer) 0))));
            TestConsId_30 = ((MR_Word) ((MR_hl_field(1, Unification_27, (MR_Integer) 1))));
            TestArgs_31 = ((MR_Word) ((MR_hl_field(1, Unification_27, (MR_Integer) 2))));
            DeconstructCanFail_33 = ((((MR_Unsigned) ((MR_hl_field(1, Unification_27, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
            succeeded = (TestArgs_31 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (DeconstructCanFail_33 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_48 = (MR_Word) ((MR_Unsigned) 0U);
                Var_49 = (MR_Word) ((MR_Unsigned) 0U);
                succeeded = check_hlds__simplify__simplify_goal_conj__all_cases_construct_test_var_7_p_0(Cases1_19, TestVar_29, TestConsId_30, Var_48, &RevTruncatedSameCases_35, Var_49, &RevDiffCases_36);
                if (succeeded)
                {
                  ConjNonLocals_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ConjInfo_13);
                  TypeCtorInfo_50_50 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  succeeded = parse_tree__set_of_var__contains_2_p_0(TypeCtorInfo_50_50, ConjNonLocals_37, TestVar_29);
                  succeeded = !(succeeded);
                  if (succeeded)
                    succeeded = check_hlds__simplify__simplify_goal_conj__no_conjunct_refers_to_var_2_p_0(TailTailGoals0_21, TestVar_29);
                }
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word SwitchCanFail2_38;
    MR_Word TruncatedSameCases_41;
    MR_Word HeadGoalExpr2_42;
    MR_Word HeadGoal2_43;

    if ((RevDiffCases_36 == (MR_Word) ((MR_Unsigned) 0U)))
      SwitchCanFail2_38 = SwitchCanFail1_18;
    else
      SwitchCanFail2_38 = (MR_Integer) 0;
    check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), RevTruncatedSameCases_35, &TruncatedSameCases_41);
    {
      HeadGoalExpr2_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, HeadGoalExpr2_42, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, HeadGoalExpr2_42, 1) = ((MR_Box) (SwitchVar_17));
      MR_hl_field(3, HeadGoalExpr2_42, 2) = (MR_Box) ((MR_Unsigned) (SwitchCanFail2_38));
      MR_hl_field(3, HeadGoalExpr2_42, 3) = ((MR_Box) (TruncatedSameCases_41));
    }
    {
      HeadGoal2_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadGoal2_43, 0) = ((MR_Box) (HeadGoalExpr2_42));
      MR_hl_field(0, HeadGoal2_43, 1) = ((MR_Box) (HeadGoalInfo1_16));
    }
    *STATE_VARIABLE_PrevGoals_45 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_PrevGoals_0_44, ((MR_Box) (HeadGoal2_43)));
    *TailGoals1_12 = TailTailGoals0_21;
  }
  else
  {
    *STATE_VARIABLE_PrevGoals_45 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_PrevGoals_0_44, ((MR_Box) (HeadGoal1_10)));
    *TailGoals1_12 = TailGoals0_11;
    *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__no_conjunct_refers_to_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TestVar_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Goal_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 1))));
      MR_Word NonLocals_9;
      MR_Word next_value_of_HeadVar__1_1;

      NonLocals_9 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_8);
      succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_9, TestVar_2);
      succeeded = !(succeeded);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__all_cases_construct_test_var_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TestVar_2,
  MR_Word TestConsId_3,
  MR_Word STATE_VARIABLE_RevTruncatedSameCases_0_4,
  MR_Word * STATE_VARIABLE_RevTruncatedSameCases_5,
  MR_Word STATE_VARIABLE_RevDiffCases_0_6,
  MR_Word * STATE_VARIABLE_RevDiffCases_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevDiffCases_7 = STATE_VARIABLE_RevDiffCases_0_6;
      *STATE_VARIABLE_RevTruncatedSameCases_5 = STATE_VARIABLE_RevTruncatedSameCases_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeInfo_48_48;
      MR_Word Case_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case_16, (MR_Integer) 0))));
      MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case_16, (MR_Integer) 1))));
      MR_Word Goal_24 = ((MR_Word) ((MR_hl_field(0, Case_16, (MR_Integer) 2))));
      MR_Word GoalExpr_25 = ((MR_Word) ((MR_hl_field(0, Goal_24, (MR_Integer) 0))));
      MR_Word GoalInfo_26 = ((MR_Word) ((MR_hl_field(0, Goal_24, (MR_Integer) 1))));
      MR_Word Unification_30;
      MR_Word CaseConsId_32;
      MR_Word CaseArgs_33;
      MR_Word STATE_VARIABLE_RevTruncatedSameCases_45_45;
      MR_Word STATE_VARIABLE_RevDiffCases_46_46;
      MR_Word Var_47;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevTruncatedSameCases_0_4;
      MR_Word next_value_of_STATE_VARIABLE_RevDiffCases_0_6;

      succeeded = ((MR_tag((MR_Word) GoalExpr_25)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unification_30 = ((MR_Word) ((MR_hl_field(1, GoalExpr_25, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unification_30)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_47 = ((MR_Word) ((MR_hl_field(0, Unification_30, (MR_Integer) 0))));
          CaseConsId_32 = ((MR_Word) ((MR_hl_field(0, Unification_30, (MR_Integer) 1))));
          CaseArgs_33 = ((MR_Word) ((MR_hl_field(0, Unification_30, (MR_Integer) 2))));
          TypeInfo_48_48 = (MR_Word) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (TestVar_2)), ((MR_Box) (Var_47)));
          if (succeeded)
          {
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(CaseConsId_32, TestConsId_3);
            if (succeeded)
              succeeded = (CaseArgs_33 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MR_Word Context_38;
              MR_Word TrueGoal_39;
              MR_Word TruncatedCase_40;

              Context_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_26);
              TrueGoal_39 = hlds__make_goal__true_goal_with_context_1_f_0(Context_38);
              {
                TruncatedCase_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TruncatedCase_40, 0) = ((MR_Box) (MainConsId_22));
                MR_hl_field(0, TruncatedCase_40, 1) = ((MR_Box) (OtherConsIds_23));
                MR_hl_field(0, TruncatedCase_40, 2) = ((MR_Box) (TrueGoal_39));
              }
              {
                STATE_VARIABLE_RevTruncatedSameCases_45_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevTruncatedSameCases_45_45, 0) = ((MR_Box) (TruncatedCase_40));
                MR_hl_field(1, STATE_VARIABLE_RevTruncatedSameCases_45_45, 1) = ((MR_Box) (STATE_VARIABLE_RevTruncatedSameCases_0_4));
              }
              STATE_VARIABLE_RevDiffCases_46_46 = STATE_VARIABLE_RevDiffCases_0_6;
            }
            else
            {
              {
                STATE_VARIABLE_RevDiffCases_46_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevDiffCases_46_46, 0) = ((MR_Box) (Case_16));
                MR_hl_field(1, STATE_VARIABLE_RevDiffCases_46_46, 1) = ((MR_Box) (STATE_VARIABLE_RevDiffCases_0_6));
              }
              STATE_VARIABLE_RevTruncatedSameCases_45_45 = STATE_VARIABLE_RevTruncatedSameCases_0_4;
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Cases_17;
            next_value_of_STATE_VARIABLE_RevTruncatedSameCases_0_4 = STATE_VARIABLE_RevTruncatedSameCases_45_45;
            next_value_of_STATE_VARIABLE_RevDiffCases_0_6 = STATE_VARIABLE_RevDiffCases_46_46;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_RevTruncatedSameCases_0_4 = next_value_of_STATE_VARIABLE_RevTruncatedSameCases_0_4;
            STATE_VARIABLE_RevDiffCases_0_6 = next_value_of_STATE_VARIABLE_RevDiffCases_0_6;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Goal_2;
    MR_Word Goals_3;
    MR_Word GoalInfo_5;
    MR_Word Detism_6;
    MR_Word SolnCount_8;
    MR_Word Var_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Goal_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Goals_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      GoalInfo_5 = ((MR_Word) ((MR_hl_field(0, Goal_2, (MR_Integer) 1))));
      Detism_6 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_5);
      parse_tree__prog_data__determinism_components_3_p_0(Detism_6, &Var_7, &SolnCount_8);
      succeeded = (SolnCount_8 == (MR_Integer) 3);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_3;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__simplify__simplify_goal_conj__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_conj__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__type_ctor_info_var_renaming_0);
}

void mercury__check_hlds__simplify__simplify_goal_conj__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_goal_conj__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_goal_conj.
