/*
** Automatically generated from `simplify_goal_unify.m'
** by the Mercury compiler,
** version rotd-2019-08-12
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
#include "check_hlds.polymorphism.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_unify__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_unify__IntroducedFrom__pred__make_type_info_vars__331__1_2_p_0(
  MR_Word PolySpecs_19,
  MR_Word HeadVar__2_39);

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
  MR_Word STATE_VARIABLE_Common_0_51,
  MR_Word * STATE_VARIABLE_Common_52,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54);

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(
  MR_Word TypeInfoVar_9,
  MR_Word XVar_10,
  MR_Word YVar_11,
  MR_Word ModuleInfo_12,
  MR_Word GoalInfo_15,
  MR_Word * Call_16);

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__get_type_info_locn_7_p_0(
  MR_Word TypeVar_8,
  MR_Word Kind_9,
  MR_Word Context_10,
  MR_Word * TypeInfoVar_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(
  MR_Word Types_6,
  MR_Word * TypeInfoVars_7,
  MR_Word * TypeInfoGoals_8,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__call_builtin_compound_eq_5_p_0(
  MR_Word XVar_6,
  MR_Word YVar_7,
  MR_Word ModuleInfo_8,
  MR_Word GoalInfo_9,
  MR_Word * Call_10);

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


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_2[1][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_3[1][1];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_unify__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_unify__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_unify__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_unify__IntroducedFrom__pred__make_type_info_vars__331__1_2_p_0(
  MR_Word PolySpecs_19,
  MR_Word HeadVar__2_39)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_unify_scalar_common_1[1]), ((MR_Box) (PolySpecs_19)), ((MR_Box) (HeadVar__2_39)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_unify__simplify_goal_unify_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word NestedContext0_15,
  MR_Word InstMap0_16,
  MR_Word STATE_VARIABLE_Common_0_61,
  MR_Word * STATE_VARIABLE_Common_62,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64)
{
  {
    MR_bool succeeded;
    MR_Word LHSVar0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 0))));
    MR_Word RHS0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 1))));
    MR_Word UnifyMode_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 2))));
    MR_Word Unification0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 3))));
    MR_Word UnifyContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 4))));

    switch (MR_tag((MR_Word) RHS0_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_82_82;
          MR_Word Var_81;

          succeeded = ((MR_tag((MR_Word) RHS0_20)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS0_20, (MR_Integer) 0))));
            TypeInfo_82_82 = (MR_Word) (&check_hlds__simplify__simplify_goal_unify_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_82_82, ((MR_Box) (LHSVar0_19)), ((MR_Box) (Var_81)));
          }
          if (succeeded)
          {
            MR_Word Var_65;
            MR_Word Context_78;

            Context_78 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
            Var_65 = hlds__make_goal__true_goal_with_context_1_f_0(Context_78);
            *GoalExpr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 0))));
            *GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 1))));
            *STATE_VARIABLE_Info_64 = STATE_VARIABLE_Info_0_63;
            *STATE_VARIABLE_Common_62 = STATE_VARIABLE_Common_0_61;
          }
          else
          {
            MR_Word ComplMode_51;
            MR_Word CanFail_52;

            succeeded = ((((MR_tag((MR_Word) Unification0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification0_22, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              ComplMode_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification0_22, (MR_Integer) 1))));
              CanFail_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Unification0_22, (MR_Integer) 2))) & (MR_Integer) 1);
              if (((MR_tag((MR_Word) RHS0_20)) == (MR_Integer) 1))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_unify.simplify_goal_unify\'/10", (MR_String) "invalid RHS for complicated unify");
                  return;
                }
              }
              else
              {
                MR_Word V_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS0_20, (MR_Integer) 0))));
                MR_Word GoalExpr1_55;

                check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_14_p_0(LHSVar0_19, V_54, ComplMode_51, CanFail_52, UnifyContext_23, GoalInfo0_13, &GoalExpr1_55, NestedContext0_15, InstMap0_16, STATE_VARIABLE_Common_0_61, STATE_VARIABLE_Common_62, STATE_VARIABLE_Info_0_63, STATE_VARIABLE_Info_64);
                *GoalExpr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalExpr1_55, (MR_Integer) 0))));
                *GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalExpr1_55, (MR_Integer) 1))));
              }
            }
            else
            {
              succeeded = check_hlds__simplify__simplify_info__simplify_do_common_struct_1_p_0(STATE_VARIABLE_Info_0_63);
              if (succeeded)
                check_hlds__simplify__common__common_optimise_unification_10_p_0(Unification0_22, UnifyMode_21, GoalExpr0_11, GoalExpr_12, GoalInfo0_13, GoalInfo_14, STATE_VARIABLE_Common_0_61, STATE_VARIABLE_Common_62, STATE_VARIABLE_Info_0_63, STATE_VARIABLE_Info_64);
              else
              {
                succeeded = check_hlds__simplify__simplify_info__simplify_do_opt_duplicate_calls_1_p_0(STATE_VARIABLE_Info_0_63);
                if (!(succeeded))
                  succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(STATE_VARIABLE_Info_0_63);
                if (succeeded)
                {
                  MR_Word _GoalExpr1_59;
                  MR_Word _GoalInfo1_60;

                  check_hlds__simplify__common__common_optimise_unification_10_p_0(Unification0_22, UnifyMode_21, GoalExpr0_11, &_GoalExpr1_59, GoalInfo0_13, &_GoalInfo1_60, STATE_VARIABLE_Common_0_61, STATE_VARIABLE_Common_62, STATE_VARIABLE_Info_0_63, STATE_VARIABLE_Info_64);
                  *GoalExpr_12 = GoalExpr0_11;
                  *GoalInfo_14 = GoalInfo0_13;
                }
                else
                {
                  *GoalExpr_12 = GoalExpr0_11;
                  *GoalInfo_14 = GoalInfo0_13;
                  *STATE_VARIABLE_Info_64 = STATE_VARIABLE_Info_0_63;
                  *STATE_VARIABLE_Common_62 = STATE_VARIABLE_Common_0_61;
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word NonLocals_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_20, (MR_Integer) 2))));
          MR_Word Vars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_20, (MR_Integer) 3))));
          MR_Word Modes_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_20, (MR_Integer) 4))));
          MR_Word LambdaDeclaredDetism_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_20, (MR_Integer) 5))) & (MR_Integer) 7);
          MR_Word LambdaGoal0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_20, (MR_Integer) 6))));
          MR_Word LambdaCodeModel_33;
          MR_Word LambdaProcIsModelNon_34;
          MR_Word InsideDuplForSwitch_36;
          MR_Unsigned NumEnclosingBarriers_38;
          MR_Unsigned LambdaNumEnclosingBarriers_39;
          MR_Word LambdaNestedContext_40;
          MR_Word ModuleInfo_41;
          MR_Word LambdaInstMap0_42;
          MR_Word LambdaCommon0_43;
          MR_Word LambdaGoal_44;
          MR_Word RHS_46;
          MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_20, (MR_Integer) 0)));
          MR_Word Var_45;

          hlds__code_model__determinism_to_code_model_2_p_0(LambdaDeclaredDetism_31, &LambdaCodeModel_33);
          switch (LambdaCodeModel_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              LambdaProcIsModelNon_34 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 2:
              {
                MR_Word Context_35;
                MR_Word Var_74;

                Context_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
                {
                  Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Context_35));
                }
                {
                  LambdaProcIsModelNon_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), LambdaProcIsModelNon_34, 0) = ((MR_Box) (Var_74));
                }
              }
              break;
          }
          InsideDuplForSwitch_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), NestedContext0_15, (MR_Integer) 0))) & (MR_Integer) 1);
          NumEnclosingBarriers_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), NestedContext0_15, (MR_Integer) 2))));
          succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_13, (MR_Integer) 28);
          if (succeeded)
            LambdaNumEnclosingBarriers_39 = NumEnclosingBarriers_38;
          else
          {
            LambdaNumEnclosingBarriers_39 = (NumEnclosingBarriers_38 + (MR_Unsigned) 1U);
          }
          {
            LambdaNestedContext_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LambdaNestedContext_40, 0) = (MR_Box) ((MR_Unsigned) (InsideDuplForSwitch_36));
            MR_hl_field(MR_mktag(0), LambdaNestedContext_40, 1) = ((MR_Box) (LambdaProcIsModelNon_34));
            MR_hl_field(MR_mktag(0), LambdaNestedContext_40, 2) = ((MR_Box) (LambdaNumEnclosingBarriers_39));
          }
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_63, &ModuleInfo_41);
          hlds__instmap__pre_lambda_update_5_p_0(ModuleInfo_41, Vars_29, Modes_30, InstMap0_16, &LambdaInstMap0_42);
          LambdaCommon0_43 = check_hlds__simplify__common__common_info_init_0_f_0();
          check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(LambdaGoal0_32, &LambdaGoal_44, LambdaNestedContext_40, LambdaInstMap0_42, LambdaCommon0_43, &Var_45, STATE_VARIABLE_Info_0_63, STATE_VARIABLE_Info_64);
          {
            RHS_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), RHS_46, 0) = (MR_Box) (packed_word_1);
            MR_hl_field(MR_mktag(2), RHS_46, 1) = NULL;
            MR_hl_field(MR_mktag(2), RHS_46, 2) = ((MR_Box) (NonLocals_28));
            MR_hl_field(MR_mktag(2), RHS_46, 3) = ((MR_Box) (Vars_29));
            MR_hl_field(MR_mktag(2), RHS_46, 4) = ((MR_Box) (Modes_30));
            MR_hl_field(MR_mktag(2), RHS_46, 5) = (MR_Box) ((MR_Unsigned) (LambdaDeclaredDetism_31));
            MR_hl_field(MR_mktag(2), RHS_46, 6) = ((MR_Box) (LambdaGoal_44));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHSVar0_19));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_46));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_21));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification0_22));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_23));
          }
          *GoalInfo_14 = GoalInfo0_13;
          *STATE_VARIABLE_Common_62 = STATE_VARIABLE_Common_0_61;
        }
        break;
    }
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
  MR_Word STATE_VARIABLE_Common_0_51,
  MR_Word * STATE_VARIABLE_Common_52,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_27;
    MR_Word VarTypes_28;
    MR_Word Type_29;
    MR_Word ExtraGoals_34;
    MR_Word Call_35;
    MR_Word Conjuncts_50;
    MR_Word Var_82;
    MR_Word TypeVar_30;
    MR_Word Kind_31;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_53, &ModuleInfo_27);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_53, &VarTypes_28);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_28, XVar_15, &Type_29);
    succeeded = ((MR_tag((MR_Word) Type_29)) == (MR_Integer) 0);
    if (succeeded)
    {
      TypeVar_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_29, (MR_Integer) 0))));
      Kind_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_29, (MR_Integer) 1))));
      {
        MR_Word Context_32;
        MR_Word TypeInfoVar_33;

        Context_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_21);
        check_hlds__simplify__simplify_goal_unify__get_type_info_locn_7_p_0(TypeVar_30, Kind_31, Context_32, &TypeInfoVar_33, &ExtraGoals_34, STATE_VARIABLE_Info_0_53, STATE_VARIABLE_Info_54);
        check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(TypeInfoVar_33, XVar_15, YVar_16, ModuleInfo_27, GoalInfo0_21, &Call_35);
        *STATE_VARIABLE_Common_52 = STATE_VARIABLE_Common_0_51;
      }
    }
    else
    {
      succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(Type_29);
      if (succeeded)
      {
        MR_Word Call0_36;
        MR_Word Call1_38;
        MR_Word GoalInfo_39;
        MR_Word Var_56;
        MR_Word Var_62;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_67;
        MR_Word Context_84;

        Context_84 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_21);
        Var_56 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (YVar_16));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (XVar_15));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_67));
        }
        Var_64 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_27, Var_56, (MR_String) "builtin_unify_pred", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_unify_scalar_common_3[0])), (MR_Integer) 1, (MR_Integer) 0, Var_62, (MR_Word) ((MR_Unsigned) 0U), Var_64, Context_84, &Var_65);
        Call0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 0))));
        check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(Call0_36, &Call1_38, GoalInfo0_21, &GoalInfo_39, NestedContext0_23, InstMap0_24, STATE_VARIABLE_Common_0_51, STATE_VARIABLE_Common_52, STATE_VARIABLE_Info_0_53, STATE_VARIABLE_Info_54);
        {
          Call_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Call_35, 0) = ((MR_Box) (Call1_38));
          MR_hl_field(MR_mktag(0), Call_35, 1) = ((MR_Box) (GoalInfo_39));
        }
        ExtraGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word TypeCtor_40;
        MR_Word TypeArgs_41;
        MR_Word Detism_42;
        MR_Integer ProcId_43;
        MR_Word Globals_44;
        MR_Word CanCompareCompoundValues_45;
        MR_Integer Var_101;

        parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_29, &TypeCtor_40, &TypeArgs_41);
        parse_tree__prog_data__determinism_components_3_p_1(&Detism_42, CanFail_18, (MR_Integer) 1);
        check_hlds__proc_requests__lookup_mode_num_5_p_0(ModuleInfo_27, TypeCtor_40, UnifyMode_17, Detism_42, &ProcId_43);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_27, &Globals_44);
        libs__globals__lookup_bool_option_3_p_0(Globals_44, (MR_Integer) 296, &CanCompareCompoundValues_45);
        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_101);
        succeeded = (ProcId_43 == Var_101);
        if (succeeded)
        {
          succeeded = (CanCompareCompoundValues_45 == (MR_Integer) 1);
          if (succeeded)
            succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(ModuleInfo_27, Type_29);
        }
        if (succeeded)
        {
          ExtraGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
          check_hlds__simplify__simplify_goal_unify__call_builtin_compound_eq_5_p_0(XVar_15, YVar_16, ModuleInfo_27, GoalInfo0_21, &Call_35);
          *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_0_53;
          *STATE_VARIABLE_Common_52 = STATE_VARIABLE_Common_0_51;
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
            MR_Word TypeInfoVars_46;
            MR_Word Var_73;
            MR_Word TypeInfoVar_85;
            MR_Word TypeInfoVarPrime_47;
            MR_Word Var_76;

            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Type_29));
              MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(Var_73, &TypeInfoVars_46, &ExtraGoals_34, STATE_VARIABLE_Info_0_53, STATE_VARIABLE_Info_54);
            succeeded = (TypeInfoVars_46 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TypeInfoVarPrime_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeInfoVars_46, (MR_Integer) 0))));
              Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeInfoVars_46, (MR_Integer) 1))));
              succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
              TypeInfoVar_85 = TypeInfoVarPrime_47;
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_unify.process_compl_unify\'/14", (MR_String) "more than one typeinfo for one type var");
                return;
              }
            }
            check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(TypeInfoVar_85, XVar_15, YVar_16, ModuleInfo_27, GoalInfo0_21, &Call_35);
            *STATE_VARIABLE_Common_52 = STATE_VARIABLE_Common_0_51;
          }
          else
          {
            MR_Word CallGoalInfo0_48;
            MR_Word CallGoalInfo1_49;
            MR_Word STATE_VARIABLE_Info_79_79;
            MR_Word Call0_86;
            MR_Word Call1_87;
            MR_Word TypeInfoVars_88;

            check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(TypeArgs_41, &TypeInfoVars_88, &ExtraGoals_34, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_79_79);
            check_hlds__simplify__simplify_goal_unify__call_specific_unify_10_p_0(TypeCtor_40, TypeInfoVars_88, XVar_15, YVar_16, ProcId_43, ModuleInfo_27, UnifyContext_20, GoalInfo0_21, &Call0_86, &CallGoalInfo0_48);
            check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(Call0_86, &Call1_87, CallGoalInfo0_48, &CallGoalInfo1_49, NestedContext0_23, InstMap0_24, STATE_VARIABLE_Common_0_51, STATE_VARIABLE_Common_52, STATE_VARIABLE_Info_79_79, STATE_VARIABLE_Info_54);
            {
              Call_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Call_35, 0) = ((MR_Box) (Call1_87));
              MR_hl_field(MR_mktag(0), Call_35, 1) = ((MR_Box) (CallGoalInfo1_49));
            }
          }
        }
      }
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Call_35));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Conjuncts_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_34, Var_82);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Conjuncts_50, GoalInfo0_21, Goal_22);
  }
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
  {
    MR_Word ArgVars_17;
    MR_Word Context_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_29;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (YVar_11));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (XVar_10));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
    }
    {
      ArgVars_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_17, 0) = ((MR_Box) (TypeInfoVar_9));
      MR_hl_field(MR_mktag(1), ArgVars_17, 1) = ((MR_Box) (Var_19));
    }
    Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
    Var_22 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    Var_29 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_12, Var_22, (MR_String) "unify", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_unify_scalar_common_3[0])), (MR_Integer) 1, (MR_Integer) 0, ArgVars_17, (MR_Word) ((MR_Unsigned) 0U), Var_29, Context_18, Call_16);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__get_type_info_locn_7_p_0(
  MR_Word TypeVar_8,
  MR_Word Kind_9,
  MR_Word Context_10,
  MR_Word * TypeInfoVar_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_Word RttiVarMaps_14;
    MR_Word TypeInfoLocn_15;

    check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_18, &RttiVarMaps_14);
    hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_14, TypeVar_8, &TypeInfoLocn_15);
    if (((MR_tag((MR_Word) TypeInfoLocn_15)) == (MR_Integer) 0))
    {
      *TypeInfoVar_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeInfoLocn_15, (MR_Integer) 0))));
      *Goals_12 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
    }
    else
    {
      MR_Word TypeClassInfoVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeInfoLocn_15, (MR_Integer) 0))));
      MR_Integer Index_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TypeInfoLocn_15, (MR_Integer) 1))));
      MR_Word ModuleInfo_31;
      MR_Word VarSet0_32;
      MR_Word VarTypes0_33;
      MR_Word RttiVarMaps0_34;
      MR_Word VarSet_35;
      MR_Word VarTypes_36;
      MR_Word RttiVarMaps_37;
      MR_Word Var_38;
      MR_Word STATE_VARIABLE_Info_28_39;
      MR_Word STATE_VARIABLE_Info_29_40;

      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_18, &ModuleInfo_31);
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_18, &VarSet0_32);
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_18, &VarTypes0_33);
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_18, &RttiVarMaps0_34);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Index_17));
      }
      check_hlds__polymorphism__gen_extract_type_info_14_p_0(ModuleInfo_31, TypeVar_8, Kind_9, TypeClassInfoVar_16, Var_38, Context_10, Goals_12, TypeInfoVar_11, VarSet0_32, &VarSet_35, VarTypes0_33, &VarTypes_36, RttiVarMaps0_34, &RttiVarMaps_37);
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(VarTypes_36, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_28_39);
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(VarSet_35, STATE_VARIABLE_Info_28_39, &STATE_VARIABLE_Info_29_40);
      check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(RttiVarMaps_37, STATE_VARIABLE_Info_29_40, STATE_VARIABLE_Info_19);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__simplify__simplify_goal_unify__IntroducedFrom__pred__make_type_info_vars__331__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(
  MR_Word Types_6,
  MR_Word * TypeInfoVars_7,
  MR_Word * TypeInfoGoals_8,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  {
    MR_bool succeeded;
    MR_Word VarSet0_10;
    MR_Word VarTypes0_11;
    MR_Word RttiVarMaps0_12;
    MR_Word ModuleInfo0_13;
    MR_Word PredProcId_14;
    MR_Word Context_18;
    MR_Word PolySpecs_19;
    MR_Word ModuleInfo1_20;
    MR_Word VarTypes_21;
    MR_Word VarSet_22;
    MR_Word RttiVarMaps_23;
    MR_Word ModuleInfo_24;
    MR_Word STATE_VARIABLE_PredInfo_27_27;
    MR_Word STATE_VARIABLE_ProcInfo_28_28;
    MR_Word STATE_VARIABLE_ProcInfo_29_29;
    MR_Word STATE_VARIABLE_ProcInfo_30_30;
    MR_Word STATE_VARIABLE_ProcInfo_31_31;
    MR_Word STATE_VARIABLE_PolyInfo_32_32;
    MR_Word STATE_VARIABLE_PolyInfo_33_33;
    MR_Word STATE_VARIABLE_PredInfo_34_34;
    MR_Word STATE_VARIABLE_ProcInfo_35_35;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word STATE_VARIABLE_Info_41_41;
    MR_Word STATE_VARIABLE_Info_42_42;

    check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_25, &VarSet0_10);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_25, &VarTypes0_11);
    check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_25, &RttiVarMaps0_12);
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_25, &ModuleInfo0_13);
    check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_25, &PredProcId_14);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo0_13, PredProcId_14, &STATE_VARIABLE_PredInfo_27_27, &STATE_VARIABLE_ProcInfo_28_28);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes0_11, STATE_VARIABLE_ProcInfo_28_28, &STATE_VARIABLE_ProcInfo_29_29);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet0_10, STATE_VARIABLE_ProcInfo_29_29, &STATE_VARIABLE_ProcInfo_30_30);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps0_12, STATE_VARIABLE_ProcInfo_30_30, &STATE_VARIABLE_ProcInfo_31_31);
    check_hlds__polymorphism__create_poly_info_4_p_0(ModuleInfo0_13, STATE_VARIABLE_PredInfo_27_27, STATE_VARIABLE_ProcInfo_31_31, &STATE_VARIABLE_PolyInfo_32_32);
    mercury__term__context_init_1_p_0(&Context_18);
    check_hlds__polymorphism__polymorphism_make_type_info_vars_6_p_0(Types_6, Context_18, TypeInfoVars_7, TypeInfoGoals_8, STATE_VARIABLE_PolyInfo_32_32, &STATE_VARIABLE_PolyInfo_33_33);
    check_hlds__polymorphism__poly_info_extract_7_p_0(STATE_VARIABLE_PolyInfo_33_33, &PolySpecs_19, STATE_VARIABLE_PredInfo_27_27, &STATE_VARIABLE_PredInfo_34_34, STATE_VARIABLE_ProcInfo_31_31, &STATE_VARIABLE_ProcInfo_35_35, &ModuleInfo1_20);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_unify_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (PolySpecs_19));
      MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_36, (MR_String) "predicate \140check_hlds.simplify.simplify_goal_unify.make_type_info_vars\'/5", (MR_String) "got errors while making type_info_var");
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_35_35, &VarTypes_21);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_35_35, &VarSet_22);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_35_35, &RttiVarMaps_23);
    check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(VarTypes_21, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_40_40);
    check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(VarSet_22, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_41_41);
    check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(RttiVarMaps_23, STATE_VARIABLE_Info_41_41, &STATE_VARIABLE_Info_42_42);
    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PredProcId_14, STATE_VARIABLE_PredInfo_34_34, STATE_VARIABLE_ProcInfo_35_35, ModuleInfo1_20, &ModuleInfo_24);
    check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo_24, STATE_VARIABLE_Info_42_42, STATE_VARIABLE_Info_26);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__call_builtin_compound_eq_5_p_0(
  MR_Word XVar_6,
  MR_Word YVar_7,
  MR_Word ModuleInfo_8,
  MR_Word GoalInfo_9,
  MR_Word * Call_10)
{
  {
    MR_Word Context_11;
    MR_Word Var_12;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_21;

    Context_11 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
    Var_12 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (YVar_7));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (XVar_6));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    Var_20 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_8, Var_12, (MR_String) "builtin_compound_eq", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 0, Var_18, (MR_Word) ((MR_Unsigned) 0U), Var_20, Context_11, Call_10);
  }
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
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (YVar_14));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (XVar_13));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
    }
    ArgVars_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_unify_scalar_common_1[0]), TypeInfoVars_12, Var_32);
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_16, &SpecialPredMaps_22);
    UnifyMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecialPredMaps_22, (MR_Integer) 0))));
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UnifyMap_23, ((MR_Box) (TypeCtor_11)), &conv0_PredId_24);
    PredId_24 = ((MR_Word) (conv0_PredId_24));
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_16, PredId_24, &PredInfo_25);
    ModuleName_26 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_25);
    PredName_27 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_25);
    {
      SymName_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_28, 0) = ((MR_Box) (ModuleName_26));
      MR_hl_field(MR_mktag(1), SymName_28, 1) = ((MR_Box) (PredName_27));
    }
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (YVar_14));
    }
    {
      CallContext_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CallContext_29, 0) = ((MR_Box) (XVar_13));
      MR_hl_field(MR_mktag(0), CallContext_29, 1) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), CallContext_29, 2) = ((MR_Box) (Context_17));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (CallContext_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *CallExpr_19 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PredId_24));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ProcId_15));
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ArgVars_21));
      MR_hl_field(MR_mktag(2), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (SymName_28));
    }
    NonLocals0_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_18);
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_12, NonLocals0_30, &NonLocals_31);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_31, GoalInfo0_18, CallGoalInfo_20);
  }
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
