/*
** Automatically generated from `ite_gen.m'
** by the Mercury compiler,
** version rotd-2020-01-08
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
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
#include "array.mih"
#include "assoc_list.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
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
ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__393__1_2_p_0(
  MR_Word MaybeRegionSuccRecordSlot_38,
  MR_Word HeadVar__2_77);

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
  MR_Word STATE_VARIABLE_CI_0_60,
  MR_Word * STATE_VARIABLE_CI_61,
  MR_Word STATE_VARIABLE_CLD_0_62,
  MR_Word * STATE_VARIABLE_CLD_63);

static void MR_CALL 
ll_backend__ite_gen__maybe_create_ite_region_frame_13_p_0(
  MR_Word IteRegionOps_14,
  MR_Word CondGoalInfo_15,
  MR_Word CondGoals_16,
  MR_Word ElseGoals_17,
  MR_Word * CondCode_18,
  MR_Word * ThenCode_19,
  MR_Word * ElseCode_20,
  MR_Word * StackVars_21,
  MR_Word * MaybeEmbeddedStackFrameId_22,
  MR_Word STATE_VARIABLE_CI_0_67,
  MR_Word * STATE_VARIABLE_CI_68,
  MR_Word STATE_VARIABLE_CLD_0_69,
  MR_Word * STATE_VARIABLE_CLD_70);

static void MR_CALL 
ll_backend__ite_gen__ite_alloc_snapshot_regions_9_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrameId_3,
  MR_Word RemovedVars_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9);

static void MR_CALL 
ll_backend__ite_gen__ite_protect_regions_8_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrameId_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8);

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


static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_2[1][1];

static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_3[1][5];




static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_restore_transient_registers();\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__ite_gen_scalar_common_2[0])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_3[1][5] = {
  /* row 0 */
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



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__ite_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0)
  }
};

static MR_bool MR_CALL 
ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__393__1_2_p_0(
  MR_Word MaybeRegionSuccRecordSlot_38,
  MR_Word HeadVar__2_77)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[1]), ((MR_Box) (MaybeRegionSuccRecordSlot_38)), ((MR_Box) (HeadVar__2_77)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__ite_gen__generate_negation_8_p_0(
  MR_Word CodeModel_9,
  MR_Word Goal0_10,
  MR_Word NotGoalInfo_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CI_0_38,
  MR_Word * STATE_VARIABLE_CI_39,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_15;
    MR_Word GoalInfo0_16;
    MR_Word ResumeVars_17;
    MR_Word ResumeLocs_18;
    MR_Word GoalInfo_19;
    MR_Word Goal_20;
    MR_Word Resume_71;
    MR_Word L_24;
    MR_Word R_25;
    MR_Word CodeAddr_27;
    MR_Word Globals_28;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

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
    GoalExpr_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 0))));
    GoalInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1))));
    hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo0_16, &Resume_71);
    if ((Resume_71 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.ite_gen.read_and_erase_resume_point\'/5", (MR_String) "negated goal has no resume point");
        return;
      }
    else
    {
      ResumeVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Resume_71, (MR_Integer) 0))));
      ResumeLocs_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Resume_71, (MR_Integer) 1))) & (MR_Integer) 3);
      hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) ((MR_Unsigned) 0U), GoalInfo0_16, &GoalInfo_19);
    }
    {
      Goal_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_20, 0) = ((MR_Box) (GoalExpr_15));
      MR_hl_field(MR_mktag(0), Goal_20, 1) = ((MR_Box) (GoalInfo_19));
    }
    succeeded = (CodeModel_9 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) GoalExpr_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_15, (MR_Integer) 3))));
        succeeded = ((((MR_tag((MR_Word) Var_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_45, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          L_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_45, (MR_Integer) 1))));
          R_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_45, (MR_Integer) 2))));
          succeeded = ll_backend__code_loc_dep__failure_is_direct_branch_2_p_0(STATE_VARIABLE_CLD_0_40, &CodeAddr_27);
          if (succeeded)
          {
            ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_38, &Globals_28);
            Var_46 = (MR_Integer) 483;
            Var_47 = (MR_Integer) 1;
            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_28, Var_46, Var_47);
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word SimpleNeg_29;
      MR_Word CodeL_30;
      MR_Word ValL_31;
      MR_Word CodeR_32;
      MR_Word ValR_33;
      MR_Word Type_34;
      MR_Word Op_35;
      MR_Word TestCode_37;
      MR_Word Var_48;
      MR_Word STATE_VARIABLE_CLD_49_49;
      MR_Word STATE_VARIABLE_CLD_50_50;
      MR_Word STATE_VARIABLE_CLD_51_51;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_61;
      MR_Word Var_52;

      Var_48 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_17);
      ll_backend__code_loc_dep__enter_simple_neg_5_p_0(Var_48, GoalInfo_19, &SimpleNeg_29, STATE_VARIABLE_CLD_0_40, &STATE_VARIABLE_CLD_49_49);
      ll_backend__code_loc_dep__produce_variable_6_p_0(L_24, &CodeL_30, &ValL_31, STATE_VARIABLE_CI_0_38, STATE_VARIABLE_CLD_49_49, &STATE_VARIABLE_CLD_50_50);
      ll_backend__code_loc_dep__produce_variable_6_p_0(R_25, &CodeR_32, &ValR_33, STATE_VARIABLE_CI_0_38, STATE_VARIABLE_CLD_50_50, &STATE_VARIABLE_CLD_51_51);
      Type_34 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_38, L_24);
      succeeded = ((MR_tag((MR_Word) Type_34)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_34, (MR_Integer) 0))));
        succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 4U));
      }
      if (succeeded)
        Op_35 = (MR_Word) ((MR_Unsigned) 16U);
      else
      {
        MR_Word Var_53;

        succeeded = ((MR_tag((MR_Word) Type_34)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_34, (MR_Integer) 0))));
          succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
          Op_35 = (MR_Word) ((MR_Unsigned) 64U);
        else
        {
          MR_Word IntType_36;
          MR_Word Var_54;

          succeeded = ((MR_tag((MR_Word) Type_34)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_34, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 1);
            if (succeeded)
              IntType_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 0))) & (MR_Integer) 15);
          }
          if (succeeded)
            {
              Op_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Op_35, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), Op_35, 1) = (MR_Box) ((MR_Unsigned) (IntType_36));
            }
          else
            Op_35 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__ite_gen_scalar_common_1[4]));
        }
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (Op_35));
        MR_hl_field(MR_mktag(3), Var_58, 2) = ((MR_Box) (ValL_31));
        MR_hl_field(MR_mktag(3), Var_58, 3) = ((MR_Box) (ValR_33));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(3), Var_57, 2) = ((MR_Box) (CodeAddr_27));
      }
      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) ((MR_String) "test inequality"));
      }
      TestCode_37 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_56)));
      ll_backend__code_loc_dep__leave_simple_neg_5_p_0(GoalInfo_19, SimpleNeg_29, STATE_VARIABLE_CI_0_38, STATE_VARIABLE_CLD_51_51, STATE_VARIABLE_CLD_41);
      Var_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeR_32, TestCode_37);
      *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeL_30, Var_61);
      *STATE_VARIABLE_CI_39 = STATE_VARIABLE_CI_0_38;
    }
    else
      ll_backend__ite_gen__generate_negation_general_10_p_0(CodeModel_9, Goal_20, NotGoalInfo_11, ResumeVars_17, ResumeLocs_18, Code_12, STATE_VARIABLE_CI_0_38, STATE_VARIABLE_CI_39, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
  }
}

