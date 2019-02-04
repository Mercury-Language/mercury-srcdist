/*
** Automatically generated from `follow_vars.m'
** by the Mercury compiler,
** version rotd-2018-10-17
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


// :- module ll_backend.follow_vars.
// :- implementation.

/*
INIT mercury__ll_backend__follow_vars__init
ENDINIT
*/

#include "ll_backend.follow_vars.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 ll_backend__follow_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__follow_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_pred__type_ctor_info_arg_info_0;

static MR_bool MR_CALL 
ll_backend__follow_vars__is_reg_r_arg_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_conj_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word VarTypes_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_FollowVarsMap_0_6,
  MR_Word * STATE_VARIABLE_FollowVarsMap_7,
  MR_Integer STATE_VARIABLE_NextNonReservedR_0_8,
  MR_Integer * STATE_VARIABLE_NextNonReservedR_9,
  MR_Integer STATE_VARIABLE_NextNonReservedF_0_10,
  MR_Integer * STATE_VARIABLE_NextNonReservedF_11);

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_cases_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word VarTypes_3,
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer HeadVar__7_7,
  MR_Integer * HeadVar__8_8,
  MR_Integer HeadVar__9_9,
  MR_Integer * HeadVar__10_10);

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word VarTypes_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * FollowVarsMap_6,
  MR_Integer HeadVar__7_7,
  MR_Integer * NextNonReservedR_8,
  MR_Integer HeadVar__9_9,
  MR_Integer * NextNonReservedF_10);

static MR_bool MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(
  MR_Word GoalExpr0_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_GoalInfo_0_112,
  MR_Word * STATE_VARIABLE_GoalInfo_113,
  MR_Word VarTypes_16,
  MR_Word ModuleInfo_17,
  MR_Word STATE_VARIABLE_FollowVarsMap_0_114,
  MR_Word * STATE_VARIABLE_FollowVarsMap_115,
  MR_Integer STATE_VARIABLE_NextNonReservedR_0_116,
  MR_Integer * STATE_VARIABLE_NextNonReservedR_117,
  MR_Integer STATE_VARIABLE_NextNonReservedF_0_118,
  MR_Integer * STATE_VARIABLE_NextNonReservedF_119);

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FollowVarsMap_0_3,
  MR_Word * STATE_VARIABLE_FollowVarsMap_4,
  MR_Integer STATE_VARIABLE_NextReg_0_5,
  MR_Integer * STATE_VARIABLE_NextReg_6);

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_call_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word Args_10,
  MR_Word ModuleInfo_11,
  MR_Word * FollowVarsMap_12,
  MR_Integer * NextNonReservedR_13,
  MR_Integer * NextNonReservedF_14);

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_from_arginfo_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_FollowVarsMap_0_2,
  MR_Word * STATE_VARIABLE_FollowVarsMap_3,
  MR_Integer STATE_VARIABLE_NextNonReservedR_0_4,
  MR_Integer * STATE_VARIABLE_NextNonReservedR_5,
  MR_Integer STATE_VARIABLE_NextNonReservedF_0_6,
  MR_Integer * STATE_VARIABLE_NextNonReservedF_7);

static void MR_CALL 
ll_backend__follow_vars__find_final_follow_vars_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_NextNonReservedR_0_4,
  MR_Integer * STATE_VARIABLE_NextNonReservedR_5,
  MR_Integer STATE_VARIABLE_NextNonReservedF_0_6,
  MR_Integer * STATE_VARIABLE_NextNonReservedF_7);


static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_3[1][4];




static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__follow_vars_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__follow_vars_scalar_common_3[0])),
    ((MR_Box) (ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__follow_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ll_backend__follow_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__follow_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__follow_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0)
  }
};

