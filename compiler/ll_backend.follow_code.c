/*
** Automatically generated from `follow_code.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 266 "follow_code.m"
struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s {
#line 266 "follow_code.m"
  MR_Word ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarMaps_2;
#line 270 "follow_code.m"
  MR_bool ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded;
#line 272 "follow_code.m"
  MR_Word ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17;
#line 288 "follow_code.m"
  jmp_buf ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__commit_0;
#line 288 "follow_code.m"
  MR_Word ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__Arg_30;
#line 288 "follow_code.m"
  MR_Word ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarInfo_31;
#line 290 "follow_code.m"
  MR_Box ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__conv0_Arg_30;
#line 266 "follow_code.m"
};


#line 399 "follow_code.m"
static MR_bool MR_CALL 
ll_backend__follow_code__check_follow_code_detism_2_p_0(
#line 399 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1,
#line 399 "follow_code.m"
  MR_Word ll_backend__follow_code__Detism0_2);

#line 352 "follow_code.m"
static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_disj_4_p_0(
#line 352 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1,
#line 352 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__2_2,
#line 352 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__3_3,
#line 352 "follow_code.m"
  MR_Word * ll_backend__follow_code__HeadVar__4_4);

#line 337 "follow_code.m"
static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(
#line 337 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1,
#line 337 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__2_2,
#line 337 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__3_3,
#line 337 "follow_code.m"
  MR_Word * ll_backend__follow_code__HeadVar__4_4);

#line 307 "follow_code.m"
static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_4_p_0(
#line 307 "follow_code.m"
  MR_Word ll_backend__follow_code__Goal0_5,
#line 307 "follow_code.m"
  MR_Word ll_backend__follow_code__FollowGoals_6,
#line 307 "follow_code.m"
  MR_Word ll_backend__follow_code__FollowPurity_7,
#line 307 "follow_code.m"
  MR_Word * ll_backend__follow_code__Goal_8);

#line 288 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_1(
#line 288 "follow_code.m"
  void * ll_backend__follow_code__env_ptr_arg);

#line 290 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_3(
#line 290 "follow_code.m"
  void * ll_backend__follow_code__env_ptr_arg);

#line 288 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_2(
#line 288 "follow_code.m"
  void * ll_backend__follow_code__env_ptr_arg);

#line 288 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_4(
#line 288 "follow_code.m"
  void * ll_backend__follow_code__env_ptr_arg);

#line 266 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0(
#line 266 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1,
#line 266 "follow_code.m"
  MR_Word ll_backend__follow_code__RttiVarMaps_2,
#line 266 "follow_code.m"
  MR_Word * ll_backend__follow_code__HeadVar__3_3,
#line 266 "follow_code.m"
  MR_Word * ll_backend__follow_code__HeadVar__4_4,
#line 266 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Purity_0_5,
#line 266 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Purity_6);

#line 252 "follow_code.m"
static MR_bool MR_CALL 
ll_backend__follow_code__no_bind_vars_1_p_0(
#line 252 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1);

#line 205 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_conj_2_7_p_0(
#line 205 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1,
#line 205 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__2_2,
#line 205 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__3_3,
#line 205 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_0_4,
#line 205 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_5,
#line 205 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_6,
#line 205 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_7);

#line 197 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_conj_6_p_0(
#line 197 "follow_code.m"
  MR_Word ll_backend__follow_code__Goals0_7,
#line 197 "follow_code.m"
  MR_Word ll_backend__follow_code__ConjPurity_8,
#line 197 "follow_code.m"
  MR_Word ll_backend__follow_code__RttiVarMaps_9,
#line 197 "follow_code.m"
  MR_Word * ll_backend__follow_code__Goals_10,
#line 197 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_13,
#line 197 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_14);

#line 181 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_cases_5_p_0(
#line 181 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1,
#line 181 "follow_code.m"
  MR_Word * ll_backend__follow_code__HeadVar__2_2,
#line 181 "follow_code.m"
  MR_Word ll_backend__follow_code__RttiVarMaps_3,
#line 181 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_4,
#line 181 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_5);

#line 169 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(
#line 169 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1,
#line 169 "follow_code.m"
  MR_Word * ll_backend__follow_code__HeadVar__2_2,
#line 169 "follow_code.m"
  MR_Word ll_backend__follow_code__RttiVarMaps_3,
#line 169 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_4,
#line 169 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_5);

#line 95 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_goal_5_p_0(
#line 95 "follow_code.m"
  MR_Word ll_backend__follow_code__Goal0_6,
#line 95 "follow_code.m"
  MR_Word * ll_backend__follow_code__Goal_7,
#line 95 "follow_code.m"
  MR_Word ll_backend__follow_code__RttiVarMaps_8,
#line 95 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_57,
#line 95 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_58);


static /* final */ const MR_Box ll_backend__follow_code_scalar_common_1[1][2];




static /* final */ const MR_Box ll_backend__follow_code_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 39 "follow_code.m"
void MR_CALL 
ll_backend__follow_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_5_p_0(
#line 39 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24,
#line 39 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_ProcInfo_25,
#line 39 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_0_26,
#line 39 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_27)
#line 39 "follow_code.m"
{
#line 64 "follow_code.m"
  {
#line 64 "follow_code.m"
    MR_bool ll_backend__follow_code__succeeded;
#line 64 "follow_code.m"
    MR_Word ll_backend__follow_code__Goal0_9;
#line 64 "follow_code.m"
    MR_Word ll_backend__follow_code__Varset0_10;
#line 64 "follow_code.m"
    MR_Word ll_backend__follow_code__VarTypes0_11;
#line 64 "follow_code.m"
    MR_Word ll_backend__follow_code__RttiVarMaps0_12;
#line 64 "follow_code.m"
    MR_Word ll_backend__follow_code__Goal1_13;
#line 64 "follow_code.m"
    MR_Word ll_backend__follow_code__Changed_14;

#line 65 "follow_code.m"
    {
#line 65 "follow_code.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, &ll_backend__follow_code__Goal0_9);
    }
#line 66 "follow_code.m"
    {
#line 66 "follow_code.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, &ll_backend__follow_code__Varset0_10);
    }
#line 67 "follow_code.m"
    {
#line 67 "follow_code.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, &ll_backend__follow_code__VarTypes0_11);
    }
#line 68 "follow_code.m"
    {
#line 68 "follow_code.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, &ll_backend__follow_code__RttiVarMaps0_12);
    }
#line 69 "follow_code.m"
    {
#line 69 "follow_code.m"
      ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__Goal0_9, &ll_backend__follow_code__Goal1_13, ll_backend__follow_code__RttiVarMaps0_12, (MR_Integer) 0, &ll_backend__follow_code__Changed_14);
    }
#line 88 "follow_code.m"
#line 88 "follow_code.m"
    switch (ll_backend__follow_code__Changed_14) {
#line 88 "follow_code.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 88 "follow_code.m"
      case (MR_Integer) 0:
#line 89 "follow_code.m"
        {
#line 89 "follow_code.m"
          *ll_backend__follow_code__STATE_VARIABLE_ProcInfo_25 = ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24;
#line 89 "follow_code.m"
          *ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_27 = ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_0_26;
#line 89 "follow_code.m"
        }
#line 88 "follow_code.m"
        break;
#line 88 "follow_code.m"
      case (MR_Integer) 1:
#line 71 "follow_code.m"
        {
#line 71 "follow_code.m"
          MR_Word ll_backend__follow_code__HeadVars_15;
#line 71 "follow_code.m"
          MR_Word ll_backend__follow_code__Goal2_17;
#line 71 "follow_code.m"
          MR_Word ll_backend__follow_code__Varset_18;
#line 71 "follow_code.m"
          MR_Word ll_backend__follow_code__VarTypes_19;
#line 71 "follow_code.m"
          MR_Word ll_backend__follow_code__RttiVarMaps_20;
#line 71 "follow_code.m"
          MR_Word ll_backend__follow_code__InstMap0_21;
#line 71 "follow_code.m"
          MR_Word ll_backend__follow_code__InstVarSet_22;
#line 71 "follow_code.m"
          MR_Word ll_backend__follow_code__Goal_23;
#line 71 "follow_code.m"
          MR_Word ll_backend__follow_code__STATE_VARIABLE_ProcInfo_32_32;
#line 71 "follow_code.m"
          MR_Word ll_backend__follow_code__STATE_VARIABLE_ProcInfo_33_33;
#line 71 "follow_code.m"
          MR_Word ll_backend__follow_code__STATE_VARIABLE_ProcInfo_34_34;
#line 75 "follow_code.m"
          MR_Word ll_backend__follow_code___Warnings_16;

#line 74 "follow_code.m"
          {
#line 74 "follow_code.m"
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, &ll_backend__follow_code__HeadVars_15);
          }
#line 75 "follow_code.m"
          {
#line 75 "follow_code.m"
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, ll_backend__follow_code__HeadVars_15, &ll_backend__follow_code___Warnings_16, ll_backend__follow_code__Goal1_13, &ll_backend__follow_code__Goal2_17, ll_backend__follow_code__Varset0_10, &ll_backend__follow_code__Varset_18, ll_backend__follow_code__VarTypes0_11, &ll_backend__follow_code__VarTypes_19, ll_backend__follow_code__RttiVarMaps0_12, &ll_backend__follow_code__RttiVarMaps_20);
          }
#line 80 "follow_code.m"
          {
#line 80 "follow_code.m"
            hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_0_26, &ll_backend__follow_code__InstMap0_21);
          }
#line 81 "follow_code.m"
          {
#line 81 "follow_code.m"
            hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, &ll_backend__follow_code__InstVarSet_22);
          }
#line 82 "follow_code.m"
          {
#line 82 "follow_code.m"
            check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, ll_backend__follow_code__Goal2_17, &ll_backend__follow_code__Goal_23, ll_backend__follow_code__VarTypes_19, ll_backend__follow_code__InstVarSet_22, ll_backend__follow_code__InstMap0_21, ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_0_26, ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_27);
          }
#line 84 "follow_code.m"
          {
#line 84 "follow_code.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__follow_code__Goal_23, ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, &ll_backend__follow_code__STATE_VARIABLE_ProcInfo_32_32);
          }
#line 85 "follow_code.m"
          {
#line 85 "follow_code.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(ll_backend__follow_code__Varset_18, ll_backend__follow_code__STATE_VARIABLE_ProcInfo_32_32, &ll_backend__follow_code__STATE_VARIABLE_ProcInfo_33_33);
          }
#line 86 "follow_code.m"
          {
#line 86 "follow_code.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ll_backend__follow_code__VarTypes_19, ll_backend__follow_code__STATE_VARIABLE_ProcInfo_33_33, &ll_backend__follow_code__STATE_VARIABLE_ProcInfo_34_34);
          }
#line 87 "follow_code.m"
          {
#line 87 "follow_code.m"
            hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(ll_backend__follow_code__RttiVarMaps_20, ll_backend__follow_code__STATE_VARIABLE_ProcInfo_34_34, ll_backend__follow_code__STATE_VARIABLE_ProcInfo_25);
#line 87 "follow_code.m"
            return;
          }
#line 71 "follow_code.m"
        }
#line 88 "follow_code.m"
        break;
#line 88 "follow_code.m"
    }
#line 64 "follow_code.m"
  }
#line 39 "follow_code.m"
}

#line 399 "follow_code.m"
static MR_bool MR_CALL 
ll_backend__follow_code__check_follow_code_detism_2_p_0(
#line 399 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1,
#line 399 "follow_code.m"
  MR_Word ll_backend__follow_code__Detism0_2)
#line 399 "follow_code.m"
{
#line 402 "follow_code.m"
  while (MR_TRUE)
#line 402 "follow_code.m"
    {
#line 402 "follow_code.m"
      /* tailcall optimized into a loop */
#line 402 "follow_code.m"
      {
#line 402 "follow_code.m"
        MR_bool ll_backend__follow_code__succeeded;

#line 402 "follow_code.m"
        if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 402 "follow_code.m"
          ll_backend__follow_code__succeeded = MR_TRUE;
#line 402 "follow_code.m"
        else
#line 403 "follow_code.m"
          {
#line 403 "follow_code.m"
            MR_Word ll_backend__follow_code__GoalInfo_5;
#line 403 "follow_code.m"
            MR_Word ll_backend__follow_code__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
#line 403 "follow_code.m"
            MR_Word ll_backend__follow_code__Detism1_8;
#line 403 "follow_code.m"
            MR_Word ll_backend__follow_code__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
#line 403 "follow_code.m"
            MR_Word ll_backend__follow_code__V_11_11;
#line 403 "follow_code.m"
            MR_Word ll_backend__follow_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__V_9_9, (MR_Integer) 0)));

#line 403 "follow_code.m"
            ll_backend__follow_code__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__V_9_9, (MR_Integer) 1)));
#line 404 "follow_code.m"
            {
#line 404 "follow_code.m"
              ll_backend__follow_code__Detism1_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__follow_code__GoalInfo_5);
            }
#line 405 "follow_code.m"
            {
#line 405 "follow_code.m"
              parse_tree__prog_data__det_conjunction_detism_3_p_0(ll_backend__follow_code__Detism0_2, ll_backend__follow_code__Detism1_8, &ll_backend__follow_code__V_11_11);
            }
#line 405 "follow_code.m"
            ll_backend__follow_code__succeeded = (ll_backend__follow_code__Detism0_2 == ll_backend__follow_code__V_11_11);
#line 403 "follow_code.m"
            if (ll_backend__follow_code__succeeded)
#line 406 "follow_code.m"
              {
#line 406 "follow_code.m"
                /* direct tailcall eliminated */
#line 406 "follow_code.m"
                {
#line 406 "follow_code.m"
                  MR_Word ll_backend__follow_code__HeadVar__1__tmp_copy_1 = ll_backend__follow_code__Goals_6;

#line 406 "follow_code.m"
                  ll_backend__follow_code__HeadVar__1_1 = ll_backend__follow_code__HeadVar__1__tmp_copy_1;
#line 406 "follow_code.m"
                }
#line 406 "follow_code.m"
                continue;
#line 406 "follow_code.m"
              }
