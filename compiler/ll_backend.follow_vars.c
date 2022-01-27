/*
** Automatically generated from `follow_vars.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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


/* :- module ll_backend.follow_vars. */
/* :- implementation. */

/*
INIT mercury__ll_backend__follow_vars__init
ENDINIT
*/

#include "ll_backend.follow_vars.mih"


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
#include "hlds.arg_info.mih"
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
#include "ll_backend.call_gen.mih"
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




#line 148 "ll_backend.follow_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__follow_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "ll_backend.follow_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__follow_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_pred__type_ctor_info_arg_info_0;

#line 462 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_conj_11_p_0(
#line 462 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
#line 462 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__HeadVar__2_2,
#line 462 "follow_vars.m"
  MR_Word ll_backend__follow_vars__VarTypes_3,
#line 462 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__4_4,
#line 462 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__5_5,
#line 462 "follow_vars.m"
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_6,
#line 462 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_7,
#line 462 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_8,
#line 462 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_9,
#line 462 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_10,
#line 462 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_11);

#line 432 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_cases_10_p_0(
#line 432 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
#line 432 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__HeadVar__2_2,
#line 432 "follow_vars.m"
  MR_Word ll_backend__follow_vars__VarTypes_3,
#line 432 "follow_vars.m"
  MR_Word ll_backend__follow_vars__ModuleInfo_4,
#line 432 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__5_5,
#line 432 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__HeadVar__6_6,
#line 432 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__HeadVar__7_7,
#line 432 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__HeadVar__8_8,
#line 432 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__HeadVar__9_9,
#line 432 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__HeadVar__10_10);

#line 395 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(
#line 395 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
#line 395 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__HeadVar__2_2,
#line 395 "follow_vars.m"
  MR_Word ll_backend__follow_vars__VarTypes_3,
#line 395 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__4_4,
#line 395 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__5_5,
#line 395 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__FollowVarsMap_6,
#line 395 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__HeadVar__7_7,
#line 395 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__NextNonReservedR_8,
#line 395 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__HeadVar__9_9,
#line 395 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__NextNonReservedF_10);

#line 352 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_p_0(
#line 352 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
#line 352 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__2_2,
#line 352 "follow_vars.m"
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_3,
#line 352 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_4,
#line 352 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextReg_0_5,
#line 352 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextReg_6);

#line 313 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_from_arginfo_7_p_0(
#line 313 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
#line 313 "follow_vars.m"
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2,
#line 313 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_3,
#line 313 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4,
#line 313 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_5,
#line 313 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6,
#line 313 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_7);

#line 302 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_call_7_p_0(
#line 302 "follow_vars.m"
  MR_Word ll_backend__follow_vars__PredId_8,
#line 302 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__ProcId_9,
#line 302 "follow_vars.m"
  MR_Word ll_backend__follow_vars__Args_10,
#line 302 "follow_vars.m"
  MR_Word ll_backend__follow_vars__ModuleInfo_11,
#line 302 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__FollowVarsMap_12,
#line 302 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__NextNonReservedR_13,
#line 302 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__NextNonReservedF_14);

#line 296 "follow_vars.m"
static MR_bool MR_CALL 
ll_backend__follow_vars__is_reg_r_arg_1_p_0(
#line 296 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1);

#line 272 "follow_vars.m"
static MR_bool MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0_1(
#line 272 "follow_vars.m"
  MR_Box ll_backend__follow_vars__closure_arg,
#line 272 "follow_vars.m"
  MR_Box ll_backend__follow_vars__wrapper_arg_1);

#line 119 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(
#line 119 "follow_vars.m"
  MR_Word ll_backend__follow_vars__GoalExpr0_13,
#line 119 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__GoalExpr_14,
#line 119 "follow_vars.m"
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112,
#line 119 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113,
#line 119 "follow_vars.m"
  MR_Word ll_backend__follow_vars__VarTypes_16,
#line 119 "follow_vars.m"
  MR_Word ll_backend__follow_vars__ModuleInfo_17,
#line 119 "follow_vars.m"
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114,
#line 119 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115,
#line 119 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116,
#line 119 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117,
#line 119 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118,
#line 119 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);

#line 80 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_final_follow_vars_2_7_p_0(
#line 80 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
#line 80 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__2_2,
#line 80 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__HeadVar__3_3,
#line 80 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4,
#line 80 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_5,
#line 80 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6,
#line 80 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_7);


static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_3[1][4];




static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__follow_vars_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__follow_vars_scalar_common_3[0])),
    ((MR_Box) (ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__follow_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 400 "ll_backend.follow_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__follow_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 408 "ll_backend.follow_vars.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__follow_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__follow_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0
  }
};

#line 462 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_conj_11_p_0(
#line 462 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
#line 462 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__HeadVar__2_2,
#line 462 "follow_vars.m"
  MR_Word ll_backend__follow_vars__VarTypes_3,
#line 462 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__4_4,
#line 462 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__5_5,
#line 462 "follow_vars.m"
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_6,
#line 462 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_7,
#line 462 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_8,
#line 462 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_9,
#line 462 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_10,
#line 462 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_11)
#line 462 "follow_vars.m"
{
#line 467 "follow_vars.m"
  {
#line 467 "follow_vars.m"
    MR_bool ll_backend__follow_vars__succeeded;

#line 467 "follow_vars.m"
    if ((ll_backend__follow_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 467 "follow_vars.m"
      {
#line 467 "follow_vars.m"
        *ll_backend__follow_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 467 "follow_vars.m"
        *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_11 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_10;
#line 467 "follow_vars.m"
        *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_9 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_8;
#line 467 "follow_vars.m"
        *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_7 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_6;
#line 467 "follow_vars.m"
      }
#line 467 "follow_vars.m"
    else
#line 471 "follow_vars.m"
      {
#line 471 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 471 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Goals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 471 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Goal_26;
#line 471 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Goals_27;
#line 471 "follow_vars.m"
        MR_Word ll_backend__follow_vars__AttachToNext_50;
#line 471 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Goal1_51;
#line 471 "follow_vars.m"
        MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_59_59;
#line 471 "follow_vars.m"
        MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_60_60;
#line 471 "follow_vars.m"
        MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_61_61;
#line 471 "follow_vars.m"
        MR_Word ll_backend__follow_vars__GoalExpr0_74;
#line 471 "follow_vars.m"
        MR_Word ll_backend__follow_vars__GoalInfo0_75;
#line 471 "follow_vars.m"
        MR_Word ll_backend__follow_vars__GoalExpr_76;
#line 471 "follow_vars.m"
        MR_Word ll_backend__follow_vars__GoalInfo_77;
#line 473 "follow_vars.m"
        MR_Word ll_backend__follow_vars__GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_24, (MR_Integer) 0)));
#line 473 "follow_vars.m"
        MR_Word ll_backend__follow_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_24, (MR_Integer) 1)));

#line 477 "follow_vars.m"
        if (((MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_34)) == (MR_mktag((MR_Integer) 2))))
#line 475 "follow_vars.m"
          {
#line 475 "follow_vars.m"
            MR_Word ll_backend__follow_vars__BuiltinState_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 3)));
#line 475 "follow_vars.m"
            MR_Word ll_backend__follow_vars__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 0)));
#line 475 "follow_vars.m"
            MR_Integer ll_backend__follow_vars__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 1)));
#line 475 "follow_vars.m"
            MR_Word ll_backend__follow_vars__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 2)));
#line 475 "follow_vars.m"
            MR_Word ll_backend__follow_vars__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 4)));
#line 475 "follow_vars.m"
            MR_Word ll_backend__follow_vars__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 5)));

#line 476 "follow_vars.m"
            ll_backend__follow_vars__succeeded = (ll_backend__follow_vars__BuiltinState_39 == (MR_Integer) 0);
#line 475 "follow_vars.m"
          }
#line 477 "follow_vars.m"
        else
#line 477 "follow_vars.m"
          if (((MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_34)) == (MR_mktag((MR_Integer) 1))))
#line 478 "follow_vars.m"
            {
#line 478 "follow_vars.m"
              MR_Word ll_backend__follow_vars__Unification_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 3)));
#line 478 "follow_vars.m"
              MR_Word ll_backend__follow_vars__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 0)));
#line 478 "follow_vars.m"
              MR_Word ll_backend__follow_vars__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 1)));
#line 478 "follow_vars.m"
              MR_Word ll_backend__follow_vars__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 2)));
#line 478 "follow_vars.m"
              MR_Word ll_backend__follow_vars__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 4)));
#line 479 "follow_vars.m"
              MR_Word ll_backend__follow_vars__V_47_47;
#line 479 "follow_vars.m"
              MR_Word ll_backend__follow_vars__V_48_48;
#line 479 "follow_vars.m"
              MR_Word ll_backend__follow_vars__V_49_49;

#line 479 "follow_vars.m"
              ll_backend__follow_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_vars__Unification_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__Unification_45, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 479 "follow_vars.m"
              if (ll_backend__follow_vars__succeeded)
#line 479 "follow_vars.m"
                {
#line 479 "follow_vars.m"
                  ll_backend__follow_vars__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__Unification_45, (MR_Integer) 1)));
#line 479 "follow_vars.m"
                  ll_backend__follow_vars__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__Unification_45, (MR_Integer) 2)));
#line 479 "follow_vars.m"
                  ll_backend__follow_vars__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__Unification_45, (MR_Integer) 3)));
#line 479 "follow_vars.m"
                }
#line 479 "follow_vars.m"
              ll_backend__follow_vars__succeeded = !(ll_backend__follow_vars__succeeded);
#line 478 "follow_vars.m"
            }
#line 477 "follow_vars.m"
          else
#line 477 "follow_vars.m"
            ll_backend__follow_vars__succeeded = MR_FALSE;
#line 483 "follow_vars.m"
        if (ll_backend__follow_vars__succeeded)
#line 482 "follow_vars.m"
          ll_backend__follow_vars__AttachToNext_50 = (MR_Integer) 0;
#line 483 "follow_vars.m"
        else
#line 484 "follow_vars.m"
          ll_backend__follow_vars__AttachToNext_50 = (MR_Integer) 1;
#line 486 "follow_vars.m"
        {
#line 486 "follow_vars.m"
          ll_backend__follow_vars__find_follow_vars_in_conj_11_p_0(ll_backend__follow_vars__Goals0_25, &ll_backend__follow_vars__Goals_27, ll_backend__follow_vars__VarTypes_3, ll_backend__follow_vars__HeadVar__4_4, ll_backend__follow_vars__AttachToNext_50, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_6, &ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_59_59, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_8, &ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_60_60, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_10, &ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_61_61);
        }
#line 112 "follow_vars.m"
        ll_backend__follow_vars__GoalExpr0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_24, (MR_Integer) 0)));
#line 112 "follow_vars.m"
        ll_backend__follow_vars__GoalInfo0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_24, (MR_Integer) 1)));
