/*
** Automatically generated from `simplify_goal_unify.m'
** by the Mercury compiler,
** version rotd-2023-10-12
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


// :- module check_hlds.simplify.simplify_goal_unify.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_goal_unify__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_unify.mih"


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
#include "enum.mih"
#include "hlds.mih"
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
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




static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_14_p_0(
  MR_Word XVar_15,
  MR_Word YVar_16,
  MR_Word UnifyMode_17,
  MR_Word CanFail_18,
  MR_Word UnifyContext_20,
  MR_Word GoalInfo0_21,
  MR_Word * Goal_22,
  MR_Word NestedContext0_23,
  MR_Word InstMap0_24,
  MR_Word STATE_VARIABLE_Common_0_49,
  MR_Word * STATE_VARIABLE_Common_50,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52);

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(
  MR_Word TypeInfoVar_9,
  MR_Word XVar_10,
  MR_Word YVar_11,
  MR_Word ModuleInfo_12,
  MR_Word GoalInfo_15,
  MR_Word * Call_16);

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(
  MR_Word Types_6,
  MR_Word * TypeInfoVars_7,
  MR_Word * TypeInfoGoals_8,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__call_specific_unify_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word TypeInfoVars_12,
  MR_Word XVar_13,
  MR_Word YVar_14,
  MR_Integer ProcId_15,
  MR_Word ModuleInfo_16,
  MR_Word Context_17,
  MR_Word GoalInfo0_18,
  MR_Word * CallExpr_19,
  MR_Word * CallGoalInfo_20);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_1[1][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_2[1][1];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
check_hlds__simplify__simplify_goal_unify__simplify_goal_unify_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word NestedContext0_15,
  MR_Word InstMap0_16,
  MR_Word STATE_VARIABLE_Common_0_60,
  MR_Word * STATE_VARIABLE_Common_61,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
{
  MR_bool succeeded;
  MR_Word LHSVar0_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 0))));
  MR_Word RHS0_20 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 1))));
  MR_Word UnifyMode_21 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 2))));
  MR_Word Unification0_22 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 3))));
  MR_Word UnifyContext_23 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 4))));

  switch (MR_tag((MR_Word) RHS0_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeInfo_77_79;
        MR_Word Var_78;

        succeeded = ((MR_tag((MR_Word) RHS0_20)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_78 = ((MR_Word) ((MR_hl_field(0, RHS0_20, (MR_Integer) 0))));
          TypeInfo_77_79 = (MR_Word) (&check_hlds__simplify__simplify_goal_unify_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_77_79, ((MR_Box) (LHSVar0_19)), ((MR_Box) (Var_78)));
        }
        if (succeeded)
        {
          MR_Word Var_80;
          MR_Word Context_81;

          Context_81 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
          Var_80 = hlds__make_goal__true_goal_with_context_1_f_0(Context_81);
          *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Var_80, (MR_Integer) 0))));
          *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_80, (MR_Integer) 1))));
          *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          *STATE_VARIABLE_Common_61 = STATE_VARIABLE_Common_0_60;
        }
        else
        {
          MR_Word ComplMode_82;
          MR_Word CanFail_83;

          succeeded = ((((MR_tag((MR_Word) Unification0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unification0_22, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            ComplMode_82 = ((MR_Word) ((MR_hl_field(3, Unification0_22, (MR_Integer) 1))));
            CanFail_83 = ((MR_Unsigned) ((MR_hl_field(3, Unification0_22, (MR_Integer) 2))) & (MR_Integer) 1);
            {
              MR_Word V_55 = ((MR_Word) ((MR_hl_field(0, RHS0_20, (MR_Integer) 0))));
              MR_Word GoalExpr1_56;

              check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_14_p_0(LHSVar0_19, V_55, ComplMode_82, CanFail_83, UnifyContext_23, GoalInfo0_13, &GoalExpr1_56, NestedContext0_15, InstMap0_16, STATE_VARIABLE_Common_0_60, STATE_VARIABLE_Common_61, STATE_VARIABLE_Info_0_62, STATE_VARIABLE_Info_63);
              *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, GoalExpr1_56, (MR_Integer) 0))));
              *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, GoalExpr1_56, (MR_Integer) 1))));
            }
          }
          else
            check_hlds__simplify__common__common_optimise_unification_12_p_0(RHS0_20, UnifyMode_21, Unification0_22, UnifyContext_23, GoalExpr0_11, GoalExpr_12, GoalInfo0_13, GoalInfo_14, STATE_VARIABLE_Common_0_60, STATE_VARIABLE_Common_61, STATE_VARIABLE_Info_0_62, STATE_VARIABLE_Info_63);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        succeeded = ((((MR_tag((MR_Word) Unification0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unification0_22, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_unify.simplify_goal_unify\'/10", (MR_String) "invalid RHS for complicated unify");
            return;
          }
        else
          check_hlds__simplify__common__common_optimise_unification_12_p_0(RHS0_20, UnifyMode_21, Unification0_22, UnifyContext_23, GoalExpr0_11, GoalExpr_12, GoalInfo0_13, GoalInfo_14, STATE_VARIABLE_Common_0_60, STATE_VARIABLE_Common_61, STATE_VARIABLE_Info_0_62, STATE_VARIABLE_Info_63);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word NonLocals_28 = ((MR_Word) ((MR_hl_field(2, RHS0_20, (MR_Integer) 2))));
        MR_Word VarsModes_29 = ((MR_Word) ((MR_hl_field(2, RHS0_20, (MR_Integer) 3))));
        MR_Word LambdaDeclaredDetism_30 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_20, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word LambdaGoal0_31 = ((MR_Word) ((MR_hl_field(2, RHS0_20, (MR_Integer) 5))));
        MR_Word LambdaCodeModel_32;
        MR_Word LambdaProcIsModelNon_33;
        MR_Word InsideDuplForSwitch_35;
        MR_Unsigned NumEnclosingBarriers_37;
        MR_Word SwitchArmContexts_38;
        MR_Unsigned LambdaNumEnclosingBarriers_39;
        MR_Word LambdaNestedContext_40;
        MR_Word ModuleInfo_41;
        MR_Word LambdaInstMap0_42;
        MR_Word SimplifyTasks_43;
        MR_Word LambdaCommon0_44;
        MR_Word LambdaGoal_45;
        MR_Word RHS_47;
        MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(2, RHS0_20, (MR_Integer) 0)));
        MR_Word Var_46;

        hlds__code_model__determinism_to_code_model_2_p_0(LambdaDeclaredDetism_30, &LambdaCodeModel_32);
        switch (LambdaCodeModel_32) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            LambdaProcIsModelNon_33 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word Context_34;
              MR_Word Var_64;

              Context_34 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
              {
                Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_64, 0) = ((MR_Box) (Context_34));
              }
              {
                LambdaProcIsModelNon_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, LambdaProcIsModelNon_33, 0) = ((MR_Box) (Var_64));
              }
            }
            break;
        }
        InsideDuplForSwitch_35 = ((MR_Unsigned) ((MR_hl_field(0, NestedContext0_15, (MR_Integer) 0))) & (MR_Integer) 1);
        NumEnclosingBarriers_37 = ((MR_Unsigned) ((MR_hl_field(0, NestedContext0_15, (MR_Integer) 2))));
        SwitchArmContexts_38 = ((MR_Word) ((MR_hl_field(0, NestedContext0_15, (MR_Integer) 3))));
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_13, (MR_Integer) 28);
        if (succeeded)
          LambdaNumEnclosingBarriers_39 = NumEnclosingBarriers_37;
        else
          LambdaNumEnclosingBarriers_39 = (NumEnclosingBarriers_37 + (MR_Unsigned) 1U);
        {
          LambdaNestedContext_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, LambdaNestedContext_40, 0) = (MR_Box) ((MR_Unsigned) (InsideDuplForSwitch_35));
          MR_hl_field(0, LambdaNestedContext_40, 1) = ((MR_Box) (LambdaProcIsModelNon_33));
          MR_hl_field(0, LambdaNestedContext_40, 2) = ((MR_Box) (LambdaNumEnclosingBarriers_39));
          MR_hl_field(0, LambdaNestedContext_40, 3) = ((MR_Box) (SwitchArmContexts_38));
        }
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_62, &ModuleInfo_41);
        hlds__instmap__pre_lambda_update_4_p_0(ModuleInfo_41, VarsModes_29, InstMap0_16, &LambdaInstMap0_42);
        check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(STATE_VARIABLE_Info_0_62, &SimplifyTasks_43);
        LambdaCommon0_44 = check_hlds__simplify__common__common_info_init_1_f_0(SimplifyTasks_43);
        check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(LambdaGoal0_31, &LambdaGoal_45, LambdaNestedContext_40, LambdaInstMap0_42, LambdaCommon0_44, &Var_46, STATE_VARIABLE_Info_0_62, STATE_VARIABLE_Info_63);
        {
          RHS_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, RHS_47, 0) = (MR_Box) (packed_word_2);
          MR_hl_field(2, RHS_47, 1) = NULL;
          MR_hl_field(2, RHS_47, 2) = ((MR_Box) (NonLocals_28));
          MR_hl_field(2, RHS_47, 3) = ((MR_Box) (VarsModes_29));
          MR_hl_field(2, RHS_47, 4) = (MR_Box) ((MR_Unsigned) (LambdaDeclaredDetism_30));
          MR_hl_field(2, RHS_47, 5) = ((MR_Box) (LambdaGoal_45));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LHSVar0_19));
          MR_hl_field(1, base, 1) = ((MR_Box) (RHS_47));
          MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_21));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unification0_22));
          MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_23));
        }
        *GoalInfo_14 = GoalInfo0_13;
        *STATE_VARIABLE_Common_61 = STATE_VARIABLE_Common_0_60;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_14_p_0(
  MR_Word XVar_15,
  MR_Word YVar_16,
  MR_Word UnifyMode_17,
  MR_Word CanFail_18,
  MR_Word UnifyContext_20,
  MR_Word GoalInfo0_21,
  MR_Word * Goal_22,
  MR_Word NestedContext0_23,
  MR_Word InstMap0_24,
  MR_Word STATE_VARIABLE_Common_0_49,
  MR_Word * STATE_VARIABLE_Common_50,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_27;
  MR_Word VarTable_28;
  MR_Word Type_29;
  MR_Word ExtraGoals_34;
  MR_Word Call_35;
  MR_Word Conjuncts_48;
  MR_Word Var_92;
  MR_Word TypeVar_30;
  MR_Word Kind_31;

  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_51, &ModuleInfo_27);
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_51, &VarTable_28);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_28, XVar_15, &Type_29);
  succeeded = ((MR_tag((MR_Word) Type_29)) == (MR_Integer) 0);
  if (succeeded)
  {
    TypeVar_30 = ((MR_Word) ((MR_hl_field(0, Type_29, (MR_Integer) 0))));
    Kind_31 = ((MR_Word) ((MR_hl_field(0, Type_29, (MR_Integer) 1))));
    {
      MR_Word Context_32;
      MR_Word TypeInfoVar_33;
      MR_Word RttiVarMaps_105;
      MR_Word TypeInfoLocn_106;

      Context_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_21);
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_51, &RttiVarMaps_105);
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_105, TypeVar_30, &TypeInfoLocn_106);
      if (((MR_tag((MR_Word) TypeInfoLocn_106)) == (MR_Integer) 0))
      {
        TypeInfoVar_33 = ((MR_Word) ((MR_hl_field(0, TypeInfoLocn_106, (MR_Integer) 0))));
        ExtraGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_0_51;
      }
      else
      {
        MR_Word TypeClassInfoVar_107 = ((MR_Word) ((MR_hl_field(1, TypeInfoLocn_106, (MR_Integer) 0))));
        MR_Integer Index_108 = ((MR_Integer) ((MR_hl_field(1, TypeInfoLocn_106, (MR_Integer) 1))));
        MR_Word ModuleInfo_109;
        MR_Word VarTable0_110;
        MR_Word RttiVarMaps0_111;
        MR_Word VarTable_112;
        MR_Word RttiVarMaps_113;
        MR_Word Var_114;
        MR_Word STATE_VARIABLE_Info_26_115;

        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_51, &ModuleInfo_109);
        check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_51, &VarTable0_110);
        check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_51, &RttiVarMaps0_111);
        {
          Var_114 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_114, 0) = ((MR_Box) (Index_108));
        }
        check_hlds__polymorphism_type_info__gen_extract_type_info_12_p_0(ModuleInfo_109, TypeVar_30, Kind_31, TypeClassInfoVar_107, Var_114, Context_32, &ExtraGoals_34, &TypeInfoVar_33, VarTable0_110, &VarTable_112, RttiVarMaps0_111, &RttiVarMaps_113);
        check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_112, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_26_115);
        check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(RttiVarMaps_113, STATE_VARIABLE_Info_26_115, STATE_VARIABLE_Info_52);
      }
      check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(TypeInfoVar_33, XVar_15, YVar_16, ModuleInfo_27, GoalInfo0_21, &Call_35);
      *STATE_VARIABLE_Common_50 = STATE_VARIABLE_Common_0_49;
    }
  }
  else
  {
    succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(Type_29);
    if (succeeded)
    {
      MR_Word Call0_36;
      MR_Word Call1_38;
      MR_Word GoalInfo_39;
      MR_Word Var_55;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Context_94;

      Context_94 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_21);
      Var_55 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (YVar_16));
        MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (XVar_15));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_65));
      }
      Var_59 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
      hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_27, (MR_Integer) 0, Var_55, (MR_String) "builtin_unify_pred", (MR_Word) ((MR_Unsigned) 0U), Var_58, Var_59, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_unify_scalar_common_2[0])), (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_94, &Var_64);
      Call0_36 = ((MR_Word) ((MR_hl_field(0, Var_64, (MR_Integer) 0))));
      check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(Call0_36, &Call1_38, GoalInfo0_21, &GoalInfo_39, NestedContext0_23, InstMap0_24, STATE_VARIABLE_Common_0_49, STATE_VARIABLE_Common_50, STATE_VARIABLE_Info_0_51, STATE_VARIABLE_Info_52);
      {
        Call_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Call_35, 0) = ((MR_Box) (Call1_38));
        MR_hl_field(0, Call_35, 1) = ((MR_Box) (GoalInfo_39));
      }
      ExtraGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word TypeCtor_40;
      MR_Word TypeArgs_41;
      MR_Word Detism_42;
      MR_Integer ProcId_43;
      MR_Integer Var_101;

      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_29, &TypeCtor_40, &TypeArgs_41);
      parse_tree__prog_data__determinism_components_3_p_1(&Detism_42, CanFail_18, (MR_Integer) 1);
      check_hlds__proc_requests__lookup_mode_num_5_p_0(ModuleInfo_27, TypeCtor_40, UnifyMode_17, Detism_42, &ProcId_43);
      succeeded = mercury__builtin__semidet_fail_0_p_0();
      if (succeeded)
      {
        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_101);
        succeeded = (ProcId_43 == Var_101);
        if (succeeded)
          succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(ModuleInfo_27, Type_29);
      }
      if (succeeded)
      {
        MR_Word Var_72;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_81;
        MR_Word Context_95;

        ExtraGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
        Context_95 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_21);
        Var_72 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        {
          Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_81, 0) = ((MR_Box) (YVar_16));
          MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (XVar_15));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_81));
        }
        Var_76 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_27, (MR_Integer) 0, Var_72, (MR_String) "builtin_compound_eq", (MR_Word) ((MR_Unsigned) 0U), Var_75, Var_76, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_95, &Call_35);
        *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_0_51;
        *STATE_VARIABLE_Common_50 = STATE_VARIABLE_Common_0_49;
      }
      else
      {
        MR_Integer Var_102;

        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_102);
        succeeded = (ProcId_43 == Var_102);
        if (succeeded)
          succeeded = hlds__special_pred__special_pred_is_generated_lazily_2_p_0(ModuleInfo_27, TypeCtor_40);
        if (succeeded)
        {
          MR_Word TypeInfoVars_44;
          MR_Word Var_83;
          MR_Word TypeInfoVar_96;
          MR_Word TypeInfoVarPrime_45;
          MR_Word Var_86;

          {
            Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_83, 0) = ((MR_Box) (Type_29));
            MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(Var_83, &TypeInfoVars_44, &ExtraGoals_34, STATE_VARIABLE_Info_0_51, STATE_VARIABLE_Info_52);
          succeeded = (TypeInfoVars_44 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypeInfoVarPrime_45 = ((MR_Word) ((MR_hl_field(1, TypeInfoVars_44, (MR_Integer) 0))));
            Var_86 = ((MR_Word) ((MR_hl_field(1, TypeInfoVars_44, (MR_Integer) 1))));
            succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
            TypeInfoVar_96 = TypeInfoVarPrime_45;
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_unify.process_compl_unify\'/14", (MR_String) "more than one typeinfo for one type var");
              return;
            }
          check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(TypeInfoVar_96, XVar_15, YVar_16, ModuleInfo_27, GoalInfo0_21, &Call_35);
          *STATE_VARIABLE_Common_50 = STATE_VARIABLE_Common_0_49;
        }
        else
        {
          MR_Word CallGoalInfo0_46;
          MR_Word CallGoalInfo1_47;
          MR_Word STATE_VARIABLE_Info_89_89;
          MR_Word Call0_97;
          MR_Word Call1_98;
          MR_Word TypeInfoVars_99;

          check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(TypeArgs_41, &TypeInfoVars_99, &ExtraGoals_34, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_89_89);
          check_hlds__simplify__simplify_goal_unify__call_specific_unify_10_p_0(TypeCtor_40, TypeInfoVars_99, XVar_15, YVar_16, ProcId_43, ModuleInfo_27, UnifyContext_20, GoalInfo0_21, &Call0_97, &CallGoalInfo0_46);
          check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(Call0_97, &Call1_98, CallGoalInfo0_46, &CallGoalInfo1_47, NestedContext0_23, InstMap0_24, STATE_VARIABLE_Common_0_49, STATE_VARIABLE_Common_50, STATE_VARIABLE_Info_89_89, STATE_VARIABLE_Info_52);
          {
            Call_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Call_35, 0) = ((MR_Box) (Call1_98));
            MR_hl_field(0, Call_35, 1) = ((MR_Box) (CallGoalInfo1_47));
          }
        }
      }
    }
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (Call_35));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Conjuncts_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_34, Var_92);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Conjuncts_48, GoalInfo0_21, Goal_22);
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(
  MR_Word TypeInfoVar_9,
  MR_Word XVar_10,
  MR_Word YVar_11,
  MR_Word ModuleInfo_12,
  MR_Word GoalInfo_15,
  MR_Word * Call_16)
{
  MR_Word Context_17;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_29;

  Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
  Var_19 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (TypeInfoVar_9));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (YVar_11));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (XVar_10));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_29));
  }
  Var_23 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_12, (MR_Integer) 0, Var_19, (MR_String) "unify", Var_21, Var_22, Var_23, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_unify_scalar_common_2[0])), (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_17, Call_16);
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(
  MR_Word Types_6,
  MR_Word * TypeInfoVars_7,
  MR_Word * TypeInfoGoals_8,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word VarTable0_10;
  MR_Word RttiVarMaps0_11;
  MR_Word ModuleInfo0_12;
  MR_Word PredProcId_13;
  MR_Word ModuleInfo1_16;
  MR_Word VarTable_17;
  MR_Word RttiVarMaps_18;
  MR_Word ModuleInfo_19;
  MR_Word STATE_VARIABLE_PredInfo_22_22;
  MR_Word STATE_VARIABLE_ProcInfo_23_23;
  MR_Word STATE_VARIABLE_ProcInfo_24_24;
  MR_Word STATE_VARIABLE_ProcInfo_25_25;
  MR_Word Var_26;
  MR_Word STATE_VARIABLE_PredInfo_27_27;
  MR_Word STATE_VARIABLE_ProcInfo_28_28;
  MR_Word STATE_VARIABLE_Info_29_29;
  MR_Word STATE_VARIABLE_Info_30_30;

  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_20, &VarTable0_10);
  check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_20, &RttiVarMaps0_11);
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_20, &ModuleInfo0_12);
  check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_20, &PredProcId_13);
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo0_12, PredProcId_13, &STATE_VARIABLE_PredInfo_22_22, &STATE_VARIABLE_ProcInfo_23_23);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable0_10, STATE_VARIABLE_ProcInfo_23_23, &STATE_VARIABLE_ProcInfo_24_24);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps0_11, STATE_VARIABLE_ProcInfo_24_24, &STATE_VARIABLE_ProcInfo_25_25);
  Var_26 = mercury__term_context__dummy_context_0_f_0();
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_mi_10_p_0(Types_6, Var_26, TypeInfoVars_7, TypeInfoGoals_8, ModuleInfo0_12, &ModuleInfo1_16, STATE_VARIABLE_PredInfo_22_22, &STATE_VARIABLE_PredInfo_27_27, STATE_VARIABLE_ProcInfo_25_25, &STATE_VARIABLE_ProcInfo_28_28);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_28_28, &VarTable_17);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_28_28, &RttiVarMaps_18);
  check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_17, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_29_29);
  check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(RttiVarMaps_18, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_30_30);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PredProcId_13, STATE_VARIABLE_PredInfo_27_27, STATE_VARIABLE_ProcInfo_28_28, ModuleInfo1_16, &ModuleInfo_19);
  check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo_19, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_21);
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__call_specific_unify_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word TypeInfoVars_12,
  MR_Word XVar_13,
  MR_Word YVar_14,
  MR_Integer ProcId_15,
  MR_Word ModuleInfo_16,
  MR_Word Context_17,
  MR_Word GoalInfo0_18,
  MR_Word * CallExpr_19,
  MR_Word * CallGoalInfo_20)
{
  MR_Word ArgVars_21;
  MR_Word SpecialPredMaps_22;
  MR_Word UnifyMap_23;
  MR_Word PredId_24;
  MR_Word PredInfo_25;
  MR_Word ModuleName_26;
  MR_String PredName_27;
  MR_Word SymName_28;
  MR_Word CallContext_29;
  MR_Word NonLocals0_30;
  MR_Word NonLocals_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Box conv0_PredId_24;

  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (YVar_14));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (XVar_13));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_33));
  }
  ArgVars_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_unify_scalar_common_1[0]), TypeInfoVars_12, Var_32);
  hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_16, &SpecialPredMaps_22);
  UnifyMap_23 = ((MR_Word) ((MR_hl_field(0, SpecialPredMaps_22, (MR_Integer) 0))));
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UnifyMap_23, ((MR_Box) (TypeCtor_11)), &conv0_PredId_24);
  PredId_24 = ((MR_Word) (conv0_PredId_24));
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_16, PredId_24, &PredInfo_25);
  ModuleName_26 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_25);
  PredName_27 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_25);
  {
    SymName_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_28, 0) = ((MR_Box) (ModuleName_26));
    MR_hl_field(1, SymName_28, 1) = ((MR_Box) (PredName_27));
  }
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (YVar_14));
  }
  {
    CallContext_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CallContext_29, 0) = ((MR_Box) (XVar_13));
    MR_hl_field(0, CallContext_29, 1) = ((MR_Box) (Var_35));
    MR_hl_field(0, CallContext_29, 2) = ((MR_Box) (Context_17));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (CallContext_29));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *CallExpr_19 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (PredId_24));
    MR_hl_field(2, base, 1) = ((MR_Box) (ProcId_15));
    MR_hl_field(2, base, 2) = ((MR_Box) (ArgVars_21));
    MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, base, 4) = ((MR_Box) (Var_37));
    MR_hl_field(2, base, 5) = ((MR_Box) (SymName_28));
  }
  NonLocals0_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_18);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_12, NonLocals0_30, &NonLocals_31);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_31, GoalInfo0_18, CallGoalInfo_20);
}

void mercury__check_hlds__simplify__simplify_goal_unify__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_unify__init_type_tables(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_unify__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_goal_unify__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_goal_unify.