#line 403 "follow_code.m"
          }
#line 402 "follow_code.m"
        return ll_backend__follow_code__succeeded;
#line 402 "follow_code.m"
      }
#line 402 "follow_code.m"
      break;
#line 402 "follow_code.m"
    }
#line 399 "follow_code.m"
}

#line 352 "follow_code.m"
static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_disj_4_p_0(
#line 352 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1,
#line 352 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__2_2,
#line 352 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__3_3,
#line 352 "follow_code.m"
  MR_Word * ll_backend__follow_code__HeadVar__4_4)
#line 352 "follow_code.m"
{
#line 355 "follow_code.m"
  {
#line 355 "follow_code.m"
    MR_bool ll_backend__follow_code__succeeded;

#line 355 "follow_code.m"
    if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 355 "follow_code.m"
      {
#line 355 "follow_code.m"
        *ll_backend__follow_code__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 355 "follow_code.m"
        ll_backend__follow_code__succeeded = MR_TRUE;
#line 355 "follow_code.m"
      }
#line 355 "follow_code.m"
    else
#line 357 "follow_code.m"
      {
#line 357 "follow_code.m"
        MR_Word ll_backend__follow_code__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
#line 357 "follow_code.m"
        MR_Word ll_backend__follow_code__Goals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
#line 357 "follow_code.m"
        MR_Word ll_backend__follow_code__Goal_11;
#line 357 "follow_code.m"
        MR_Word ll_backend__follow_code__Goals_12;
#line 357 "follow_code.m"
        MR_Word ll_backend__follow_code__GoalExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_7, (MR_Integer) 0)));
#line 357 "follow_code.m"
        MR_Word ll_backend__follow_code__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_7, (MR_Integer) 1)));
#line 357 "follow_code.m"
        MR_Word ll_backend__follow_code__Detism0_19;
#line 357 "follow_code.m"
        MR_Word ll_backend__follow_code__MaxSolns0_21;
#line 375 "follow_code.m"
        MR_Word ll_backend__follow_code___CanFail0_20;

#line 374 "follow_code.m"
        {
#line 374 "follow_code.m"
          ll_backend__follow_code__Detism0_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__follow_code__GoalInfo0_18);
        }
#line 375 "follow_code.m"
        {
#line 375 "follow_code.m"
          parse_tree__prog_data__determinism_components_3_p_0(ll_backend__follow_code__Detism0_19, &ll_backend__follow_code___CanFail0_20, &ll_backend__follow_code__MaxSolns0_21);
        }
#line 379 "follow_code.m"
#line 379 "follow_code.m"
        switch (ll_backend__follow_code__MaxSolns0_21) {
#line 379 "follow_code.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 379 "follow_code.m"
          case (MR_Integer) 3:
#line 379 "follow_code.m"
          case (MR_Integer) 2:
#line 379 "follow_code.m"
          case (MR_Integer) 1:
#line 383 "follow_code.m"
            {
#line 383 "follow_code.m"
              MR_Word ll_backend__follow_code__GoalExpr_23;
#line 383 "follow_code.m"
              MR_Word ll_backend__follow_code__OldPurity_24;
#line 383 "follow_code.m"
              MR_Word ll_backend__follow_code__NewPurity_25;
#line 383 "follow_code.m"
              MR_Word ll_backend__follow_code__GoalInfo_26;
#line 387 "follow_code.m"
              MR_Word ll_backend__follow_code__Conjuncts0_22;
#line 385 "follow_code.m"
              MR_Word ll_backend__follow_code__V_27_27;

#line 384 "follow_code.m"
              {
#line 384 "follow_code.m"
                ll_backend__follow_code__succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(ll_backend__follow_code__HeadVar__2_2, ll_backend__follow_code__Detism0_19);
              }
#line 383 "follow_code.m"
              if (ll_backend__follow_code__succeeded)
#line 383 "follow_code.m"
                {
#line 385 "follow_code.m"
                  ll_backend__follow_code__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_code__GoalExpr0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 385 "follow_code.m"
                  if (ll_backend__follow_code__succeeded)
#line 385 "follow_code.m"
                    {
#line 385 "follow_code.m"
                      ll_backend__follow_code__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_17, (MR_Integer) 1)));
#line 385 "follow_code.m"
                      ll_backend__follow_code__Conjuncts0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_17, (MR_Integer) 2)));
#line 385 "follow_code.m"
                      ll_backend__follow_code__succeeded = (ll_backend__follow_code__V_27_27 == (MR_Integer) 0);
#line 385 "follow_code.m"
                    }
#line 387 "follow_code.m"
                  if (ll_backend__follow_code__succeeded)
#line 386 "follow_code.m"
                    {
#line 386 "follow_code.m"
                      MR_Word ll_backend__follow_code__V_29_29;

#line 386 "follow_code.m"
                      {
#line 386 "follow_code.m"
                        ll_backend__follow_code__V_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__follow_code__Conjuncts0_22, ll_backend__follow_code__HeadVar__2_2);
                      }
#line 386 "follow_code.m"
                      {
#line 386 "follow_code.m"
                        ll_backend__follow_code__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 386 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 386 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_23, 1) = ((MR_Box) ((MR_Integer) 0));
#line 386 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_23, 2) = ((MR_Box) (ll_backend__follow_code__V_29_29));
#line 386 "follow_code.m"
                      }
#line 386 "follow_code.m"
                    }
#line 387 "follow_code.m"
                  else
#line 388 "follow_code.m"
                    {
#line 388 "follow_code.m"
                      MR_Word ll_backend__follow_code__V_31_31;

#line 388 "follow_code.m"
                      {
#line 388 "follow_code.m"
                        ll_backend__follow_code__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "follow_code.m"
                        MR_hl_field(MR_mktag(1), ll_backend__follow_code__V_31_31, 0) = ((MR_Box) (ll_backend__follow_code__Goal0_7));
#line 388 "follow_code.m"
                        MR_hl_field(MR_mktag(1), ll_backend__follow_code__V_31_31, 1) = ((MR_Box) (ll_backend__follow_code__HeadVar__2_2));
#line 388 "follow_code.m"
                      }
#line 388 "follow_code.m"
                      {
#line 388 "follow_code.m"
                        ll_backend__follow_code__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 388 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 388 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_23, 1) = ((MR_Box) ((MR_Integer) 0));
#line 388 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_23, 2) = ((MR_Box) (ll_backend__follow_code__V_31_31));
#line 388 "follow_code.m"
                      }
#line 388 "follow_code.m"
                    }
#line 390 "follow_code.m"
                  {
#line 390 "follow_code.m"
                    ll_backend__follow_code__OldPurity_24 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ll_backend__follow_code__GoalInfo0_18);
                  }
#line 391 "follow_code.m"
                  {
#line 391 "follow_code.m"
                    ll_backend__follow_code__NewPurity_25 = parse_tree__prog_data__worst_purity_2_f_0(ll_backend__follow_code__OldPurity_24, ll_backend__follow_code__HeadVar__3_3);
                  }
#line 392 "follow_code.m"
                  {
#line 392 "follow_code.m"
                    hlds__hlds_goal__goal_info_set_purity_3_p_0(ll_backend__follow_code__NewPurity_25, ll_backend__follow_code__GoalInfo0_18, &ll_backend__follow_code__GoalInfo_26);
                  }
#line 393 "follow_code.m"
                  {
#line 393 "follow_code.m"
                    ll_backend__follow_code__Goal_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "follow_code.m"
                    MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_11, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_23));
#line 393 "follow_code.m"
                    MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_11, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_26));
#line 393 "follow_code.m"
                  }
#line 393 "follow_code.m"
                  ll_backend__follow_code__succeeded = MR_TRUE;
#line 383 "follow_code.m"
                }
#line 383 "follow_code.m"
            }
#line 379 "follow_code.m"
            break;
#line 379 "follow_code.m"
          case (MR_Integer) 0:
#line 378 "follow_code.m"
            {
#line 378 "follow_code.m"
              ll_backend__follow_code__Goal_11 = ll_backend__follow_code__Goal0_7;
#line 378 "follow_code.m"
              ll_backend__follow_code__succeeded = MR_TRUE;
#line 378 "follow_code.m"
            }
#line 379 "follow_code.m"
            break;
#line 379 "follow_code.m"
        }
#line 357 "follow_code.m"
        if (ll_backend__follow_code__succeeded)
#line 357 "follow_code.m"
          {
#line 360 "follow_code.m"
            {
#line 360 "follow_code.m"
              ll_backend__follow_code__succeeded = ll_backend__follow_code__move_follow_code_move_goals_disj_4_p_0(ll_backend__follow_code__Goals0_8, ll_backend__follow_code__HeadVar__2_2, ll_backend__follow_code__HeadVar__3_3, &ll_backend__follow_code__Goals_12);
            }
#line 357 "follow_code.m"
            if (ll_backend__follow_code__succeeded)
#line 357 "follow_code.m"
              {
#line 357 "follow_code.m"
                {
#line 357 "follow_code.m"
                  MR_Word base;
#line 357 "follow_code.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "follow_code.m"
                  *ll_backend__follow_code__HeadVar__4_4 = base;
#line 357 "follow_code.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_code__Goal_11));
#line 357 "follow_code.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_code__Goals_12));
#line 357 "follow_code.m"
                }
#line 357 "follow_code.m"
                ll_backend__follow_code__succeeded = MR_TRUE;
#line 357 "follow_code.m"
              }
#line 357 "follow_code.m"
          }
#line 357 "follow_code.m"
      }
#line 355 "follow_code.m"
    return ll_backend__follow_code__succeeded;
#line 355 "follow_code.m"
  }
#line 352 "follow_code.m"
}

#line 337 "follow_code.m"
static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(
#line 337 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1,
#line 337 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__2_2,
#line 337 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__3_3,
#line 337 "follow_code.m"
  MR_Word * ll_backend__follow_code__HeadVar__4_4)
#line 337 "follow_code.m"
{
#line 340 "follow_code.m"
  {
#line 340 "follow_code.m"
    MR_bool ll_backend__follow_code__succeeded;

#line 340 "follow_code.m"
    if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "follow_code.m"
      {
#line 340 "follow_code.m"
        *ll_backend__follow_code__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 340 "follow_code.m"
        ll_backend__follow_code__succeeded = MR_TRUE;
#line 340 "follow_code.m"
      }
#line 340 "follow_code.m"
    else
#line 342 "follow_code.m"
      {
#line 342 "follow_code.m"
        MR_Word ll_backend__follow_code__Case0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
#line 342 "follow_code.m"
        MR_Word ll_backend__follow_code__Cases0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
#line 342 "follow_code.m"
        MR_Word ll_backend__follow_code__Case_11;
#line 342 "follow_code.m"
        MR_Word ll_backend__follow_code__Cases_12;
#line 342 "follow_code.m"
        MR_Word ll_backend__follow_code__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case0_7, (MR_Integer) 0)));
#line 342 "follow_code.m"
        MR_Word ll_backend__follow_code__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case0_7, (MR_Integer) 1)));
#line 342 "follow_code.m"
        MR_Word ll_backend__follow_code__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case0_7, (MR_Integer) 2)));
#line 342 "follow_code.m"
        MR_Word ll_backend__follow_code__Goal_16;
#line 342 "follow_code.m"
        MR_Word ll_backend__follow_code__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_15, (MR_Integer) 0)));
#line 342 "follow_code.m"
        MR_Word ll_backend__follow_code__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_15, (MR_Integer) 1)));
#line 342 "follow_code.m"
        MR_Word ll_backend__follow_code__Detism0_23;
#line 342 "follow_code.m"
        MR_Word ll_backend__follow_code__MaxSolns0_25;
#line 375 "follow_code.m"
        MR_Word ll_backend__follow_code___CanFail0_24;

#line 374 "follow_code.m"
        {
#line 374 "follow_code.m"
          ll_backend__follow_code__Detism0_23 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__follow_code__GoalInfo0_22);
        }
#line 375 "follow_code.m"
        {
#line 375 "follow_code.m"
          parse_tree__prog_data__determinism_components_3_p_0(ll_backend__follow_code__Detism0_23, &ll_backend__follow_code___CanFail0_24, &ll_backend__follow_code__MaxSolns0_25);
        }
#line 379 "follow_code.m"
#line 379 "follow_code.m"
        switch (ll_backend__follow_code__MaxSolns0_25) {
#line 379 "follow_code.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 379 "follow_code.m"
          case (MR_Integer) 3:
#line 379 "follow_code.m"
          case (MR_Integer) 2:
#line 379 "follow_code.m"
          case (MR_Integer) 1:
#line 383 "follow_code.m"
            {
#line 383 "follow_code.m"
              MR_Word ll_backend__follow_code__GoalExpr_27;
#line 383 "follow_code.m"
              MR_Word ll_backend__follow_code__OldPurity_28;
#line 383 "follow_code.m"
              MR_Word ll_backend__follow_code__NewPurity_29;
#line 383 "follow_code.m"
              MR_Word ll_backend__follow_code__GoalInfo_30;
#line 387 "follow_code.m"
              MR_Word ll_backend__follow_code__Conjuncts0_26;
#line 385 "follow_code.m"
              MR_Word ll_backend__follow_code__V_31_31;

#line 384 "follow_code.m"
              {
#line 384 "follow_code.m"
                ll_backend__follow_code__succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(ll_backend__follow_code__HeadVar__2_2, ll_backend__follow_code__Detism0_23);
              }
#line 383 "follow_code.m"
              if (ll_backend__follow_code__succeeded)
#line 383 "follow_code.m"
                {
#line 385 "follow_code.m"
                  ll_backend__follow_code__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_code__GoalExpr0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 385 "follow_code.m"
                  if (ll_backend__follow_code__succeeded)
#line 385 "follow_code.m"
                    {
#line 385 "follow_code.m"
                      ll_backend__follow_code__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_21, (MR_Integer) 1)));
#line 385 "follow_code.m"
                      ll_backend__follow_code__Conjuncts0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_21, (MR_Integer) 2)));
