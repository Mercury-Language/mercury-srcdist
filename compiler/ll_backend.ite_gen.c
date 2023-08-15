/*
** Automatically generated from `ite_gen.m'
** by the Mercury compiler,
** version rotd-2023-08-15
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


// :- module ll_backend.ite_gen.
// :- implementation.

/*
INIT mercury__ll_backend__ite_gen__init
ENDINIT
*/

#include "ll_backend.ite_gen.mih"


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
#include "digraph.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.livemap.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_debug.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__ite_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0;

static MR_bool MR_CALL 
ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__396__1_2_p_0(
  MR_Word MaybeEmbeddedStackFrameId_34,
  MR_Word HeadVar__2_73);

static MR_bool MR_CALL 
ll_backend__ite_gen__generate_negation_general_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__ite_gen__generate_negation_general_10_p_0(
  MR_Word CodeModel_11,
  MR_Word Goal_12,
  MR_Word NotGoalInfo_13,
  MR_Word ResumeVars_14,
  MR_Word ResumeLocs_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_57,
  MR_Word * STATE_VARIABLE_CI_58,
  MR_Word STATE_VARIABLE_CLD_0_59,
  MR_Word * STATE_VARIABLE_CLD_60);

static void MR_CALL 
ll_backend__ite_gen__maybe_create_ite_region_frame_12_p_0(
  MR_Word WholeGoalInfo_13,
  MR_Word CondGoal_14,
  MR_Word ElseGoals_15,
  MR_Word * RegionCondCode_16,
  MR_Word * RegionThenCode_17,
  MR_Word * RegionElseCode_18,
  MR_Word * RegionStackVars_19,
  MR_Word * MaybeEmbeddedStackFrameId_20,
  MR_Word STATE_VARIABLE_CI_0_24,
  MR_Word * STATE_VARIABLE_CI_25,
  MR_Word STATE_VARIABLE_CLD_0_26,
  MR_Word * STATE_VARIABLE_CLD_27);

static void MR_CALL 
ll_backend__ite_gen__create_ite_region_frame_11_p_0(
  MR_Word CondGoal_12,
  MR_Word ElseGoals_13,
  MR_Word * CondCode_14,
  MR_Word * ThenCode_15,
  MR_Word * ElseCode_16,
  MR_Word * StackVars_17,
  MR_Word * MaybeEmbeddedStackFrameId_18,
  MR_Word STATE_VARIABLE_CI_0_66,
  MR_Word * STATE_VARIABLE_CI_67,
  MR_Word STATE_VARIABLE_CLD_0_68,
  MR_Word * STATE_VARIABLE_CLD_69);

static void MR_CALL 
ll_backend__ite_gen__ite_alloc_snapshot_regions_8_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrameId_3,
  MR_Word RemovedVars_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8);

static void MR_CALL 
ll_backend__ite_gen__ite_protect_regions_7_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrameId_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7);

static void MR_CALL 
ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Removed_0_3,
  MR_Word * STATE_VARIABLE_Removed_4);

static void MR_CALL 
ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(
  MR_Word Globals_6,
  MR_Word GoalInfo_7,
  MR_Word * PNegCondCode_8,
  MR_Word * PNegThenCode_9,
  MR_Word * PNegElseCode_10);

static MR_String MR_CALL 
ll_backend__ite_gen__wrap_transient_1_f_0(
  MR_String Code_3);

static void MR_CALL 
ll_backend__ite_gen__read_and_erase_resume_point_5_p_0(
  MR_String CondStr_6,
  MR_Word * ResumeVars_7,
  MR_Word * ResumeLocs_8,
  MR_Word CondInfo0_9,
  MR_Word * CondInfo_10);


static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_1[9][2];

static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_2[1][1];

static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_3[1][5];




static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_restore_transient_registers();\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__ite_gen_scalar_common_2[0])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_pneg_enter_cond();\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__ite_gen_scalar_common_1[3])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_save_transient_registers();\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__ite_gen_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_pneg_enter_then();\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__ite_gen_scalar_common_1[3])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_save_transient_registers();\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__ite_gen_scalar_common_1[7])))
  },
};

static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__ite_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0)),
    ((MR_Box) (&ll_backend__ite_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__ite_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0) }
};

static MR_bool MR_CALL 
ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__396__1_2_p_0(
  MR_Word MaybeEmbeddedStackFrameId_34,
  MR_Word HeadVar__2_73)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[1]), ((MR_Box) (MaybeEmbeddedStackFrameId_34)), ((MR_Box) (HeadVar__2_73)));
  return succeeded;
}

void MR_CALL 
ll_backend__ite_gen__generate_negation_8_p_0(
  MR_Word CodeModel_9,
  MR_Word Goal0_10,
  MR_Word NotGoalInfo_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CI_0_40,
  MR_Word * STATE_VARIABLE_CI_41,
  MR_Word STATE_VARIABLE_CLD_0_42,
  MR_Word * STATE_VARIABLE_CLD_43)
{
  MR_bool succeeded;
  MR_Word GoalExpr_15;
  MR_Word GoalInfo0_16;
  MR_Word ResumeVars_17;
  MR_Word ResumeLocs_18;
  MR_Word GoalInfo_19;
  MR_Word Goal_20;
  MR_Word L_24;
  MR_Word R_25;
  MR_Word CodeAddr_27;
  MR_Word Globals_28;
  MR_Word OptTuple_29;
  MR_Word Var_47;
  MR_Word Var_48;

  switch (CodeModel_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.ite_gen.generate_negation\'/8", (MR_String) "nondet negation");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
  GoalExpr_15 = ((MR_Word) ((MR_hl_field(0, Goal0_10, (MR_Integer) 0))));
  GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, Goal0_10, (MR_Integer) 1))));
  ll_backend__ite_gen__read_and_erase_resume_point_5_p_0((MR_String) "negated goal", &ResumeVars_17, &ResumeLocs_18, GoalInfo0_16, &GoalInfo_19);
  {
    Goal_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_20, 0) = ((MR_Box) (GoalExpr_15));
    MR_hl_field(0, Goal_20, 1) = ((MR_Box) (GoalInfo_19));
  }
  succeeded = (CodeModel_9 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) GoalExpr_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_47 = ((MR_Word) ((MR_hl_field(1, GoalExpr_15, (MR_Integer) 3))));
      succeeded = ((((MR_tag((MR_Word) Var_47)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_47, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        L_24 = ((MR_Word) ((MR_hl_field(3, Var_47, (MR_Integer) 1))));
        R_25 = ((MR_Word) ((MR_hl_field(3, Var_47, (MR_Integer) 2))));
        succeeded = ll_backend__code_loc_dep__failure_is_direct_branch_2_p_0(STATE_VARIABLE_CLD_0_42, &CodeAddr_27);
        if (succeeded)
        {
          ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_40, &Globals_28);
          libs__globals__get_opt_tuple_2_p_0(Globals_28, &OptTuple_29);
          Var_48 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_29, (MR_Integer) 1))) >> 6)) & (MR_Integer) 1);
          succeeded = (Var_48 == (MR_Integer) 0);
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word SimpleNeg_30;
    MR_Word CodeL_31;
    MR_Word ValL_32;
    MR_Word CodeR_33;
    MR_Word ValR_34;
    MR_Word Type_35;
    MR_Word Op_37;
    MR_Word TestCode_39;
    MR_Word Var_49;
    MR_Word STATE_VARIABLE_CLD_50_50;
    MR_Word STATE_VARIABLE_CLD_51_51;
    MR_Word STATE_VARIABLE_CLD_52_52;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Word BuiltinType_36;

    Var_49 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_17);
    ll_backend__code_loc_dep__enter_simple_neg_5_p_0(Var_49, GoalInfo_19, &SimpleNeg_30, STATE_VARIABLE_CLD_0_42, &STATE_VARIABLE_CLD_50_50);
    ll_backend__code_loc_dep__produce_variable_5_p_0(L_24, &CodeL_31, &ValL_32, STATE_VARIABLE_CLD_50_50, &STATE_VARIABLE_CLD_51_51);
    ll_backend__code_loc_dep__produce_variable_5_p_0(R_25, &CodeR_33, &ValR_34, STATE_VARIABLE_CLD_51_51, &STATE_VARIABLE_CLD_52_52);
    Type_35 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_40, L_24);
    succeeded = ((MR_tag((MR_Word) Type_35)) == (MR_Integer) 2);
    if (succeeded)
    {
      BuiltinType_36 = ((MR_Word) ((MR_hl_field(2, Type_35, (MR_Integer) 0))));
      succeeded = (BuiltinType_36 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
        Op_37 = (MR_Word) ((MR_Unsigned) 16U);
      else
      {
        succeeded = (BuiltinType_36 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          Op_37 = (MR_Word) ((MR_Unsigned) 68U);
        else
        {
          MR_Word IntType_38;

          succeeded = ((MR_tag((MR_Word) BuiltinType_36)) == (MR_Integer) 1);
          if (succeeded)
          {
            IntType_38 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_36, (MR_Integer) 0))) & (MR_Integer) 15);
            {
              Op_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Op_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Op_37, 1) = (MR_Box) ((MR_Unsigned) (IntType_38));
            }
          }
          else
            Op_37 = (MR_Word) (MR_mkword(3, &ll_backend__ite_gen_scalar_common_1[2]));
        }
      }
    }
    else
      Op_37 = (MR_Word) (MR_mkword(3, &ll_backend__ite_gen_scalar_common_1[2]));
    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (Op_37));
      MR_hl_field(3, Var_57, 2) = ((MR_Box) (ValL_32));
      MR_hl_field(3, Var_57, 3) = ((MR_Box) (ValR_34));
    }
    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) (Var_57));
      MR_hl_field(3, Var_56, 2) = ((MR_Box) (CodeAddr_27));
    }
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(0, Var_55, 1) = ((MR_Box) ((MR_String) "test inequality"));
    }
    TestCode_39 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_55)));
    ll_backend__code_loc_dep__leave_simple_neg_5_p_0(GoalInfo_19, SimpleNeg_30, STATE_VARIABLE_CI_0_40, STATE_VARIABLE_CLD_52_52, STATE_VARIABLE_CLD_43);
    Var_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeR_33, TestCode_39);
    *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeL_31, Var_60);
    *STATE_VARIABLE_CI_41 = STATE_VARIABLE_CI_0_40;
  }
  else
    ll_backend__ite_gen__generate_negation_general_10_p_0(CodeModel_9, Goal_20, NotGoalInfo_11, ResumeVars_17, ResumeLocs_18, Code_12, STATE_VARIABLE_CI_0_40, STATE_VARIABLE_CI_41, STATE_VARIABLE_CLD_0_42, STATE_VARIABLE_CLD_43);
}