static MR_bool MR_CALL 
ll_backend__ite_gen__generate_negation_general_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__393__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__ite_gen__generate_negation_general_10_p_0(
  MR_Word CodeModel_11,
  MR_Word Goal_12,
  MR_Word NotGoalInfo_13,
  MR_Word ResumeVars_14,
  MR_Word ResumeLocs_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_60,
  MR_Word * STATE_VARIABLE_CI_61,
  MR_Word STATE_VARIABLE_CLD_0_62,
  MR_Word * STATE_VARIABLE_CLD_63)
{
  {
    MR_bool succeeded;
    MR_Word ResumeMap_19;
    MR_Word FlushCode_20;
    MR_Word Globals_21;
    MR_Word ReclaimHeapOnFailure_22;
    MR_Word ReclaimHeap_23;
    MR_Word SaveHpCode_24;
    MR_Word MaybeHpSlot_25;
    MR_Word AddTrailOps_26;
    MR_Word SaveTicketCode_27;
    MR_Word MaybeTicketSlot_28;
    MR_Word IteRegionOps_30;
    MR_Word GoalInfo_32;
    MR_Word CondGoals_33;
    MR_Word RegionCondCode_34;
    MR_Word RegionThenCode_35;
    MR_Word RegionElseCode_36;
    MR_Word RegionStackVars_37;
    MR_Word MaybeRegionSuccRecordSlot_38;
    MR_Word HijackInfo_39;
    MR_Word PrepareHijackCode_40;
    MR_Word ResumePoint_41;
    MR_Word EffectResumeCode_42;
    MR_Word EnterTraceCode_43;
    MR_Word GoalCode_44;
    MR_Word ThenNeckCode_45;
    MR_Word ElseNeckCode_46;
    MR_Word Zombies_47;
    MR_Word LiveVars_48;
    MR_Word PruneTicketCode_49;
    MR_Word FailTraceCode_50;
    MR_Word FailCode_51;
    MR_Word ResumeCode_53;
    MR_Word RestoreHpCode_54;
    MR_Word RestoreTicketCode_55;
    MR_Word SuccessTraceCode_56;
    MR_Word PNegCondCode_57;
    MR_Word PNegThenCode_58;
    MR_Word PNegElseCode_59;
    MR_Word Var_64;
    MR_Word STATE_VARIABLE_CLD_65_65;
    MR_Word STATE_VARIABLE_CI_67_67;
    MR_Word STATE_VARIABLE_CLD_68_68;
    MR_Word STATE_VARIABLE_CI_69_69;
    MR_Word STATE_VARIABLE_CLD_70_70;
    MR_Word STATE_VARIABLE_CI_72_72;
    MR_Word STATE_VARIABLE_CLD_73_73;
    MR_Word Var_74;
    MR_Word STATE_VARIABLE_CI_78_78;
    MR_Word STATE_VARIABLE_CLD_79_79;
    MR_Word Var_80;
    MR_Word STATE_VARIABLE_CI_81_81;
    MR_Word STATE_VARIABLE_CLD_82_82;
    MR_Word STATE_VARIABLE_CI_83_83;
    MR_Word STATE_VARIABLE_CLD_84_84;
    MR_Word STATE_VARIABLE_CI_86_86;
    MR_Word STATE_VARIABLE_CLD_87_87;
    MR_Word STATE_VARIABLE_CI_88_88;
    MR_Word STATE_VARIABLE_CLD_89_89;
    MR_Word STATE_VARIABLE_CLD_90_90;
    MR_Word STATE_VARIABLE_CLD_91_91;
    MR_Word STATE_VARIABLE_CI_100_100;
    MR_Word STATE_VARIABLE_CLD_101_101;
    MR_Word STATE_VARIABLE_CI_102_102;
    MR_Word STATE_VARIABLE_CLD_103_103;
    MR_Word STATE_VARIABLE_CLD_104_104;
    MR_Word STATE_VARIABLE_CI_105_105;
    MR_Word STATE_VARIABLE_CLD_106_106;
    MR_Word STATE_VARIABLE_CI_108_108;
    MR_Word STATE_VARIABLE_CLD_109_109;
    MR_Word STATE_VARIABLE_CI_111_111;
    MR_Word STATE_VARIABLE_CLD_112_112;
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
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;

    Var_64 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_14);
    ll_backend__code_loc_dep__produce_vars_6_p_0(Var_64, &ResumeMap_19, &FlushCode_20, STATE_VARIABLE_CI_0_60, STATE_VARIABLE_CLD_0_62, &STATE_VARIABLE_CLD_65_65);
    ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_60, &Globals_21);
    libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 330, &ReclaimHeapOnFailure_22);
    succeeded = (ReclaimHeapOnFailure_22 == (MR_Integer) 1);
    if (succeeded)
      succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(Goal_12);
    if (succeeded)
      ReclaimHeap_23 = (MR_Integer) 1;
    else
      ReclaimHeap_23 = (MR_Integer) 0;
    ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ReclaimHeap_23, &SaveHpCode_24, &MaybeHpSlot_25, STATE_VARIABLE_CI_0_60, &STATE_VARIABLE_CI_67_67, STATE_VARIABLE_CLD_65_65, &STATE_VARIABLE_CLD_68_68);
    AddTrailOps_26 = ll_backend__code_info__should_add_trail_ops_2_f_0(STATE_VARIABLE_CI_67_67, NotGoalInfo_13);
    ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(AddTrailOps_26, &SaveTicketCode_27, &MaybeTicketSlot_28, STATE_VARIABLE_CI_67_67, &STATE_VARIABLE_CI_69_69, STATE_VARIABLE_CLD_68_68, &STATE_VARIABLE_CLD_70_70);
    IteRegionOps_30 = ll_backend__code_info__should_add_region_ops_2_f_0(STATE_VARIABLE_CI_69_69, NotGoalInfo_13);
    GoalInfo_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 1))));
    hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal_12, &CondGoals_33);
    ll_backend__ite_gen__maybe_create_ite_region_frame_13_p_0(IteRegionOps_30, GoalInfo_32, CondGoals_33, (MR_Word) ((MR_Unsigned) 0U), &RegionCondCode_34, &RegionThenCode_35, &RegionElseCode_36, &RegionStackVars_37, &MaybeRegionSuccRecordSlot_38, STATE_VARIABLE_CI_69_69, &STATE_VARIABLE_CI_72_72, STATE_VARIABLE_CLD_70_70, &STATE_VARIABLE_CLD_73_73);
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&ll_backend__ite_gen_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (ll_backend__ite_gen__generate_negation_general_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (MaybeRegionSuccRecordSlot_38));
      MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140ll_backend.ite_gen.generate_negation_general\'/10", (MR_String) "MaybeRegionSuccRecordSlot = yes(_)");
    ll_backend__code_loc_dep__prepare_for_ite_hijack_8_p_0(CodeModel_11, MaybeRegionSuccRecordSlot_38, &HijackInfo_39, &PrepareHijackCode_40, STATE_VARIABLE_CI_72_72, &STATE_VARIABLE_CI_78_78, STATE_VARIABLE_CLD_73_73, &STATE_VARIABLE_CLD_79_79);
    Var_80 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_14);
    ll_backend__code_loc_dep__make_resume_point_6_p_0(Var_80, ResumeLocs_15, ResumeMap_19, &ResumePoint_41, STATE_VARIABLE_CI_78_78, &STATE_VARIABLE_CI_81_81);
    ll_backend__code_loc_dep__effect_resume_point_5_p_0(ResumePoint_41, CodeModel_11, &EffectResumeCode_42, STATE_VARIABLE_CLD_79_79, &STATE_VARIABLE_CLD_82_82);
    ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(Goal_12, NotGoalInfo_13, &EnterTraceCode_43, STATE_VARIABLE_CI_81_81, &STATE_VARIABLE_CI_83_83, STATE_VARIABLE_CLD_82_82, &STATE_VARIABLE_CLD_84_84);
    ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 1, Goal_12, &GoalCode_44, STATE_VARIABLE_CI_83_83, &STATE_VARIABLE_CI_86_86, STATE_VARIABLE_CLD_84_84, &STATE_VARIABLE_CLD_87_87);
    ll_backend__code_loc_dep__ite_enter_then_8_p_0(HijackInfo_39, ResumePoint_41, &ThenNeckCode_45, &ElseNeckCode_46, STATE_VARIABLE_CI_86_86, &STATE_VARIABLE_CI_88_88, STATE_VARIABLE_CLD_87_87, &STATE_VARIABLE_CLD_89_89);
    ll_backend__code_loc_dep__pickup_zombies_3_p_0(&Zombies_47, STATE_VARIABLE_CLD_89_89, &STATE_VARIABLE_CLD_90_90);
    ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(Zombies_47, STATE_VARIABLE_CLD_90_90, &STATE_VARIABLE_CLD_91_91);
    ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(STATE_VARIABLE_CLD_91_91, &LiveVars_48);
    switch (CodeModel_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          PruneTicketCode_49 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          FailTraceCode_50 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          FailCode_51 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          STATE_VARIABLE_CI_100_100 = STATE_VARIABLE_CI_88_88;
          STATE_VARIABLE_CLD_101_101 = STATE_VARIABLE_CLD_91_91;
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word AfterNegatedGoal_52;
          MR_Word STATE_VARIABLE_CI_92_92;
          MR_Word STATE_VARIABLE_CLD_93_93;
          MR_Word STATE_VARIABLE_CI_95_95;
          MR_Word STATE_VARIABLE_CLD_96_96;
          MR_Word STATE_VARIABLE_CI_98_98;
          MR_Word STATE_VARIABLE_CLD_99_99;

          ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_91_91, &AfterNegatedGoal_52);
          ll_backend__code_loc_dep__maybe_release_hp_5_p_0(MaybeHpSlot_25, STATE_VARIABLE_CI_88_88, &STATE_VARIABLE_CI_92_92, STATE_VARIABLE_CLD_91_91, &STATE_VARIABLE_CLD_93_93);
          ll_backend__code_loc_dep__maybe_reset_prune_and_release_ticket_7_p_0(MaybeTicketSlot_28, (MR_Integer) 1, &PruneTicketCode_49, STATE_VARIABLE_CI_92_92, &STATE_VARIABLE_CI_95_95, STATE_VARIABLE_CLD_93_93, &STATE_VARIABLE_CLD_96_96);
          ll_backend__trace_gen__maybe_generate_negated_event_code_8_p_0(Goal_12, NotGoalInfo_13, (MR_Integer) 1, &FailTraceCode_50, STATE_VARIABLE_CI_95_95, &STATE_VARIABLE_CI_98_98, STATE_VARIABLE_CLD_96_96, &STATE_VARIABLE_CLD_99_99);
          ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_51, STATE_VARIABLE_CI_98_98, &STATE_VARIABLE_CI_100_100, STATE_VARIABLE_CLD_99_99);
          ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterNegatedGoal_52, STATE_VARIABLE_CI_100_100, &STATE_VARIABLE_CLD_101_101);
        }
        break;
    }
    ll_backend__code_loc_dep__generate_resume_point_6_p_0(ResumePoint_41, &ResumeCode_53, STATE_VARIABLE_CI_100_100, &STATE_VARIABLE_CI_102_102, STATE_VARIABLE_CLD_101_101, &STATE_VARIABLE_CLD_103_103);
    ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(LiveVars_48, STATE_VARIABLE_CLD_103_103, &STATE_VARIABLE_CLD_104_104);
    ll_backend__code_loc_dep__maybe_restore_and_release_hp_6_p_0(MaybeHpSlot_25, &RestoreHpCode_54, STATE_VARIABLE_CI_102_102, &STATE_VARIABLE_CI_105_105, STATE_VARIABLE_CLD_104_104, &STATE_VARIABLE_CLD_106_106);
    ll_backend__code_loc_dep__maybe_reset_discard_and_release_ticket_7_p_0(MaybeTicketSlot_28, (MR_Integer) 0, &RestoreTicketCode_55, STATE_VARIABLE_CI_105_105, &STATE_VARIABLE_CI_108_108, STATE_VARIABLE_CLD_106_106, &STATE_VARIABLE_CLD_109_109);
    ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(RegionStackVars_37, (MR_Integer) 1, STATE_VARIABLE_CI_108_108, &STATE_VARIABLE_CI_111_111, STATE_VARIABLE_CLD_109_109, &STATE_VARIABLE_CLD_112_112);
    ll_backend__trace_gen__maybe_generate_negated_event_code_8_p_0(Goal_12, NotGoalInfo_13, (MR_Integer) 0, &SuccessTraceCode_56, STATE_VARIABLE_CI_111_111, STATE_VARIABLE_CI_61, STATE_VARIABLE_CLD_112_112, STATE_VARIABLE_CLD_63);
    ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(Globals_21, NotGoalInfo_13, &PNegCondCode_57, &PNegThenCode_58, &PNegElseCode_59);
    Var_135 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SuccessTraceCode_56, PNegElseCode_59);
    Var_134 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionElseCode_36, Var_135);
    Var_133 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreHpCode_54, Var_134);
    Var_132 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreTicketCode_55, Var_133);
    Var_131 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ElseNeckCode_46, Var_132);
    Var_130 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResumeCode_53, Var_131);
    Var_129 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_51, Var_130);
    Var_128 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PNegThenCode_58, Var_129);
    Var_127 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailTraceCode_50, Var_128);
    Var_126 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionThenCode_35, Var_127);
    Var_125 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PruneTicketCode_49, Var_126);
    Var_124 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThenNeckCode_45, Var_125);
    Var_123 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_44, Var_124);
    Var_122 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PNegCondCode_57, Var_123);
    Var_121 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EnterTraceCode_43, Var_122);
    Var_120 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionCondCode_34, Var_121);
    Var_119 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveTicketCode_27, Var_120);
    Var_118 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveHpCode_24, Var_119);
    Var_117 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EffectResumeCode_42, Var_118);
    Var_116 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrepareHijackCode_40, Var_117);
    *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FlushCode_20, Var_116);
  }
}

