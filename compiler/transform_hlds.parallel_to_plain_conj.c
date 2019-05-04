/*
** Automatically generated from `parallel_to_plain_conj.m'
** by the Mercury compiler,
** version rotd-2019-05-04
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


// :- module transform_hlds.parallel_to_plain_conj.
// :- implementation.

/*
INIT mercury__transform_hlds__parallel_to_plain_conj__init
ENDINIT
*/

#include "transform_hlds.parallel_to_plain_conj.mih"


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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_4_p_0(
  MR_Word _ModuleInfo_5,
  MR_Word PredProcId_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_15,
  MR_Word * STATE_VARIABLE_ProcInfo_16)
{
  transform_hlds__parallel_to_plain_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_44_32_50_93_95_48_4_p_0(STATE_VARIABLE_ProcInfo_0_15, STATE_VARIABLE_ProcInfo_16);
}

void MR_CALL 
transform_hlds__parallel_to_plain_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_15,
  MR_Word * STATE_VARIABLE_ProcInfo_16)
{
  {
    MR_Word HasParallelConj_8;

    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(STATE_VARIABLE_ProcInfo_0_15, &HasParallelConj_8);
    switch (HasParallelConj_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_ProcInfo_16 = STATE_VARIABLE_ProcInfo_0_15;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Goal0_13;
          MR_Word Goal_14;
          MR_Word STATE_VARIABLE_ProcInfo_29_29;

          hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_15, &Goal0_13);
          transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(Goal0_13, &Goal_14);
          hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_14, STATE_VARIABLE_ProcInfo_0_15, &STATE_VARIABLE_ProcInfo_29_29);
          hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_29_29, STATE_VARIABLE_ProcInfo_16);
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Case0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_5;
    MR_Word Cases_6;
    MR_Word MainConsId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_3, (MR_Integer) 0))));
    MR_Word OtherConsIds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_3, (MR_Integer) 1))));
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_3, (MR_Integer) 2))));
    MR_Word Goal_10;

    transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(Goal0_9, &Goal_10);
    {
      Case_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_5, 0) = ((MR_Box) (MainConsId_7));
      MR_hl_field(MR_mktag(0), Case_5, 1) = ((MR_Box) (OtherConsIds_8));
      MR_hl_field(MR_mktag(0), Case_5, 2) = ((MR_Box) (Goal_10));
    }
    transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_p_0(Cases0_4, &Cases_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_6));
    }
  }
}

static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_5;
    MR_Word Goals_6;

    transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(Goal0_3, &Goal_5);
    transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(Goals0_4, &Goals_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_6));
    }
  }
}

static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_3, (MR_Integer) 0))));
    MR_Word GoalInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_3, (MR_Integer) 1))));
    MR_Word GoalExpr_10;

    switch (MR_tag((MR_Word) GoalExpr0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_22 = (MR_Word) ((MR_Word) (GoalExpr0_5));
          MR_Word SubGoal_23;

          transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(SubGoal0_22, &SubGoal_23);
          GoalExpr_10 = (MR_Word) ((MR_Word) (SubGoal_23));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        GoalExpr_10 = GoalExpr0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            GoalExpr_10 = GoalExpr0_5;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 2))));
              MR_Word Goals_9;

              transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(Goals0_8, &Goals_9);
              {
                GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_10, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_10, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), GoalExpr_10, 2) = ((MR_Box) (Goals_9));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 1))));
              MR_Word Goals_55;

              transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(Goals0_54, &Goals_55);
              {
                GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_10, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_10, 1) = ((MR_Box) (Goals_55));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 1))));
              MR_Word CanFail_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 3))));
              MR_Word Cases_14;

              transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_p_0(Cases0_13, &Cases_14);
              {
                GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_10, 1) = ((MR_Box) (Var_11));
                MR_hl_field(MR_mktag(3), GoalExpr_10, 2) = (MR_Box) ((MR_Unsigned) (CanFail_12));
                MR_hl_field(MR_mktag(3), GoalExpr_10, 3) = ((MR_Box) (Cases_14));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 1))));
              MR_Word SubGoal0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 2))));
              MR_Word FGT_26;

              succeeded = ((((MR_tag((MR_Word) Reason_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_24, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_24, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_26) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                GoalExpr_10 = GoalExpr0_5;
              else
              {
                MR_Word SubGoal_56;

                transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(SubGoal0_58, &SubGoal_56);
                {
                  GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_10, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_10, 1) = ((MR_Box) (Reason_24));
                  MR_hl_field(MR_mktag(3), GoalExpr_10, 2) = ((MR_Box) (SubGoal_56));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 1))));
              MR_Word Cond0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 2))));
              MR_Word Then0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 3))));
              MR_Word Else0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 4))));
              MR_Word Cond_19;
              MR_Word Then_20;
              MR_Word Else_21;

              transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(Cond0_16, &Cond_19);
              transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(Then0_17, &Then_20);
              transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(Else0_18, &Else_21);
              {
                GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_10, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_10, 1) = ((MR_Box) (QuantVars_15));
                MR_hl_field(MR_mktag(3), GoalExpr_10, 2) = ((MR_Box) (Cond_19));
                MR_hl_field(MR_mktag(3), GoalExpr_10, 3) = ((MR_Box) (Then_20));
                MR_hl_field(MR_mktag(3), GoalExpr_10, 4) = ((MR_Box) (Else_21));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.parallel_to_plain_conj.parallel_to_plain_conjs_goal\'/2", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_6));
    }
  }
}

void mercury__transform_hlds__parallel_to_plain_conj__init(void)
{
}

void mercury__transform_hlds__parallel_to_plain_conj__init_type_tables(void)
{
}

void mercury__transform_hlds__parallel_to_plain_conj__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__parallel_to_plain_conj__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.parallel_to_plain_conj.