#line 113 "follow_vars.m"
        {
#line 113 "follow_vars.m"
          ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(ll_backend__follow_vars__GoalExpr0_74, &ll_backend__follow_vars__GoalExpr_76, ll_backend__follow_vars__GoalInfo0_75, &ll_backend__follow_vars__GoalInfo_77, ll_backend__follow_vars__VarTypes_3, ll_backend__follow_vars__HeadVar__4_4, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_59_59, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_7, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_60_60, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_9, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_61_61, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_11);
        }
#line 112 "follow_vars.m"
        {
#line 112 "follow_vars.m"
          ll_backend__follow_vars__Goal1_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 112 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal1_51, 0) = ((MR_Box) (ll_backend__follow_vars__GoalExpr_76));
#line 112 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal1_51, 1) = ((MR_Box) (ll_backend__follow_vars__GoalInfo_77));
#line 112 "follow_vars.m"
        }
#line 495 "follow_vars.m"
        if ((ll_backend__follow_vars__HeadVar__5_5 == (MR_Integer) 0))
#line 497 "follow_vars.m"
          ll_backend__follow_vars__Goal_26 = ll_backend__follow_vars__Goal1_51;
#line 495 "follow_vars.m"
        else
#line 491 "follow_vars.m"
          {
#line 491 "follow_vars.m"
            MR_Word ll_backend__follow_vars__FollowVars_52;
#line 491 "follow_vars.m"
            MR_Word ll_backend__follow_vars__V_65_65;

#line 492 "follow_vars.m"
            {
#line 492 "follow_vars.m"
              ll_backend__follow_vars__FollowVars_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 492 "follow_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_52, 0) = ((MR_Box) (*ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_7));
#line 492 "follow_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_52, 1) = ((MR_Box) (*ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_9));
#line 492 "follow_vars.m"
              MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_52, 2) = ((MR_Box) (*ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_11));
#line 492 "follow_vars.m"
            }
#line 494 "follow_vars.m"
            {
#line 494 "follow_vars.m"
              ll_backend__follow_vars__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 494 "follow_vars.m"
              MR_hl_field(MR_mktag(1), ll_backend__follow_vars__V_65_65, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVars_52));
#line 494 "follow_vars.m"
            }
#line 494 "follow_vars.m"
            {
#line 494 "follow_vars.m"
              hlds__hlds_llds__goal_set_follow_vars_3_p_0(ll_backend__follow_vars__V_65_65, ll_backend__follow_vars__Goal1_51, &ll_backend__follow_vars__Goal_26);
            }
#line 491 "follow_vars.m"
          }
#line 471 "follow_vars.m"
        {
#line 471 "follow_vars.m"
          MR_Word base;
#line 471 "follow_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "follow_vars.m"
          *ll_backend__follow_vars__HeadVar__2_2 = base;
#line 471 "follow_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_vars__Goal_26));
#line 471 "follow_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_vars__Goals_27));
#line 471 "follow_vars.m"
        }
#line 471 "follow_vars.m"
      }
#line 467 "follow_vars.m"
  }
#line 462 "follow_vars.m"
}

#line 432 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_cases_10_p_0(
#line 432 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
#line 432 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__HeadVar__2_2,
#line 432 "follow_vars.m"
  MR_Word ll_backend__follow_vars__VarTypes_3,
#line 432 "follow_vars.m"
  MR_Word ll_backend__follow_vars__ModuleInfo_4,
#line 432 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__5_5,
#line 432 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__HeadVar__6_6,
#line 432 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__HeadVar__7_7,
#line 432 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__HeadVar__8_8,
#line 432 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__HeadVar__9_9,
#line 432 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__HeadVar__10_10)
#line 432 "follow_vars.m"
{
#line 437 "follow_vars.m"
  {
#line 437 "follow_vars.m"
    MR_bool ll_backend__follow_vars__succeeded;

#line 437 "follow_vars.m"
    if ((ll_backend__follow_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "follow_vars.m"
      {
#line 437 "follow_vars.m"
        *ll_backend__follow_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 437 "follow_vars.m"
        *ll_backend__follow_vars__HeadVar__10_10 = ll_backend__follow_vars__HeadVar__9_9;
#line 437 "follow_vars.m"
        *ll_backend__follow_vars__HeadVar__8_8 = ll_backend__follow_vars__HeadVar__7_7;
#line 437 "follow_vars.m"
        *ll_backend__follow_vars__HeadVar__6_6 = ll_backend__follow_vars__HeadVar__5_5;
#line 437 "follow_vars.m"
      }
#line 437 "follow_vars.m"
    else
#line 442 "follow_vars.m"
      {
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Case0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Case_24;
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Cases_25;
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__MainConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Case0_22, (MR_Integer) 0)));
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__OtherConsIds_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Case0_22, (MR_Integer) 1)));
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Goal0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Case0_22, (MR_Integer) 2)));
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Goal1_37;
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__FollowVars_38;
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Goal_39;
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__V_43_43;
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__GoalExpr0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_36, (MR_Integer) 0)));
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__GoalInfo0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_36, (MR_Integer) 1)));
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__GoalExpr_54;
#line 442 "follow_vars.m"
        MR_Word ll_backend__follow_vars__GoalInfo_55;
#line 452 "follow_vars.m"
        MR_Word ll_backend__follow_vars___FollowVarsMap_40;
#line 452 "follow_vars.m"
        MR_Integer ll_backend__follow_vars___NextNonReservedR_41;
#line 452 "follow_vars.m"
        MR_Integer ll_backend__follow_vars___NextNonReservedF_42;

#line 113 "follow_vars.m"
        {
#line 113 "follow_vars.m"
          ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(ll_backend__follow_vars__GoalExpr0_52, &ll_backend__follow_vars__GoalExpr_54, ll_backend__follow_vars__GoalInfo0_53, &ll_backend__follow_vars__GoalInfo_55, ll_backend__follow_vars__VarTypes_3, ll_backend__follow_vars__ModuleInfo_4, ll_backend__follow_vars__HeadVar__5_5, ll_backend__follow_vars__HeadVar__6_6, ll_backend__follow_vars__HeadVar__7_7, ll_backend__follow_vars__HeadVar__8_8, ll_backend__follow_vars__HeadVar__9_9, ll_backend__follow_vars__HeadVar__10_10);
        }
#line 112 "follow_vars.m"
        {
#line 112 "follow_vars.m"
          ll_backend__follow_vars__Goal1_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 112 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal1_37, 0) = ((MR_Box) (ll_backend__follow_vars__GoalExpr_54));
#line 112 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal1_37, 1) = ((MR_Box) (ll_backend__follow_vars__GoalInfo_55));
#line 112 "follow_vars.m"
        }
#line 448 "follow_vars.m"
        {
#line 448 "follow_vars.m"
          ll_backend__follow_vars__FollowVars_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 448 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_38, 0) = ((MR_Box) (*ll_backend__follow_vars__HeadVar__6_6));
#line 448 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_38, 1) = ((MR_Box) (*ll_backend__follow_vars__HeadVar__8_8));
#line 448 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_38, 2) = ((MR_Box) (*ll_backend__follow_vars__HeadVar__10_10));
#line 448 "follow_vars.m"
        }
#line 450 "follow_vars.m"
        {
#line 450 "follow_vars.m"
          ll_backend__follow_vars__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 450 "follow_vars.m"
          MR_hl_field(MR_mktag(1), ll_backend__follow_vars__V_43_43, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVars_38));
#line 450 "follow_vars.m"
        }
#line 450 "follow_vars.m"
        {
#line 450 "follow_vars.m"
          hlds__hlds_llds__goal_set_follow_vars_3_p_0(ll_backend__follow_vars__V_43_43, ll_backend__follow_vars__Goal1_37, &ll_backend__follow_vars__Goal_39);
        }
#line 451 "follow_vars.m"
        {
#line 451 "follow_vars.m"
          ll_backend__follow_vars__Case_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 451 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Case_24, 0) = ((MR_Box) (ll_backend__follow_vars__MainConsId_34));
#line 451 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Case_24, 1) = ((MR_Box) (ll_backend__follow_vars__OtherConsIds_35));
#line 451 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Case_24, 2) = ((MR_Box) (ll_backend__follow_vars__Goal_39));
#line 451 "follow_vars.m"
        }
#line 452 "follow_vars.m"
        {
#line 452 "follow_vars.m"
          ll_backend__follow_vars__find_follow_vars_in_cases_10_p_0(ll_backend__follow_vars__Cases0_23, &ll_backend__follow_vars__Cases_25, ll_backend__follow_vars__VarTypes_3, ll_backend__follow_vars__ModuleInfo_4, ll_backend__follow_vars__HeadVar__5_5, &ll_backend__follow_vars___FollowVarsMap_40, *ll_backend__follow_vars__HeadVar__8_8, &ll_backend__follow_vars___NextNonReservedR_41, *ll_backend__follow_vars__HeadVar__10_10, &ll_backend__follow_vars___NextNonReservedF_42);
        }
#line 442 "follow_vars.m"
        {
#line 442 "follow_vars.m"
          MR_Word base;
#line 442 "follow_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "follow_vars.m"
          *ll_backend__follow_vars__HeadVar__2_2 = base;
#line 442 "follow_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_vars__Case_24));
#line 442 "follow_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_vars__Cases_25));
#line 442 "follow_vars.m"
        }
#line 442 "follow_vars.m"
      }
#line 437 "follow_vars.m"
  }
#line 432 "follow_vars.m"
}

#line 395 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(
#line 395 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
#line 395 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__HeadVar__2_2,
#line 395 "follow_vars.m"
  MR_Word ll_backend__follow_vars__VarTypes_3,
#line 395 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__4_4,
#line 395 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__5_5,
#line 395 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__FollowVarsMap_6,
#line 395 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__HeadVar__7_7,
#line 395 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__NextNonReservedR_8,
#line 395 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__HeadVar__9_9,
#line 395 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__NextNonReservedF_10)
#line 395 "follow_vars.m"
{
#line 400 "follow_vars.m"
  {
#line 400 "follow_vars.m"
    MR_bool ll_backend__follow_vars__succeeded;

#line 400 "follow_vars.m"
    if ((ll_backend__follow_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 400 "follow_vars.m"
      {
#line 400 "follow_vars.m"
        *ll_backend__follow_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 400 "follow_vars.m"
        *ll_backend__follow_vars__FollowVarsMap_6 = ll_backend__follow_vars__HeadVar__5_5;
#line 400 "follow_vars.m"
        *ll_backend__follow_vars__NextNonReservedR_8 = ll_backend__follow_vars__HeadVar__7_7;
#line 400 "follow_vars.m"
        *ll_backend__follow_vars__NextNonReservedF_10 = ll_backend__follow_vars__HeadVar__9_9;
#line 400 "follow_vars.m"
      }
#line 400 "follow_vars.m"
    else
#line 406 "follow_vars.m"
      {
#line 406 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 406 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 406 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Goal_18;
#line 406 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Goals_19;
#line 406 "follow_vars.m"
        MR_Word ll_backend__follow_vars__Goal1_28;
#line 406 "follow_vars.m"
        MR_Word ll_backend__follow_vars__FollowVars_29;
#line 406 "follow_vars.m"
        MR_Word ll_backend__follow_vars__V_33_33;
#line 406 "follow_vars.m"
        MR_Word ll_backend__follow_vars__GoalExpr0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_16, (MR_Integer) 0)));
#line 406 "follow_vars.m"
        MR_Word ll_backend__follow_vars__GoalInfo0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_16, (MR_Integer) 1)));
