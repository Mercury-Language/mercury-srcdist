/*
** Automatically generated from `commit_gen.m'
** by the Mercury compiler,
** version rotd-2015-08-10
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module ll_backend.commit_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__commit_gen__init
ENDINIT
*/

#include "ll_backend.commit_gen.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 61 "commit_gen.m"
static void MR_CALL 
ll_backend__commit_gen__generate_commit_9_p_0(
#line 61 "commit_gen.m"
  MR_Word ll_backend__commit_gen__OuterCodeModel_10,
#line 61 "commit_gen.m"
  MR_Word ll_backend__commit_gen__OuterGoalInfo_11,
#line 61 "commit_gen.m"
  MR_Word ll_backend__commit_gen__ForwardLiveVarsBeforeGoal_12,
#line 61 "commit_gen.m"
  MR_Word ll_backend__commit_gen__Goal_13,
#line 61 "commit_gen.m"
  MR_Word * ll_backend__commit_gen__Code_14,
#line 61 "commit_gen.m"
  MR_Word ll_backend__commit_gen__STATE_VARIABLE_CI_0_26,
#line 61 "commit_gen.m"
  MR_Word * ll_backend__commit_gen__STATE_VARIABLE_CI_27,
#line 61 "commit_gen.m"
  MR_Word ll_backend__commit_gen__STATE_VARIABLE_CLD_0_28,
#line 61 "commit_gen.m"
  MR_Word * ll_backend__commit_gen__STATE_VARIABLE_CLD_29);







#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 61 "commit_gen.m"
static void MR_CALL 
ll_backend__commit_gen__generate_commit_9_p_0(
#line 61 "commit_gen.m"
  MR_Word ll_backend__commit_gen__OuterCodeModel_10,
#line 61 "commit_gen.m"
  MR_Word ll_backend__commit_gen__OuterGoalInfo_11,
#line 61 "commit_gen.m"
  MR_Word ll_backend__commit_gen__ForwardLiveVarsBeforeGoal_12,
#line 61 "commit_gen.m"
  MR_Word ll_backend__commit_gen__Goal_13,
#line 61 "commit_gen.m"
  MR_Word * ll_backend__commit_gen__Code_14,
#line 61 "commit_gen.m"
  MR_Word ll_backend__commit_gen__STATE_VARIABLE_CI_0_26,
#line 61 "commit_gen.m"
  MR_Word * ll_backend__commit_gen__STATE_VARIABLE_CI_27,
#line 61 "commit_gen.m"
  MR_Word ll_backend__commit_gen__STATE_VARIABLE_CLD_0_28,
#line 61 "commit_gen.m"
  MR_Word * ll_backend__commit_gen__STATE_VARIABLE_CLD_29)
#line 61 "commit_gen.m"
{
#line 66 "commit_gen.m"
  {
#line 66 "commit_gen.m"
    MR_bool ll_backend__commit_gen__succeeded;
#line 66 "commit_gen.m"
    MR_Word ll_backend__commit_gen__AddTrailOps_17;
#line 66 "commit_gen.m"
    MR_Word ll_backend__commit_gen__AddRegionOps_18;
#line 66 "commit_gen.m"
    MR_Word ll_backend__commit_gen__InnerGoalInfo_20;
#line 66 "commit_gen.m"
    MR_Word ll_backend__commit_gen__InnerCodeModel_21;
#line 70 "commit_gen.m"
    MR_Word ll_backend__commit_gen__V_19_19;

#line 67 "commit_gen.m"
    {
#line 67 "commit_gen.m"
      ll_backend__commit_gen__AddTrailOps_17 = ll_backend__code_info__should_add_trail_ops_2_f_0(ll_backend__commit_gen__STATE_VARIABLE_CI_0_26, ll_backend__commit_gen__OuterGoalInfo_11);
    }
#line 68 "commit_gen.m"
    {
#line 68 "commit_gen.m"
      ll_backend__commit_gen__AddRegionOps_18 = ll_backend__code_info__should_add_region_ops_2_f_0(ll_backend__commit_gen__STATE_VARIABLE_CI_0_26, ll_backend__commit_gen__OuterGoalInfo_11);
    }
#line 70 "commit_gen.m"
    ll_backend__commit_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__commit_gen__Goal_13, (MR_Integer) 0)));
#line 70 "commit_gen.m"
    ll_backend__commit_gen__InnerGoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__commit_gen__Goal_13, (MR_Integer) 1)));
