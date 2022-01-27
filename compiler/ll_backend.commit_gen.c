/*
** Automatically generated from `commit_gen.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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
#include "tree_bitset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"










#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 27 "commit_gen.m"
void MR_CALL 
ll_backend__commit_gen__generate_scope_8_p_0(
#line 27 "commit_gen.m"
  MR_Word ll_backend__commit_gen__Reason_9,
#line 27 "commit_gen.m"
  MR_Word ll_backend__commit_gen__OuterCodeModel_10,
#line 27 "commit_gen.m"
  MR_Word ll_backend__commit_gen__OuterGoalInfo_11,
#line 27 "commit_gen.m"
  MR_Word ll_backend__commit_gen__ForwardLiveVarsBeforeGoal_12,
#line 27 "commit_gen.m"
  MR_Word ll_backend__commit_gen__Goal_13,
#line 27 "commit_gen.m"
  MR_Word * ll_backend__commit_gen__Code_14,
#line 27 "commit_gen.m"
  MR_Word ll_backend__commit_gen__STATE_VARIABLE_CI_0_22,
#line 27 "commit_gen.m"
  MR_Word * ll_backend__commit_gen__STATE_VARIABLE_CI_23)
#line 27 "commit_gen.m"
{
#line 55 "commit_gen.m"
  {
#line 55 "commit_gen.m"
    MR_bool ll_backend__commit_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__commit_gen__Reason_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__commit_gen__Reason_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 49 "commit_gen.m"
    MR_Word ll_backend__commit_gen__MaybeTraceRuntimeCond_17;
#line 49 "commit_gen.m"
    MR_Word ll_backend__commit_gen__V_16_16;
#line 49 "commit_gen.m"
    MR_Word ll_backend__commit_gen__V_18_18;
#line 49 "commit_gen.m"
    MR_Word ll_backend__commit_gen__V_19_19;
#line 49 "commit_gen.m"
    MR_Word ll_backend__commit_gen__V_20_20;
#line 50 "commit_gen.m"
    MR_Word ll_backend__commit_gen__V_21_21;

#line 49 "commit_gen.m"
    if (ll_backend__commit_gen__succeeded)
#line 49 "commit_gen.m"
      {
#line 49 "commit_gen.m"
        ll_backend__commit_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__commit_gen__Reason_9, (MR_Integer) 1)));
#line 49 "commit_gen.m"
        ll_backend__commit_gen__MaybeTraceRuntimeCond_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__commit_gen__Reason_9, (MR_Integer) 2)));
#line 49 "commit_gen.m"
        ll_backend__commit_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__commit_gen__Reason_9, (MR_Integer) 3)));
#line 49 "commit_gen.m"
        ll_backend__commit_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__commit_gen__Reason_9, (MR_Integer) 4)));
#line 49 "commit_gen.m"
        ll_backend__commit_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__commit_gen__Reason_9, (MR_Integer) 5)));
#line 50 "commit_gen.m"
        ll_backend__commit_gen__succeeded = ((MR_tag((MR_Word) ll_backend__commit_gen__MaybeTraceRuntimeCond_17)) == (MR_mktag((MR_Integer) 1)));
#line 50 "commit_gen.m"
        if (ll_backend__commit_gen__succeeded)
#line 50 "commit_gen.m"
          ll_backend__commit_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__commit_gen__MaybeTraceRuntimeCond_17, (MR_Integer) 0)));
#line 49 "commit_gen.m"
      }
#line 55 "commit_gen.m"
    if (ll_backend__commit_gen__succeeded)
#line 54 "commit_gen.m"
      {
#line 54 "commit_gen.m"
        {
#line 54 "commit_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.commit_gen", (MR_String) "predicate \140ll_backend.commit_gen.generate_scope\'/8", (MR_String) "trace_goal");
#line 54 "commit_gen.m"
          return;
        }
#line 54 "commit_gen.m"
      }
#line 55 "commit_gen.m"
    else
#line 64 "commit_gen.m"
      {
#line 64 "commit_gen.m"
        MR_Word ll_backend__commit_gen__AddTrailOps_36;
#line 64 "commit_gen.m"
        MR_Word ll_backend__commit_gen__AddRegionOps_37;
#line 64 "commit_gen.m"
        MR_Word ll_backend__commit_gen__InnerGoalInfo_39;
#line 64 "commit_gen.m"
        MR_Word ll_backend__commit_gen__InnerCodeModel_40;
#line 68 "commit_gen.m"
        MR_Word ll_backend__commit_gen__V_38_38;

#line 65 "commit_gen.m"
        {
#line 65 "commit_gen.m"
          ll_backend__commit_gen__AddTrailOps_36 = ll_backend__code_info__should_add_trail_ops_2_f_0(ll_backend__commit_gen__STATE_VARIABLE_CI_0_22, ll_backend__commit_gen__OuterGoalInfo_11);
        }
#line 66 "commit_gen.m"
        {
#line 66 "commit_gen.m"
          ll_backend__commit_gen__AddRegionOps_37 = ll_backend__code_info__should_add_region_ops_2_f_0(ll_backend__commit_gen__STATE_VARIABLE_CI_0_22, ll_backend__commit_gen__OuterGoalInfo_11);
        }
#line 68 "commit_gen.m"
        ll_backend__commit_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__commit_gen__Goal_13, (MR_Integer) 0)));
#line 68 "commit_gen.m"
        ll_backend__commit_gen__InnerGoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__commit_gen__Goal_13, (MR_Integer) 1)));
#line 69 "commit_gen.m"
        {
#line 69 "commit_gen.m"
          ll_backend__commit_gen__InnerCodeModel_40 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__commit_gen__InnerGoalInfo_39);
        }
#line 87 "commit_gen.m"
        if ((ll_backend__commit_gen__OuterCodeModel_10 == (MR_Integer) 0))
#line 75 "commit_gen.m"
          if ((ll_backend__commit_gen__InnerCodeModel_40 == (MR_Integer) 0))
#line 74 "commit_gen.m"
            {
#line 74 "commit_gen.m"
              ll_backend__code_gen__generate_goal_5_p_0(ll_backend__commit_gen__InnerCodeModel_40, ll_backend__commit_gen__Goal_13, ll_backend__commit_gen__Code_14, ll_backend__commit_gen__STATE_VARIABLE_CI_0_22, ll_backend__commit_gen__STATE_VARIABLE_CI_23);
#line 74 "commit_gen.m"
              return;
            }
#line 75 "commit_gen.m"
          else
#line 75 "commit_gen.m"
            if ((ll_backend__commit_gen__InnerCodeModel_40 == (MR_Integer) 2))
#line 79 "commit_gen.m"
              {
#line 79 "commit_gen.m"
                MR_Word ll_backend__commit_gen__TypeCtorInfo_52_72;
#line 79 "commit_gen.m"
                MR_Word ll_backend__commit_gen__CommitInfo_41;
#line 79 "commit_gen.m"
                MR_Word ll_backend__commit_gen__PreCommit_42;
#line 79 "commit_gen.m"
                MR_Word ll_backend__commit_gen__GoalCode_43;
#line 79 "commit_gen.m"
                MR_Word ll_backend__commit_gen__Commit_44;
#line 79 "commit_gen.m"
                MR_Word ll_backend__commit_gen__STATE_VARIABLE_CI_32_52;
#line 79 "commit_gen.m"
                MR_Word ll_backend__commit_gen__STATE_VARIABLE_CI_33_53;
#line 79 "commit_gen.m"
                MR_Word ll_backend__commit_gen__V_55_55;

#line 80 "commit_gen.m"
                {
#line 80 "commit_gen.m"
                  ll_backend__code_info__prepare_for_det_commit_8_p_0(ll_backend__commit_gen__AddTrailOps_36, ll_backend__commit_gen__AddRegionOps_37, ll_backend__commit_gen__ForwardLiveVarsBeforeGoal_12, ll_backend__commit_gen__InnerGoalInfo_39, &ll_backend__commit_gen__CommitInfo_41, &ll_backend__commit_gen__PreCommit_42, ll_backend__commit_gen__STATE_VARIABLE_CI_0_22, &ll_backend__commit_gen__STATE_VARIABLE_CI_32_52);
                }
#line 83 "commit_gen.m"
                {
#line 83 "commit_gen.m"
                  ll_backend__code_gen__generate_goal_5_p_0(ll_backend__commit_gen__InnerCodeModel_40, ll_backend__commit_gen__Goal_13, &ll_backend__commit_gen__GoalCode_43, ll_backend__commit_gen__STATE_VARIABLE_CI_32_52, &ll_backend__commit_gen__STATE_VARIABLE_CI_33_53);
                }
#line 84 "commit_gen.m"
                {
#line 84 "commit_gen.m"
                  ll_backend__code_info__generate_det_commit_4_p_0(ll_backend__commit_gen__CommitInfo_41, &ll_backend__commit_gen__Commit_44, ll_backend__commit_gen__STATE_VARIABLE_CI_33_53, ll_backend__commit_gen__STATE_VARIABLE_CI_23);
                }
#line 323 "ll_backend.commit_gen.c"
                ll_backend__commit_gen__TypeCtorInfo_52_72 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 85 "commit_gen.m"
                {
#line 85 "commit_gen.m"
                  ll_backend__commit_gen__V_55_55 = mercury__cord__f_43_43_2_f_0(ll_backend__commit_gen__TypeCtorInfo_52_72, ll_backend__commit_gen__GoalCode_43, ll_backend__commit_gen__Commit_44);
                }
#line 85 "commit_gen.m"
                {
#line 85 "commit_gen.m"
                  *ll_backend__commit_gen__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__commit_gen__TypeCtorInfo_52_72, ll_backend__commit_gen__PreCommit_42, ll_backend__commit_gen__V_55_55);
                }
#line 79 "commit_gen.m"
              }
#line 75 "commit_gen.m"
            else
#line 76 "commit_gen.m"
              {
#line 77 "commit_gen.m"
                {
#line 77 "commit_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.commit_gen", (MR_String) "predicate \140ll_backend.commit_gen.generate_commit\'/7", (MR_String) "semidet model in det context");
#line 77 "commit_gen.m"
                  return;
                }
#line 76 "commit_gen.m"
              }
#line 87 "commit_gen.m"
        else
#line 87 "commit_gen.m"
          if ((ll_backend__commit_gen__OuterCodeModel_10 == (MR_Integer) 2))
#line 106 "commit_gen.m"
            {
#line 106 "commit_gen.m"
              ll_backend__code_gen__generate_goal_5_p_0(ll_backend__commit_gen__InnerCodeModel_40, ll_backend__commit_gen__Goal_13, ll_backend__commit_gen__Code_14, ll_backend__commit_gen__STATE_VARIABLE_CI_0_22, ll_backend__commit_gen__STATE_VARIABLE_CI_23);
#line 106 "commit_gen.m"
              return;
            }
#line 87 "commit_gen.m"
          else
#line 92 "commit_gen.m"
            if ((ll_backend__commit_gen__InnerCodeModel_40 == (MR_Integer) 0))
#line 91 "commit_gen.m"
              {
#line 91 "commit_gen.m"
                ll_backend__code_gen__generate_goal_5_p_0(ll_backend__commit_gen__InnerCodeModel_40, ll_backend__commit_gen__Goal_13, ll_backend__commit_gen__Code_14, ll_backend__commit_gen__STATE_VARIABLE_CI_0_22, ll_backend__commit_gen__STATE_VARIABLE_CI_23);
#line 91 "commit_gen.m"
                return;
              }
#line 92 "commit_gen.m"
            else
#line 92 "commit_gen.m"
              if ((ll_backend__commit_gen__InnerCodeModel_40 == (MR_Integer) 2))
#line 96 "commit_gen.m"
                {
#line 96 "commit_gen.m"
                  MR_Word ll_backend__commit_gen__TypeCtorInfo_53_73;
#line 96 "commit_gen.m"
                  MR_Word ll_backend__commit_gen__STATE_VARIABLE_CI_26_46;
#line 96 "commit_gen.m"
                  MR_Word ll_backend__commit_gen__STATE_VARIABLE_CI_27_47;
#line 96 "commit_gen.m"
                  MR_Word ll_backend__commit_gen__V_49_49;
#line 96 "commit_gen.m"
                  MR_Word ll_backend__commit_gen__CommitInfo_60;
#line 96 "commit_gen.m"
                  MR_Word ll_backend__commit_gen__PreCommit_61;
#line 96 "commit_gen.m"
                  MR_Word ll_backend__commit_gen__GoalCode_62;
#line 96 "commit_gen.m"
                  MR_Word ll_backend__commit_gen__Commit_63;

#line 97 "commit_gen.m"
                  {
#line 97 "commit_gen.m"
                    ll_backend__code_info__prepare_for_semi_commit_8_p_0(ll_backend__commit_gen__AddTrailOps_36, ll_backend__commit_gen__AddRegionOps_37, ll_backend__commit_gen__ForwardLiveVarsBeforeGoal_12, ll_backend__commit_gen__InnerGoalInfo_39, &ll_backend__commit_gen__CommitInfo_60, &ll_backend__commit_gen__PreCommit_61, ll_backend__commit_gen__STATE_VARIABLE_CI_0_22, &ll_backend__commit_gen__STATE_VARIABLE_CI_26_46);
                  }
#line 100 "commit_gen.m"
                  {
#line 100 "commit_gen.m"
                    ll_backend__code_gen__generate_goal_5_p_0(ll_backend__commit_gen__InnerCodeModel_40, ll_backend__commit_gen__Goal_13, &ll_backend__commit_gen__GoalCode_62, ll_backend__commit_gen__STATE_VARIABLE_CI_26_46, &ll_backend__commit_gen__STATE_VARIABLE_CI_27_47);
                  }
#line 101 "commit_gen.m"
                  {
#line 101 "commit_gen.m"
                    ll_backend__code_info__generate_semi_commit_4_p_0(ll_backend__commit_gen__CommitInfo_60, &ll_backend__commit_gen__Commit_63, ll_backend__commit_gen__STATE_VARIABLE_CI_27_47, ll_backend__commit_gen__STATE_VARIABLE_CI_23);
                  }
#line 410 "ll_backend.commit_gen.c"
                  ll_backend__commit_gen__TypeCtorInfo_53_73 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 102 "commit_gen.m"
                  {
#line 102 "commit_gen.m"
                    ll_backend__commit_gen__V_49_49 = mercury__cord__f_43_43_2_f_0(ll_backend__commit_gen__TypeCtorInfo_53_73, ll_backend__commit_gen__GoalCode_62, ll_backend__commit_gen__Commit_63);
                  }
#line 102 "commit_gen.m"
                  {
#line 102 "commit_gen.m"
                    *ll_backend__commit_gen__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__commit_gen__TypeCtorInfo_53_73, ll_backend__commit_gen__PreCommit_61, ll_backend__commit_gen__V_49_49);
                  }
#line 96 "commit_gen.m"
                }
#line 92 "commit_gen.m"
              else
#line 94 "commit_gen.m"
                {
#line 94 "commit_gen.m"
                  ll_backend__code_gen__generate_goal_5_p_0(ll_backend__commit_gen__InnerCodeModel_40, ll_backend__commit_gen__Goal_13, ll_backend__commit_gen__Code_14, ll_backend__commit_gen__STATE_VARIABLE_CI_0_22, ll_backend__commit_gen__STATE_VARIABLE_CI_23);
#line 94 "commit_gen.m"
                  return;
                }
#line 64 "commit_gen.m"
      }
#line 55 "commit_gen.m"
  }
#line 27 "commit_gen.m"
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