#line 406 "follow_vars.m"
        MR_Word ll_backend__follow_vars__GoalExpr_44;
#line 406 "follow_vars.m"
        MR_Word ll_backend__follow_vars__GoalInfo_45;
#line 414 "follow_vars.m"
        MR_Word ll_backend__follow_vars___FollowVarsMap_30;
#line 414 "follow_vars.m"
        MR_Integer ll_backend__follow_vars___NextNonReservedR_31;
#line 414 "follow_vars.m"
        MR_Integer ll_backend__follow_vars___NextNonReservedF_32;

#line 113 "follow_vars.m"
        {
#line 113 "follow_vars.m"
          ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(ll_backend__follow_vars__GoalExpr0_42, &ll_backend__follow_vars__GoalExpr_44, ll_backend__follow_vars__GoalInfo0_43, &ll_backend__follow_vars__GoalInfo_45, ll_backend__follow_vars__VarTypes_3, ll_backend__follow_vars__HeadVar__4_4, ll_backend__follow_vars__HeadVar__5_5, ll_backend__follow_vars__FollowVarsMap_6, ll_backend__follow_vars__HeadVar__7_7, ll_backend__follow_vars__NextNonReservedR_8, ll_backend__follow_vars__HeadVar__9_9, ll_backend__follow_vars__NextNonReservedF_10);
        }
#line 112 "follow_vars.m"
        {
#line 112 "follow_vars.m"
          ll_backend__follow_vars__Goal1_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 112 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal1_28, 0) = ((MR_Box) (ll_backend__follow_vars__GoalExpr_44));
#line 112 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal1_28, 1) = ((MR_Box) (ll_backend__follow_vars__GoalInfo_45));
#line 112 "follow_vars.m"
        }
#line 411 "follow_vars.m"
        {
#line 411 "follow_vars.m"
          ll_backend__follow_vars__FollowVars_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 411 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_29, 0) = ((MR_Box) (*ll_backend__follow_vars__FollowVarsMap_6));
#line 411 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_29, 1) = ((MR_Box) (*ll_backend__follow_vars__NextNonReservedR_8));
#line 411 "follow_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_29, 2) = ((MR_Box) (*ll_backend__follow_vars__NextNonReservedF_10));
#line 411 "follow_vars.m"
        }
#line 413 "follow_vars.m"
        {
#line 413 "follow_vars.m"
          ll_backend__follow_vars__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 413 "follow_vars.m"
          MR_hl_field(MR_mktag(1), ll_backend__follow_vars__V_33_33, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVars_29));
#line 413 "follow_vars.m"
        }
#line 413 "follow_vars.m"
        {
#line 413 "follow_vars.m"
          hlds__hlds_llds__goal_set_follow_vars_3_p_0(ll_backend__follow_vars__V_33_33, ll_backend__follow_vars__Goal1_28, &ll_backend__follow_vars__Goal_18);
        }
#line 414 "follow_vars.m"
        {
#line 414 "follow_vars.m"
          ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(ll_backend__follow_vars__Goals0_17, &ll_backend__follow_vars__Goals_19, ll_backend__follow_vars__VarTypes_3, ll_backend__follow_vars__HeadVar__4_4, ll_backend__follow_vars__HeadVar__5_5, &ll_backend__follow_vars___FollowVarsMap_30, ll_backend__follow_vars__HeadVar__7_7, &ll_backend__follow_vars___NextNonReservedR_31, ll_backend__follow_vars__HeadVar__9_9, &ll_backend__follow_vars___NextNonReservedF_32);
        }
#line 406 "follow_vars.m"
        {
#line 406 "follow_vars.m"
          MR_Word base;
#line 406 "follow_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "follow_vars.m"
          *ll_backend__follow_vars__HeadVar__2_2 = base;
#line 406 "follow_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_vars__Goal_18));
#line 406 "follow_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_vars__Goals_19));
#line 406 "follow_vars.m"
        }
#line 406 "follow_vars.m"
      }
#line 400 "follow_vars.m"
  }
#line 395 "follow_vars.m"
}

#line 352 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_p_0(
#line 352 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
#line 352 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__2_2,
#line 352 "follow_vars.m"
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_3,
#line 352 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_4,
#line 352 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextReg_0_5,
#line 352 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextReg_6)
#line 352 "follow_vars.m"
{
#line 356 "follow_vars.m"
  while (MR_TRUE)
#line 356 "follow_vars.m"
    {
#line 356 "follow_vars.m"
      /* tailcall optimized into a loop */
#line 356 "follow_vars.m"
      {
#line 356 "follow_vars.m"
        MR_bool ll_backend__follow_vars__succeeded;

#line 356 "follow_vars.m"
        if ((ll_backend__follow_vars__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "follow_vars.m"
          {
#line 356 "follow_vars.m"
            *ll_backend__follow_vars__STATE_VARIABLE_NextReg_6 = ll_backend__follow_vars__STATE_VARIABLE_NextReg_0_5;
#line 356 "follow_vars.m"
            *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_4 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_3;
#line 356 "follow_vars.m"
          }
#line 356 "follow_vars.m"
        else
#line 358 "follow_vars.m"
          {
#line 358 "follow_vars.m"
            MR_Word ll_backend__follow_vars__InVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 358 "follow_vars.m"
            MR_Word ll_backend__follow_vars__InVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 358 "follow_vars.m"
            MR_Word ll_backend__follow_vars__Locn_19;
#line 358 "follow_vars.m"
            MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_25_25;
#line 358 "follow_vars.m"
            MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextReg_26_26;
#line 362 "follow_vars.m"
            MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_24_24;

#line 359 "follow_vars.m"
            {
#line 359 "follow_vars.m"
              ll_backend__follow_vars__Locn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "follow_vars.m"
              MR_hl_field(MR_mktag(1), ll_backend__follow_vars__Locn_19, 0) = ((MR_Box) (ll_backend__follow_vars__HeadVar__1_1));
#line 359 "follow_vars.m"
              MR_hl_field(MR_mktag(1), ll_backend__follow_vars__Locn_19, 1) = ((MR_Box) (ll_backend__follow_vars__STATE_VARIABLE_NextReg_0_5));
#line 359 "follow_vars.m"
            }
#line 360 "follow_vars.m"
            {
#line 360 "follow_vars.m"
              ll_backend__follow_vars__succeeded = mercury__map__insert_4_p_0((MR_Word) &ll_backend__follow_vars_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__follow_vars__InVar_15)), ((MR_Box) (ll_backend__follow_vars__Locn_19)), ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_3, &ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_24_24);
            }
#line 362 "follow_vars.m"
            if (ll_backend__follow_vars__succeeded)
#line 360 "follow_vars.m"
              ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_25_25 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_24_24;
#line 362 "follow_vars.m"
            else
#line 360 "follow_vars.m"
              ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_25_25 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_3;
#line 370 "follow_vars.m"
            ll_backend__follow_vars__STATE_VARIABLE_NextReg_26_26 = (ll_backend__follow_vars__STATE_VARIABLE_NextReg_0_5 + (MR_Integer) 1);
#line 371 "follow_vars.m"
            /* direct tailcall eliminated */
#line 371 "follow_vars.m"
            {
#line 371 "follow_vars.m"
              MR_Word ll_backend__follow_vars__HeadVar__2__tmp_copy_2 = ll_backend__follow_vars__InVars_16;
#line 371 "follow_vars.m"
              MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0__tmp_copy_3 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_25_25;
#line 371 "follow_vars.m"
              MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextReg_0__tmp_copy_5 = ll_backend__follow_vars__STATE_VARIABLE_NextReg_26_26;

#line 371 "follow_vars.m"
              ll_backend__follow_vars__STATE_VARIABLE_NextReg_0_5 = ll_backend__follow_vars__STATE_VARIABLE_NextReg_0__tmp_copy_5;
#line 371 "follow_vars.m"
              ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_3 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0__tmp_copy_3;
#line 371 "follow_vars.m"
              ll_backend__follow_vars__HeadVar__2_2 = ll_backend__follow_vars__HeadVar__2__tmp_copy_2;
#line 371 "follow_vars.m"
            }
#line 371 "follow_vars.m"
            continue;
#line 358 "follow_vars.m"
          }
#line 356 "follow_vars.m"
      }
#line 356 "follow_vars.m"
      break;
#line 356 "follow_vars.m"
    }
#line 352 "follow_vars.m"
}

#line 313 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_from_arginfo_7_p_0(
#line 313 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
#line 313 "follow_vars.m"
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2,
#line 313 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_3,
#line 313 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4,
#line 313 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_5,
#line 313 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6,
#line 313 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_7)
#line 313 "follow_vars.m"
{
#line 317 "follow_vars.m"
  while (MR_TRUE)
#line 317 "follow_vars.m"
    {
#line 317 "follow_vars.m"
      /* tailcall optimized into a loop */
#line 317 "follow_vars.m"
      {
#line 317 "follow_vars.m"
        MR_bool ll_backend__follow_vars__succeeded;

#line 317 "follow_vars.m"
        if ((ll_backend__follow_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "follow_vars.m"
          {
#line 317 "follow_vars.m"
            *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_7 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
#line 317 "follow_vars.m"
            *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_5 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
#line 317 "follow_vars.m"
            *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_3 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2;
#line 317 "follow_vars.m"
          }
#line 317 "follow_vars.m"
        else
#line 320 "follow_vars.m"
          {
#line 320 "follow_vars.m"
            MR_Word ll_backend__follow_vars__ArgVar_17;
#line 320 "follow_vars.m"
            MR_Word ll_backend__follow_vars__ArgLoc_18;
#line 320 "follow_vars.m"
            MR_Word ll_backend__follow_vars__Mode_19;
#line 320 "follow_vars.m"
            MR_Word ll_backend__follow_vars__ArgsInfos_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 320 "follow_vars.m"
            MR_Word ll_backend__follow_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 320 "follow_vars.m"
            MR_Word ll_backend__follow_vars__V_34_34;
#line 320 "follow_vars.m"
            MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_36_36;
#line 320 "follow_vars.m"
            MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_38_38;
#line 320 "follow_vars.m"
            MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_41_41;

#line 319 "follow_vars.m"
            ll_backend__follow_vars__ArgVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_33_33, (MR_Integer) 0)));
#line 319 "follow_vars.m"
            ll_backend__follow_vars__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_33_33, (MR_Integer) 1)));
#line 319 "follow_vars.m"
            ll_backend__follow_vars__ArgLoc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_34_34, (MR_Integer) 0)));