#line 385 "follow_code.m"
                      ll_backend__follow_code__succeeded = (ll_backend__follow_code__V_31_31 == (MR_Integer) 0);
#line 385 "follow_code.m"
                    }
#line 387 "follow_code.m"
                  if (ll_backend__follow_code__succeeded)
#line 386 "follow_code.m"
                    {
#line 386 "follow_code.m"
                      MR_Word ll_backend__follow_code__V_33_33;

#line 386 "follow_code.m"
                      {
#line 386 "follow_code.m"
                        ll_backend__follow_code__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__follow_code__Conjuncts0_26, ll_backend__follow_code__HeadVar__2_2);
                      }
#line 386 "follow_code.m"
                      {
#line 386 "follow_code.m"
                        ll_backend__follow_code__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 386 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 386 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 386 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_27, 2) = ((MR_Box) (ll_backend__follow_code__V_33_33));
#line 386 "follow_code.m"
                      }
#line 386 "follow_code.m"
                    }
#line 387 "follow_code.m"
                  else
#line 388 "follow_code.m"
                    {
#line 388 "follow_code.m"
                      MR_Word ll_backend__follow_code__V_35_35;

#line 388 "follow_code.m"
                      {
#line 388 "follow_code.m"
                        ll_backend__follow_code__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "follow_code.m"
                        MR_hl_field(MR_mktag(1), ll_backend__follow_code__V_35_35, 0) = ((MR_Box) (ll_backend__follow_code__Goal0_15));
#line 388 "follow_code.m"
                        MR_hl_field(MR_mktag(1), ll_backend__follow_code__V_35_35, 1) = ((MR_Box) (ll_backend__follow_code__HeadVar__2_2));
#line 388 "follow_code.m"
                      }
#line 388 "follow_code.m"
                      {
#line 388 "follow_code.m"
                        ll_backend__follow_code__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 388 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 388 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 388 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_27, 2) = ((MR_Box) (ll_backend__follow_code__V_35_35));
#line 388 "follow_code.m"
                      }
#line 388 "follow_code.m"
                    }
#line 390 "follow_code.m"
                  {
#line 390 "follow_code.m"
                    ll_backend__follow_code__OldPurity_28 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ll_backend__follow_code__GoalInfo0_22);
                  }
#line 391 "follow_code.m"
                  {
#line 391 "follow_code.m"
                    ll_backend__follow_code__NewPurity_29 = parse_tree__prog_data__worst_purity_2_f_0(ll_backend__follow_code__OldPurity_28, ll_backend__follow_code__HeadVar__3_3);
                  }
#line 392 "follow_code.m"
                  {
#line 392 "follow_code.m"
                    hlds__hlds_goal__goal_info_set_purity_3_p_0(ll_backend__follow_code__NewPurity_29, ll_backend__follow_code__GoalInfo0_22, &ll_backend__follow_code__GoalInfo_30);
                  }
#line 393 "follow_code.m"
                  {
#line 393 "follow_code.m"
                    ll_backend__follow_code__Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "follow_code.m"
                    MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_16, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_27));
#line 393 "follow_code.m"
                    MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_16, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_30));
#line 393 "follow_code.m"
                  }
#line 393 "follow_code.m"
                  ll_backend__follow_code__succeeded = MR_TRUE;
#line 383 "follow_code.m"
                }
#line 383 "follow_code.m"
            }
#line 379 "follow_code.m"
            break;
#line 379 "follow_code.m"
          case (MR_Integer) 0:
#line 378 "follow_code.m"
            {
#line 378 "follow_code.m"
              ll_backend__follow_code__Goal_16 = ll_backend__follow_code__Goal0_15;
#line 378 "follow_code.m"
              ll_backend__follow_code__succeeded = MR_TRUE;
#line 378 "follow_code.m"
            }
#line 379 "follow_code.m"
            break;
#line 379 "follow_code.m"
        }
#line 342 "follow_code.m"
        if (ll_backend__follow_code__succeeded)
#line 342 "follow_code.m"
          {
#line 346 "follow_code.m"
            {
#line 346 "follow_code.m"
              ll_backend__follow_code__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 346 "follow_code.m"
              MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case_11, 0) = ((MR_Box) (ll_backend__follow_code__MainConsId_13));
#line 346 "follow_code.m"
              MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case_11, 1) = ((MR_Box) (ll_backend__follow_code__OtherConsIds_14));
#line 346 "follow_code.m"
              MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case_11, 2) = ((MR_Box) (ll_backend__follow_code__Goal_16));
#line 346 "follow_code.m"
            }
#line 347 "follow_code.m"
            {
#line 347 "follow_code.m"
              ll_backend__follow_code__succeeded = ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(ll_backend__follow_code__Cases0_8, ll_backend__follow_code__HeadVar__2_2, ll_backend__follow_code__HeadVar__3_3, &ll_backend__follow_code__Cases_12);
            }
#line 342 "follow_code.m"
            if (ll_backend__follow_code__succeeded)
#line 342 "follow_code.m"
              {
#line 342 "follow_code.m"
                {
#line 342 "follow_code.m"
                  MR_Word base;
#line 342 "follow_code.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "follow_code.m"
                  *ll_backend__follow_code__HeadVar__4_4 = base;
#line 342 "follow_code.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_code__Case_11));
#line 342 "follow_code.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_code__Cases_12));
#line 342 "follow_code.m"
                }
#line 342 "follow_code.m"
                ll_backend__follow_code__succeeded = MR_TRUE;
#line 342 "follow_code.m"
              }
#line 342 "follow_code.m"
          }
#line 342 "follow_code.m"
      }
#line 340 "follow_code.m"
    return ll_backend__follow_code__succeeded;
#line 340 "follow_code.m"
  }
#line 337 "follow_code.m"
}

#line 307 "follow_code.m"
static MR_bool MR_CALL 
ll_backend__follow_code__move_follow_code_move_goals_4_p_0(
#line 307 "follow_code.m"
  MR_Word ll_backend__follow_code__Goal0_5,
#line 307 "follow_code.m"
  MR_Word ll_backend__follow_code__FollowGoals_6,
#line 307 "follow_code.m"
  MR_Word ll_backend__follow_code__FollowPurity_7,
#line 307 "follow_code.m"
  MR_Word * ll_backend__follow_code__Goal_8)
#line 307 "follow_code.m"
{
#line 310 "follow_code.m"
  {
#line 310 "follow_code.m"
    MR_bool ll_backend__follow_code__succeeded;
#line 310 "follow_code.m"
    MR_Word ll_backend__follow_code__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_5, (MR_Integer) 0)));
#line 310 "follow_code.m"
    MR_Word ll_backend__follow_code__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_5, (MR_Integer) 1)));
#line 310 "follow_code.m"
    MR_Word ll_backend__follow_code__GoalExpr_15;
#line 310 "follow_code.m"
    MR_Word ll_backend__follow_code__OldPurity_24;
#line 310 "follow_code.m"
    MR_Word ll_backend__follow_code__NewPurity_25;
#line 310 "follow_code.m"
    MR_Word ll_backend__follow_code__GoalInfo_26;

#line 317 "follow_code.m"
#line 317 "follow_code.m"
    switch (MR_tag((MR_Word) ll_backend__follow_code__GoalExpr0_9)) {
#line 317 "follow_code.m"
      default:
#line 317 "follow_code.m"
        ll_backend__follow_code__succeeded = MR_FALSE;
#line 317 "follow_code.m"
        break;
#line 317 "follow_code.m"
      case (MR_Integer) 3:
#line 317 "follow_code.m"
#line 317 "follow_code.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 0)))) {
#line 317 "follow_code.m"
          default:
#line 317 "follow_code.m"
            ll_backend__follow_code__succeeded = MR_FALSE;
#line 317 "follow_code.m"
            break;
#line 317 "follow_code.m"
          case (MR_Integer) 3:
#line 318 "follow_code.m"
            {
#line 318 "follow_code.m"
              MR_Word ll_backend__follow_code__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 1)));
#line 318 "follow_code.m"
              MR_Word ll_backend__follow_code__Goals_17;

#line 319 "follow_code.m"
              {
#line 319 "follow_code.m"
                ll_backend__follow_code__succeeded = ll_backend__follow_code__move_follow_code_move_goals_disj_4_p_0(ll_backend__follow_code__Goals0_16, ll_backend__follow_code__FollowGoals_6, ll_backend__follow_code__FollowPurity_7, &ll_backend__follow_code__Goals_17);
              }
#line 318 "follow_code.m"
              if (ll_backend__follow_code__succeeded)
#line 318 "follow_code.m"
                {
#line 321 "follow_code.m"
                  {
#line 321 "follow_code.m"
                    ll_backend__follow_code__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "follow_code.m"
                    MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 321 "follow_code.m"
                    MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 1) = ((MR_Box) (ll_backend__follow_code__Goals_17));
#line 321 "follow_code.m"
                  }
#line 321 "follow_code.m"
                  ll_backend__follow_code__succeeded = MR_TRUE;
#line 318 "follow_code.m"
                }
#line 318 "follow_code.m"
            }
#line 317 "follow_code.m"
            break;
#line 317 "follow_code.m"
          case (MR_Integer) 4:
#line 313 "follow_code.m"
            {
#line 313 "follow_code.m"
              MR_Word ll_backend__follow_code__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 1)));
#line 313 "follow_code.m"
              MR_Word ll_backend__follow_code__Det_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 2)));
#line 313 "follow_code.m"
              MR_Word ll_backend__follow_code__Cases0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 3)));
#line 313 "follow_code.m"
              MR_Word ll_backend__follow_code__Cases_14;

#line 314 "follow_code.m"
              {
#line 314 "follow_code.m"
                ll_backend__follow_code__succeeded = ll_backend__follow_code__move_follow_code_move_goals_cases_4_p_0(ll_backend__follow_code__Cases0_13, ll_backend__follow_code__FollowGoals_6, ll_backend__follow_code__FollowPurity_7, &ll_backend__follow_code__Cases_14);
              }
#line 313 "follow_code.m"
              if (ll_backend__follow_code__succeeded)
#line 313 "follow_code.m"
                {
#line 316 "follow_code.m"
                  {
#line 316 "follow_code.m"
                    ll_backend__follow_code__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 316 "follow_code.m"
                    MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 316 "follow_code.m"
                    MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 1) = ((MR_Box) (ll_backend__follow_code__Var_11));
#line 316 "follow_code.m"
                    MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 2) = ((MR_Box) (ll_backend__follow_code__Det_12));
#line 316 "follow_code.m"
                    MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 3) = ((MR_Box) (ll_backend__follow_code__Cases_14));
#line 316 "follow_code.m"
                  }
#line 316 "follow_code.m"
                  ll_backend__follow_code__succeeded = MR_TRUE;
#line 313 "follow_code.m"
                }
#line 313 "follow_code.m"
            }
#line 317 "follow_code.m"
            break;
#line 317 "follow_code.m"
          case (MR_Integer) 6:
#line 323 "follow_code.m"
            {
#line 323 "follow_code.m"
              MR_Word ll_backend__follow_code__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 1)));
#line 323 "follow_code.m"
              MR_Word ll_backend__follow_code__Cond_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 2)));
#line 323 "follow_code.m"
              MR_Word ll_backend__follow_code__Then0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 3)));
#line 323 "follow_code.m"
              MR_Word ll_backend__follow_code__Else0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_9, (MR_Integer) 4)));
#line 323 "follow_code.m"
              MR_Word ll_backend__follow_code__Then_22;
#line 323 "follow_code.m"
              MR_Word ll_backend__follow_code__Else_23;
#line 323 "follow_code.m"
              MR_Word ll_backend__follow_code__GoalExpr0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Then0_20, (MR_Integer) 0)));
#line 323 "follow_code.m"
              MR_Word ll_backend__follow_code__GoalInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Then0_20, (MR_Integer) 1)));
#line 323 "follow_code.m"
              MR_Word ll_backend__follow_code__Detism0_33;
#line 323 "follow_code.m"
              MR_Word ll_backend__follow_code__MaxSolns0_35;
#line 323 "follow_code.m"
              MR_Word ll_backend__follow_code__GoalExpr0_51;
#line 323 "follow_code.m"
              MR_Word ll_backend__follow_code__GoalInfo0_52;
#line 323 "follow_code.m"
              MR_Word ll_backend__follow_code__Detism0_53;
#line 323 "follow_code.m"
              MR_Word ll_backend__follow_code__MaxSolns0_55;
#line 375 "follow_code.m"
              MR_Word ll_backend__follow_code___CanFail0_34;
#line 375 "follow_code.m"
              MR_Word ll_backend__follow_code___CanFail0_54;

#line 374 "follow_code.m"
              {
#line 374 "follow_code.m"
                ll_backend__follow_code__Detism0_33 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__follow_code__GoalInfo0_32);
              }
#line 375 "follow_code.m"
              {
#line 375 "follow_code.m"
                parse_tree__prog_data__determinism_components_3_p_0(ll_backend__follow_code__Detism0_33, &ll_backend__follow_code___CanFail0_34, &ll_backend__follow_code__MaxSolns0_35);
              }
#line 379 "follow_code.m"
#line 379 "follow_code.m"
              switch (ll_backend__follow_code__MaxSolns0_35) {
#line 379 "follow_code.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 379 "follow_code.m"
                case (MR_Integer) 3:
#line 379 "follow_code.m"
                case (MR_Integer) 2:
#line 379 "follow_code.m"
                case (MR_Integer) 1:
#line 383 "follow_code.m"
                  {
#line 383 "follow_code.m"
                    MR_Word ll_backend__follow_code__GoalExpr_37;
#line 383 "follow_code.m"
                    MR_Word ll_backend__follow_code__OldPurity_38;
#line 383 "follow_code.m"
                    MR_Word ll_backend__follow_code__NewPurity_39;
#line 383 "follow_code.m"
                    MR_Word ll_backend__follow_code__GoalInfo_40;
#line 387 "follow_code.m"
                    MR_Word ll_backend__follow_code__Conjuncts0_36;
#line 385 "follow_code.m"
                    MR_Word ll_backend__follow_code__V_41_41;

#line 384 "follow_code.m"
                    {
#line 384 "follow_code.m"
                      ll_backend__follow_code__succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(ll_backend__follow_code__FollowGoals_6, ll_backend__follow_code__Detism0_33);
                    }
#line 383 "follow_code.m"
                    if (ll_backend__follow_code__succeeded)
#line 383 "follow_code.m"
                      {
#line 385 "follow_code.m"
                        ll_backend__follow_code__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_code__GoalExpr0_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_31, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 385 "follow_code.m"
                        if (ll_backend__follow_code__succeeded)
#line 385 "follow_code.m"
                          {
#line 385 "follow_code.m"
                            ll_backend__follow_code__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_31, (MR_Integer) 1)));
#line 385 "follow_code.m"
                            ll_backend__follow_code__Conjuncts0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_31, (MR_Integer) 2)));