void MR_CALL 
ll_backend__ite_gen__generate_ite_10_p_0(
  MR_Word CodeModel_11,
  MR_Word CondGoal0_12,
  MR_Word ThenGoal_13,
  MR_Word ElseGoal_14,
  MR_Word IteGoalInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_82,
  MR_Word * STATE_VARIABLE_CI_83,
  MR_Word STATE_VARIABLE_CLD_0_84,
  MR_Word * STATE_VARIABLE_CLD_85)
{
  {
    MR_bool succeeded;
    MR_Word CondExpr_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondGoal0_12, (MR_Integer) 0))));
    MR_Word CondInfo0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondGoal0_12, (MR_Integer) 1))));
    MR_Word CondCodeModel_21;
    MR_Word EffCodeModel_22;
    MR_Word ResumeVars_23;
    MR_Word ResumeLocs_24;
    MR_Word CondInfo_25;
    MR_Word CondGoal_26;
    MR_Word ResumeMap_27;
    MR_Word FlushCode_28;
    MR_Word Globals_29;
    MR_Word ReclaimOption_30;
    MR_Word ReclaimHeap_31;
    MR_Word SaveHpCode_32;
    MR_Word MaybeHpSlot_33;
    MR_Word AddTrailOps_34;
    MR_Word IteTrailOps_35;
    MR_Word SaveTicketCode_37;
    MR_Word MaybeTicketSlot_38;
    MR_Word IteRegionOps_40;
    MR_Word ElseGoals_41;
    MR_Word CondGoals_42;
    MR_Word RegionCondCode_43;
    MR_Word RegionThenCode_44;
    MR_Word RegionElseCode_45;
    MR_Word RegionStackVars_46;
    MR_Word MaybeEmbeddedStackFrameId_47;
    MR_Word BranchStart_48;
    MR_Word HijackInfo_49;
    MR_Word PrepareHijackCode_50;
    MR_Word ResumePoint_51;
    MR_Word EffectResumeCode_52;
    MR_Word CondTraceCode_53;
    MR_Word CondCode_54;
    MR_Word ThenNeckCode_55;
    MR_Word ElseNeckCode_56;
    MR_Word Zombies_57;
    MR_Word ResetTicketCode_58;
    MR_Word StoreMap_59;
    MR_Word EndCondInstMap_60;
    MR_Word ThenTraceCode_61;
    MR_Word ThenCode_62;
    MR_Word BranchEndStoreMap_63;
    MR_Word MaybeEnd0_64;
    MR_Word ThenSaveCode_65;
    MR_Word ResumeCode_66;
    MR_Word RestoreHpCode_69;
    MR_Word RestoreTicketCode_70;
    MR_Word ElseTraceCode_71;
    MR_Word ElseCode_72;
    MR_Word MaybeEnd_73;
    MR_Word ElseSaveCode_74;
    MR_Word EndLabel_76;
    MR_Word JumpToEndCode_77;
    MR_Word EndLabelCode_78;
    MR_Word PNegCondCode_79;
    MR_Word PNegThenCode_80;
    MR_Word PNegElseCode_81;
    MR_Word Var_87;
    MR_Word STATE_VARIABLE_CLD_88_88;
    MR_Word STATE_VARIABLE_CI_90_90;
    MR_Word STATE_VARIABLE_CLD_91_91;
    MR_Word STATE_VARIABLE_CI_93_93;
    MR_Word STATE_VARIABLE_CLD_94_94;
    MR_Word STATE_VARIABLE_CI_95_95;
    MR_Word STATE_VARIABLE_CLD_96_96;
    MR_Word STATE_VARIABLE_CI_97_97;
    MR_Word STATE_VARIABLE_CLD_98_98;
    MR_Word Var_99;
    MR_Word STATE_VARIABLE_CI_100_100;
    MR_Word STATE_VARIABLE_CLD_101_101;
    MR_Word STATE_VARIABLE_CI_102_102;
    MR_Word STATE_VARIABLE_CLD_103_103;
    MR_Word STATE_VARIABLE_CI_104_104;
    MR_Word STATE_VARIABLE_CLD_105_105;
    MR_Word STATE_VARIABLE_CI_106_106;
    MR_Word STATE_VARIABLE_CLD_107_107;
    MR_Word STATE_VARIABLE_CLD_108_108;
    MR_Word STATE_VARIABLE_CLD_109_109;
    MR_Word STATE_VARIABLE_CI_116_116;
    MR_Word STATE_VARIABLE_CLD_117_117;
    MR_Word STATE_VARIABLE_CI_121_121;
    MR_Word STATE_VARIABLE_CLD_122_122;
    MR_Word STATE_VARIABLE_CLD_124_124;
    MR_Word STATE_VARIABLE_CI_125_125;
    MR_Word STATE_VARIABLE_CLD_126_126;
    MR_Word STATE_VARIABLE_CI_133_133;
    MR_Word STATE_VARIABLE_CLD_134_134;
    MR_Word STATE_VARIABLE_CI_136_136;
    MR_Word STATE_VARIABLE_CLD_137_137;
    MR_Word STATE_VARIABLE_CI_138_138;
    MR_Word STATE_VARIABLE_CLD_139_139;
    MR_Word STATE_VARIABLE_CI_140_140;
    MR_Word STATE_VARIABLE_CLD_141_141;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_164;
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
      MR_hl_field(MR_mktag(0), CondGoal_26, 0) = ((MR_Box) (CondExpr_19));
      MR_hl_field(MR_mktag(0), CondGoal_26, 1) = ((MR_Box) (CondInfo_25));
    }
    Var_87 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_23);
    ll_backend__code_loc_dep__produce_vars_6_p_0(Var_87, &ResumeMap_27, &FlushCode_28, STATE_VARIABLE_CI_0_82, STATE_VARIABLE_CLD_0_84, &STATE_VARIABLE_CLD_88_88);
    ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_82, &Globals_29);
    libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 330, &ReclaimOption_30);
    succeeded = (ReclaimOption_30 == (MR_Integer) 1);
    if (succeeded)
      succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(CondGoal_26);
    if (succeeded)
      ReclaimHeap_31 = (MR_Integer) 1;
    else
      ReclaimHeap_31 = (MR_Integer) 0;
    ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ReclaimHeap_31, &SaveHpCode_32, &MaybeHpSlot_33, STATE_VARIABLE_CI_0_82, &STATE_VARIABLE_CI_90_90, STATE_VARIABLE_CLD_88_88, &STATE_VARIABLE_CLD_91_91);
    AddTrailOps_34 = ll_backend__code_info__should_add_trail_ops_2_f_0(STATE_VARIABLE_CI_90_90, IteGoalInfo_15);
    switch (AddTrailOps_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word OptTrailOps_36;
          MR_Word Var_92;

          ll_backend__code_info__get_opt_trail_ops_2_p_0(STATE_VARIABLE_CI_90_90, &OptTrailOps_36);
          succeeded = (OptTrailOps_36 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_92 = hlds__goal_form__goal_cannot_modify_trail_1_f_0(CondInfo0_20);
            succeeded = (Var_92 == (MR_Integer) 1);
            if (succeeded)
              succeeded = (CondCodeModel_21 != (MR_Integer) 2);
          }
          if (succeeded)
            IteTrailOps_35 = (MR_Integer) 1;
          else
            IteTrailOps_35 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        IteTrailOps_35 = (MR_Integer) 1;
        break;
    }
    ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(IteTrailOps_35, &SaveTicketCode_37, &MaybeTicketSlot_38, STATE_VARIABLE_CI_90_90, &STATE_VARIABLE_CI_93_93, STATE_VARIABLE_CLD_91_91, &STATE_VARIABLE_CLD_94_94);
    IteRegionOps_40 = ll_backend__code_info__should_add_region_ops_2_f_0(STATE_VARIABLE_CI_93_93, IteGoalInfo_15);
    hlds__hlds_goal__goal_to_conj_list_2_p_0(ElseGoal_14, &ElseGoals_41);
    hlds__hlds_goal__goal_to_conj_list_2_p_0(CondGoal_26, &CondGoals_42);
    ll_backend__ite_gen__maybe_create_ite_region_frame_13_p_0(IteRegionOps_40, CondInfo_25, CondGoals_42, ElseGoals_41, &RegionCondCode_43, &RegionThenCode_44, &RegionElseCode_45, &RegionStackVars_46, &MaybeEmbeddedStackFrameId_47, STATE_VARIABLE_CI_93_93, &STATE_VARIABLE_CI_95_95, STATE_VARIABLE_CLD_94_94, &STATE_VARIABLE_CLD_96_96);
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_96_96, &BranchStart_48);
    ll_backend__code_loc_dep__prepare_for_ite_hijack_8_p_0(CondCodeModel_21, MaybeEmbeddedStackFrameId_47, &HijackInfo_49, &PrepareHijackCode_50, STATE_VARIABLE_CI_95_95, &STATE_VARIABLE_CI_97_97, STATE_VARIABLE_CLD_96_96, &STATE_VARIABLE_CLD_98_98);
    Var_99 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_23);
    ll_backend__code_loc_dep__make_resume_point_6_p_0(Var_99, ResumeLocs_24, ResumeMap_27, &ResumePoint_51, STATE_VARIABLE_CI_97_97, &STATE_VARIABLE_CI_100_100);
    ll_backend__code_loc_dep__effect_resume_point_5_p_0(ResumePoint_51, EffCodeModel_22, &EffectResumeCode_52, STATE_VARIABLE_CLD_98_98, &STATE_VARIABLE_CLD_101_101);
    ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(CondGoal_26, IteGoalInfo_15, &CondTraceCode_53, STATE_VARIABLE_CI_100_100, &STATE_VARIABLE_CI_102_102, STATE_VARIABLE_CLD_101_101, &STATE_VARIABLE_CLD_103_103);
    ll_backend__code_gen__generate_goal_7_p_0(CondCodeModel_21, CondGoal_26, &CondCode_54, STATE_VARIABLE_CI_102_102, &STATE_VARIABLE_CI_104_104, STATE_VARIABLE_CLD_103_103, &STATE_VARIABLE_CLD_105_105);
    ll_backend__code_loc_dep__ite_enter_then_8_p_0(HijackInfo_49, ResumePoint_51, &ThenNeckCode_55, &ElseNeckCode_56, STATE_VARIABLE_CI_104_104, &STATE_VARIABLE_CI_106_106, STATE_VARIABLE_CLD_105_105, &STATE_VARIABLE_CLD_107_107);
    ll_backend__code_loc_dep__pickup_zombies_3_p_0(&Zombies_57, STATE_VARIABLE_CLD_107_107, &STATE_VARIABLE_CLD_108_108);
    ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(Zombies_57, STATE_VARIABLE_CLD_108_108, &STATE_VARIABLE_CLD_109_109);
    switch (CondCodeModel_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_CI_110_110;
          MR_Word STATE_VARIABLE_CLD_111_111;
          MR_Word STATE_VARIABLE_CI_113_113;
          MR_Word STATE_VARIABLE_CLD_114_114;

          ll_backend__code_loc_dep__maybe_release_hp_5_p_0(MaybeHpSlot_33, STATE_VARIABLE_CI_106_106, &STATE_VARIABLE_CI_110_110, STATE_VARIABLE_CLD_109_109, &STATE_VARIABLE_CLD_111_111);
          ll_backend__code_loc_dep__maybe_reset_prune_and_release_ticket_7_p_0(MaybeTicketSlot_38, (MR_Integer) 1, &ResetTicketCode_58, STATE_VARIABLE_CI_110_110, &STATE_VARIABLE_CI_113_113, STATE_VARIABLE_CLD_111_111, &STATE_VARIABLE_CLD_114_114);
          ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(RegionStackVars_46, (MR_Integer) 1, STATE_VARIABLE_CI_113_113, &STATE_VARIABLE_CI_116_116, STATE_VARIABLE_CLD_114_114, &STATE_VARIABLE_CLD_117_117);
        }
        break;
      case (MR_Integer) 2:
        {
          ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(MaybeTicketSlot_38, (MR_Integer) 2, &ResetTicketCode_58);
          STATE_VARIABLE_CI_116_116 = STATE_VARIABLE_CI_106_106;
          STATE_VARIABLE_CLD_117_117 = STATE_VARIABLE_CLD_109_109;
        }
        break;
    }
    hlds__hlds_llds__goal_info_get_store_map_2_p_0(IteGoalInfo_15, &StoreMap_59);
    ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_117_117, &EndCondInstMap_60);
    succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(EndCondInstMap_60);
    if (succeeded)
    {
      ThenTraceCode_61 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      ThenCode_62 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      mercury__map__init_1_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), &BranchEndStoreMap_63);
      STATE_VARIABLE_CLD_122_122 = STATE_VARIABLE_CLD_117_117;
      STATE_VARIABLE_CI_121_121 = STATE_VARIABLE_CI_116_116;
    }
    else
    {
      MR_Word STATE_VARIABLE_CI_119_119;
      MR_Word STATE_VARIABLE_CLD_120_120;

      ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ThenGoal_13, IteGoalInfo_15, &ThenTraceCode_61, STATE_VARIABLE_CI_116_116, &STATE_VARIABLE_CI_119_119, STATE_VARIABLE_CLD_117_117, &STATE_VARIABLE_CLD_120_120);
      ll_backend__code_gen__generate_goal_7_p_0(CodeModel_11, ThenGoal_13, &ThenCode_62, STATE_VARIABLE_CI_119_119, &STATE_VARIABLE_CI_121_121, STATE_VARIABLE_CLD_120_120, &STATE_VARIABLE_CLD_122_122);
      BranchEndStoreMap_63 = StoreMap_59;
    }
    ll_backend__code_loc_dep__generate_branch_end_6_p_0(BranchEndStoreMap_63, (MR_Word) ((MR_Unsigned) 0U), &MaybeEnd0_64, &ThenSaveCode_65, STATE_VARIABLE_CI_121_121, STATE_VARIABLE_CLD_122_122);
    ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_48, STATE_VARIABLE_CI_121_121, &STATE_VARIABLE_CLD_124_124);
    ll_backend__code_loc_dep__generate_resume_point_6_p_0(ResumePoint_51, &ResumeCode_66, STATE_VARIABLE_CI_121_121, &STATE_VARIABLE_CI_125_125, STATE_VARIABLE_CLD_124_124, &STATE_VARIABLE_CLD_126_126);
    ll_backend__code_loc_dep__maybe_restore_and_release_hp_6_p_0(MaybeHpSlot_33, &RestoreHpCode_69, STATE_VARIABLE_CI_125_125, &STATE_VARIABLE_CI_133_133, STATE_VARIABLE_CLD_126_126, &STATE_VARIABLE_CLD_134_134);
    ll_backend__code_loc_dep__maybe_reset_discard_and_release_ticket_7_p_0(MaybeTicketSlot_38, (MR_Integer) 0, &RestoreTicketCode_70, STATE_VARIABLE_CI_133_133, &STATE_VARIABLE_CI_136_136, STATE_VARIABLE_CLD_134_134, &STATE_VARIABLE_CLD_137_137);
    ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ElseGoal_14, IteGoalInfo_15, &ElseTraceCode_71, STATE_VARIABLE_CI_136_136, &STATE_VARIABLE_CI_138_138, STATE_VARIABLE_CLD_137_137, &STATE_VARIABLE_CLD_139_139);
    ll_backend__code_gen__generate_goal_7_p_0(CodeModel_11, ElseGoal_14, &ElseCode_72, STATE_VARIABLE_CI_138_138, &STATE_VARIABLE_CI_140_140, STATE_VARIABLE_CLD_139_139, &STATE_VARIABLE_CLD_141_141);
    ll_backend__code_loc_dep__generate_branch_end_6_p_0(StoreMap_59, MaybeEnd0_64, &MaybeEnd_73, &ElseSaveCode_74, STATE_VARIABLE_CI_140_140, STATE_VARIABLE_CLD_141_141);
    ll_backend__code_info__get_next_label_3_p_0(&EndLabel_76, STATE_VARIABLE_CI_140_140, STATE_VARIABLE_CI_83);
    {
      Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (EndLabel_76));
    }
    {
      Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (Var_151));
    }
    {
      Var_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) (Var_150));
      MR_hl_field(MR_mktag(0), Var_149, 1) = ((MR_Box) ((MR_String) "Jump to the end of if-then-else"));
    }
    JumpToEndCode_77 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_149)));
    {
      Var_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_154, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_154, 1) = ((MR_Box) (EndLabel_76));
    }
    {
      Var_153 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_153, 0) = ((MR_Box) (Var_154));
      MR_hl_field(MR_mktag(0), Var_153, 1) = ((MR_Box) ((MR_String) "end of if-then-else"));
    }
    EndLabelCode_78 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_153)));
    ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(Globals_29, CondInfo_25, &PNegCondCode_79, &PNegThenCode_80, &PNegElseCode_81);
    Var_180 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ElseSaveCode_74, EndLabelCode_78);
    Var_179 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ElseCode_72, Var_180);
    Var_178 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PNegElseCode_81, Var_179);
    Var_177 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ElseTraceCode_71, Var_178);
    Var_176 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionElseCode_45, Var_177);
    Var_175 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreTicketCode_70, Var_176);
    Var_174 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreHpCode_69, Var_175);
    Var_173 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ElseNeckCode_56, Var_174);
    Var_172 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResumeCode_66, Var_173);
    Var_171 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), JumpToEndCode_77, Var_172);
    Var_170 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThenSaveCode_65, Var_171);
    Var_169 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThenCode_62, Var_170);
    Var_168 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PNegThenCode_80, Var_169);
    Var_167 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThenTraceCode_61, Var_168);
    Var_166 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionThenCode_44, Var_167);
    Var_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResetTicketCode_58, Var_166);
    Var_164 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThenNeckCode_55, Var_165);
    Var_163 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CondCode_54, Var_164);
    Var_162 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PNegCondCode_79, Var_163);
    Var_161 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CondTraceCode_53, Var_162);
    Var_160 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EffectResumeCode_52, Var_161);
    Var_159 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrepareHijackCode_50, Var_160);
    Var_158 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionCondCode_43, Var_159);
    Var_157 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveTicketCode_37, Var_158);
    Var_156 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveHpCode_32, Var_157);
    *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FlushCode_28, Var_156);
    ll_backend__code_loc_dep__after_all_branches_4_p_0(StoreMap_59, MaybeEnd_73, *STATE_VARIABLE_CI_83, STATE_VARIABLE_CLD_85);
  }
}