#line 319 "follow_vars.m"
            ll_backend__follow_vars__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_34_34, (MR_Integer) 1)));
#line 342 "follow_vars.m"
            if ((ll_backend__follow_vars__Mode_19 == (MR_Integer) 0))
#line 322 "follow_vars.m"
              {
#line 322 "follow_vars.m"
                MR_Word ll_backend__follow_vars__RegType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__ArgLoc_18, (MR_Integer) 0)));
#line 322 "follow_vars.m"
                MR_Integer ll_backend__follow_vars__RegNum_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__ArgLoc_18, (MR_Integer) 1)));
#line 322 "follow_vars.m"
                MR_Word ll_backend__follow_vars__Locn_26;
#line 327 "follow_vars.m"
                MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35;

#line 324 "follow_vars.m"
                {
#line 324 "follow_vars.m"
                  ll_backend__follow_vars__Locn_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "follow_vars.m"
                  MR_hl_field(MR_mktag(1), ll_backend__follow_vars__Locn_26, 0) = ((MR_Box) (ll_backend__follow_vars__RegType_24));
#line 324 "follow_vars.m"
                  MR_hl_field(MR_mktag(1), ll_backend__follow_vars__Locn_26, 1) = ((MR_Box) (ll_backend__follow_vars__RegNum_25));
#line 324 "follow_vars.m"
                }
#line 325 "follow_vars.m"
                {
#line 325 "follow_vars.m"
                  ll_backend__follow_vars__succeeded = mercury__map__insert_4_p_0((MR_Word) &ll_backend__follow_vars_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__follow_vars__ArgVar_17)), ((MR_Box) (ll_backend__follow_vars__Locn_26)), ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2, &ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35);
                }
#line 327 "follow_vars.m"
                if (ll_backend__follow_vars__succeeded)
#line 325 "follow_vars.m"
                  ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_36_36 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35;
#line 327 "follow_vars.m"
                else
#line 325 "follow_vars.m"
                  ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_36_36 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2;
#line 338 "follow_vars.m"
                if ((ll_backend__follow_vars__RegType_24 == (MR_Integer) 1))
#line 339 "follow_vars.m"
                  {
#line 339 "follow_vars.m"
                    MR_Integer ll_backend__follow_vars__V_37_37 = (ll_backend__follow_vars__RegNum_25 + (MR_Integer) 1);

#line 340 "follow_vars.m"
                    {
#line 340 "follow_vars.m"
                      mercury__int__max_3_p_0(ll_backend__follow_vars__V_37_37, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6, &ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_38_38);
                    }
#line 340 "follow_vars.m"
                    ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_41_41 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
#line 339 "follow_vars.m"
                  }
#line 338 "follow_vars.m"
                else
#line 336 "follow_vars.m"
                  {
#line 336 "follow_vars.m"
                    MR_Integer ll_backend__follow_vars__V_40_40 = (ll_backend__follow_vars__RegNum_25 + (MR_Integer) 1);

#line 337 "follow_vars.m"
                    {
#line 337 "follow_vars.m"
                      mercury__int__max_3_p_0(ll_backend__follow_vars__V_40_40, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4, &ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_41_41);
                    }
#line 337 "follow_vars.m"
                    ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_38_38 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
#line 336 "follow_vars.m"
                  }
#line 322 "follow_vars.m"
              }
#line 342 "follow_vars.m"
            else
#line 342 "follow_vars.m"
              if ((ll_backend__follow_vars__Mode_19 == (MR_Integer) 1))
#line 343 "follow_vars.m"
                {
#line 343 "follow_vars.m"
                  ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_36_36 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2;
#line 343 "follow_vars.m"
                  ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_41_41 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
#line 343 "follow_vars.m"
                  ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_38_38 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
#line 343 "follow_vars.m"
                }
#line 342 "follow_vars.m"
              else
#line 344 "follow_vars.m"
                {
#line 344 "follow_vars.m"
                  ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_36_36 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2;
#line 344 "follow_vars.m"
                  ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_41_41 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
#line 344 "follow_vars.m"
                  ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_38_38 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
#line 344 "follow_vars.m"
                }
#line 347 "follow_vars.m"
            /* direct tailcall eliminated */
#line 347 "follow_vars.m"
            {
#line 347 "follow_vars.m"
              MR_Word ll_backend__follow_vars__HeadVar__1__tmp_copy_1 = ll_backend__follow_vars__ArgsInfos_20;
#line 347 "follow_vars.m"
              MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0__tmp_copy_2 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_36_36;
#line 347 "follow_vars.m"
              MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0__tmp_copy_4 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_41_41;
#line 347 "follow_vars.m"
              MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0__tmp_copy_6 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_38_38;

#line 347 "follow_vars.m"
              ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0__tmp_copy_6;
#line 347 "follow_vars.m"
              ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0__tmp_copy_4;
#line 347 "follow_vars.m"
              ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0__tmp_copy_2;
#line 347 "follow_vars.m"
              ll_backend__follow_vars__HeadVar__1_1 = ll_backend__follow_vars__HeadVar__1__tmp_copy_1;
#line 347 "follow_vars.m"
            }
#line 347 "follow_vars.m"
            continue;
#line 320 "follow_vars.m"
          }
#line 317 "follow_vars.m"
      }
#line 317 "follow_vars.m"
      break;
#line 317 "follow_vars.m"
    }
#line 313 "follow_vars.m"
}

#line 302 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_call_7_p_0(
#line 302 "follow_vars.m"
  MR_Word ll_backend__follow_vars__PredId_8,
#line 302 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__ProcId_9,
#line 302 "follow_vars.m"
  MR_Word ll_backend__follow_vars__Args_10,
#line 302 "follow_vars.m"
  MR_Word ll_backend__follow_vars__ModuleInfo_11,
#line 302 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__FollowVarsMap_12,
#line 302 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__NextNonReservedR_13,
#line 302 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__NextNonReservedF_14)
#line 302 "follow_vars.m"
{
#line 306 "follow_vars.m"
  {
#line 306 "follow_vars.m"
    MR_bool ll_backend__follow_vars__succeeded;
#line 306 "follow_vars.m"
    MR_Word ll_backend__follow_vars__TypeInfo_22_22;
#line 306 "follow_vars.m"
    MR_Word ll_backend__follow_vars__ProcInfo_16;
#line 306 "follow_vars.m"
    MR_Word ll_backend__follow_vars__ArgInfo_17;
#line 306 "follow_vars.m"
    MR_Word ll_backend__follow_vars__ArgsInfos_18;
#line 306 "follow_vars.m"
    MR_Word ll_backend__follow_vars__V_19_19;
#line 307 "follow_vars.m"
    MR_Word ll_backend__follow_vars__V_15_15;

#line 307 "follow_vars.m"
    {
#line 307 "follow_vars.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__follow_vars__ModuleInfo_11, ll_backend__follow_vars__PredId_8, ll_backend__follow_vars__ProcId_9, &ll_backend__follow_vars__V_15_15, &ll_backend__follow_vars__ProcInfo_16);
    }
#line 308 "follow_vars.m"
    {
#line 308 "follow_vars.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__follow_vars__ProcInfo_16, &ll_backend__follow_vars__ArgInfo_17);
    }
#line 1326 "ll_backend.follow_vars.c"
    ll_backend__follow_vars__TypeInfo_22_22 = (MR_Word) &ll_backend__follow_vars_scalar_common_1[0];
#line 309 "follow_vars.m"
    {
#line 309 "follow_vars.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(ll_backend__follow_vars__TypeInfo_22_22, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__follow_vars__Args_10, ll_backend__follow_vars__ArgInfo_17, &ll_backend__follow_vars__ArgsInfos_18);
    }
#line 310 "follow_vars.m"
    {
#line 310 "follow_vars.m"
      ll_backend__follow_vars__V_19_19 = mercury__map__init_0_f_0(ll_backend__follow_vars__TypeInfo_22_22, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
    }
#line 310 "follow_vars.m"
    {
#line 310 "follow_vars.m"
      ll_backend__follow_vars__find_follow_vars_from_arginfo_7_p_0(ll_backend__follow_vars__ArgsInfos_18, ll_backend__follow_vars__V_19_19, ll_backend__follow_vars__FollowVarsMap_12, (MR_Integer) 1, ll_backend__follow_vars__NextNonReservedR_13, (MR_Integer) 1, ll_backend__follow_vars__NextNonReservedF_14);
#line 310 "follow_vars.m"
      return;
    }
#line 306 "follow_vars.m"
  }
#line 302 "follow_vars.m"
}

#line 296 "follow_vars.m"
static MR_bool MR_CALL 
ll_backend__follow_vars__is_reg_r_arg_1_p_0(
#line 296 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1)
#line 296 "follow_vars.m"
{
#line 298 "follow_vars.m"
  {
#line 298 "follow_vars.m"
    MR_bool ll_backend__follow_vars__succeeded;
#line 298 "follow_vars.m"
    MR_Word ll_backend__follow_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 298 "follow_vars.m"
    MR_Word ll_backend__follow_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_5_5, (MR_Integer) 0)));
#line 298 "follow_vars.m"
    MR_Word ll_backend__follow_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_6_6, (MR_Integer) 0)));
#line 298 "follow_vars.m"
    MR_Word ll_backend__follow_vars__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 298 "follow_vars.m"
    MR_Word ll_backend__follow_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_5_5, (MR_Integer) 1)));
#line 298 "follow_vars.m"
    MR_Integer ll_backend__follow_vars__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_6_6, (MR_Integer) 1)));

#line 298 "follow_vars.m"
    ll_backend__follow_vars__succeeded = (ll_backend__follow_vars__V_7_7 == (MR_Integer) 0);
#line 298 "follow_vars.m"
    return ll_backend__follow_vars__succeeded;
#line 298 "follow_vars.m"
  }
#line 296 "follow_vars.m"
}

#line 272 "follow_vars.m"
static MR_bool MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0_1(
#line 272 "follow_vars.m"
  MR_Box ll_backend__follow_vars__closure_arg,
#line 272 "follow_vars.m"
  MR_Box ll_backend__follow_vars__wrapper_arg_1)
#line 272 "follow_vars.m"
{
#line 272 "follow_vars.m"
  {
#line 272 "follow_vars.m"
    MR_bool ll_backend__follow_vars__succeeded;
#line 272 "follow_vars.m"
    MR_Box ll_backend__follow_vars__closure = ll_backend__follow_vars__closure_arg;

#line 272 "follow_vars.m"
    {
#line 272 "follow_vars.m"
      return ll_backend__follow_vars__succeeded = ll_backend__follow_vars__is_reg_r_arg_1_p_0(((MR_Word) ll_backend__follow_vars__wrapper_arg_1));
    }
#line 272 "follow_vars.m"
    return ll_backend__follow_vars__succeeded;
#line 272 "follow_vars.m"
  }
#line 272 "follow_vars.m"
}

#line 119 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(
#line 119 "follow_vars.m"
  MR_Word ll_backend__follow_vars__GoalExpr0_13,