#line 385 "follow_code.m"
                            ll_backend__follow_code__succeeded = (ll_backend__follow_code__V_41_41 == (MR_Integer) 0);
#line 385 "follow_code.m"
                          }
#line 387 "follow_code.m"
                        if (ll_backend__follow_code__succeeded)
#line 386 "follow_code.m"
                          {
#line 386 "follow_code.m"
                            MR_Word ll_backend__follow_code__V_43_43;

#line 386 "follow_code.m"
                            {
#line 386 "follow_code.m"
                              ll_backend__follow_code__V_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__follow_code__Conjuncts0_36, ll_backend__follow_code__FollowGoals_6);
                            }
#line 386 "follow_code.m"
                            {
#line 386 "follow_code.m"
                              ll_backend__follow_code__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 386 "follow_code.m"
                              MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 386 "follow_code.m"
                              MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_37, 1) = ((MR_Box) ((MR_Integer) 0));
#line 386 "follow_code.m"
                              MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_37, 2) = ((MR_Box) (ll_backend__follow_code__V_43_43));
#line 386 "follow_code.m"
                            }
#line 386 "follow_code.m"
                          }
#line 387 "follow_code.m"
                        else
#line 388 "follow_code.m"
                          {
#line 388 "follow_code.m"
                            MR_Word ll_backend__follow_code__V_45_45;

#line 388 "follow_code.m"
                            {
#line 388 "follow_code.m"
                              ll_backend__follow_code__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "follow_code.m"
                              MR_hl_field(MR_mktag(1), ll_backend__follow_code__V_45_45, 0) = ((MR_Box) (ll_backend__follow_code__Then0_20));
#line 388 "follow_code.m"
                              MR_hl_field(MR_mktag(1), ll_backend__follow_code__V_45_45, 1) = ((MR_Box) (ll_backend__follow_code__FollowGoals_6));
#line 388 "follow_code.m"
                            }
#line 388 "follow_code.m"
                            {
#line 388 "follow_code.m"
                              ll_backend__follow_code__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 388 "follow_code.m"
                              MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 388 "follow_code.m"
                              MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_37, 1) = ((MR_Box) ((MR_Integer) 0));
#line 388 "follow_code.m"
                              MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_37, 2) = ((MR_Box) (ll_backend__follow_code__V_45_45));
#line 388 "follow_code.m"
                            }
#line 388 "follow_code.m"
                          }
#line 390 "follow_code.m"
                        {
#line 390 "follow_code.m"
                          ll_backend__follow_code__OldPurity_38 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ll_backend__follow_code__GoalInfo0_32);
                        }
#line 391 "follow_code.m"
                        {
#line 391 "follow_code.m"
                          ll_backend__follow_code__NewPurity_39 = parse_tree__prog_data__worst_purity_2_f_0(ll_backend__follow_code__OldPurity_38, ll_backend__follow_code__FollowPurity_7);
                        }
#line 392 "follow_code.m"
                        {
#line 392 "follow_code.m"
                          hlds__hlds_goal__goal_info_set_purity_3_p_0(ll_backend__follow_code__NewPurity_39, ll_backend__follow_code__GoalInfo0_32, &ll_backend__follow_code__GoalInfo_40);
                        }
#line 393 "follow_code.m"
                        {
#line 393 "follow_code.m"
                          ll_backend__follow_code__Then_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "follow_code.m"
                          MR_hl_field(MR_mktag(0), ll_backend__follow_code__Then_22, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_37));
#line 393 "follow_code.m"
                          MR_hl_field(MR_mktag(0), ll_backend__follow_code__Then_22, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_40));
#line 393 "follow_code.m"
                        }
#line 393 "follow_code.m"
                        ll_backend__follow_code__succeeded = MR_TRUE;
#line 383 "follow_code.m"
                      }
#line 383 "follow_code.m"
                  }
#line 379 "follow_code.m"
                  break;
#line 379 "follow_code.m"
                case (MR_Integer) 0:
#line 378 "follow_code.m"
                  {
#line 378 "follow_code.m"
                    ll_backend__follow_code__Then_22 = ll_backend__follow_code__Then0_20;
#line 378 "follow_code.m"
                    ll_backend__follow_code__succeeded = MR_TRUE;
#line 378 "follow_code.m"
                  }
#line 379 "follow_code.m"
                  break;
#line 379 "follow_code.m"
              }
#line 323 "follow_code.m"
              if (ll_backend__follow_code__succeeded)
#line 323 "follow_code.m"
                {
#line 373 "follow_code.m"
                  ll_backend__follow_code__GoalExpr0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Else0_21, (MR_Integer) 0)));
#line 373 "follow_code.m"
                  ll_backend__follow_code__GoalInfo0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Else0_21, (MR_Integer) 1)));
#line 374 "follow_code.m"
                  {
#line 374 "follow_code.m"
                    ll_backend__follow_code__Detism0_53 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__follow_code__GoalInfo0_52);
                  }
#line 375 "follow_code.m"
                  {
#line 375 "follow_code.m"
                    parse_tree__prog_data__determinism_components_3_p_0(ll_backend__follow_code__Detism0_53, &ll_backend__follow_code___CanFail0_54, &ll_backend__follow_code__MaxSolns0_55);
                  }
#line 379 "follow_code.m"
#line 379 "follow_code.m"
                  switch (ll_backend__follow_code__MaxSolns0_55) {
#line 379 "follow_code.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 379 "follow_code.m"
                    case (MR_Integer) 3:
#line 379 "follow_code.m"
                    case (MR_Integer) 2:
#line 379 "follow_code.m"
                    case (MR_Integer) 1:
#line 383 "follow_code.m"
                      {
#line 383 "follow_code.m"
                        MR_Word ll_backend__follow_code__GoalExpr_57;
#line 383 "follow_code.m"
                        MR_Word ll_backend__follow_code__OldPurity_58;
#line 383 "follow_code.m"
                        MR_Word ll_backend__follow_code__NewPurity_59;
#line 383 "follow_code.m"
                        MR_Word ll_backend__follow_code__GoalInfo_60;
#line 387 "follow_code.m"
                        MR_Word ll_backend__follow_code__Conjuncts0_56;
#line 385 "follow_code.m"
                        MR_Word ll_backend__follow_code__V_61_61;

#line 384 "follow_code.m"
                        {
#line 384 "follow_code.m"
                          ll_backend__follow_code__succeeded = ll_backend__follow_code__check_follow_code_detism_2_p_0(ll_backend__follow_code__FollowGoals_6, ll_backend__follow_code__Detism0_53);
                        }
#line 383 "follow_code.m"
                        if (ll_backend__follow_code__succeeded)
#line 383 "follow_code.m"
                          {
#line 385 "follow_code.m"
                            ll_backend__follow_code__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_code__GoalExpr0_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_51, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 385 "follow_code.m"
                            if (ll_backend__follow_code__succeeded)
#line 385 "follow_code.m"
                              {
#line 385 "follow_code.m"
                                ll_backend__follow_code__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_51, (MR_Integer) 1)));
#line 385 "follow_code.m"
                                ll_backend__follow_code__Conjuncts0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_51, (MR_Integer) 2)));
#line 385 "follow_code.m"
                                ll_backend__follow_code__succeeded = (ll_backend__follow_code__V_61_61 == (MR_Integer) 0);
#line 385 "follow_code.m"
                              }
#line 387 "follow_code.m"
                            if (ll_backend__follow_code__succeeded)
#line 386 "follow_code.m"
                              {
#line 386 "follow_code.m"
                                MR_Word ll_backend__follow_code__V_63_63;

#line 386 "follow_code.m"
                                {
#line 386 "follow_code.m"
                                  ll_backend__follow_code__V_63_63 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__follow_code__Conjuncts0_56, ll_backend__follow_code__FollowGoals_6);
                                }
#line 386 "follow_code.m"
                                {
#line 386 "follow_code.m"
                                  ll_backend__follow_code__GoalExpr_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 386 "follow_code.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 386 "follow_code.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_57, 1) = ((MR_Box) ((MR_Integer) 0));
#line 386 "follow_code.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_57, 2) = ((MR_Box) (ll_backend__follow_code__V_63_63));
#line 386 "follow_code.m"
                                }
#line 386 "follow_code.m"
                              }
#line 387 "follow_code.m"
                            else
#line 388 "follow_code.m"
                              {
#line 388 "follow_code.m"
                                MR_Word ll_backend__follow_code__V_65_65;

#line 388 "follow_code.m"
                                {
#line 388 "follow_code.m"
                                  ll_backend__follow_code__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "follow_code.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__follow_code__V_65_65, 0) = ((MR_Box) (ll_backend__follow_code__Else0_21));
#line 388 "follow_code.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__follow_code__V_65_65, 1) = ((MR_Box) (ll_backend__follow_code__FollowGoals_6));
#line 388 "follow_code.m"
                                }
#line 388 "follow_code.m"
                                {
#line 388 "follow_code.m"
                                  ll_backend__follow_code__GoalExpr_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 388 "follow_code.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 388 "follow_code.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_57, 1) = ((MR_Box) ((MR_Integer) 0));
#line 388 "follow_code.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_57, 2) = ((MR_Box) (ll_backend__follow_code__V_65_65));
#line 388 "follow_code.m"
                                }
#line 388 "follow_code.m"
                              }
#line 390 "follow_code.m"
                            {
#line 390 "follow_code.m"
                              ll_backend__follow_code__OldPurity_58 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ll_backend__follow_code__GoalInfo0_52);
                            }
#line 391 "follow_code.m"
                            {
#line 391 "follow_code.m"
                              ll_backend__follow_code__NewPurity_59 = parse_tree__prog_data__worst_purity_2_f_0(ll_backend__follow_code__OldPurity_58, ll_backend__follow_code__FollowPurity_7);
                            }
#line 392 "follow_code.m"
                            {
#line 392 "follow_code.m"
                              hlds__hlds_goal__goal_info_set_purity_3_p_0(ll_backend__follow_code__NewPurity_59, ll_backend__follow_code__GoalInfo0_52, &ll_backend__follow_code__GoalInfo_60);
                            }
#line 393 "follow_code.m"
                            {
#line 393 "follow_code.m"
                              ll_backend__follow_code__Else_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "follow_code.m"
                              MR_hl_field(MR_mktag(0), ll_backend__follow_code__Else_23, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_57));
#line 393 "follow_code.m"
                              MR_hl_field(MR_mktag(0), ll_backend__follow_code__Else_23, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_60));
#line 393 "follow_code.m"
                            }
#line 393 "follow_code.m"
                            ll_backend__follow_code__succeeded = MR_TRUE;
#line 383 "follow_code.m"
                          }
#line 383 "follow_code.m"
                      }
#line 379 "follow_code.m"
                      break;
#line 379 "follow_code.m"
                    case (MR_Integer) 0:
#line 378 "follow_code.m"
                      {
#line 378 "follow_code.m"
                        ll_backend__follow_code__Else_23 = ll_backend__follow_code__Else0_21;
#line 378 "follow_code.m"
                        ll_backend__follow_code__succeeded = MR_TRUE;
#line 378 "follow_code.m"
                      }
#line 379 "follow_code.m"
                      break;
#line 379 "follow_code.m"
                  }
#line 323 "follow_code.m"
                  if (ll_backend__follow_code__succeeded)
#line 323 "follow_code.m"
                    {
#line 328 "follow_code.m"
                      {
#line 328 "follow_code.m"
                        ll_backend__follow_code__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 328 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 328 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 1) = ((MR_Box) (ll_backend__follow_code__Vars_18));
#line 328 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 2) = ((MR_Box) (ll_backend__follow_code__Cond_19));
#line 328 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 3) = ((MR_Box) (ll_backend__follow_code__Then_22));
#line 328 "follow_code.m"
                        MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_15, 4) = ((MR_Box) (ll_backend__follow_code__Else_23));
#line 328 "follow_code.m"
                      }
#line 328 "follow_code.m"
                      ll_backend__follow_code__succeeded = MR_TRUE;
#line 323 "follow_code.m"
                    }
#line 323 "follow_code.m"
                }
#line 323 "follow_code.m"
            }
#line 317 "follow_code.m"
            break;
#line 317 "follow_code.m"
        }
#line 317 "follow_code.m"
        break;
#line 317 "follow_code.m"
    }
#line 310 "follow_code.m"
    if (ll_backend__follow_code__succeeded)
#line 310 "follow_code.m"
      {
#line 330 "follow_code.m"
        {
#line 330 "follow_code.m"
          ll_backend__follow_code__OldPurity_24 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ll_backend__follow_code__GoalInfo0_10);
        }
#line 331 "follow_code.m"
        {
#line 331 "follow_code.m"
          ll_backend__follow_code__NewPurity_25 = parse_tree__prog_data__worst_purity_2_f_0(ll_backend__follow_code__OldPurity_24, ll_backend__follow_code__FollowPurity_7);
        }
#line 332 "follow_code.m"
        {
#line 332 "follow_code.m"
          hlds__hlds_goal__goal_info_set_purity_3_p_0(ll_backend__follow_code__NewPurity_25, ll_backend__follow_code__GoalInfo0_10, &ll_backend__follow_code__GoalInfo_26);
        }
