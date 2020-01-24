/*
** Automatically generated from `follow_code.m'
** by the Mercury compiler,
** version rotd-2020-01-24
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


// :- module ll_backend.follow_code.
// :- implementation.

/*
INIT mercury__ll_backend__follow_code__init
ENDINIT
*/

#include "ll_backend.follow_code.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.quantification.mih"
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
#include "array.mih"
#include "assoc_list.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s {
  MR_Word ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarMaps_2;
  MR_bool ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded;
  MR_Word ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17;
  jmp_buf ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__commit_0;
  MR_Word ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__Arg_30;
  MR_Word ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarInfo_31;
  MR_Box ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__conv0_Arg_30;
};


static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_conj_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevPrevGoals_0_4,
  MR_Word * STATE_VARIABLE_RevPrevGoals_5,
  MR_Word STATE_VARIABLE_Changed_0_6,
  MR_Word * STATE_VARIABLE_Changed_7);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word RttiVarMaps_3,
  MR_Word STATE_VARIABLE_Changed_0_4,
  MR_Word * STATE_VARIABLE_Changed_5);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word RttiVarMaps_3,
  MR_Word STATE_VARIABLE_Changed_0_4,
  MR_Word * STATE_VARIABLE_Changed_5);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word RttiVarMaps_8,
  MR_Word STATE_VARIABLE_Changed_0_57,
  MR_Word * STATE_VARIABLE_Changed_58);

static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_4_p_0(
  MR_Word Goal0_5,
  MR_Word FollowGoals_6,
  MR_Word FollowPurity_7,
  MR_Word * Goal_8);

static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__follow_code__check_follow_code_detism_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Detism0_2);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word RttiVarMaps_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Purity_0_5,
  MR_Word * STATE_VARIABLE_Purity_6);

static MR_bool MR_CALL 
ll_backend__follow_code__no_bind_vars_1_p_0(
  MR_Word HeadVar__1_1);


static /* final */ const MR_Box ll_backend__follow_code_scalar_common_1[1][2];




static /* final */ const MR_Box ll_backend__follow_code_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
ll_backend__follow_code__move_follow_code_in_proc_5_p_0(
  MR_Word _PredProcId_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_24,
  MR_Word * STATE_VARIABLE_ProcInfo_25,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27)
{
  ll_backend__follow_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_5_p_0(STATE_VARIABLE_ProcInfo_0_24, STATE_VARIABLE_ProcInfo_25, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27);
}

