/*
** Automatically generated from `polymorphism_lambda.m'
** by the Mercury compiler,
** version rotd-2024-05-07
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
#include "libs.indent.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not be used as a lambda expression."))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__polymorphism_lambda_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__polymorphism_lambda_scalar_common_1[2])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "so a curried call to it"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__polymorphism_lambda_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__polymorphism_lambda_scalar_common_1[4])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has no declared determinism,"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__polymorphism_lambda_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__polymorphism_lambda_scalar_common_1[6])))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
check_hlds__polymorphism_lambda__fix_undetermined_mode_lambda_goal_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Integer ProcId_6,
  MR_Word RHS0_7,
  MR_Word * MaybeRHS_8)
{
  MR_bool succeeded;
  MR_Word ArgVars0_12 = ((MR_Word) ((MR_hl_field(2, RHS0_7, (MR_Integer) 1))));
  MR_Word LambdaVarsModes0_13 = ((MR_Word) ((MR_hl_field(2, RHS0_7, (MR_Integer) 2))));
  MR_Word LambdaGoal0_15 = ((MR_Word) ((MR_hl_field(2, RHS0_7, (MR_Integer) 4))));
  MR_Word LambdaVars_16;
  MR_Word LambdaGoalInfo_18;
  MR_Word LambdaGoalList0_19;
  MR_Word PredId_29;
  MR_Word LambdaGoal_32;
  MR_Word Context_33;
  MR_Word PredInfo_34;
  MR_Word ProcInfo_35;
  MR_Word MaybeDet_52;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(2, RHS0_7, (MR_Integer) 0)));
  MR_Word LambdaGoalButLast0_20;
  MR_Word LastGoalInfo0_23;
  MR_Word PredId0_24;
  MR_Word Args0_26;
  MR_Word MaybeCallUnifyContext0_27;
  MR_Word QualifiedPName0_28;
  MR_Word Var_41;
  MR_Word LastGoal0_21;
  MR_Word LastGoalExpr0_22;
  MR_Box conv0_LastGoal0_21;

  mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), LambdaVarsModes0_13, &LambdaVars_16);
  LambdaGoalInfo_18 = ((MR_Word) ((MR_hl_field(0, LambdaGoal0_15, (MR_Integer) 1))));
  hlds__hlds_goal__goal_to_conj_list_2_p_0(LambdaGoal0_15, &LambdaGoalList0_19);
  succeeded = mercury__list__split_last_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LambdaGoalList0_19, &LambdaGoalButLast0_20, &conv0_LastGoal0_21);
  if (succeeded)
  {
    LastGoal0_21 = ((MR_Word) (conv0_LastGoal0_21));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    LastGoalExpr0_22 = ((MR_Word) ((MR_hl_field(0, LastGoal0_21, (MR_Integer) 0))));
    LastGoalInfo0_23 = ((MR_Word) ((MR_hl_field(0, LastGoal0_21, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) LastGoalExpr0_22)) == (MR_Integer) 2);
    if (succeeded)
    {
      PredId0_24 = ((MR_Word) ((MR_hl_field(2, LastGoalExpr0_22, (MR_Integer) 0))));
      Args0_26 = ((MR_Word) ((MR_hl_field(2, LastGoalExpr0_22, (MR_Integer) 2))));
      Var_41 = ((MR_Unsigned) ((MR_hl_field(2, LastGoalExpr0_22, (MR_Integer) 3))) & (MR_Integer) 1);
      MaybeCallUnifyContext0_27 = ((MR_Word) ((MR_hl_field(2, LastGoalExpr0_22, (MR_Integer) 4))));
      QualifiedPName0_28 = ((MR_Word) ((MR_hl_field(2, LastGoalExpr0_22, (MR_Integer) 5))));
      succeeded = (Var_41 == (MR_Integer) 1);
    }
  }
  if (succeeded)
  {
    MR_Word LastGoalExpr_30;
    MR_Word LastGoal_31;
    MR_Word Var_43;
    MR_Word Var_44;

    PredId_29 = PredId0_24;
    {
      LastGoalExpr_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, LastGoalExpr_30, 0) = ((MR_Box) (PredId0_24));
      MR_hl_field(2, LastGoalExpr_30, 1) = ((MR_Box) (ProcId_6));
      MR_hl_field(2, LastGoalExpr_30, 2) = ((MR_Box) (Args0_26));
      MR_hl_field(2, LastGoalExpr_30, 3) = (MR_Box) ((MR_Unsigned) (Var_41));
      MR_hl_field(2, LastGoalExpr_30, 4) = ((MR_Box) (MaybeCallUnifyContext0_27));
      MR_hl_field(2, LastGoalExpr_30, 5) = ((MR_Box) (QualifiedPName0_28));
    }
    {
      LastGoal_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LastGoal_31, 0) = ((MR_Box) (LastGoalExpr_30));
      MR_hl_field(0, LastGoal_31, 1) = ((MR_Box) (LastGoalInfo0_23));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (LastGoal_31));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LambdaGoalButLast0_20, Var_44);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_43, LambdaGoalInfo_18, &LambdaGoal_32);
    Context_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(LastGoalInfo0_23);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_lambda.fix_undetermined_mode_lambda_goal\'/4", (MR_String) "unmatched lambda goal");
      return;
    }
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_5, PredId_29, ProcId_6, &PredInfo_34, &ProcInfo_35);
  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_35, &MaybeDet_52);
  if ((MaybeDet_52 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Specs_40;
    MR_Word PredOrFunc_59;
    MR_String PredOrFuncStr_60;
    MR_Word PredModuleName_61;
    MR_String PredName_62;
    MR_Word PredSymName_63;
    MR_Word Pieces_64;
    MR_Word Spec_65;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;

    hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_34, &PredOrFunc_59);
    PredOrFuncStr_60 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_59);
    hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_34, &PredModuleName_61);
    hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_34, &PredName_62);
    {
      PredSymName_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PredSymName_63, 0) = ((MR_Box) (PredModuleName_61));
      MR_hl_field(1, PredSymName_63, 1) = ((MR_Box) (PredName_62));
    }
    {
      Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_70, 1) = ((MR_Box) (PredOrFuncStr_60));
    }
    {
      Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_72, 1) = ((MR_Box) (PredSymName_63));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__polymorphism_lambda_scalar_common_1[8])));
    }
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_71));
    }
    {
      Pieces_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_64, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__polymorphism_lambda_scalar_common_1[1])));
      MR_hl_field(1, Pieces_64, 1) = ((MR_Box) (Var_69));
    }
    {
      Spec_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.polymorphism_lambda.lambda_modes_and_det\'/5"));
      MR_hl_field(0, Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 60U));
      MR_hl_field(0, Spec_65, 3) = ((MR_Box) (Context_33));
      MR_hl_field(0, Spec_65, 4) = ((MR_Box) (Pieces_64));
    }
    {
      Specs_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Specs_40, 0) = ((MR_Box) (Spec_65));
      MR_hl_field(1, Specs_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRHS_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_40));
    }
  }
  else
  {
    MR_Word LambdaVarsModes_37;
    MR_Word LambdaDet_38 = ((MR_Word) ((MR_hl_field(1, MaybeDet_52, (MR_Integer) 0))));
    MR_Word RHS_39;
    MR_Word ArgModes_54;
    MR_Integer NumArgModes_55;
    MR_Integer NumLambdaVars_56;
    MR_Word LambdaModes_57;
    MR_Integer Var_66;

    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_35, &ArgModes_54);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_54, &NumArgModes_55);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_lambda_scalar_common_1[0]), LambdaVars_16, &NumLambdaVars_56);
    Var_66 = (MR_Integer) ((MR_Unsigned) NumArgModes_55 - (MR_Unsigned) NumLambdaVars_56);
    mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_66, ArgModes_54, &LambdaModes_57);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__polymorphism_lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), LambdaVars_16, LambdaModes_57, &LambdaVarsModes_37);
    {
      RHS_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, RHS_39, 0) = (MR_Box) (packed_word_0);
      MR_hl_field(2, RHS_39, 1) = ((MR_Box) (ArgVars0_12));
      MR_hl_field(2, RHS_39, 2) = ((MR_Box) (LambdaVarsModes_37));
      MR_hl_field(2, RHS_39, 3) = (MR_Box) ((MR_Unsigned) (LambdaDet_38));
      MR_hl_field(2, RHS_39, 4) = ((MR_Box) (LambdaGoal_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeRHS_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (RHS_39));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism_lambda__convert_pred_to_lambda_goal_13_p_0(
  MR_Word ModuleInfo0_14,
  MR_Word Purity_15,
  MR_Word X0_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word ArgVars0_19,
  MR_Word PredArgTypes_20,
  MR_Word UnifyContext_21,
  MR_Word GoalInfo0_22,
  MR_Word Context_23,
  MR_Word * MaybeRHS_24,
  MR_Word STATE_VARIABLE_VarTable_0_54,
  MR_Word * STATE_VARIABLE_VarTable_55)
{
  MR_Word LambdaVars_26;
  MR_Word Args_27;
  MR_Word PredInfo_28;
  MR_Word ProcInfo_29;
  MR_Word PredModule_30;
  MR_String PredName_31;
  MR_Word QualifiedPName_32;
  MR_Word ConsId_33;
  MR_Word RHS0_34;
  MR_Word CallUnifyContext_35;
  MR_Word LambdaGoalExpr_36;
  MR_Word NonLocals0_37;
  MR_Word OutsideVars_38;
  MR_Word InsideVars_39;
  MR_Word NonLocals_40;
  MR_Word GoalId_41;
  MR_Word DummyInstMapDelta_42;
  MR_Word LambdaGoalInfo0_44;
  MR_Word LambdaGoalInfo_45;
  MR_Word LambdaGoal_46;
  MR_Integer Var_57;
  MR_Word Var_58;
  MR_Word Var_61;
  MR_Word MaybeDet_64;

  check_hlds__polymorphism_lambda__create_fresh_vars_5_p_0(ModuleInfo0_14, PredArgTypes_20, &LambdaVars_26, STATE_VARIABLE_VarTable_0_54, STATE_VARIABLE_VarTable_55);
  Args_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_lambda_scalar_common_1[0]), ArgVars0_19, LambdaVars_26);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_14, PredId_17, ProcId_18, &PredInfo_28, &ProcInfo_29);
  PredModule_30 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_28);
  PredName_31 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_28);
  {
    QualifiedPName_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, QualifiedPName_32, 0) = ((MR_Box) (PredModule_30));
    MR_hl_field(1, QualifiedPName_32, 1) = ((MR_Box) (PredName_31));
  }
  Var_57 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__polymorphism_lambda_scalar_common_1[0]), ArgVars0_19);
  Var_58 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
  {
    ConsId_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConsId_33, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, ConsId_33, 1) = ((MR_Box) (QualifiedPName_32));
    MR_hl_field(3, ConsId_33, 2) = ((MR_Box) (Var_57));
    MR_hl_field(3, ConsId_33, 3) = ((MR_Box) (Var_58));
  }
  {
    RHS0_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RHS0_34, 0) = ((MR_Box) (ConsId_33));
    MR_hl_field(1, RHS0_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, RHS0_34, 2) = ((MR_Box) (ArgVars0_19));
  }
  {
    CallUnifyContext_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CallUnifyContext_35, 0) = ((MR_Box) (X0_16));
    MR_hl_field(0, CallUnifyContext_35, 1) = ((MR_Box) (RHS0_34));
    MR_hl_field(0, CallUnifyContext_35, 2) = ((MR_Box) (UnifyContext_21));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (CallUnifyContext_35));
  }
  {
    LambdaGoalExpr_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, LambdaGoalExpr_36, 0) = ((MR_Box) (PredId_17));
    MR_hl_field(2, LambdaGoalExpr_36, 1) = ((MR_Box) (ProcId_18));
    MR_hl_field(2, LambdaGoalExpr_36, 2) = ((MR_Box) (Args_27));
    MR_hl_field(2, LambdaGoalExpr_36, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, LambdaGoalExpr_36, 4) = ((MR_Box) (Var_61));
    MR_hl_field(2, LambdaGoalExpr_36, 5) = ((MR_Box) (QualifiedPName_32));
  }
  NonLocals0_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_22);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaVars_26, NonLocals0_37, &OutsideVars_38);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Args_27, &InsideVars_39);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_38, InsideVars_39, &NonLocals_40);
  GoalId_41 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_22);
  hlds__instmap__instmap_delta_init_unreachable_1_p_0(&DummyInstMapDelta_42);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_40, DummyInstMapDelta_42, (MR_Integer) 6, Purity_15, Context_23, &LambdaGoalInfo0_44);
  hlds__hlds_goal__goal_info_set_goal_id_3_p_0(GoalId_41, LambdaGoalInfo0_44, &LambdaGoalInfo_45);
  {
    LambdaGoal_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaGoal_46, 0) = ((MR_Box) (LambdaGoalExpr_36));
    MR_hl_field(0, LambdaGoal_46, 1) = ((MR_Box) (LambdaGoalInfo_45));
  }
  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_29, &MaybeDet_64);
  if ((MaybeDet_64 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Specs_53;
    MR_Word PredOrFunc_71;
    MR_String PredOrFuncStr_72;
    MR_Word PredModuleName_73;
    MR_String PredName_74;
    MR_Word PredSymName_75;
    MR_Word Pieces_76;
    MR_Word Spec_77;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;

    hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_28, &PredOrFunc_71);
    PredOrFuncStr_72 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_71);
    hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_28, &PredModuleName_73);
    hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_28, &PredName_74);
    {
      PredSymName_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PredSymName_75, 0) = ((MR_Box) (PredModuleName_73));
      MR_hl_field(1, PredSymName_75, 1) = ((MR_Box) (PredName_74));
    }
    {
      Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_82, 1) = ((MR_Box) (PredOrFuncStr_72));
    }
    {
      Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_84, 1) = ((MR_Box) (PredSymName_75));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__polymorphism_lambda_scalar_common_1[8])));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_83));
    }
    {
      Pieces_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_76, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__polymorphism_lambda_scalar_common_1[1])));
      MR_hl_field(1, Pieces_76, 1) = ((MR_Box) (Var_81));
    }
    {
      Spec_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_77, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.polymorphism_lambda.lambda_modes_and_det\'/5"));
      MR_hl_field(0, Spec_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_77, 2) = ((MR_Box) ((MR_Unsigned) 60U));
      MR_hl_field(0, Spec_77, 3) = ((MR_Box) (Context_23));
      MR_hl_field(0, Spec_77, 4) = ((MR_Box) (Pieces_76));
    }
    {
      Specs_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Specs_53, 0) = ((MR_Box) (Spec_77));
      MR_hl_field(1, Specs_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRHS_24 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_53));
    }
  }
  else
  {
    MR_Word LambdaVarsModes_48;
    MR_Word LambdaDet_49 = ((MR_Word) ((MR_hl_field(1, MaybeDet_64, (MR_Integer) 0))));
    MR_Word PredOrFunc_50;
    MR_Word RHS_52;
    MR_Word ArgModes_66;
    MR_Integer NumArgModes_67;
    MR_Integer NumLambdaVars_68;
    MR_Word LambdaModes_69;
    MR_Integer Var_78;

    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_29, &ArgModes_66);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_66, &NumArgModes_67);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_lambda_scalar_common_1[0]), LambdaVars_26, &NumLambdaVars_68);
    Var_78 = (MR_Integer) ((MR_Unsigned) NumArgModes_67 - (MR_Unsigned) NumLambdaVars_68);
    mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_78, ArgModes_66, &LambdaModes_69);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__polymorphism_lambda_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), LambdaVars_26, LambdaModes_69, &LambdaVarsModes_48);
    PredOrFunc_50 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_28);
    {
      RHS_52 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, RHS_52, 0) = (MR_Box) (((((MR_Unsigned) (Purity_15) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (PredOrFunc_50)))));
      MR_hl_field(2, RHS_52, 1) = ((MR_Box) (ArgVars0_19));
      MR_hl_field(2, RHS_52, 2) = ((MR_Box) (LambdaVarsModes_48));
      MR_hl_field(2, RHS_52, 3) = (MR_Box) ((MR_Unsigned) (LambdaDet_49));
      MR_hl_field(2, RHS_52, 4) = ((MR_Box) (LambdaGoal_46));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeRHS_24 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (RHS_52));
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
    MR_Word Type_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Types_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Word Vars_14;
    MR_Word IsDummy_16;
    MR_Word Entry_17;
    MR_Word STATE_VARIABLE_VarTable_21_21;

    IsDummy_16 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, Type_11);
    {
      Entry_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_17, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(0, Entry_17, 1) = ((MR_Box) (Type_11));
      MR_hl_field(0, Entry_17, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_16));
    }
    parse_tree__var_table__add_var_entry_4_p_0(Entry_17, &Var_13, STATE_VARIABLE_VarTable_0_4, &STATE_VARIABLE_VarTable_21_21);
    check_hlds__polymorphism_lambda__create_fresh_vars_5_p_0(ModuleInfo_1, Types_12, &Vars_14, STATE_VARIABLE_VarTable_21_21, STATE_VARIABLE_VarTable_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vars_14));
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
