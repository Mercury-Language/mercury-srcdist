/*
** Automatically generated from `commit_gen.m'
** by the Mercury compiler,
** version rotd-2022-01-29
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
#include "check_hlds.mih"
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
#include "ops.mih"
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"










#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



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
    MR_bool succeeded = ((((MR_tag((MR_Word) Reason_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
    MR_Word MaybeTraceRuntimeCond_20;

    if (succeeded)
    {
      MaybeTraceRuntimeCond_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_11, (MR_Integer) 2))));
      succeeded = (MaybeTraceRuntimeCond_20 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.commit_gen.generate_scope\'/10", (MR_String) "trace_goal");
        return;
      }
    else
    {
      MR_Word AddTrailOps_44;
      MR_Word AddRegionOps_45;
      MR_Word InnerGoalInfo_47;
      MR_Word InnerCodeModel_48;

      AddTrailOps_44 = ll_backend__code_info__should_add_trail_ops_2_f_0(STATE_VARIABLE_CI_0_25, OuterGoalInfo_13);
      AddRegionOps_45 = ll_backend__code_info__should_add_region_ops_2_f_0(STATE_VARIABLE_CI_0_25, OuterGoalInfo_13);
      InnerGoalInfo_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_15, (MR_Integer) 1))));
      InnerCodeModel_48 = hlds__code_model__goal_info_get_code_model_1_f_0(InnerGoalInfo_47);
      switch (OuterCodeModel_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (InnerCodeModel_48) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_48, Goal_15, Code_16, STATE_VARIABLE_CI_0_25, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_0_27, STATE_VARIABLE_CLD_28);
              break;
            case (MR_Integer) 2:
              {
                MR_Word CommitInfo_49;
                MR_Word PreCommit_50;
                MR_Word GoalCode_51;
                MR_Word Commit_52;
                MR_Word STATE_VARIABLE_CI_43_66;
                MR_Word STATE_VARIABLE_CLD_44_67;
                MR_Word STATE_VARIABLE_CI_45_68;
                MR_Word STATE_VARIABLE_CLD_46_69;
                MR_Word Var_72;

                ll_backend__code_loc_dep__prepare_for_det_commit_10_p_0(AddTrailOps_44, AddRegionOps_45, ForwardLiveVarsBeforeGoal_14, InnerGoalInfo_47, &CommitInfo_49, &PreCommit_50, STATE_VARIABLE_CI_0_25, &STATE_VARIABLE_CI_43_66, STATE_VARIABLE_CLD_0_27, &STATE_VARIABLE_CLD_44_67);
                ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_48, Goal_15, &GoalCode_51, STATE_VARIABLE_CI_43_66, &STATE_VARIABLE_CI_45_68, STATE_VARIABLE_CLD_44_67, &STATE_VARIABLE_CLD_46_69);
                ll_backend__code_loc_dep__generate_det_commit_6_p_0(CommitInfo_49, &Commit_52, STATE_VARIABLE_CI_45_68, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_46_69, STATE_VARIABLE_CLD_28);
                Var_72 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_51, Commit_52);
                *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PreCommit_50, Var_72);
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
          ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_48, Goal_15, Code_16, STATE_VARIABLE_CI_0_25, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_0_27, STATE_VARIABLE_CLD_28);
          break;
        case (MR_Integer) 1:
          switch (InnerCodeModel_48) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_48, Goal_15, Code_16, STATE_VARIABLE_CI_0_25, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_0_27, STATE_VARIABLE_CLD_28);
              break;
            case (MR_Integer) 2:
              {
                MR_Word STATE_VARIABLE_CI_32_55;
                MR_Word STATE_VARIABLE_CLD_33_56;
                MR_Word STATE_VARIABLE_CI_34_57;
                MR_Word STATE_VARIABLE_CLD_35_58;
                MR_Word Var_61;
                MR_Word CommitInfo_77;
                MR_Word PreCommit_78;
                MR_Word GoalCode_79;
                MR_Word Commit_80;

                ll_backend__code_loc_dep__prepare_for_semi_commit_10_p_0(AddTrailOps_44, AddRegionOps_45, ForwardLiveVarsBeforeGoal_14, InnerGoalInfo_47, &CommitInfo_77, &PreCommit_78, STATE_VARIABLE_CI_0_25, &STATE_VARIABLE_CI_32_55, STATE_VARIABLE_CLD_0_27, &STATE_VARIABLE_CLD_33_56);
                ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_48, Goal_15, &GoalCode_79, STATE_VARIABLE_CI_32_55, &STATE_VARIABLE_CI_34_57, STATE_VARIABLE_CLD_33_56, &STATE_VARIABLE_CLD_35_58);
                ll_backend__code_loc_dep__generate_semi_commit_6_p_0(CommitInfo_77, &Commit_80, STATE_VARIABLE_CI_34_57, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_35_58, STATE_VARIABLE_CLD_28);
                Var_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_79, Commit_80);
                *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PreCommit_78, Var_61);
              }
              break;
            case (MR_Integer) 1:
              ll_backend__code_gen__generate_goal_7_p_0(InnerCodeModel_48, Goal_15, Code_16, STATE_VARIABLE_CI_0_25, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_0_27, STATE_VARIABLE_CLD_28);
              break;
          }
          break;
      }
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