void MR_CALL 
ll_backend__follow_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_5_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_24,
  MR_Word * STATE_VARIABLE_ProcInfo_25,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27)
{
  {
    MR_Word Goal0_9;
    MR_Word Varset0_10;
    MR_Word VarTypes0_11;
    MR_Word RttiVarMaps0_12;
    MR_Word Goal1_13;
    MR_Word Changed_14;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_24, &Goal0_9);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_24, &Varset0_10);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_24, &VarTypes0_11);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_24, &RttiVarMaps0_12);
    ll_backend__follow_code__move_follow_code_in_goal_5_p_0(Goal0_9, &Goal1_13, RttiVarMaps0_12, (MR_Integer) 0, &Changed_14);
    switch (Changed_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_ProcInfo_25 = STATE_VARIABLE_ProcInfo_0_24;
          *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HeadVars_15;
          MR_Word Goal2_17;
          MR_Word Varset_18;
          MR_Word VarTypes_19;
          MR_Word RttiVarMaps_20;
          MR_Word InstMap0_21;
          MR_Word InstVarSet_22;
          MR_Word Goal_23;
          MR_Word STATE_VARIABLE_ProcInfo_32_32;
          MR_Word STATE_VARIABLE_ProcInfo_33_33;
          MR_Word STATE_VARIABLE_ProcInfo_34_34;
          MR_Word _Warnings_16;

          hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_24, &HeadVars_15);
          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, HeadVars_15, &_Warnings_16, Goal1_13, &Goal2_17, Varset0_10, &Varset_18, VarTypes0_11, &VarTypes_19, RttiVarMaps0_12, &RttiVarMaps_20);
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ProcInfo_0_24, STATE_VARIABLE_ModuleInfo_0_26, &InstMap0_21);
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_24, &InstVarSet_22);
          check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, Goal2_17, &Goal_23, VarTypes_19, InstVarSet_22, InstMap0_21, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27);
          hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_23, STATE_VARIABLE_ProcInfo_0_24, &STATE_VARIABLE_ProcInfo_32_32);
          hlds__hlds_pred__proc_info_set_varset_3_p_0(Varset_18, STATE_VARIABLE_ProcInfo_32_32, &STATE_VARIABLE_ProcInfo_33_33);
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_19, STATE_VARIABLE_ProcInfo_33_33, &STATE_VARIABLE_ProcInfo_34_34);
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_20, STATE_VARIABLE_ProcInfo_34_34, STATE_VARIABLE_ProcInfo_25);
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_conj_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevPrevGoals_0_4,
  MR_Word * STATE_VARIABLE_RevPrevGoals_5,
  MR_Word STATE_VARIABLE_Changed_0_6,
  MR_Word * STATE_VARIABLE_Changed_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Changed_7 = STATE_VARIABLE_Changed_0_6;
      *STATE_VARIABLE_RevPrevGoals_5 = STATE_VARIABLE_RevPrevGoals_0_4;
    }
    else
    {
      MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal1_31;
      MR_Word RestGoals_32;
      MR_Word Goal_33;
      MR_Word STATE_VARIABLE_Changed_40_40;
      MR_Word STATE_VARIABLE_Changed_41_41;
      MR_Word STATE_VARIABLE_RevPrevGoals_42_42;
      MR_Word RestGoalsPrime_25;
      MR_Word Goal1Prime_30;
      MR_Word GoalExpr0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_16, (MR_Integer) 0))));
      MR_Word GoalInfo0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_16, (MR_Integer) 1))));
      MR_Word FollowGoals_24;
      MR_Word WorstPurity_26;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word TypeCtorInfo_8_51;
      MR_Word Goal_45;
      MR_Word Goals_46;
      MR_Word GoalInfo_48;
      MR_Word InstMapDelta_49;
      MR_Word ChangedVars_50;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevPrevGoals_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_6;

      succeeded = hlds__goal_util__goal_is_branched_1_p_0(GoalExpr0_22);
      if (succeeded)
      {
        Var_38 = (MR_Integer) 17;
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_23, Var_38);
        succeeded = !(succeeded);
        if (succeeded)
        {
          ll_backend__follow_code__move_follow_code_select_6_p_0(Goals0_17, HeadVar__3_3, &FollowGoals_24, &RestGoalsPrime_25, HeadVar__2_2, &WorstPurity_26);
          succeeded = (FollowGoals_24 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) GoalExpr0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_22, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              Var_39 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_23);
              succeeded = (Var_39 != (MR_Integer) 2);
              if (succeeded)
              {
                Goal_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FollowGoals_24, (MR_Integer) 0))));
                Goals_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FollowGoals_24, (MR_Integer) 1))));
                GoalInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_45, (MR_Integer) 1))));
                InstMapDelta_49 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_48);
                hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_49, &ChangedVars_50);
                TypeCtorInfo_8_51 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_8_51, ChangedVars_50);
                if (succeeded)
                  succeeded = ll_backend__follow_code__no_bind_vars_1_p_0(Goals_46);
                succeeded = !(succeeded);
              }
            }
            succeeded = !(succeeded);
            if (succeeded)
              succeeded = ll_backend__follow_code__move_follow_code_move_goals_4_p_0(Goal0_16, FollowGoals_24, WorstPurity_26, &Goal1Prime_30);
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_Changed_40_40 = (MR_Integer) 1;
        Goal1_31 = Goal1Prime_30;
        RestGoals_32 = RestGoalsPrime_25;
      }
      else
      {
        Goal1_31 = Goal0_16;
        RestGoals_32 = Goals0_17;
        STATE_VARIABLE_Changed_40_40 = STATE_VARIABLE_Changed_0_6;
      }
      ll_backend__follow_code__move_follow_code_in_goal_5_p_0(Goal1_31, &Goal_33, HeadVar__3_3, STATE_VARIABLE_Changed_40_40, &STATE_VARIABLE_Changed_41_41);
      {
        STATE_VARIABLE_RevPrevGoals_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPrevGoals_42_42, 0) = ((MR_Box) (Goal_33));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPrevGoals_42_42, 1) = ((MR_Box) (STATE_VARIABLE_RevPrevGoals_0_4));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RestGoals_32;
      next_value_of_STATE_VARIABLE_RevPrevGoals_0_4 = STATE_VARIABLE_RevPrevGoals_42_42;
      next_value_of_STATE_VARIABLE_Changed_0_6 = STATE_VARIABLE_Changed_41_41;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevPrevGoals_0_4 = next_value_of_STATE_VARIABLE_RevPrevGoals_0_4;
      STATE_VARIABLE_Changed_0_6 = next_value_of_STATE_VARIABLE_Changed_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word RttiVarMaps_3,
  MR_Word STATE_VARIABLE_Changed_0_4,
  MR_Word * STATE_VARIABLE_Changed_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_5 = STATE_VARIABLE_Changed_0_4;
  }
  else
  {
    MR_Word Case0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_12;
    MR_Word Cases_13;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_Changed_22_22;

    ll_backend__follow_code__move_follow_code_in_goal_5_p_0(Goal0_18, &Goal_19, RttiVarMaps_3, STATE_VARIABLE_Changed_0_4, &STATE_VARIABLE_Changed_22_22);
    {
      Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_12, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(MR_mktag(0), Case_12, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(MR_mktag(0), Case_12, 2) = ((MR_Box) (Goal_19));
    }
    ll_backend__follow_code__move_follow_code_in_cases_5_p_0(Cases0_11, &Cases_13, RttiVarMaps_3, STATE_VARIABLE_Changed_22_22, STATE_VARIABLE_Changed_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_13));
    }
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word RttiVarMaps_3,
  MR_Word STATE_VARIABLE_Changed_0_4,
  MR_Word * STATE_VARIABLE_Changed_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_5 = STATE_VARIABLE_Changed_0_4;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_Changed_18_18;

    ll_backend__follow_code__move_follow_code_in_goal_5_p_0(Goal0_10, &Goal_12, RttiVarMaps_3, STATE_VARIABLE_Changed_0_4, &STATE_VARIABLE_Changed_18_18);
    ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(Goals0_11, &Goals_13, RttiVarMaps_3, STATE_VARIABLE_Changed_18_18, STATE_VARIABLE_Changed_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_13));
    }
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word RttiVarMaps_8,
  MR_Word STATE_VARIABLE_Changed_0_57,
  MR_Word * STATE_VARIABLE_Changed_58)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 0))));
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_17 = (MR_Word) ((MR_Word) (GoalExpr0_10));
          MR_Word SubGoal_18;
          MR_Word GoalExpr_73;

          ll_backend__follow_code__move_follow_code_in_goal_5_p_0(SubGoal0_17, &SubGoal_18, RttiVarMaps_8, STATE_VARIABLE_Changed_0_57, STATE_VARIABLE_Changed_58);
          GoalExpr_73 = (MR_Word) ((MR_Word) (SubGoal_18));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_7 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_73));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Goal_7 = Goal0_6;
          *STATE_VARIABLE_Changed_58 = STATE_VARIABLE_Changed_0_57;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_7 = Goal0_6;
              *STATE_VARIABLE_Changed_58 = STATE_VARIABLE_Changed_0_57;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
              MR_Word Goals_15;
              MR_Word GoalExpr_16;

              switch (ConjType_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(Goals0_13, &Goals_15, RttiVarMaps_8, STATE_VARIABLE_Changed_0_57, STATE_VARIABLE_Changed_58);
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word ConjPurity_14;
                    MR_Word RevGoals_86;

                    ConjPurity_14 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_11);
                    ll_backend__follow_code__move_follow_code_in_conj_2_7_p_0(Goals0_13, ConjPurity_14, RttiVarMaps_8, (MR_Word) ((MR_Unsigned) 0U), &RevGoals_86, STATE_VARIABLE_Changed_0_57, STATE_VARIABLE_Changed_58);
                    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevGoals_86, &Goals_15);
                  }
                  break;
              }
              {
                GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_16, 1) = (MR_Box) ((MR_Unsigned) (ConjType_12));
                MR_hl_field(MR_mktag(3), GoalExpr_16, 2) = ((MR_Box) (Goals_15));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_16));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word Goals_71;
              MR_Word GoalExpr_72;

              ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(Goals0_70, &Goals_71, RttiVarMaps_8, STATE_VARIABLE_Changed_0_57, STATE_VARIABLE_Changed_58);
              {
                GoalExpr_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_72, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_72, 1) = ((MR_Box) (Goals_71));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_72));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word Det_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
              MR_Word Cases_22;
              MR_Word GoalExpr_74;

              ll_backend__follow_code__move_follow_code_in_cases_5_p_0(Cases0_21, &Cases_22, RttiVarMaps_8, STATE_VARIABLE_Changed_0_57, STATE_VARIABLE_Changed_58);
              {
                GoalExpr_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_74, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_74, 1) = ((MR_Box) (Var_19));
                MR_hl_field(MR_mktag(3), GoalExpr_74, 2) = (MR_Box) ((MR_Unsigned) (Det_20));
                MR_hl_field(MR_mktag(3), GoalExpr_74, 3) = ((MR_Box) (Cases_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_74));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word GoalExpr_76;
              MR_Word SubGoal0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
              MR_Word SubGoal_78;
              MR_Word FGT_32;

              succeeded = ((((MR_tag((MR_Word) Reason_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_30, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_30, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_32) {
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
              {
                SubGoal_78 = SubGoal0_77;
                *STATE_VARIABLE_Changed_58 = STATE_VARIABLE_Changed_0_57;
              }
              else
                ll_backend__follow_code__move_follow_code_in_goal_5_p_0(SubGoal0_77, &SubGoal_78, RttiVarMaps_8, STATE_VARIABLE_Changed_0_57, STATE_VARIABLE_Changed_58);
              {
                GoalExpr_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_76, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_76, 1) = ((MR_Box) (Reason_30));
                MR_hl_field(MR_mktag(3), GoalExpr_76, 2) = ((MR_Box) (SubGoal_78));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_76));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word Cond0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
              MR_Word Then0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
              MR_Word Else0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 4))));
              MR_Word Cond_27;
              MR_Word Then_28;
              MR_Word Else_29;
              MR_Word STATE_VARIABLE_Changed_62_62;
              MR_Word STATE_VARIABLE_Changed_63_63;
              MR_Word GoalExpr_75;

              ll_backend__follow_code__move_follow_code_in_goal_5_p_0(Cond0_24, &Cond_27, RttiVarMaps_8, STATE_VARIABLE_Changed_0_57, &STATE_VARIABLE_Changed_62_62);
              ll_backend__follow_code__move_follow_code_in_goal_5_p_0(Then0_25, &Then_28, RttiVarMaps_8, STATE_VARIABLE_Changed_62_62, &STATE_VARIABLE_Changed_63_63);
              ll_backend__follow_code__move_follow_code_in_goal_5_p_0(Else0_26, &Else_29, RttiVarMaps_8, STATE_VARIABLE_Changed_63_63, STATE_VARIABLE_Changed_58);
              {
                GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_75, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_75, 1) = ((MR_Box) (Vars_23));
                MR_hl_field(MR_mktag(3), GoalExpr_75, 2) = ((MR_Box) (Cond_27));
                MR_hl_field(MR_mktag(3), GoalExpr_75, 3) = ((MR_Box) (Then_28));
                MR_hl_field(MR_mktag(3), GoalExpr_75, 4) = ((MR_Box) (Else_29));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_75));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.follow_code.move_follow_code_in_goal\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_4_p_0(
  MR_Word Goal0_5,
  MR_Word FollowGoals_6,
  MR_Word FollowPurity_7,
  MR_Word * Goal_8)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
    MR_Word GoalExpr_15;
    MR_Word OldPurity_24;
    MR_Word NewPurity_25;
    MR_Word GoalInfo_26;

    switch (MR_tag((MR_Word) GoalExpr0_9)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word Goals_17;

              succeeded = ll_backend__follow_code__move_follow_code_move_goals_disj_4_p_0(Goals0_16, FollowGoals_6, FollowPurity_7, &Goals_17);
              if (succeeded)
              {
                {
                  GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Goals_17));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word Det_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
              MR_Word Cases_14;

              succeeded = ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(Cases0_13, FollowGoals_6, FollowPurity_7, &Cases_14);
              if (succeeded)
              {
                {
                  GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Var_11));
                  MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = (MR_Box) ((MR_Unsigned) (Det_12));
                  MR_hl_field(MR_mktag(3), GoalExpr_15, 3) = ((MR_Box) (Cases_14));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word Cond_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
              MR_Word Then0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
              MR_Word Else0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 4))));
              MR_Word Then_22;
              MR_Word Else_23;
              MR_Word GoalExpr0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then0_20, (MR_Integer) 0))));
              MR_Word GoalInfo0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then0_20, (MR_Integer) 1))));
              MR_Word Detism0_33;
              MR_Word MaxSolns0_35;
              MR_Word GoalExpr0_51;
              MR_Word GoalInfo0_52;
              MR_Word Detism0_53;
              MR_Word MaxSolns0_55;
              MR_Word _CanFail0_34;
              MR_Word _CanFail0_54;

              Detism0_33 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_32);
              parse_tree__prog_data__determinism_components_3_p_0(Detism0_33, &_CanFail0_34, &MaxSolns0_35);
              switch (MaxSolns0_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                  {
                    MR_Word GoalExpr_37;
                    MR_Word OldPurity_38;
                    MR_Word NewPurity_39;
                    MR_Word GoalInfo_40;
                    MR_Word Conjuncts0_36;
                    MR_Word Var_41;

                    succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(FollowGoals_6, Detism0_33);
                    if (succeeded)
                    {
                      succeeded = ((((MR_tag((MR_Word) GoalExpr0_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 2)));
                      if (succeeded)
                      {
                        Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_31, (MR_Integer) 1))) & (MR_Integer) 1);
                        Conjuncts0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_31, (MR_Integer) 2))));
                        succeeded = (Var_41 == (MR_Integer) 0);
                      }
                      if (succeeded)
                      {
                        MR_Word Var_43;

                        Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_36, FollowGoals_6);
                        {
                          GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(MR_mktag(3), GoalExpr_37, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), GoalExpr_37, 2) = ((MR_Box) (Var_43));
                        }
                      }
                      else
                      {
                        MR_Word Var_45;

                        {
                          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Then0_20));
                          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (FollowGoals_6));
                        }
                        {
                          GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(MR_mktag(3), GoalExpr_37, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), GoalExpr_37, 2) = ((MR_Box) (Var_45));
                        }
                      }
                      OldPurity_38 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_32);
                      NewPurity_39 = parse_tree__prog_data__worst_purity_2_f_0(OldPurity_38, FollowPurity_7);
                      hlds__hlds_goal__goal_info_set_purity_3_p_0(NewPurity_39, GoalInfo0_32, &GoalInfo_40);
                      {
                        Then_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Then_22, 0) = ((MR_Box) (GoalExpr_37));
                        MR_hl_field(MR_mktag(0), Then_22, 1) = ((MR_Box) (GoalInfo_40));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    Then_22 = Then0_20;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              if (succeeded)
              {
                GoalExpr0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else0_21, (MR_Integer) 0))));
                GoalInfo0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else0_21, (MR_Integer) 1))));
                Detism0_53 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_52);
                parse_tree__prog_data__determinism_components_3_p_0(Detism0_53, &_CanFail0_54, &MaxSolns0_55);
                switch (MaxSolns0_55) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 3:
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      MR_Word GoalExpr_57;
                      MR_Word OldPurity_58;
                      MR_Word NewPurity_59;
                      MR_Word GoalInfo_60;
                      MR_Word Conjuncts0_56;
                      MR_Word Var_61;

                      succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(FollowGoals_6, Detism0_53);
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) GoalExpr0_51)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_51, (MR_Integer) 0)))) == (MR_Integer) 2)));
                        if (succeeded)
                        {
                          Var_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_51, (MR_Integer) 1))) & (MR_Integer) 1);
                          Conjuncts0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_51, (MR_Integer) 2))));
                          succeeded = (Var_61 == (MR_Integer) 0);
                        }
                        if (succeeded)
                        {
                          MR_Word Var_63;

                          Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_56, FollowGoals_6);
                          {
                            GoalExpr_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), GoalExpr_57, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(MR_mktag(3), GoalExpr_57, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), GoalExpr_57, 2) = ((MR_Box) (Var_63));
                          }
                        }
                        else
                        {
                          MR_Word Var_65;

                          {
                            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Else0_21));
                            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (FollowGoals_6));
                          }
                          {
                            GoalExpr_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), GoalExpr_57, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(MR_mktag(3), GoalExpr_57, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), GoalExpr_57, 2) = ((MR_Box) (Var_65));
                          }
                        }
                        OldPurity_58 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_52);
                        NewPurity_59 = parse_tree__prog_data__worst_purity_2_f_0(OldPurity_58, FollowPurity_7);
                        hlds__hlds_goal__goal_info_set_purity_3_p_0(NewPurity_59, GoalInfo0_52, &GoalInfo_60);
                        {
                          Else_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Else_23, 0) = ((MR_Box) (GoalExpr_57));
                          MR_hl_field(MR_mktag(0), Else_23, 1) = ((MR_Box) (GoalInfo_60));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      Else_23 = Else0_21;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                if (succeeded)
                {
                  {
                    GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Vars_18));
                    MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (Cond_19));
                    MR_hl_field(MR_mktag(3), GoalExpr_15, 3) = ((MR_Box) (Then_22));
                    MR_hl_field(MR_mktag(3), GoalExpr_15, 4) = ((MR_Box) (Else_23));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
        }
        break;
    }
    if (succeeded)
    {
      OldPurity_24 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_10);
      NewPurity_25 = parse_tree__prog_data__worst_purity_2_f_0(OldPurity_24, FollowPurity_7);
      hlds__hlds_goal__goal_info_set_purity_3_p_0(NewPurity_25, GoalInfo0_10, &GoalInfo_26);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_15));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_26));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Goal0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_11;
      MR_Word Goals_12;
      MR_Word GoalExpr0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
      MR_Word GoalInfo0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
      MR_Word Detism0_19;
      MR_Word MaxSolns0_21;
      MR_Word _CanFail0_20;

      Detism0_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_18);
      parse_tree__prog_data__determinism_components_3_p_0(Detism0_19, &_CanFail0_20, &MaxSolns0_21);
      switch (MaxSolns0_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word GoalExpr_23;
            MR_Word OldPurity_24;
            MR_Word NewPurity_25;
            MR_Word GoalInfo_26;
            MR_Word Conjuncts0_22;
            MR_Word Var_27;

            succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(HeadVar__2_2, Detism0_19);
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) GoalExpr0_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Var_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 1))) & (MR_Integer) 1);
                Conjuncts0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 2))));
                succeeded = (Var_27 == (MR_Integer) 0);
              }
              if (succeeded)
              {
                MR_Word Var_29;

                Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_22, HeadVar__2_2);
                {
                  GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 2) = ((MR_Box) (Var_29));
                }
              }
              else
              {
                MR_Word Var_31;

                {
                  Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Goal0_7));
                  MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (HeadVar__2_2));
                }
                {
                  GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 2) = ((MR_Box) (Var_31));
                }
              }
              OldPurity_24 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_18);
              NewPurity_25 = parse_tree__prog_data__worst_purity_2_f_0(OldPurity_24, HeadVar__3_3);
              hlds__hlds_goal__goal_info_set_purity_3_p_0(NewPurity_25, GoalInfo0_18, &GoalInfo_26);
              {
                Goal_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal_11, 0) = ((MR_Box) (GoalExpr_23));
                MR_hl_field(MR_mktag(0), Goal_11, 1) = ((MR_Box) (GoalInfo_26));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            Goal_11 = Goal0_7;
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        succeeded = ll_backend__follow_code__move_follow_code_move_goals_disj_4_p_0(Goals0_8, HeadVar__2_2, HeadVar__3_3, &Goals_12);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_12));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Case0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Case_11;
      MR_Word Cases_12;
      MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_7, (MR_Integer) 0))));
      MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_7, (MR_Integer) 1))));
      MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_7, (MR_Integer) 2))));
      MR_Word Goal_16;
      MR_Word GoalExpr0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_15, (MR_Integer) 0))));
      MR_Word GoalInfo0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_15, (MR_Integer) 1))));
      MR_Word Detism0_23;
      MR_Word MaxSolns0_25;
      MR_Word _CanFail0_24;

      Detism0_23 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_22);
      parse_tree__prog_data__determinism_components_3_p_0(Detism0_23, &_CanFail0_24, &MaxSolns0_25);
      switch (MaxSolns0_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word GoalExpr_27;
            MR_Word OldPurity_28;
            MR_Word NewPurity_29;
            MR_Word GoalInfo_30;
            MR_Word Conjuncts0_26;
            MR_Word Var_31;

            succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(HeadVar__2_2, Detism0_23);
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) GoalExpr0_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Var_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 1))) & (MR_Integer) 1);
                Conjuncts0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 2))));
                succeeded = (Var_31 == (MR_Integer) 0);
              }
              if (succeeded)
              {
                MR_Word Var_33;

                Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_26, HeadVar__2_2);
                {
                  GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), GoalExpr_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), GoalExpr_27, 2) = ((MR_Box) (Var_33));
                }
              }
              else
              {
                MR_Word Var_35;

                {
                  Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Goal0_15));
                  MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (HeadVar__2_2));
                }
                {
                  GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), GoalExpr_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), GoalExpr_27, 2) = ((MR_Box) (Var_35));
                }
              }
              OldPurity_28 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_22);
              NewPurity_29 = parse_tree__prog_data__worst_purity_2_f_0(OldPurity_28, HeadVar__3_3);
              hlds__hlds_goal__goal_info_set_purity_3_p_0(NewPurity_29, GoalInfo0_22, &GoalInfo_30);
              {
                Goal_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal_16, 0) = ((MR_Box) (GoalExpr_27));
                MR_hl_field(MR_mktag(0), Goal_16, 1) = ((MR_Box) (GoalInfo_30));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            Goal_16 = Goal0_15;
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        {
          Case_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Case_11, 0) = ((MR_Box) (MainConsId_13));
          MR_hl_field(MR_mktag(0), Case_11, 1) = ((MR_Box) (OtherConsIds_14));
          MR_hl_field(MR_mktag(0), Case_11, 2) = ((MR_Box) (Goal_16));
        }
        succeeded = ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(Cases0_8, HeadVar__2_2, HeadVar__3_3, &Cases_12);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_12));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__follow_code__check_follow_code_detism_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Detism0_2)
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
      MR_Word GoalInfo_5;
      MR_Word Goals_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Detism1_8;
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_11;
      MR_Word next_value_of_HeadVar__1_1;

      GoalInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
      Detism1_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_5);
      parse_tree__prog_detism__det_conjunction_detism_3_p_0(Detism0_2, Detism1_8, &Var_11);
      succeeded = (Detism0_2 == Var_11);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals_6;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__Arg_30 = ((MR_Word) ((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__conv0_Arg_30));
    ll_backend__follow_code__move_follow_code_select_6_p_0_2(env_ptr);
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) (env_ptr_arg);

    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarMaps_2, (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__Arg_30, &(env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarInfo_31);
    (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarInfo_31 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
      ll_backend__follow_code__move_follow_code_select_6_p_0_1(env_ptr);
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_4(
  void * env_ptr_arg)
{
  {
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word TypeInfo_38_38;
          MR_Word Unification_22;
          MR_Word Args_26;
          MR_Word Var_19;
          MR_Word Var_20;
          MR_Word Var_21;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Unsigned packed_word_2;

          (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17)) == (MR_Integer) 1);
          if ((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
          {
            Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 1))));
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 2))));
            Unification_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 3))));
            Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 4))));
            (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) Unification_22)) == (MR_Integer) 1);
            if ((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
            {
              Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_22, (MR_Integer) 0))));
              Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_22, (MR_Integer) 1))));
              Args_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_22, (MR_Integer) 2))));
              Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_22, (MR_Integer) 3))));
              packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification_22, (MR_Integer) 4)));
              Var_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification_22, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
              Var_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification_22, (MR_Integer) 4))) & (MR_Integer) 1);
              TypeInfo_38_38 = (MR_Word) (&ll_backend__follow_code_scalar_common_1[0]);
              mercury__list__member_2_p_1(TypeInfo_38_38, &(env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__conv0_Arg_30, Args_26, ll_backend__follow_code__move_follow_code_select_6_p_0_3, env_ptr);
            }
          }
        }
        (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word RttiVarMaps_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Purity_0_5,
  MR_Word * STATE_VARIABLE_Purity_6)
{
  {
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s env;

    (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarMaps_2 = RttiVarMaps_2;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Purity_6 = STATE_VARIABLE_Purity_0_5;
    }
    else
    {
      MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalInfo_18;

      (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_11, (MR_Integer) 0))));
      GoalInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_11, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17)) == (MR_Integer) 2))
      {
        MR_Word Var_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 0))));
        MR_Integer Var_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 1))));
        MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 2))));
        MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 4))));
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 5))));
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 3)));

        (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = (Var_53 == (MR_Integer) 0);
      }
      else
      if (((MR_tag((MR_Word) (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17)) == (MR_Integer) 1))
      {
        MR_Word Unification_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 3))));
        MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 0))));
        MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 1))));
        MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 2))));
        MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 4))));
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Unsigned packed_word_1;

        (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Unification_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_43, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if ((env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
        {
          Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_43, (MR_Integer) 1))));
          packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Unification_43, (MR_Integer) 2)));
          Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Unification_43, (MR_Integer) 2))) & (MR_Integer) 1);
          Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_43, (MR_Integer) 3))));
        }
        (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = !((env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded);
      }
      else
        (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = MR_FALSE;
      if ((env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
      {
        ll_backend__follow_code__move_follow_code_select_6_p_0_4(&env);
        (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = !((env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded);
      }
      if ((env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
      {
        MR_Word GoalPurity_32;
        MR_Word FollowGoals0_33;
        MR_Word STATE_VARIABLE_Purity_36_36;

        GoalPurity_32 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_18);
        STATE_VARIABLE_Purity_36_36 = parse_tree__prog_data__worst_purity_2_f_0(STATE_VARIABLE_Purity_0_5, GoalPurity_32);
        ll_backend__follow_code__move_follow_code_select_6_p_0(Goals_12, (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarMaps_2, &FollowGoals0_33, HeadVar__4_4, STATE_VARIABLE_Purity_36_36, STATE_VARIABLE_Purity_6);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FollowGoals0_33));
        }
      }
      else
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__4_4 = HeadVar__1_1;
        *STATE_VARIABLE_Purity_6 = STATE_VARIABLE_Purity_0_5;
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__follow_code__no_bind_vars_1_p_0(
  MR_Word HeadVar__1_1)
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
      MR_Word Goal_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_2, (MR_Integer) 1))));
      MR_Word InstMapDelta_6;
      MR_Word ChangedVars_7;
      MR_Word next_value_of_HeadVar__1_1;

      InstMapDelta_6 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_5);
      hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_6, &ChangedVars_7);
      succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVars_7);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals_3;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void mercury__ll_backend__follow_code__init(void)
{
}

void mercury__ll_backend__follow_code__init_type_tables(void)
{
}

void mercury__ll_backend__follow_code__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__follow_code__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.follow_code.
