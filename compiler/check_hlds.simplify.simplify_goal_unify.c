/*
** Automatically generated from `simplify_goal_unify.m'
** by the Mercury compiler,
** version rotd-2026-01-07
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
#include "getopt.mih"
#include "hlds.mih"
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
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
#include "hlds.hlds_markers.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__enum_functor_desc_cons_id_match_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__enum_functor_desc_cons_id_match_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__enum_ordinal_ordered_cons_id_match_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__enum_name_ordered_cons_id_match_0[2];

static const MR_Integer check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__functor_number_map_cons_id_match_0[2];

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify____Compare____cons_id_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_unify____Unify____cons_id_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_105_99_97_116_101_100_95_117_110_105_102_121_95_95_91_53_93_95_48_14_p_0(
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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_unify__no_cons_id_can_match_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_unify____Unify____cons_id_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify____Compare____cons_id_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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


static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__enum_functor_desc_cons_id_match_0_0 = {
  (MR_String) "cons_id_must_match",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__enum_functor_desc_cons_id_match_0_1 = {
  (MR_String) "cons_id_cannot_match",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__enum_ordinal_ordered_cons_id_match_0[2] = {
  &check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__enum_functor_desc_cons_id_match_0_0,
  &check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__enum_functor_desc_cons_id_match_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__enum_name_ordered_cons_id_match_0[2] = {
  &check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__enum_functor_desc_cons_id_match_0_1,
  &check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__enum_functor_desc_cons_id_match_0_0
};

static const MR_Integer check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__functor_number_map_cons_id_match_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__type_ctor_info_cons_id_match_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_goal_unify____Unify____cons_id_match_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_unify____Compare____cons_id_match_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_unify",
  (MR_String) "cons_id_match",
  { check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__enum_name_ordered_cons_id_match_0 },
  { check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__enum_ordinal_ordered_cons_id_match_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__functor_number_map_cons_id_match_0,

};

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify____Compare____cons_id_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_unify____Unify____cons_id_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
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
  MR_bool succeeded;
  MR_Word LHSVar0_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, 0))));
  MR_Word RHS0_20 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, 1))));
  MR_Word UnifyMode_21 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, 2))));
  MR_Word Unification0_22 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, 3))));
  MR_Word UnifyContext_23 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, 4))));

  switch (MR_tag((MR_Word) RHS0_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RHSVar0_47 = ((MR_Word) ((MR_hl_field(0, RHS0_20, 0))));

        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_unify_scalar_common_1[0]), ((MR_Box) (RHSVar0_47)), ((MR_Box) (LHSVar0_19)));
        if (succeeded)
        {
          MR_Word Var_69;
          MR_Word Context_84;

          Context_84 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
          Var_69 = hlds__make_goal__true_goal_with_context_1_f_0(Context_84);
          *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Var_69, 0))));
          *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_69, 1))));
          *STATE_VARIABLE_Info_64 = STATE_VARIABLE_Info_0_63;
          *STATE_VARIABLE_Common_62 = STATE_VARIABLE_Common_0_61;
        }
        else
        {
          MR_Word ComplMode_48;
          MR_Word CanFail_49;

          succeeded = ((((MR_tag((MR_Word) Unification0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unification0_22, 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            ComplMode_48 = ((MR_Word) ((MR_hl_field(3, Unification0_22, 1))));
            CanFail_49 = ((MR_Unsigned) ((MR_hl_field(3, Unification0_22, 2))) & (MR_Integer) 1);
            {
              MR_Word GoalExpr1_51;

              check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_105_99_97_116_101_100_95_117_110_105_102_121_95_95_91_53_93_95_48_14_p_0(LHSVar0_19, RHSVar0_47, ComplMode_48, CanFail_49, UnifyContext_23, GoalInfo0_13, &GoalExpr1_51, NestedContext0_15, InstMap0_16, STATE_VARIABLE_Common_0_61, STATE_VARIABLE_Common_62, STATE_VARIABLE_Info_0_63, STATE_VARIABLE_Info_64);
              *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, GoalExpr1_51, 0))));
              *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, GoalExpr1_51, 1))));
            }
          }
          else
            check_hlds__simplify__common__common_optimise_unification_12_p_0(RHS0_20, UnifyMode_21, Unification0_22, UnifyContext_23, GoalExpr0_11, GoalExpr_12, GoalInfo0_13, GoalInfo_14, STATE_VARIABLE_Common_0_61, STATE_VARIABLE_Common_62, STATE_VARIABLE_Info_0_63, STATE_VARIABLE_Info_64);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId_52 = ((MR_Word) ((MR_hl_field(1, RHS0_20, 0))));
        MR_Word IsExistConstr_53 = ((MR_Unsigned) ((MR_hl_field(1, RHS0_20, 1))) & (MR_Integer) 1);
        MR_Word RHSArgVars_54 = ((MR_Word) ((MR_hl_field(1, RHS0_20, 2))));
        MR_Word LHSVarInst0_55;
        MR_Word ConsIdMatch_59;
        MR_Word LHSVarBoundFunctors_58;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_88;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_16, LHSVar0_19, &LHSVarInst0_55);
        succeeded = ((MR_tag((MR_Word) LHSVarInst0_55)) == (MR_Integer) 2);
        if (succeeded)
        {
          LHSVarBoundFunctors_58 = ((MR_Word) ((MR_hl_field(2, LHSVarInst0_55, 2))));
          succeeded = (LHSVarBoundFunctors_58 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_74 = ((MR_Word) ((MR_hl_field(1, LHSVarBoundFunctors_58, 0))));
            Var_76 = ((MR_Word) ((MR_hl_field(1, LHSVarBoundFunctors_58, 1))));
            Var_88 = ((MR_Word) ((MR_hl_field(0, Var_74, 0))));
            Var_75 = ((MR_Word) ((MR_hl_field(0, Var_74, 1))));
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_52, Var_88);
            if (succeeded)
            {
              succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  succeeded = (RHSArgVars_54 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
          {
            ConsIdMatch_59 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = check_hlds__simplify__simplify_goal_unify__no_cons_id_can_match_3_p_0(ConsId_52, RHSArgVars_54, LHSVarBoundFunctors_58);
            if (succeeded)
            {
              ConsIdMatch_59 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            succeeded = (IsExistConstr_53 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (RHSArgVars_54 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_dodgy_simple_code_1_p_0(STATE_VARIABLE_Info_0_63);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_Info_4_77;

            check_hlds__simplify__simplify_info__simplify_info_set_rerun_simplify_no_warn_simple_2_p_0(STATE_VARIABLE_Info_0_63, &STATE_VARIABLE_Info_4_77);
            check_hlds__simplify__common__common_optimise_unification_12_p_0(RHS0_20, UnifyMode_21, Unification0_22, UnifyContext_23, GoalExpr0_11, GoalExpr_12, GoalInfo0_13, GoalInfo_14, STATE_VARIABLE_Common_0_61, STATE_VARIABLE_Common_62, STATE_VARIABLE_Info_4_77, STATE_VARIABLE_Info_64);
          }
          else
          {
            MR_Word TrueOrFailGoal_60;
            MR_Word STATE_VARIABLE_Info_6_80;
            MR_Word Context_87;

            Context_87 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
            switch (ConsIdMatch_59) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                TrueOrFailGoal_60 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_87);
                break;
              case (MR_Integer) 0:
                TrueOrFailGoal_60 = hlds__make_goal__true_goal_with_context_1_f_0(Context_87);
                break;
            }
            *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, TrueOrFailGoal_60, 0))));
            *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, TrueOrFailGoal_60, 1))));
            check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_0_63, &STATE_VARIABLE_Info_6_80);
            check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_6_80, STATE_VARIABLE_Info_64);
            *STATE_VARIABLE_Common_62 = STATE_VARIABLE_Common_0_61;
          }
        }
        else
          check_hlds__simplify__common__common_optimise_unification_12_p_0(RHS0_20, UnifyMode_21, Unification0_22, UnifyContext_23, GoalExpr0_11, GoalExpr_12, GoalInfo0_13, GoalInfo_14, STATE_VARIABLE_Common_0_61, STATE_VARIABLE_Common_62, STATE_VARIABLE_Info_0_63, STATE_VARIABLE_Info_64);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word NonLocals_27 = ((MR_Word) ((MR_hl_field(2, RHS0_20, 1))));
        MR_Word VarsModes_28 = ((MR_Word) ((MR_hl_field(2, RHS0_20, 2))));
        MR_Word LambdaDeclaredDetism_29 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_20, 3))) & (MR_Integer) 7);
        MR_Word LambdaGoal0_30 = ((MR_Word) ((MR_hl_field(2, RHS0_20, 4))));
        MR_Word LambdaCodeModel_31;
        MR_Word LambdaProcIsModelNon_32;
        MR_Word InsideDuplForSwitch_34;
        MR_Unsigned NumEnclosingBarriers_36;
        MR_Word SwitchArmContexts_37;
        MR_Unsigned LambdaNumEnclosingBarriers_38;
        MR_Word LambdaNestedContext_39;
        MR_Word ModuleInfo_40;
        MR_Word LambdaInstMap0_41;
        MR_Word SimplifyTasks_42;
        MR_Word LambdaCommon0_43;
        MR_Word LambdaGoal_44;
        MR_Word RHS_46;
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(2, RHS0_20, 0)));
        MR_Word Var_45;

        hlds__code_model__determinism_to_code_model_2_p_0(LambdaDeclaredDetism_29, &LambdaCodeModel_31);
        switch (LambdaCodeModel_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            LambdaProcIsModelNon_32 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word Context_33;
              MR_Word Var_65;

              Context_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
              {
                Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_65, 0) = ((MR_Box) (Context_33));
              }
              {
                LambdaProcIsModelNon_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, LambdaProcIsModelNon_32, 0) = ((MR_Box) (Var_65));
              }
            }
            break;
        }
        InsideDuplForSwitch_34 = ((MR_Unsigned) ((MR_hl_field(0, NestedContext0_15, 0))) & (MR_Integer) 1);
        NumEnclosingBarriers_36 = ((MR_Unsigned) ((MR_hl_field(0, NestedContext0_15, 2))));
        SwitchArmContexts_37 = ((MR_Word) ((MR_hl_field(0, NestedContext0_15, 3))));
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_13, (MR_Integer) 29);
        if (succeeded)
          LambdaNumEnclosingBarriers_38 = NumEnclosingBarriers_36;
        else
          LambdaNumEnclosingBarriers_38 = (NumEnclosingBarriers_36 + (MR_Unsigned) 1U);
        {
          LambdaNestedContext_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, LambdaNestedContext_39, 0) = (MR_Box) ((MR_Unsigned) (InsideDuplForSwitch_34));
          MR_hl_field(0, LambdaNestedContext_39, 1) = ((MR_Box) (LambdaProcIsModelNon_32));
          MR_hl_field(0, LambdaNestedContext_39, 2) = ((MR_Box) (LambdaNumEnclosingBarriers_38));
          MR_hl_field(0, LambdaNestedContext_39, 3) = ((MR_Box) (SwitchArmContexts_37));
        }
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_63, &ModuleInfo_40);
        hlds__instmap__pre_lambda_update_4_p_0(ModuleInfo_40, VarsModes_28, InstMap0_16, &LambdaInstMap0_41);
        check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(STATE_VARIABLE_Info_0_63, &SimplifyTasks_42);
        LambdaCommon0_43 = check_hlds__simplify__common__common_info_init_1_f_0(SimplifyTasks_42);
        check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(LambdaGoal0_30, &LambdaGoal_44, LambdaNestedContext_39, LambdaInstMap0_41, LambdaCommon0_43, &Var_45, STATE_VARIABLE_Info_0_63, STATE_VARIABLE_Info_64);
        {
          RHS_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, RHS_46, 0) = (MR_Box) (packed_word_1);
          MR_hl_field(2, RHS_46, 1) = ((MR_Box) (NonLocals_27));
          MR_hl_field(2, RHS_46, 2) = ((MR_Box) (VarsModes_28));
          MR_hl_field(2, RHS_46, 3) = (MR_Box) ((MR_Unsigned) (LambdaDeclaredDetism_29));
          MR_hl_field(2, RHS_46, 4) = ((MR_Box) (LambdaGoal_44));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LHSVar0_19));
          MR_hl_field(1, base, 1) = ((MR_Box) (RHS_46));
          MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_21));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unification0_22));
          MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_23));
        }
        *GoalInfo_14 = GoalInfo0_13;
        *STATE_VARIABLE_Common_62 = STATE_VARIABLE_Common_0_61;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_105_99_97_116_101_100_95_117_110_105_102_121_95_95_91_53_93_95_48_14_p_0(
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
  MR_Word Var_80;
  MR_Word TypeVar_30;
  MR_Word Kind_31;

  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_51, &ModuleInfo_27);
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_51, &VarTable_28);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_28, XVar_15, &Type_29);
  succeeded = ((MR_tag((MR_Word) Type_29)) == (MR_Integer) 0);
  if (succeeded)
  {
    TypeVar_30 = ((MR_Word) ((MR_hl_field(0, Type_29, 0))));
    Kind_31 = ((MR_Word) ((MR_hl_field(0, Type_29, 1))));
    {
      MR_Word Context_32;
      MR_Word TypeInfoVar_33;
      MR_Word RttiVarMaps_90;
      MR_Word TypeInfoLocn_91;

      Context_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_21);
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_51, &RttiVarMaps_90);
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_90, TypeVar_30, &TypeInfoLocn_91);
      if (((MR_tag((MR_Word) TypeInfoLocn_91)) == (MR_Integer) 0))
      {
        TypeInfoVar_33 = ((MR_Word) ((MR_hl_field(0, TypeInfoLocn_91, 0))));
        ExtraGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_0_51;
      }
      else
      {
        MR_Word TypeClassInfoVar_92 = ((MR_Word) ((MR_hl_field(1, TypeInfoLocn_91, 0))));
        MR_Integer Index_93 = ((MR_Integer) ((MR_hl_field(1, TypeInfoLocn_91, 1))));
        MR_Word ModuleInfo_94;
        MR_Word VarTable0_95;
        MR_Word RttiVarMaps0_96;
        MR_Word VarTable_97;
        MR_Word RttiVarMaps_98;
        MR_Word Var_99;
        MR_Word STATE_VARIABLE_Info_1_100;

        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_51, &ModuleInfo_94);
        check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_51, &VarTable0_95);
        check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_51, &RttiVarMaps0_96);
        {
          Var_99 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_99, 0) = ((MR_Box) (Index_93));
        }
        check_hlds__polymorphism_type_info__gen_extract_type_info_12_p_0(ModuleInfo_94, TypeVar_30, Kind_31, TypeClassInfoVar_92, Var_99, Context_32, &ExtraGoals_34, &TypeInfoVar_33, VarTable0_95, &VarTable_97, RttiVarMaps0_96, &RttiVarMaps_98);
        check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_97, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_1_100);
        check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(RttiVarMaps_98, STATE_VARIABLE_Info_1_100, STATE_VARIABLE_Info_52);
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
      MR_Word Context_82;

      Context_82 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_21);
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
      hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_27, (MR_Integer) 0, Var_55, (MR_String) "builtin_unify_pred", (MR_Word) ((MR_Unsigned) 0U), Var_58, Var_59, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_unify_scalar_common_2[0])), (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_82, &Var_64);
      Call0_36 = ((MR_Word) ((MR_hl_field(0, Var_64, 0))));
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
      MR_Integer Var_88;

      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_29, &TypeCtor_40, &TypeArgs_41);
      parse_tree__prog_data__determinism_components_3_p_1(&Detism_42, CanFail_18, (MR_Integer) 1);
      check_hlds__proc_requests__lookup_mode_num_5_p_0(ModuleInfo_27, TypeCtor_40, UnifyMode_17, Detism_42, &ProcId_43);
      hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_88);
      succeeded = (ProcId_43 == Var_88);
      if (succeeded)
        succeeded = hlds__special_pred__special_pred_is_generated_lazily_2_p_0(ModuleInfo_27, TypeCtor_40);
      if (succeeded)
      {
        MR_Word TypeInfoVars_44;
        MR_Word Var_71;
        MR_Word TypeInfoVar_83;
        MR_Word VarTable0_101;
        MR_Word RttiVarMaps0_102;
        MR_Word ModuleInfo0_103;
        MR_Word PredProcId_104;
        MR_Word ModuleInfo1_105;
        MR_Word VarTable_106;
        MR_Word RttiVarMaps_107;
        MR_Word ModuleInfo_108;
        MR_Word STATE_VARIABLE_PredInfo_1_109;
        MR_Word STATE_VARIABLE_ProcInfo_1_110;
        MR_Word STATE_VARIABLE_ProcInfo_2_111;
        MR_Word STATE_VARIABLE_ProcInfo_3_112;
        MR_Word Var_113;
        MR_Word STATE_VARIABLE_PredInfo_2_114;
        MR_Word STATE_VARIABLE_ProcInfo_4_115;
        MR_Word STATE_VARIABLE_Info_1_116;
        MR_Word STATE_VARIABLE_Info_2_117;
        MR_Word TypeInfoVarPrime_45;
        MR_Word Var_74;

        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (Type_29));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_51, &VarTable0_101);
        check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_51, &RttiVarMaps0_102);
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_51, &ModuleInfo0_103);
        check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_51, &PredProcId_104);
        hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo0_103, PredProcId_104, &STATE_VARIABLE_PredInfo_1_109, &STATE_VARIABLE_ProcInfo_1_110);
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable0_101, STATE_VARIABLE_ProcInfo_1_110, &STATE_VARIABLE_ProcInfo_2_111);
        hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps0_102, STATE_VARIABLE_ProcInfo_2_111, &STATE_VARIABLE_ProcInfo_3_112);
        Var_113 = mercury__term_context__dummy_context_0_f_0();
        check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_mi_10_p_0(Var_71, Var_113, &TypeInfoVars_44, &ExtraGoals_34, ModuleInfo0_103, &ModuleInfo1_105, STATE_VARIABLE_PredInfo_1_109, &STATE_VARIABLE_PredInfo_2_114, STATE_VARIABLE_ProcInfo_3_112, &STATE_VARIABLE_ProcInfo_4_115);
        hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_4_115, &VarTable_106);
        hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_4_115, &RttiVarMaps_107);
        check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_106, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_1_116);
        check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(RttiVarMaps_107, STATE_VARIABLE_Info_1_116, &STATE_VARIABLE_Info_2_117);
        hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PredProcId_104, STATE_VARIABLE_PredInfo_2_114, STATE_VARIABLE_ProcInfo_4_115, ModuleInfo1_105, &ModuleInfo_108);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo_108, STATE_VARIABLE_Info_2_117, STATE_VARIABLE_Info_52);
        succeeded = (TypeInfoVars_44 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeInfoVarPrime_45 = ((MR_Word) ((MR_hl_field(1, TypeInfoVars_44, 0))));
          Var_74 = ((MR_Word) ((MR_hl_field(1, TypeInfoVars_44, 1))));
          succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
          TypeInfoVar_83 = TypeInfoVarPrime_45;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_unify.process_complicated_unify\'/14", (MR_String) "more than one typeinfo for one type var");
            return;
          }
        check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(TypeInfoVar_83, XVar_15, YVar_16, ModuleInfo_27, GoalInfo0_21, &Call_35);
        *STATE_VARIABLE_Common_50 = STATE_VARIABLE_Common_0_49;
      }
      else
      {
        MR_Word CallGoalInfo0_46;
        MR_Word CallGoalInfo1_47;
        MR_Word STATE_VARIABLE_Info_4_77;
        MR_Word Call0_84;
        MR_Word Call1_85;
        MR_Word TypeInfoVars_86;

        check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(TypeArgs_41, &TypeInfoVars_86, &ExtraGoals_34, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_4_77);
        check_hlds__simplify__simplify_goal_unify__call_specific_unify_10_p_0(TypeCtor_40, TypeInfoVars_86, XVar_15, YVar_16, ProcId_43, ModuleInfo_27, UnifyContext_20, GoalInfo0_21, &Call0_84, &CallGoalInfo0_46);
        check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(Call0_84, &Call1_85, CallGoalInfo0_46, &CallGoalInfo1_47, NestedContext0_23, InstMap0_24, STATE_VARIABLE_Common_0_49, STATE_VARIABLE_Common_50, STATE_VARIABLE_Info_4_77, STATE_VARIABLE_Info_52);
        {
          Call_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Call_35, 0) = ((MR_Box) (Call1_85));
          MR_hl_field(0, Call_35, 1) = ((MR_Box) (CallGoalInfo1_47));
        }
      }
    }
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (Call_35));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Conjuncts_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_34, Var_80);
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
  MR_Word STATE_VARIABLE_PredInfo_1_22;
  MR_Word STATE_VARIABLE_ProcInfo_1_23;
  MR_Word STATE_VARIABLE_ProcInfo_2_24;
  MR_Word STATE_VARIABLE_ProcInfo_3_25;
  MR_Word Var_26;
  MR_Word STATE_VARIABLE_PredInfo_2_27;
  MR_Word STATE_VARIABLE_ProcInfo_4_28;
  MR_Word STATE_VARIABLE_Info_1_29;
  MR_Word STATE_VARIABLE_Info_2_30;

  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_20, &VarTable0_10);
  check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_20, &RttiVarMaps0_11);
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_20, &ModuleInfo0_12);
  check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_20, &PredProcId_13);
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo0_12, PredProcId_13, &STATE_VARIABLE_PredInfo_1_22, &STATE_VARIABLE_ProcInfo_1_23);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable0_10, STATE_VARIABLE_ProcInfo_1_23, &STATE_VARIABLE_ProcInfo_2_24);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps0_11, STATE_VARIABLE_ProcInfo_2_24, &STATE_VARIABLE_ProcInfo_3_25);
  Var_26 = mercury__term_context__dummy_context_0_f_0();
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_mi_10_p_0(Types_6, Var_26, TypeInfoVars_7, TypeInfoGoals_8, ModuleInfo0_12, &ModuleInfo1_16, STATE_VARIABLE_PredInfo_1_22, &STATE_VARIABLE_PredInfo_2_27, STATE_VARIABLE_ProcInfo_3_25, &STATE_VARIABLE_ProcInfo_4_28);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_4_28, &VarTable_17);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_4_28, &RttiVarMaps_18);
  check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_17, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_1_29);
  check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(RttiVarMaps_18, STATE_VARIABLE_Info_1_29, &STATE_VARIABLE_Info_2_30);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PredProcId_13, STATE_VARIABLE_PredInfo_2_27, STATE_VARIABLE_ProcInfo_4_28, ModuleInfo1_16, &ModuleInfo_19);
  check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo_19, STATE_VARIABLE_Info_2_30, STATE_VARIABLE_Info_21);
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
  UnifyMap_23 = ((MR_Word) ((MR_hl_field(0, SpecialPredMaps_22, 0))));
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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_unify__no_cons_id_can_match_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundFunctor_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word BoundFunctors_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word BoundConsId_10 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_8, 0))));
      MR_Word BoundArgInsts_11 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_8, 1))));
      MR_Word TypeInfo_12_12;
      MR_Word TypeCtorInfo_13_13;

      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(HeadVar__1_1, BoundConsId_10);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__simplify__simplify_goal_unify_scalar_common_1[0]);
        TypeCtorInfo_13_13 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        succeeded = mercury__list__same_length_2_p_0(TypeInfo_12_12, TypeCtorInfo_13_13, HeadVar__2_2, BoundArgInsts_11);
      }
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = BoundFunctors_9;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_unify____Unify____cons_id_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_goal_unify____Unify____cons_id_match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify____Compare____cons_id_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_goal_unify____Compare____cons_id_match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__simplify__simplify_goal_unify__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_unify__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_unify__check_hlds__simplify__simplify_goal_unify__type_ctor_info_cons_id_match_0);
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
