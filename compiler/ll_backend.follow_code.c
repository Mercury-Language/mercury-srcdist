/*
** Automatically generated from `follow_code.m'
** by the Mercury compiler,
** version rotd-2017-08-02
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


/* :- module ll_backend.follow_code. */
/* :- implementation. */

/*
INIT mercury__ll_backend__follow_code__init
ENDINIT
*/

#include "ll_backend.follow_code.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s {
  MR_Word ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarMaps_2;
  MR_bool ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded;
  MR_Word ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17;
  jmp_buf ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__commit_0;
  MR_Word ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__Arg_30;
  MR_Word ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarInfo_31;
  MR_Box ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__conv0_Arg_30;
};


static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_conj_2_7_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1,
  MR_Word ll_backend__follow_code__HeadVar__2_2,
  MR_Word ll_backend__follow_code__HeadVar__3_3,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_0_4,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_5,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_6,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_7);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_cases_5_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1,
  MR_Word * ll_backend__follow_code__HeadVar__2_2,
  MR_Word ll_backend__follow_code__RttiVarMaps_3,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_4,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_5);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1,
  MR_Word * ll_backend__follow_code__HeadVar__2_2,
  MR_Word ll_backend__follow_code__RttiVarMaps_3,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_4,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_5);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_goal_5_p_0(
  MR_Word ll_backend__follow_code__Goal0_6,
  MR_Word * ll_backend__follow_code__Goal_7,
  MR_Word ll_backend__follow_code__RttiVarMaps_8,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_57,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_58);

static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_4_p_0(
  MR_Word ll_backend__follow_code__Goal0_5,
  MR_Word ll_backend__follow_code__FollowGoals_6,
  MR_Word ll_backend__follow_code__FollowPurity_7,
  MR_Word * ll_backend__follow_code__Goal_8);

static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_disj_4_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1,
  MR_Word ll_backend__follow_code__HeadVar__2_2,
  MR_Word ll_backend__follow_code__HeadVar__3_3,
  MR_Word * ll_backend__follow_code__HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1,
  MR_Word ll_backend__follow_code__HeadVar__2_2,
  MR_Word ll_backend__follow_code__HeadVar__3_3,
  MR_Word * ll_backend__follow_code__HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__follow_code__check_follow_code_detism_2_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1,
  MR_Word ll_backend__follow_code__Detism0_2);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_1(
  void * ll_backend__follow_code__env_ptr_arg);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_3(
  void * ll_backend__follow_code__env_ptr_arg);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_2(
  void * ll_backend__follow_code__env_ptr_arg);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_4(
  void * ll_backend__follow_code__env_ptr_arg);

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1,
  MR_Word ll_backend__follow_code__RttiVarMaps_2,
  MR_Word * ll_backend__follow_code__HeadVar__3_3,
  MR_Word * ll_backend__follow_code__HeadVar__4_4,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Purity_0_5,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Purity_6);

static MR_bool MR_CALL 
ll_backend__follow_code__no_bind_vars_1_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1);


static /* final */ const MR_Box ll_backend__follow_code_scalar_common_1[1][2];




static /* final */ const MR_Box ll_backend__follow_code_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
ll_backend__follow_code__move_follow_code_in_proc_5_p_0(
  MR_Word ll_backend__follow_code___PredProcId_6,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_ProcInfo_25,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_27)
{
  ll_backend__follow_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_5_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, ll_backend__follow_code__STATE_VARIABLE_ProcInfo_25, ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_0_26, ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_27);
}