#line 71 "commit_gen.m"
    {
#line 71 "commit_gen.m"
      ll_backend__commit_gen__InnerCodeModel_21 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__commit_gen__InnerGoalInfo_20);
    }
#line 89 "commit_gen.m"
#line 89 "commit_gen.m"
    switch (ll_backend__commit_gen__OuterCodeModel_10) {
#line 89 "commit_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 89 "commit_gen.m"
      case (MR_Integer) 0:
#line 77 "commit_gen.m"
#line 77 "commit_gen.m"
        switch (ll_backend__commit_gen__InnerCodeModel_21) {
#line 77 "commit_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 77 "commit_gen.m"
          case (MR_Integer) 0:
#line 76 "commit_gen.m"
            {
#line 76 "commit_gen.m"
              ll_backend__code_gen__generate_goal_7_p_0(ll_backend__commit_gen__InnerCodeModel_21, ll_backend__commit_gen__Goal_13, ll_backend__commit_gen__Code_14, ll_backend__commit_gen__STATE_VARIABLE_CI_0_26, ll_backend__commit_gen__STATE_VARIABLE_CI_27, ll_backend__commit_gen__STATE_VARIABLE_CLD_0_28, ll_backend__commit_gen__STATE_VARIABLE_CLD_29);
#line 76 "commit_gen.m"
              return;
            }
#line 77 "commit_gen.m"
            break;
#line 77 "commit_gen.m"
          case (MR_Integer) 2:
#line 81 "commit_gen.m"
            {
#line 81 "commit_gen.m"
              MR_Word ll_backend__commit_gen__TypeCtorInfo_67_67;
#line 81 "commit_gen.m"
              MR_Word ll_backend__commit_gen__CommitInfo_22;
#line 81 "commit_gen.m"
              MR_Word ll_backend__commit_gen__PreCommit_23;
#line 81 "commit_gen.m"
              MR_Word ll_backend__commit_gen__GoalCode_24;
#line 81 "commit_gen.m"
              MR_Word ll_backend__commit_gen__Commit_25;
#line 81 "commit_gen.m"
              MR_Word ll_backend__commit_gen__STATE_VARIABLE_CI_43_43;
#line 81 "commit_gen.m"
              MR_Word ll_backend__commit_gen__STATE_VARIABLE_CLD_44_44;
#line 81 "commit_gen.m"
              MR_Word ll_backend__commit_gen__STATE_VARIABLE_CI_45_45;
#line 81 "commit_gen.m"
              MR_Word ll_backend__commit_gen__STATE_VARIABLE_CLD_46_46;
#line 81 "commit_gen.m"
              MR_Word ll_backend__commit_gen__V_49_49;

#line 82 "commit_gen.m"
              {
#line 82 "commit_gen.m"
                ll_backend__code_loc_dep__prepare_for_det_commit_10_p_0(ll_backend__commit_gen__AddTrailOps_17, ll_backend__commit_gen__AddRegionOps_18, ll_backend__commit_gen__ForwardLiveVarsBeforeGoal_12, ll_backend__commit_gen__InnerGoalInfo_20, &ll_backend__commit_gen__CommitInfo_22, &ll_backend__commit_gen__PreCommit_23, ll_backend__commit_gen__STATE_VARIABLE_CI_0_26, &ll_backend__commit_gen__STATE_VARIABLE_CI_43_43, ll_backend__commit_gen__STATE_VARIABLE_CLD_0_28, &ll_backend__commit_gen__STATE_VARIABLE_CLD_44_44);
              }
#line 85 "commit_gen.m"
              {
#line 85 "commit_gen.m"
                ll_backend__code_gen__generate_goal_7_p_0(ll_backend__commit_gen__InnerCodeModel_21, ll_backend__commit_gen__Goal_13, &ll_backend__commit_gen__GoalCode_24, ll_backend__commit_gen__STATE_VARIABLE_CI_43_43, &ll_backend__commit_gen__STATE_VARIABLE_CI_45_45, ll_backend__commit_gen__STATE_VARIABLE_CLD_44_44, &ll_backend__commit_gen__STATE_VARIABLE_CLD_46_46);
              }
#line 86 "commit_gen.m"
              {
#line 86 "commit_gen.m"
                ll_backend__code_loc_dep__generate_det_commit_6_p_0(ll_backend__commit_gen__CommitInfo_22, &ll_backend__commit_gen__Commit_25, ll_backend__commit_gen__STATE_VARIABLE_CI_45_45, ll_backend__commit_gen__STATE_VARIABLE_CI_27, ll_backend__commit_gen__STATE_VARIABLE_CLD_46_46, ll_backend__commit_gen__STATE_VARIABLE_CLD_29);
              }
#line 311 "ll_backend.commit_gen.c"
              ll_backend__commit_gen__TypeCtorInfo_67_67 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 87 "commit_gen.m"
              {
#line 87 "commit_gen.m"
                ll_backend__commit_gen__V_49_49 = mercury__cord__f_43_43_2_f_0(ll_backend__commit_gen__TypeCtorInfo_67_67, ll_backend__commit_gen__GoalCode_24, ll_backend__commit_gen__Commit_25);
              }
#line 87 "commit_gen.m"
              {
#line 87 "commit_gen.m"
                *ll_backend__commit_gen__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__commit_gen__TypeCtorInfo_67_67, ll_backend__commit_gen__PreCommit_23, ll_backend__commit_gen__V_49_49);
              }
#line 81 "commit_gen.m"
            }
#line 77 "commit_gen.m"
            break;
#line 77 "commit_gen.m"
          case (MR_Integer) 1:
#line 78 "commit_gen.m"
            {
#line 79 "commit_gen.m"
              {
#line 79 "commit_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.commit_gen", (MR_String) "predicate \140ll_backend.commit_gen.generate_commit\'/9", (MR_String) "semidet model in det context");
#line 79 "commit_gen.m"
                return;
              }
#line 78 "commit_gen.m"
            }
#line 77 "commit_gen.m"
            break;
#line 77 "commit_gen.m"
        }