static MR_bool MR_CALL 
ll_backend__follow_vars__is_reg_r_arg_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0))) & (MR_Integer) 1);

    succeeded = (Var_7 == (MR_Integer) 0);
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_conj_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word VarTypes_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_FollowVarsMap_0_6,
  MR_Word * STATE_VARIABLE_FollowVarsMap_7,
  MR_Integer STATE_VARIABLE_NextNonReservedR_0_8,
  MR_Integer * STATE_VARIABLE_NextNonReservedR_9,
  MR_Integer STATE_VARIABLE_NextNonReservedF_0_10,
  MR_Integer * STATE_VARIABLE_NextNonReservedF_11)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_NextNonReservedF_11 = STATE_VARIABLE_NextNonReservedF_0_10;
      *STATE_VARIABLE_NextNonReservedR_9 = STATE_VARIABLE_NextNonReservedR_0_8;
      *STATE_VARIABLE_FollowVarsMap_7 = STATE_VARIABLE_FollowVarsMap_0_6;
    }
    else
    {
      MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_26;
      MR_Word Goals_27;
      MR_Word AttachToNext_50;
      MR_Word Goal1_51;
      MR_Word STATE_VARIABLE_FollowVarsMap_59_59;
      MR_Integer STATE_VARIABLE_NextNonReservedR_60_60;
      MR_Integer STATE_VARIABLE_NextNonReservedF_61_61;
      MR_Word GoalExpr0_74;
      MR_Word GoalInfo0_75;
      MR_Word GoalExpr_76;
      MR_Word GoalInfo_77;
      MR_Word GoalExpr0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_24, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) GoalExpr0_34)) == (MR_Integer) 2))
      {
        MR_Word BuiltinState_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_34, (MR_Integer) 3))) & (MR_Integer) 1);

        succeeded = (BuiltinState_39 == (MR_Integer) 0);
      }
      else
      if (((MR_tag((MR_Word) GoalExpr0_34)) == (MR_Integer) 1))
      {
        MR_Word Unification_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 3))));

        succeeded = ((((MR_tag((MR_Word) Unification_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_45, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
        }
        succeeded = !(succeeded);
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        AttachToNext_50 = (MR_Integer) 0;
      else
        AttachToNext_50 = (MR_Integer) 1;
      ll_backend__follow_vars__find_follow_vars_in_conj_11_p_0(Goals0_25, &Goals_27, VarTypes_3, HeadVar__4_4, AttachToNext_50, STATE_VARIABLE_FollowVarsMap_0_6, &STATE_VARIABLE_FollowVarsMap_59_59, STATE_VARIABLE_NextNonReservedR_0_8, &STATE_VARIABLE_NextNonReservedR_60_60, STATE_VARIABLE_NextNonReservedF_0_10, &STATE_VARIABLE_NextNonReservedF_61_61);
      GoalExpr0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_24, (MR_Integer) 0))));
      GoalInfo0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_24, (MR_Integer) 1))));
      ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(GoalExpr0_74, &GoalExpr_76, GoalInfo0_75, &GoalInfo_77, VarTypes_3, HeadVar__4_4, STATE_VARIABLE_FollowVarsMap_59_59, STATE_VARIABLE_FollowVarsMap_7, STATE_VARIABLE_NextNonReservedR_60_60, STATE_VARIABLE_NextNonReservedR_9, STATE_VARIABLE_NextNonReservedF_61_61, STATE_VARIABLE_NextNonReservedF_11);
      {
        Goal1_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal1_51, 0) = ((MR_Box) (GoalExpr_76));
        MR_hl_field(MR_mktag(0), Goal1_51, 1) = ((MR_Box) (GoalInfo_77));
      }
      switch (HeadVar__5_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Goal_26 = Goal1_51;
          break;
        case (MR_Integer) 1:
          {
            MR_Word FollowVars_52;
            MR_Word Var_65;

            {
              FollowVars_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FollowVars_52, 0) = ((MR_Box) (*STATE_VARIABLE_FollowVarsMap_7));
              MR_hl_field(MR_mktag(0), FollowVars_52, 1) = ((MR_Box) (*STATE_VARIABLE_NextNonReservedR_9));
              MR_hl_field(MR_mktag(0), FollowVars_52, 2) = ((MR_Box) (*STATE_VARIABLE_NextNonReservedF_11));
            }
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (FollowVars_52));
            }
            hlds__hlds_llds__goal_set_follow_vars_3_p_0(Var_65, Goal1_51, &Goal_26);
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_26));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_27));
      }
    }
  }
}

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_cases_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word VarTypes_3,
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer HeadVar__7_7,
  MR_Integer * HeadVar__8_8,
  MR_Integer HeadVar__9_9,
  MR_Integer * HeadVar__10_10)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__10_10 = HeadVar__9_9;
    *HeadVar__8_8 = HeadVar__7_7;
    *HeadVar__6_6 = HeadVar__5_5;
  }
  else
  {
    MR_Word Case0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_24;
    MR_Word Cases_25;
    MR_Word MainConsId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_22, (MR_Integer) 0))));
    MR_Word OtherConsIds_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_22, (MR_Integer) 1))));
    MR_Word Goal0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_22, (MR_Integer) 2))));
    MR_Word Goal1_37;
    MR_Word FollowVars_38;
    MR_Word Goal_39;
    MR_Word Var_43;
    MR_Word GoalExpr0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_36, (MR_Integer) 0))));
    MR_Word GoalInfo0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_36, (MR_Integer) 1))));
    MR_Word GoalExpr_54;
    MR_Word GoalInfo_55;
    MR_Word _FollowVarsMap_40;
    MR_Integer _NextNonReservedR_41;
    MR_Integer _NextNonReservedF_42;

    ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(GoalExpr0_52, &GoalExpr_54, GoalInfo0_53, &GoalInfo_55, VarTypes_3, ModuleInfo_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, HeadVar__8_8, HeadVar__9_9, HeadVar__10_10);
    {
      Goal1_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal1_37, 0) = ((MR_Box) (GoalExpr_54));
      MR_hl_field(MR_mktag(0), Goal1_37, 1) = ((MR_Box) (GoalInfo_55));
    }
    {
      FollowVars_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FollowVars_38, 0) = ((MR_Box) (*HeadVar__6_6));
      MR_hl_field(MR_mktag(0), FollowVars_38, 1) = ((MR_Box) (*HeadVar__8_8));
      MR_hl_field(MR_mktag(0), FollowVars_38, 2) = ((MR_Box) (*HeadVar__10_10));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (FollowVars_38));
    }
    hlds__hlds_llds__goal_set_follow_vars_3_p_0(Var_43, Goal1_37, &Goal_39);
    {
      Case_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_24, 0) = ((MR_Box) (MainConsId_34));
      MR_hl_field(MR_mktag(0), Case_24, 1) = ((MR_Box) (OtherConsIds_35));
      MR_hl_field(MR_mktag(0), Case_24, 2) = ((MR_Box) (Goal_39));
    }
    ll_backend__follow_vars__find_follow_vars_in_cases_10_p_0(Cases0_23, &Cases_25, VarTypes_3, ModuleInfo_4, HeadVar__5_5, &_FollowVarsMap_40, *HeadVar__8_8, &_NextNonReservedR_41, *HeadVar__10_10, &_NextNonReservedF_42);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_25));
    }
  }
}

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word VarTypes_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * FollowVarsMap_6,
  MR_Integer HeadVar__7_7,
  MR_Integer * NextNonReservedR_8,
  MR_Integer HeadVar__9_9,
  MR_Integer * NextNonReservedF_10)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *FollowVarsMap_6 = HeadVar__5_5;
    *NextNonReservedR_8 = HeadVar__7_7;
    *NextNonReservedF_10 = HeadVar__9_9;
  }
  else
  {
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word Goal1_28;
    MR_Word FollowVars_29;
    MR_Word Var_33;
    MR_Word GoalExpr0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_16, (MR_Integer) 0))));
    MR_Word GoalInfo0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_16, (MR_Integer) 1))));
    MR_Word GoalExpr_44;
    MR_Word GoalInfo_45;
    MR_Word _FollowVarsMap_30;
    MR_Integer _NextNonReservedR_31;
    MR_Integer _NextNonReservedF_32;

    ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(GoalExpr0_42, &GoalExpr_44, GoalInfo0_43, &GoalInfo_45, VarTypes_3, HeadVar__4_4, HeadVar__5_5, FollowVarsMap_6, HeadVar__7_7, NextNonReservedR_8, HeadVar__9_9, NextNonReservedF_10);
    {
      Goal1_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal1_28, 0) = ((MR_Box) (GoalExpr_44));
      MR_hl_field(MR_mktag(0), Goal1_28, 1) = ((MR_Box) (GoalInfo_45));
    }
    {
      FollowVars_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FollowVars_29, 0) = ((MR_Box) (*FollowVarsMap_6));
      MR_hl_field(MR_mktag(0), FollowVars_29, 1) = ((MR_Box) (*NextNonReservedR_8));
      MR_hl_field(MR_mktag(0), FollowVars_29, 2) = ((MR_Box) (*NextNonReservedF_10));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (FollowVars_29));
    }
    hlds__hlds_llds__goal_set_follow_vars_3_p_0(Var_33, Goal1_28, &Goal_18);
    ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(Goals0_17, &Goals_19, VarTypes_3, HeadVar__4_4, HeadVar__5_5, &_FollowVarsMap_30, HeadVar__7_7, &_NextNonReservedR_31, HeadVar__9_9, &_NextNonReservedF_32);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_19));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__follow_vars__is_reg_r_arg_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(
  MR_Word GoalExpr0_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_GoalInfo_0_112,
  MR_Word * STATE_VARIABLE_GoalInfo_113,
  MR_Word VarTypes_16,
  MR_Word ModuleInfo_17,
  MR_Word STATE_VARIABLE_FollowVarsMap_0_114,
  MR_Word * STATE_VARIABLE_FollowVarsMap_115,
  MR_Integer STATE_VARIABLE_NextNonReservedR_0_116,
  MR_Integer * STATE_VARIABLE_NextNonReservedR_117,
  MR_Integer STATE_VARIABLE_NextNonReservedF_0_118,
  MR_Integer * STATE_VARIABLE_NextNonReservedF_119)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GoalExpr0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_53 = (MR_Word) ((MR_Word) (GoalExpr0_13));
          MR_Word SubGoal_54;

          ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(SubGoal0_53, &SubGoal_54, VarTypes_16, ModuleInfo_17, STATE_VARIABLE_FollowVarsMap_0_114, STATE_VARIABLE_FollowVarsMap_115, STATE_VARIABLE_NextNonReservedR_0_116, STATE_VARIABLE_NextNonReservedR_117, STATE_VARIABLE_NextNonReservedF_0_118, STATE_VARIABLE_NextNonReservedF_119);
          *GoalExpr_14 = (MR_Word) ((MR_Word) (SubGoal_54));
          *STATE_VARIABLE_GoalInfo_113 = STATE_VARIABLE_GoalInfo_0_112;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 3))));
          MR_Word RVar_64;
          MR_Word DesiredLoc_65;
          MR_Word TypeInfo_173_173;
          MR_Word TypeCtorInfo_174_174;
          MR_Word LVar_63;
          MR_Box conv0_DesiredLoc_65;

          *GoalExpr_14 = GoalExpr0_13;
          succeeded = ((MR_tag((MR_Word) Unification_61)) == (MR_Integer) 2);
          if (succeeded)
          {
            LVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_61, (MR_Integer) 0))));
            RVar_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_61, (MR_Integer) 1))));
            TypeInfo_173_173 = (MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]);
            TypeCtorInfo_174_174 = (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
            succeeded = mercury__map__search_3_p_0(TypeInfo_173_173, TypeCtorInfo_174_174, STATE_VARIABLE_FollowVarsMap_0_114, ((MR_Box) (LVar_63)), &conv0_DesiredLoc_65);
            if (succeeded)
            {
              DesiredLoc_65 = ((MR_Word) (conv0_DesiredLoc_65));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            mercury__map__set_4_p_0((MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), ((MR_Box) (RVar_64)), ((MR_Box) (DesiredLoc_65)), STATE_VARIABLE_FollowVarsMap_0_114, STATE_VARIABLE_FollowVarsMap_115);
          }
          else
            *STATE_VARIABLE_FollowVarsMap_115 = STATE_VARIABLE_FollowVarsMap_0_114;
          *STATE_VARIABLE_GoalInfo_113 = STATE_VARIABLE_GoalInfo_0_112;
          *STATE_VARIABLE_NextNonReservedR_117 = STATE_VARIABLE_NextNonReservedR_0_116;
          *STATE_VARIABLE_NextNonReservedF_119 = STATE_VARIABLE_NextNonReservedF_0_118;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_66 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 0))));
          MR_Integer ProcId_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 1))));
          MR_Word Args_68 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 2))));
          MR_Word BuiltinState_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 3))) & (MR_Integer) 1);

          *GoalExpr_14 = GoalExpr0_13;
          switch (BuiltinState_69) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_FollowVarsMap_115 = STATE_VARIABLE_FollowVarsMap_0_114;
                *STATE_VARIABLE_NextNonReservedR_117 = STATE_VARIABLE_NextNonReservedR_0_116;
                *STATE_VARIABLE_NextNonReservedF_119 = STATE_VARIABLE_NextNonReservedF_0_118;
              }
              break;
            case (MR_Integer) 1:
              ll_backend__follow_vars__find_follow_vars_in_call_7_p_0(PredId_66, ProcId_67, Args_68, ModuleInfo_17, STATE_VARIABLE_FollowVarsMap_115, STATE_VARIABLE_NextNonReservedR_117, STATE_VARIABLE_NextNonReservedF_119);
              break;
          }
          *STATE_VARIABLE_GoalInfo_113 = STATE_VARIABLE_GoalInfo_0_112;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
              MR_Word Modes_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3))));
              MR_Word MaybeArgRegs_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 4))));
              MR_Word Det_171 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 5))) & (MR_Integer) 7);
              MR_Word Args_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));

              *GoalExpr_14 = GoalExpr0_13;
              switch (MR_tag((MR_Word) GenericCall_72)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word CodeModel_85;
                    MR_Word Types_86;
                    MR_Word ArgRegTypes_87;
                    MR_Word ArgInfos_88;
                    MR_Word ArgsInfos_89;
                    MR_Word InVarInfos_90;
                    MR_Word InVarInfosR_92;
                    MR_Word InVarInfosF_93;
                    MR_Word InVarsR_94;
                    MR_Word InVarsF_95;
                    MR_Word Globals_96;
                    MR_Word SpecifierArgInfos_98;
                    MR_Integer FirstInputR_99;
                    MR_Integer Var_123;
                    MR_Integer Var_124;
                    MR_Word Var_125;
                    MR_Word STATE_VARIABLE_FollowVarsMap_126_126;
                    MR_Word STATE_VARIABLE_FollowVarsMap_130_130;
                    MR_Word Var_91;
                    MR_Word Var_97;
                    MR_Word Var_100;
                    MR_Integer Var_102;
                    MR_Integer Var_103;

                    hlds__code_model__determinism_to_code_model_2_p_0(Det_171, &CodeModel_85);
                    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_16, Args_172, &Types_86);
                    hlds__arg_info__generic_call_arg_reg_types_6_p_0(ModuleInfo_17, VarTypes_16, GenericCall_72, Args_172, MaybeArgRegs_74, &ArgRegTypes_87);
                    hlds__arg_info__make_arg_infos_6_p_0(Types_86, Modes_73, ArgRegTypes_87, CodeModel_85, ModuleInfo_17, &ArgInfos_88);
                    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), Args_172, ArgInfos_88, &ArgsInfos_89);
                    hlds__arg_info__partition_args_3_p_0(ArgsInfos_89, &InVarInfos_90, &Var_91);
                    mercury__list__filter_4_p_0((MR_Word) (&ll_backend__follow_vars_scalar_common_2[0]), (MR_Word) (&ll_backend__follow_vars_scalar_common_2[1]), InVarInfos_90, &InVarInfosR_92, &InVarInfosF_93);
                    mercury__assoc_list__keys_2_p_0((MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), InVarInfosR_92, &InVarsR_94);
                    mercury__assoc_list__keys_2_p_0((MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), InVarInfosF_93, &InVarsF_95);
                    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_17, &Globals_96);
                    Var_123 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]), InVarsR_94);
                    Var_124 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]), InVarsF_95);
                    ll_backend__call_gen__generic_call_info_8_p_0(Globals_96, GenericCall_72, Var_123, Var_124, &Var_97, &SpecifierArgInfos_98, &FirstInputR_99, &Var_100);
                    Var_125 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0));
                    ll_backend__follow_vars__find_follow_vars_from_arginfo_7_p_0(SpecifierArgInfos_98, Var_125, &STATE_VARIABLE_FollowVarsMap_126_126, (MR_Integer) 1, &Var_102, (MR_Integer) 1, &Var_103);
                    ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_p_0((MR_Integer) 0, InVarsR_94, STATE_VARIABLE_FollowVarsMap_126_126, &STATE_VARIABLE_FollowVarsMap_130_130, FirstInputR_99, STATE_VARIABLE_NextNonReservedR_117);
                    ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_p_0((MR_Integer) 1, InVarsF_95, STATE_VARIABLE_FollowVarsMap_130_130, STATE_VARIABLE_FollowVarsMap_115, (MR_Integer) 1, STATE_VARIABLE_NextNonReservedF_119);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    *STATE_VARIABLE_FollowVarsMap_115 = STATE_VARIABLE_FollowVarsMap_0_114;
                    *STATE_VARIABLE_NextNonReservedR_117 = STATE_VARIABLE_NextNonReservedR_0_116;
                    *STATE_VARIABLE_NextNonReservedF_119 = STATE_VARIABLE_NextNonReservedF_0_118;
                  }
                  break;
              }
              *STATE_VARIABLE_GoalInfo_113 = STATE_VARIABLE_GoalInfo_0_112;
            }
            break;
          case (MR_Integer) 1:
            {
              *GoalExpr_14 = GoalExpr0_13;
              *STATE_VARIABLE_GoalInfo_113 = STATE_VARIABLE_GoalInfo_0_112;
              *STATE_VARIABLE_FollowVarsMap_115 = STATE_VARIABLE_FollowVarsMap_0_114;
              *STATE_VARIABLE_NextNonReservedR_117 = STATE_VARIABLE_NextNonReservedR_0_116;
              *STATE_VARIABLE_NextNonReservedF_119 = STATE_VARIABLE_NextNonReservedF_0_118;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
              MR_Word Goals_23;

              switch (ConjType_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(Goals0_22, &Goals_23, VarTypes_16, ModuleInfo_17, STATE_VARIABLE_FollowVarsMap_0_114, STATE_VARIABLE_FollowVarsMap_115, STATE_VARIABLE_NextNonReservedR_0_116, STATE_VARIABLE_NextNonReservedR_117, STATE_VARIABLE_NextNonReservedF_0_118, STATE_VARIABLE_NextNonReservedF_119);
                  break;
                case (MR_Integer) 0:
                  {
                    ll_backend__follow_vars__find_follow_vars_in_conj_11_p_0(Goals0_22, &Goals_23, VarTypes_16, ModuleInfo_17, (MR_Integer) 0, STATE_VARIABLE_FollowVarsMap_0_114, STATE_VARIABLE_FollowVarsMap_115, STATE_VARIABLE_NextNonReservedR_0_116, STATE_VARIABLE_NextNonReservedR_117, STATE_VARIABLE_NextNonReservedF_0_118, STATE_VARIABLE_NextNonReservedF_119);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_21));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_23));
              }
              *STATE_VARIABLE_GoalInfo_113 = STATE_VARIABLE_GoalInfo_0_112;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
              MR_Word Goals_168;

              hlds__hlds_llds__goal_info_set_store_map_3_p_0(STATE_VARIABLE_FollowVarsMap_0_114, STATE_VARIABLE_GoalInfo_0_112, STATE_VARIABLE_GoalInfo_113);
              ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(Goals0_167, &Goals_168, VarTypes_16, ModuleInfo_17, STATE_VARIABLE_FollowVarsMap_0_114, STATE_VARIABLE_FollowVarsMap_115, STATE_VARIABLE_NextNonReservedR_0_116, STATE_VARIABLE_NextNonReservedR_117, STATE_VARIABLE_NextNonReservedF_0_118, STATE_VARIABLE_NextNonReservedF_119);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_168));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
              MR_Word Det_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3))));
              MR_Word Cases_27;

              hlds__hlds_llds__goal_info_set_store_map_3_p_0(STATE_VARIABLE_FollowVarsMap_0_114, STATE_VARIABLE_GoalInfo_0_112, STATE_VARIABLE_GoalInfo_113);
              ll_backend__follow_vars__find_follow_vars_in_cases_10_p_0(Cases0_26, &Cases_27, VarTypes_16, ModuleInfo_17, STATE_VARIABLE_FollowVarsMap_0_114, STATE_VARIABLE_FollowVarsMap_115, STATE_VARIABLE_NextNonReservedR_0_116, STATE_VARIABLE_NextNonReservedR_117, STATE_VARIABLE_NextNonReservedF_0_118, STATE_VARIABLE_NextNonReservedF_119);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_24));
                MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (Det_25));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_27));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
              MR_Word SubGoal0_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
              MR_Word SubGoal_170;
              MR_Word FGT_57;

              succeeded = ((((MR_tag((MR_Word) Reason_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_55, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_55, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_57) {
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
                SubGoal_170 = SubGoal0_169;
                *STATE_VARIABLE_NextNonReservedF_119 = STATE_VARIABLE_NextNonReservedF_0_118;
                *STATE_VARIABLE_NextNonReservedR_117 = STATE_VARIABLE_NextNonReservedR_0_116;
                *STATE_VARIABLE_FollowVarsMap_115 = STATE_VARIABLE_FollowVarsMap_0_114;
              }
              else
                ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(SubGoal0_169, &SubGoal_170, VarTypes_16, ModuleInfo_17, STATE_VARIABLE_FollowVarsMap_0_114, STATE_VARIABLE_FollowVarsMap_115, STATE_VARIABLE_NextNonReservedR_0_116, STATE_VARIABLE_NextNonReservedR_117, STATE_VARIABLE_NextNonReservedF_0_118, STATE_VARIABLE_NextNonReservedF_119);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_55));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_170));
              }
              *STATE_VARIABLE_GoalInfo_113 = STATE_VARIABLE_GoalInfo_0_112;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
              MR_Word Cond0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
              MR_Word Then0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3))));
              MR_Word Else0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 4))));
              MR_Word Then1_35;
              MR_Word FollowVarsMapThen_36;
              MR_Integer NextNonReservedThenR_37;
              MR_Integer NextNonReservedThenF_38;
              MR_Word FollowVarsThen_39;
              MR_Word Then_40;
              MR_Word Cond1_41;
              MR_Word FollowVarsCond_45;
              MR_Word Cond_46;
              MR_Word Else1_47;
              MR_Word FollowVarsMapElse_48;
              MR_Integer NextNonReservedElseR_49;
              MR_Integer NextNonReservedElseF_50;
              MR_Word FollowVarsElse_51;
              MR_Word Else_52;
              MR_Word Var_145;
              MR_Word Var_146;
              MR_Word Var_147;

              ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(Then0_30, &Then1_35, VarTypes_16, ModuleInfo_17, STATE_VARIABLE_FollowVarsMap_0_114, &FollowVarsMapThen_36, STATE_VARIABLE_NextNonReservedR_0_116, &NextNonReservedThenR_37, STATE_VARIABLE_NextNonReservedF_0_118, &NextNonReservedThenF_38);
              {
                FollowVarsThen_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FollowVarsThen_39, 0) = ((MR_Box) (FollowVarsMapThen_36));
                MR_hl_field(MR_mktag(0), FollowVarsThen_39, 1) = ((MR_Box) (NextNonReservedThenR_37));
                MR_hl_field(MR_mktag(0), FollowVarsThen_39, 2) = ((MR_Box) (NextNonReservedThenF_38));
              }
              {
                Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (FollowVarsThen_39));
              }
              hlds__hlds_llds__goal_set_follow_vars_3_p_0(Var_145, Then1_35, &Then_40);
              ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(Cond0_29, &Cond1_41, VarTypes_16, ModuleInfo_17, FollowVarsMapThen_36, STATE_VARIABLE_FollowVarsMap_115, NextNonReservedThenR_37, STATE_VARIABLE_NextNonReservedR_117, NextNonReservedThenF_38, STATE_VARIABLE_NextNonReservedF_119);
              {
                FollowVarsCond_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FollowVarsCond_45, 0) = ((MR_Box) (*STATE_VARIABLE_FollowVarsMap_115));
                MR_hl_field(MR_mktag(0), FollowVarsCond_45, 1) = ((MR_Box) (*STATE_VARIABLE_NextNonReservedR_117));
                MR_hl_field(MR_mktag(0), FollowVarsCond_45, 2) = ((MR_Box) (*STATE_VARIABLE_NextNonReservedF_119));
              }
              {
                Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (FollowVarsCond_45));
              }
              hlds__hlds_llds__goal_set_follow_vars_3_p_0(Var_146, Cond1_41, &Cond_46);
              ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(Else0_31, &Else1_47, VarTypes_16, ModuleInfo_17, STATE_VARIABLE_FollowVarsMap_0_114, &FollowVarsMapElse_48, STATE_VARIABLE_NextNonReservedR_0_116, &NextNonReservedElseR_49, STATE_VARIABLE_NextNonReservedF_0_118, &NextNonReservedElseF_50);
              {
                FollowVarsElse_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FollowVarsElse_51, 0) = ((MR_Box) (FollowVarsMapElse_48));
                MR_hl_field(MR_mktag(0), FollowVarsElse_51, 1) = ((MR_Box) (NextNonReservedElseR_49));
                MR_hl_field(MR_mktag(0), FollowVarsElse_51, 2) = ((MR_Box) (NextNonReservedElseF_50));
              }
              {
                Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (FollowVarsElse_51));
              }
              hlds__hlds_llds__goal_set_follow_vars_3_p_0(Var_147, Else1_47, &Else_52);
              hlds__hlds_llds__goal_info_set_store_map_3_p_0(STATE_VARIABLE_FollowVarsMap_0_114, STATE_VARIABLE_GoalInfo_0_112, STATE_VARIABLE_GoalInfo_113);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_28));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_46));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_40));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_52));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.follow_vars.find_follow_vars_in_goal_expr\'/12", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word VarTypes_15,
  MR_Word ModuleInfo_16,
  MR_Word STATE_VARIABLE_FollowVarsMap_0_20,
  MR_Word * STATE_VARIABLE_FollowVarsMap_21,
  MR_Integer STATE_VARIABLE_NextNonReservedR_0_22,
  MR_Integer * STATE_VARIABLE_NextNonReservedR_23,
  MR_Integer STATE_VARIABLE_NextNonReservedF_0_24,
  MR_Integer * STATE_VARIABLE_NextNonReservedF_25)
{
  {
    MR_Word GoalExpr0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word GoalInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word GoalExpr_13;
    MR_Word GoalInfo_14;

    ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(GoalExpr0_11, &GoalExpr_13, GoalInfo0_12, &GoalInfo_14, VarTypes_15, ModuleInfo_16, STATE_VARIABLE_FollowVarsMap_0_20, STATE_VARIABLE_FollowVarsMap_21, STATE_VARIABLE_NextNonReservedR_0_22, STATE_VARIABLE_NextNonReservedR_23, STATE_VARIABLE_NextNonReservedF_0_24, STATE_VARIABLE_NextNonReservedF_25);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_14));
    }
  }
}

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FollowVarsMap_0_3,
  MR_Word * STATE_VARIABLE_FollowVarsMap_4,
  MR_Integer STATE_VARIABLE_NextReg_0_5,
  MR_Integer * STATE_VARIABLE_NextReg_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NextReg_6 = STATE_VARIABLE_NextReg_0_5;
      *STATE_VARIABLE_FollowVarsMap_4 = STATE_VARIABLE_FollowVarsMap_0_3;
    }
    else
    {
      MR_Word InVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word InVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Locn_19;
      MR_Word STATE_VARIABLE_FollowVarsMap_25_25;
      MR_Integer STATE_VARIABLE_NextReg_26_26;
      MR_Word STATE_VARIABLE_FollowVarsMap_24_24;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_FollowVarsMap_0_3;
      MR_Integer next_value_of_STATE_VARIABLE_NextReg_0_5;

      {
        Locn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Locn_19, 0) = (MR_Box) ((MR_Unsigned) (HeadVar__1_1));
        MR_hl_field(MR_mktag(1), Locn_19, 1) = ((MR_Box) (STATE_VARIABLE_NextReg_0_5));
      }
      succeeded = mercury__map__insert_4_p_0((MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), ((MR_Box) (InVar_15)), ((MR_Box) (Locn_19)), STATE_VARIABLE_FollowVarsMap_0_3, &STATE_VARIABLE_FollowVarsMap_24_24);
      if (succeeded)
        STATE_VARIABLE_FollowVarsMap_25_25 = STATE_VARIABLE_FollowVarsMap_24_24;
      else
        STATE_VARIABLE_FollowVarsMap_25_25 = STATE_VARIABLE_FollowVarsMap_0_3;
      STATE_VARIABLE_NextReg_26_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NextReg_0_5 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = InVars_16;
      next_value_of_STATE_VARIABLE_FollowVarsMap_0_3 = STATE_VARIABLE_FollowVarsMap_25_25;
      next_value_of_STATE_VARIABLE_NextReg_0_5 = STATE_VARIABLE_NextReg_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_FollowVarsMap_0_3 = next_value_of_STATE_VARIABLE_FollowVarsMap_0_3;
      STATE_VARIABLE_NextReg_0_5 = next_value_of_STATE_VARIABLE_NextReg_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_call_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word Args_10,
  MR_Word ModuleInfo_11,
  MR_Word * FollowVarsMap_12,
  MR_Integer * NextNonReservedR_13,
  MR_Integer * NextNonReservedF_14)
{
  {
    MR_Word ProcInfo_16;
    MR_Word ArgInfo_17;
    MR_Word ArgsInfos_18;
    MR_Word Var_19;
    MR_Word Var_15;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_11, PredId_8, ProcId_9, &Var_15, &ProcInfo_16);
    hlds__hlds_pred__proc_info_arg_info_2_p_0(ProcInfo_16, &ArgInfo_17);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), Args_10, ArgInfo_17, &ArgsInfos_18);
    Var_19 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0));
    ll_backend__follow_vars__find_follow_vars_from_arginfo_7_p_0(ArgsInfos_18, Var_19, FollowVarsMap_12, (MR_Integer) 1, NextNonReservedR_13, (MR_Integer) 1, NextNonReservedF_14);
  }
}

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_from_arginfo_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_FollowVarsMap_0_2,
  MR_Word * STATE_VARIABLE_FollowVarsMap_3,
  MR_Integer STATE_VARIABLE_NextNonReservedR_0_4,
  MR_Integer * STATE_VARIABLE_NextNonReservedR_5,
  MR_Integer STATE_VARIABLE_NextNonReservedF_0_6,
  MR_Integer * STATE_VARIABLE_NextNonReservedF_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NextNonReservedF_7 = STATE_VARIABLE_NextNonReservedF_0_6;
      *STATE_VARIABLE_NextNonReservedR_5 = STATE_VARIABLE_NextNonReservedR_0_4;
      *STATE_VARIABLE_FollowVarsMap_3 = STATE_VARIABLE_FollowVarsMap_0_2;
    }
    else
    {
      MR_Word ArgVar_17;
      MR_Word ArgLoc_18;
      MR_Word Mode_19;
      MR_Word ArgsInfos_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_34;
      MR_Word STATE_VARIABLE_FollowVarsMap_36_36;
      MR_Integer STATE_VARIABLE_NextNonReservedF_38_38;
      MR_Integer STATE_VARIABLE_NextNonReservedR_41_41;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_FollowVarsMap_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_NextNonReservedR_0_4;
      MR_Integer next_value_of_STATE_VARIABLE_NextNonReservedF_0_6;

      ArgVar_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1))));
      ArgLoc_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));
      Mode_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1))) & (MR_Integer) 3);
      switch (Mode_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word RegType_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgLoc_18, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Integer RegNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgLoc_18, (MR_Integer) 1))));
            MR_Word Locn_26;
            MR_Word STATE_VARIABLE_FollowVarsMap_35_35;

            {
              Locn_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Locn_26, 0) = (MR_Box) ((MR_Unsigned) (RegType_24));
              MR_hl_field(MR_mktag(1), Locn_26, 1) = ((MR_Box) (RegNum_25));
            }
            succeeded = mercury__map__insert_4_p_0((MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), ((MR_Box) (ArgVar_17)), ((MR_Box) (Locn_26)), STATE_VARIABLE_FollowVarsMap_0_2, &STATE_VARIABLE_FollowVarsMap_35_35);
            if (succeeded)
              STATE_VARIABLE_FollowVarsMap_36_36 = STATE_VARIABLE_FollowVarsMap_35_35;
            else
              STATE_VARIABLE_FollowVarsMap_36_36 = STATE_VARIABLE_FollowVarsMap_0_2;
            switch (RegType_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Integer Var_37 = (MR_Integer) ((MR_Unsigned) RegNum_25 + (MR_Unsigned) (MR_Integer) 1);

                  mercury__int__max_3_p_0(Var_37, STATE_VARIABLE_NextNonReservedF_0_6, &STATE_VARIABLE_NextNonReservedF_38_38);
                  STATE_VARIABLE_NextNonReservedR_41_41 = STATE_VARIABLE_NextNonReservedR_0_4;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Integer Var_40 = (MR_Integer) ((MR_Unsigned) RegNum_25 + (MR_Unsigned) (MR_Integer) 1);

                  mercury__int__max_3_p_0(Var_40, STATE_VARIABLE_NextNonReservedR_0_4, &STATE_VARIABLE_NextNonReservedR_41_41);
                  STATE_VARIABLE_NextNonReservedF_38_38 = STATE_VARIABLE_NextNonReservedF_0_6;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_FollowVarsMap_36_36 = STATE_VARIABLE_FollowVarsMap_0_2;
            STATE_VARIABLE_NextNonReservedR_41_41 = STATE_VARIABLE_NextNonReservedR_0_4;
            STATE_VARIABLE_NextNonReservedF_38_38 = STATE_VARIABLE_NextNonReservedF_0_6;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_FollowVarsMap_36_36 = STATE_VARIABLE_FollowVarsMap_0_2;
            STATE_VARIABLE_NextNonReservedR_41_41 = STATE_VARIABLE_NextNonReservedR_0_4;
            STATE_VARIABLE_NextNonReservedF_38_38 = STATE_VARIABLE_NextNonReservedF_0_6;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ArgsInfos_20;
      next_value_of_STATE_VARIABLE_FollowVarsMap_0_2 = STATE_VARIABLE_FollowVarsMap_36_36;
      next_value_of_STATE_VARIABLE_NextNonReservedR_0_4 = STATE_VARIABLE_NextNonReservedR_41_41;
      next_value_of_STATE_VARIABLE_NextNonReservedF_0_6 = STATE_VARIABLE_NextNonReservedF_38_38;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_FollowVarsMap_0_2 = next_value_of_STATE_VARIABLE_FollowVarsMap_0_2;
      STATE_VARIABLE_NextNonReservedR_0_4 = next_value_of_STATE_VARIABLE_NextNonReservedR_0_4;
      STATE_VARIABLE_NextNonReservedF_0_6 = next_value_of_STATE_VARIABLE_NextNonReservedF_0_6;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__follow_vars__find_final_follow_vars_4_p_0(
  MR_Word ProcInfo_5,
  MR_Word * FollowVarsMap_6,
  MR_Integer * NextNonReservedR_7,
  MR_Integer * NextNonReservedF_8)
{
  {
    MR_Word ArgInfo_9;
    MR_Word HeadVars_10;
    MR_Word ArgInfoHeadVars_11;
    MR_Word FollowVarsMap0_12;

    hlds__hlds_pred__proc_info_arg_info_2_p_0(ProcInfo_5, &ArgInfo_9);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_5, &HeadVars_10);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), (MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]), ArgInfo_9, HeadVars_10, &ArgInfoHeadVars_11);
    mercury__map__init_1_p_0((MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), &FollowVarsMap0_12);
    ll_backend__follow_vars__find_final_follow_vars_2_7_p_0(ArgInfoHeadVars_11, FollowVarsMap0_12, FollowVarsMap_6, (MR_Integer) 1, NextNonReservedR_7, (MR_Integer) 1, NextNonReservedF_8);
  }
}

