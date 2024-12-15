/*
** Automatically generated from `code_gen.m'
** by the Mercury compiler,
** version rotd-2024-12-15
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


// :- module ll_backend.code_gen.
// :- implementation.

/*
INIT mercury__ll_backend__code_gen__init
ENDINIT
*/

#include "ll_backend.code_gen.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "analysis.framework.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_desc.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
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
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.commit_gen.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.disj_gen.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.ite_gen.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.livemap.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_debug.mih"
#include "ll_backend.par_conj_gen.mih"
#include "ll_backend.pragma_c_gen.mih"
#include "ll_backend.switch_gen.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen.mih"
#include "ll_backend.unify_gen_construct.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static void MR_CALL 
ll_backend__code_gen__generate_goal_expr_9_p_0(
  MR_Word GoalExpr_10,
  MR_Word GoalInfo_11,
  MR_Word CodeModel_12,
  MR_Word ForwardLiveVarsBeforeGoal_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_55,
  MR_Word * STATE_VARIABLE_CI_56,
  MR_Word STATE_VARIABLE_CLD_0_57,
  MR_Word * STATE_VARIABLE_CLD_58);

static void MR_CALL 
ll_backend__code_gen__generate_conj_inner_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Word CodeModel_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Code_0_5,
  MR_Word * STATE_VARIABLE_Code_6,
  MR_Word STATE_VARIABLE_CI_0_7,
  MR_Word * STATE_VARIABLE_CI_8,
  MR_Word STATE_VARIABLE_CLD_0_9,
  MR_Word * STATE_VARIABLE_CLD_10);

static void MR_CALL 
ll_backend__code_gen__generate_conj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeModel_2,
  MR_Word STATE_VARIABLE_Code_0_3,
  MR_Word * STATE_VARIABLE_Code_4,
  MR_Word STATE_VARIABLE_CI_0_5,
  MR_Word * STATE_VARIABLE_CI_6,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8);

static MR_Word MR_CALL 
ll_backend__code_gen__compute_deep_save_excp_vars_1_f_0(
  MR_Word ProcInfo_3);


static /* final */ const MR_Box ll_backend__code_gen_scalar_common_1[1][2];