#line 89 "commit_gen.m"
        break;
#line 89 "commit_gen.m"
      case (MR_Integer) 2:
#line 108 "commit_gen.m"
        {
#line 108 "commit_gen.m"
          ll_backend__code_gen__generate_goal_7_p_0(ll_backend__commit_gen__InnerCodeModel_21, ll_backend__commit_gen__Goal_13, ll_backend__commit_gen__Code_14, ll_backend__commit_gen__STATE_VARIABLE_CI_0_26, ll_backend__commit_gen__STATE_VARIABLE_CI_27, ll_backend__commit_gen__STATE_VARIABLE_CLD_0_28, ll_backend__commit_gen__STATE_VARIABLE_CLD_29);
#line 108 "commit_gen.m"
          return;
        }
#line 89 "commit_gen.m"
        break;
#line 89 "commit_gen.m"
      case (MR_Integer) 1:
#line 94 "commit_gen.m"
#line 94 "commit_gen.m"
        switch (ll_backend__commit_gen__InnerCodeModel_21) {
#line 94 "commit_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 94 "commit_gen.m"
          case (MR_Integer) 0:
#line 93 "commit_gen.m"
            {
#line 93 "commit_gen.m"
              ll_backend__code_gen__generate_goal_7_p_0(ll_backend__commit_gen__InnerCodeModel_21, ll_backend__commit_gen__Goal_13, ll_backend__commit_gen__Code_14, ll_backend__commit_gen__STATE_VARIABLE_CI_0_26, ll_backend__commit_gen__STATE_VARIABLE_CI_27, ll_backend__commit_gen__STATE_VARIABLE_CLD_0_28, ll_backend__commit_gen__STATE_VARIABLE_CLD_29);
#line 93 "commit_gen.m"
              return;
            }
#line 94 "commit_gen.m"
            break;
#line 94 "commit_gen.m"
          case (MR_Integer) 2:
#line 98 "commit_gen.m"
            {
#line 98 "commit_gen.m"
              MR_Word ll_backend__commit_gen__TypeCtorInfo_68_68;
#line 98 "commit_gen.m"
              MR_Word ll_backend__commit_gen__STATE_VARIABLE_CI_32_32;
#line 98 "commit_gen.m"
              MR_Word ll_backend__commit_gen__STATE_VARIABLE_CLD_33_33;
#line 98 "commit_gen.m"
              MR_Word ll_backend__commit_gen__STATE_VARIABLE_CI_34_34;
#line 98 "commit_gen.m"
              MR_Word ll_backend__commit_gen__STATE_VARIABLE_CLD_35_35;
#line 98 "commit_gen.m"
              MR_Word ll_backend__commit_gen__V_38_38;
#line 98 "commit_gen.m"
              MR_Word ll_backend__commit_gen__CommitInfo_55;
#line 98 "commit_gen.m"
              MR_Word ll_backend__commit_gen__PreCommit_56;
#line 98 "commit_gen.m"
              MR_Word ll_backend__commit_gen__GoalCode_57;
#line 98 "commit_gen.m"
              MR_Word ll_backend__commit_gen__Commit_58;

#line 99 "commit_gen.m"
              {
#line 99 "commit_gen.m"
                ll_backend__code_loc_dep__prepare_for_semi_commit_10_p_0(ll_backend__commit_gen__AddTrailOps_17, ll_backend__commit_gen__AddRegionOps_18, ll_backend__commit_gen__ForwardLiveVarsBeforeGoal_12, ll_backend__commit_gen__InnerGoalInfo_20, &ll_backend__commit_gen__CommitInfo_55, &ll_backend__commit_gen__PreCommit_56, ll_backend__commit_gen__STATE_VARIABLE_CI_0_26, &ll_backend__commit_gen__STATE_VARIABLE_CI_32_32, ll_backend__commit_gen__STATE_VARIABLE_CLD_0_28, &ll_backend__commit_gen__STATE_VARIABLE_CLD_33_33);
              }
#line 102 "commit_gen.m"
              {
#line 102 "commit_gen.m"
                ll_backend__code_gen__generate_goal_7_p_0(ll_backend__commit_gen__InnerCodeModel_21, ll_backend__commit_gen__Goal_13, &ll_backend__commit_gen__GoalCode_57, ll_backend__commit_gen__STATE_VARIABLE_CI_32_32, &ll_backend__commit_gen__STATE_VARIABLE_CI_34_34, ll_backend__commit_gen__STATE_VARIABLE_CLD_33_33, &ll_backend__commit_gen__STATE_VARIABLE_CLD_35_35);
              }
#line 103 "commit_gen.m"
              {
#line 103 "commit_gen.m"
                ll_backend__code_loc_dep__generate_semi_commit_6_p_0(ll_backend__commit_gen__CommitInfo_55, &ll_backend__commit_gen__Commit_58, ll_backend__commit_gen__STATE_VARIABLE_CI_34_34, ll_backend__commit_gen__STATE_VARIABLE_CI_27, ll_backend__commit_gen__STATE_VARIABLE_CLD_35_35, ll_backend__commit_gen__STATE_VARIABLE_CLD_29);
              }
#line 415 "ll_backend.commit_gen.c"
              ll_backend__commit_gen__TypeCtorInfo_68_68 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 104 "commit_gen.m"
              {
#line 104 "commit_gen.m"
                ll_backend__commit_gen__V_38_38 = mercury__cord__f_43_43_2_f_0(ll_backend__commit_gen__TypeCtorInfo_68_68, ll_backend__commit_gen__GoalCode_57, ll_backend__commit_gen__Commit_58);
              }
#line 104 "commit_gen.m"
              {
#line 104 "commit_gen.m"
                *ll_backend__commit_gen__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__commit_gen__TypeCtorInfo_68_68, ll_backend__commit_gen__PreCommit_56, ll_backend__commit_gen__V_38_38);
              }
#line 98 "commit_gen.m"
            }