static MR_bool MR_CALL 
ll_backend__ite_gen__generate_negation_general_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__396__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__ite_gen__generate_negation_general_10_p_0(
  MR_Word CodeModel_11,
  MR_Word Goal_12,
  MR_Word NotGoalInfo_13,
  MR_Word ResumeVars_14,
  MR_Word ResumeLocs_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_57,
  MR_Word * STATE_VARIABLE_CI_58,
  MR_Word STATE_VARIABLE_CLD_0_59,
  MR_Word * STATE_VARIABLE_CLD_60)
{
  MR_bool succeeded;
  MR_Word ResumeMap_19;
  MR_Word FlushCode_20;
  MR_Word SaveHpCode_21;
  MR_Word MaybeHpSlot_22;
  MR_Word AddTrailOps_23;
  MR_Word SaveTicketCode_24;
  MR_Word MaybeTicketSlot_25;
  MR_Word GoalInfo_27;
  MR_Word RegionCondCode_30;
  MR_Word RegionThenCode_31;
  MR_Word RegionElseCode_32;
  MR_Word RegionStackVars_33;
  MR_Word MaybeEmbeddedStackFrameId_34;
  MR_Word HijackInfo_35;
  MR_Word PrepareHijackCode_36;
  MR_Word ResumePoint_37;
  MR_Word EffectResumeCode_38;
  MR_Word EnterTraceCode_39;
  MR_Word GoalCode_40;
  MR_Word ThenNeckCode_41;
  MR_Word ElseNeckCode_42;
  MR_Word Zombies_43;
  MR_Word LiveVars_44;
  MR_Word PruneTicketCode_45;
  MR_Word FailTraceCode_46;
  MR_Word FailCode_47;
  MR_Word ResumeCode_49;
  MR_Word RestoreHpCode_50;
  MR_Word RestoreTicketCode_51;
  MR_Word SuccessTraceCode_52;
  MR_Word Globals_53;
  MR_Word PNegCondCode_54;
  MR_Word PNegThenCode_55;
  MR_Word PNegElseCode_56;
  MR_Word Var_61;
  MR_Word STATE_VARIABLE_CLD_62_62;
  MR_Word STATE_VARIABLE_CI_64_64;
  MR_Word STATE_VARIABLE_CLD_65_65;
  MR_Word STATE_VARIABLE_CI_66_66;
  MR_Word STATE_VARIABLE_CLD_67_67;
  MR_Word STATE_VARIABLE_CI_68_68;
  MR_Word STATE_VARIABLE_CLD_69_69;
  MR_Word Var_70;
  MR_Word STATE_VARIABLE_CI_74_74;
  MR_Word STATE_VARIABLE_CLD_75_75;
  MR_Word STATE_VARIABLE_CI_76_76;
  MR_Word STATE_VARIABLE_CLD_77_77;
  MR_Word STATE_VARIABLE_CI_78_78;
  MR_Word STATE_VARIABLE_CLD_79_79;
  MR_Word STATE_VARIABLE_CI_81_81;
  MR_Word STATE_VARIABLE_CLD_82_82;
  MR_Word STATE_VARIABLE_CI_83_83;
  MR_Word STATE_VARIABLE_CLD_84_84;
  MR_Word STATE_VARIABLE_CLD_85_85;
  MR_Word STATE_VARIABLE_CLD_86_86;
  MR_Word STATE_VARIABLE_CI_95_95;
  MR_Word STATE_VARIABLE_CLD_96_96;
  MR_Word STATE_VARIABLE_CI_97_97;
  MR_Word STATE_VARIABLE_CLD_98_98;
  MR_Word STATE_VARIABLE_CLD_99_99;
  MR_Word STATE_VARIABLE_CI_100_100;
  MR_Word STATE_VARIABLE_CLD_101_101;
  MR_Word STATE_VARIABLE_CI_103_103;
  MR_Word STATE_VARIABLE_CLD_104_104;
  MR_Word STATE_VARIABLE_CI_106_106;
  MR_Word STATE_VARIABLE_CLD_107_107;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_130;

  Var_61 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_14);
  ll_backend__code_loc_dep__produce_vars_5_p_0(Var_61, &ResumeMap_19, &FlushCode_20, STATE_VARIABLE_CLD_0_59, &STATE_VARIABLE_CLD_62_62);
  ll_backend__code_loc_dep__ite_maybe_save_hp_8_p_0((MR_Integer) 351, Goal_12, &SaveHpCode_21, &MaybeHpSlot_22, STATE_VARIABLE_CI_0_57, &STATE_VARIABLE_CI_64_64, STATE_VARIABLE_CLD_62_62, &STATE_VARIABLE_CLD_65_65);
  AddTrailOps_23 = ll_backend__code_info__should_add_trail_ops_2_f_0(STATE_VARIABLE_CI_64_64, NotGoalInfo_13);
  ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(AddTrailOps_23, &SaveTicketCode_24, &MaybeTicketSlot_25, STATE_VARIABLE_CI_64_64, &STATE_VARIABLE_CI_66_66, STATE_VARIABLE_CLD_65_65, &STATE_VARIABLE_CLD_67_67);
  GoalInfo_27 = ((MR_Word) ((MR_hl_field(0, Goal_12, (MR_Integer) 1))));
  ll_backend__ite_gen__maybe_create_ite_region_frame_12_p_0(GoalInfo_27, Goal_12, (MR_Word) ((MR_Unsigned) 0U), &RegionCondCode_30, &RegionThenCode_31, &RegionElseCode_32, &RegionStackVars_33, &MaybeEmbeddedStackFrameId_34, STATE_VARIABLE_CI_66_66, &STATE_VARIABLE_CI_68_68, STATE_VARIABLE_CLD_67_67, &STATE_VARIABLE_CLD_69_69);
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&ll_backend__ite_gen_scalar_common_3[0]));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (ll_backend__ite_gen__generate_negation_general_10_p_0_1));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (MaybeEmbeddedStackFrameId_34));
    MR_hl_field(0, Var_70, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140ll_backend.ite_gen.generate_negation_general\'/10", (MR_String) "MaybeEmbeddedStackFrameId = yes(_)");
  ll_backend__code_loc_dep__prepare_for_ite_hijack_8_p_0(CodeModel_11, MaybeEmbeddedStackFrameId_34, &HijackInfo_35, &PrepareHijackCode_36, STATE_VARIABLE_CI_68_68, &STATE_VARIABLE_CI_74_74, STATE_VARIABLE_CLD_69_69, &STATE_VARIABLE_CLD_75_75);
  ll_backend__code_loc_dep__make_resume_point_6_p_0(ResumeVars_14, ResumeLocs_15, ResumeMap_19, &ResumePoint_37, STATE_VARIABLE_CI_74_74, &STATE_VARIABLE_CI_76_76);
  ll_backend__code_loc_dep__effect_resume_point_5_p_0(ResumePoint_37, CodeModel_11, &EffectResumeCode_38, STATE_VARIABLE_CLD_75_75, &STATE_VARIABLE_CLD_77_77);
  ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(Goal_12, NotGoalInfo_13, &EnterTraceCode_39, STATE_VARIABLE_CI_76_76, &STATE_VARIABLE_CI_78_78, STATE_VARIABLE_CLD_77_77, &STATE_VARIABLE_CLD_79_79);
  ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 1, Goal_12, &GoalCode_40, STATE_VARIABLE_CI_78_78, &STATE_VARIABLE_CI_81_81, STATE_VARIABLE_CLD_79_79, &STATE_VARIABLE_CLD_82_82);
  ll_backend__code_loc_dep__ite_enter_then_8_p_0(HijackInfo_35, ResumePoint_37, &ThenNeckCode_41, &ElseNeckCode_42, STATE_VARIABLE_CI_81_81, &STATE_VARIABLE_CI_83_83, STATE_VARIABLE_CLD_82_82, &STATE_VARIABLE_CLD_84_84);
  ll_backend__code_loc_dep__pickup_zombies_3_p_0(&Zombies_43, STATE_VARIABLE_CLD_84_84, &STATE_VARIABLE_CLD_85_85);
  ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(Zombies_43, STATE_VARIABLE_CLD_85_85, &STATE_VARIABLE_CLD_86_86);
  ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(STATE_VARIABLE_CLD_86_86, &LiveVars_44);
  switch (CodeModel_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        PruneTicketCode_45 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        FailTraceCode_46 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        FailCode_47 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        STATE_VARIABLE_CI_95_95 = STATE_VARIABLE_CI_83_83;
        STATE_VARIABLE_CLD_96_96 = STATE_VARIABLE_CLD_86_86;
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word AfterNegatedGoal_48;
        MR_Word STATE_VARIABLE_CI_87_87;
        MR_Word STATE_VARIABLE_CLD_88_88;
        MR_Word STATE_VARIABLE_CI_90_90;
        MR_Word STATE_VARIABLE_CLD_91_91;
        MR_Word STATE_VARIABLE_CI_93_93;
        MR_Word STATE_VARIABLE_CLD_94_94;

        ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_86_86, &AfterNegatedGoal_48);
        ll_backend__code_loc_dep__maybe_release_hp_5_p_0(MaybeHpSlot_22, STATE_VARIABLE_CI_83_83, &STATE_VARIABLE_CI_87_87, STATE_VARIABLE_CLD_86_86, &STATE_VARIABLE_CLD_88_88);
        ll_backend__code_loc_dep__maybe_reset_prune_and_release_ticket_7_p_0(MaybeTicketSlot_25, (MR_Integer) 1, &PruneTicketCode_45, STATE_VARIABLE_CI_87_87, &STATE_VARIABLE_CI_90_90, STATE_VARIABLE_CLD_88_88, &STATE_VARIABLE_CLD_91_91);
        ll_backend__trace_gen__maybe_generate_negated_event_code_8_p_0(Goal_12, NotGoalInfo_13, (MR_Integer) 1, &FailTraceCode_46, STATE_VARIABLE_CI_90_90, &STATE_VARIABLE_CI_93_93, STATE_VARIABLE_CLD_91_91, &STATE_VARIABLE_CLD_94_94);
        ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_47, STATE_VARIABLE_CI_93_93, &STATE_VARIABLE_CI_95_95, STATE_VARIABLE_CLD_94_94);
        ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterNegatedGoal_48, STATE_VARIABLE_CI_95_95, &STATE_VARIABLE_CLD_96_96);
      }
      break;
  }
  ll_backend__code_loc_dep__generate_resume_point_6_p_0(ResumePoint_37, &ResumeCode_49, STATE_VARIABLE_CI_95_95, &STATE_VARIABLE_CI_97_97, STATE_VARIABLE_CLD_96_96, &STATE_VARIABLE_CLD_98_98);
  ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(LiveVars_44, STATE_VARIABLE_CLD_98_98, &STATE_VARIABLE_CLD_99_99);
  ll_backend__code_loc_dep__maybe_restore_and_release_hp_6_p_0(MaybeHpSlot_22, &RestoreHpCode_50, STATE_VARIABLE_CI_97_97, &STATE_VARIABLE_CI_100_100, STATE_VARIABLE_CLD_99_99, &STATE_VARIABLE_CLD_101_101);
  ll_backend__code_loc_dep__maybe_reset_discard_and_release_ticket_7_p_0(MaybeTicketSlot_25, (MR_Integer) 0, &RestoreTicketCode_51, STATE_VARIABLE_CI_100_100, &STATE_VARIABLE_CI_103_103, STATE_VARIABLE_CLD_101_101, &STATE_VARIABLE_CLD_104_104);
  ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(RegionStackVars_33, (MR_Integer) 1, STATE_VARIABLE_CI_103_103, &STATE_VARIABLE_CI_106_106, STATE_VARIABLE_CLD_104_104, &STATE_VARIABLE_CLD_107_107);
  ll_backend__trace_gen__maybe_generate_negated_event_code_8_p_0(Goal_12, NotGoalInfo_13, (MR_Integer) 0, &SuccessTraceCode_52, STATE_VARIABLE_CI_106_106, STATE_VARIABLE_CI_58, STATE_VARIABLE_CLD_107_107, STATE_VARIABLE_CLD_60);
  ll_backend__code_info__get_globals_2_p_0(*STATE_VARIABLE_CI_58, &Globals_53);
  ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(Globals_53, NotGoalInfo_13, &PNegCondCode_54, &PNegThenCode_55, &PNegElseCode_56);
  Var_130 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SuccessTraceCode_52, PNegElseCode_56);
  Var_129 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionElseCode_32, Var_130);
  Var_128 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreHpCode_50, Var_129);
  Var_127 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreTicketCode_51, Var_128);
  Var_126 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ElseNeckCode_42, Var_127);
  Var_125 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResumeCode_49, Var_126);
  Var_124 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_47, Var_125);
  Var_123 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PNegThenCode_55, Var_124);
  Var_122 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailTraceCode_46, Var_123);
  Var_121 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionThenCode_31, Var_122);
  Var_120 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PruneTicketCode_45, Var_121);
  Var_119 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThenNeckCode_41, Var_120);
  Var_118 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_40, Var_119);
  Var_117 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PNegCondCode_54, Var_118);
  Var_116 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EnterTraceCode_39, Var_117);
  Var_115 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionCondCode_30, Var_116);
  Var_114 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveTicketCode_24, Var_115);
  Var_113 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveHpCode_21, Var_114);
  Var_112 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EffectResumeCode_38, Var_113);
  Var_111 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrepareHijackCode_36, Var_112);
  *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FlushCode_20, Var_111);
}