static /* final */ const MR_Box ll_backend__code_gen_scalar_common_1[1][2] = {
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


static void MR_CALL 
ll_backend__code_gen__generate_goal_expr_9_p_0(
  MR_Word GoalExpr_10,
  MR_Word GoalInfo_11,
  MR_Word CodeModel_12,
  MR_Word ForwardLiveVarsBeforeGoal_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_55,
  MR_Word * STATE_VARIABLE_CI_56,
  MR_Word STATE_VARIABLE_CLD_0_57,
  MR_Word * STATE_VARIABLE_CLD_58)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Goal_24 = (MR_Word) ((MR_Word) (GoalExpr_10));

        ll_backend__ite_gen__generate_negation_8_p_0(CodeModel_12, Goal_24, GoalInfo_11, Code_14, STATE_VARIABLE_CI_0_55, STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_0_57, STATE_VARIABLE_CLD_58);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Uni_20 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, (MR_Integer) 3))));

        ll_backend__unify_gen__generate_unification_8_p_0(CodeModel_12, Uni_20, GoalInfo_11, Code_14, STATE_VARIABLE_CI_0_55, STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_0_57, STATE_VARIABLE_CLD_58);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_43 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 0))));
        MR_Integer ProcId_44 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 1))));
        MR_Word ArgVars_45 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 2))));
        MR_Word BuiltinState_46 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 3))) & (MR_Integer) 1);

        switch (BuiltinState_46) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__call_gen__generate_builtin_10_p_0(CodeModel_12, PredId_43, ProcId_44, ArgVars_45, GoalInfo_11, Code_14, STATE_VARIABLE_CI_0_55, STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_0_57, STATE_VARIABLE_CLD_58);
            break;
          case (MR_Integer) 1:
            ll_backend__call_gen__generate_call_10_p_0(CodeModel_12, PredId_43, ProcId_44, ArgVars_45, GoalInfo_11, Code_14, STATE_VARIABLE_CI_0_55, STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_0_57, STATE_VARIABLE_CLD_58);
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
            MR_Word Args_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
            MR_Word Modes_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
            MR_Word MaybeRegTypes_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 4))));
            MR_Word Det_42 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 5))) & (MR_Integer) 7);

            ll_backend__call_gen__generate_generic_call_12_p_0(CodeModel_12, GenericCall_38, Args_39, Modes_40, MaybeRegTypes_41, Det_42, GoalInfo_11, Code_14, STATE_VARIABLE_CI_0_55, STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_0_57, STATE_VARIABLE_CLD_58);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
            MR_Word ExtraArgs_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 5))));
            MR_Word MaybeTraceRuntimeCond_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 6))));
            MR_Word PragmaCode_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 7))));
            MR_Word Lang_53;
            MR_Word Args_94 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 4))));
            MR_Word PredId_95 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
            MR_Integer ProcId_96 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));

            Lang_53 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_49);
            switch (Lang_53) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__pragma_c_gen__generate_code_for_foreign_proc_14_p_0(CodeModel_12, Attributes_49, PredId_95, ProcId_96, Args_94, ExtraArgs_50, MaybeTraceRuntimeCond_51, PragmaCode_52, GoalInfo_11, Code_14, STATE_VARIABLE_CI_0_55, STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_0_57, STATE_VARIABLE_CLD_58);
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_gen.generate_goal_expr\'/9", (MR_String) "foreign code other than C");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_22 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));

            switch (ConjType_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ll_backend__par_conj_gen__generate_par_conj_8_p_0(Goals_23, GoalInfo_11, CodeModel_12, Code_14, STATE_VARIABLE_CI_0_55, STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_0_57, STATE_VARIABLE_CLD_58);
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_61;

                  Var_61 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  ll_backend__code_gen__generate_conj_8_p_0(Goals_23, CodeModel_12, Var_61, Code_14, STATE_VARIABLE_CI_0_55, STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_0_57, STATE_VARIABLE_CLD_58);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals_93 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));

            ll_backend__disj_gen__generate_disj_8_p_0(CodeModel_12, Goals_93, GoalInfo_11, Code_14, STATE_VARIABLE_CI_0_55, STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_0_57, STATE_VARIABLE_CLD_58);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
            MR_Word CanFail_30 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word CaseList_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));

            ll_backend__switch_gen__generate_switch_10_p_0(CodeModel_12, Var_29, CanFail_30, CaseList_31, GoalInfo_11, Code_14, STATE_VARIABLE_CI_0_55, STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_0_57, STATE_VARIABLE_CLD_58);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_32 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
            MR_Word SubGoal_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
            MR_Word TermVar_34;
            MR_Word Var_74;

            succeeded = ((((MR_tag((MR_Word) Reason_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_32, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              TermVar_34 = ((MR_Word) ((MR_hl_field(3, Reason_32, (MR_Integer) 1))));
              Var_74 = ((MR_Unsigned) ((MR_hl_field(3, Reason_32, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_74 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              ll_backend__unify_gen_construct__generate_ground_term_6_p_0(TermVar_34, SubGoal_33, STATE_VARIABLE_CI_0_55, STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_0_57, STATE_VARIABLE_CLD_58);
              *Code_14 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            }
            else
            {
              MR_Word LCVar_35;
              MR_Word LCSVar_36;
              MR_Word UseParentStack_37;

              succeeded = ((((MR_tag((MR_Word) Reason_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_32, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                LCVar_35 = ((MR_Word) ((MR_hl_field(3, Reason_32, (MR_Integer) 1))));
                LCSVar_36 = ((MR_Word) ((MR_hl_field(3, Reason_32, (MR_Integer) 2))));
                UseParentStack_37 = ((MR_Unsigned) ((MR_hl_field(3, Reason_32, (MR_Integer) 3))) & (MR_Integer) 1);
                ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0(SubGoal_33, LCVar_35, LCSVar_36, UseParentStack_37, Code_14, STATE_VARIABLE_CI_0_55, STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_0_57, STATE_VARIABLE_CLD_58);
              }
              else
                ll_backend__commit_gen__generate_scope_10_p_0(Reason_32, CodeModel_12, GoalInfo_11, ForwardLiveVarsBeforeGoal_13, SubGoal_33, Code_14, STATE_VARIABLE_CI_0_55, STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_0_57, STATE_VARIABLE_CLD_58);
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
            MR_Word Then_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
            MR_Word Else_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 4))));

            ll_backend__ite_gen__generate_ite_10_p_0(CodeModel_12, Cond_26, Then_27, Else_28, GoalInfo_11, Code_14, STATE_VARIABLE_CI_0_55, STATE_VARIABLE_CI_56, STATE_VARIABLE_CLD_0_57, STATE_VARIABLE_CLD_58);
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_gen.generate_goal_expr\'/9", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__code_gen__generate_conj_inner_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Word CodeModel_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Code_0_5,
  MR_Word * STATE_VARIABLE_Code_6,
  MR_Word STATE_VARIABLE_CI_0_7,
  MR_Word * STATE_VARIABLE_CI_8,
  MR_Word STATE_VARIABLE_CLD_0_9,
  MR_Word * STATE_VARIABLE_CLD_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_CLD_10 = STATE_VARIABLE_CLD_0_9;
      *STATE_VARIABLE_CI_8 = STATE_VARIABLE_CI_0_7;
      *STATE_VARIABLE_Code_6 = STATE_VARIABLE_Code_0_5;
    }
    else
    {
      MR_Word Goal_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      succeeded = (N_2 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word GoalCode_30;
        MR_Word Instmap_31;
        MR_Word STATE_VARIABLE_CI_39_39;
        MR_Word STATE_VARIABLE_CLD_40_40;
        MR_Word STATE_VARIABLE_Code_41_41;

        ll_backend__code_gen__generate_goal_7_p_0(CodeModel_3, Goal_22, &GoalCode_30, STATE_VARIABLE_CI_0_7, &STATE_VARIABLE_CI_39_39, STATE_VARIABLE_CLD_0_9, &STATE_VARIABLE_CLD_40_40);
        STATE_VARIABLE_Code_41_41 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_Code_0_5, GoalCode_30);
        ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_40_40, &Instmap_31);
        succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(Instmap_31);
        if (succeeded)
        {
          *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_CLD_10 = STATE_VARIABLE_CLD_40_40;
          *STATE_VARIABLE_CI_8 = STATE_VARIABLE_CI_39_39;
          *STATE_VARIABLE_Code_6 = STATE_VARIABLE_Code_41_41;
        }
        else
        {
          MR_Integer Var_42 = (MR_Integer) ((MR_Unsigned) N_2 - (MR_Unsigned) 1);
          MR_Word next_value_of_HeadVar__1_1 = Goals_23;
          MR_Integer next_value_of_N_2 = Var_42;
          MR_Word next_value_of_STATE_VARIABLE_Code_0_5 = STATE_VARIABLE_Code_41_41;
          MR_Word next_value_of_STATE_VARIABLE_CI_0_7 = STATE_VARIABLE_CI_39_39;
          MR_Word next_value_of_STATE_VARIABLE_CLD_0_9 = STATE_VARIABLE_CLD_40_40;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          N_2 = next_value_of_N_2;
          STATE_VARIABLE_Code_0_5 = next_value_of_STATE_VARIABLE_Code_0_5;
          STATE_VARIABLE_CI_0_7 = next_value_of_STATE_VARIABLE_CI_0_7;
          STATE_VARIABLE_CLD_0_9 = next_value_of_STATE_VARIABLE_CLD_0_9;
          continue;
        }
      }
      else
      {
        *HeadVar__4_4 = HeadVar__1_1;
        *STATE_VARIABLE_CLD_10 = STATE_VARIABLE_CLD_0_9;
        *STATE_VARIABLE_CI_8 = STATE_VARIABLE_CI_0_7;
        *STATE_VARIABLE_Code_6 = STATE_VARIABLE_Code_0_5;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__code_gen__generate_conj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeModel_2,
  MR_Word STATE_VARIABLE_Code_0_3,
  MR_Word * STATE_VARIABLE_Code_4,
  MR_Word STATE_VARIABLE_CI_0_5,
  MR_Word * STATE_VARIABLE_CI_6,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CLD_8 = STATE_VARIABLE_CLD_0_7;
      *STATE_VARIABLE_CI_6 = STATE_VARIABLE_CI_0_5;
      *STATE_VARIABLE_Code_4 = STATE_VARIABLE_Code_0_3;
    }
    else
    {
      MR_Word LeftOverGoals_26;
      MR_Word STATE_VARIABLE_Code_34_34;
      MR_Word STATE_VARIABLE_CI_35_35;
      MR_Word STATE_VARIABLE_CLD_36_36;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Code_0_3;
      MR_Word next_value_of_STATE_VARIABLE_CI_0_5;
      MR_Word next_value_of_STATE_VARIABLE_CLD_0_7;

      ll_backend__code_gen__generate_conj_inner_10_p_0(HeadVar__1_1, (MR_Integer) 1000, CodeModel_2, &LeftOverGoals_26, STATE_VARIABLE_Code_0_3, &STATE_VARIABLE_Code_34_34, STATE_VARIABLE_CI_0_5, &STATE_VARIABLE_CI_35_35, STATE_VARIABLE_CLD_0_7, &STATE_VARIABLE_CLD_36_36);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = LeftOverGoals_26;
      next_value_of_STATE_VARIABLE_Code_0_3 = STATE_VARIABLE_Code_34_34;
      next_value_of_STATE_VARIABLE_CI_0_5 = STATE_VARIABLE_CI_35_35;
      next_value_of_STATE_VARIABLE_CLD_0_7 = STATE_VARIABLE_CLD_36_36;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Code_0_3 = next_value_of_STATE_VARIABLE_Code_0_3;
      STATE_VARIABLE_CI_0_5 = next_value_of_STATE_VARIABLE_CI_0_5;
      STATE_VARIABLE_CLD_0_7 = next_value_of_STATE_VARIABLE_CLD_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__code_gen__generate_goal_7_p_0(
  MR_Word ContextModel_8,
  MR_Word Goal_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_36,
  MR_Word * STATE_VARIABLE_CI_37,
  MR_Word STATE_VARIABLE_CLD_0_38,
  MR_Word * STATE_VARIABLE_CLD_39)
{
  MR_bool succeeded;
  MR_Word ProcInfo_13;
  MR_Word ForwardLiveVarsBeforeGoal_20;
  MR_Word GoalExpr_21;
  MR_Word GoalInfo_22;
  MR_Word HasSubGoals_23;
  MR_Word InstMap_24;
  MR_Word STATE_VARIABLE_CLD_47_47;

  ll_backend__code_info__get_proc_info_2_p_0(STATE_VARIABLE_CI_0_36, &ProcInfo_13);
  ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(STATE_VARIABLE_CLD_0_38, &ForwardLiveVarsBeforeGoal_20);
  GoalExpr_21 = ((MR_Word) ((MR_hl_field(0, Goal_9, (MR_Integer) 0))));
  GoalInfo_22 = ((MR_Word) ((MR_hl_field(0, Goal_9, (MR_Integer) 1))));
  HasSubGoals_23 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr_21);
  ll_backend__code_loc_dep__pre_goal_update_4_p_0(GoalInfo_22, HasSubGoals_23, STATE_VARIABLE_CLD_0_38, &STATE_VARIABLE_CLD_47_47);
  ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_47_47, &InstMap_24);
  succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_24);
  if (succeeded)
  {
    MR_Word CodeModel_25;
    MR_Word GoalCode_26;
    MR_Word Features_27;
    MR_Word CodeUptoTip_32;
    MR_Word STATE_VARIABLE_CLD_53_53;
    MR_Word STATE_VARIABLE_CLD_57_57;
    MR_Word STATE_VARIABLE_CLD_60_60;
    MR_Word STATE_VARIABLE_CLD_61_61;
    MR_Word CallTableVar_29;
    MR_Word MaybeCallTableVar_28;
    MR_Word Var_92;

    CodeModel_25 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_22);
    switch (CodeModel_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 2:
        switch (ContextModel_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_gen.generate_goal\'/7", (MR_String) "nondet model in det/semidet context");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (ContextModel_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_gen.generate_goal\'/7", (MR_String) "semidet model in det context");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
        break;
    }
    ll_backend__code_gen__generate_goal_expr_9_p_0(GoalExpr_21, GoalInfo_22, CodeModel_25, ForwardLiveVarsBeforeGoal_20, &GoalCode_26, STATE_VARIABLE_CI_0_36, STATE_VARIABLE_CI_37, STATE_VARIABLE_CLD_47_47, &STATE_VARIABLE_CLD_53_53);
    Features_27 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo_22);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), ((MR_Box) ((MR_Integer) 5)), Features_27);
    if (succeeded)
    {
      hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ProcInfo_13, &MaybeCallTableVar_28);
      succeeded = (MaybeCallTableVar_28 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        CallTableVar_29 = ((MR_Word) ((MR_hl_field(1, MaybeCallTableVar_28, (MR_Integer) 0))));
        ll_backend__code_info__get_maybe_trace_info_2_p_0(*STATE_VARIABLE_CI_37, &Var_92);
        succeeded = (Var_92 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
    {
      MR_Word TipSaveCode_31;
      MR_Word Var_56;

      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (CallTableVar_29));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(Var_56, &TipSaveCode_31, *STATE_VARIABLE_CI_37, STATE_VARIABLE_CLD_53_53, &STATE_VARIABLE_CLD_57_57);
      CodeUptoTip_32 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_26, TipSaveCode_31);
    }
    else
    {
      CodeUptoTip_32 = GoalCode_26;
      STATE_VARIABLE_CLD_57_57 = STATE_VARIABLE_CLD_53_53;
    }
    succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), ((MR_Box) ((MR_Integer) 7)), Features_27);
    if (succeeded)
    {
      MR_Word DeepSaveVars_33;
      MR_Word DeepSaveCode_34;

      DeepSaveVars_33 = ll_backend__code_gen__compute_deep_save_excp_vars_1_f_0(ProcInfo_13);
      ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(DeepSaveVars_33, &DeepSaveCode_34, *STATE_VARIABLE_CI_37, STATE_VARIABLE_CLD_57_57, &STATE_VARIABLE_CLD_60_60);
      *Code_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeUptoTip_32, DeepSaveCode_34);
    }
    else
    {
      *Code_10 = CodeUptoTip_32;
      STATE_VARIABLE_CLD_60_60 = STATE_VARIABLE_CLD_57_57;
    }
    ll_backend__code_loc_dep__set_instmap_3_p_0(InstMap_24, STATE_VARIABLE_CLD_60_60, &STATE_VARIABLE_CLD_61_61);
    ll_backend__code_loc_dep__post_goal_update_4_p_0(GoalInfo_22, *STATE_VARIABLE_CI_37, STATE_VARIABLE_CLD_61_61, STATE_VARIABLE_CLD_39);
  }
  else
  {
    *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_39 = STATE_VARIABLE_CLD_47_47;
    *STATE_VARIABLE_CI_37 = STATE_VARIABLE_CI_0_36;
  }
}