void MR_CALL 
ll_backend__follow_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_5_p_0(
  MR_Word ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_ProcInfo_25,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_27)
{
  {
    MR_Word ll_backend__follow_code__Goal0_9;
    MR_Word ll_backend__follow_code__Varset0_10;
    MR_Word ll_backend__follow_code__VarTypes0_11;
    MR_Word ll_backend__follow_code__RttiVarMaps0_12;
    MR_Word ll_backend__follow_code__Goal1_13;
    MR_Word ll_backend__follow_code__Changed_14;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, &ll_backend__follow_code__Goal0_9);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, &ll_backend__follow_code__Varset0_10);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, &ll_backend__follow_code__VarTypes0_11);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, &ll_backend__follow_code__RttiVarMaps0_12);
    ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__Goal0_9, &ll_backend__follow_code__Goal1_13, ll_backend__follow_code__RttiVarMaps0_12, (MR_Integer) 0, &ll_backend__follow_code__Changed_14);
    switch (ll_backend__follow_code__Changed_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__follow_code__STATE_VARIABLE_ProcInfo_25 = ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24;
          *ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_27 = ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_0_26;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__follow_code__HeadVars_15;
          MR_Word ll_backend__follow_code__Goal2_17;
          MR_Word ll_backend__follow_code__Varset_18;
          MR_Word ll_backend__follow_code__VarTypes_19;
          MR_Word ll_backend__follow_code__RttiVarMaps_20;
          MR_Word ll_backend__follow_code__InstMap0_21;
          MR_Word ll_backend__follow_code__InstVarSet_22;
          MR_Word ll_backend__follow_code__Goal_23;
          MR_Word ll_backend__follow_code__STATE_VARIABLE_ProcInfo_32_32;
          MR_Word ll_backend__follow_code__STATE_VARIABLE_ProcInfo_33_33;
          MR_Word ll_backend__follow_code__STATE_VARIABLE_ProcInfo_34_34;
          MR_Word ll_backend__follow_code___Warnings_16;

          hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, &ll_backend__follow_code__HeadVars_15);
          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, ll_backend__follow_code__HeadVars_15, &ll_backend__follow_code___Warnings_16, ll_backend__follow_code__Goal1_13, &ll_backend__follow_code__Goal2_17, ll_backend__follow_code__Varset0_10, &ll_backend__follow_code__Varset_18, ll_backend__follow_code__VarTypes0_11, &ll_backend__follow_code__VarTypes_19, ll_backend__follow_code__RttiVarMaps0_12, &ll_backend__follow_code__RttiVarMaps_20);
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_0_26, &ll_backend__follow_code__InstMap0_21);
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, &ll_backend__follow_code__InstVarSet_22);
          check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, ll_backend__follow_code__Goal2_17, &ll_backend__follow_code__Goal_23, ll_backend__follow_code__VarTypes_19, ll_backend__follow_code__InstVarSet_22, ll_backend__follow_code__InstMap0_21, ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_0_26, ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_27);
          hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__follow_code__Goal_23, ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, &ll_backend__follow_code__STATE_VARIABLE_ProcInfo_32_32);
          hlds__hlds_pred__proc_info_set_varset_3_p_0(ll_backend__follow_code__Varset_18, ll_backend__follow_code__STATE_VARIABLE_ProcInfo_32_32, &ll_backend__follow_code__STATE_VARIABLE_ProcInfo_33_33);
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ll_backend__follow_code__VarTypes_19, ll_backend__follow_code__STATE_VARIABLE_ProcInfo_33_33, &ll_backend__follow_code__STATE_VARIABLE_ProcInfo_34_34);
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(ll_backend__follow_code__RttiVarMaps_20, ll_backend__follow_code__STATE_VARIABLE_ProcInfo_34_34, ll_backend__follow_code__STATE_VARIABLE_ProcInfo_25);
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_conj_2_7_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1,
  MR_Word ll_backend__follow_code__HeadVar__2_2,
  MR_Word ll_backend__follow_code__HeadVar__3_3,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_0_4,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_5,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_6,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__follow_code__succeeded;

      if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__follow_code__STATE_VARIABLE_Changed_7 = ll_backend__follow_code__STATE_VARIABLE_Changed_0_6;
        *ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_5 = ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_0_4;
      }
      else
      {
        MR_Word ll_backend__follow_code__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__follow_code__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__follow_code__Goal1_31;
        MR_Word ll_backend__follow_code__RestGoals_32;
        MR_Word ll_backend__follow_code__Goal_33;
        MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_40_40;
        MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_41_41;
        MR_Word ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_42_42;
        MR_Word ll_backend__follow_code__RestGoalsPrime_25;
        MR_Word ll_backend__follow_code__Goal1Prime_30;
        MR_Word ll_backend__follow_code__GoalExpr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_16, (MR_Integer) 0)));
        MR_Word ll_backend__follow_code__GoalInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_16, (MR_Integer) 1)));
        MR_Word ll_backend__follow_code__FollowGoals_24;
        MR_Word ll_backend__follow_code__WorstPurity_26;
        MR_Word ll_backend__follow_code__Var_38;
        MR_Word ll_backend__follow_code__Var_27;
        MR_Word ll_backend__follow_code__Var_28;
        MR_Word ll_backend__follow_code__Var_29;
        MR_Word ll_backend__follow_code__Var_39;
        MR_Word ll_backend__follow_code__TypeCtorInfo_8_51;
        MR_Word ll_backend__follow_code__Goal_45;
        MR_Word ll_backend__follow_code__Goals_46;
        MR_Word ll_backend__follow_code__GoalInfo_48;
        MR_Word ll_backend__follow_code__InstMapDelta_49;
        MR_Word ll_backend__follow_code__ChangedVars_50;
        MR_Word ll_backend__follow_code__Var_47;

        ll_backend__follow_code__succeeded = hlds__goal_util__goal_is_branched_1_p_0(ll_backend__follow_code__GoalExpr0_22);
        if (ll_backend__follow_code__succeeded)
        {
          ll_backend__follow_code__Var_38 = (MR_Integer) 15;
          ll_backend__follow_code__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__follow_code__GoalInfo0_23, ll_backend__follow_code__Var_38);
          ll_backend__follow_code__succeeded = !(ll_backend__follow_code__succeeded);
          if (ll_backend__follow_code__succeeded)
          {
            ll_backend__follow_code__move_follow_code_select_6_p_0(ll_backend__follow_code__Goals0_17, ll_backend__follow_code__HeadVar__3_3, &ll_backend__follow_code__FollowGoals_24, &ll_backend__follow_code__RestGoalsPrime_25, ll_backend__follow_code__HeadVar__2_2, &ll_backend__follow_code__WorstPurity_26);
            ll_backend__follow_code__succeeded = ((MR_tag((MR_Word) ll_backend__follow_code__FollowGoals_24)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__follow_code__succeeded)
            {
              ll_backend__follow_code__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__FollowGoals_24, (MR_Integer) 0)));
              ll_backend__follow_code__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__FollowGoals_24, (MR_Integer) 1)));
              ll_backend__follow_code__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_code__GoalExpr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_22, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (ll_backend__follow_code__succeeded)
              {
                ll_backend__follow_code__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_22, (MR_Integer) 1)));
                ll_backend__follow_code__Var_39 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__follow_code__GoalInfo0_23);
                ll_backend__follow_code__succeeded = (ll_backend__follow_code__Var_39 == (MR_Integer) 2);
                ll_backend__follow_code__succeeded = !(ll_backend__follow_code__succeeded);
                if (ll_backend__follow_code__succeeded)
                {
                  ll_backend__follow_code__Goal_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__FollowGoals_24, (MR_Integer) 0)));
                  ll_backend__follow_code__Goals_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__FollowGoals_24, (MR_Integer) 1)));
                  ll_backend__follow_code__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_45, (MR_Integer) 0)));
                  ll_backend__follow_code__GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_45, (MR_Integer) 1)));
                  ll_backend__follow_code__InstMapDelta_49 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__follow_code__GoalInfo_48);
                  hlds__instmap__instmap_delta_changed_vars_2_p_0(ll_backend__follow_code__InstMapDelta_49, &ll_backend__follow_code__ChangedVars_50);
                  ll_backend__follow_code__TypeCtorInfo_8_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  ll_backend__follow_code__succeeded = parse_tree__set_of_var__is_empty_1_p_0(ll_backend__follow_code__TypeCtorInfo_8_51, ll_backend__follow_code__ChangedVars_50);
                  if (ll_backend__follow_code__succeeded)
                    ll_backend__follow_code__succeeded = ll_backend__follow_code__no_bind_vars_1_p_0(ll_backend__follow_code__Goals_46);
                  ll_backend__follow_code__succeeded = !(ll_backend__follow_code__succeeded);
                }
              }
              ll_backend__follow_code__succeeded = !(ll_backend__follow_code__succeeded);
              if (ll_backend__follow_code__succeeded)
                ll_backend__follow_code__succeeded = ll_backend__follow_code__move_follow_code_move_goals_4_p_0(ll_backend__follow_code__Goal0_16, ll_backend__follow_code__FollowGoals_24, ll_backend__follow_code__WorstPurity_26, &ll_backend__follow_code__Goal1Prime_30);
            }
          }
        }
        if (ll_backend__follow_code__succeeded)
        {
          ll_backend__follow_code__STATE_VARIABLE_Changed_40_40 = (MR_Integer) 1;
          ll_backend__follow_code__Goal1_31 = ll_backend__follow_code__Goal1Prime_30;
          ll_backend__follow_code__RestGoals_32 = ll_backend__follow_code__RestGoalsPrime_25;
        }
        else
        {
          ll_backend__follow_code__Goal1_31 = ll_backend__follow_code__Goal0_16;
          ll_backend__follow_code__RestGoals_32 = ll_backend__follow_code__Goals0_17;
          ll_backend__follow_code__STATE_VARIABLE_Changed_40_40 = ll_backend__follow_code__STATE_VARIABLE_Changed_0_6;
        }
        ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__Goal1_31, &ll_backend__follow_code__Goal_33, ll_backend__follow_code__HeadVar__3_3, ll_backend__follow_code__STATE_VARIABLE_Changed_40_40, &ll_backend__follow_code__STATE_VARIABLE_Changed_41_41);
        {
          ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_42_42, 0) = ((MR_Box) (ll_backend__follow_code__Goal_33));
          MR_hl_field(MR_mktag(1), ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_42_42, 1) = ((MR_Box) (ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_0_4));
        }
        /* direct tailcall eliminated */
        {
          MR_Word ll_backend__follow_code__next_value_of_HeadVar__1_1 = ll_backend__follow_code__RestGoals_32;
          MR_Word ll_backend__follow_code__next_value_of_STATE_VARIABLE_RevPrevGoals_0_4 = ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_42_42;
          MR_Word ll_backend__follow_code__next_value_of_STATE_VARIABLE_Changed_0_6 = ll_backend__follow_code__STATE_VARIABLE_Changed_41_41;

          ll_backend__follow_code__STATE_VARIABLE_Changed_0_6 = ll_backend__follow_code__next_value_of_STATE_VARIABLE_Changed_0_6;
          ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_0_4 = ll_backend__follow_code__next_value_of_STATE_VARIABLE_RevPrevGoals_0_4;
          ll_backend__follow_code__HeadVar__1_1 = ll_backend__follow_code__next_value_of_HeadVar__1_1;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_cases_5_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1,
  MR_Word * ll_backend__follow_code__HeadVar__2_2,
  MR_Word ll_backend__follow_code__RttiVarMaps_3,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_4,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_5)
{
  if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ll_backend__follow_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ll_backend__follow_code__STATE_VARIABLE_Changed_5 = ll_backend__follow_code__STATE_VARIABLE_Changed_0_4;
  }
  else
  {
    MR_Word ll_backend__follow_code__Case0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__follow_code__Cases0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__follow_code__Case_12;
    MR_Word ll_backend__follow_code__Cases_13;
    MR_Word ll_backend__follow_code__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case0_10, (MR_Integer) 0)));
    MR_Word ll_backend__follow_code__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case0_10, (MR_Integer) 1)));
    MR_Word ll_backend__follow_code__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case0_10, (MR_Integer) 2)));
    MR_Word ll_backend__follow_code__Goal_19;
    MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_22_22;

    ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__Goal0_18, &ll_backend__follow_code__Goal_19, ll_backend__follow_code__RttiVarMaps_3, ll_backend__follow_code__STATE_VARIABLE_Changed_0_4, &ll_backend__follow_code__STATE_VARIABLE_Changed_22_22);
    {
      ll_backend__follow_code__Case_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case_12, 0) = ((MR_Box) (ll_backend__follow_code__MainConsId_16));
      MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case_12, 1) = ((MR_Box) (ll_backend__follow_code__OtherConsIds_17));
      MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case_12, 2) = ((MR_Box) (ll_backend__follow_code__Goal_19));
    }
    ll_backend__follow_code__move_follow_code_in_cases_5_p_0(ll_backend__follow_code__Cases0_11, &ll_backend__follow_code__Cases_13, ll_backend__follow_code__RttiVarMaps_3, ll_backend__follow_code__STATE_VARIABLE_Changed_22_22, ll_backend__follow_code__STATE_VARIABLE_Changed_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__follow_code__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_code__Case_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_code__Cases_13));
    }
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1,
  MR_Word * ll_backend__follow_code__HeadVar__2_2,
  MR_Word ll_backend__follow_code__RttiVarMaps_3,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_4,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_5)
{
  if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ll_backend__follow_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ll_backend__follow_code__STATE_VARIABLE_Changed_5 = ll_backend__follow_code__STATE_VARIABLE_Changed_0_4;
  }
  else
  {
    MR_Word ll_backend__follow_code__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__follow_code__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__follow_code__Goal_12;
    MR_Word ll_backend__follow_code__Goals_13;
    MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_18_18;

    ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__Goal0_10, &ll_backend__follow_code__Goal_12, ll_backend__follow_code__RttiVarMaps_3, ll_backend__follow_code__STATE_VARIABLE_Changed_0_4, &ll_backend__follow_code__STATE_VARIABLE_Changed_18_18);
    ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(ll_backend__follow_code__Goals0_11, &ll_backend__follow_code__Goals_13, ll_backend__follow_code__RttiVarMaps_3, ll_backend__follow_code__STATE_VARIABLE_Changed_18_18, ll_backend__follow_code__STATE_VARIABLE_Changed_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__follow_code__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_code__Goal_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_code__Goals_13));
    }
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_goal_5_p_0(
  MR_Word ll_backend__follow_code__Goal0_6,
  MR_Word * ll_backend__follow_code__Goal_7,
  MR_Word ll_backend__follow_code__RttiVarMaps_8,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_57,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_58)
{
  {
    MR_bool ll_backend__follow_code__succeeded;
    MR_Word ll_backend__follow_code__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_6, (MR_Integer) 0)));
    MR_Word ll_backend__follow_code__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_6, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) ll_backend__follow_code__GoalExpr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__follow_code__SubGoal0_17 = (MR_Word) MR_body(((MR_Word) ll_backend__follow_code__GoalExpr0_10), (MR_Integer) 0);
          MR_Word ll_backend__follow_code__SubGoal_18;
          MR_Word ll_backend__follow_code__GoalExpr_74;

          ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__SubGoal0_17, &ll_backend__follow_code__SubGoal_18, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_0_57, ll_backend__follow_code__STATE_VARIABLE_Changed_58);
          ll_backend__follow_code__GoalExpr_74 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__follow_code__SubGoal_18);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__follow_code__Goal_7 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_74));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_11));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *ll_backend__follow_code__Goal_7 = ll_backend__follow_code__Goal0_6;
          *ll_backend__follow_code__STATE_VARIABLE_Changed_58 = ll_backend__follow_code__STATE_VARIABLE_Changed_0_57;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *ll_backend__follow_code__Goal_7 = ll_backend__follow_code__Goal0_6;
              *ll_backend__follow_code__STATE_VARIABLE_Changed_58 = ll_backend__follow_code__STATE_VARIABLE_Changed_0_57;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__follow_code__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__follow_code__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word ll_backend__follow_code__Goals_15;
              MR_Word ll_backend__follow_code__GoalExpr_16;

              switch (ll_backend__follow_code__ConjType_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(ll_backend__follow_code__Goals0_13, &ll_backend__follow_code__Goals_15, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_0_57, ll_backend__follow_code__STATE_VARIABLE_Changed_58);
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word ll_backend__follow_code__ConjPurity_14;
                    MR_Word ll_backend__follow_code__RevGoals_87;

                    ll_backend__follow_code__ConjPurity_14 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ll_backend__follow_code__GoalInfo_11);
                    ll_backend__follow_code__move_follow_code_in_conj_2_7_p_0(ll_backend__follow_code__Goals0_13, ll_backend__follow_code__ConjPurity_14, ll_backend__follow_code__RttiVarMaps_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__follow_code__RevGoals_87, ll_backend__follow_code__STATE_VARIABLE_Changed_0_57, ll_backend__follow_code__STATE_VARIABLE_Changed_58);
                    mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__follow_code__RevGoals_87, &ll_backend__follow_code__Goals_15);
                  }
                  break;
              }
              {
                ll_backend__follow_code__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_16, 1) = ((MR_Box) (ll_backend__follow_code__ConjType_12));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_16, 2) = ((MR_Box) (ll_backend__follow_code__Goals_15));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__follow_code__Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_16));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_11));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__follow_code__Goals0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__follow_code__Goals_72;
              MR_Word ll_backend__follow_code__GoalExpr_73;

              ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(ll_backend__follow_code__Goals0_71, &ll_backend__follow_code__Goals_72, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_0_57, ll_backend__follow_code__STATE_VARIABLE_Changed_58);
              {
                ll_backend__follow_code__GoalExpr_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_73, 1) = ((MR_Box) (ll_backend__follow_code__Goals_72));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__follow_code__Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_73));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_11));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__follow_code__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__follow_code__Det_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word ll_backend__follow_code__Cases0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word ll_backend__follow_code__Cases_22;
              MR_Word ll_backend__follow_code__GoalExpr_75;

              ll_backend__follow_code__move_follow_code_in_cases_5_p_0(ll_backend__follow_code__Cases0_21, &ll_backend__follow_code__Cases_22, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_0_57, ll_backend__follow_code__STATE_VARIABLE_Changed_58);
              {
                ll_backend__follow_code__GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_75, 1) = ((MR_Box) (ll_backend__follow_code__Var_19));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_75, 2) = ((MR_Box) (ll_backend__follow_code__Det_20));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_75, 3) = ((MR_Box) (ll_backend__follow_code__Cases_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__follow_code__Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_75));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_11));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__follow_code__Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__follow_code__GoalExpr_77;
              MR_Word ll_backend__follow_code__SubGoal0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word ll_backend__follow_code__SubGoal_79;
              MR_Word ll_backend__follow_code__FGT_32;
              MR_Word ll_backend__follow_code__Var_31;

              ll_backend__follow_code__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_code__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (ll_backend__follow_code__succeeded)
              {
                ll_backend__follow_code__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__Reason_30, (MR_Integer) 1)));
                ll_backend__follow_code__FGT_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__Reason_30, (MR_Integer) 2)));
                switch (ll_backend__follow_code__FGT_32) {
                  default:
                    ll_backend__follow_code__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    ll_backend__follow_code__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    ll_backend__follow_code__succeeded = MR_TRUE;
                    break;
                }
              }
              if (ll_backend__follow_code__succeeded)
              {
                ll_backend__follow_code__SubGoal_79 = ll_backend__follow_code__SubGoal0_78;
                *ll_backend__follow_code__STATE_VARIABLE_Changed_58 = ll_backend__follow_code__STATE_VARIABLE_Changed_0_57;
              }
              else
                ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__SubGoal0_78, &ll_backend__follow_code__SubGoal_79, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_0_57, ll_backend__follow_code__STATE_VARIABLE_Changed_58);
              {
                ll_backend__follow_code__GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_77, 1) = ((MR_Box) (ll_backend__follow_code__Reason_30));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_77, 2) = ((MR_Box) (ll_backend__follow_code__SubGoal_79));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__follow_code__Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_77));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_11));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__follow_code__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__follow_code__Cond0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word ll_backend__follow_code__Then0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word ll_backend__follow_code__Else0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 4)));
              MR_Word ll_backend__follow_code__Cond_27;
              MR_Word ll_backend__follow_code__Then_28;
              MR_Word ll_backend__follow_code__Else_29;
              MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_63_63;
              MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_64_64;
              MR_Word ll_backend__follow_code__GoalExpr_76;

              ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__Cond0_24, &ll_backend__follow_code__Cond_27, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_0_57, &ll_backend__follow_code__STATE_VARIABLE_Changed_63_63);
              ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__Then0_25, &ll_backend__follow_code__Then_28, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_63_63, &ll_backend__follow_code__STATE_VARIABLE_Changed_64_64);
              ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__Else0_26, &ll_backend__follow_code__Else_29, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_64_64, ll_backend__follow_code__STATE_VARIABLE_Changed_58);
              {
                ll_backend__follow_code__GoalExpr_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_76, 1) = ((MR_Box) (ll_backend__follow_code__Vars_23));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_76, 2) = ((MR_Box) (ll_backend__follow_code__Cond_27));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_76, 3) = ((MR_Box) (ll_backend__follow_code__Then_28));
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_76, 4) = ((MR_Box) (ll_backend__follow_code__Else_29));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__follow_code__Goal_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_76));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_11));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.follow_code", (MR_String) "predicate \140ll_backend.follow_code.move_follow_code_in_goal\'/5", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_4_p_0(
  MR_Word ll_backend__follow_code__Goal0_5,
  MR_Word ll_backend__follow_code__FollowGoals_6,
  MR_Word ll_backend__follow_code__FollowPurity_7,
  MR_Word * ll_backend__follow_code__Goal_8)
{
  {
    MR_bool ll_backend__follow_code__succeeded;
    MR_Word ll_backend__follow_code__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_5, (MR_Integer) 0)));
    MR_Word ll_backend__follow_code__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_5, (MR_Integer) 1)));
    MR_Word ll_backend__follow_code__GoalExpr_15;
    MR_Word ll_backend__follow_code__OldPurity_24;
    MR_Word ll_backend__follow_code__NewPurity_25;
    MR_Word ll_backend__follow_code__GoalInfo_26;

    switch (MR_tag((MR_Word) ll_backend__follow_code__GoalExpr0_9)) {
      default:
        ll_backend__follow_code__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 0)))) {
          default:
            ll_backend__follow_code__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__follow_code__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word ll_backend__follow_code__Goals_17;

              ll_backend__follow_code__succeeded = ll_backend__follow_code__move_follow_code_move_goals_disj_4_p_0(ll_backend__follow_code__Goals0_16, ll_backend__follow_code__FollowGoals_6, ll_backend__follow_code__FollowPurity_7, &ll_backend__follow_code__Goals_17);
              if (ll_backend__follow_code__succeeded)
              {
                {
                  ll_backend__follow_code__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 1) = ((MR_Box) (ll_backend__follow_code__Goals_17));
                }
                ll_backend__follow_code__succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__follow_code__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word ll_backend__follow_code__Det_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word ll_backend__follow_code__Cases0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 3)));
              MR_Word ll_backend__follow_code__Cases_14;

              ll_backend__follow_code__succeeded = ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(ll_backend__follow_code__Cases0_13, ll_backend__follow_code__FollowGoals_6, ll_backend__follow_code__FollowPurity_7, &ll_backend__follow_code__Cases_14);
              if (ll_backend__follow_code__succeeded)
              {
                {
                  ll_backend__follow_code__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 1) = ((MR_Box) (ll_backend__follow_code__Var_11));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 2) = ((MR_Box) (ll_backend__follow_code__Det_12));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 3) = ((MR_Box) (ll_backend__follow_code__Cases_14));
                }
                ll_backend__follow_code__succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__follow_code__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word ll_backend__follow_code__Cond_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word ll_backend__follow_code__Then0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 3)));
              MR_Word ll_backend__follow_code__Else0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 4)));
              MR_Word ll_backend__follow_code__Then_22;
              MR_Word ll_backend__follow_code__Else_23;
              MR_Word ll_backend__follow_code__GoalExpr0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Then0_20, (MR_Integer) 0)));
              MR_Word ll_backend__follow_code__GoalInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Then0_20, (MR_Integer) 1)));
              MR_Word ll_backend__follow_code__Detism0_33;
              MR_Word ll_backend__follow_code__MaxSolns0_35;
              MR_Word ll_backend__follow_code__GoalExpr0_51;
              MR_Word ll_backend__follow_code__GoalInfo0_52;
              MR_Word ll_backend__follow_code__Detism0_53;
              MR_Word ll_backend__follow_code__MaxSolns0_55;
              MR_Word ll_backend__follow_code___CanFail0_34;
              MR_Word ll_backend__follow_code___CanFail0_54;

              ll_backend__follow_code__Detism0_33 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__follow_code__GoalInfo0_32);
              parse_tree__prog_data__determinism_components_3_p_0(ll_backend__follow_code__Detism0_33, &ll_backend__follow_code___CanFail0_34, &ll_backend__follow_code__MaxSolns0_35);
              switch (ll_backend__follow_code__MaxSolns0_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__follow_code__GoalExpr_37;
                    MR_Word ll_backend__follow_code__OldPurity_38;
                    MR_Word ll_backend__follow_code__NewPurity_39;
                    MR_Word ll_backend__follow_code__GoalInfo_40;
                    MR_Word ll_backend__follow_code__Conjuncts0_36;
                    MR_Word ll_backend__follow_code__Var_41;

                    ll_backend__follow_code__succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(ll_backend__follow_code__FollowGoals_6, ll_backend__follow_code__Detism0_33);
                    if (ll_backend__follow_code__succeeded)
                    {
                      ll_backend__follow_code__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_code__GoalExpr0_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 2)));
                      if (ll_backend__follow_code__succeeded)
                      {
                        ll_backend__follow_code__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_31, (MR_Integer) 1)));
                        ll_backend__follow_code__Conjuncts0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_31, (MR_Integer) 2)));
                        ll_backend__follow_code__succeeded = (ll_backend__follow_code__Var_41 == (MR_Integer) 0);
                      }
                      if (ll_backend__follow_code__succeeded)
                      {
                        MR_Word ll_backend__follow_code__Var_43;

                        ll_backend__follow_code__Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__follow_code__Conjuncts0_36, ll_backend__follow_code__FollowGoals_6);
                        {
                          ll_backend__follow_code__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_37, 1) = ((MR_Box) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_37, 2) = ((MR_Box) (ll_backend__follow_code__Var_43));
                        }
                      }
                      else
                      {
                        MR_Word ll_backend__follow_code__Var_45;

                        {
                          ll_backend__follow_code__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__follow_code__Var_45, 0) = ((MR_Box) (ll_backend__follow_code__Then0_20));
                          MR_hl_field(MR_mktag(1), ll_backend__follow_code__Var_45, 1) = ((MR_Box) (ll_backend__follow_code__FollowGoals_6));
                        }
                        {
                          ll_backend__follow_code__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_37, 1) = ((MR_Box) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_37, 2) = ((MR_Box) (ll_backend__follow_code__Var_45));
                        }
                      }
                      ll_backend__follow_code__OldPurity_38 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ll_backend__follow_code__GoalInfo0_32);
                      ll_backend__follow_code__NewPurity_39 = parse_tree__prog_data__worst_purity_2_f_0(ll_backend__follow_code__OldPurity_38, ll_backend__follow_code__FollowPurity_7);
                      hlds__hlds_goal__goal_info_set_purity_3_p_0(ll_backend__follow_code__NewPurity_39, ll_backend__follow_code__GoalInfo0_32, &ll_backend__follow_code__GoalInfo_40);
                      {
                        ll_backend__follow_code__Then_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__follow_code__Then_22, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_37));
                        MR_hl_field(MR_mktag(0), ll_backend__follow_code__Then_22, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_40));
                      }
                      ll_backend__follow_code__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    ll_backend__follow_code__Then_22 = ll_backend__follow_code__Then0_20;
                    ll_backend__follow_code__succeeded = MR_TRUE;
                  }
                  break;
              }
              if (ll_backend__follow_code__succeeded)
              {
                ll_backend__follow_code__GoalExpr0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Else0_21, (MR_Integer) 0)));
                ll_backend__follow_code__GoalInfo0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Else0_21, (MR_Integer) 1)));
                ll_backend__follow_code__Detism0_53 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__follow_code__GoalInfo0_52);
                parse_tree__prog_data__determinism_components_3_p_0(ll_backend__follow_code__Detism0_53, &ll_backend__follow_code___CanFail0_54, &ll_backend__follow_code__MaxSolns0_55);
                switch (ll_backend__follow_code__MaxSolns0_55) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 3:
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__follow_code__GoalExpr_57;
                      MR_Word ll_backend__follow_code__OldPurity_58;
                      MR_Word ll_backend__follow_code__NewPurity_59;
                      MR_Word ll_backend__follow_code__GoalInfo_60;
                      MR_Word ll_backend__follow_code__Conjuncts0_56;
                      MR_Word ll_backend__follow_code__Var_61;

                      ll_backend__follow_code__succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(ll_backend__follow_code__FollowGoals_6, ll_backend__follow_code__Detism0_53);
                      if (ll_backend__follow_code__succeeded)
                      {
                        ll_backend__follow_code__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_code__GoalExpr0_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_51, (MR_Integer) 0)))) == (MR_Integer) 2)));
                        if (ll_backend__follow_code__succeeded)
                        {
                          ll_backend__follow_code__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_51, (MR_Integer) 1)));
                          ll_backend__follow_code__Conjuncts0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_51, (MR_Integer) 2)));
                          ll_backend__follow_code__succeeded = (ll_backend__follow_code__Var_61 == (MR_Integer) 0);
                        }
                        if (ll_backend__follow_code__succeeded)
                        {
                          MR_Word ll_backend__follow_code__Var_63;

                          ll_backend__follow_code__Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__follow_code__Conjuncts0_56, ll_backend__follow_code__FollowGoals_6);
                          {
                            ll_backend__follow_code__GoalExpr_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_57, 1) = ((MR_Box) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_57, 2) = ((MR_Box) (ll_backend__follow_code__Var_63));
                          }
                        }
                        else
                        {
                          MR_Word ll_backend__follow_code__Var_65;

                          {
                            ll_backend__follow_code__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ll_backend__follow_code__Var_65, 0) = ((MR_Box) (ll_backend__follow_code__Else0_21));
                            MR_hl_field(MR_mktag(1), ll_backend__follow_code__Var_65, 1) = ((MR_Box) (ll_backend__follow_code__FollowGoals_6));
                          }
                          {
                            ll_backend__follow_code__GoalExpr_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_57, 1) = ((MR_Box) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_57, 2) = ((MR_Box) (ll_backend__follow_code__Var_65));
                          }
                        }
                        ll_backend__follow_code__OldPurity_58 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ll_backend__follow_code__GoalInfo0_52);
                        ll_backend__follow_code__NewPurity_59 = parse_tree__prog_data__worst_purity_2_f_0(ll_backend__follow_code__OldPurity_58, ll_backend__follow_code__FollowPurity_7);
                        hlds__hlds_goal__goal_info_set_purity_3_p_0(ll_backend__follow_code__NewPurity_59, ll_backend__follow_code__GoalInfo0_52, &ll_backend__follow_code__GoalInfo_60);
                        {
                          ll_backend__follow_code__Else_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__follow_code__Else_23, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_57));
                          MR_hl_field(MR_mktag(0), ll_backend__follow_code__Else_23, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_60));
                        }
                        ll_backend__follow_code__succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      ll_backend__follow_code__Else_23 = ll_backend__follow_code__Else0_21;
                      ll_backend__follow_code__succeeded = MR_TRUE;
                    }
                    break;
                }
                if (ll_backend__follow_code__succeeded)
                {
                  {
                    ll_backend__follow_code__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 1) = ((MR_Box) (ll_backend__follow_code__Vars_18));
                    MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 2) = ((MR_Box) (ll_backend__follow_code__Cond_19));
                    MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 3) = ((MR_Box) (ll_backend__follow_code__Then_22));
                    MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 4) = ((MR_Box) (ll_backend__follow_code__Else_23));
                  }
                  ll_backend__follow_code__succeeded = MR_TRUE;
                }
              }
            }
            break;
        }
        break;
    }
    if (ll_backend__follow_code__succeeded)
    {
      ll_backend__follow_code__OldPurity_24 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ll_backend__follow_code__GoalInfo0_10);
      ll_backend__follow_code__NewPurity_25 = parse_tree__prog_data__worst_purity_2_f_0(ll_backend__follow_code__OldPurity_24, ll_backend__follow_code__FollowPurity_7);
      hlds__hlds_goal__goal_info_set_purity_3_p_0(ll_backend__follow_code__NewPurity_25, ll_backend__follow_code__GoalInfo0_10, &ll_backend__follow_code__GoalInfo_26);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *ll_backend__follow_code__Goal_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_15));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_26));
      }
      ll_backend__follow_code__succeeded = MR_TRUE;
    }
    return ll_backend__follow_code__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_disj_4_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1,
  MR_Word ll_backend__follow_code__HeadVar__2_2,
  MR_Word ll_backend__follow_code__HeadVar__3_3,
  MR_Word * ll_backend__follow_code__HeadVar__4_4)
{
  {
    MR_bool ll_backend__follow_code__succeeded;

    if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__follow_code__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ll_backend__follow_code__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ll_backend__follow_code__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__follow_code__Goals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__follow_code__Goal_11;
      MR_Word ll_backend__follow_code__Goals_12;
      MR_Word ll_backend__follow_code__GoalExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_7, (MR_Integer) 0)));
      MR_Word ll_backend__follow_code__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_7, (MR_Integer) 1)));
      MR_Word ll_backend__follow_code__Detism0_19;
      MR_Word ll_backend__follow_code__MaxSolns0_21;
      MR_Word ll_backend__follow_code___CanFail0_20;

      ll_backend__follow_code__Detism0_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__follow_code__GoalInfo0_18);
      parse_tree__prog_data__determinism_components_3_p_0(ll_backend__follow_code__Detism0_19, &ll_backend__follow_code___CanFail0_20, &ll_backend__follow_code__MaxSolns0_21);
      switch (ll_backend__follow_code__MaxSolns0_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__follow_code__GoalExpr_23;
            MR_Word ll_backend__follow_code__OldPurity_24;
            MR_Word ll_backend__follow_code__NewPurity_25;
            MR_Word ll_backend__follow_code__GoalInfo_26;
            MR_Word ll_backend__follow_code__Conjuncts0_22;
            MR_Word ll_backend__follow_code__Var_27;

            ll_backend__follow_code__succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(ll_backend__follow_code__HeadVar__2_2, ll_backend__follow_code__Detism0_19);
            if (ll_backend__follow_code__succeeded)
            {
              ll_backend__follow_code__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_code__GoalExpr0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (ll_backend__follow_code__succeeded)
              {
                ll_backend__follow_code__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_17, (MR_Integer) 1)));
                ll_backend__follow_code__Conjuncts0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_17, (MR_Integer) 2)));
                ll_backend__follow_code__succeeded = (ll_backend__follow_code__Var_27 == (MR_Integer) 0);
              }
              if (ll_backend__follow_code__succeeded)
              {
                MR_Word ll_backend__follow_code__Var_29;

                ll_backend__follow_code__Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__follow_code__Conjuncts0_22, ll_backend__follow_code__HeadVar__2_2);
                {
                  ll_backend__follow_code__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_23, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_23, 2) = ((MR_Box) (ll_backend__follow_code__Var_29));
                }
              }
              else
              {
                MR_Word ll_backend__follow_code__Var_31;

                {
                  ll_backend__follow_code__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__follow_code__Var_31, 0) = ((MR_Box) (ll_backend__follow_code__Goal0_7));
                  MR_hl_field(MR_mktag(1), ll_backend__follow_code__Var_31, 1) = ((MR_Box) (ll_backend__follow_code__HeadVar__2_2));
                }
                {
                  ll_backend__follow_code__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_23, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_23, 2) = ((MR_Box) (ll_backend__follow_code__Var_31));
                }
              }
              ll_backend__follow_code__OldPurity_24 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ll_backend__follow_code__GoalInfo0_18);
              ll_backend__follow_code__NewPurity_25 = parse_tree__prog_data__worst_purity_2_f_0(ll_backend__follow_code__OldPurity_24, ll_backend__follow_code__HeadVar__3_3);
              hlds__hlds_goal__goal_info_set_purity_3_p_0(ll_backend__follow_code__NewPurity_25, ll_backend__follow_code__GoalInfo0_18, &ll_backend__follow_code__GoalInfo_26);
              {
                ll_backend__follow_code__Goal_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_11, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_23));
                MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_11, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_26));
              }
              ll_backend__follow_code__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ll_backend__follow_code__Goal_11 = ll_backend__follow_code__Goal0_7;
            ll_backend__follow_code__succeeded = MR_TRUE;
          }
          break;
      }
      if (ll_backend__follow_code__succeeded)
      {
        ll_backend__follow_code__succeeded = ll_backend__follow_code__move_follow_code_move_goals_disj_4_p_0(ll_backend__follow_code__Goals0_8, ll_backend__follow_code__HeadVar__2_2, ll_backend__follow_code__HeadVar__3_3, &ll_backend__follow_code__Goals_12);
        if (ll_backend__follow_code__succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__follow_code__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_code__Goal_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_code__Goals_12));
          }
          ll_backend__follow_code__succeeded = MR_TRUE;
        }
      }
    }
    return ll_backend__follow_code__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1,
  MR_Word ll_backend__follow_code__HeadVar__2_2,
  MR_Word ll_backend__follow_code__HeadVar__3_3,
  MR_Word * ll_backend__follow_code__HeadVar__4_4)
{
  {
    MR_bool ll_backend__follow_code__succeeded;

    if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__follow_code__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ll_backend__follow_code__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ll_backend__follow_code__Case0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__follow_code__Cases0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__follow_code__Case_11;
      MR_Word ll_backend__follow_code__Cases_12;
      MR_Word ll_backend__follow_code__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case0_7, (MR_Integer) 0)));
      MR_Word ll_backend__follow_code__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case0_7, (MR_Integer) 1)));
      MR_Word ll_backend__follow_code__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case0_7, (MR_Integer) 2)));
      MR_Word ll_backend__follow_code__Goal_16;
      MR_Word ll_backend__follow_code__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_15, (MR_Integer) 0)));
      MR_Word ll_backend__follow_code__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_15, (MR_Integer) 1)));
      MR_Word ll_backend__follow_code__Detism0_23;
      MR_Word ll_backend__follow_code__MaxSolns0_25;
      MR_Word ll_backend__follow_code___CanFail0_24;

      ll_backend__follow_code__Detism0_23 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__follow_code__GoalInfo0_22);
      parse_tree__prog_data__determinism_components_3_p_0(ll_backend__follow_code__Detism0_23, &ll_backend__follow_code___CanFail0_24, &ll_backend__follow_code__MaxSolns0_25);
      switch (ll_backend__follow_code__MaxSolns0_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__follow_code__GoalExpr_27;
            MR_Word ll_backend__follow_code__OldPurity_28;
            MR_Word ll_backend__follow_code__NewPurity_29;
            MR_Word ll_backend__follow_code__GoalInfo_30;
            MR_Word ll_backend__follow_code__Conjuncts0_26;
            MR_Word ll_backend__follow_code__Var_31;

            ll_backend__follow_code__succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(ll_backend__follow_code__HeadVar__2_2, ll_backend__follow_code__Detism0_23);
            if (ll_backend__follow_code__succeeded)
            {
              ll_backend__follow_code__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_code__GoalExpr0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (ll_backend__follow_code__succeeded)
              {
                ll_backend__follow_code__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_21, (MR_Integer) 1)));
                ll_backend__follow_code__Conjuncts0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_21, (MR_Integer) 2)));
                ll_backend__follow_code__succeeded = (ll_backend__follow_code__Var_31 == (MR_Integer) 0);
              }
              if (ll_backend__follow_code__succeeded)
              {
                MR_Word ll_backend__follow_code__Var_33;

                ll_backend__follow_code__Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__follow_code__Conjuncts0_26, ll_backend__follow_code__HeadVar__2_2);
                {
                  ll_backend__follow_code__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_27, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_27, 2) = ((MR_Box) (ll_backend__follow_code__Var_33));
                }
              }
              else
              {
                MR_Word ll_backend__follow_code__Var_35;

                {
                  ll_backend__follow_code__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__follow_code__Var_35, 0) = ((MR_Box) (ll_backend__follow_code__Goal0_15));
                  MR_hl_field(MR_mktag(1), ll_backend__follow_code__Var_35, 1) = ((MR_Box) (ll_backend__follow_code__HeadVar__2_2));
                }
                {
                  ll_backend__follow_code__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_27, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_27, 2) = ((MR_Box) (ll_backend__follow_code__Var_35));
                }
              }
              ll_backend__follow_code__OldPurity_28 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ll_backend__follow_code__GoalInfo0_22);
              ll_backend__follow_code__NewPurity_29 = parse_tree__prog_data__worst_purity_2_f_0(ll_backend__follow_code__OldPurity_28, ll_backend__follow_code__HeadVar__3_3);
              hlds__hlds_goal__goal_info_set_purity_3_p_0(ll_backend__follow_code__NewPurity_29, ll_backend__follow_code__GoalInfo0_22, &ll_backend__follow_code__GoalInfo_30);
              {
                ll_backend__follow_code__Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_16, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_27));
                MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_16, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_30));
              }
              ll_backend__follow_code__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            ll_backend__follow_code__Goal_16 = ll_backend__follow_code__Goal0_15;
            ll_backend__follow_code__succeeded = MR_TRUE;
          }
          break;
      }
      if (ll_backend__follow_code__succeeded)
      {
        {
          ll_backend__follow_code__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case_11, 0) = ((MR_Box) (ll_backend__follow_code__MainConsId_13));
          MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case_11, 1) = ((MR_Box) (ll_backend__follow_code__OtherConsIds_14));
          MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case_11, 2) = ((MR_Box) (ll_backend__follow_code__Goal_16));
        }
        ll_backend__follow_code__succeeded = ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(ll_backend__follow_code__Cases0_8, ll_backend__follow_code__HeadVar__2_2, ll_backend__follow_code__HeadVar__3_3, &ll_backend__follow_code__Cases_12);
        if (ll_backend__follow_code__succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__follow_code__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_code__Case_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_code__Cases_12));
          }
          ll_backend__follow_code__succeeded = MR_TRUE;
        }
      }
    }
    return ll_backend__follow_code__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__follow_code__check_follow_code_detism_2_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1,
  MR_Word ll_backend__follow_code__Detism0_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__follow_code__succeeded;

      if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ll_backend__follow_code__succeeded = MR_TRUE;
      else
      {
        MR_Word ll_backend__follow_code__GoalInfo_5;
        MR_Word ll_backend__follow_code__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__follow_code__Detism1_8;
        MR_Word ll_backend__follow_code__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__follow_code__Var_11;
        MR_Word ll_backend__follow_code__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Var_9, (MR_Integer) 0)));

        ll_backend__follow_code__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Var_9, (MR_Integer) 1)));
        ll_backend__follow_code__Detism1_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__follow_code__GoalInfo_5);
        parse_tree__prog_detism__det_conjunction_detism_3_p_0(ll_backend__follow_code__Detism0_2, ll_backend__follow_code__Detism1_8, &ll_backend__follow_code__Var_11);
        ll_backend__follow_code__succeeded = (ll_backend__follow_code__Detism0_2 == ll_backend__follow_code__Var_11);
        if (ll_backend__follow_code__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word ll_backend__follow_code__next_value_of_HeadVar__1_1 = ll_backend__follow_code__Goals_6;

            ll_backend__follow_code__HeadVar__1_1 = ll_backend__follow_code__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return ll_backend__follow_code__succeeded;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_1(
  void * ll_backend__follow_code__env_ptr_arg)
{
  {
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * ll_backend__follow_code__env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) ll_backend__follow_code__env_ptr_arg;

    MR_builtin_longjmp((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_3(
  void * ll_backend__follow_code__env_ptr_arg)
{
  {
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * ll_backend__follow_code__env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) ll_backend__follow_code__env_ptr_arg;

    (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__Arg_30 = ((MR_Word) (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__conv0_Arg_30);
    ll_backend__follow_code__move_follow_code_select_6_p_0_2(ll_backend__follow_code__env_ptr);
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_2(
  void * ll_backend__follow_code__env_ptr_arg)
{
  {
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * ll_backend__follow_code__env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) ll_backend__follow_code__env_ptr_arg;

    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarMaps_2, (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__Arg_30, &(ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarInfo_31);
    (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarInfo_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = !((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded);
    if ((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
      ll_backend__follow_code__move_follow_code_select_6_p_0_1(ll_backend__follow_code__env_ptr);
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_4(
  void * ll_backend__follow_code__env_ptr_arg)
{
  {
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * ll_backend__follow_code__env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) ll_backend__follow_code__env_ptr_arg;

    if (MR_builtin_setjmp((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ll_backend__follow_code__TypeInfo_38_38;
          MR_Word ll_backend__follow_code__Unification_22;
          MR_Word ll_backend__follow_code__Args_26;
          MR_Word ll_backend__follow_code__Var_19;
          MR_Word ll_backend__follow_code__Var_20;
          MR_Word ll_backend__follow_code__Var_21;
          MR_Word ll_backend__follow_code__Var_23;
          MR_Word ll_backend__follow_code__Var_24;
          MR_Word ll_backend__follow_code__Var_25;
          MR_Word ll_backend__follow_code__Var_27;
          MR_Word ll_backend__follow_code__Var_28;
          MR_Word ll_backend__follow_code__Var_29;

          (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17)) == (MR_mktag((MR_Integer) 1)));
          if ((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
          {
            ll_backend__follow_code__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 0)));
            ll_backend__follow_code__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 1)));
            ll_backend__follow_code__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 2)));
            ll_backend__follow_code__Unification_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 3)));
            ll_backend__follow_code__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 4)));
            (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) ll_backend__follow_code__Unification_22)) == (MR_mktag((MR_Integer) 1)));
            if ((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
            {
              ll_backend__follow_code__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__Unification_22, (MR_Integer) 0)));
              ll_backend__follow_code__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__Unification_22, (MR_Integer) 1)));
              ll_backend__follow_code__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__Unification_22, (MR_Integer) 2)));
              ll_backend__follow_code__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__Unification_22, (MR_Integer) 3)));
              ll_backend__follow_code__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__Unification_22, (MR_Integer) 4)));
              ll_backend__follow_code__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__Unification_22, (MR_Integer) 5)));
              ll_backend__follow_code__TypeInfo_38_38 = (MR_Word) &ll_backend__follow_code_scalar_common_1[0];
              mercury__list__member_2_p_1(ll_backend__follow_code__TypeInfo_38_38, &(ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__conv0_Arg_30, ll_backend__follow_code__Args_26, ll_backend__follow_code__move_follow_code_select_6_p_0_3, ll_backend__follow_code__env_ptr);
            }
          }
        }
        (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1,
  MR_Word ll_backend__follow_code__RttiVarMaps_2,
  MR_Word * ll_backend__follow_code__HeadVar__3_3,
  MR_Word * ll_backend__follow_code__HeadVar__4_4,
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Purity_0_5,
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Purity_6)
{
  {
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s ll_backend__follow_code__env;

    (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarMaps_2 = ll_backend__follow_code__RttiVarMaps_2;
    if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__follow_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__follow_code__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__follow_code__STATE_VARIABLE_Purity_6 = ll_backend__follow_code__STATE_VARIABLE_Purity_0_5;
    }
    else
    {
      MR_Word ll_backend__follow_code__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__follow_code__Goals_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__follow_code__GoalInfo_18;

      (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_11, (MR_Integer) 0)));
      ll_backend__follow_code__GoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_11, (MR_Integer) 1)));
      if (((MR_tag((MR_Word) (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word ll_backend__follow_code__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 3)));
        MR_Word ll_backend__follow_code__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 0)));
        MR_Integer ll_backend__follow_code__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 1)));
        MR_Word ll_backend__follow_code__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 2)));
        MR_Word ll_backend__follow_code__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 4)));
        MR_Word ll_backend__follow_code__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 5)));

        (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = (ll_backend__follow_code__Var_53 == (MR_Integer) 0);
      }
      else
      if (((MR_tag((MR_Word) (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__follow_code__Unification_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 3)));
        MR_Word ll_backend__follow_code__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 0)));
        MR_Word ll_backend__follow_code__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 1)));
        MR_Word ll_backend__follow_code__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 2)));
        MR_Word ll_backend__follow_code__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 4)));
        MR_Word ll_backend__follow_code__Var_45;
        MR_Word ll_backend__follow_code__Var_46;
        MR_Word ll_backend__follow_code__Var_47;

        (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_code__Unification_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__Unification_43, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if ((ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
        {
          ll_backend__follow_code__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__Unification_43, (MR_Integer) 1)));
          ll_backend__follow_code__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__Unification_43, (MR_Integer) 2)));
          ll_backend__follow_code__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__Unification_43, (MR_Integer) 3)));
        }
        (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = !((ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded);
      }
      else
        (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = MR_FALSE;
      if ((ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
      {
        ll_backend__follow_code__move_follow_code_select_6_p_0_4(&ll_backend__follow_code__env);
        (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = !((ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded);
      }
      if ((ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
      {
        MR_Word ll_backend__follow_code__GoalPurity_32;
        MR_Word ll_backend__follow_code__FollowGoals0_33;
        MR_Word ll_backend__follow_code__STATE_VARIABLE_Purity_36_36;

        ll_backend__follow_code__GoalPurity_32 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ll_backend__follow_code__GoalInfo_18);
        ll_backend__follow_code__STATE_VARIABLE_Purity_36_36 = parse_tree__prog_data__worst_purity_2_f_0(ll_backend__follow_code__STATE_VARIABLE_Purity_0_5, ll_backend__follow_code__GoalPurity_32);
        ll_backend__follow_code__move_follow_code_select_6_p_0(ll_backend__follow_code__Goals_12, (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarMaps_2, &ll_backend__follow_code__FollowGoals0_33, ll_backend__follow_code__HeadVar__4_4, ll_backend__follow_code__STATE_VARIABLE_Purity_36_36, ll_backend__follow_code__STATE_VARIABLE_Purity_6);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__follow_code__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_code__Goal_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_code__FollowGoals0_33));
        }
      }
      else
      {
        *ll_backend__follow_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__follow_code__HeadVar__4_4 = ll_backend__follow_code__HeadVar__1_1;
        *ll_backend__follow_code__STATE_VARIABLE_Purity_6 = ll_backend__follow_code__STATE_VARIABLE_Purity_0_5;
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__follow_code__no_bind_vars_1_p_0(
  MR_Word ll_backend__follow_code__HeadVar__1_1)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__follow_code__succeeded;

      if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ll_backend__follow_code__succeeded = MR_TRUE;
      else
      {
        MR_Word ll_backend__follow_code__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__follow_code__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__follow_code__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_2, (MR_Integer) 1)));
        MR_Word ll_backend__follow_code__InstMapDelta_6;
        MR_Word ll_backend__follow_code__ChangedVars_7;
        MR_Word ll_backend__follow_code__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_2, (MR_Integer) 0)));

        ll_backend__follow_code__InstMapDelta_6 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__follow_code__GoalInfo_5);
        hlds__instmap__instmap_delta_changed_vars_2_p_0(ll_backend__follow_code__InstMapDelta_6, &ll_backend__follow_code__ChangedVars_7);
        ll_backend__follow_code__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__follow_code__ChangedVars_7);
        if (ll_backend__follow_code__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word ll_backend__follow_code__next_value_of_HeadVar__1_1 = ll_backend__follow_code__Goals_3;

            ll_backend__follow_code__HeadVar__1_1 = ll_backend__follow_code__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return ll_backend__follow_code__succeeded;
    }
    break;
  }
}

void mercury__ll_backend__follow_code__init(void)
{
}

void mercury__ll_backend__follow_code__init_type_tables(void)
{
}

void mercury__ll_backend__follow_code__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__follow_code__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.follow_code. */