#line 333 "follow_code.m"
        {
#line 333 "follow_code.m"
          MR_Word base;
#line 333 "follow_code.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "follow_code.m"
          *ll_backend__follow_code__Goal_8 = base;
#line 333 "follow_code.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_15));
#line 333 "follow_code.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_26));
#line 333 "follow_code.m"
        }
#line 333 "follow_code.m"
        ll_backend__follow_code__succeeded = MR_TRUE;
#line 310 "follow_code.m"
      }
#line 310 "follow_code.m"
    return ll_backend__follow_code__succeeded;
#line 310 "follow_code.m"
  }
#line 307 "follow_code.m"
}

#line 288 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_1(
#line 288 "follow_code.m"
  void * ll_backend__follow_code__env_ptr_arg)
#line 288 "follow_code.m"
{
#line 288 "follow_code.m"
  {
#line 288 "follow_code.m"
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * ll_backend__follow_code__env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) ll_backend__follow_code__env_ptr_arg;

#line 288 "follow_code.m"
    MR_builtin_longjmp((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__commit_0, 1);
#line 288 "follow_code.m"
  }
#line 288 "follow_code.m"
}

#line 290 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_3(
#line 290 "follow_code.m"
  void * ll_backend__follow_code__env_ptr_arg)
#line 290 "follow_code.m"
{
#line 290 "follow_code.m"
  {
#line 290 "follow_code.m"
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * ll_backend__follow_code__env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) ll_backend__follow_code__env_ptr_arg;

#line 290 "follow_code.m"
    (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__Arg_30 = ((MR_Word) (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__conv0_Arg_30);
#line 290 "follow_code.m"
    {
#line 290 "follow_code.m"
      ll_backend__follow_code__move_follow_code_select_6_p_0_2(ll_backend__follow_code__env_ptr);
#line 290 "follow_code.m"
      return;
    }
#line 290 "follow_code.m"
  }
#line 290 "follow_code.m"
}

#line 288 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_2(
#line 288 "follow_code.m"
  void * ll_backend__follow_code__env_ptr_arg)
#line 288 "follow_code.m"
{
#line 288 "follow_code.m"
  {
#line 288 "follow_code.m"
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * ll_backend__follow_code__env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) ll_backend__follow_code__env_ptr_arg;

#line 291 "follow_code.m"
    {
#line 291 "follow_code.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarMaps_2, (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__Arg_30, &(ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarInfo_31);
    }
#line 292 "follow_code.m"
    (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarInfo_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 292 "follow_code.m"
    (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = !((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded);
#line 292 "follow_code.m"
    if ((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
#line 292 "follow_code.m"
      {
#line 292 "follow_code.m"
        ll_backend__follow_code__move_follow_code_select_6_p_0_1(ll_backend__follow_code__env_ptr);
#line 292 "follow_code.m"
        return;
      }
#line 288 "follow_code.m"
  }
#line 288 "follow_code.m"
}

#line 288 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0_4(
#line 288 "follow_code.m"
  void * ll_backend__follow_code__env_ptr_arg)
#line 288 "follow_code.m"
{
#line 288 "follow_code.m"
  {
#line 288 "follow_code.m"
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s * ll_backend__follow_code__env_ptr = (struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s *) ll_backend__follow_code__env_ptr_arg;

#line 288 "follow_code.m"
    if (MR_builtin_setjmp((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__commit_0) == 0)
#line 288 "follow_code.m"
      {
#line 288 "follow_code.m"
        {
#line 288 "follow_code.m"
          MR_Word ll_backend__follow_code__TypeInfo_38_38;
#line 288 "follow_code.m"
          MR_Word ll_backend__follow_code__Unification_22;
#line 288 "follow_code.m"
          MR_Word ll_backend__follow_code__Args_26;
#line 288 "follow_code.m"
          MR_Word ll_backend__follow_code__V_19_19;
#line 288 "follow_code.m"
          MR_Word ll_backend__follow_code__V_20_20;
#line 288 "follow_code.m"
          MR_Word ll_backend__follow_code__V_21_21;
#line 288 "follow_code.m"
          MR_Word ll_backend__follow_code__V_23_23;
#line 289 "follow_code.m"
          MR_Word ll_backend__follow_code__V_24_24;
#line 289 "follow_code.m"
          MR_Word ll_backend__follow_code__V_25_25;
#line 289 "follow_code.m"
          MR_Word ll_backend__follow_code__V_27_27;
#line 289 "follow_code.m"
          MR_Word ll_backend__follow_code__V_28_28;
#line 289 "follow_code.m"
          MR_Word ll_backend__follow_code__V_29_29;

#line 288 "follow_code.m"
          (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17)) == (MR_mktag((MR_Integer) 1)));
#line 288 "follow_code.m"
          if ((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
#line 288 "follow_code.m"
            {
#line 288 "follow_code.m"
              {
#line 288 "follow_code.m"
                ll_backend__follow_code__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 0)));
#line 288 "follow_code.m"
                ll_backend__follow_code__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 1)));
#line 288 "follow_code.m"
                ll_backend__follow_code__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 2)));
#line 288 "follow_code.m"
                ll_backend__follow_code__Unification_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 3)));
#line 288 "follow_code.m"
                ll_backend__follow_code__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 4)));
#line 288 "follow_code.m"
              }
#line 288 "follow_code.m"
              {
#line 289 "follow_code.m"
                (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) ll_backend__follow_code__Unification_22)) == (MR_mktag((MR_Integer) 1)));
#line 289 "follow_code.m"
                if ((ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
#line 289 "follow_code.m"
                  {
#line 289 "follow_code.m"
                    {
#line 289 "follow_code.m"
                      ll_backend__follow_code__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__Unification_22, (MR_Integer) 0)));
#line 289 "follow_code.m"
                      ll_backend__follow_code__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__Unification_22, (MR_Integer) 1)));
#line 289 "follow_code.m"
                      ll_backend__follow_code__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__Unification_22, (MR_Integer) 2)));
#line 289 "follow_code.m"
                      ll_backend__follow_code__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__Unification_22, (MR_Integer) 3)));
#line 289 "follow_code.m"
                      ll_backend__follow_code__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__Unification_22, (MR_Integer) 4)));
#line 289 "follow_code.m"
                      ll_backend__follow_code__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__Unification_22, (MR_Integer) 5)));
#line 289 "follow_code.m"
                    }
#line 288 "follow_code.m"
                    {
#line 1878 "ll_backend.follow_code.c"
                      ll_backend__follow_code__TypeInfo_38_38 = (MR_Word) &ll_backend__follow_code_scalar_common_1[0];
#line 290 "follow_code.m"
                      {
#line 290 "follow_code.m"
                        mercury__list__member_2_p_1(ll_backend__follow_code__TypeInfo_38_38, &(ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__conv0_Arg_30, ll_backend__follow_code__Args_26, ll_backend__follow_code__move_follow_code_select_6_p_0_3, ll_backend__follow_code__env_ptr);
                      }
#line 288 "follow_code.m"
                    }
#line 289 "follow_code.m"
                  }
#line 288 "follow_code.m"
              }
#line 288 "follow_code.m"
            }
#line 288 "follow_code.m"
        }
#line 288 "follow_code.m"
        (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = MR_FALSE;
#line 288 "follow_code.m"
      }
#line 288 "follow_code.m"
    else
#line 288 "follow_code.m"
      (ll_backend__follow_code__env_ptr)->ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = MR_TRUE;
#line 288 "follow_code.m"
  }
#line 288 "follow_code.m"
}

#line 266 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_select_6_p_0(
#line 266 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1,
#line 266 "follow_code.m"
  MR_Word ll_backend__follow_code__RttiVarMaps_2,
#line 266 "follow_code.m"
  MR_Word * ll_backend__follow_code__HeadVar__3_3,
#line 266 "follow_code.m"
  MR_Word * ll_backend__follow_code__HeadVar__4_4,
#line 266 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Purity_0_5,
#line 266 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Purity_6)
#line 266 "follow_code.m"
{
#line 266 "follow_code.m"
  {
#line 266 "follow_code.m"
    struct ll_backend__follow_code__move_follow_code_select_6_p_0_env_0_s ll_backend__follow_code__env;

#line 266 "follow_code.m"
    (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarMaps_2 = ll_backend__follow_code__RttiVarMaps_2;
#line 270 "follow_code.m"
    if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 270 "follow_code.m"
      {
#line 270 "follow_code.m"
        *ll_backend__follow_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 270 "follow_code.m"
        *ll_backend__follow_code__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 270 "follow_code.m"
        *ll_backend__follow_code__STATE_VARIABLE_Purity_6 = ll_backend__follow_code__STATE_VARIABLE_Purity_0_5;
#line 270 "follow_code.m"
      }
#line 270 "follow_code.m"
    else
#line 272 "follow_code.m"
      {
#line 272 "follow_code.m"
        MR_Word ll_backend__follow_code__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
#line 272 "follow_code.m"
        MR_Word ll_backend__follow_code__Goals_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
#line 272 "follow_code.m"
        MR_Word ll_backend__follow_code__GoalInfo_18;

#line 273 "follow_code.m"
        (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_11, (MR_Integer) 0)));
#line 273 "follow_code.m"
        ll_backend__follow_code__GoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_11, (MR_Integer) 1)));
#line 414 "follow_code.m"
        if (((MR_tag((MR_Word) (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17)) == (MR_mktag((MR_Integer) 2))))
#line 417 "follow_code.m"
          {
#line 417 "follow_code.m"
            MR_Word ll_backend__follow_code__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 3)));
#line 417 "follow_code.m"
            MR_Word ll_backend__follow_code__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 0)));
#line 417 "follow_code.m"
            MR_Integer ll_backend__follow_code__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 1)));
#line 417 "follow_code.m"
            MR_Word ll_backend__follow_code__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 2)));
#line 417 "follow_code.m"
            MR_Word ll_backend__follow_code__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 4)));
#line 417 "follow_code.m"
            MR_Word ll_backend__follow_code__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 5)));

#line 417 "follow_code.m"
            (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = (ll_backend__follow_code__V_53_53 == (MR_Integer) 0);
#line 417 "follow_code.m"
          }
#line 414 "follow_code.m"
        else
#line 414 "follow_code.m"
        if (((MR_tag((MR_Word) (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17)) == (MR_mktag((MR_Integer) 1))))
#line 414 "follow_code.m"
          {
#line 414 "follow_code.m"
            MR_Word ll_backend__follow_code__Unification_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 3)));
#line 414 "follow_code.m"
            MR_Word ll_backend__follow_code__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 0)));
#line 414 "follow_code.m"
            MR_Word ll_backend__follow_code__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 1)));
#line 414 "follow_code.m"
            MR_Word ll_backend__follow_code__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 2)));
#line 414 "follow_code.m"
            MR_Word ll_backend__follow_code__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__GoalExpr_17, (MR_Integer) 4)));
#line 415 "follow_code.m"
            MR_Word ll_backend__follow_code__V_45_45;
#line 415 "follow_code.m"
            MR_Word ll_backend__follow_code__V_46_46;
#line 415 "follow_code.m"
            MR_Word ll_backend__follow_code__V_47_47;

#line 415 "follow_code.m"
            (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_code__Unification_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__Unification_43, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 415 "follow_code.m"
            if ((ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
#line 415 "follow_code.m"
              {
#line 415 "follow_code.m"
                ll_backend__follow_code__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__Unification_43, (MR_Integer) 1)));
#line 415 "follow_code.m"
                ll_backend__follow_code__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__Unification_43, (MR_Integer) 2)));
#line 415 "follow_code.m"
                ll_backend__follow_code__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__Unification_43, (MR_Integer) 3)));
#line 415 "follow_code.m"
              }