#line 119 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__GoalExpr_14,
#line 119 "follow_vars.m"
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112,
#line 119 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113,
#line 119 "follow_vars.m"
  MR_Word ll_backend__follow_vars__VarTypes_16,
#line 119 "follow_vars.m"
  MR_Word ll_backend__follow_vars__ModuleInfo_17,
#line 119 "follow_vars.m"
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114,
#line 119 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115,
#line 119 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116,
#line 119 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117,
#line 119 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118,
#line 119 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119)
#line 119 "follow_vars.m"
{
#line 128 "follow_vars.m"
  {
#line 128 "follow_vars.m"
    MR_bool ll_backend__follow_vars__succeeded;

#line 128 "follow_vars.m"
    if (((MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_13)) == (MR_mktag((MR_Integer) 0))))
#line 211 "follow_vars.m"
      {
#line 211 "follow_vars.m"
        MR_Word ll_backend__follow_vars__SubGoal0_53 = (MR_Word) MR_body(((MR_Word) ll_backend__follow_vars__GoalExpr0_13), (MR_Integer) 0);
#line 211 "follow_vars.m"
        MR_Word ll_backend__follow_vars__SubGoal_54;

#line 212 "follow_vars.m"
        {
#line 212 "follow_vars.m"
          ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(ll_backend__follow_vars__SubGoal0_53, &ll_backend__follow_vars__SubGoal_54, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
        }
#line 214 "follow_vars.m"
        *ll_backend__follow_vars__GoalExpr_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__follow_vars__SubGoal_54);
#line 214 "follow_vars.m"
        *ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113 = ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112;
#line 211 "follow_vars.m"
      }
#line 128 "follow_vars.m"
    else
#line 128 "follow_vars.m"
      if (((MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_13)) == (MR_mktag((MR_Integer) 2))))
#line 241 "follow_vars.m"
        {
#line 241 "follow_vars.m"
          MR_Word ll_backend__follow_vars__PredId_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 0)));
#line 241 "follow_vars.m"
          MR_Integer ll_backend__follow_vars__ProcId_67 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
#line 241 "follow_vars.m"
          MR_Word ll_backend__follow_vars__Args_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 2)));
#line 241 "follow_vars.m"
          MR_Word ll_backend__follow_vars__State_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 3)));
#line 241 "follow_vars.m"
          MR_Word ll_backend__follow_vars___UC_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 4)));
#line 241 "follow_vars.m"
          MR_Word ll_backend__follow_vars___Name_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 5)));

#line 242 "follow_vars.m"
          *ll_backend__follow_vars__GoalExpr_14 = ll_backend__follow_vars__GoalExpr0_13;
#line 245 "follow_vars.m"
          if ((ll_backend__follow_vars__State_69 == (MR_Integer) 0))
#line 244 "follow_vars.m"
            {
#line 244 "follow_vars.m"
              *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114;
#line 244 "follow_vars.m"
              *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116;
#line 244 "follow_vars.m"
              *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118;
#line 244 "follow_vars.m"
            }
#line 245 "follow_vars.m"
          else
#line 249 "follow_vars.m"
            {
#line 249 "follow_vars.m"
              ll_backend__follow_vars__find_follow_vars_in_call_7_p_0(ll_backend__follow_vars__PredId_66, ll_backend__follow_vars__ProcId_67, ll_backend__follow_vars__Args_68, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
            }
#line 249 "follow_vars.m"
          *ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113 = ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112;
#line 241 "follow_vars.m"
        }
#line 128 "follow_vars.m"
      else
#line 128 "follow_vars.m"
        if (((MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_13)) == (MR_mktag((MR_Integer) 1))))
#line 230 "follow_vars.m"
          {
#line 230 "follow_vars.m"
            MR_Word ll_backend__follow_vars__Unification_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 3)));
#line 230 "follow_vars.m"
            MR_Word ll_backend__follow_vars__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 0)));
#line 230 "follow_vars.m"
            MR_Word ll_backend__follow_vars__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
#line 230 "follow_vars.m"
            MR_Word ll_backend__follow_vars__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 2)));
#line 230 "follow_vars.m"
            MR_Word ll_backend__follow_vars__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 4)));
#line 237 "follow_vars.m"
            MR_Word ll_backend__follow_vars__RVar_64;
#line 237 "follow_vars.m"
            MR_Word ll_backend__follow_vars__DesiredLoc_65;
#line 233 "follow_vars.m"
            MR_Word ll_backend__follow_vars__TypeInfo_174_174;
#line 233 "follow_vars.m"
            MR_Word ll_backend__follow_vars__TypeCtorInfo_175_175;
#line 233 "follow_vars.m"
            MR_Word ll_backend__follow_vars__LVar_63;
#line 234 "follow_vars.m"
            MR_Box ll_backend__follow_vars__conv0_DesiredLoc_65;

#line 231 "follow_vars.m"
            *ll_backend__follow_vars__GoalExpr_14 = ll_backend__follow_vars__GoalExpr0_13;
#line 233 "follow_vars.m"
            ll_backend__follow_vars__succeeded = ((MR_tag((MR_Word) ll_backend__follow_vars__Unification_61)) == (MR_mktag((MR_Integer) 2)));
#line 233 "follow_vars.m"
            if (ll_backend__follow_vars__succeeded)
#line 233 "follow_vars.m"
              {
#line 233 "follow_vars.m"
                ll_backend__follow_vars__LVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__Unification_61, (MR_Integer) 0)));
#line 233 "follow_vars.m"
                ll_backend__follow_vars__RVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__Unification_61, (MR_Integer) 1)));
#line 1550 "ll_backend.follow_vars.c"
                ll_backend__follow_vars__TypeInfo_174_174 = (MR_Word) &ll_backend__follow_vars_scalar_common_1[0];
#line 1552 "ll_backend.follow_vars.c"
                ll_backend__follow_vars__TypeCtorInfo_175_175 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 234 "follow_vars.m"
                {
#line 234 "follow_vars.m"
                  ll_backend__follow_vars__succeeded = mercury__map__search_3_p_0(ll_backend__follow_vars__TypeInfo_174_174, ll_backend__follow_vars__TypeCtorInfo_175_175, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ((MR_Box) (ll_backend__follow_vars__LVar_63)), &ll_backend__follow_vars__conv0_DesiredLoc_65);
                }
#line 234 "follow_vars.m"
                if (ll_backend__follow_vars__succeeded)
#line 234 "follow_vars.m"
                  {
#line 234 "follow_vars.m"
                    ll_backend__follow_vars__DesiredLoc_65 = ((MR_Word) ll_backend__follow_vars__conv0_DesiredLoc_65);
#line 234 "follow_vars.m"
                    ll_backend__follow_vars__succeeded = MR_TRUE;
#line 234 "follow_vars.m"
                  }
#line 233 "follow_vars.m"
              }
#line 237 "follow_vars.m"
            if (ll_backend__follow_vars__succeeded)
#line 236 "follow_vars.m"
              {
#line 236 "follow_vars.m"
                {
#line 236 "follow_vars.m"
                  mercury__map__set_4_p_0((MR_Word) &ll_backend__follow_vars_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__follow_vars__RVar_64)), ((MR_Box) (ll_backend__follow_vars__DesiredLoc_65)), ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115);
                }
#line 236 "follow_vars.m"
              }
#line 237 "follow_vars.m"
            else
#line 236 "follow_vars.m"
              *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114;
#line 236 "follow_vars.m"
            *ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113 = ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112;
#line 236 "follow_vars.m"
            *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116;
#line 236 "follow_vars.m"
            *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118;
#line 230 "follow_vars.m"
          }
#line 128 "follow_vars.m"
        else
