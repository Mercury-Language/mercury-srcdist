/*
** Automatically generated from `mark_trace_goals.m'
** by the Mercury compiler,
** version rotd-2025-05-05
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


// :- module check_hlds.simplify.mark_trace_goals.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__mark_trace_goals__init
ENDINIT
*/

#include "check_hlds.simplify.mark_trace_goals.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.simplify.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static void MR_CALL 
check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4);

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4);







#include "array.mh"


static void MR_CALL 
check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_cases_4_p_0(
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
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_8, 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_8, 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_8, 2))));
    MR_Word Goal_16;
    MR_Word GoalContainsTrace_17;
    MR_Word STATE_VARIABLE_ContainsTrace_20_20;

    check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_3_p_0(Goal0_15, &Goal_16, &GoalContainsTrace_17);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_10, 2) = ((MR_Box) (Goal_16));
    }
    STATE_VARIABLE_ContainsTrace_20_20 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_17, STATE_VARIABLE_ContainsTrace_0_3);
    check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_cases_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_ContainsTrace_20_20, STATE_VARIABLE_ContainsTrace_4);
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
check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goals_4_p_0(
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
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word GoalContainsTrace_13;
    MR_Word STATE_VARIABLE_ContainsTrace_16_16;

    check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_3_p_0(Goal0_8, &Goal_10, &GoalContainsTrace_13);
    STATE_VARIABLE_ContainsTrace_16_16 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_13, STATE_VARIABLE_ContainsTrace_0_3);
    check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goals_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_ContainsTrace_16_16, STATE_VARIABLE_ContainsTrace_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_11));
    }
  }
}

void MR_CALL 
check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_3_p_0(
  MR_Word Goal0_4,
  MR_Word * Goal_5,
  MR_Word * ContainsTrace_6)
{
  MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(0, Goal0_4, 0))));
  MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_4, 1))));
  MR_Word GoalExpr_32;
  MR_Word GoalInfo_95;

  switch (MR_tag((MR_Word) GoalExpr0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_51 = (MR_Word) ((MR_Word) (GoalExpr0_7));
        MR_Word SubGoal_52;

        check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_3_p_0(SubGoal0_51, &SubGoal_52, ContainsTrace_6);
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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_7, 0))))) {
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
            MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, 1))) & (MR_Integer) 1);
            MR_Word SubGoals0_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 2))));
            MR_Word SubGoals_36;

            check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goals_4_p_0(SubGoals0_34, &SubGoals_36, (MR_Integer) 1, ContainsTrace_6);
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
            MR_Word SubGoals0_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 1))));
            MR_Word SubGoals_103;

            check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goals_4_p_0(SubGoals0_101, &SubGoals_103, (MR_Integer) 1, ContainsTrace_6);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (SubGoals_103));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 1))));
            MR_Word CanFail_38 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, 2))) & (MR_Integer) 1);
            MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 3))));
            MR_Word Cases_40;

            check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_cases_4_p_0(Cases0_39, &Cases_40, (MR_Integer) 1, ContainsTrace_6);
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
            MR_Word Reason_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 1))));
            MR_Word SubGoal0_105 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 2))));
            MR_Word SubGoal_106;

            switch (MR_tag((MR_Word) Reason_53)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_3_p_0(SubGoal0_105, &SubGoal_106, ContainsTrace_6);
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_53, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 8:
                    check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_3_p_0(SubGoal0_105, &SubGoal_106, ContainsTrace_6);
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word FGT_60 = ((MR_Unsigned) ((MR_hl_field(3, Reason_53, 2))) & (MR_Integer) 3);

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
                          check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_3_p_0(SubGoal0_105, &SubGoal_106, ContainsTrace_6);
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
            MR_Word Vars_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 1))));
            MR_Word Cond0_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 2))));
            MR_Word Then0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 3))));
            MR_Word Else0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 4))));
            MR_Word Cond_45;
            MR_Word CondContainsTrace_46;
            MR_Word Then_47;
            MR_Word ThenContainsTrace_48;
            MR_Word Else_49;
            MR_Word ElseContainsTrace_50;
            MR_Word Var_96;

            check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_3_p_0(Cond0_42, &Cond_45, &CondContainsTrace_46);
            check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_3_p_0(Then0_43, &Then_47, &ThenContainsTrace_48);
            check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_3_p_0(Else0_44, &Else_49, &ElseContainsTrace_50);
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
            MR_Word ShortHand0_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 1))));

            switch (MR_tag((MR_Word) ShortHand0_77)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.mark_trace_goals.set_goal_contains_trace_features_in_goal\'/3", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_78 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_77, 0))) & (MR_Integer) 3);
                  MR_Word Outer_79 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, 1))));
                  MR_Word Inner_80 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, 2))));
                  MR_Word MaybeOutputVars_81 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, 3))));
                  MR_Word MainGoal0_82 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, 4))));
                  MR_Word OrElseGoals0_83 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, 5))));
                  MR_Word OrElseInners_84 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, 6))));
                  MR_Word MainGoal_85;
                  MR_Word MainContainsTrace_86;
                  MR_Word OrElseGoals_88;
                  MR_Word OrElseContainsTrace_89;
                  MR_Word ShortHand_90;

                  check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_3_p_0(MainGoal0_82, &MainGoal_85, &MainContainsTrace_86);
                  check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goals_4_p_0(OrElseGoals0_83, &OrElseGoals_88, (MR_Integer) 1, &OrElseContainsTrace_89);
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
                  MR_Word MaybeIO_91 = ((MR_Word) ((MR_hl_field(2, ShortHand0_77, 0))));
                  MR_Word ResultVar_92 = ((MR_Word) ((MR_hl_field(2, ShortHand0_77, 1))));
                  MR_Word SubGoal0_107 = ((MR_Word) ((MR_hl_field(2, ShortHand0_77, 2))));
                  MR_Word SubGoal_108;
                  MR_Word ShortHand_109;

                  check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_3_p_0(SubGoal0_107, &SubGoal_108, ContainsTrace_6);
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

void mercury__check_hlds__simplify__mark_trace_goals__init(void)
{
}

void mercury__check_hlds__simplify__mark_trace_goals__init_type_tables(void)
{
}

void mercury__check_hlds__simplify__mark_trace_goals__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__mark_trace_goals__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.mark_trace_goals.
