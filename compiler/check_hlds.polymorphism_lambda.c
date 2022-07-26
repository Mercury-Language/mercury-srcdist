/*
** Automatically generated from `polymorphism_lambda.m'
** by the Mercury compiler,
** version rotd-2022-07-26
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


// :- module check_hlds.polymorphism_lambda.
// :- implementation.

/*
INIT mercury__check_hlds__polymorphism_lambda__init
ENDINIT
*/

#include "check_hlds.polymorphism_lambda.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static void MR_CALL 
check_hlds__polymorphism_lambda__lambda_modes_and_det_5_p_0(
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Context_8,
  MR_Word LambdaVars_9,
  MR_Word * MaybeResult_10);

static void MR_CALL 
check_hlds__polymorphism_lambda__create_fresh_vars_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarTable_0_4,
  MR_Word * STATE_VARIABLE_VarTable_5);


static /* final */ const MR_Box check_hlds__polymorphism_lambda_scalar_common_1[9][2];




static /* final */ const MR_Box check_hlds__polymorphism_lambda_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may not be used as a lambda expression."))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_lambda_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_lambda_scalar_common_1[2])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "so a curried call to it"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_lambda_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_lambda_scalar_common_1[4])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has no declared determinism,"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_lambda_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_lambda_scalar_common_1[6])))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
check_hlds__polymorphism_lambda__fix_undetermined_mode_lambda_goal_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Integer ProcId_6,
  MR_Word RHS0_7,
  MR_Word * MaybeRHS_8)
{
  MR_bool succeeded;
  MR_Word ArgVars0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_7, (MR_Integer) 2))));
  MR_Word LambdaVarsModes0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_7, (MR_Integer) 3))));
  MR_Word LambdaGoal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_7, (MR_Integer) 5))));
  MR_Word LambdaVars_17;
  MR_Word LambdaGoalInfo_19;
  MR_Word LambdaGoalList0_20;
  MR_Word PredId_30;
  MR_Word LambdaGoal_33;
  MR_Word Context_34;
  MR_Word PredInfo_35;
  MR_Word ProcInfo_36;
  MR_Word MaybeLambdaVarsModesDet_37;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_7, (MR_Integer) 0)));
  MR_Word LambdaGoalButLast0_21;
  MR_Word LastGoalInfo0_24;
  MR_Word PredId0_25;
  MR_Word Args0_27;
  MR_Word MaybeCallUnifyContext0_28;
  MR_Word QualifiedPName0_29;
  MR_Word Var_42;
  MR_Word LastGoal0_22;
  MR_Word LastGoalExpr0_23;
  MR_Box conv0_LastGoal0_22;

  mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), LambdaVarsModes0_14, &LambdaVars_17);
  LambdaGoalInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal0_16, (MR_Integer) 1))));
  hlds__hlds_goal__goal_to_conj_list_2_p_0(LambdaGoal0_16, &LambdaGoalList0_20);
  succeeded = mercury__list__split_last_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LambdaGoalList0_20, &LambdaGoalButLast0_21, &conv0_LastGoal0_22);
  if (succeeded)
  {
    LastGoal0_22 = ((MR_Word) (conv0_LastGoal0_22));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    LastGoalExpr0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LastGoal0_22, (MR_Integer) 0))));
    LastGoalInfo0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LastGoal0_22, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) LastGoalExpr0_23)) == (MR_Integer) 2);
    if (succeeded)
    {
      PredId0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LastGoalExpr0_23, (MR_Integer) 0))));
      Args0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LastGoalExpr0_23, (MR_Integer) 2))));
      Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), LastGoalExpr0_23, (MR_Integer) 3))) & (MR_Integer) 1);
      MaybeCallUnifyContext0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LastGoalExpr0_23, (MR_Integer) 4))));
      QualifiedPName0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LastGoalExpr0_23, (MR_Integer) 5))));
      succeeded = (Var_42 == (MR_Integer) 1);
    }
  }
  if (succeeded)
  {
    MR_Word LastGoalExpr_31;
    MR_Word LastGoal_32;
    MR_Word Var_44;
    MR_Word Var_45;

    PredId_30 = PredId0_25;
    {
      LastGoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), LastGoalExpr_31, 0) = ((MR_Box) (PredId0_25));
      MR_hl_field(MR_mktag(2), LastGoalExpr_31, 1) = ((MR_Box) (ProcId_6));
      MR_hl_field(MR_mktag(2), LastGoalExpr_31, 2) = ((MR_Box) (Args0_27));
      MR_hl_field(MR_mktag(2), LastGoalExpr_31, 3) = (MR_Box) ((MR_Unsigned) (Var_42));
      MR_hl_field(MR_mktag(2), LastGoalExpr_31, 4) = ((MR_Box) (MaybeCallUnifyContext0_28));
      MR_hl_field(MR_mktag(2), LastGoalExpr_31, 5) = ((MR_Box) (QualifiedPName0_29));
    }
    {
      LastGoal_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LastGoal_32, 0) = ((MR_Box) (LastGoalExpr_31));
      MR_hl_field(MR_mktag(0), LastGoal_32, 1) = ((MR_Box) (LastGoalInfo0_24));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (LastGoal_32));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LambdaGoalButLast0_21, Var_45);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_44, LambdaGoalInfo_19, &LambdaGoal_33);
    Context_34 = hlds__hlds_goal__goal_info_get_context_1_f_0(LastGoalInfo0_24);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_lambda.fix_undetermined_mode_lambda_goal\'/4", (MR_String) "unmatched lambda goal");
      return;
    }
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_5, PredId_30, ProcId_6, &PredInfo_35, &ProcInfo_36);
  check_hlds__polymorphism_lambda__lambda_modes_and_det_5_p_0(PredInfo_35, ProcInfo_36, Context_34, LambdaVars_17, &MaybeLambdaVarsModesDet_37);
  if (((MR_tag((MR_Word) MaybeLambdaVarsModesDet_37)) == (MR_Integer) 0))
  {
    MR_Word Specs_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeLambdaVarsModesDet_37, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRHS_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_41));
    }
  }
  else
  {
    MR_Word LambdaVarsModes_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLambdaVarsModesDet_37, (MR_Integer) 0))));
    MR_Word LambdaDet_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLambdaVarsModesDet_37, (MR_Integer) 1))));
    MR_Word RHS_40;

    {
      RHS_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), RHS_40, 0) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(2), RHS_40, 1) = NULL;
      MR_hl_field(MR_mktag(2), RHS_40, 2) = ((MR_Box) (ArgVars0_13));
      MR_hl_field(MR_mktag(2), RHS_40, 3) = ((MR_Box) (LambdaVarsModes_38));
      MR_hl_field(MR_mktag(2), RHS_40, 4) = (MR_Box) ((MR_Unsigned) (LambdaDet_39));
      MR_hl_field(MR_mktag(2), RHS_40, 5) = ((MR_Box) (LambdaGoal_33));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeRHS_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RHS_40));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism_lambda__convert_pred_to_lambda_goal_14_p_0(
  MR_Word ModuleInfo0_15,
  MR_Word Purity_16,
  MR_Word X0_18,
  MR_Word PredId_19,
  MR_Integer ProcId_20,
  MR_Word ArgVars0_21,
  MR_Word PredArgTypes_22,
  MR_Word UnifyContext_23,
  MR_Word GoalInfo0_24,
  MR_Word Context_25,
  MR_Word * MaybeRHS_26,
  MR_Word STATE_VARIABLE_VarTable_0_56,
  MR_Word * STATE_VARIABLE_VarTable_57)
{
  MR_Word LambdaVars_28;
  MR_Word Args_29;
  MR_Word PredInfo_30;
  MR_Word ProcInfo_31;
  MR_Word PredModule_32;
  MR_String PredName_33;
  MR_Word QualifiedPName_34;
  MR_Word ConsId_35;
  MR_Word RHS0_36;
  MR_Word CallUnifyContext_37;
  MR_Word LambdaGoalExpr_38;
  MR_Word NonLocals0_39;
  MR_Word OutsideVars_40;
  MR_Word InsideVars_41;
  MR_Word NonLocals_42;
  MR_Word GoalId_43;
  MR_Word DummyInstMapDelta_44;
  MR_Word LambdaGoalInfo0_46;
  MR_Word LambdaGoalInfo_47;
  MR_Word LambdaGoal_48;
  MR_Word MaybeLambdaVarsModesDet_49;
  MR_Integer Var_59;
  MR_Word Var_60;
  MR_Word Var_63;

  check_hlds__polymorphism_lambda__create_fresh_vars_5_p_0(ModuleInfo0_15, PredArgTypes_22, &LambdaVars_28, STATE_VARIABLE_VarTable_0_56, STATE_VARIABLE_VarTable_57);
  Args_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_lambda_scalar_common_1[0]), ArgVars0_21, LambdaVars_28);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_15, PredId_19, ProcId_20, &PredInfo_30, &ProcInfo_31);
  PredModule_32 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_30);
  PredName_33 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_30);
  {
    QualifiedPName_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), QualifiedPName_34, 0) = ((MR_Box) (PredModule_32));
    MR_hl_field(MR_mktag(1), QualifiedPName_34, 1) = ((MR_Box) (PredName_33));
  }
  Var_59 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__polymorphism_lambda_scalar_common_1[0]), ArgVars0_21);
  Var_60 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
  {
    ConsId_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ConsId_35, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), ConsId_35, 1) = ((MR_Box) (QualifiedPName_34));
    MR_hl_field(MR_mktag(3), ConsId_35, 2) = ((MR_Box) (Var_59));
    MR_hl_field(MR_mktag(3), ConsId_35, 3) = ((MR_Box) (Var_60));
  }
  {
    RHS0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), RHS0_36, 0) = ((MR_Box) (ConsId_35));
    MR_hl_field(MR_mktag(1), RHS0_36, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(1), RHS0_36, 2) = ((MR_Box) (ArgVars0_21));
  }
  {
    CallUnifyContext_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), CallUnifyContext_37, 0) = ((MR_Box) (X0_18));
    MR_hl_field(MR_mktag(0), CallUnifyContext_37, 1) = ((MR_Box) (RHS0_36));
    MR_hl_field(MR_mktag(0), CallUnifyContext_37, 2) = ((MR_Box) (UnifyContext_23));
  }
  {
    Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (CallUnifyContext_37));
  }
  {
    LambdaGoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), LambdaGoalExpr_38, 0) = ((MR_Box) (PredId_19));
    MR_hl_field(MR_mktag(2), LambdaGoalExpr_38, 1) = ((MR_Box) (ProcId_20));
    MR_hl_field(MR_mktag(2), LambdaGoalExpr_38, 2) = ((MR_Box) (Args_29));
    MR_hl_field(MR_mktag(2), LambdaGoalExpr_38, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(2), LambdaGoalExpr_38, 4) = ((MR_Box) (Var_63));
    MR_hl_field(MR_mktag(2), LambdaGoalExpr_38, 5) = ((MR_Box) (QualifiedPName_34));
  }
  NonLocals0_39 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_24);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaVars_28, NonLocals0_39, &OutsideVars_40);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Args_29, &InsideVars_41);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_40, InsideVars_41, &NonLocals_42);
  GoalId_43 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_24);
  hlds__instmap__instmap_delta_init_unreachable_1_p_0(&DummyInstMapDelta_44);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_42, DummyInstMapDelta_44, (MR_Integer) 6, Purity_16, Context_25, &LambdaGoalInfo0_46);
  hlds__hlds_goal__goal_info_set_goal_id_3_p_0(GoalId_43, LambdaGoalInfo0_46, &LambdaGoalInfo_47);
  {
    LambdaGoal_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LambdaGoal_48, 0) = ((MR_Box) (LambdaGoalExpr_38));
    MR_hl_field(MR_mktag(0), LambdaGoal_48, 1) = ((MR_Box) (LambdaGoalInfo_47));
  }
  check_hlds__polymorphism_lambda__lambda_modes_and_det_5_p_0(PredInfo_30, ProcInfo_31, Context_25, LambdaVars_28, &MaybeLambdaVarsModesDet_49);
  if (((MR_tag((MR_Word) MaybeLambdaVarsModesDet_49)) == (MR_Integer) 0))
  {
    MR_Word Specs_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeLambdaVarsModesDet_49, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRHS_26 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_55));
    }
  }
  else
  {
    MR_Word LambdaVarsModes_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLambdaVarsModesDet_49, (MR_Integer) 0))));
    MR_Word LambdaDet_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLambdaVarsModesDet_49, (MR_Integer) 1))));
    MR_Word PredOrFunc_52;
    MR_Word RHS_54;

    PredOrFunc_52 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_30);
    {
      RHS_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), RHS_54, 0) = (MR_Box) (((((MR_Unsigned) (Purity_16) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (PredOrFunc_52)))));
      MR_hl_field(MR_mktag(2), RHS_54, 1) = NULL;
      MR_hl_field(MR_mktag(2), RHS_54, 2) = ((MR_Box) (ArgVars0_21));
      MR_hl_field(MR_mktag(2), RHS_54, 3) = ((MR_Box) (LambdaVarsModes_50));
      MR_hl_field(MR_mktag(2), RHS_54, 4) = (MR_Box) ((MR_Unsigned) (LambdaDet_51));
      MR_hl_field(MR_mktag(2), RHS_54, 5) = ((MR_Box) (LambdaGoal_48));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeRHS_26 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RHS_54));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_lambda__lambda_modes_and_det_5_p_0(
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Context_8,
  MR_Word LambdaVars_9,
  MR_Word * MaybeResult_10)
{
  MR_Word MaybeDet_11;

  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_7, &MaybeDet_11);
  if ((MaybeDet_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PredOrFunc_18;
    MR_String PredOrFuncStr_19;
    MR_Word PredModuleName_20;
    MR_String PredName_21;
    MR_Word PredSymName_22;
    MR_Word Pieces_23;
    MR_Word Spec_24;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_47;

    hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_6, &PredOrFunc_18);
    PredOrFuncStr_19 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_18);
    hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_6, &PredModuleName_20);
    hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_6, &PredName_21);
    {
      PredSymName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredSymName_22, 0) = ((MR_Box) (PredModuleName_20));
      MR_hl_field(MR_mktag(1), PredSymName_22, 1) = ((MR_Box) (PredName_21));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (PredOrFuncStr_19));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (PredSymName_22));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_lambda_scalar_common_1[8])));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_lambda_scalar_common_1[1])));
      MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_28));
    }
    {
      Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.polymorphism_lambda.lambda_modes_and_det\'/5"));
      MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 56U));
      MR_hl_field(MR_mktag(1), Spec_24, 3) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(1), Spec_24, 4) = ((MR_Box) (Pieces_23));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_24));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeResult_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
    }
  }
  else
  {
    MR_Word Det_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_11, (MR_Integer) 0))));
    MR_Word ArgModes_13;
    MR_Integer NumArgModes_14;
    MR_Integer NumLambdaVars_15;
    MR_Word LambdaModes_16;
    MR_Word LambdaArgModes_17;
    MR_Integer Var_25;

    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_7, &ArgModes_13);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_13, &NumArgModes_14);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_lambda_scalar_common_1[0]), LambdaVars_9, &NumLambdaVars_15);
    Var_25 = (MR_Integer) ((MR_Unsigned) NumArgModes_14 - (MR_Unsigned) NumLambdaVars_15);
    mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_25, ArgModes_13, &LambdaModes_16);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__polymorphism_lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), LambdaVars_9, LambdaModes_16, &LambdaArgModes_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeResult_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaArgModes_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Det_12));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism_lambda__create_fresh_vars_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarTable_0_4,
  MR_Word * STATE_VARIABLE_VarTable_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_5 = STATE_VARIABLE_VarTable_0_4;
  }
  else
  {
    MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Types_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Word Vars_14;
    MR_Word IsDummy_16;
    MR_Word Entry_17;
    MR_Word STATE_VARIABLE_VarTable_21_21;

    IsDummy_16 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, Type_11);
    {
      Entry_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Entry_17, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), Entry_17, 1) = ((MR_Box) (Type_11));
      MR_hl_field(MR_mktag(0), Entry_17, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_16));
    }
    parse_tree__var_table__add_var_entry_4_p_0(Entry_17, &Var_13, STATE_VARIABLE_VarTable_0_4, &STATE_VARIABLE_VarTable_21_21);
    check_hlds__polymorphism_lambda__create_fresh_vars_5_p_0(ModuleInfo_1, Types_12, &Vars_14, STATE_VARIABLE_VarTable_21_21, STATE_VARIABLE_VarTable_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_14));
    }
  }
}

void mercury__check_hlds__polymorphism_lambda__init(void)
{
}

void mercury__check_hlds__polymorphism_lambda__init_type_tables(void)
{
}

void mercury__check_hlds__polymorphism_lambda__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__polymorphism_lambda__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.polymorphism_lambda.