#line 415 "follow_code.m"
            (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = !((ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded);
#line 414 "follow_code.m"
          }
#line 414 "follow_code.m"
        else
#line 414 "follow_code.m"
          (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = MR_FALSE;
#line 275 "follow_code.m"
        if ((ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
#line 275 "follow_code.m"
          {
#line 288 "follow_code.m"
            {
#line 288 "follow_code.m"
              ll_backend__follow_code__move_follow_code_select_6_p_0_4(&ll_backend__follow_code__env);
            }
#line 287 "follow_code.m"
            (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded = !((ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded);
#line 275 "follow_code.m"
          }
#line 300 "follow_code.m"
        if ((ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__succeeded)
#line 295 "follow_code.m"
          {
#line 295 "follow_code.m"
            MR_Word ll_backend__follow_code__GoalPurity_32;
#line 295 "follow_code.m"
            MR_Word ll_backend__follow_code__FollowGoals0_33;
#line 295 "follow_code.m"
            MR_Word ll_backend__follow_code__STATE_VARIABLE_Purity_36_36;

#line 295 "follow_code.m"
            {
#line 295 "follow_code.m"
              ll_backend__follow_code__GoalPurity_32 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ll_backend__follow_code__GoalInfo_18);
            }
#line 296 "follow_code.m"
            {
#line 296 "follow_code.m"
              ll_backend__follow_code__STATE_VARIABLE_Purity_36_36 = parse_tree__prog_data__worst_purity_2_f_0(ll_backend__follow_code__STATE_VARIABLE_Purity_0_5, ll_backend__follow_code__GoalPurity_32);
            }
#line 297 "follow_code.m"
            {
#line 297 "follow_code.m"
              ll_backend__follow_code__move_follow_code_select_6_p_0(ll_backend__follow_code__Goals_12, (ll_backend__follow_code__env).ll_backend__follow_code__move_follow_code_select_6_p_0_env_0__RttiVarMaps_2, &ll_backend__follow_code__FollowGoals0_33, ll_backend__follow_code__HeadVar__4_4, ll_backend__follow_code__STATE_VARIABLE_Purity_36_36, ll_backend__follow_code__STATE_VARIABLE_Purity_6);
            }
#line 299 "follow_code.m"
            {
#line 299 "follow_code.m"
              MR_Word base;
#line 299 "follow_code.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "follow_code.m"
              *ll_backend__follow_code__HeadVar__3_3 = base;
#line 299 "follow_code.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_code__Goal_11));
#line 299 "follow_code.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_code__FollowGoals0_33));
#line 299 "follow_code.m"
            }
#line 295 "follow_code.m"
          }
#line 300 "follow_code.m"
        else
#line 301 "follow_code.m"
          {
#line 301 "follow_code.m"
            *ll_backend__follow_code__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 302 "follow_code.m"
            *ll_backend__follow_code__HeadVar__4_4 = ll_backend__follow_code__HeadVar__1_1;
#line 301 "follow_code.m"
            *ll_backend__follow_code__STATE_VARIABLE_Purity_6 = ll_backend__follow_code__STATE_VARIABLE_Purity_0_5;
#line 301 "follow_code.m"
          }
#line 272 "follow_code.m"
      }
#line 266 "follow_code.m"
  }
#line 266 "follow_code.m"
}

#line 252 "follow_code.m"
static MR_bool MR_CALL 
ll_backend__follow_code__no_bind_vars_1_p_0(
#line 252 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1)
#line 252 "follow_code.m"
{
#line 254 "follow_code.m"
  while (MR_TRUE)
#line 254 "follow_code.m"
    {
#line 254 "follow_code.m"
      /* tailcall optimized into a loop */
#line 254 "follow_code.m"
      {
#line 254 "follow_code.m"
        MR_bool ll_backend__follow_code__succeeded;

#line 254 "follow_code.m"
        if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "follow_code.m"
          ll_backend__follow_code__succeeded = MR_TRUE;
#line 254 "follow_code.m"
        else
#line 255 "follow_code.m"
          {
#line 255 "follow_code.m"
            MR_Word ll_backend__follow_code__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "follow_code.m"
            MR_Word ll_backend__follow_code__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
#line 255 "follow_code.m"
            MR_Word ll_backend__follow_code__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_2, (MR_Integer) 1)));
#line 255 "follow_code.m"
            MR_Word ll_backend__follow_code__InstMapDelta_6;
#line 255 "follow_code.m"
            MR_Word ll_backend__follow_code__ChangedVars_7;
#line 256 "follow_code.m"
            MR_Word ll_backend__follow_code__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_2, (MR_Integer) 0)));

#line 257 "follow_code.m"
            {
#line 257 "follow_code.m"
              ll_backend__follow_code__InstMapDelta_6 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__follow_code__GoalInfo_5);
            }
#line 258 "follow_code.m"
            {
#line 258 "follow_code.m"
              hlds__instmap__instmap_delta_changed_vars_2_p_0(ll_backend__follow_code__InstMapDelta_6, &ll_backend__follow_code__ChangedVars_7);
            }
#line 259 "follow_code.m"
            {
#line 259 "follow_code.m"
              ll_backend__follow_code__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__follow_code__ChangedVars_7);
            }
#line 255 "follow_code.m"
            if (ll_backend__follow_code__succeeded)
#line 260 "follow_code.m"
              {
#line 260 "follow_code.m"
                /* direct tailcall eliminated */
#line 260 "follow_code.m"
                {
#line 260 "follow_code.m"
                  MR_Word ll_backend__follow_code__HeadVar__1__tmp_copy_1 = ll_backend__follow_code__Goals_3;

#line 260 "follow_code.m"
                  ll_backend__follow_code__HeadVar__1_1 = ll_backend__follow_code__HeadVar__1__tmp_copy_1;
#line 260 "follow_code.m"
                }
#line 260 "follow_code.m"
                continue;
#line 260 "follow_code.m"
              }
#line 255 "follow_code.m"
          }
#line 254 "follow_code.m"
        return ll_backend__follow_code__succeeded;
#line 254 "follow_code.m"
      }
#line 254 "follow_code.m"
      break;
#line 254 "follow_code.m"
    }
#line 252 "follow_code.m"
}

#line 205 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_conj_2_7_p_0(
#line 205 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1,
#line 205 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__2_2,
#line 205 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__3_3,
#line 205 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_0_4,
#line 205 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_5,
#line 205 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_6,
#line 205 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_7)
#line 205 "follow_code.m"
{
#line 209 "follow_code.m"
  while (MR_TRUE)
#line 209 "follow_code.m"
    {
#line 209 "follow_code.m"
      /* tailcall optimized into a loop */
#line 209 "follow_code.m"
      {
#line 209 "follow_code.m"
        MR_bool ll_backend__follow_code__succeeded;

#line 209 "follow_code.m"
        if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "follow_code.m"
          {
#line 210 "follow_code.m"
            *ll_backend__follow_code__STATE_VARIABLE_Changed_7 = ll_backend__follow_code__STATE_VARIABLE_Changed_0_6;
#line 209 "follow_code.m"
            *ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_5 = ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_0_4;
#line 209 "follow_code.m"
          }
#line 209 "follow_code.m"
        else
#line 212 "follow_code.m"
          {
#line 212 "follow_code.m"
            MR_Word ll_backend__follow_code__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
#line 212 "follow_code.m"
            MR_Word ll_backend__follow_code__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
#line 212 "follow_code.m"
            MR_Word ll_backend__follow_code__Goal1_31;
#line 212 "follow_code.m"
            MR_Word ll_backend__follow_code__RestGoals_32;
#line 212 "follow_code.m"
            MR_Word ll_backend__follow_code__Goal_33;
#line 212 "follow_code.m"
            MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_40_40;
#line 212 "follow_code.m"
            MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_41_41;
#line 212 "follow_code.m"
            MR_Word ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_42_42;
#line 243 "follow_code.m"
            MR_Word ll_backend__follow_code__RestGoalsPrime_25;
#line 243 "follow_code.m"
            MR_Word ll_backend__follow_code__Goal1Prime_30;
#line 214 "follow_code.m"
            MR_Word ll_backend__follow_code__GoalExpr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_16, (MR_Integer) 0)));
#line 214 "follow_code.m"
            MR_Word ll_backend__follow_code__GoalInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_16, (MR_Integer) 1)));
#line 214 "follow_code.m"
            MR_Word ll_backend__follow_code__FollowGoals_24;
#line 214 "follow_code.m"
            MR_Word ll_backend__follow_code__WorstPurity_26;
#line 221 "follow_code.m"
            MR_Word ll_backend__follow_code__V_38_38;
#line 225 "follow_code.m"
            MR_Word ll_backend__follow_code__V_27_27;
#line 225 "follow_code.m"
            MR_Word ll_backend__follow_code__V_28_28;
#line 231 "follow_code.m"
            MR_Word ll_backend__follow_code__V_29_29;
#line 232 "follow_code.m"
            MR_Word ll_backend__follow_code__V_39_39;
#line 255 "follow_code.m"
            MR_Word ll_backend__follow_code__TypeCtorInfo_8_51;
#line 255 "follow_code.m"
            MR_Word ll_backend__follow_code__Goal_45;
#line 255 "follow_code.m"
            MR_Word ll_backend__follow_code__Goals_46;
#line 255 "follow_code.m"
            MR_Word ll_backend__follow_code__GoalInfo_48;
#line 255 "follow_code.m"
            MR_Word ll_backend__follow_code__InstMapDelta_49;
#line 255 "follow_code.m"
            MR_Word ll_backend__follow_code__ChangedVars_50;
#line 256 "follow_code.m"
            MR_Word ll_backend__follow_code__V_47_47;

#line 215 "follow_code.m"
            {
#line 215 "follow_code.m"
              ll_backend__follow_code__succeeded = hlds__goal_util__goal_is_branched_1_p_0(ll_backend__follow_code__GoalExpr0_22);
            }
#line 214 "follow_code.m"
            if (ll_backend__follow_code__succeeded)
#line 214 "follow_code.m"
              {
#line 221 "follow_code.m"
                ll_backend__follow_code__V_38_38 = (MR_Integer) 14;
#line 221 "follow_code.m"
                {
#line 221 "follow_code.m"
                  ll_backend__follow_code__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__follow_code__GoalInfo0_23, ll_backend__follow_code__V_38_38);
                }
#line 221 "follow_code.m"
                ll_backend__follow_code__succeeded = !(ll_backend__follow_code__succeeded);
#line 214 "follow_code.m"
                if (ll_backend__follow_code__succeeded)
#line 214 "follow_code.m"
                  {
#line 223 "follow_code.m"
                    {
#line 223 "follow_code.m"
                      ll_backend__follow_code__move_follow_code_select_6_p_0(ll_backend__follow_code__Goals0_17, ll_backend__follow_code__HeadVar__3_3, &ll_backend__follow_code__FollowGoals_24, &ll_backend__follow_code__RestGoalsPrime_25, ll_backend__follow_code__HeadVar__2_2, &ll_backend__follow_code__WorstPurity_26);
                    }
#line 225 "follow_code.m"
                    ll_backend__follow_code__succeeded = ((MR_tag((MR_Word) ll_backend__follow_code__FollowGoals_24)) == (MR_mktag((MR_Integer) 1)));
#line 225 "follow_code.m"
                    if (ll_backend__follow_code__succeeded)
#line 225 "follow_code.m"
                      {
#line 225 "follow_code.m"
                        ll_backend__follow_code__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__FollowGoals_24, (MR_Integer) 0)));
#line 225 "follow_code.m"
                        ll_backend__follow_code__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__FollowGoals_24, (MR_Integer) 1)));
#line 231 "follow_code.m"
                        ll_backend__follow_code__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_code__GoalExpr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_22, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 231 "follow_code.m"
                        if (ll_backend__follow_code__succeeded)
#line 231 "follow_code.m"
                          {
#line 231 "follow_code.m"
                            ll_backend__follow_code__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_22, (MR_Integer) 1)));
#line 232 "follow_code.m"
                            {
#line 232 "follow_code.m"
                              ll_backend__follow_code__V_39_39 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__follow_code__GoalInfo0_23);
                            }
#line 232 "follow_code.m"
                            ll_backend__follow_code__succeeded = (ll_backend__follow_code__V_39_39 == (MR_Integer) 2);
#line 232 "follow_code.m"
                            ll_backend__follow_code__succeeded = !(ll_backend__follow_code__succeeded);
#line 234 "follow_code.m"
                            if (ll_backend__follow_code__succeeded)
#line 234 "follow_code.m"
                              {
#line 255 "follow_code.m"
                                ll_backend__follow_code__Goal_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__FollowGoals_24, (MR_Integer) 0)));
#line 255 "follow_code.m"
                                ll_backend__follow_code__Goals_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__FollowGoals_24, (MR_Integer) 1)));
#line 256 "follow_code.m"
                                ll_backend__follow_code__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_45, (MR_Integer) 0)));
#line 256 "follow_code.m"
                                ll_backend__follow_code__GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal_45, (MR_Integer) 1)));
#line 257 "follow_code.m"
                                {
#line 257 "follow_code.m"
                                  ll_backend__follow_code__InstMapDelta_49 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__follow_code__GoalInfo_48);
                                }
#line 258 "follow_code.m"
                                {
#line 258 "follow_code.m"
                                  hlds__instmap__instmap_delta_changed_vars_2_p_0(ll_backend__follow_code__InstMapDelta_49, &ll_backend__follow_code__ChangedVars_50);
                                }
#line 2358 "ll_backend.follow_code.c"
                                ll_backend__follow_code__TypeCtorInfo_8_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 259 "follow_code.m"
                                {
#line 259 "follow_code.m"
                                  ll_backend__follow_code__succeeded = parse_tree__set_of_var__is_empty_1_p_0(ll_backend__follow_code__TypeCtorInfo_8_51, ll_backend__follow_code__ChangedVars_50);
                                }
#line 255 "follow_code.m"
                                if (ll_backend__follow_code__succeeded)
#line 260 "follow_code.m"
                                  {
#line 260 "follow_code.m"
                                    ll_backend__follow_code__succeeded = ll_backend__follow_code__no_bind_vars_1_p_0(ll_backend__follow_code__Goals_46);
                                  }
#line 234 "follow_code.m"
                                ll_backend__follow_code__succeeded = !(ll_backend__follow_code__succeeded);
#line 234 "follow_code.m"
                              }
#line 231 "follow_code.m"
                          }
#line 234 "follow_code.m"
                        ll_backend__follow_code__succeeded = !(ll_backend__follow_code__succeeded);
#line 214 "follow_code.m"
                        if (ll_backend__follow_code__succeeded)
#line 237 "follow_code.m"
                          {
#line 237 "follow_code.m"
                            ll_backend__follow_code__succeeded = ll_backend__follow_code__move_follow_code_move_goals_4_p_0(ll_backend__follow_code__Goal0_16, ll_backend__follow_code__FollowGoals_24, ll_backend__follow_code__WorstPurity_26, &ll_backend__follow_code__Goal1Prime_30);
                          }
#line 225 "follow_code.m"
                      }
#line 214 "follow_code.m"
                  }
#line 214 "follow_code.m"
              }
#line 243 "follow_code.m"
            if (ll_backend__follow_code__succeeded)
#line 240 "follow_code.m"
              {
#line 240 "follow_code.m"
                ll_backend__follow_code__STATE_VARIABLE_Changed_40_40 = (MR_Integer) 1;
#line 241 "follow_code.m"
                ll_backend__follow_code__Goal1_31 = ll_backend__follow_code__Goal1Prime_30;
#line 242 "follow_code.m"
                ll_backend__follow_code__RestGoals_32 = ll_backend__follow_code__RestGoalsPrime_25;
#line 240 "follow_code.m"
              }
#line 243 "follow_code.m"
            else
#line 244 "follow_code.m"
              {
#line 244 "follow_code.m"
                ll_backend__follow_code__Goal1_31 = ll_backend__follow_code__Goal0_16;
#line 245 "follow_code.m"
                ll_backend__follow_code__RestGoals_32 = ll_backend__follow_code__Goals0_17;
#line 244 "follow_code.m"
                ll_backend__follow_code__STATE_VARIABLE_Changed_40_40 = ll_backend__follow_code__STATE_VARIABLE_Changed_0_6;
#line 244 "follow_code.m"
              }
#line 247 "follow_code.m"
            {
#line 247 "follow_code.m"
              ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__Goal1_31, &ll_backend__follow_code__Goal_33, ll_backend__follow_code__HeadVar__3_3, ll_backend__follow_code__STATE_VARIABLE_Changed_40_40, &ll_backend__follow_code__STATE_VARIABLE_Changed_41_41);
            }