static void MR_CALL 
ll_backend__ite_gen__maybe_create_ite_region_frame_13_p_0(
  MR_Word IteRegionOps_14,
  MR_Word CondGoalInfo_15,
  MR_Word CondGoals_16,
  MR_Word ElseGoals_17,
  MR_Word * CondCode_18,
  MR_Word * ThenCode_19,
  MR_Word * ElseCode_20,
  MR_Word * StackVars_21,
  MR_Word * MaybeEmbeddedStackFrameId_22,
  MR_Word STATE_VARIABLE_CI_0_67,
  MR_Word * STATE_VARIABLE_CI_68,
  MR_Word STATE_VARIABLE_CLD_0_69,
  MR_Word * STATE_VARIABLE_CLD_70)
{
  {
    MR_bool succeeded;

    switch (IteRegionOps_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ForwardLiveVars_25;
          MR_Word LiveRegionVars_26;
          MR_Word MaybeRbmmInfo_27;

          ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(STATE_VARIABLE_CLD_0_69, &ForwardLiveVars_25);
          LiveRegionVars_26 = ll_backend__code_info__filter_region_vars_2_f_0(STATE_VARIABLE_CI_0_67, ForwardLiveVars_25);
          MaybeRbmmInfo_27 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(CondGoalInfo_15);
          if ((MaybeRbmmInfo_27 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *CondCode_18 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *ThenCode_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *ElseCode_20 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *StackVars_21 = (MR_Word) ((MR_Unsigned) 0U);
            *MaybeEmbeddedStackFrameId_22 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_CI_68 = STATE_VARIABLE_CI_0_67;
            *STATE_VARIABLE_CLD_70 = STATE_VARIABLE_CLD_0_69;
          }
          else
          {
            MR_Word RbmmInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRbmmInfo_27, (MR_Integer) 0))));
            MR_Word CondCreatedRegionVars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo_28, (MR_Integer) 0))));
            MR_Word CondRemovedRegionVars_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo_28, (MR_Integer) 1))));
            MR_Word CondCarriedRegionVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo_28, (MR_Integer) 2))));
            MR_Word CondAllocRegionVars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo_28, (MR_Integer) 3))));
            MR_Word ReversedCondGoals_34;
            MR_Word ModuleInfo_35;
            MR_Word RemovedAtEndOfThen_36;
            MR_Word NeedToBeProtectedRegionVars_37;
            MR_Word Var_71;

            mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CondGoals_16, &ReversedCondGoals_34);
            ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_67, &ModuleInfo_35);
            Var_71 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]));
            ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(ReversedCondGoals_34, ModuleInfo_35, Var_71, &RemovedAtEndOfThen_36);
            mercury__set__difference_3_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), CondRemovedRegionVars_30, RemovedAtEndOfThen_36, &NeedToBeProtectedRegionVars_37);
            succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), CondCreatedRegionVars_29);
            if (succeeded)
            {
              succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), NeedToBeProtectedRegionVars_37);
              if (succeeded)
                succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), CondAllocRegionVars_32);
            }
            if (succeeded)
            {
              *CondCode_18 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *ThenCode_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *ElseCode_20 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *StackVars_21 = (MR_Word) ((MR_Unsigned) 0U);
              *MaybeEmbeddedStackFrameId_22 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_CLD_70 = STATE_VARIABLE_CLD_0_69;
              *STATE_VARIABLE_CI_68 = STATE_VARIABLE_CI_0_67;
            }
            else
            {
              MR_Word RemovedAtStartOfElse_38;
              MR_Word UnprotectedRemovedAtStartOfElse_39;
              MR_Word ProtectRegionVars_40;
              MR_Word SnapshotRegionVars0_41;
              MR_Word SnapshotRegionVars_42;
              MR_Word ProtectRegionVarList_43;
              MR_Word SnapshotRegionVarList_44;
              MR_Integer NumProtectRegionVars_45;
              MR_Integer NumSnapshotRegionVars_46;
              MR_Word Globals_47;
              MR_Integer FixedSize_48;
              MR_Integer ProtectSize_49;
              MR_Integer SnapshotSize_50;
              MR_Integer FrameSize_51;
              MR_Word Items_52;
              MR_Word MainStackId_53;
              MR_Integer FirstSlotNum_54;
              MR_Integer LastSlotNum_55;
              MR_Word EmbeddedStackFrameId_56;
              MR_Word FirstNonFixedAddr_57;
              MR_Word ProtectNumRegLval_58;
              MR_Word SnapshotNumRegLval_59;
              MR_Word AddrRegLval_60;
              MR_Word PushInitCode_61;
              MR_Word ProtectRegionCode_62;
              MR_Word SnapshotRegionCode_63;
              MR_Word SetCode_64;
              MR_Word CondCodeModel_65;
              MR_Word CondKind_66;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Integer Var_79;
              MR_Integer Var_80;
              MR_Integer Var_81;
              MR_Word STATE_VARIABLE_CLD_85_85;
              MR_Word STATE_VARIABLE_CLD_87_87;
              MR_Word STATE_VARIABLE_CLD_89_89;
              MR_Word STATE_VARIABLE_CLD_91_91;
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_97;
              MR_Word Var_98;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_111;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word STATE_VARIABLE_CLD_118_118;
              MR_Word STATE_VARIABLE_CLD_119_119;
              MR_Word Var_120;
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word Var_124;
              MR_Word Var_126;
              MR_Word Var_127;
              MR_Word Var_128;
              MR_Word Var_130;
              MR_Word STATE_VARIABLE_CLD_133_133;
              MR_Word STATE_VARIABLE_CLD_134_134;
              MR_Word Var_138;
              MR_Word Var_139;
              MR_Word Var_140;
              MR_Word Var_141;
              MR_Word Var_142;
              MR_Word Var_144;
              MR_Word Var_145;
              MR_Word Var_146;

              Var_72 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]));
              ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(ElseGoals_17, ModuleInfo_35, Var_72, &RemovedAtStartOfElse_38);
              mercury__set__intersect_3_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), RemovedAtStartOfElse_38, CondCarriedRegionVars_31, &UnprotectedRemovedAtStartOfElse_39);
              Var_73 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedToBeProtectedRegionVars_37);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveRegionVars_26, Var_73, &ProtectRegionVars_40);
              Var_74 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondAllocRegionVars_32);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveRegionVars_26, Var_74, &SnapshotRegionVars0_41);
              Var_75 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), UnprotectedRemovedAtStartOfElse_39);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SnapshotRegionVars0_41, Var_75, &SnapshotRegionVars_42);
              ProtectRegionVarList_43 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProtectRegionVars_40);
              SnapshotRegionVarList_44 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SnapshotRegionVars_42);
              mercury__list__length_2_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), ProtectRegionVarList_43, &NumProtectRegionVars_45);
              mercury__list__length_2_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), SnapshotRegionVarList_44, &NumSnapshotRegionVars_46);
              ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_67, &Globals_47);
              libs__globals__lookup_int_option_3_p_0(Globals_47, (MR_Integer) 313, &FixedSize_48);
              libs__globals__lookup_int_option_3_p_0(Globals_47, (MR_Integer) 317, &ProtectSize_49);
              libs__globals__lookup_int_option_3_p_0(Globals_47, (MR_Integer) 318, &SnapshotSize_50);
              Var_80 = (MR_Integer) ((MR_Unsigned) ProtectSize_49 * (MR_Unsigned) NumProtectRegionVars_45);
              Var_79 = (MR_Integer) ((MR_Unsigned) FixedSize_48 + (MR_Unsigned) Var_80);
              Var_81 = (MR_Integer) ((MR_Unsigned) SnapshotSize_50 * (MR_Unsigned) NumSnapshotRegionVars_46);
              FrameSize_51 = (MR_Integer) ((MR_Unsigned) Var_79 + (MR_Unsigned) Var_81);
              Items_52 = mercury__list__duplicate_2_f_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), FrameSize_51, ((MR_Box) ((MR_Unsigned) 28U)));
              ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(Items_52, (MR_Integer) 1, StackVars_21, &MainStackId_53, &FirstSlotNum_54, &LastSlotNum_55, STATE_VARIABLE_CI_0_67, STATE_VARIABLE_CI_68, STATE_VARIABLE_CLD_0_69, &STATE_VARIABLE_CLD_85_85);
              {
                EmbeddedStackFrameId_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), EmbeddedStackFrameId_56, 0) = (MR_Box) ((MR_Unsigned) (MainStackId_53));
                MR_hl_field(MR_mktag(0), EmbeddedStackFrameId_56, 1) = ((MR_Box) (FirstSlotNum_54));
                MR_hl_field(MR_mktag(0), EmbeddedStackFrameId_56, 2) = ((MR_Box) (LastSlotNum_55));
              }
              FirstNonFixedAddr_57 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(EmbeddedStackFrameId_56, FixedSize_48);
              ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ProtectNumRegLval_58, STATE_VARIABLE_CLD_85_85, &STATE_VARIABLE_CLD_87_87);
              ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &SnapshotNumRegLval_59, STATE_VARIABLE_CLD_87_87, &STATE_VARIABLE_CLD_89_89);
              ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &AddrRegLval_60, STATE_VARIABLE_CLD_89_89, &STATE_VARIABLE_CLD_91_91);
              {
                Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(3), Var_94, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_94, 2) = ((MR_Box) (EmbeddedStackFrameId_56));
              }
              {
                Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (Var_94));
                MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region ite stack"));
              }
              Var_100 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__ite_gen_scalar_common_1[3]));
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (ProtectNumRegLval_58));
                MR_hl_field(MR_mktag(3), Var_99, 2) = ((MR_Box) (Var_100));
              }
              {
                Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (Var_99));
                MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) ((MR_String) "Initialize number of protect_infos"));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (SnapshotNumRegLval_59));
                MR_hl_field(MR_mktag(3), Var_106, 2) = ((MR_Box) (Var_100));
              }
              {
                Var_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (Var_106));
                MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
              }
              {
                Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (AddrRegLval_60));
                MR_hl_field(MR_mktag(3), Var_113, 2) = ((MR_Box) (FirstNonFixedAddr_57));
              }
              {
                Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (Var_113));
                MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) ((MR_String) "Initialize pointer to nonfixed part of embedded frame"));
              }
              {
                Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
                MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
                MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_111));
              }
              {
                Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
                MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_104));
              }
              {
                Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
                MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_97));
              }
              PushInitCode_61 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_92);
              ll_backend__ite_gen__ite_protect_regions_8_p_0(ProtectNumRegLval_58, AddrRegLval_60, EmbeddedStackFrameId_56, ProtectRegionVarList_43, &ProtectRegionCode_62, *STATE_VARIABLE_CI_68, STATE_VARIABLE_CLD_91_91, &STATE_VARIABLE_CLD_118_118);
              ll_backend__ite_gen__ite_alloc_snapshot_regions_9_p_0(SnapshotNumRegLval_59, AddrRegLval_60, EmbeddedStackFrameId_56, RemovedAtStartOfElse_38, SnapshotRegionVarList_44, &SnapshotRegionCode_63, *STATE_VARIABLE_CI_68, STATE_VARIABLE_CLD_118_118, &STATE_VARIABLE_CLD_119_119);
              {
                Var_124 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (ProtectNumRegLval_58));
              }
              {
                Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                MR_hl_field(MR_mktag(3), Var_122, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_122, 2) = ((MR_Box) (EmbeddedStackFrameId_56));
                MR_hl_field(MR_mktag(3), Var_122, 3) = ((MR_Box) (Var_124));
              }
              {
                Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (Var_122));
                MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) ((MR_String) "Store the number of protect_infos"));
              }
              {
                Var_130 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (SnapshotNumRegLval_59));
              }
              {
                Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                MR_hl_field(MR_mktag(3), Var_128, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_128, 2) = ((MR_Box) (EmbeddedStackFrameId_56));
                MR_hl_field(MR_mktag(3), Var_128, 3) = ((MR_Box) (Var_130));
              }
              {
                Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (Var_128));
                MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
              }
              {
                Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Var_127));
                MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var_121));
                MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_126));
              }
              SetCode_64 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_120);
              ll_backend__code_loc_dep__release_reg_3_p_0(ProtectNumRegLval_58, STATE_VARIABLE_CLD_119_119, &STATE_VARIABLE_CLD_133_133);
              ll_backend__code_loc_dep__release_reg_3_p_0(SnapshotNumRegLval_59, STATE_VARIABLE_CLD_133_133, &STATE_VARIABLE_CLD_134_134);
              ll_backend__code_loc_dep__release_reg_3_p_0(AddrRegLval_60, STATE_VARIABLE_CLD_134_134, STATE_VARIABLE_CLD_70);
              CondCodeModel_65 = hlds__code_model__goal_info_get_code_model_1_f_0(CondGoalInfo_15);
              switch (CondCodeModel_65) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.ite_gen.maybe_create_ite_region_frame\'/13", (MR_String) "det cond");
                    return;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    CondKind_66 = (MR_Integer) 1;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeEmbeddedStackFrameId_22 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (EmbeddedStackFrameId_56));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    CondKind_66 = (MR_Integer) 0;
                    *MaybeEmbeddedStackFrameId_22 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
              }
              Var_139 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SnapshotRegionCode_63, SetCode_64);
              Var_138 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProtectRegionCode_62, Var_139);
              *CondCode_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PushInitCode_61, Var_138);
              {
                Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_142, 0) = (MR_Box) ((MR_Unsigned) (CondKind_66));
              }
              {
                Var_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_141, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                MR_hl_field(MR_mktag(3), Var_141, 1) = ((MR_Box) (Var_142));
                MR_hl_field(MR_mktag(3), Var_141, 2) = ((MR_Box) (EmbeddedStackFrameId_56));
              }
              {
                Var_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_140, 0) = ((MR_Box) (Var_141));
                MR_hl_field(MR_mktag(0), Var_140, 1) = ((MR_Box) ((MR_String) "region enter then"));
              }
              *ThenCode_19 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_140)));
              {
                Var_146 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_146, 0) = (MR_Box) ((MR_Unsigned) (CondKind_66));
              }
              {
                Var_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_145, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                MR_hl_field(MR_mktag(3), Var_145, 1) = ((MR_Box) (Var_146));
                MR_hl_field(MR_mktag(3), Var_145, 2) = ((MR_Box) (EmbeddedStackFrameId_56));
              }
              {
                Var_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_144, 0) = ((MR_Box) (Var_145));
                MR_hl_field(MR_mktag(0), Var_144, 1) = ((MR_Box) ((MR_String) "region enter else"));
              }
              *ElseCode_20 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_144)));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *CondCode_18 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *ThenCode_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *ElseCode_20 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *StackVars_21 = (MR_Word) ((MR_Unsigned) 0U);
          *MaybeEmbeddedStackFrameId_22 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_CI_68 = STATE_VARIABLE_CI_0_67;
          *STATE_VARIABLE_CLD_70 = STATE_VARIABLE_CLD_0_69;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__ite_gen__ite_alloc_snapshot_regions_9_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrameId_3,
  MR_Word RemovedVars_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CLD_9 = STATE_VARIABLE_CLD_0_8;
    }
    else
    {
      MR_Word RegionVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word RegionVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Code_24;
      MR_Word Codes_25;
      MR_Word ProduceVarCode_28;
      MR_Word RegionVarRval_29;
      MR_Word RemovedAtStartOfElse_30;
      MR_Word SaveCode_31;
      MR_Word STATE_VARIABLE_CLD_34_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;

      ll_backend__code_loc_dep__produce_variable_6_p_0(RegionVar_22, &ProduceVarCode_28, &RegionVarRval_29, HeadVar__7_7, STATE_VARIABLE_CLD_0_8, &STATE_VARIABLE_CLD_34_34);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&ll_backend__ite_gen_scalar_common_1[0]), ((MR_Box) (RegionVar_22)), RemovedVars_4);
      if (succeeded)
        RemovedAtStartOfElse_30 = (MR_Integer) 0;
      else
        RemovedAtStartOfElse_30 = (MR_Integer) 1;
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = (MR_Box) ((MR_Unsigned) (RemovedAtStartOfElse_30));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(3), Var_36, 2) = ((MR_Box) (EmbeddedStackFrameId_3));
        MR_hl_field(MR_mktag(3), Var_36, 3) = ((MR_Box) (RegionVarRval_29));
        MR_hl_field(MR_mktag(3), Var_36, 4) = ((MR_Box) (NumLval_1));
        MR_hl_field(MR_mktag(3), Var_36, 5) = ((MR_Box) (AddrLval_2));
      }
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) ((MR_String) "take alloc snapshot of the region"));
      }
      SaveCode_31 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_35)));
      Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVarCode_28, SaveCode_31);
      ll_backend__ite_gen__ite_alloc_snapshot_regions_9_p_0(NumLval_1, AddrLval_2, EmbeddedStackFrameId_3, RemovedVars_4, RegionVars_23, &Codes_25, HeadVar__7_7, STATE_VARIABLE_CLD_34_34, STATE_VARIABLE_CLD_9);
      *HeadVar__6_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code_24, Codes_25);
    }
  }
}