void MR_CALL 
ll_backend__ite_gen__generate_ite_10_p_0(
  MR_Word CodeModel_11,
  MR_Word CondGoal0_12,
  MR_Word ThenGoal_13,
  MR_Word ElseGoal_14,
  MR_Word IteGoalInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_80,
  MR_Word * STATE_VARIABLE_CI_81,
  MR_Word STATE_VARIABLE_CLD_0_82,
  MR_Word * STATE_VARIABLE_CLD_83)
{
  MR_bool succeeded;
  MR_Word CondExpr_19 = ((MR_Word) ((MR_hl_field(0, CondGoal0_12, (MR_Integer) 0))));
  MR_Word CondInfo0_20 = ((MR_Word) ((MR_hl_field(0, CondGoal0_12, (MR_Integer) 1))));
  MR_Word CondCodeModel_21;
  MR_Word EffCodeModel_22;
  MR_Word ResumeVars_23;
  MR_Word ResumeLocs_24;
  MR_Word CondInfo_25;
  MR_Word CondGoal_26;
  MR_Word ResumeMap_27;
  MR_Word FlushCode_28;
  MR_Word SaveHpCode_29;
  MR_Word MaybeHpSlot_30;
  MR_Word AddTrailOps_31;
  MR_Word SaveTicketCode_32;
  MR_Word MaybeTicketSlot_33;
  MR_Word ElseGoals_35;
  MR_Word RegionCondCode_36;
  MR_Word RegionThenCode_37;
  MR_Word RegionElseCode_38;
  MR_Word RegionStackVars_39;
  MR_Word MaybeEmbeddedStackFrameId_40;
  MR_Word BranchStart_41;
  MR_Word HijackInfo_42;
  MR_Word PrepareHijackCode_43;
  MR_Word ResumePoint_44;
  MR_Word EffectResumeCode_45;
  MR_Word CondTraceCode_51;
  MR_Word CondCode_52;
  MR_Word ThenNeckCode_53;
  MR_Word ElseNeckCode_54;
  MR_Word Zombies_55;
  MR_Word ResetTicketCode_56;
  MR_Word StoreMap_57;
  MR_Word EndCondInstMap_58;
  MR_Word ThenTraceCode_59;
  MR_Word ThenCode_60;
  MR_Word BranchEndStoreMap_61;
  MR_Word MaybeEnd0_62;
  MR_Word ThenSaveCode_63;
  MR_Word ResumeCode_64;
  MR_Word RestoreHpCode_66;
  MR_Word RestoreTicketCode_67;
  MR_Word ElseTraceCode_68;
  MR_Word ElseCode_69;
  MR_Word MaybeEnd_70;
  MR_Word ElseSaveCode_71;
  MR_Word EndLabel_73;
  MR_Word JumpToEndCode_74;
  MR_Word EndLabelCode_75;
  MR_Word Globals_76;
  MR_Word PNegCondCode_77;
  MR_Word PNegThenCode_78;
  MR_Word PNegElseCode_79;
  MR_Word Var_85;
  MR_Word STATE_VARIABLE_CLD_86_86;
  MR_Word STATE_VARIABLE_CI_88_88;
  MR_Word STATE_VARIABLE_CLD_89_89;
  MR_Word STATE_VARIABLE_CI_92_92;
  MR_Word STATE_VARIABLE_CLD_93_93;
  MR_Word STATE_VARIABLE_CI_94_94;
  MR_Word STATE_VARIABLE_CLD_95_95;
  MR_Word STATE_VARIABLE_CI_96_96;
  MR_Word STATE_VARIABLE_CLD_97_97;
  MR_Word STATE_VARIABLE_CI_98_98;
  MR_Word STATE_VARIABLE_CLD_99_99;
  MR_Word STATE_VARIABLE_CI_107_107;
  MR_Word STATE_VARIABLE_CLD_108_108;
  MR_Word STATE_VARIABLE_CI_109_109;
  MR_Word STATE_VARIABLE_CLD_110_110;
  MR_Word STATE_VARIABLE_CI_111_111;
  MR_Word STATE_VARIABLE_CLD_112_112;
  MR_Word STATE_VARIABLE_CLD_113_113;
  MR_Word STATE_VARIABLE_CLD_114_114;
  MR_Word STATE_VARIABLE_CI_122_122;
  MR_Word STATE_VARIABLE_CLD_123_123;
  MR_Word STATE_VARIABLE_CI_126_126;
  MR_Word STATE_VARIABLE_CLD_127_127;
  MR_Word STATE_VARIABLE_CLD_129_129;
  MR_Word STATE_VARIABLE_CI_130_130;
  MR_Word STATE_VARIABLE_CLD_131_131;
  MR_Word STATE_VARIABLE_CI_140_140;
  MR_Word STATE_VARIABLE_CLD_141_141;
  MR_Word STATE_VARIABLE_CI_143_143;
  MR_Word STATE_VARIABLE_CLD_144_144;
  MR_Word STATE_VARIABLE_CI_145_145;
  MR_Word STATE_VARIABLE_CLD_146_146;
  MR_Word STATE_VARIABLE_CI_147_147;
  MR_Word STATE_VARIABLE_CLD_148_148;
  MR_Word Var_158;
  MR_Word Var_159;
  MR_Word Var_160;
  MR_Word Var_162;
  MR_Word Var_163;
  MR_Word Var_165;
  MR_Word Var_166;
  MR_Word Var_167;
  MR_Word Var_168;
  MR_Word Var_169;
  MR_Word Var_170;
  MR_Word Var_171;
  MR_Word Var_172;
  MR_Word Var_173;
  MR_Word Var_174;
  MR_Word Var_175;
  MR_Word Var_176;
  MR_Word Var_177;
  MR_Word Var_178;
  MR_Word Var_179;
  MR_Word Var_180;
  MR_Word Var_181;
  MR_Word Var_182;
  MR_Word Var_183;
  MR_Word Var_184;
  MR_Word Var_185;
  MR_Word Var_186;
  MR_Word Var_187;
  MR_Word Var_188;
  MR_Word Var_189;

  CondCodeModel_21 = hlds__code_model__goal_info_get_code_model_1_f_0(CondInfo0_20);
  succeeded = (CodeModel_11 == (MR_Integer) 2);
  if (succeeded)
    succeeded = (CondCodeModel_21 != (MR_Integer) 2);
  if (succeeded)
    EffCodeModel_22 = (MR_Integer) 1;
  else
    EffCodeModel_22 = CodeModel_11;
  ll_backend__ite_gen__read_and_erase_resume_point_5_p_0((MR_String) "condition of an if-then-else", &ResumeVars_23, &ResumeLocs_24, CondInfo0_20, &CondInfo_25);
  {
    CondGoal_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CondGoal_26, 0) = ((MR_Box) (CondExpr_19));
    MR_hl_field(0, CondGoal_26, 1) = ((MR_Box) (CondInfo_25));
  }
  Var_85 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_23);
  ll_backend__code_loc_dep__produce_vars_5_p_0(Var_85, &ResumeMap_27, &FlushCode_28, STATE_VARIABLE_CLD_0_82, &STATE_VARIABLE_CLD_86_86);
  ll_backend__code_loc_dep__ite_maybe_save_hp_8_p_0((MR_Integer) 351, CondGoal_26, &SaveHpCode_29, &MaybeHpSlot_30, STATE_VARIABLE_CI_0_80, &STATE_VARIABLE_CI_88_88, STATE_VARIABLE_CLD_86_86, &STATE_VARIABLE_CLD_89_89);
  AddTrailOps_31 = ll_backend__code_info__should_add_trail_ops_2_f_0(STATE_VARIABLE_CI_88_88, IteGoalInfo_15);
  switch (AddTrailOps_31) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_215;

        Var_90 = hlds__goal_form__goal_cannot_modify_trail_1_f_0(CondInfo0_20);
        succeeded = (Var_90 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (CondCodeModel_21 != (MR_Integer) 2);
          if (succeeded)
          {
            Var_91 = (MR_Integer) 1;
            ll_backend__code_info__get_opt_trail_ops_2_p_0(STATE_VARIABLE_CI_88_88, &Var_215);
            succeeded = (Var_91 == Var_215);
          }
        }
        if (succeeded)
        {
          SaveTicketCode_32 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          MaybeTicketSlot_33 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_CLD_93_93 = STATE_VARIABLE_CLD_89_89;
          STATE_VARIABLE_CI_92_92 = STATE_VARIABLE_CI_88_88;
        }
        else
        {
          MR_Word TicketSlot_34;

          ll_backend__code_loc_dep__save_ticket_6_p_0(&SaveTicketCode_32, &TicketSlot_34, STATE_VARIABLE_CI_88_88, &STATE_VARIABLE_CI_92_92, STATE_VARIABLE_CLD_89_89, &STATE_VARIABLE_CLD_93_93);
          {
            MaybeTicketSlot_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeTicketSlot_33, 0) = ((MR_Box) (TicketSlot_34));
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        SaveTicketCode_32 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        MaybeTicketSlot_33 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_CI_92_92 = STATE_VARIABLE_CI_88_88;
        STATE_VARIABLE_CLD_93_93 = STATE_VARIABLE_CLD_89_89;
      }
      break;
  }
  hlds__hlds_goal__goal_to_conj_list_2_p_0(ElseGoal_14, &ElseGoals_35);
  ll_backend__ite_gen__maybe_create_ite_region_frame_12_p_0(IteGoalInfo_15, CondGoal_26, ElseGoals_35, &RegionCondCode_36, &RegionThenCode_37, &RegionElseCode_38, &RegionStackVars_39, &MaybeEmbeddedStackFrameId_40, STATE_VARIABLE_CI_92_92, &STATE_VARIABLE_CI_94_94, STATE_VARIABLE_CLD_93_93, &STATE_VARIABLE_CLD_95_95);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_95_95, &BranchStart_41);
  ll_backend__code_loc_dep__prepare_for_ite_hijack_8_p_0(CondCodeModel_21, MaybeEmbeddedStackFrameId_40, &HijackInfo_42, &PrepareHijackCode_43, STATE_VARIABLE_CI_94_94, &STATE_VARIABLE_CI_96_96, STATE_VARIABLE_CLD_95_95, &STATE_VARIABLE_CLD_97_97);
  ll_backend__code_loc_dep__make_resume_point_6_p_0(ResumeVars_23, ResumeLocs_24, ResumeMap_27, &ResumePoint_44, STATE_VARIABLE_CI_96_96, &STATE_VARIABLE_CI_98_98);
  ll_backend__code_loc_dep__effect_resume_point_5_p_0(ResumePoint_44, EffCodeModel_22, &EffectResumeCode_45, STATE_VARIABLE_CLD_97_97, &STATE_VARIABLE_CLD_99_99);
  ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(CondGoal_26, IteGoalInfo_15, &CondTraceCode_51, STATE_VARIABLE_CI_98_98, &STATE_VARIABLE_CI_107_107, STATE_VARIABLE_CLD_99_99, &STATE_VARIABLE_CLD_108_108);
  ll_backend__code_gen__generate_goal_7_p_0(CondCodeModel_21, CondGoal_26, &CondCode_52, STATE_VARIABLE_CI_107_107, &STATE_VARIABLE_CI_109_109, STATE_VARIABLE_CLD_108_108, &STATE_VARIABLE_CLD_110_110);
  ll_backend__code_loc_dep__ite_enter_then_8_p_0(HijackInfo_42, ResumePoint_44, &ThenNeckCode_53, &ElseNeckCode_54, STATE_VARIABLE_CI_109_109, &STATE_VARIABLE_CI_111_111, STATE_VARIABLE_CLD_110_110, &STATE_VARIABLE_CLD_112_112);
  ll_backend__code_loc_dep__pickup_zombies_3_p_0(&Zombies_55, STATE_VARIABLE_CLD_112_112, &STATE_VARIABLE_CLD_113_113);
  ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(Zombies_55, STATE_VARIABLE_CLD_113_113, &STATE_VARIABLE_CLD_114_114);
  switch (CondCodeModel_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_CI_116_116;
        MR_Word STATE_VARIABLE_CLD_117_117;
        MR_Word STATE_VARIABLE_CI_119_119;
        MR_Word STATE_VARIABLE_CLD_120_120;

        ll_backend__code_loc_dep__maybe_release_hp_5_p_0(MaybeHpSlot_30, STATE_VARIABLE_CI_111_111, &STATE_VARIABLE_CI_116_116, STATE_VARIABLE_CLD_114_114, &STATE_VARIABLE_CLD_117_117);
        ll_backend__code_loc_dep__maybe_reset_prune_and_release_ticket_7_p_0(MaybeTicketSlot_33, (MR_Integer) 1, &ResetTicketCode_56, STATE_VARIABLE_CI_116_116, &STATE_VARIABLE_CI_119_119, STATE_VARIABLE_CLD_117_117, &STATE_VARIABLE_CLD_120_120);
        ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(RegionStackVars_39, (MR_Integer) 1, STATE_VARIABLE_CI_119_119, &STATE_VARIABLE_CI_122_122, STATE_VARIABLE_CLD_120_120, &STATE_VARIABLE_CLD_123_123);
      }
      break;
    case (MR_Integer) 2:
      {
        ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(MaybeTicketSlot_33, (MR_Integer) 2, &ResetTicketCode_56);
        STATE_VARIABLE_CI_122_122 = STATE_VARIABLE_CI_111_111;
        STATE_VARIABLE_CLD_123_123 = STATE_VARIABLE_CLD_114_114;
      }
      break;
  }
  hlds__hlds_llds__goal_info_get_store_map_2_p_0(IteGoalInfo_15, &StoreMap_57);
  ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_123_123, &EndCondInstMap_58);
  succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(EndCondInstMap_58);
  if (succeeded)
  {
    ThenTraceCode_59 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    ThenCode_60 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    mercury__map__init_1_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), &BranchEndStoreMap_61);
    STATE_VARIABLE_CLD_127_127 = STATE_VARIABLE_CLD_123_123;
    STATE_VARIABLE_CI_126_126 = STATE_VARIABLE_CI_122_122;
  }
  else
  {
    MR_Word STATE_VARIABLE_CI_124_124;
    MR_Word STATE_VARIABLE_CLD_125_125;

    ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ThenGoal_13, IteGoalInfo_15, &ThenTraceCode_59, STATE_VARIABLE_CI_122_122, &STATE_VARIABLE_CI_124_124, STATE_VARIABLE_CLD_123_123, &STATE_VARIABLE_CLD_125_125);
    ll_backend__code_gen__generate_goal_7_p_0(CodeModel_11, ThenGoal_13, &ThenCode_60, STATE_VARIABLE_CI_124_124, &STATE_VARIABLE_CI_126_126, STATE_VARIABLE_CLD_125_125, &STATE_VARIABLE_CLD_127_127);
    BranchEndStoreMap_61 = StoreMap_57;
  }
  ll_backend__code_loc_dep__generate_branch_end_5_p_0(BranchEndStoreMap_61, (MR_Word) ((MR_Unsigned) 0U), &MaybeEnd0_62, &ThenSaveCode_63, STATE_VARIABLE_CLD_127_127);
  ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_41, STATE_VARIABLE_CI_126_126, &STATE_VARIABLE_CLD_129_129);
  ll_backend__code_loc_dep__generate_resume_point_6_p_0(ResumePoint_44, &ResumeCode_64, STATE_VARIABLE_CI_126_126, &STATE_VARIABLE_CI_130_130, STATE_VARIABLE_CLD_129_129, &STATE_VARIABLE_CLD_131_131);
  ll_backend__code_loc_dep__maybe_restore_and_release_hp_6_p_0(MaybeHpSlot_30, &RestoreHpCode_66, STATE_VARIABLE_CI_130_130, &STATE_VARIABLE_CI_140_140, STATE_VARIABLE_CLD_131_131, &STATE_VARIABLE_CLD_141_141);
  ll_backend__code_loc_dep__maybe_reset_discard_and_release_ticket_7_p_0(MaybeTicketSlot_33, (MR_Integer) 0, &RestoreTicketCode_67, STATE_VARIABLE_CI_140_140, &STATE_VARIABLE_CI_143_143, STATE_VARIABLE_CLD_141_141, &STATE_VARIABLE_CLD_144_144);
  ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ElseGoal_14, IteGoalInfo_15, &ElseTraceCode_68, STATE_VARIABLE_CI_143_143, &STATE_VARIABLE_CI_145_145, STATE_VARIABLE_CLD_144_144, &STATE_VARIABLE_CLD_146_146);
  ll_backend__code_gen__generate_goal_7_p_0(CodeModel_11, ElseGoal_14, &ElseCode_69, STATE_VARIABLE_CI_145_145, &STATE_VARIABLE_CI_147_147, STATE_VARIABLE_CLD_146_146, &STATE_VARIABLE_CLD_148_148);
  ll_backend__code_loc_dep__generate_branch_end_5_p_0(StoreMap_57, MaybeEnd0_62, &MaybeEnd_70, &ElseSaveCode_71, STATE_VARIABLE_CLD_148_148);
  ll_backend__code_info__get_next_label_3_p_0(&EndLabel_73, STATE_VARIABLE_CI_147_147, STATE_VARIABLE_CI_81);
  {
    Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_160, 0) = ((MR_Box) (EndLabel_73));
  }
  {
    Var_159 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_159, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_159, 1) = ((MR_Box) (Var_160));
  }
  {
    Var_158 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_158, 0) = ((MR_Box) (Var_159));
    MR_hl_field(0, Var_158, 1) = ((MR_Box) ((MR_String) "Jump to the end of if-then-else"));
  }
  JumpToEndCode_74 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_158)));
  {
    Var_163 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_163, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_163, 1) = ((MR_Box) (EndLabel_73));
  }
  {
    Var_162 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_162, 0) = ((MR_Box) (Var_163));
    MR_hl_field(0, Var_162, 1) = ((MR_Box) ((MR_String) "end of if-then-else"));
  }
  EndLabelCode_75 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_162)));
  ll_backend__code_info__get_globals_2_p_0(*STATE_VARIABLE_CI_81, &Globals_76);
  ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(Globals_76, CondInfo_25, &PNegCondCode_77, &PNegThenCode_78, &PNegElseCode_79);
  Var_189 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ElseSaveCode_71, EndLabelCode_75);
  Var_188 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ElseCode_69, Var_189);
  Var_187 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PNegElseCode_79, Var_188);
  Var_186 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ElseTraceCode_68, Var_187);
  Var_185 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionElseCode_38, Var_186);
  Var_184 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreTicketCode_67, Var_185);
  Var_183 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreHpCode_66, Var_184);
  Var_182 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ElseNeckCode_54, Var_183);
  Var_181 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResumeCode_64, Var_182);
  Var_180 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), JumpToEndCode_74, Var_181);
  Var_179 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThenSaveCode_63, Var_180);
  Var_178 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThenCode_60, Var_179);
  Var_177 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PNegThenCode_78, Var_178);
  Var_176 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThenTraceCode_59, Var_177);
  Var_175 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionThenCode_37, Var_176);
  Var_174 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResetTicketCode_56, Var_175);
  Var_173 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThenNeckCode_53, Var_174);
  Var_172 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CondCode_52, Var_173);
  Var_171 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PNegCondCode_77, Var_172);
  Var_170 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CondTraceCode_51, Var_171);
  Var_169 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EffectResumeCode_45, Var_170);
  Var_168 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrepareHijackCode_43, Var_169);
  Var_167 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionCondCode_36, Var_168);
  Var_166 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveTicketCode_32, Var_167);
  Var_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveHpCode_29, Var_166);
  *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FlushCode_28, Var_165);
  ll_backend__code_loc_dep__after_all_branches_4_p_0(StoreMap_57, MaybeEnd_70, *STATE_VARIABLE_CI_81, STATE_VARIABLE_CLD_83);
}