static void MR_CALL 
ll_backend__follow_vars__find_final_follow_vars_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_NextNonReservedR_0_4,
  MR_Integer * STATE_VARIABLE_NextNonReservedR_5,
  MR_Integer STATE_VARIABLE_NextNonReservedF_0_6,
  MR_Integer * STATE_VARIABLE_NextNonReservedF_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NextNonReservedF_7 = STATE_VARIABLE_NextNonReservedF_0_6;
      *STATE_VARIABLE_NextNonReservedR_5 = STATE_VARIABLE_NextNonReservedR_0_4;
      *HeadVar__3_3 = HeadVar__2_2;
    }
    else
    {
      MR_Word ArgLoc_17;
      MR_Word Mode_18;
      MR_Word Var_19;
      MR_Word ArgInfoVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_FollowVarsMap_35_35;
      MR_Integer STATE_VARIABLE_NextNonReservedF_37_37;
      MR_Integer STATE_VARIABLE_NextNonReservedR_40_40;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_NextNonReservedR_0_4;
      MR_Integer next_value_of_STATE_VARIABLE_NextNonReservedF_0_6;

      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1))));
      ArgLoc_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));
      Mode_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1))) & (MR_Integer) 3);
      switch (Mode_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_FollowVarsMap_35_35 = HeadVar__2_2;
            STATE_VARIABLE_NextNonReservedR_40_40 = STATE_VARIABLE_NextNonReservedR_0_4;
            STATE_VARIABLE_NextNonReservedF_37_37 = STATE_VARIABLE_NextNonReservedF_0_6;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RegType_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgLoc_17, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Integer RegNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgLoc_17, (MR_Integer) 1))));
            MR_Word Locn_26;

            {
              Locn_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Locn_26, 0) = (MR_Box) ((MR_Unsigned) (RegType_24));
              MR_hl_field(MR_mktag(1), Locn_26, 1) = ((MR_Box) (RegNum_25));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__follow_vars_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), ((MR_Box) (Var_19)), ((MR_Box) (Locn_26)), HeadVar__2_2, &STATE_VARIABLE_FollowVarsMap_35_35);
            switch (RegType_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Integer Var_36 = (MR_Integer) ((MR_Unsigned) RegNum_25 + (MR_Unsigned) (MR_Integer) 1);

                  mercury__int__max_3_p_0(Var_36, STATE_VARIABLE_NextNonReservedF_0_6, &STATE_VARIABLE_NextNonReservedF_37_37);
                  STATE_VARIABLE_NextNonReservedR_40_40 = STATE_VARIABLE_NextNonReservedR_0_4;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) RegNum_25 + (MR_Unsigned) (MR_Integer) 1);

                  mercury__int__max_3_p_0(Var_39, STATE_VARIABLE_NextNonReservedR_0_4, &STATE_VARIABLE_NextNonReservedR_40_40);
                  STATE_VARIABLE_NextNonReservedF_37_37 = STATE_VARIABLE_NextNonReservedF_0_6;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_FollowVarsMap_35_35 = HeadVar__2_2;
            STATE_VARIABLE_NextNonReservedR_40_40 = STATE_VARIABLE_NextNonReservedR_0_4;
            STATE_VARIABLE_NextNonReservedF_37_37 = STATE_VARIABLE_NextNonReservedF_0_6;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ArgInfoVars_20;
      next_value_of_HeadVar__2_2 = STATE_VARIABLE_FollowVarsMap_35_35;
      next_value_of_STATE_VARIABLE_NextNonReservedR_0_4 = STATE_VARIABLE_NextNonReservedR_40_40;
      next_value_of_STATE_VARIABLE_NextNonReservedF_0_6 = STATE_VARIABLE_NextNonReservedF_37_37;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_NextNonReservedR_0_4 = next_value_of_STATE_VARIABLE_NextNonReservedR_0_4;
      STATE_VARIABLE_NextNonReservedF_0_6 = next_value_of_STATE_VARIABLE_NextNonReservedF_0_6;
      continue;
    }
    break;
  }
}

void mercury__ll_backend__follow_vars__init(void)
{
}

void mercury__ll_backend__follow_vars__init_type_tables(void)
{
}

void mercury__ll_backend__follow_vars__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__follow_vars__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.follow_vars.