#line 128 "follow_vars.m"
          if (((((MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 288 "follow_vars.m"
            {
#line 289 "follow_vars.m"
              *ll_backend__follow_vars__GoalExpr_14 = ll_backend__follow_vars__GoalExpr0_13;
#line 289 "follow_vars.m"
              *ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113 = ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112;
#line 289 "follow_vars.m"
              *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114;
#line 289 "follow_vars.m"
              *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116;
#line 289 "follow_vars.m"
              *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118;
#line 288 "follow_vars.m"
            }
#line 128 "follow_vars.m"
          else
#line 128 "follow_vars.m"
            if (((((MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 128 "follow_vars.m"
              {
#line 128 "follow_vars.m"
                MR_Word ll_backend__follow_vars__ConjType_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
#line 128 "follow_vars.m"
                MR_Word ll_backend__follow_vars__Goals0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 2)));
#line 128 "follow_vars.m"
                MR_Word ll_backend__follow_vars__Goals_23;

#line 133 "follow_vars.m"
                if ((ll_backend__follow_vars__ConjType_21 == (MR_Integer) 1))
#line 135 "follow_vars.m"
                  {
#line 135 "follow_vars.m"
                    ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(ll_backend__follow_vars__Goals0_22, &ll_backend__follow_vars__Goals_23, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
                  }
#line 133 "follow_vars.m"
                else
#line 130 "follow_vars.m"
                  {
#line 131 "follow_vars.m"
                    {
#line 131 "follow_vars.m"
                      ll_backend__follow_vars__find_follow_vars_in_conj_11_p_0(ll_backend__follow_vars__Goals0_22, &ll_backend__follow_vars__Goals_23, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, (MR_Integer) 0, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
                    }
#line 130 "follow_vars.m"
                  }
#line 139 "follow_vars.m"
                {
#line 139 "follow_vars.m"
                  MR_Word base;
#line 139 "follow_vars.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 139 "follow_vars.m"
                  *ll_backend__follow_vars__GoalExpr_14 = base;
#line 139 "follow_vars.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 139 "follow_vars.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__follow_vars__ConjType_21));
#line 139 "follow_vars.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__follow_vars__Goals_23));
#line 139 "follow_vars.m"
                }
#line 139 "follow_vars.m"
                *ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113 = ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112;
#line 128 "follow_vars.m"
              }
#line 128 "follow_vars.m"
            else
#line 128 "follow_vars.m"
              if (((((MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 141 "follow_vars.m"
                {
#line 141 "follow_vars.m"
                  MR_Word ll_backend__follow_vars__Goals0_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
#line 141 "follow_vars.m"
                  MR_Word ll_backend__follow_vars__Goals_169;

#line 145 "follow_vars.m"
                  {
#line 145 "follow_vars.m"
                    hlds__hlds_llds__goal_info_set_store_map_3_p_0(ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112, ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113);
                  }
#line 146 "follow_vars.m"
                  {
#line 146 "follow_vars.m"
                    ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(ll_backend__follow_vars__Goals0_168, &ll_backend__follow_vars__Goals_169, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
                  }
#line 148 "follow_vars.m"
                  {
#line 148 "follow_vars.m"
                    MR_Word base;
#line 148 "follow_vars.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "follow_vars.m"
                    *ll_backend__follow_vars__GoalExpr_14 = base;
#line 148 "follow_vars.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 148 "follow_vars.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__follow_vars__Goals_169));
#line 148 "follow_vars.m"
                  }
#line 141 "follow_vars.m"
                }
#line 128 "follow_vars.m"
              else
#line 128 "follow_vars.m"
                if (((((MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 253 "follow_vars.m"
                  {
#line 253 "follow_vars.m"
                    MR_Word ll_backend__follow_vars__GenericCall_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
#line 253 "follow_vars.m"
                    MR_Word ll_backend__follow_vars__Modes_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 3)));
#line 253 "follow_vars.m"
                    MR_Word ll_backend__follow_vars__MaybeArgRegs_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 4)));
#line 253 "follow_vars.m"
                    MR_Word ll_backend__follow_vars__Det_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 5)));
#line 253 "follow_vars.m"
                    MR_Word ll_backend__follow_vars__Args_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 2)));

#line 254 "follow_vars.m"
                    *ll_backend__follow_vars__GoalExpr_14 = ll_backend__follow_vars__GoalExpr0_13;
#line 258 "follow_vars.m"
                    if (((MR_tag((MR_Word) ll_backend__follow_vars__GenericCall_72)) == (MR_mktag((MR_Integer) 3))))
#line 256 "follow_vars.m"
                      {
#line 256 "follow_vars.m"
                        *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114;
#line 256 "follow_vars.m"
                        *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116;
#line 256 "follow_vars.m"
                        *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118;
#line 256 "follow_vars.m"
                      }
#line 258 "follow_vars.m"
                    else
#line 262 "follow_vars.m"
                      {
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__TypeInfo_178_178;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__TypeCtorInfo_179_179;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__CodeModel_85;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__Types_86;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__ArgRegTypes_87;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__ArgInfos_88;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__ArgsInfos_89;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__InVarInfos_90;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__InVarInfosR_92;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__InVarInfosF_93;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__InVarsR_94;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__InVarsF_95;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__Globals_96;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__SpecifierArgInfos_98;
#line 262 "follow_vars.m"
                        MR_Integer ll_backend__follow_vars__FirstInputR_99;
#line 262 "follow_vars.m"
                        MR_Integer ll_backend__follow_vars__V_124_124;
#line 262 "follow_vars.m"
                        MR_Integer ll_backend__follow_vars__V_125_125;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__V_126_126;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_127_127;
#line 262 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_131_131;
#line 271 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__V_91_91;
#line 276 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__V_97_97;
#line 276 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__V_100_100;
#line 280 "follow_vars.m"
                        MR_Integer ll_backend__follow_vars__V_102_102;
#line 280 "follow_vars.m"
                        MR_Integer ll_backend__follow_vars__V_103_103;

#line 263 "follow_vars.m"
                        {
#line 263 "follow_vars.m"
                          hlds__code_model__determinism_to_code_model_2_p_0(ll_backend__follow_vars__Det_172, &ll_backend__follow_vars__CodeModel_85);
                        }
#line 264 "follow_vars.m"
                        {
#line 264 "follow_vars.m"
                          parse_tree__prog_data__lookup_var_types_3_p_0(ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__Args_173, &ll_backend__follow_vars__Types_86);
                        }
#line 265 "follow_vars.m"
                        {
#line 265 "follow_vars.m"
                          hlds__arg_info__generic_call_arg_reg_types_6_p_0(ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__GenericCall_72, ll_backend__follow_vars__Args_173, ll_backend__follow_vars__MaybeArgRegs_74, &ll_backend__follow_vars__ArgRegTypes_87);
                        }
#line 267 "follow_vars.m"
                        {
#line 267 "follow_vars.m"
                          hlds__arg_info__make_arg_infos_6_p_0(ll_backend__follow_vars__Types_86, ll_backend__follow_vars__Modes_73, ll_backend__follow_vars__ArgRegTypes_87, ll_backend__follow_vars__CodeModel_85, ll_backend__follow_vars__ModuleInfo_17, &ll_backend__follow_vars__ArgInfos_88);
                        }
#line 1806 "ll_backend.follow_vars.c"
                        ll_backend__follow_vars__TypeInfo_178_178 = (MR_Word) &ll_backend__follow_vars_scalar_common_1[0];
#line 1808 "ll_backend.follow_vars.c"
                        ll_backend__follow_vars__TypeCtorInfo_179_179 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0;
#line 269 "follow_vars.m"
                        {
#line 269 "follow_vars.m"
                          mercury__assoc_list__from_corresponding_lists_3_p_0(ll_backend__follow_vars__TypeInfo_178_178, ll_backend__follow_vars__TypeCtorInfo_179_179, ll_backend__follow_vars__Args_173, ll_backend__follow_vars__ArgInfos_88, &ll_backend__follow_vars__ArgsInfos_89);
                        }
#line 271 "follow_vars.m"
                        {
#line 271 "follow_vars.m"
                          hlds__arg_info__partition_args_3_p_0(ll_backend__follow_vars__ArgsInfos_89, &ll_backend__follow_vars__InVarInfos_90, &ll_backend__follow_vars__V_91_91);
                        }
#line 272 "follow_vars.m"
                        {
#line 272 "follow_vars.m"
                          mercury__list__filter_4_p_0((MR_Word) &ll_backend__follow_vars_scalar_common_2[0], (MR_Word) &ll_backend__follow_vars_scalar_common_2[1], ll_backend__follow_vars__InVarInfos_90, &ll_backend__follow_vars__InVarInfosR_92, &ll_backend__follow_vars__InVarInfosF_93);
                        }
#line 273 "follow_vars.m"
                        {
#line 273 "follow_vars.m"
                          mercury__assoc_list__keys_2_p_0(ll_backend__follow_vars__TypeInfo_178_178, ll_backend__follow_vars__TypeCtorInfo_179_179, ll_backend__follow_vars__InVarInfosR_92, &ll_backend__follow_vars__InVarsR_94);
                        }
#line 274 "follow_vars.m"
                        {
#line 274 "follow_vars.m"
                          mercury__assoc_list__keys_2_p_0(ll_backend__follow_vars__TypeInfo_178_178, ll_backend__follow_vars__TypeCtorInfo_179_179, ll_backend__follow_vars__InVarInfosF_93, &ll_backend__follow_vars__InVarsF_95);
                        }
#line 275 "follow_vars.m"
                        {
#line 275 "follow_vars.m"
                          hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__follow_vars__ModuleInfo_17, &ll_backend__follow_vars__Globals_96);
                        }
#line 276 "follow_vars.m"
                        {
#line 276 "follow_vars.m"
                          ll_backend__follow_vars__V_124_124 = mercury__list__length_1_f_0(ll_backend__follow_vars__TypeInfo_178_178, ll_backend__follow_vars__InVarsR_94);
                        }
#line 276 "follow_vars.m"
                        {
#line 276 "follow_vars.m"
                          ll_backend__follow_vars__V_125_125 = mercury__list__length_1_f_0(ll_backend__follow_vars__TypeInfo_178_178, ll_backend__follow_vars__InVarsF_95);
                        }
#line 276 "follow_vars.m"
                        {
#line 276 "follow_vars.m"
                          ll_backend__call_gen__generic_call_info_8_p_0(ll_backend__follow_vars__Globals_96, ll_backend__follow_vars__GenericCall_72, ll_backend__follow_vars__V_124_124, ll_backend__follow_vars__V_125_125, &ll_backend__follow_vars__V_97_97, &ll_backend__follow_vars__SpecifierArgInfos_98, &ll_backend__follow_vars__FirstInputR_99, &ll_backend__follow_vars__V_100_100);
                        }
#line 280 "follow_vars.m"
                        {
#line 280 "follow_vars.m"
                          ll_backend__follow_vars__V_126_126 = mercury__map__init_0_f_0(ll_backend__follow_vars__TypeInfo_178_178, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
                        }
#line 280 "follow_vars.m"
                        {
#line 280 "follow_vars.m"
                          ll_backend__follow_vars__find_follow_vars_from_arginfo_7_p_0(ll_backend__follow_vars__SpecifierArgInfos_98, ll_backend__follow_vars__V_126_126, &ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_127_127, (MR_Integer) 1, &ll_backend__follow_vars__V_102_102, (MR_Integer) 1, &ll_backend__follow_vars__V_103_103);
                        }
#line 282 "follow_vars.m"
                        {
#line 282 "follow_vars.m"
                          ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_p_0((MR_Integer) 0, ll_backend__follow_vars__InVarsR_94, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_127_127, &ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_131_131, ll_backend__follow_vars__FirstInputR_99, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117);
                        }
#line 284 "follow_vars.m"
                        {
#line 284 "follow_vars.m"
                          ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_p_0((MR_Integer) 1, ll_backend__follow_vars__InVarsF_95, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_131_131, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, (MR_Integer) 1, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
                        }
#line 262 "follow_vars.m"
                      }
#line 284 "follow_vars.m"
                    *ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113 = ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112;
#line 253 "follow_vars.m"
                  }
#line 128 "follow_vars.m"
                else
#line 128 "follow_vars.m"
                  if (((((MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 159 "follow_vars.m"
                    {
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__Cond0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 2)));
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__Then0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 3)));
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__Else0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 4)));
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__Then1_35;
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__FollowVarsMapThen_36;
#line 159 "follow_vars.m"
                      MR_Integer ll_backend__follow_vars__NextNonReservedThenR_37;
#line 159 "follow_vars.m"
                      MR_Integer ll_backend__follow_vars__NextNonReservedThenF_38;
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__FollowVarsThen_39;
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__Then_40;
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__Cond1_41;
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__FollowVarsCond_45;
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__Cond_46;
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__Else1_47;
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__FollowVarsMapElse_48;
#line 159 "follow_vars.m"
                      MR_Integer ll_backend__follow_vars__NextNonReservedElseR_49;
#line 159 "follow_vars.m"
                      MR_Integer ll_backend__follow_vars__NextNonReservedElseF_50;
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__FollowVarsElse_51;
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__Else_52;
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__V_146_146;
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__V_147_147;
#line 159 "follow_vars.m"
                      MR_Word ll_backend__follow_vars__V_148_148;

#line 180 "follow_vars.m"
                      {
#line 180 "follow_vars.m"
                        ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(ll_backend__follow_vars__Then0_30, &ll_backend__follow_vars__Then1_35, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, &ll_backend__follow_vars__FollowVarsMapThen_36, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, &ll_backend__follow_vars__NextNonReservedThenR_37, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, &ll_backend__follow_vars__NextNonReservedThenF_38);
                      }
#line 184 "follow_vars.m"
                      {
#line 184 "follow_vars.m"
                        ll_backend__follow_vars__FollowVarsThen_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 184 "follow_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsThen_39, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVarsMapThen_36));
#line 184 "follow_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsThen_39, 1) = ((MR_Box) (ll_backend__follow_vars__NextNonReservedThenR_37));
#line 184 "follow_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsThen_39, 2) = ((MR_Box) (ll_backend__follow_vars__NextNonReservedThenF_38));
#line 184 "follow_vars.m"
                      }
#line 186 "follow_vars.m"
                      {
#line 186 "follow_vars.m"
                        ll_backend__follow_vars__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 186 "follow_vars.m"
                        MR_hl_field(MR_mktag(1), ll_backend__follow_vars__V_146_146, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVarsThen_39));
#line 186 "follow_vars.m"
                      }
#line 186 "follow_vars.m"
                      {
#line 186 "follow_vars.m"
                        hlds__hlds_llds__goal_set_follow_vars_3_p_0(ll_backend__follow_vars__V_146_146, ll_backend__follow_vars__Then1_35, &ll_backend__follow_vars__Then_40);
                      }
#line 188 "follow_vars.m"
                      {
#line 188 "follow_vars.m"
                        ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(ll_backend__follow_vars__Cond0_29, &ll_backend__follow_vars__Cond1_41, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__FollowVarsMapThen_36, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__NextNonReservedThenR_37, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__NextNonReservedThenF_38, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
                      }
#line 192 "follow_vars.m"
                      {
#line 192 "follow_vars.m"
                        ll_backend__follow_vars__FollowVarsCond_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 192 "follow_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsCond_45, 0) = ((MR_Box) (*ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115));
#line 192 "follow_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsCond_45, 1) = ((MR_Box) (*ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117));
#line 192 "follow_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsCond_45, 2) = ((MR_Box) (*ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119));
#line 192 "follow_vars.m"
                      }
#line 194 "follow_vars.m"
                      {
#line 194 "follow_vars.m"
                        ll_backend__follow_vars__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 194 "follow_vars.m"
                        MR_hl_field(MR_mktag(1), ll_backend__follow_vars__V_147_147, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVarsCond_45));
#line 194 "follow_vars.m"
                      }
#line 194 "follow_vars.m"
                      {
#line 194 "follow_vars.m"
                        hlds__hlds_llds__goal_set_follow_vars_3_p_0(ll_backend__follow_vars__V_147_147, ll_backend__follow_vars__Cond1_41, &ll_backend__follow_vars__Cond_46);
                      }
#line 196 "follow_vars.m"
                      {
#line 196 "follow_vars.m"
                        ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(ll_backend__follow_vars__Else0_31, &ll_backend__follow_vars__Else1_47, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, &ll_backend__follow_vars__FollowVarsMapElse_48, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, &ll_backend__follow_vars__NextNonReservedElseR_49, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, &ll_backend__follow_vars__NextNonReservedElseF_50);
                      }
#line 200 "follow_vars.m"
                      {
#line 200 "follow_vars.m"
                        ll_backend__follow_vars__FollowVarsElse_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 200 "follow_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsElse_51, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVarsMapElse_48));
#line 200 "follow_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsElse_51, 1) = ((MR_Box) (ll_backend__follow_vars__NextNonReservedElseR_49));
#line 200 "follow_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsElse_51, 2) = ((MR_Box) (ll_backend__follow_vars__NextNonReservedElseF_50));
#line 200 "follow_vars.m"
                      }
#line 202 "follow_vars.m"
                      {
#line 202 "follow_vars.m"
                        ll_backend__follow_vars__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 202 "follow_vars.m"
                        MR_hl_field(MR_mktag(1), ll_backend__follow_vars__V_148_148, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVarsElse_51));
#line 202 "follow_vars.m"
                      }
#line 202 "follow_vars.m"
                      {
#line 202 "follow_vars.m"
                        hlds__hlds_llds__goal_set_follow_vars_3_p_0(ll_backend__follow_vars__V_148_148, ll_backend__follow_vars__Else1_47, &ll_backend__follow_vars__Else_52);
                      }
#line 204 "follow_vars.m"
                      {
#line 204 "follow_vars.m"
                        hlds__hlds_llds__goal_info_set_store_map_3_p_0(ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112, ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113);
                      }
#line 206 "follow_vars.m"
                      {
#line 206 "follow_vars.m"
                        MR_Word base;
#line 206 "follow_vars.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 206 "follow_vars.m"
                        *ll_backend__follow_vars__GoalExpr_14 = base;
#line 206 "follow_vars.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 206 "follow_vars.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__follow_vars__Vars_28));
#line 206 "follow_vars.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__follow_vars__Cond_46));
#line 206 "follow_vars.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__follow_vars__Then_40));
#line 206 "follow_vars.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__follow_vars__Else_52));
#line 206 "follow_vars.m"
                      }
#line 159 "follow_vars.m"
                    }
#line 128 "follow_vars.m"
                  else
#line 128 "follow_vars.m"
                    if (((((MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 216 "follow_vars.m"
                      {
#line 216 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__Reason_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
#line 216 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__SubGoal0_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 2)));
#line 216 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__SubGoal_171;
#line 218 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__FGT_57;
#line 218 "follow_vars.m"
                        MR_Word ll_backend__follow_vars__V_56_56;

#line 218 "follow_vars.m"
                        ll_backend__follow_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_vars__Reason_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__Reason_55, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 218 "follow_vars.m"
                        if (ll_backend__follow_vars__succeeded)
#line 218 "follow_vars.m"
                          {
#line 218 "follow_vars.m"
                            ll_backend__follow_vars__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__Reason_55, (MR_Integer) 1)));
#line 218 "follow_vars.m"
                            ll_backend__follow_vars__FGT_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__Reason_55, (MR_Integer) 2)));
#line 220 "follow_vars.m"
                            if ((ll_backend__follow_vars__FGT_57 == (MR_Integer) 1))
#line 219 "follow_vars.m"
                              ll_backend__follow_vars__succeeded = MR_TRUE;
#line 220 "follow_vars.m"
                            else
#line 220 "follow_vars.m"
                              if ((ll_backend__follow_vars__FGT_57 == (MR_Integer) 2))
#line 220 "follow_vars.m"
                                ll_backend__follow_vars__succeeded = MR_TRUE;
#line 220 "follow_vars.m"
                              else
#line 220 "follow_vars.m"
                                ll_backend__follow_vars__succeeded = MR_FALSE;
#line 218 "follow_vars.m"
                          }
#line 224 "follow_vars.m"
                        if (ll_backend__follow_vars__succeeded)
#line 223 "follow_vars.m"
                          {
#line 223 "follow_vars.m"
                            ll_backend__follow_vars__SubGoal_171 = ll_backend__follow_vars__SubGoal0_170;
#line 223 "follow_vars.m"
                            *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118;
#line 223 "follow_vars.m"
                            *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116;
#line 223 "follow_vars.m"
                            *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114;
#line 223 "follow_vars.m"
                          }
#line 224 "follow_vars.m"
                        else
#line 225 "follow_vars.m"
                          {
#line 225 "follow_vars.m"
                            ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(ll_backend__follow_vars__SubGoal0_170, &ll_backend__follow_vars__SubGoal_171, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
                          }
#line 228 "follow_vars.m"
                        {
#line 228 "follow_vars.m"
                          MR_Word base;
#line 228 "follow_vars.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 228 "follow_vars.m"
                          *ll_backend__follow_vars__GoalExpr_14 = base;
#line 228 "follow_vars.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 228 "follow_vars.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__follow_vars__Reason_55));
#line 228 "follow_vars.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__follow_vars__SubGoal_171));
#line 228 "follow_vars.m"
                        }
#line 228 "follow_vars.m"
                        *ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113 = ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112;
#line 216 "follow_vars.m"
                      }
#line 128 "follow_vars.m"
                    else
#line 128 "follow_vars.m"
                      if (((((MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 291 "follow_vars.m"
                        {
#line 293 "follow_vars.m"
                          {
#line 293 "follow_vars.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.follow_vars", (MR_String) "predicate \140ll_backend.follow_vars.find_follow_vars_in_goal_expr\'/12", (MR_String) "shorthand");
#line 293 "follow_vars.m"
                            return;
                          }
#line 291 "follow_vars.m"
                        }
#line 128 "follow_vars.m"
                      else
#line 150 "follow_vars.m"
                        {
#line 150 "follow_vars.m"
                          MR_Word ll_backend__follow_vars__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
#line 150 "follow_vars.m"
                          MR_Word ll_backend__follow_vars__Det_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 2)));
#line 150 "follow_vars.m"
                          MR_Word ll_backend__follow_vars__Cases0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 3)));
#line 150 "follow_vars.m"
                          MR_Word ll_backend__follow_vars__Cases_27;

#line 154 "follow_vars.m"
                          {
#line 154 "follow_vars.m"
                            hlds__hlds_llds__goal_info_set_store_map_3_p_0(ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112, ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113);
                          }
#line 155 "follow_vars.m"
                          {
#line 155 "follow_vars.m"
                            ll_backend__follow_vars__find_follow_vars_in_cases_10_p_0(ll_backend__follow_vars__Cases0_26, &ll_backend__follow_vars__Cases_27, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
                          }
#line 157 "follow_vars.m"
                          {
#line 157 "follow_vars.m"
                            MR_Word base;
#line 157 "follow_vars.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 157 "follow_vars.m"
                            *ll_backend__follow_vars__GoalExpr_14 = base;
#line 157 "follow_vars.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 157 "follow_vars.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__follow_vars__Var_24));
#line 157 "follow_vars.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__follow_vars__Det_25));
#line 157 "follow_vars.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__follow_vars__Cases_27));
#line 157 "follow_vars.m"
                          }
#line 150 "follow_vars.m"
                        }
#line 128 "follow_vars.m"
  }
#line 119 "follow_vars.m"
}

#line 80 "follow_vars.m"
static void MR_CALL 
ll_backend__follow_vars__find_final_follow_vars_2_7_p_0(
#line 80 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
#line 80 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__2_2,
#line 80 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__HeadVar__3_3,
#line 80 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4,
#line 80 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_5,
#line 80 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6,
#line 80 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_7)
#line 80 "follow_vars.m"
{
#line 84 "follow_vars.m"
  while (MR_TRUE)
#line 84 "follow_vars.m"
    {
#line 84 "follow_vars.m"
      /* tailcall optimized into a loop */
#line 84 "follow_vars.m"
      {
#line 84 "follow_vars.m"
        MR_bool ll_backend__follow_vars__succeeded;

#line 84 "follow_vars.m"
        if ((ll_backend__follow_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 84 "follow_vars.m"
          {
#line 84 "follow_vars.m"
            *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_7 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
#line 84 "follow_vars.m"
            *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_5 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
#line 84 "follow_vars.m"
            *ll_backend__follow_vars__HeadVar__3_3 = ll_backend__follow_vars__HeadVar__2_2;
#line 84 "follow_vars.m"
          }
#line 84 "follow_vars.m"
        else
#line 86 "follow_vars.m"
          {
#line 86 "follow_vars.m"
            MR_Word ll_backend__follow_vars__ArgLoc_17;
#line 86 "follow_vars.m"
            MR_Word ll_backend__follow_vars__Mode_18;
#line 86 "follow_vars.m"
            MR_Word ll_backend__follow_vars__Var_19;
#line 86 "follow_vars.m"
            MR_Word ll_backend__follow_vars__ArgInfoVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 86 "follow_vars.m"
            MR_Word ll_backend__follow_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 86 "follow_vars.m"
            MR_Word ll_backend__follow_vars__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_33_33, (MR_Integer) 0)));
#line 86 "follow_vars.m"
            MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35;
#line 86 "follow_vars.m"
            MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_37_37;
#line 86 "follow_vars.m"
            MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_40_40;

#line 85 "follow_vars.m"
            ll_backend__follow_vars__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_33_33, (MR_Integer) 1)));
#line 85 "follow_vars.m"
            ll_backend__follow_vars__ArgLoc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_34_34, (MR_Integer) 0)));