static MR_Word MR_CALL 
ll_backend__code_gen__compute_deep_save_excp_vars_1_f_0(
  MR_Word ProcInfo_3)
{
  MR_bool succeeded;
  MR_Word DeepSaveVars_4;
  MR_Word MaybeDeepProfInfo_5;
  MR_Word DeepLayout_8;
  MR_Word DeepProfInfo_6;
  MR_Word MaybeDeepLayout_7;

  hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ProcInfo_3, &MaybeDeepProfInfo_5);
  succeeded = (MaybeDeepProfInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    DeepProfInfo_6 = ((MR_Word) ((MR_hl_field(1, MaybeDeepProfInfo_5, (MR_Integer) 0))));
    MaybeDeepLayout_7 = ((MR_Word) ((MR_hl_field(0, DeepProfInfo_6, (MR_Integer) 1))));
    succeeded = (MaybeDeepLayout_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      DeepLayout_8 = ((MR_Word) ((MR_hl_field(1, MaybeDeepLayout_7, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word ExcpVars_9 = ((MR_Word) ((MR_hl_field(0, DeepLayout_8, (MR_Integer) 1))));
    MR_Word TopCSDVar_10 = ((MR_Word) ((MR_hl_field(0, ExcpVars_9, (MR_Integer) 0))));
    MR_Word MiddleCSDVar_11 = ((MR_Word) ((MR_hl_field(0, ExcpVars_9, (MR_Integer) 1))));
    MR_Word MaybeOldOutermostVar_12 = ((MR_Word) ((MR_hl_field(0, ExcpVars_9, (MR_Integer) 2))));
    MR_Word StackSlots_13;
    MR_Box conv0_Var_14;

    hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ProcInfo_3, &StackSlots_13);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__code_gen_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_13, ((MR_Box) (TopCSDVar_10)), &conv0_Var_14);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
      if ((MaybeOldOutermostVar_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_19, 0) = ((MR_Box) (MiddleCSDVar_11));
          MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          DeepSaveVars_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DeepSaveVars_4, 0) = ((MR_Box) (TopCSDVar_10));
          MR_hl_field(1, DeepSaveVars_4, 1) = ((MR_Box) (Var_19));
        }
      }
      else
      {
        MR_Word OldOutermostVar_15 = ((MR_Word) ((MR_hl_field(1, MaybeOldOutermostVar_12, (MR_Integer) 0))));
        MR_Word Var_16;
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_17, 0) = ((MR_Box) (OldOutermostVar_15));
          MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_16, 0) = ((MR_Box) (MiddleCSDVar_11));
          MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_17));
        }
        {
          DeepSaveVars_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DeepSaveVars_4, 0) = ((MR_Box) (TopCSDVar_10));
          MR_hl_field(1, DeepSaveVars_4, 1) = ((MR_Box) (Var_16));
        }
      }
    else
      DeepSaveVars_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.code_gen.compute_deep_save_excp_vars\'/1", (MR_String) "inconsistent proc_info");
  return DeepSaveVars_4;
}

void mercury__ll_backend__code_gen__init(void)
{
}

void mercury__ll_backend__code_gen__init_type_tables(void)
{
}

void mercury__ll_backend__code_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__code_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.code_gen.