#line 94 "commit_gen.m"
            break;
#line 94 "commit_gen.m"
          case (MR_Integer) 1:
#line 96 "commit_gen.m"
            {
#line 96 "commit_gen.m"
              ll_backend__code_gen__generate_goal_7_p_0(ll_backend__commit_gen__InnerCodeModel_21, ll_backend__commit_gen__Goal_13, ll_backend__commit_gen__Code_14, ll_backend__commit_gen__STATE_VARIABLE_CI_0_26, ll_backend__commit_gen__STATE_VARIABLE_CI_27, ll_backend__commit_gen__STATE_VARIABLE_CLD_0_28, ll_backend__commit_gen__STATE_VARIABLE_CLD_29);
#line 96 "commit_gen.m"
              return;
            }
#line 94 "commit_gen.m"
            break;
#line 94 "commit_gen.m"
        }
#line 89 "commit_gen.m"
        break;
#line 89 "commit_gen.m"
    }
#line 66 "commit_gen.m"
  }
#line 61 "commit_gen.m"
}

#line 28 "commit_gen.m"
void MR_CALL 
ll_backend__commit_gen__generate_scope_10_p_0(
#line 28 "commit_gen.m"
  MR_Word ll_backend__commit_gen__Reason_11,
#line 28 "commit_gen.m"
  MR_Word ll_backend__commit_gen__OuterCodeModel_12,
#line 28 "commit_gen.m"
  MR_Word ll_backend__commit_gen__OuterGoalInfo_13,
#line 28 "commit_gen.m"
  MR_Word ll_backend__commit_gen__ForwardLiveVarsBeforeGoal_14,
#line 28 "commit_gen.m"
  MR_Word ll_backend__commit_gen__Goal_15,
#line 28 "commit_gen.m"
  MR_Word * ll_backend__commit_gen__Code_16,
#line 28 "commit_gen.m"
  MR_Word ll_backend__commit_gen__STATE_VARIABLE_CI_0_25,
#line 28 "commit_gen.m"
  MR_Word * ll_backend__commit_gen__STATE_VARIABLE_CI_26,
#line 28 "commit_gen.m"
  MR_Word ll_backend__commit_gen__STATE_VARIABLE_CLD_0_27,
#line 28 "commit_gen.m"
  MR_Word * ll_backend__commit_gen__STATE_VARIABLE_CLD_28)