#line 85 "follow_vars.m"
            ll_backend__follow_vars__Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_34_34, (MR_Integer) 1)));
#line 99 "follow_vars.m"
            if ((ll_backend__follow_vars__Mode_18 == (MR_Integer) 0))
#line 100 "follow_vars.m"
              {
#line 100 "follow_vars.m"
                ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35 = ll_backend__follow_vars__HeadVar__2_2;
#line 100 "follow_vars.m"
                ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_40_40 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
#line 100 "follow_vars.m"
                ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_37_37 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
#line 100 "follow_vars.m"
              }
#line 99 "follow_vars.m"
            else
#line 99 "follow_vars.m"
              if ((ll_backend__follow_vars__Mode_18 == (MR_Integer) 1))
#line 88 "follow_vars.m"
                {
#line 88 "follow_vars.m"
                  MR_Word ll_backend__follow_vars__RegType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__ArgLoc_17, (MR_Integer) 0)));
#line 88 "follow_vars.m"
                  MR_Integer ll_backend__follow_vars__RegNum_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__ArgLoc_17, (MR_Integer) 1)));
#line 88 "follow_vars.m"
                  MR_Word ll_backend__follow_vars__Locn_26;

#line 90 "follow_vars.m"
                  {
#line 90 "follow_vars.m"
                    ll_backend__follow_vars__Locn_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 90 "follow_vars.m"
                    MR_hl_field(MR_mktag(1), ll_backend__follow_vars__Locn_26, 0) = ((MR_Box) (ll_backend__follow_vars__RegType_24));
#line 90 "follow_vars.m"
                    MR_hl_field(MR_mktag(1), ll_backend__follow_vars__Locn_26, 1) = ((MR_Box) (ll_backend__follow_vars__RegNum_25));
#line 90 "follow_vars.m"
                  }
