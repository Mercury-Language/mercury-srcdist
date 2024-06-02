/*
** Automatically generated from `follow_code.m'
** by the Mercury compiler,
** version rotd-2024-06-02
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
#include "ll_backend.mih"
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
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
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
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
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
  /* row   0 */
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
#include "io.stream_ops.mh"


void MR_CALL 
ll_backend__follow_code__move_follow_code_in_proc_5_p_0(
  MR_Word _PredProcId_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * STATE_VARIABLE_ProcInfo_23,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  ll_backend__follow_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_5_p_0(STATE_VARIABLE_ProcInfo_0_22, STATE_VARIABLE_ProcInfo_23, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
}

void MR_CALL 
ll_backend__follow_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_5_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * STATE_VARIABLE_ProcInfo_23,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  MR_Word Goal0_9;
  MR_Word VarTable0_10;
  MR_Word RttiVarMaps0_11;
  MR_Word Goal1_12;
  MR_Word Changed_13;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_22, &Goal0_9);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_22, &VarTable0_10);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_22, &RttiVarMaps0_11);
  ll_backend__follow_code__move_follow_code_in_goal_5_p_0(Goal0_9, &Goal1_12, RttiVarMaps0_11, (MR_Integer) 0, &Changed_13);
  switch (Changed_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_ProcInfo_23 = STATE_VARIABLE_ProcInfo_0_22;
        *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word HeadVars_14;
        MR_Word Goal2_16;
        MR_Word VarTable_17;
        MR_Word RttiVarMaps_18;
        MR_Word InstMap0_19;
        MR_Word InstVarSet_20;
        MR_Word Goal_21;
        MR_Word STATE_VARIABLE_ProcInfo_30_30;
        MR_Word STATE_VARIABLE_ProcInfo_31_31;
        MR_Word _Warnings_15;

        hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_22, &HeadVars_14);
        hlds__quantification__implicitly_quantify_clause_body_general_9_p_0((MR_Integer) 1, HeadVars_14, &_Warnings_15, Goal1_12, &Goal2_16, VarTable0_10, &VarTable_17, RttiVarMaps0_11, &RttiVarMaps_18);
        hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ProcInfo_0_22, &InstMap0_19);
        hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_22, &InstVarSet_20);
        check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 1, VarTable_17, InstVarSet_20, InstMap0_19, Goal2_16, &Goal_21, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
        hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_21, STATE_VARIABLE_ProcInfo_0_22, &STATE_VARIABLE_ProcInfo_30_30);
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_17, STATE_VARIABLE_ProcInfo_30_30, &STATE_VARIABLE_ProcInfo_31_31);
        hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_18, STATE_VARIABLE_ProcInfo_31_31, STATE_VARIABLE_ProcInfo_23);
      }
      break;
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
      MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal1_31;
      MR_Word RestGoals_32;
      MR_Word Goal_33;
      MR_Word STATE_VARIABLE_Changed_40_40;
      MR_Word STATE_VARIABLE_Changed_41_41;
      MR_Word STATE_VARIABLE_RevPrevGoals_42_42;
      MR_Word RestGoalsPrime_25;
      MR_Word Goal1Prime_30;
      MR_Word GoalExpr0_22 = ((MR_Word) ((MR_hl_field(0, Goal0_16, (MR_Integer) 0))));
      MR_Word GoalInfo0_23 = ((MR_Word) ((MR_hl_field(0, Goal0_16, (MR_Integer) 1))));
      MR_Word FollowGoals_24;
      MR_Word WorstPurity_26;
      MR_Word GoalExpr0_43;
      MR_Word GoalInfo0_44;
      MR_Word GoalExpr_49;
      MR_Word OldPurity_58;
      MR_Word NewPurity_59;
      MR_Word GoalInfo_60;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word TypeCtorInfo_8_99;
      MR_Word Goal_93;
      MR_Word Goals_94;
      MR_Word GoalInfo_96;
      MR_Word InstMapDelta_97;
      MR_Word ChangedVars_98;
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
            succeeded = ((((MR_tag((MR_Word) GoalExpr0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_22, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              Var_39 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_23);
              succeeded = (Var_39 != (MR_Integer) 2);
              if (succeeded)
              {
                Goal_93 = ((MR_Word) ((MR_hl_field(1, FollowGoals_24, (MR_Integer) 0))));
                Goals_94 = ((MR_Word) ((MR_hl_field(1, FollowGoals_24, (MR_Integer) 1))));
                GoalInfo_96 = ((MR_Word) ((MR_hl_field(0, Goal_93, (MR_Integer) 1))));
                InstMapDelta_97 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_96);
                hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_97, &ChangedVars_98);
                TypeCtorInfo_8_99 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_8_99, ChangedVars_98);
                if (succeeded)
                  succeeded = ll_backend__follow_code__no_bind_vars_1_p_0(Goals_94);
                succeeded = !(succeeded);
              }
            }
            succeeded = !(succeeded);
            if (succeeded)
            {
              GoalExpr0_43 = ((MR_Word) ((MR_hl_field(0, Goal0_16, (MR_Integer) 0))));
              GoalInfo0_44 = ((MR_Word) ((MR_hl_field(0, Goal0_16, (MR_Integer) 1))));
              switch (MR_tag((MR_Word) GoalExpr0_43)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_43, (MR_Integer) 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Goals0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_43, (MR_Integer) 1))));
                        MR_Word Goals_51;

                        succeeded = ll_backend__follow_code__move_follow_code_move_goals_disj_4_p_0(Goals0_50, FollowGoals_24, WorstPurity_26, &Goals_51);
                        if (succeeded)
                        {
                          {
                            GoalExpr_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, GoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                            MR_hl_field(3, GoalExpr_49, 1) = ((MR_Box) (Goals_51));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_43, (MR_Integer) 1))));
                        MR_Word Det_46 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_43, (MR_Integer) 2))) & (MR_Integer) 1);
                        MR_Word Cases0_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_43, (MR_Integer) 3))));
                        MR_Word Cases_48;

                        succeeded = ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(Cases0_47, FollowGoals_24, WorstPurity_26, &Cases_48);
                        if (succeeded)
                        {
                          {
                            GoalExpr_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, GoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(3, GoalExpr_49, 1) = ((MR_Box) (Var_45));
                            MR_hl_field(3, GoalExpr_49, 2) = (MR_Box) ((MR_Unsigned) (Det_46));
                            MR_hl_field(3, GoalExpr_49, 3) = ((MR_Box) (Cases_48));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Vars_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_43, (MR_Integer) 1))));
                        MR_Word Cond_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_43, (MR_Integer) 2))));
                        MR_Word Then0_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_43, (MR_Integer) 3))));
                        MR_Word Else0_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_43, (MR_Integer) 4))));
                        MR_Word Then_56;
                        MR_Word Else_57;
                        MR_Word GoalExpr0_61 = ((MR_Word) ((MR_hl_field(0, Then0_54, (MR_Integer) 0))));
                        MR_Word GoalInfo0_62 = ((MR_Word) ((MR_hl_field(0, Then0_54, (MR_Integer) 1))));
                        MR_Word Detism0_63;
                        MR_Word MaxSolns0_65;
                        MR_Word GoalExpr0_77;
                        MR_Word GoalInfo0_78;
                        MR_Word Detism0_79;
                        MR_Word MaxSolns0_81;
                        MR_Word _CanFail0_64;
                        MR_Word _CanFail0_80;

                        Detism0_63 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_62);
                        parse_tree__prog_data__determinism_components_3_p_0(Detism0_63, &_CanFail0_64, &MaxSolns0_65);
                        switch (MaxSolns0_65) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 3:
                          case (MR_Integer) 2:
                          case (MR_Integer) 1:
                            {
                              MR_Word GoalExpr_67;
                              MR_Word OldPurity_68;
                              MR_Word NewPurity_69;
                              MR_Word GoalInfo_70;
                              MR_Word GoalInfo_102;
                              MR_Word Goals_103 = ((MR_Word) ((MR_hl_field(1, FollowGoals_24, (MR_Integer) 1))));
                              MR_Word Detism1_105;
                              MR_Word Var_106 = ((MR_Word) ((MR_hl_field(1, FollowGoals_24, (MR_Integer) 0))));
                              MR_Word Var_108;
                              MR_Word Conjuncts0_66;
                              MR_Word Var_71;

                              GoalInfo_102 = ((MR_Word) ((MR_hl_field(0, Var_106, (MR_Integer) 1))));
                              Detism1_105 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_102);
                              parse_tree__prog_detism__det_conjunction_detism_3_p_0(Detism0_63, Detism1_105, &Var_108);
                              succeeded = (Detism0_63 == Var_108);
                              if (succeeded)
                              {
                                succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(Goals_103, Detism0_63);
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) GoalExpr0_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_61, (MR_Integer) 0)))) == (MR_Integer) 2)));
                                  if (succeeded)
                                  {
                                    Var_71 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_61, (MR_Integer) 1))) & (MR_Integer) 1);
                                    Conjuncts0_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_61, (MR_Integer) 2))));
                                    succeeded = (Var_71 == (MR_Integer) 0);
                                  }
                                  if (succeeded)
                                  {
                                    MR_Word Var_73;

                                    Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_66, FollowGoals_24);
                                    {
                                      GoalExpr_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(3, GoalExpr_67, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                                      MR_hl_field(3, GoalExpr_67, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                                      MR_hl_field(3, GoalExpr_67, 2) = ((MR_Box) (Var_73));
                                    }
                                  }
                                  else
                                  {
                                    MR_Word Var_75;

                                    {
                                      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(1, Var_75, 0) = ((MR_Box) (Then0_54));
                                      MR_hl_field(1, Var_75, 1) = ((MR_Box) (FollowGoals_24));
                                    }
                                    {
                                      GoalExpr_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(3, GoalExpr_67, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                                      MR_hl_field(3, GoalExpr_67, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                                      MR_hl_field(3, GoalExpr_67, 2) = ((MR_Box) (Var_75));
                                    }
                                  }
                                  OldPurity_68 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_62);
                                  NewPurity_69 = parse_tree__prog_data__worst_purity_2_f_0(OldPurity_68, WorstPurity_26);
                                  hlds__hlds_goal__goal_info_set_purity_3_p_0(NewPurity_69, GoalInfo0_62, &GoalInfo_70);
                                  {
                                    Then_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(0, Then_56, 0) = ((MR_Box) (GoalExpr_67));
                                    MR_hl_field(0, Then_56, 1) = ((MR_Box) (GoalInfo_70));
                                  }
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              Then_56 = Then0_54;
                              succeeded = MR_TRUE;
                            }
                            break;
                        }
                        if (succeeded)
                        {
                          GoalExpr0_77 = ((MR_Word) ((MR_hl_field(0, Else0_55, (MR_Integer) 0))));
                          GoalInfo0_78 = ((MR_Word) ((MR_hl_field(0, Else0_55, (MR_Integer) 1))));
                          Detism0_79 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_78);
                          parse_tree__prog_data__determinism_components_3_p_0(Detism0_79, &_CanFail0_80, &MaxSolns0_81);
                          switch (MaxSolns0_81) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 3:
                            case (MR_Integer) 2:
                            case (MR_Integer) 1:
                              {
                                MR_Word GoalExpr_83;
                                MR_Word OldPurity_84;
                                MR_Word NewPurity_85;
                                MR_Word GoalInfo_86;
                                MR_Word GoalInfo_111;
                                MR_Word Goals_112 = ((MR_Word) ((MR_hl_field(1, FollowGoals_24, (MR_Integer) 1))));
                                MR_Word Detism1_114;
                                MR_Word Var_115 = ((MR_Word) ((MR_hl_field(1, FollowGoals_24, (MR_Integer) 0))));
                                MR_Word Var_117;
                                MR_Word Conjuncts0_82;
                                MR_Word Var_87;

                                GoalInfo_111 = ((MR_Word) ((MR_hl_field(0, Var_115, (MR_Integer) 1))));
                                Detism1_114 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_111);
                                parse_tree__prog_detism__det_conjunction_detism_3_p_0(Detism0_79, Detism1_114, &Var_117);
                                succeeded = (Detism0_79 == Var_117);
                                if (succeeded)
                                {
                                  succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(Goals_112, Detism0_79);
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) GoalExpr0_77)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_77, (MR_Integer) 0)))) == (MR_Integer) 2)));
                                    if (succeeded)
                                    {
                                      Var_87 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_77, (MR_Integer) 1))) & (MR_Integer) 1);
                                      Conjuncts0_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_77, (MR_Integer) 2))));
                                      succeeded = (Var_87 == (MR_Integer) 0);
                                    }
                                    if (succeeded)
                                    {
                                      MR_Word Var_89;

                                      Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_82, FollowGoals_24);
                                      {
                                        GoalExpr_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(3, GoalExpr_83, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                                        MR_hl_field(3, GoalExpr_83, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                                        MR_hl_field(3, GoalExpr_83, 2) = ((MR_Box) (Var_89));
                                      }
                                    }
                                    else
                                    {
                                      MR_Word Var_91;

                                      {
                                        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(1, Var_91, 0) = ((MR_Box) (Else0_55));
                                        MR_hl_field(1, Var_91, 1) = ((MR_Box) (FollowGoals_24));
                                      }
                                      {
                                        GoalExpr_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(3, GoalExpr_83, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                                        MR_hl_field(3, GoalExpr_83, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                                        MR_hl_field(3, GoalExpr_83, 2) = ((MR_Box) (Var_91));
                                      }
                                    }
                                    OldPurity_84 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_78);
                                    NewPurity_85 = parse_tree__prog_data__worst_purity_2_f_0(OldPurity_84, WorstPurity_26);
                                    hlds__hlds_goal__goal_info_set_purity_3_p_0(NewPurity_85, GoalInfo0_78, &GoalInfo_86);
                                    {
                                      Else_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(0, Else_57, 0) = ((MR_Box) (GoalExpr_83));
                                      MR_hl_field(0, Else_57, 1) = ((MR_Box) (GoalInfo_86));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              break;
                            case (MR_Integer) 0:
                              {
                                Else_57 = Else0_55;
                                succeeded = MR_TRUE;
                              }
                              break;
                          }
                          if (succeeded)
                          {
                            {
                              GoalExpr_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, GoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                              MR_hl_field(3, GoalExpr_49, 1) = ((MR_Box) (Vars_52));
                              MR_hl_field(3, GoalExpr_49, 2) = ((MR_Box) (Cond_53));
                              MR_hl_field(3, GoalExpr_49, 3) = ((MR_Box) (Then_56));
                              MR_hl_field(3, GoalExpr_49, 4) = ((MR_Box) (Else_57));
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
                OldPurity_58 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_44);
                NewPurity_59 = parse_tree__prog_data__worst_purity_2_f_0(OldPurity_58, WorstPurity_26);
                hlds__hlds_goal__goal_info_set_purity_3_p_0(NewPurity_59, GoalInfo0_44, &GoalInfo_60);
                {
                  Goal1Prime_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Goal1Prime_30, 0) = ((MR_Box) (GoalExpr_49));
                  MR_hl_field(0, Goal1Prime_30, 1) = ((MR_Box) (GoalInfo_60));
                }
                succeeded = MR_TRUE;
              }
            }
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
        STATE_VARIABLE_RevPrevGoals_42_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevPrevGoals_42_42, 0) = ((MR_Box) (Goal_33));
        MR_hl_field(1, STATE_VARIABLE_RevPrevGoals_42_42, 1) = ((MR_Box) (STATE_VARIABLE_RevPrevGoals_0_4));
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
    MR_Word Case0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_12;
    MR_Word Cases_13;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(0, Case0_10, (MR_Integer) 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(0, Case0_10, (MR_Integer) 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(0, Case0_10, (MR_Integer) 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_Changed_22_22;

    ll_backend__follow_code__move_follow_code_in_goal_5_p_0(Goal0_18, &Goal_19, RttiVarMaps_3, STATE_VARIABLE_Changed_0_4, &STATE_VARIABLE_Changed_22_22);
    {
      Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_12, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(0, Case_12, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(0, Case_12, 2) = ((MR_Box) (Goal_19));
    }
    ll_backend__follow_code__move_follow_code_in_cases_5_p_0(Cases0_11, &Cases_13, RttiVarMaps_3, STATE_VARIABLE_Changed_22_22, STATE_VARIABLE_Changed_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_13));
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
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_Changed_18_18;

    ll_backend__follow_code__move_follow_code_in_goal_5_p_0(Goal0_10, &Goal_12, RttiVarMaps_3, STATE_VARIABLE_Changed_0_4, &STATE_VARIABLE_Changed_18_18);
    ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(Goals0_11, &Goals_13, RttiVarMaps_3, STATE_VARIABLE_Changed_18_18, STATE_VARIABLE_Changed_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_13));
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
  MR_bool succeeded;
  MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_6, (MR_Integer) 0))));
  MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal0_6, (MR_Integer) 1))));

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
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_73));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_10, (MR_Integer) 0))))) {
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
            MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, (MR_Integer) 2))));
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
                  MR_Word RevGoals_79;

                  ConjPurity_14 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_11);
                  ll_backend__follow_code__move_follow_code_in_conj_2_7_p_0(Goals0_13, ConjPurity_14, RttiVarMaps_8, (MR_Word) ((MR_Unsigned) 0U), &RevGoals_79, STATE_VARIABLE_Changed_0_57, STATE_VARIABLE_Changed_58);
                  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevGoals_79, &Goals_15);
                }
                break;
            }
            {
              GoalExpr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_16, 1) = (MR_Box) ((MR_Unsigned) (ConjType_12));
              MR_hl_field(3, GoalExpr_16, 2) = ((MR_Box) (Goals_15));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_16));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, (MR_Integer) 1))));
            MR_Word Goals_71;
            MR_Word GoalExpr_72;

            ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(Goals0_70, &Goals_71, RttiVarMaps_8, STATE_VARIABLE_Changed_0_57, STATE_VARIABLE_Changed_58);
            {
              GoalExpr_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_72, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_72, 1) = ((MR_Box) (Goals_71));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_72));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, (MR_Integer) 1))));
            MR_Word Det_20 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, (MR_Integer) 3))));
            MR_Word Cases_22;
            MR_Word GoalExpr_74;

            ll_backend__follow_code__move_follow_code_in_cases_5_p_0(Cases0_21, &Cases_22, RttiVarMaps_8, STATE_VARIABLE_Changed_0_57, STATE_VARIABLE_Changed_58);
            {
              GoalExpr_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_74, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_74, 1) = ((MR_Box) (Var_19));
              MR_hl_field(3, GoalExpr_74, 2) = (MR_Box) ((MR_Unsigned) (Det_20));
              MR_hl_field(3, GoalExpr_74, 3) = ((MR_Box) (Cases_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_74));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, (MR_Integer) 1))));
            MR_Word GoalExpr_76;
            MR_Word SubGoal0_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, (MR_Integer) 2))));
            MR_Word SubGoal_78;
            MR_Word FGT_32;

            succeeded = ((((MR_tag((MR_Word) Reason_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_30, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_32 = ((MR_Unsigned) ((MR_hl_field(3, Reason_30, (MR_Integer) 2))) & (MR_Integer) 3);
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
              GoalExpr_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_76, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_76, 1) = ((MR_Box) (Reason_30));
              MR_hl_field(3, GoalExpr_76, 2) = ((MR_Box) (SubGoal_78));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_76));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, (MR_Integer) 1))));
            MR_Word Cond0_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, (MR_Integer) 2))));
            MR_Word Then0_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, (MR_Integer) 3))));
            MR_Word Else0_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, (MR_Integer) 4))));
            MR_Word Cond_27;
            MR_Word Then_28;
            MR_Word Else_29;
            MR_Word STATE_VARIABLE_Changed_64_64;
            MR_Word STATE_VARIABLE_Changed_65_65;
            MR_Word GoalExpr_75;

            ll_backend__follow_code__move_follow_code_in_goal_5_p_0(Cond0_24, &Cond_27, RttiVarMaps_8, STATE_VARIABLE_Changed_0_57, &STATE_VARIABLE_Changed_64_64);
            ll_backend__follow_code__move_follow_code_in_goal_5_p_0(Then0_25, &Then_28, RttiVarMaps_8, STATE_VARIABLE_Changed_64_64, &STATE_VARIABLE_Changed_65_65);
            ll_backend__follow_code__move_follow_code_in_goal_5_p_0(Else0_26, &Else_29, RttiVarMaps_8, STATE_VARIABLE_Changed_65_65, STATE_VARIABLE_Changed_58);
            {
              GoalExpr_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_75, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_75, 1) = ((MR_Box) (Vars_23));
              MR_hl_field(3, GoalExpr_75, 2) = ((MR_Box) (Cond_27));
              MR_hl_field(3, GoalExpr_75, 3) = ((MR_Box) (Then_28));
              MR_hl_field(3, GoalExpr_75, 4) = ((MR_Box) (Else_29));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_75));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
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

