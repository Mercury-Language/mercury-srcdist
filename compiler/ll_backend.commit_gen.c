/*
** Automatically generated from `commit_gen.m'
** by the Mercury compiler,
** version rotd-2018-08-19
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


// :- module ll_backend.commit_gen.
// :- implementation.

/*
INIT mercury__ll_backend__commit_gen__init
ENDINIT
*/

#include "ll_backend.commit_gen.mih"


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
#include "ll_backend.code_gen.mih"
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




static void MR_CALL 
ll_backend__commit_gen__generate_commit_9_p_0(
  MR_Word OuterCodeModel_10,
  MR_Word OuterGoalInfo_11,
  MR_Word ForwardLiveVarsBeforeGoal_12,
  MR_Word Goal_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_26,
  MR_Word * STATE_VARIABLE_CI_27,
  MR_Word STATE_VARIABLE_CLD_0_28,
  MR_Word * STATE_VARIABLE_CLD_29);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
ll_backend__commit_gen__generate_scope_10_p_0(
  MR_Word Reason_11,
  MR_Word OuterCodeModel_12,
  MR_Word OuterGoalInfo_13,
  MR_Word ForwardLiveVarsBeforeGoal_14,
  MR_Word Goal_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_25,
  MR_Word * STATE_VARIABLE_CI_26,
  MR_Word STATE_VARIABLE_CLD_0_27,
  MR_Word * STATE_VARIABLE_CLD_28)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Reason_11)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_11, (MR_Integer) 0))) == (MR_Integer) 7)));
    MR_Word MaybeTraceRuntimeCond_20;

    if (succeeded)
    {
      MaybeTraceRuntimeCond_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_11, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) MaybeTraceRuntimeCond_20)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.commit_gen", (MR_String) "predicate \140ll_backend.commit_gen.generate_scope\'/10", (MR_String) "trace_goal");
        return;
      }
    }
    else
      ll_backend__commit_gen__generate_commit_9_p_0(OuterCodeModel_12, OuterGoalInfo_13, ForwardLiveVarsBeforeGoal_14, Goal_15, Code_16, STATE_VARIABLE_CI_0_25, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_0_27, STATE_VARIABLE_CLD_28);
  }
}