#line 28 "commit_gen.m"
{
#line 56 "commit_gen.m"
  {
#line 56 "commit_gen.m"
    MR_bool ll_backend__commit_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__commit_gen__Reason_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__commit_gen__Reason_11, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 50 "commit_gen.m"
    MR_Word ll_backend__commit_gen__MaybeTraceRuntimeCond_20;
#line 50 "commit_gen.m"
    MR_Word ll_backend__commit_gen__V_19_19;
#line 50 "commit_gen.m"
    MR_Word ll_backend__commit_gen__V_21_21;
#line 50 "commit_gen.m"
    MR_Word ll_backend__commit_gen__V_22_22;
#line 50 "commit_gen.m"
    MR_Word ll_backend__commit_gen__V_23_23;
#line 51 "commit_gen.m"
    MR_Word ll_backend__commit_gen__V_24_24;

#line 50 "commit_gen.m"
    if (ll_backend__commit_gen__succeeded)
#line 50 "commit_gen.m"
      {
#line 50 "commit_gen.m"
        ll_backend__commit_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__commit_gen__Reason_11, (MR_Integer) 1)));
#line 50 "commit_gen.m"
        ll_backend__commit_gen__MaybeTraceRuntimeCond_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__commit_gen__Reason_11, (MR_Integer) 2)));
#line 50 "commit_gen.m"
        ll_backend__commit_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__commit_gen__Reason_11, (MR_Integer) 3)));
#line 50 "commit_gen.m"
        ll_backend__commit_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__commit_gen__Reason_11, (MR_Integer) 4)));
#line 50 "commit_gen.m"
        ll_backend__commit_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__commit_gen__Reason_11, (MR_Integer) 5)));
#line 51 "commit_gen.m"
        ll_backend__commit_gen__succeeded = ((MR_tag((MR_Word) ll_backend__commit_gen__MaybeTraceRuntimeCond_20)) == (MR_mktag((MR_Integer) 1)));
#line 51 "commit_gen.m"
        if (ll_backend__commit_gen__succeeded)
#line 51 "commit_gen.m"
          ll_backend__commit_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__commit_gen__MaybeTraceRuntimeCond_20, (MR_Integer) 0)));
#line 50 "commit_gen.m"
      }
#line 56 "commit_gen.m"
    if (ll_backend__commit_gen__succeeded)
#line 55 "commit_gen.m"
      {
#line 55 "commit_gen.m"
        {
#line 55 "commit_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.commit_gen", (MR_String) "predicate \140ll_backend.commit_gen.generate_scope\'/10", (MR_String) "trace_goal");
#line 55 "commit_gen.m"
          return;
        }
#line 55 "commit_gen.m"
      }
#line 56 "commit_gen.m"
    else
#line 57 "commit_gen.m"
      {
#line 57 "commit_gen.m"
        ll_backend__commit_gen__generate_commit_9_p_0(ll_backend__commit_gen__OuterCodeModel_12, ll_backend__commit_gen__OuterGoalInfo_13, ll_backend__commit_gen__ForwardLiveVarsBeforeGoal_14, ll_backend__commit_gen__Goal_15, ll_backend__commit_gen__Code_16, ll_backend__commit_gen__STATE_VARIABLE_CI_0_25, ll_backend__commit_gen__STATE_VARIABLE_CI_26, ll_backend__commit_gen__STATE_VARIABLE_CLD_0_27, ll_backend__commit_gen__STATE_VARIABLE_CLD_28);
#line 57 "commit_gen.m"
        return;
      }
#line 56 "commit_gen.m"
  }
#line 28 "commit_gen.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.commit_gen. */