#line 91 "follow_vars.m"
                  {
#line 91 "follow_vars.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__follow_vars_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__follow_vars__Var_19)), ((MR_Box) (ll_backend__follow_vars__Locn_26)), ll_backend__follow_vars__HeadVar__2_2, &ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35);
                  }
#line 95 "follow_vars.m"
                  if ((ll_backend__follow_vars__RegType_24 == (MR_Integer) 1))
#line 96 "follow_vars.m"
                    {
#line 96 "follow_vars.m"
                      MR_Integer ll_backend__follow_vars__V_36_36 = (ll_backend__follow_vars__RegNum_25 + (MR_Integer) 1);

#line 97 "follow_vars.m"
                      {
#line 97 "follow_vars.m"
                        mercury__int__max_3_p_0(ll_backend__follow_vars__V_36_36, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6, &ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_37_37);
                      }
#line 97 "follow_vars.m"
                      ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_40_40 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
#line 96 "follow_vars.m"
                    }
#line 95 "follow_vars.m"
                  else
#line 93 "follow_vars.m"
                    {
#line 93 "follow_vars.m"
                      MR_Integer ll_backend__follow_vars__V_39_39 = (ll_backend__follow_vars__RegNum_25 + (MR_Integer) 1);

#line 94 "follow_vars.m"
                      {
#line 94 "follow_vars.m"
                        mercury__int__max_3_p_0(ll_backend__follow_vars__V_39_39, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4, &ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_40_40);
                      }
#line 94 "follow_vars.m"
                      ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_37_37 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
#line 93 "follow_vars.m"
                    }
#line 88 "follow_vars.m"
                }
#line 99 "follow_vars.m"
              else
#line 102 "follow_vars.m"
                {
#line 102 "follow_vars.m"
                  ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35 = ll_backend__follow_vars__HeadVar__2_2;
#line 102 "follow_vars.m"
                  ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_40_40 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
#line 102 "follow_vars.m"
                  ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_37_37 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
#line 102 "follow_vars.m"
                }
#line 104 "follow_vars.m"
            /* direct tailcall eliminated */
#line 104 "follow_vars.m"
            {
#line 104 "follow_vars.m"
              MR_Word ll_backend__follow_vars__HeadVar__1__tmp_copy_1 = ll_backend__follow_vars__ArgInfoVars_20;
#line 104 "follow_vars.m"
              MR_Word ll_backend__follow_vars__HeadVar__2__tmp_copy_2 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35;
#line 104 "follow_vars.m"
              MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0__tmp_copy_4 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_40_40;
#line 104 "follow_vars.m"
              MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0__tmp_copy_6 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_37_37;

#line 104 "follow_vars.m"
              ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0__tmp_copy_6;
#line 104 "follow_vars.m"
              ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0__tmp_copy_4;
#line 104 "follow_vars.m"
              ll_backend__follow_vars__HeadVar__2_2 = ll_backend__follow_vars__HeadVar__2__tmp_copy_2;
#line 104 "follow_vars.m"
              ll_backend__follow_vars__HeadVar__1_1 = ll_backend__follow_vars__HeadVar__1__tmp_copy_1;
#line 104 "follow_vars.m"
            }
#line 104 "follow_vars.m"
            continue;
#line 86 "follow_vars.m"
          }
#line 84 "follow_vars.m"
      }
#line 84 "follow_vars.m"
      break;
#line 84 "follow_vars.m"
    }
#line 80 "follow_vars.m"
}

#line 44 "follow_vars.m"
void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(
#line 44 "follow_vars.m"
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
#line 44 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__HeadVar__2_2,
#line 44 "follow_vars.m"
  MR_Word ll_backend__follow_vars__VarTypes_15,
#line 44 "follow_vars.m"
  MR_Word ll_backend__follow_vars__ModuleInfo_16,
#line 44 "follow_vars.m"
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_20,
#line 44 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_21,
#line 44 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_22,
#line 44 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_23,
#line 44 "follow_vars.m"
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_24,
#line 44 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_25)
#line 44 "follow_vars.m"
{
#line 112 "follow_vars.m"
  {
#line 112 "follow_vars.m"
    MR_bool ll_backend__follow_vars__succeeded;
#line 112 "follow_vars.m"
    MR_Word ll_backend__follow_vars__GoalExpr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 112 "follow_vars.m"
    MR_Word ll_backend__follow_vars__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 112 "follow_vars.m"
    MR_Word ll_backend__follow_vars__GoalExpr_13;
#line 112 "follow_vars.m"
    MR_Word ll_backend__follow_vars__GoalInfo_14;

#line 113 "follow_vars.m"
    {
#line 113 "follow_vars.m"
      ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(ll_backend__follow_vars__GoalExpr0_11, &ll_backend__follow_vars__GoalExpr_13, ll_backend__follow_vars__GoalInfo0_12, &ll_backend__follow_vars__GoalInfo_14, ll_backend__follow_vars__VarTypes_15, ll_backend__follow_vars__ModuleInfo_16, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_20, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_21, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_22, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_23, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_24, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_25);
    }
#line 112 "follow_vars.m"
    {
#line 112 "follow_vars.m"
      MR_Word base;
#line 112 "follow_vars.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 112 "follow_vars.m"
      *ll_backend__follow_vars__HeadVar__2_2 = base;
#line 112 "follow_vars.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_vars__GoalExpr_13));
#line 112 "follow_vars.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_vars__GoalInfo_14));
#line 112 "follow_vars.m"
    }
#line 112 "follow_vars.m"
  }
#line 44 "follow_vars.m"
}

#line 41 "follow_vars.m"
void MR_CALL 
ll_backend__follow_vars__find_final_follow_vars_4_p_0(
#line 41 "follow_vars.m"
  MR_Word ll_backend__follow_vars__ProcInfo_5,
#line 41 "follow_vars.m"
  MR_Word * ll_backend__follow_vars__FollowVarsMap_6,
#line 41 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__NextNonReservedR_7,
#line 41 "follow_vars.m"
  MR_Integer * ll_backend__follow_vars__NextNonReservedF_8)
#line 41 "follow_vars.m"
{
#line 71 "follow_vars.m"
  {
#line 71 "follow_vars.m"
    MR_bool ll_backend__follow_vars__succeeded;
#line 71 "follow_vars.m"
    MR_Word ll_backend__follow_vars__TypeInfo_16_16;
#line 71 "follow_vars.m"
    MR_Word ll_backend__follow_vars__ArgInfo_9;
#line 71 "follow_vars.m"
    MR_Word ll_backend__follow_vars__HeadVars_10;
#line 71 "follow_vars.m"
    MR_Word ll_backend__follow_vars__ArgInfoHeadVars_11;
#line 71 "follow_vars.m"
    MR_Word ll_backend__follow_vars__FollowVarsMap0_12;

#line 72 "follow_vars.m"
    {
#line 72 "follow_vars.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__follow_vars__ProcInfo_5, &ll_backend__follow_vars__ArgInfo_9);
    }
#line 73 "follow_vars.m"
    {
#line 73 "follow_vars.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__follow_vars__ProcInfo_5, &ll_backend__follow_vars__HeadVars_10);
    }
#line 2489 "ll_backend.follow_vars.c"
    ll_backend__follow_vars__TypeInfo_16_16 = (MR_Word) &ll_backend__follow_vars_scalar_common_1[0];
#line 74 "follow_vars.m"
    {
#line 74 "follow_vars.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__follow_vars__TypeInfo_16_16, ll_backend__follow_vars__ArgInfo_9, ll_backend__follow_vars__HeadVars_10, &ll_backend__follow_vars__ArgInfoHeadVars_11);
    }
#line 75 "follow_vars.m"
    {
#line 75 "follow_vars.m"
      mercury__map__init_1_p_0(ll_backend__follow_vars__TypeInfo_16_16, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, &ll_backend__follow_vars__FollowVarsMap0_12);
    }
#line 76 "follow_vars.m"
    {
#line 76 "follow_vars.m"
      ll_backend__follow_vars__find_final_follow_vars_2_7_p_0(ll_backend__follow_vars__ArgInfoHeadVars_11, ll_backend__follow_vars__FollowVarsMap0_12, ll_backend__follow_vars__FollowVarsMap_6, (MR_Integer) 1, ll_backend__follow_vars__NextNonReservedR_7, (MR_Integer) 1, ll_backend__follow_vars__NextNonReservedF_8);
#line 76 "follow_vars.m"
      return;
    }
#line 71 "follow_vars.m"
  }
#line 41 "follow_vars.m"
}

void mercury__ll_backend__follow_vars__init(void)
{
}

void mercury__ll_backend__follow_vars__init_type_tables(void)
{
}

void mercury__ll_backend__follow_vars__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.follow_vars. */