static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Goal0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_11;
    MR_Word Goals_12;
    MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
    MR_Word Detism0_15;
    MR_Word MaxSolns0_17;
    MR_Word _CanFail0_16;

    Detism0_15 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_14);
    parse_tree__prog_data__determinism_components_3_p_0(Detism0_15, &_CanFail0_16, &MaxSolns0_17);
    switch (MaxSolns0_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word GoalExpr_19;
          MR_Word OldPurity_20;
          MR_Word NewPurity_21;
          MR_Word GoalInfo_22;
          MR_Word Conjuncts0_18;
          MR_Word Var_23;

          succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(HeadVar__2_2, Detism0_15);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) GoalExpr0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              Var_23 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
              Conjuncts0_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
              succeeded = (Var_23 == (MR_Integer) 0);
            }
            if (succeeded)
            {
              MR_Word Var_25;

              Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_18, HeadVar__2_2);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (Var_25));
              }
            }
            else
            {
              MR_Word Var_27;

              {
                Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_27, 0) = ((MR_Box) (Goal0_7));
                MR_hl_field(1, Var_27, 1) = ((MR_Box) (HeadVar__2_2));
              }
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (Var_27));
              }
            }
            OldPurity_20 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_14);
            NewPurity_21 = parse_tree__prog_data__worst_purity_2_f_0(OldPurity_20, HeadVar__3_3);
            hlds__hlds_goal__goal_info_set_purity_3_p_0(NewPurity_21, GoalInfo0_14, &GoalInfo_22);
            {
              Goal_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal_11, 0) = ((MR_Box) (GoalExpr_19));
              MR_hl_field(0, Goal_11, 1) = ((MR_Box) (GoalInfo_22));
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
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_11));
          MR_hl_field(1, base, 1) = ((MR_Box) (Goals_12));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Case0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_11;
    MR_Word Cases_12;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_7, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_7, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_7, (MR_Integer) 2))));
    MR_Word Goal_16;
    MR_Word GoalExpr0_17 = ((MR_Word) ((MR_hl_field(0, Goal0_15, (MR_Integer) 0))));
    MR_Word GoalInfo0_18 = ((MR_Word) ((MR_hl_field(0, Goal0_15, (MR_Integer) 1))));
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
            succeeded = ((((MR_tag((MR_Word) GoalExpr0_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              Var_27 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))) & (MR_Integer) 1);
              Conjuncts0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
              succeeded = (Var_27 == (MR_Integer) 0);
            }
            if (succeeded)
            {
              MR_Word Var_29;

              Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_22, HeadVar__2_2);
              {
                GoalExpr_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_23, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_23, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(3, GoalExpr_23, 2) = ((MR_Box) (Var_29));
              }
            }
            else
            {
              MR_Word Var_31;

              {
                Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_31, 0) = ((MR_Box) (Goal0_15));
                MR_hl_field(1, Var_31, 1) = ((MR_Box) (HeadVar__2_2));
              }
              {
                GoalExpr_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_23, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_23, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(3, GoalExpr_23, 2) = ((MR_Box) (Var_31));
              }
            }
            OldPurity_24 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_18);
            NewPurity_25 = parse_tree__prog_data__worst_purity_2_f_0(OldPurity_24, HeadVar__3_3);
            hlds__hlds_goal__goal_info_set_purity_3_p_0(NewPurity_25, GoalInfo0_18, &GoalInfo_26);
            {
              Goal_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal_16, 0) = ((MR_Box) (GoalExpr_23));
              MR_hl_field(0, Goal_16, 1) = ((MR_Box) (GoalInfo_26));
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
        MR_hl_field(0, Case_11, 0) = ((MR_Box) (MainConsId_13));
        MR_hl_field(0, Case_11, 1) = ((MR_Box) (OtherConsIds_14));
        MR_hl_field(0, Case_11, 2) = ((MR_Box) (Goal_16));
      }
      succeeded = ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(Cases0_8, HeadVar__2_2, HeadVar__3_3, &Cases_12);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Case_11));
          MR_hl_field(1, base, 1) = ((MR_Box) (Cases_12));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
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
      MR_Word Goals_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Detism1_8;
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_11;
      MR_Word next_value_of_HeadVar__1_1;

      GoalInfo_5 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
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
  struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_3(
  void * env_ptr_arg)
{
  struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__Arg_30 = ((MR_Word) ((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__conv0_Arg_30));
  ll_backend__follow_code__move_follow_code_select_6_p_0_2(env_ptr);
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_2(
  void * env_ptr_arg)
{
  struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) (env_ptr_arg);

  hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarMaps_2, (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__Arg_30, &(env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarInfo_31);
  (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarInfo_31 != (MR_Word) ((MR_Unsigned) 0U));
  if ((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
    ll_backend__follow_code__move_follow_code_select_6_p_0_1(env_ptr);
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_4(
  void * env_ptr_arg)
{
  struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word TypeInfo_37_37;
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
          Var_19 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 0))));
          Var_20 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 1))));
          Var_21 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 2))));
          Unification_22 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 3))));
          Var_23 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 4))));
          (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) Unification_22)) == (MR_Integer) 1);
          if ((env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
          {
            Var_24 = ((MR_Word) ((MR_hl_field(1, Unification_22, (MR_Integer) 0))));
            Var_25 = ((MR_Word) ((MR_hl_field(1, Unification_22, (MR_Integer) 1))));
            Args_26 = ((MR_Word) ((MR_hl_field(1, Unification_22, (MR_Integer) 2))));
            Var_27 = ((MR_Word) ((MR_hl_field(1, Unification_22, (MR_Integer) 3))));
            packed_word_2 = (MR_Unsigned) ((MR_hl_field(1, Unification_22, (MR_Integer) 4)));
            Var_28 = ((((MR_Unsigned) ((MR_hl_field(1, Unification_22, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
            Var_29 = ((MR_Unsigned) ((MR_hl_field(1, Unification_22, (MR_Integer) 4))) & (MR_Integer) 1);
            TypeInfo_37_37 = (MR_Word) (&ll_backend__follow_code_scalar_common_1[0]);
            mercury__list__member_2_p_1(TypeInfo_37_37, &(env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__conv0_Arg_30, Args_26, ll_backend__follow_code__move_follow_code_select_6_p_0_3, env_ptr);
          }
        }
      }
      (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = MR_TRUE;
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
    MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word GoalInfo_18;

    (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17 = ((MR_Word) ((MR_hl_field(0, Goal_11, (MR_Integer) 0))));
    GoalInfo_18 = ((MR_Word) ((MR_hl_field(0, Goal_11, (MR_Integer) 1))));
    if (((MR_tag((MR_Word) (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17)) == (MR_Integer) 2))
    {
      MR_Word Var_51 = ((MR_Unsigned) ((MR_hl_field(2, (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(2, (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 0))));
      MR_Integer Var_47 = ((MR_Integer) ((MR_hl_field(2, (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 1))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(2, (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 2))));
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(2, (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 4))));
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(2, (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 5))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(2, (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 3)));

      (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = (Var_51 == (MR_Integer) 0);
    }
    else
    if (((MR_tag((MR_Word) (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17)) == (MR_Integer) 1))
    {
      MR_Word Unification_41 = ((MR_Word) ((MR_hl_field(1, (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 3))));
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 0))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 1))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 2))));
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 4))));
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Unsigned packed_word_1;

      (env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Unification_41)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unification_41, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if ((env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
      {
        Var_43 = ((MR_Word) ((MR_hl_field(3, Unification_41, (MR_Integer) 1))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(3, Unification_41, (MR_Integer) 2)));
        Var_44 = ((MR_Unsigned) ((MR_hl_field(3, Unification_41, (MR_Integer) 2))) & (MR_Integer) 1);
        Var_45 = ((MR_Word) ((MR_hl_field(3, Unification_41, (MR_Integer) 3))));
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
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_11));
        MR_hl_field(1, base, 1) = ((MR_Box) (FollowGoals0_33));
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
      MR_Word Goal_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalInfo_5 = ((MR_Word) ((MR_hl_field(0, Goal_2, (MR_Integer) 1))));
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