static void MR_CALL 
ll_backend__commit_gen__generate_commit_9_p_0(
  MR_Word OuterCodeModel_10,
  MR_Word OuterGoalInfo_11,
  MR_Word ForwardLiveVarsBeforeGoal_12,
  MR_Word Goal_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_26,
  MR_Word * STATE_VARIABLE_CI_27,
  MR_Word STATE_VARIABLE_CLD_0_28,
  MR_Word * STATE_VARIABLE_CLD_29)
{
  {
    MR_Word AddTrailOps_17;
    MR_Word AddRegionOps_18;
    MR_Word InnerGoalInfo_20;
    MR_Word InnerCodeModel_21;

    AddTrailOps_17 = ll_backend__code_info__should_add_trail_ops_2_f_0(STATE_VARIABLE_CI_0_26, OuterGoalInfo_11);
    AddRegionOps_18 = ll_backend__code_info__should_add_region_ops_2_f_0(STATE_VARIABLE_CI_0_26, OuterGoalInfo_11);
    InnerGoalInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_13, (MR_Integer) 1))));
    InnerCodeModel_21 = hlds__code_model__goal_info_get_code_model_1_f_0(InnerGoalInfo_20);
    switch (OuterCodeModel_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (InnerCodeModel_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_21, Goal_13, Code_14, STATE_VARIABLE_CI_0_26, STATE_VARIABLE_CI_27, STATE_VARIABLE_CLD_0_28, STATE_VARIABLE_CLD_29);
            break;
          case (MR_Integer) 2:
            {
              MR_Word CommitInfo_22;
              MR_Word PreCommit_23;
              MR_Word GoalCode_24;
              MR_Word Commit_25;
              MR_Word STATE_VARIABLE_CI_43_43;
              MR_Word STATE_VARIABLE_CLD_44_44;
              MR_Word STATE_VARIABLE_CI_45_45;
              MR_Word STATE_VARIABLE_CLD_46_46;
              MR_Word Var_49;

              ll_backend__code_loc_dep__prepare_for_det_commit_10_p_0(AddTrailOps_17, AddRegionOps_18, ForwardLiveVarsBeforeGoal_12, InnerGoalInfo_20, &CommitInfo_22, &PreCommit_23, STATE_VARIABLE_CI_0_26, &STATE_VARIABLE_CI_43_43, STATE_VARIABLE_CLD_0_28, &STATE_VARIABLE_CLD_44_44);
              ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_21, Goal_13, &GoalCode_24, STATE_VARIABLE_CI_43_43, &STATE_VARIABLE_CI_45_45, STATE_VARIABLE_CLD_44_44, &STATE_VARIABLE_CLD_46_46);
              ll_backend__code_loc_dep__generate_det_commit_6_p_0(CommitInfo_22, &Commit_25, STATE_VARIABLE_CI_45_45, STATE_VARIABLE_CI_27, STATE_VARIABLE_CLD_46_46, STATE_VARIABLE_CLD_29);
              Var_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_24, Commit_25);
              *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PreCommit_23, Var_49);
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.commit_gen", (MR_String) "predicate \140ll_backend.commit_gen.generate_commit\'/9", (MR_String) "semidet model in det context");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_21, Goal_13, Code_14, STATE_VARIABLE_CI_0_26, STATE_VARIABLE_CI_27, STATE_VARIABLE_CLD_0_28, STATE_VARIABLE_CLD_29);
        break;
      case (MR_Integer) 1:
        switch (InnerCodeModel_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_21, Goal_13, Code_14, STATE_VARIABLE_CI_0_26, STATE_VARIABLE_CI_27, STATE_VARIABLE_CLD_0_28, STATE_VARIABLE_CLD_29);
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_CI_32_32;
              MR_Word STATE_VARIABLE_CLD_33_33;
              MR_Word STATE_VARIABLE_CI_34_34;
              MR_Word STATE_VARIABLE_CLD_35_35;
              MR_Word Var_38;
              MR_Word CommitInfo_55;
              MR_Word PreCommit_56;
              MR_Word GoalCode_57;
              MR_Word Commit_58;

              ll_backend__code_loc_dep__prepare_for_semi_commit_10_p_0(AddTrailOps_17, AddRegionOps_18, ForwardLiveVarsBeforeGoal_12, InnerGoalInfo_20, &CommitInfo_55, &PreCommit_56, STATE_VARIABLE_CI_0_26, &STATE_VARIABLE_CI_32_32, STATE_VARIABLE_CLD_0_28, &STATE_VARIABLE_CLD_33_33);
              ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_21, Goal_13, &GoalCode_57, STATE_VARIABLE_CI_32_32, &STATE_VARIABLE_CI_34_34, STATE_VARIABLE_CLD_33_33, &STATE_VARIABLE_CLD_35_35);
              ll_backend__code_loc_dep__generate_semi_commit_6_p_0(CommitInfo_55, &Commit_58, STATE_VARIABLE_CI_34_34, STATE_VARIABLE_CI_27, STATE_VARIABLE_CLD_35_35, STATE_VARIABLE_CLD_29);
              Var_38 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_57, Commit_58);
              *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PreCommit_56, Var_38);
            }
            break;
          case (MR_Integer) 1:
            ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_21, Goal_13, Code_14, STATE_VARIABLE_CI_0_26, STATE_VARIABLE_CI_27, STATE_VARIABLE_CLD_0_28, STATE_VARIABLE_CLD_29);
            break;
        }
        break;
    }
  }
}

void mercury__ll_backend__commit_gen__init(void)
{
}

void mercury__ll_backend__commit_gen__init_type_tables(void)
{
}

void mercury__ll_backend__commit_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__commit_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.commit_gen.