static void MR_CALL 
ll_backend__ite_gen__maybe_create_ite_region_frame_12_p_0(
  MR_Word WholeGoalInfo_13,
  MR_Word CondGoal_14,
  MR_Word ElseGoals_15,
  MR_Word * RegionCondCode_16,
  MR_Word * RegionThenCode_17,
  MR_Word * RegionElseCode_18,
  MR_Word * RegionStackVars_19,
  MR_Word * MaybeEmbeddedStackFrameId_20,
  MR_Word STATE_VARIABLE_CI_0_24,
  MR_Word * STATE_VARIABLE_CI_25,
  MR_Word STATE_VARIABLE_CLD_0_26,
  MR_Word * STATE_VARIABLE_CLD_27)
{
  MR_Word AddRegionOps_23;

  AddRegionOps_23 = ll_backend__code_info__should_add_region_ops_2_f_0(STATE_VARIABLE_CI_0_24, WholeGoalInfo_13);
  switch (AddRegionOps_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__ite_gen__create_ite_region_frame_11_p_0(CondGoal_14, ElseGoals_15, RegionCondCode_16, RegionThenCode_17, RegionElseCode_18, RegionStackVars_19, MaybeEmbeddedStackFrameId_20, STATE_VARIABLE_CI_0_24, STATE_VARIABLE_CI_25, STATE_VARIABLE_CLD_0_26, STATE_VARIABLE_CLD_27);
      break;
    case (MR_Integer) 1:
      {
        *RegionCondCode_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *RegionThenCode_17 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *RegionElseCode_18 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *RegionStackVars_19 = (MR_Word) ((MR_Unsigned) 0U);
        *MaybeEmbeddedStackFrameId_20 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_CI_25 = STATE_VARIABLE_CI_0_24;
        *STATE_VARIABLE_CLD_27 = STATE_VARIABLE_CLD_0_26;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__ite_gen__create_ite_region_frame_11_p_0(
  MR_Word CondGoal_12,
  MR_Word ElseGoals_13,
  MR_Word * CondCode_14,
  MR_Word * ThenCode_15,
  MR_Word * ElseCode_16,
  MR_Word * StackVars_17,
  MR_Word * MaybeEmbeddedStackFrameId_18,
  MR_Word STATE_VARIABLE_CI_0_66,
  MR_Word * STATE_VARIABLE_CI_67,
  MR_Word STATE_VARIABLE_CLD_0_68,
  MR_Word * STATE_VARIABLE_CLD_69)
{
  MR_bool succeeded;
  MR_Word ForwardLiveVars_21;
  MR_Word LiveRegionVars_22;
  MR_Word CondGoalInfo_24;
  MR_Word MaybeRbmmInfo_25;

  ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(STATE_VARIABLE_CLD_0_68, &ForwardLiveVars_21);
  LiveRegionVars_22 = ll_backend__code_info__filter_region_vars_2_f_0(STATE_VARIABLE_CI_0_66, ForwardLiveVars_21);
  CondGoalInfo_24 = ((MR_Word) ((MR_hl_field(0, CondGoal_12, (MR_Integer) 1))));
  MaybeRbmmInfo_25 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(CondGoalInfo_24);
  if ((MaybeRbmmInfo_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *CondCode_14 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *ThenCode_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *ElseCode_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *StackVars_17 = (MR_Word) ((MR_Unsigned) 0U);
    *MaybeEmbeddedStackFrameId_18 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CI_67 = STATE_VARIABLE_CI_0_66;
    *STATE_VARIABLE_CLD_69 = STATE_VARIABLE_CLD_0_68;
  }
  else
  {
    MR_Word RbmmInfo_26 = ((MR_Word) ((MR_hl_field(1, MaybeRbmmInfo_25, (MR_Integer) 0))));
    MR_Word CondGoals_27;
    MR_Word CondCreatedRegionVars_28;
    MR_Word CondRemovedRegionVars_29;
    MR_Word CondCarriedRegionVars_30;
    MR_Word CondAllocRegionVars_31;
    MR_Word ReversedCondGoals_33;
    MR_Word ModuleInfo_34;
    MR_Word RemovedAtEndOfThen_35;
    MR_Word NeedToBeProtectedRegionVars_36;
    MR_Word Var_70;

    hlds__hlds_goal__goal_to_conj_list_2_p_0(CondGoal_12, &CondGoals_27);
    CondCreatedRegionVars_28 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_26, (MR_Integer) 0))));
    CondRemovedRegionVars_29 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_26, (MR_Integer) 1))));
    CondCarriedRegionVars_30 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_26, (MR_Integer) 2))));
    CondAllocRegionVars_31 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_26, (MR_Integer) 3))));
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CondGoals_27, &ReversedCondGoals_33);
    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_66, &ModuleInfo_34);
    Var_70 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]));
    ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(ReversedCondGoals_33, ModuleInfo_34, Var_70, &RemovedAtEndOfThen_35);
    mercury__set__difference_3_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), CondRemovedRegionVars_29, RemovedAtEndOfThen_35, &NeedToBeProtectedRegionVars_36);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), CondCreatedRegionVars_28);
    if (succeeded)
    {
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), NeedToBeProtectedRegionVars_36);
      if (succeeded)
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), CondAllocRegionVars_31);
    }
    if (succeeded)
    {
      *CondCode_14 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *ThenCode_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *ElseCode_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *StackVars_17 = (MR_Word) ((MR_Unsigned) 0U);
      *MaybeEmbeddedStackFrameId_18 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_CLD_69 = STATE_VARIABLE_CLD_0_68;
      *STATE_VARIABLE_CI_67 = STATE_VARIABLE_CI_0_66;
    }
    else
    {
      MR_Word RemovedAtStartOfElse_37;
      MR_Word UnprotectedRemovedAtStartOfElse_38;
      MR_Word ProtectRegionVars_39;
      MR_Word SnapshotRegionVars0_40;
      MR_Word SnapshotRegionVars_41;
      MR_Word ProtectRegionVarList_42;
      MR_Word SnapshotRegionVarList_43;
      MR_Integer NumProtectRegionVars_44;
      MR_Integer NumSnapshotRegionVars_45;
      MR_Word Globals_46;
      MR_Integer FixedSize_47;
      MR_Integer ProtectSize_48;
      MR_Integer SnapshotSize_49;
      MR_Integer FrameSize_50;
      MR_Word Items_51;
      MR_Word MainStackId_52;
      MR_Integer FirstSlotNum_53;
      MR_Integer LastSlotNum_54;
      MR_Word EmbeddedStackFrameId_55;
      MR_Word FirstNonFixedAddr_56;
      MR_Word ProtectNumRegLval_57;
      MR_Word SnapshotNumRegLval_58;
      MR_Word AddrRegLval_59;
      MR_Word PushInitCode_60;
      MR_Word ProtectRegionCode_61;
      MR_Word SnapshotRegionCode_62;
      MR_Word SetCode_63;
      MR_Word CondCodeModel_64;
      MR_Word CondKind_65;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Integer Var_78;
      MR_Integer Var_79;
      MR_Integer Var_80;
      MR_Word STATE_VARIABLE_CLD_84_84;
      MR_Word STATE_VARIABLE_CLD_86_86;
      MR_Word STATE_VARIABLE_CLD_88_88;
      MR_Word STATE_VARIABLE_CLD_90_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_String Var_113;
      MR_Word STATE_VARIABLE_CLD_117_117;
      MR_Word STATE_VARIABLE_CLD_118_118;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_123;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Word Var_129;
      MR_Word STATE_VARIABLE_CLD_132_132;
      MR_Word STATE_VARIABLE_CLD_133_133;
      MR_Word Var_137;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_140;
      MR_Word Var_141;
      MR_Word Var_143;
      MR_Word Var_144;
      MR_Word Var_145;

      Var_71 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]));
      ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(ElseGoals_13, ModuleInfo_34, Var_71, &RemovedAtStartOfElse_37);
      mercury__set__intersect_3_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), RemovedAtStartOfElse_37, CondCarriedRegionVars_30, &UnprotectedRemovedAtStartOfElse_38);
      Var_72 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedToBeProtectedRegionVars_36);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveRegionVars_22, Var_72, &ProtectRegionVars_39);
      Var_73 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondAllocRegionVars_31);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveRegionVars_22, Var_73, &SnapshotRegionVars0_40);
      Var_74 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), UnprotectedRemovedAtStartOfElse_38);
      parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SnapshotRegionVars0_40, Var_74, &SnapshotRegionVars_41);
      ProtectRegionVarList_42 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProtectRegionVars_39);
      SnapshotRegionVarList_43 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SnapshotRegionVars_41);
      mercury__list__length_2_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), ProtectRegionVarList_42, &NumProtectRegionVars_44);
      mercury__list__length_2_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), SnapshotRegionVarList_43, &NumSnapshotRegionVars_45);
      ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_66, &Globals_46);
      libs__globals__lookup_int_option_3_p_0(Globals_46, (MR_Integer) 336, &FixedSize_47);
      libs__globals__lookup_int_option_3_p_0(Globals_46, (MR_Integer) 339, &ProtectSize_48);
      libs__globals__lookup_int_option_3_p_0(Globals_46, (MR_Integer) 340, &SnapshotSize_49);
      Var_79 = (MR_Integer) ((MR_Unsigned) ProtectSize_48 * (MR_Unsigned) NumProtectRegionVars_44);
      Var_78 = (MR_Integer) ((MR_Unsigned) FixedSize_47 + (MR_Unsigned) Var_79);
      Var_80 = (MR_Integer) ((MR_Unsigned) SnapshotSize_49 * (MR_Unsigned) NumSnapshotRegionVars_45);
      FrameSize_50 = (MR_Integer) ((MR_Unsigned) Var_78 + (MR_Unsigned) Var_80);
      Items_51 = mercury__list__duplicate_2_f_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), FrameSize_50, ((MR_Box) ((MR_Unsigned) 28U)));
      ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(Items_51, (MR_Integer) 1, StackVars_17, &MainStackId_52, &FirstSlotNum_53, &LastSlotNum_54, STATE_VARIABLE_CI_0_66, STATE_VARIABLE_CI_67, STATE_VARIABLE_CLD_0_68, &STATE_VARIABLE_CLD_84_84);
      {
        EmbeddedStackFrameId_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, EmbeddedStackFrameId_55, 0) = (MR_Box) ((MR_Unsigned) (MainStackId_52));
        MR_hl_field(0, EmbeddedStackFrameId_55, 1) = ((MR_Box) (FirstSlotNum_53));
        MR_hl_field(0, EmbeddedStackFrameId_55, 2) = ((MR_Box) (LastSlotNum_54));
      }
      FirstNonFixedAddr_56 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(EmbeddedStackFrameId_55, FixedSize_47);
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ProtectNumRegLval_57, STATE_VARIABLE_CLD_84_84, &STATE_VARIABLE_CLD_86_86);
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &SnapshotNumRegLval_58, STATE_VARIABLE_CLD_86_86, &STATE_VARIABLE_CLD_88_88);
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &AddrRegLval_59, STATE_VARIABLE_CLD_88_88, &STATE_VARIABLE_CLD_90_90);
      {
        Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(3, Var_93, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, Var_93, 2) = ((MR_Box) (EmbeddedStackFrameId_55));
      }
      {
        Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_92, 0) = ((MR_Box) (Var_93));
        MR_hl_field(0, Var_92, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region ite stack"));
      }
      Var_99 = (MR_Word) (MR_mkword(3, &ll_backend__ite_gen_scalar_common_1[4]));
      {
        Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_98, 1) = ((MR_Box) (ProtectNumRegLval_57));
        MR_hl_field(3, Var_98, 2) = ((MR_Box) (Var_99));
      }
      {
        Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_97, 0) = ((MR_Box) (Var_98));
        MR_hl_field(0, Var_97, 1) = ((MR_Box) ((MR_String) "Initialize number of protect_infos"));
      }
      {
        Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_105, 1) = ((MR_Box) (SnapshotNumRegLval_58));
        MR_hl_field(3, Var_105, 2) = ((MR_Box) (Var_99));
      }
      {
        Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_104, 0) = ((MR_Box) (Var_105));
        MR_hl_field(0, Var_104, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
      }
      {
        Var_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_112, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_112, 1) = ((MR_Box) (AddrRegLval_59));
        MR_hl_field(3, Var_112, 2) = ((MR_Box) (FirstNonFixedAddr_56));
      }
      Var_113 = mercury__string__f_43_43_2_f_0((MR_String) "Initialize pointer to nonfixed part of", (MR_String) " embedded frame");
      {
        Var_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_111, 0) = ((MR_Box) (Var_112));
        MR_hl_field(0, Var_111, 1) = ((MR_Box) (Var_113));
      }
      {
        Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_110, 0) = ((MR_Box) (Var_111));
        MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
        MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_110));
      }
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_103));
      }
      {
        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
        MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_96));
      }
      PushInitCode_60 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_91);
      ll_backend__ite_gen__ite_protect_regions_7_p_0(ProtectNumRegLval_57, AddrRegLval_59, EmbeddedStackFrameId_55, ProtectRegionVarList_42, &ProtectRegionCode_61, STATE_VARIABLE_CLD_90_90, &STATE_VARIABLE_CLD_117_117);
      ll_backend__ite_gen__ite_alloc_snapshot_regions_8_p_0(SnapshotNumRegLval_58, AddrRegLval_59, EmbeddedStackFrameId_55, RemovedAtStartOfElse_37, SnapshotRegionVarList_43, &SnapshotRegionCode_62, STATE_VARIABLE_CLD_117_117, &STATE_VARIABLE_CLD_118_118);
      {
        Var_123 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_123, 0) = ((MR_Box) (ProtectNumRegLval_57));
      }
      {
        Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 18U));
        MR_hl_field(3, Var_121, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, Var_121, 2) = ((MR_Box) (EmbeddedStackFrameId_55));
        MR_hl_field(3, Var_121, 3) = ((MR_Box) (Var_123));
      }
      {
        Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_120, 0) = ((MR_Box) (Var_121));
        MR_hl_field(0, Var_120, 1) = ((MR_Box) ((MR_String) "Store the number of protect_infos"));
      }
      {
        Var_129 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_129, 0) = ((MR_Box) (SnapshotNumRegLval_58));
      }
      {
        Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 18U));
        MR_hl_field(3, Var_127, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(3, Var_127, 2) = ((MR_Box) (EmbeddedStackFrameId_55));
        MR_hl_field(3, Var_127, 3) = ((MR_Box) (Var_129));
      }
      {
        Var_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_126, 0) = ((MR_Box) (Var_127));
        MR_hl_field(0, Var_126, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
      }
      {
        Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_125, 0) = ((MR_Box) (Var_126));
        MR_hl_field(1, Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
        MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_125));
      }
      SetCode_63 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_119);
      ll_backend__code_loc_dep__release_reg_3_p_0(ProtectNumRegLval_57, STATE_VARIABLE_CLD_118_118, &STATE_VARIABLE_CLD_132_132);
      ll_backend__code_loc_dep__release_reg_3_p_0(SnapshotNumRegLval_58, STATE_VARIABLE_CLD_132_132, &STATE_VARIABLE_CLD_133_133);
      ll_backend__code_loc_dep__release_reg_3_p_0(AddrRegLval_59, STATE_VARIABLE_CLD_133_133, STATE_VARIABLE_CLD_69);
      CondCodeModel_64 = hlds__code_model__goal_info_get_code_model_1_f_0(CondGoalInfo_24);
      switch (CondCodeModel_64) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.ite_gen.create_ite_region_frame\'/11", (MR_String) "det cond");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            CondKind_65 = (MR_Integer) 1;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeEmbeddedStackFrameId_18 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (EmbeddedStackFrameId_55));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            CondKind_65 = (MR_Integer) 0;
            *MaybeEmbeddedStackFrameId_18 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      Var_138 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SnapshotRegionCode_62, SetCode_63);
      Var_137 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProtectRegionCode_61, Var_138);
      *CondCode_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PushInitCode_60, Var_137);
      {
        Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_141, 0) = (MR_Box) ((MR_Unsigned) (CondKind_65));
      }
      {
        Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 19U));
        MR_hl_field(3, Var_140, 1) = ((MR_Box) (Var_141));
        MR_hl_field(3, Var_140, 2) = ((MR_Box) (EmbeddedStackFrameId_55));
      }
      {
        Var_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_139, 0) = ((MR_Box) (Var_140));
        MR_hl_field(0, Var_139, 1) = ((MR_Box) ((MR_String) "region enter then"));
      }
      *ThenCode_15 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_139)));
      {
        Var_145 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_145, 0) = (MR_Box) ((MR_Unsigned) (CondKind_65));
      }
      {
        Var_144 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_144, 0) = ((MR_Box) ((MR_Unsigned) 19U));
        MR_hl_field(3, Var_144, 1) = ((MR_Box) (Var_145));
        MR_hl_field(3, Var_144, 2) = ((MR_Box) (EmbeddedStackFrameId_55));
      }
      {
        Var_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_143, 0) = ((MR_Box) (Var_144));
        MR_hl_field(0, Var_143, 1) = ((MR_Box) ((MR_String) "region enter else"));
      }
      *ElseCode_16 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_143)));
    }
  }
}