#line 248 "follow_code.m"
            {
#line 248 "follow_code.m"
              ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "follow_code.m"
              MR_hl_field(MR_mktag(1), ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_42_42, 0) = ((MR_Box) (ll_backend__follow_code__Goal_33));
#line 248 "follow_code.m"
              MR_hl_field(MR_mktag(1), ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_42_42, 1) = ((MR_Box) (ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_0_4));
#line 248 "follow_code.m"
            }
#line 249 "follow_code.m"
            /* direct tailcall eliminated */
#line 249 "follow_code.m"
            {
#line 249 "follow_code.m"
              MR_Word ll_backend__follow_code__HeadVar__1__tmp_copy_1 = ll_backend__follow_code__RestGoals_32;
#line 249 "follow_code.m"
              MR_Word ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_0__tmp_copy_4 = ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_42_42;
#line 249 "follow_code.m"
              MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0__tmp_copy_6 = ll_backend__follow_code__STATE_VARIABLE_Changed_41_41;

#line 249 "follow_code.m"
              ll_backend__follow_code__STATE_VARIABLE_Changed_0_6 = ll_backend__follow_code__STATE_VARIABLE_Changed_0__tmp_copy_6;
#line 249 "follow_code.m"
              ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_0_4 = ll_backend__follow_code__STATE_VARIABLE_RevPrevGoals_0__tmp_copy_4;
#line 249 "follow_code.m"
              ll_backend__follow_code__HeadVar__1_1 = ll_backend__follow_code__HeadVar__1__tmp_copy_1;
#line 249 "follow_code.m"
            }
#line 249 "follow_code.m"
            continue;
#line 212 "follow_code.m"
          }
#line 209 "follow_code.m"
      }
#line 209 "follow_code.m"
      break;
#line 209 "follow_code.m"
    }
#line 205 "follow_code.m"
}

#line 197 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_conj_6_p_0(
#line 197 "follow_code.m"
  MR_Word ll_backend__follow_code__Goals0_7,
#line 197 "follow_code.m"
  MR_Word ll_backend__follow_code__ConjPurity_8,
#line 197 "follow_code.m"
  MR_Word ll_backend__follow_code__RttiVarMaps_9,
#line 197 "follow_code.m"
  MR_Word * ll_backend__follow_code__Goals_10,
#line 197 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_13,
#line 197 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_14)
#line 197 "follow_code.m"
{
#line 200 "follow_code.m"
  {
#line 200 "follow_code.m"
    MR_bool ll_backend__follow_code__succeeded;
#line 200 "follow_code.m"
    MR_Word ll_backend__follow_code__RevGoals_12;

#line 201 "follow_code.m"
    {
#line 201 "follow_code.m"
      ll_backend__follow_code__move_follow_code_in_conj_2_7_p_0(ll_backend__follow_code__Goals0_7, ll_backend__follow_code__ConjPurity_8, ll_backend__follow_code__RttiVarMaps_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__follow_code__RevGoals_12, ll_backend__follow_code__STATE_VARIABLE_Changed_0_13, ll_backend__follow_code__STATE_VARIABLE_Changed_14);
    }
#line 203 "follow_code.m"
    {
#line 203 "follow_code.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__follow_code__RevGoals_12, ll_backend__follow_code__Goals_10);
#line 203 "follow_code.m"
      return;
    }
#line 200 "follow_code.m"
  }
#line 197 "follow_code.m"
}

#line 181 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_cases_5_p_0(
#line 181 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1,
#line 181 "follow_code.m"
  MR_Word * ll_backend__follow_code__HeadVar__2_2,
#line 181 "follow_code.m"
  MR_Word ll_backend__follow_code__RttiVarMaps_3,
#line 181 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_4,
#line 181 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_5)
#line 181 "follow_code.m"
{
#line 184 "follow_code.m"
  {
#line 184 "follow_code.m"
    MR_bool ll_backend__follow_code__succeeded;

#line 184 "follow_code.m"
    if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "follow_code.m"
      {
#line 184 "follow_code.m"
        *ll_backend__follow_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "follow_code.m"
        *ll_backend__follow_code__STATE_VARIABLE_Changed_5 = ll_backend__follow_code__STATE_VARIABLE_Changed_0_4;
#line 184 "follow_code.m"
      }
#line 184 "follow_code.m"
    else
#line 186 "follow_code.m"
      {
#line 186 "follow_code.m"
        MR_Word ll_backend__follow_code__Case0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
#line 186 "follow_code.m"
        MR_Word ll_backend__follow_code__Cases0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
#line 186 "follow_code.m"
        MR_Word ll_backend__follow_code__Case_12;
#line 186 "follow_code.m"
        MR_Word ll_backend__follow_code__Cases_13;
#line 186 "follow_code.m"
        MR_Word ll_backend__follow_code__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case0_10, (MR_Integer) 0)));
#line 186 "follow_code.m"
        MR_Word ll_backend__follow_code__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case0_10, (MR_Integer) 1)));
#line 186 "follow_code.m"
        MR_Word ll_backend__follow_code__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case0_10, (MR_Integer) 2)));
#line 186 "follow_code.m"
        MR_Word ll_backend__follow_code__Goal_19;
#line 186 "follow_code.m"
        MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_22_22;

#line 188 "follow_code.m"
        {
#line 188 "follow_code.m"
          ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__Goal0_18, &ll_backend__follow_code__Goal_19, ll_backend__follow_code__RttiVarMaps_3, ll_backend__follow_code__STATE_VARIABLE_Changed_0_4, &ll_backend__follow_code__STATE_VARIABLE_Changed_22_22);
        }
#line 189 "follow_code.m"
        {
#line 189 "follow_code.m"
          ll_backend__follow_code__Case_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 189 "follow_code.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case_12, 0) = ((MR_Box) (ll_backend__follow_code__MainConsId_16));
#line 189 "follow_code.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case_12, 1) = ((MR_Box) (ll_backend__follow_code__OtherConsIds_17));
#line 189 "follow_code.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_code__Case_12, 2) = ((MR_Box) (ll_backend__follow_code__Goal_19));
#line 189 "follow_code.m"
        }
#line 190 "follow_code.m"
        {
#line 190 "follow_code.m"
          ll_backend__follow_code__move_follow_code_in_cases_5_p_0(ll_backend__follow_code__Cases0_11, &ll_backend__follow_code__Cases_13, ll_backend__follow_code__RttiVarMaps_3, ll_backend__follow_code__STATE_VARIABLE_Changed_22_22, ll_backend__follow_code__STATE_VARIABLE_Changed_5);
        }
#line 185 "follow_code.m"
        {
#line 185 "follow_code.m"
          MR_Word base;
#line 185 "follow_code.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "follow_code.m"
          *ll_backend__follow_code__HeadVar__2_2 = base;
#line 185 "follow_code.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_code__Case_12));
#line 185 "follow_code.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_code__Cases_13));
#line 185 "follow_code.m"
        }
#line 186 "follow_code.m"
      }
#line 184 "follow_code.m"
  }
#line 181 "follow_code.m"
}

#line 169 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(
#line 169 "follow_code.m"
  MR_Word ll_backend__follow_code__HeadVar__1_1,
#line 169 "follow_code.m"
  MR_Word * ll_backend__follow_code__HeadVar__2_2,
#line 169 "follow_code.m"
  MR_Word ll_backend__follow_code__RttiVarMaps_3,
#line 169 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_4,
#line 169 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_5)
#line 169 "follow_code.m"
{
#line 172 "follow_code.m"
  {
#line 172 "follow_code.m"
    MR_bool ll_backend__follow_code__succeeded;

#line 172 "follow_code.m"
    if ((ll_backend__follow_code__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 172 "follow_code.m"
      {
#line 172 "follow_code.m"
        *ll_backend__follow_code__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 172 "follow_code.m"
        *ll_backend__follow_code__STATE_VARIABLE_Changed_5 = ll_backend__follow_code__STATE_VARIABLE_Changed_0_4;
#line 172 "follow_code.m"
      }
#line 172 "follow_code.m"
    else
#line 174 "follow_code.m"
      {
#line 174 "follow_code.m"
        MR_Word ll_backend__follow_code__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 0)));
#line 174 "follow_code.m"
        MR_Word ll_backend__follow_code__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_code__HeadVar__1_1, (MR_Integer) 1)));
#line 174 "follow_code.m"
        MR_Word ll_backend__follow_code__Goal_12;
#line 174 "follow_code.m"
        MR_Word ll_backend__follow_code__Goals_13;
#line 174 "follow_code.m"
        MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_18_18;

#line 175 "follow_code.m"
        {
#line 175 "follow_code.m"
          ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__Goal0_10, &ll_backend__follow_code__Goal_12, ll_backend__follow_code__RttiVarMaps_3, ll_backend__follow_code__STATE_VARIABLE_Changed_0_4, &ll_backend__follow_code__STATE_VARIABLE_Changed_18_18);
        }
#line 176 "follow_code.m"
        {
#line 176 "follow_code.m"
          ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(ll_backend__follow_code__Goals0_11, &ll_backend__follow_code__Goals_13, ll_backend__follow_code__RttiVarMaps_3, ll_backend__follow_code__STATE_VARIABLE_Changed_18_18, ll_backend__follow_code__STATE_VARIABLE_Changed_5);
        }
#line 173 "follow_code.m"
        {
#line 173 "follow_code.m"
          MR_Word base;
#line 173 "follow_code.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "follow_code.m"
          *ll_backend__follow_code__HeadVar__2_2 = base;
#line 173 "follow_code.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_code__Goal_12));
#line 173 "follow_code.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_code__Goals_13));
#line 173 "follow_code.m"
        }
#line 174 "follow_code.m"
      }
#line 172 "follow_code.m"
  }
#line 169 "follow_code.m"
}

#line 95 "follow_code.m"
static void MR_CALL 
ll_backend__follow_code__move_follow_code_in_goal_5_p_0(
#line 95 "follow_code.m"
  MR_Word ll_backend__follow_code__Goal0_6,
#line 95 "follow_code.m"
  MR_Word * ll_backend__follow_code__Goal_7,
#line 95 "follow_code.m"
  MR_Word ll_backend__follow_code__RttiVarMaps_8,
#line 95 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_0_57,
#line 95 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_Changed_58)
#line 95 "follow_code.m"
{
#line 98 "follow_code.m"
  {
#line 98 "follow_code.m"
    MR_bool ll_backend__follow_code__succeeded;
#line 98 "follow_code.m"
    MR_Word ll_backend__follow_code__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_6, (MR_Integer) 0)));
#line 98 "follow_code.m"
    MR_Word ll_backend__follow_code__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_code__Goal0_6, (MR_Integer) 1)));

#line 114 "follow_code.m"
#line 114 "follow_code.m"
    switch (MR_tag((MR_Word) ll_backend__follow_code__GoalExpr0_10)) {
#line 114 "follow_code.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 114 "follow_code.m"
      case (MR_Integer) 0:
#line 121 "follow_code.m"
        {
#line 121 "follow_code.m"
          MR_Word ll_backend__follow_code__SubGoal0_17 = (MR_Word) MR_body(((MR_Word) ll_backend__follow_code__GoalExpr0_10), (MR_Integer) 0);
#line 121 "follow_code.m"
          MR_Word ll_backend__follow_code__SubGoal_18;
#line 121 "follow_code.m"
          MR_Word ll_backend__follow_code__GoalExpr_74;

#line 122 "follow_code.m"
          {
#line 122 "follow_code.m"
            ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__SubGoal0_17, &ll_backend__follow_code__SubGoal_18, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_0_57, ll_backend__follow_code__STATE_VARIABLE_Changed_58);
          }
#line 123 "follow_code.m"
          ll_backend__follow_code__GoalExpr_74 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__follow_code__SubGoal_18);
#line 124 "follow_code.m"
          {
#line 124 "follow_code.m"
            MR_Word base;
#line 124 "follow_code.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 124 "follow_code.m"
            *ll_backend__follow_code__Goal_7 = base;
#line 124 "follow_code.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_74));
#line 124 "follow_code.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_11));
#line 124 "follow_code.m"
          }
#line 121 "follow_code.m"
        }
#line 114 "follow_code.m"
        break;
#line 114 "follow_code.m"
      case (MR_Integer) 1:
#line 114 "follow_code.m"
      case (MR_Integer) 2:
#line 156 "follow_code.m"
        {
#line 157 "follow_code.m"
          *ll_backend__follow_code__Goal_7 = ll_backend__follow_code__Goal0_6;
#line 156 "follow_code.m"
          *ll_backend__follow_code__STATE_VARIABLE_Changed_58 = ll_backend__follow_code__STATE_VARIABLE_Changed_0_57;
#line 156 "follow_code.m"
        }
#line 114 "follow_code.m"
        break;
#line 114 "follow_code.m"
      case (MR_Integer) 3:
#line 114 "follow_code.m"
#line 114 "follow_code.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 0)))) {
#line 114 "follow_code.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 114 "follow_code.m"
          case (MR_Integer) 0:
#line 114 "follow_code.m"
          case (MR_Integer) 1:
#line 156 "follow_code.m"
            {
#line 157 "follow_code.m"
              *ll_backend__follow_code__Goal_7 = ll_backend__follow_code__Goal0_6;
#line 156 "follow_code.m"
              *ll_backend__follow_code__STATE_VARIABLE_Changed_58 = ll_backend__follow_code__STATE_VARIABLE_Changed_0_57;
#line 156 "follow_code.m"
            }
#line 114 "follow_code.m"
            break;
#line 114 "follow_code.m"
          case (MR_Integer) 2:
#line 101 "follow_code.m"
            {
#line 101 "follow_code.m"
              MR_Word ll_backend__follow_code__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 1)));
#line 101 "follow_code.m"
              MR_Word ll_backend__follow_code__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 2)));
#line 101 "follow_code.m"
              MR_Word ll_backend__follow_code__Goals_15;