static void MR_CALL 
ll_backend__ite_gen__ite_protect_regions_8_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrameId_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_8 = STATE_VARIABLE_CLD_0_7;
  }
  else
  {
    MR_Word RegionVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word RegionVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Code_21;
    MR_Word Codes_22;
    MR_Word ProduceVarCode_25;
    MR_Word RegionVarRval_26;
    MR_Word SaveCode_27;
    MR_Word STATE_VARIABLE_CLD_30_30;
    MR_Word Var_31;
    MR_Word Var_32;

    ll_backend__code_loc_dep__produce_variable_6_p_0(RegionVar_19, &ProduceVarCode_25, &RegionVarRval_26, HeadVar__6_6, STATE_VARIABLE_CLD_0_7, &STATE_VARIABLE_CLD_30_30);
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_32, 2) = ((MR_Box) (EmbeddedStackFrameId_3));
      MR_hl_field(MR_mktag(3), Var_32, 3) = ((MR_Box) (RegionVarRval_26));
      MR_hl_field(MR_mktag(3), Var_32, 4) = ((MR_Box) (NumLval_1));
      MR_hl_field(MR_mktag(3), Var_32, 5) = ((MR_Box) (AddrLval_2));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_String) "ite protect the region if needed"));
    }
    SaveCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_31)));
    Code_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVarCode_25, SaveCode_27);
    ll_backend__ite_gen__ite_protect_regions_8_p_0(NumLval_1, AddrLval_2, EmbeddedStackFrameId_3, RegionVars_20, &Codes_22, HeadVar__6_6, STATE_VARIABLE_CLD_30_30, STATE_VARIABLE_CLD_8);
    *HeadVar__5_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code_21, Codes_22);
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
      MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_9, (MR_Integer) 0))));
      MR_Word RegionVar_22;
      MR_Word PredId_15;
      MR_Word Args_17;
      MR_Word PredInfo_21;
      MR_Word Var_25;
      MR_String Var_26;
      MR_Word Var_27;
      MR_Word Var_31;
      MR_String Var_32;

      succeeded = ((MR_tag((MR_Word) GoalExpr_13)) == (MR_Integer) 2);
      if (succeeded)
      {
        PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_13, (MR_Integer) 0))));
        Args_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_13, (MR_Integer) 2))));
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_2, PredId_15, &PredInfo_21);
        Var_25 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_21);
        Var_31 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_25, Var_31);
        if (succeeded)
        {
          Var_26 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_21);
          Var_32 = transform_hlds__rbmm__region_transformation__remove_region_pred_name_0_f_0();
          succeeded = (strcmp(Var_26, Var_32) == 0);
          if (succeeded)
          {
            succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RegionVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
              Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
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
  {
    MR_bool succeeded;
    MR_Word UseMinimalModelStackCopyPNeg_11;
    MR_Word Var_21;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 310, &UseMinimalModelStackCopyPNeg_11);
    succeeded = (UseMinimalModelStackCopyPNeg_11 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_21 = (MR_Integer) 19;
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_7, Var_21);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word Context_12;
      MR_String File_13;
      MR_Integer Line_14;
      MR_String CtxtStr_15;
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
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Integer Var_22;

      Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_7);
      mercury__term__context_file_2_p_0(Context_12, &File_13);
      mercury__term__context_line_2_p_0(Context_12, &Line_14);
      succeeded = (strcmp(File_13, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_22 = (MR_Integer) 0;
        succeeded = (Line_14 > Var_22);
      }
      if (succeeded)
      {
        MR_String Var_24;
        MR_String Var_25;
        MR_String Var_27;
        MR_String Var_28;

        Var_28 = mercury__string__int_to_string_1_f_0(Line_14);
        Var_27 = mercury__string__f_43_43_2_f_0(Var_28, (MR_String) "\"");
        Var_25 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_27);
        Var_24 = mercury__string__f_43_43_2_f_0(File_13, Var_25);
        CtxtStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_24);
      }
      else
        CtxtStr_15 = (MR_String) "NULL";
      Var_34 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      }
      Var_35 = ll_backend__ite_gen__wrap_transient_1_f_0((MR_String) "\t\tMR_pneg_enter_cond();\n");
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(3), Var_30, 2) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(3), Var_30, 3) = ((MR_Box) (Var_35));
      }
      {
        PNegCondComponents_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PNegCondComponents_16, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), PNegCondComponents_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_42 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      }
      Var_43 = ll_backend__ite_gen__wrap_transient_1_f_0((MR_String) "\t\tMR_pneg_enter_then();\n");
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_38, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(3), Var_38, 2) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(3), Var_38, 3) = ((MR_Box) (Var_43));
      }
      {
        PNegThenComponents_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PNegThenComponents_17, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), PNegThenComponents_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_50 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
      }
      Var_54 = mercury__string__f_43_43_2_f_0(CtxtStr_15, (MR_String) ");\n");
      Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_pneg_enter_else(", Var_54);
      Var_51 = ll_backend__ite_gen__wrap_transient_1_f_0(Var_52);
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_46, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(3), Var_46, 3) = ((MR_Box) (Var_51));
      }
      {
        PNegElseComponents_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PNegElseComponents_18, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), PNegElseComponents_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 27U));
        MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_58, 2) = ((MR_Box) (PNegCondComponents_16));
        MR_hl_field(MR_mktag(3), Var_58, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_58, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_58, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_58, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_58, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_58, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      }
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) ((MR_String) ""));
      }
      *PNegCondCode_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_57)));
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 27U));
        MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_69, 2) = ((MR_Box) (PNegThenComponents_17));
        MR_hl_field(MR_mktag(3), Var_69, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_69, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_69, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_69, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_69, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_69, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_69, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      }
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) ((MR_String) ""));
      }
      *PNegThenCode_9 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_68)));
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 27U));
        MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_80, 2) = ((MR_Box) (PNegElseComponents_18));
        MR_hl_field(MR_mktag(3), Var_80, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_80, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_80, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_80, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_80, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_80, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_80, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      }
      {
        Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) ((MR_String) ""));
      }
      *PNegElseCode_10 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_79)));
    }
    else
    {
      *PNegCondCode_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *PNegThenCode_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *PNegElseCode_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    }
  }
}

static MR_String MR_CALL 
ll_backend__ite_gen__wrap_transient_1_f_0(
  MR_String Code_3)
{
  {
    MR_String HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Code_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__ite_gen_scalar_common_1[2])));
    }
    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_4, 0) = ((MR_Box) ((MR_String) "\t\tMR_save_transient_registers();\n"));
      MR_hl_field(MR_mktag(1), Var_4, 1) = ((MR_Box) (Var_6));
    }
    HeadVar__2_2 = mercury__string__append_list_1_f_0(Var_4);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__ite_gen__read_and_erase_resume_point_5_p_0(
  MR_String CondStr_6,
  MR_Word * ResumeVars_7,
  MR_Word * ResumeLocs_8,
  MR_Word CondInfo0_9,
  MR_Word * CondInfo_10)
{
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
      *ResumeVars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Resume_11, (MR_Integer) 0))));
      *ResumeLocs_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Resume_11, (MR_Integer) 1))) & (MR_Integer) 3);
      hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) ((MR_Unsigned) 0U), CondInfo0_9, CondInfo_10);
    }
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