static void MR_CALL 
ll_backend__ite_gen__ite_alloc_snapshot_regions_8_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrameId_3,
  MR_Word RemovedVars_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_8 = STATE_VARIABLE_CLD_0_7;
  }
  else
  {
    MR_Word RegionVar_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word RegionVars_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Code_22;
    MR_Word Codes_23;
    MR_Word ProduceVarCode_25;
    MR_Word RegionVarRval_26;
    MR_Word RemovedAtStartOfElse_27;
    MR_Word SaveCode_28;
    MR_Word STATE_VARIABLE_CLD_31_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    ll_backend__code_loc_dep__produce_variable_5_p_0(RegionVar_20, &ProduceVarCode_25, &RegionVarRval_26, STATE_VARIABLE_CLD_0_7, &STATE_VARIABLE_CLD_31_31);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), ((MR_Box) (RegionVar_20)), RemovedVars_4);
    if (succeeded)
      RemovedAtStartOfElse_27 = (MR_Integer) 0;
    else
      RemovedAtStartOfElse_27 = (MR_Integer) 1;
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = (MR_Box) ((MR_Unsigned) (RemovedAtStartOfElse_27));
    }
    {
      Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(3, Var_33, 1) = ((MR_Box) (Var_34));
      MR_hl_field(3, Var_33, 2) = ((MR_Box) (EmbeddedStackFrameId_3));
      MR_hl_field(3, Var_33, 3) = ((MR_Box) (RegionVarRval_26));
      MR_hl_field(3, Var_33, 4) = ((MR_Box) (NumLval_1));
      MR_hl_field(3, Var_33, 5) = ((MR_Box) (AddrLval_2));
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(0, Var_32, 1) = ((MR_Box) ((MR_String) "take alloc snapshot of the region"));
    }
    SaveCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_32)));
    Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVarCode_25, SaveCode_28);
    ll_backend__ite_gen__ite_alloc_snapshot_regions_8_p_0(NumLval_1, AddrLval_2, EmbeddedStackFrameId_3, RemovedVars_4, RegionVars_21, &Codes_23, STATE_VARIABLE_CLD_31_31, STATE_VARIABLE_CLD_8);
    *HeadVar__6_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code_22, Codes_23);
  }
}