#line 101 "follow_code.m"
              MR_Word ll_backend__follow_code__GoalExpr_16;

#line 107 "follow_code.m"
#line 107 "follow_code.m"
              switch (ll_backend__follow_code__ConjType_12) {
#line 107 "follow_code.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 107 "follow_code.m"
                case (MR_Integer) 1:
#line 109 "follow_code.m"
                  {
#line 109 "follow_code.m"
                    ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(ll_backend__follow_code__Goals0_13, &ll_backend__follow_code__Goals_15, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_0_57, ll_backend__follow_code__STATE_VARIABLE_Changed_58);
                  }
#line 107 "follow_code.m"
                  break;
#line 107 "follow_code.m"
                case (MR_Integer) 0:
#line 103 "follow_code.m"
                  {
#line 103 "follow_code.m"
                    MR_Word ll_backend__follow_code__ConjPurity_14;

#line 104 "follow_code.m"
                    {
#line 104 "follow_code.m"
                      ll_backend__follow_code__ConjPurity_14 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ll_backend__follow_code__GoalInfo_11);
                    }
#line 105 "follow_code.m"
                    {
#line 105 "follow_code.m"
                      ll_backend__follow_code__move_follow_code_in_conj_6_p_0(ll_backend__follow_code__Goals0_13, ll_backend__follow_code__ConjPurity_14, ll_backend__follow_code__RttiVarMaps_8, &ll_backend__follow_code__Goals_15, ll_backend__follow_code__STATE_VARIABLE_Changed_0_57, ll_backend__follow_code__STATE_VARIABLE_Changed_58);
                    }
#line 103 "follow_code.m"
                  }
#line 107 "follow_code.m"
                  break;
#line 107 "follow_code.m"
              }
#line 112 "follow_code.m"
              {
#line 112 "follow_code.m"
                ll_backend__follow_code__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 112 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 112 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_16, 1) = ((MR_Box) (ll_backend__follow_code__ConjType_12));
#line 112 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_16, 2) = ((MR_Box) (ll_backend__follow_code__Goals_15));
#line 112 "follow_code.m"
              }
#line 113 "follow_code.m"
              {
#line 113 "follow_code.m"
                MR_Word base;
#line 113 "follow_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 113 "follow_code.m"
                *ll_backend__follow_code__Goal_7 = base;
#line 113 "follow_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_16));
#line 113 "follow_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_11));
#line 113 "follow_code.m"
              }
#line 101 "follow_code.m"
            }
#line 114 "follow_code.m"
            break;
#line 114 "follow_code.m"
          case (MR_Integer) 3:
#line 115 "follow_code.m"
            {
#line 115 "follow_code.m"
              MR_Word ll_backend__follow_code__Goals0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 1)));
#line 115 "follow_code.m"
              MR_Word ll_backend__follow_code__Goals_72;
#line 115 "follow_code.m"
              MR_Word ll_backend__follow_code__GoalExpr_73;

#line 116 "follow_code.m"
              {
#line 116 "follow_code.m"
                ll_backend__follow_code__move_follow_code_in_independent_goals_5_p_0(ll_backend__follow_code__Goals0_71, &ll_backend__follow_code__Goals_72, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_0_57, ll_backend__follow_code__STATE_VARIABLE_Changed_58);
              }
#line 118 "follow_code.m"
              {
#line 118 "follow_code.m"
                ll_backend__follow_code__GoalExpr_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 118 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_73, 1) = ((MR_Box) (ll_backend__follow_code__Goals_72));
#line 118 "follow_code.m"
              }
#line 119 "follow_code.m"
              {
#line 119 "follow_code.m"
                MR_Word base;
#line 119 "follow_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 119 "follow_code.m"
                *ll_backend__follow_code__Goal_7 = base;
#line 119 "follow_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_73));
#line 119 "follow_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_11));
#line 119 "follow_code.m"
              }
#line 115 "follow_code.m"
            }
#line 114 "follow_code.m"
            break;
#line 114 "follow_code.m"
          case (MR_Integer) 4:
#line 126 "follow_code.m"
            {
#line 126 "follow_code.m"
              MR_Word ll_backend__follow_code__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 1)));
#line 126 "follow_code.m"
              MR_Word ll_backend__follow_code__Det_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 2)));
#line 126 "follow_code.m"
              MR_Word ll_backend__follow_code__Cases0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 3)));
#line 126 "follow_code.m"
              MR_Word ll_backend__follow_code__Cases_22;
#line 126 "follow_code.m"
              MR_Word ll_backend__follow_code__GoalExpr_75;

#line 127 "follow_code.m"
              {
#line 127 "follow_code.m"
                ll_backend__follow_code__move_follow_code_in_cases_5_p_0(ll_backend__follow_code__Cases0_21, &ll_backend__follow_code__Cases_22, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_0_57, ll_backend__follow_code__STATE_VARIABLE_Changed_58);
              }
#line 128 "follow_code.m"
              {
#line 128 "follow_code.m"
                ll_backend__follow_code__GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 128 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 128 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_75, 1) = ((MR_Box) (ll_backend__follow_code__Var_19));
#line 128 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_75, 2) = ((MR_Box) (ll_backend__follow_code__Det_20));
#line 128 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_75, 3) = ((MR_Box) (ll_backend__follow_code__Cases_22));
#line 128 "follow_code.m"
              }
#line 129 "follow_code.m"
              {
#line 129 "follow_code.m"
                MR_Word base;
#line 129 "follow_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 129 "follow_code.m"
                *ll_backend__follow_code__Goal_7 = base;
#line 129 "follow_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_75));
#line 129 "follow_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_11));
#line 129 "follow_code.m"
              }
#line 126 "follow_code.m"
            }
#line 114 "follow_code.m"
            break;
#line 114 "follow_code.m"
          case (MR_Integer) 5:
#line 138 "follow_code.m"
            {
#line 138 "follow_code.m"
              MR_Word ll_backend__follow_code__Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 1)));
#line 138 "follow_code.m"
              MR_Word ll_backend__follow_code__GoalExpr_77;
#line 138 "follow_code.m"
              MR_Word ll_backend__follow_code__SubGoal0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 2)));
#line 138 "follow_code.m"
              MR_Word ll_backend__follow_code__SubGoal_79;
#line 140 "follow_code.m"
              MR_Word ll_backend__follow_code__FGT_32;
#line 140 "follow_code.m"
              MR_Word ll_backend__follow_code__V_31_31;

#line 140 "follow_code.m"
              ll_backend__follow_code__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_code__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 140 "follow_code.m"
              if (ll_backend__follow_code__succeeded)
#line 140 "follow_code.m"
                {
#line 140 "follow_code.m"
                  ll_backend__follow_code__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__Reason_30, (MR_Integer) 1)));
#line 140 "follow_code.m"
                  ll_backend__follow_code__FGT_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__Reason_30, (MR_Integer) 2)));
#line 142 "follow_code.m"
#line 142 "follow_code.m"
                  switch (ll_backend__follow_code__FGT_32) {
#line 142 "follow_code.m"
                    default:
#line 142 "follow_code.m"
                      ll_backend__follow_code__succeeded = MR_FALSE;
#line 142 "follow_code.m"
                      break;
#line 142 "follow_code.m"
                    case (MR_Integer) 1:
#line 141 "follow_code.m"
                      ll_backend__follow_code__succeeded = MR_TRUE;
#line 142 "follow_code.m"
                      break;
#line 142 "follow_code.m"
                    case (MR_Integer) 2:
#line 142 "follow_code.m"
                      ll_backend__follow_code__succeeded = MR_TRUE;
#line 142 "follow_code.m"
                      break;
#line 142 "follow_code.m"
                  }
#line 140 "follow_code.m"
                }
#line 146 "follow_code.m"
              if (ll_backend__follow_code__succeeded)
#line 145 "follow_code.m"
                {
#line 145 "follow_code.m"
                  ll_backend__follow_code__SubGoal_79 = ll_backend__follow_code__SubGoal0_78;
#line 145 "follow_code.m"
                  *ll_backend__follow_code__STATE_VARIABLE_Changed_58 = ll_backend__follow_code__STATE_VARIABLE_Changed_0_57;
#line 145 "follow_code.m"
                }
#line 146 "follow_code.m"
              else
#line 147 "follow_code.m"
                {
#line 147 "follow_code.m"
                  ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__SubGoal0_78, &ll_backend__follow_code__SubGoal_79, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_0_57, ll_backend__follow_code__STATE_VARIABLE_Changed_58);
                }
#line 149 "follow_code.m"
              {
#line 149 "follow_code.m"
                ll_backend__follow_code__GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 149 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 149 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_77, 1) = ((MR_Box) (ll_backend__follow_code__Reason_30));
#line 149 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_77, 2) = ((MR_Box) (ll_backend__follow_code__SubGoal_79));
#line 149 "follow_code.m"
              }
#line 150 "follow_code.m"
              {
#line 150 "follow_code.m"
                MR_Word base;
#line 150 "follow_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 150 "follow_code.m"
                *ll_backend__follow_code__Goal_7 = base;
#line 150 "follow_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_77));
#line 150 "follow_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_11));
#line 150 "follow_code.m"
              }
#line 138 "follow_code.m"
            }
#line 114 "follow_code.m"
            break;
#line 114 "follow_code.m"
          case (MR_Integer) 6:
#line 131 "follow_code.m"
            {
#line 131 "follow_code.m"
              MR_Word ll_backend__follow_code__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 1)));
#line 131 "follow_code.m"
              MR_Word ll_backend__follow_code__Cond0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 2)));
#line 131 "follow_code.m"
              MR_Word ll_backend__follow_code__Then0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 3)));
#line 131 "follow_code.m"
              MR_Word ll_backend__follow_code__Else0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr0_10, (MR_Integer) 4)));
#line 131 "follow_code.m"
              MR_Word ll_backend__follow_code__Cond_27;
#line 131 "follow_code.m"
              MR_Word ll_backend__follow_code__Then_28;
#line 131 "follow_code.m"
              MR_Word ll_backend__follow_code__Else_29;
#line 131 "follow_code.m"
              MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_63_63;
#line 131 "follow_code.m"
              MR_Word ll_backend__follow_code__STATE_VARIABLE_Changed_64_64;
#line 131 "follow_code.m"
              MR_Word ll_backend__follow_code__GoalExpr_76;

#line 132 "follow_code.m"
              {
#line 132 "follow_code.m"
                ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__Cond0_24, &ll_backend__follow_code__Cond_27, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_0_57, &ll_backend__follow_code__STATE_VARIABLE_Changed_63_63);
              }
#line 133 "follow_code.m"
              {
#line 133 "follow_code.m"
                ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__Then0_25, &ll_backend__follow_code__Then_28, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_63_63, &ll_backend__follow_code__STATE_VARIABLE_Changed_64_64);
              }
#line 134 "follow_code.m"
              {
#line 134 "follow_code.m"
                ll_backend__follow_code__move_follow_code_in_goal_5_p_0(ll_backend__follow_code__Else0_26, &ll_backend__follow_code__Else_29, ll_backend__follow_code__RttiVarMaps_8, ll_backend__follow_code__STATE_VARIABLE_Changed_64_64, ll_backend__follow_code__STATE_VARIABLE_Changed_58);
              }
#line 135 "follow_code.m"
              {
#line 135 "follow_code.m"
                ll_backend__follow_code__GoalExpr_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 135 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 135 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_76, 1) = ((MR_Box) (ll_backend__follow_code__Vars_23));
#line 135 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_76, 2) = ((MR_Box) (ll_backend__follow_code__Cond_27));
#line 135 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_76, 3) = ((MR_Box) (ll_backend__follow_code__Then_28));
#line 135 "follow_code.m"
                MR_hl_field(MR_mktag(3), ll_backend__follow_code__GoalExpr_76, 4) = ((MR_Box) (ll_backend__follow_code__Else_29));
#line 135 "follow_code.m"
              }
#line 136 "follow_code.m"
              {
#line 136 "follow_code.m"
                MR_Word base;
#line 136 "follow_code.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 136 "follow_code.m"
                *ll_backend__follow_code__Goal_7 = base;
#line 136 "follow_code.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_code__GoalExpr_76));
#line 136 "follow_code.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_code__GoalInfo_11));
#line 136 "follow_code.m"
              }
#line 131 "follow_code.m"
            }
#line 114 "follow_code.m"
            break;
#line 114 "follow_code.m"
          case (MR_Integer) 7:
#line 159 "follow_code.m"
            {
#line 161 "follow_code.m"
              {
#line 161 "follow_code.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.follow_code", (MR_String) "predicate \140ll_backend.follow_code.move_follow_code_in_goal\'/5", (MR_String) "shorthand");
#line 161 "follow_code.m"
                return;
              }
#line 159 "follow_code.m"
            }
#line 114 "follow_code.m"
            break;
#line 114 "follow_code.m"
        }
#line 114 "follow_code.m"
        break;
#line 114 "follow_code.m"
    }
#line 98 "follow_code.m"
  }
#line 95 "follow_code.m"
}

#line 39 "follow_code.m"
void MR_CALL 
ll_backend__follow_code__move_follow_code_in_proc_5_p_0(
#line 39 "follow_code.m"
  MR_Word ll_backend__follow_code___PredProcId_6,
#line 39 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24,
#line 39 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_ProcInfo_25,
#line 39 "follow_code.m"
  MR_Word ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_0_26,
#line 39 "follow_code.m"
  MR_Word * ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_27)
#line 39 "follow_code.m"
{
#line 64 "follow_code.m"
  {
#line 64 "follow_code.m"
    MR_bool ll_backend__follow_code__succeeded;

#line 64 "follow_code.m"
    {
#line 64 "follow_code.m"
      ll_backend__follow_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_5_p_0(ll_backend__follow_code__STATE_VARIABLE_ProcInfo_0_24, ll_backend__follow_code__STATE_VARIABLE_ProcInfo_25, ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_0_26, ll_backend__follow_code__STATE_VARIABLE_ModuleInfo_27);
#line 64 "follow_code.m"
      return;
    }
#line 64 "follow_code.m"
  }
#line 39 "follow_code.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.follow_code. */
