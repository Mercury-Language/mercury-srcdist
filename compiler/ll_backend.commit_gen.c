/*
** Automatically generated from `commit_gen.m'
** by the Mercury compiler,
** version rotd-2025-12-07
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


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.var_locn.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"










#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


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
  MR_bool succeeded = ((((MR_tag((MR_Word) Reason_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_11, 0)))) == (MR_Integer) 7)));
  MR_Word MaybeTraceRuntimeCond_20;

  if (succeeded)
  {
    MaybeTraceRuntimeCond_20 = ((MR_Word) ((MR_hl_field(3, Reason_11, 2))));
    succeeded = (MaybeTraceRuntimeCond_20 != (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.commit_gen.generate_scope\'/10", (MR_String) "trace_goal");
      return;
    }
  else
  {
    MR_Word AddTrailOps_31;
    MR_Word AddRegionOps_32;
    MR_Word InnerGoalInfo_34;
    MR_Word InnerCodeModel_35;

    AddTrailOps_31 = ll_backend__code_info__should_add_trail_ops_2_f_0(STATE_VARIABLE_CI_0_25, OuterGoalInfo_13);
    AddRegionOps_32 = ll_backend__code_info__should_add_region_ops_2_f_0(STATE_VARIABLE_CI_0_25, OuterGoalInfo_13);
    InnerGoalInfo_34 = ((MR_Word) ((MR_hl_field(0, Goal_15, 1))));
    InnerCodeModel_35 = hlds__code_model__goal_info_get_code_model_1_f_0(InnerGoalInfo_34);
    switch (OuterCodeModel_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (InnerCodeModel_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_35, Goal_15, Code_16, STATE_VARIABLE_CI_0_25, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_0_27, STATE_VARIABLE_CLD_28);
            break;
          case (MR_Integer) 2:
            {
              MR_Word CommitInfo_36;
              MR_Word PreCommit_37;
              MR_Word GoalCode_38;
              MR_Word Commit_39;
              MR_Word STATE_VARIABLE_CI_2_42;
              MR_Word STATE_VARIABLE_CLD_2_43;
              MR_Word STATE_VARIABLE_CI_3_44;
              MR_Word STATE_VARIABLE_CLD_3_45;
              MR_Word Var_46;

              ll_backend__code_loc_dep__prepare_for_det_commit_10_p_0(AddTrailOps_31, AddRegionOps_32, ForwardLiveVarsBeforeGoal_14, InnerGoalInfo_34, &CommitInfo_36, &PreCommit_37, STATE_VARIABLE_CI_0_25, &STATE_VARIABLE_CI_2_42, STATE_VARIABLE_CLD_0_27, &STATE_VARIABLE_CLD_2_43);
              ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_35, Goal_15, &GoalCode_38, STATE_VARIABLE_CI_2_42, &STATE_VARIABLE_CI_3_44, STATE_VARIABLE_CLD_2_43, &STATE_VARIABLE_CLD_3_45);
              ll_backend__code_loc_dep__generate_det_commit_6_p_0(CommitInfo_36, &Commit_39, STATE_VARIABLE_CI_3_44, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_3_45, STATE_VARIABLE_CLD_28);
              Var_46 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_38, Commit_39);
              *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PreCommit_37, Var_46);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.commit_gen.generate_commit\'/9", (MR_String) "semidet model in det context");
              return;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_35, Goal_15, Code_16, STATE_VARIABLE_CI_0_25, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_0_27, STATE_VARIABLE_CLD_28);
        break;
      case (MR_Integer) 1:
        switch (InnerCodeModel_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_35, Goal_15, Code_16, STATE_VARIABLE_CI_0_25, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_0_27, STATE_VARIABLE_CLD_28);
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_CI_7_47;
              MR_Word STATE_VARIABLE_CLD_7_48;
              MR_Word STATE_VARIABLE_CI_8_49;
              MR_Word STATE_VARIABLE_CLD_8_50;
              MR_Word Var_51;
              MR_Word CommitInfo_52;
              MR_Word PreCommit_53;
              MR_Word GoalCode_54;
              MR_Word Commit_55;

              ll_backend__code_loc_dep__prepare_for_semi_commit_10_p_0(AddTrailOps_31, AddRegionOps_32, ForwardLiveVarsBeforeGoal_14, InnerGoalInfo_34, &CommitInfo_52, &PreCommit_53, STATE_VARIABLE_CI_0_25, &STATE_VARIABLE_CI_7_47, STATE_VARIABLE_CLD_0_27, &STATE_VARIABLE_CLD_7_48);
              ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_35, Goal_15, &GoalCode_54, STATE_VARIABLE_CI_7_47, &STATE_VARIABLE_CI_8_49, STATE_VARIABLE_CLD_7_48, &STATE_VARIABLE_CLD_8_50);
              ll_backend__code_loc_dep__generate_semi_commit_6_p_0(CommitInfo_52, &Commit_55, STATE_VARIABLE_CI_8_49, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_8_50, STATE_VARIABLE_CLD_28);
              Var_51 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_54, Commit_55);
              *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PreCommit_53, Var_51);
            }
            break;
          case (MR_Integer) 1:
            ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_35, Goal_15, Code_16, STATE_VARIABLE_CI_0_25, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_0_27, STATE_VARIABLE_CLD_28);
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