static void MR_CALL 
ll_backend__ite_gen__ite_protect_regions_7_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrameId_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_7 = STATE_VARIABLE_CLD_0_6;
  }
  else
  {
    MR_Word RegionVar_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word RegionVars_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Code_19;
    MR_Word Codes_20;
    MR_Word ProduceVarCode_22;
    MR_Word RegionVarRval_23;
    MR_Word SaveCode_24;
    MR_Word STATE_VARIABLE_CLD_27_27;
    MR_Word Var_28;
    MR_Word Var_29;

    ll_backend__code_loc_dep__produce_variable_5_p_0(RegionVar_17, &ProduceVarCode_22, &RegionVarRval_23, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_27_27);
    {
      Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(3, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_29, 2) = ((MR_Box) (EmbeddedStackFrameId_3));
      MR_hl_field(3, Var_29, 3) = ((MR_Box) (RegionVarRval_23));
      MR_hl_field(3, Var_29, 4) = ((MR_Box) (NumLval_1));
      MR_hl_field(3, Var_29, 5) = ((MR_Box) (AddrLval_2));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_String) "ite protect the region if needed"));
    }
    SaveCode_24 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_28)));
    Code_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVarCode_22, SaveCode_24);
    ll_backend__ite_gen__ite_protect_regions_7_p_0(NumLval_1, AddrLval_2, EmbeddedStackFrameId_3, RegionVars_18, &Codes_20, STATE_VARIABLE_CLD_27_27, STATE_VARIABLE_CLD_7);
    *HeadVar__5_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code_19, Codes_20);
  }
}

static void MR_CALL 
ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Removed_0_3,
  MR_Word * STATE_VARIABLE_Removed_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Removed_4 = STATE_VARIABLE_Removed_0_3;
    else
    {
      MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(0, Goal_9, (MR_Integer) 0))));
      MR_Word RegionVar_22;
      MR_Word PredId_15;
      MR_Word Args_17;
      MR_Word PredInfo_21;
      MR_Word Var_25;
      MR_String Var_26;
      MR_Word Var_27;
      MR_Word Var_30;
      MR_String Var_31;

      succeeded = ((MR_tag((MR_Word) GoalExpr_13)) == (MR_Integer) 2);
      if (succeeded)
      {
        PredId_15 = ((MR_Word) ((MR_hl_field(2, GoalExpr_13, (MR_Integer) 0))));
        Args_17 = ((MR_Word) ((MR_hl_field(2, GoalExpr_13, (MR_Integer) 2))));
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_2, PredId_15, &PredInfo_21);
        Var_25 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_21);
        Var_30 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_25, Var_30);
        if (succeeded)
        {
          Var_26 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_21);
          Var_31 = transform_hlds__rbmm__region_transformation__remove_region_pred_name_0_f_0();
          succeeded = (strcmp(Var_26, Var_31) == 0);
          if (succeeded)
          {
            succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RegionVar_22 = ((MR_Word) ((MR_hl_field(1, Args_17, (MR_Integer) 0))));
              Var_27 = ((MR_Word) ((MR_hl_field(1, Args_17, (MR_Integer) 1))));
              succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Removed_28_28;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_Removed_0_3;

        mercury__set__insert_3_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), ((MR_Box) (RegionVar_22)), STATE_VARIABLE_Removed_0_3, &STATE_VARIABLE_Removed_28_28);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals_10;
        next_value_of_STATE_VARIABLE_Removed_0_3 = STATE_VARIABLE_Removed_28_28;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Removed_0_3 = next_value_of_STATE_VARIABLE_Removed_0_3;
        continue;
      }
      else
        *STATE_VARIABLE_Removed_4 = STATE_VARIABLE_Removed_0_3;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(
  MR_Word Globals_6,
  MR_Word GoalInfo_7,
  MR_Word * PNegCondCode_8,
  MR_Word * PNegThenCode_9,
  MR_Word * PNegElseCode_10)
{
  MR_bool succeeded;
  MR_Word UseMinimalModelStackCopyPNeg_11;
  MR_Word Var_22;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 333, &UseMinimalModelStackCopyPNeg_11);
  succeeded = (UseMinimalModelStackCopyPNeg_11 == (MR_Integer) 1);
  if (succeeded)
  {
    Var_22 = (MR_Integer) 19;
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_7, Var_22);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word Context_12;
    MR_String CtxtStr_13;
    MR_Word PNegCondComponents_16;
    MR_Word PNegThenComponents_17;
    MR_Word PNegElseComponents_18;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_String Var_35;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_String Var_43;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_String Var_51;
    MR_String Var_52;
    MR_String Var_54;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_77;
    MR_Word Var_78;

    Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_7);
    succeeded = mercury__term_context__is_dummy_context_1_p_0(Context_12);
    if (succeeded)
      CtxtStr_13 = (MR_String) "NULL";
    else
    {
      MR_String File_14;
      MR_Integer Line_15;
      MR_String Var_24;
      MR_String Var_25;
      MR_String Var_27;
      MR_String Var_28;

      File_14 = mercury__term_context__context_file_1_f_0(Context_12);
      Line_15 = mercury__term_context__context_line_1_f_0(Context_12);
      Var_28 = mercury__string__int_to_string_1_f_0(Line_15);
      Var_27 = mercury__string__f_43_43_2_f_0(Var_28, (MR_String) "\"");
      Var_25 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_27);
      Var_24 = mercury__string__f_43_43_2_f_0(File_14, Var_25);
      CtxtStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_24);
    }
    Var_34 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    }
    Var_35 = mercury__string__append_list_1_f_0((MR_Word) (MR_mkword(1, &ll_backend__ite_gen_scalar_common_1[6])));
    {
      Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_30, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(3, Var_30, 2) = ((MR_Box) (Var_33));
      MR_hl_field(3, Var_30, 3) = ((MR_Box) (Var_35));
    }
    {
      PNegCondComponents_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PNegCondComponents_16, 0) = ((MR_Box) (Var_30));
      MR_hl_field(1, PNegCondComponents_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_42 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
    }
    Var_43 = mercury__string__append_list_1_f_0((MR_Word) (MR_mkword(1, &ll_backend__ite_gen_scalar_common_1[8])));
    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_38, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(3, Var_38, 2) = ((MR_Box) (Var_41));
      MR_hl_field(3, Var_38, 3) = ((MR_Box) (Var_43));
    }
    {
      PNegThenComponents_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PNegThenComponents_17, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, PNegThenComponents_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_50 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    }
    Var_54 = mercury__string__f_43_43_2_f_0(CtxtStr_13, (MR_String) ");\n");
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_pneg_enter_else(", Var_54);
    Var_51 = ll_backend__ite_gen__wrap_transient_1_f_0(Var_52);
    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_46, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(3, Var_46, 2) = ((MR_Box) (Var_49));
      MR_hl_field(3, Var_46, 3) = ((MR_Box) (Var_51));
    }
    {
      PNegElseComponents_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PNegElseComponents_18, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, PNegElseComponents_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 27U));
      MR_hl_field(3, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_58, 2) = ((MR_Box) (PNegCondComponents_16));
      MR_hl_field(3, Var_58, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, Var_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_58, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_58, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_58, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_58, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_58, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(0, Var_57, 1) = ((MR_Box) ((MR_String) ""));
    }
    *PNegCondCode_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_57)));
    {
      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 27U));
      MR_hl_field(3, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_68, 2) = ((MR_Box) (PNegThenComponents_17));
      MR_hl_field(3, Var_68, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, Var_68, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_68, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_68, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_68, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_68, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_68, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(0, Var_67, 1) = ((MR_Box) ((MR_String) ""));
    }
    *PNegThenCode_9 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_67)));
    {
      Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 27U));
      MR_hl_field(3, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_78, 2) = ((MR_Box) (PNegElseComponents_18));
      MR_hl_field(3, Var_78, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, Var_78, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_78, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_78, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_78, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_78, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_78, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_77, 0) = ((MR_Box) (Var_78));
      MR_hl_field(0, Var_77, 1) = ((MR_Box) ((MR_String) ""));
    }
    *PNegElseCode_10 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_77)));
  }
  else
  {
    *PNegCondCode_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *PNegThenCode_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *PNegElseCode_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  }
}

static MR_String MR_CALL 
ll_backend__ite_gen__wrap_transient_1_f_0(
  MR_String Code_3)
{
  MR_String HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (Code_3));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__ite_gen_scalar_common_1[3])));
  }
  {
    Var_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_4, 0) = ((MR_Box) ((MR_String) "\t\tMR_save_transient_registers();\n"));
    MR_hl_field(1, Var_4, 1) = ((MR_Box) (Var_6));
  }
  HeadVar__2_2 = mercury__string__append_list_1_f_0(Var_4);
  return HeadVar__2_2;
}

static void MR_CALL 
ll_backend__ite_gen__read_and_erase_resume_point_5_p_0(
  MR_String CondStr_6,
  MR_Word * ResumeVars_7,
  MR_Word * ResumeLocs_8,
  MR_Word CondInfo0_9,
  MR_Word * CondInfo_10)
{
  MR_Word Resume_11;

  hlds__hlds_llds__goal_info_get_resume_point_2_p_0(CondInfo0_9, &Resume_11);
  if ((Resume_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Msg_12;

    Msg_12 = mercury__string__f_43_43_2_f_0(CondStr_6, (MR_String) " has no resume point");
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.ite_gen.read_and_erase_resume_point\'/5", Msg_12);
      return;
    }
  }
  else
  {
    *ResumeVars_7 = ((MR_Word) ((MR_hl_field(1, Resume_11, (MR_Integer) 0))));
    *ResumeLocs_8 = ((MR_Unsigned) ((MR_hl_field(1, Resume_11, (MR_Integer) 1))) & (MR_Integer) 3);
    hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) ((MR_Unsigned) 0U), CondInfo0_9, CondInfo_10);
  }
}

void mercury__ll_backend__ite_gen__init(void)
{
}

void mercury__ll_backend__ite_gen__init_type_tables(void)
{
}

void mercury__ll_backend__ite_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__ite_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.ite_gen.
