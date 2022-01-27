/*
** Automatically generated from `unique_modes.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module check_hlds.unique_modes. */
/* :- implementation. */

/*
INIT mercury__check_hlds__unique_modes__init
ENDINIT
*/

#include "check_hlds.unique_modes.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_call.mih"
#include "check_hlds.modecheck_unify.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.modes.mih"
#include "check_hlds.unify_proc.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "check_hlds.unique_modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 1037 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(
#line 1037 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 1037 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
#line 1037 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3,
#line 1037 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
#line 1037 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5,
#line 1037 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_6);

#line 994 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_disj_7_p_0(
#line 994 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 994 "unique_modes.m"
  MR_Word check_hlds__unique_modes__DisjDetism_2,
#line 994 "unique_modes.m"
  MR_Word check_hlds__unique_modes__DisjNonLocals_3,
#line 994 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
#line 994 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__5_5,
#line 994 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6,
#line 994 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_7);

#line 893 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_conj_2_6_p_0(
#line 893 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ConjType_7,
#line 893 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goal0_8,
#line 893 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goals0_9,
#line 893 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
#line 893 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_15,
#line 893 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_16);

#line 877 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_conj_5_p_0(
#line 877 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 877 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
#line 877 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3,
#line 877 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4,
#line 877 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5);

#line 748 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_call_7_p_0(
#line 748 "unique_modes.m"
  MR_Word check_hlds__unique_modes__PredId_8,
#line 748 "unique_modes.m"
  MR_Integer check_hlds__unique_modes__ProcId0_9,
#line 748 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ArgVars_10,
#line 748 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo_11,
#line 748 "unique_modes.m"
  MR_Integer * check_hlds__unique_modes__ProcId_12,
#line 748 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37,
#line 748 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38);

#line 699 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_p_0(
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalType_12,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Outer_13,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Inner_14,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__MaybeOutputVars_15,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__MainGoal0_16,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__OrElseGoals0_17,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__OrElseInners_18,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_19,
#line 699 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_20,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_34,
#line 699 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35);

#line 653 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_switch_7_p_0(
#line 653 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Var_8,
#line 653 "unique_modes.m"
  MR_Word check_hlds__unique_modes__CanFail_9,
#line 653 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Cases0_10,
#line 653 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_11,
#line 653 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_12,
#line 653 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_21,
#line 653 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22);

#line 500 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_scope_6_p_0(
#line 500 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Reason_7,
#line 500 "unique_modes.m"
  MR_Word check_hlds__unique_modes__SubGoal0_8,
#line 500 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_9,
#line 500 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_10,
#line 500 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_39,
#line 500 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40);

#line 467 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_negation_5_p_0(
#line 467 "unique_modes.m"
  MR_Word check_hlds__unique_modes__SubGoal0_6,
#line 467 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_7,
#line 467 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 467 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_16,
#line 467 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17);

#line 393 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_p_0(
#line 393 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Vars_9,
#line 393 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Cond0_10,
#line 393 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Then0_11,
#line 393 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Else0_12,
#line 393 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_13,
#line 393 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_14,
#line 393 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_34,
#line 393 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35);

#line 349 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_disj_5_p_0(
#line 349 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goals0_6,
#line 349 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_7,
#line 349 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 349 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_19,
#line 349 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20);

#line 332 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_conj_5_p_0(
#line 332 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ConjType_6,
#line 332 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goals0_7,
#line 332 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 332 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_13,
#line 332 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14);

#line 691 "unique_modes.m"
static MR_Box MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0_1(
#line 691 "unique_modes.m"
  MR_Box check_hlds__unique_modes__closure_arg,
#line 691 "unique_modes.m"
  MR_Box check_hlds__unique_modes__wrapper_arg_1);

#line 259 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(
#line 259 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalExpr0_6,
#line 259 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_7,
#line 259 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 259 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55,
#line 259 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);

#line 223 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(
#line 223 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 223 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2,
#line 223 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_3);

#line 202 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__select_changed_inst_vars_4_p_0(
#line 202 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 202 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
#line 202 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__3_3,
#line 202 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4);

#line 186 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__select_nondet_live_vars_3_p_0(
#line 186 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 186 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ModeInfo_2,
#line 186 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3);

#line 174 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__select_live_vars_3_p_0(
#line 174 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 174 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ModeInfo_2,
#line 174 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3);


static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_2[1][5];

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_3[2][3];




static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_2[0])),
    ((MR_Box) (check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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



#line 476 "check_hlds.unique_modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1037 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(
#line 1037 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 1037 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
#line 1037 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3,
#line 1037 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
#line 1037 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5,
#line 1037 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_6)
#line 1037 "unique_modes.m"
{
#line 1040 "unique_modes.m"
  {
#line 1040 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;

#line 1040 "unique_modes.m"
    if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1040 "unique_modes.m"
      {
#line 1040 "unique_modes.m"
        *check_hlds__unique_modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1040 "unique_modes.m"
        *check_hlds__unique_modes__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1040 "unique_modes.m"
        *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_6 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5;
#line 1040 "unique_modes.m"
      }
#line 1040 "unique_modes.m"
    else
#line 1042 "unique_modes.m"
      {
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Case_14;
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Cases_15;
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_16;
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_17;
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case0_11, (MR_Integer) 0)));
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case0_11, (MR_Integer) 1)));
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case0_11, (MR_Integer) 2)));
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap0_22;
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap1_23;
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal1_24;
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal_25;
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28;
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29;
#line 1042 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30;

#line 1044 "unique_modes.m"
        {
#line 1044 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__unique_modes__InstMap0_22);
        }
#line 1051 "unique_modes.m"
        {
#line 1051 "unique_modes.m"
          check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__unique_modes__HeadVar__2_2, check_hlds__unique_modes__MainConsId_19, check_hlds__unique_modes__OtherConsIds_20, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28);
        }
#line 1053 "unique_modes.m"
        {
#line 1053 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__unique_modes__InstMap1_23);
        }
#line 1054 "unique_modes.m"
        {
#line 1054 "unique_modes.m"
          check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__InstMap1_23);
        }
#line 1056 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 1055 "unique_modes.m"
          {
#line 1055 "unique_modes.m"
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Goal0_21, &check_hlds__unique_modes__Goal1_24, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29);
          }
#line 1056 "unique_modes.m"
        else
#line 1060 "unique_modes.m"
          {
#line 1060 "unique_modes.m"
            {
#line 1060 "unique_modes.m"
              check_hlds__unique_modes__Goal1_24 = hlds__hlds_goal__true_goal_0_f_0();
            }
#line 1060 "unique_modes.m"
            check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28;
#line 1060 "unique_modes.m"
          }
#line 1063 "unique_modes.m"
        {
#line 1063 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__unique_modes__InstMap_16);
        }
#line 1064 "unique_modes.m"
        {
#line 1064 "unique_modes.m"
          check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__unique_modes__HeadVar__2_2, check_hlds__unique_modes__InstMap0_22, check_hlds__unique_modes__InstMap_16, check_hlds__unique_modes__Goal1_24, &check_hlds__unique_modes__Goal_25);
        }
#line 1065 "unique_modes.m"
        {
#line 1065 "unique_modes.m"
          check_hlds__unique_modes__Case_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1065 "unique_modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case_14, 0) = ((MR_Box) (check_hlds__unique_modes__MainConsId_19));
#line 1065 "unique_modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case_14, 1) = ((MR_Box) (check_hlds__unique_modes__OtherConsIds_20));
#line 1065 "unique_modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case_14, 2) = ((MR_Box) (check_hlds__unique_modes__Goal_25));
#line 1065 "unique_modes.m"
        }
#line 1067 "unique_modes.m"
        {
#line 1067 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_22, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30);
        }
#line 1068 "unique_modes.m"
        {
#line 1068 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(check_hlds__unique_modes__Cases0_12, check_hlds__unique_modes__HeadVar__2_2, &check_hlds__unique_modes__Cases_15, &check_hlds__unique_modes__InstMaps_17, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_6);
        }
#line 1042 "unique_modes.m"
        {
#line 1042 "unique_modes.m"
          MR_Word base;
#line 1042 "unique_modes.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "unique_modes.m"
          *check_hlds__unique_modes__HeadVar__3_3 = base;
#line 1042 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Case_14));
#line 1042 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__Cases_15));
#line 1042 "unique_modes.m"
        }
#line 1042 "unique_modes.m"
        {
#line 1042 "unique_modes.m"
          MR_Word base;
#line 1042 "unique_modes.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "unique_modes.m"
          *check_hlds__unique_modes__HeadVar__4_4 = base;
#line 1042 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__InstMap_16));
#line 1042 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__InstMaps_17));
#line 1042 "unique_modes.m"
        }
#line 1042 "unique_modes.m"
      }
#line 1040 "unique_modes.m"
  }
#line 1037 "unique_modes.m"
}

#line 994 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_disj_7_p_0(
#line 994 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 994 "unique_modes.m"
  MR_Word check_hlds__unique_modes__DisjDetism_2,
#line 994 "unique_modes.m"
  MR_Word check_hlds__unique_modes__DisjNonLocals_3,
#line 994 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
#line 994 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__5_5,
#line 994 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6,
#line 994 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_7)
#line 994 "unique_modes.m"
{
#line 998 "unique_modes.m"
  {
#line 998 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;

#line 998 "unique_modes.m"
    if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 998 "unique_modes.m"
      {
#line 998 "unique_modes.m"
        *check_hlds__unique_modes__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 998 "unique_modes.m"
        *check_hlds__unique_modes__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 998 "unique_modes.m"
        *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_7 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6;
#line 998 "unique_modes.m"
      }
#line 998 "unique_modes.m"
    else
#line 1000 "unique_modes.m"
      {
#line 1000 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1000 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1000 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal_17;
#line 1000 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals_18;
#line 1000 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_19;
#line 1000 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_20;
#line 1000 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap0_22;
#line 1000 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25;
#line 1000 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26;
#line 1000 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27;

#line 1001 "unique_modes.m"
        {
#line 1001 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__unique_modes__InstMap0_22);
        }
#line 1005 "unique_modes.m"
        {
#line 1005 "unique_modes.m"
          check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__unique_modes__Goal0_13, check_hlds__unique_modes__DisjDetism_2, check_hlds__unique_modes__DisjNonLocals_3, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25);
        }
#line 1006 "unique_modes.m"
        {
#line 1006 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Goal0_13, &check_hlds__unique_modes__Goal_17, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26);
        }
#line 1007 "unique_modes.m"
        {
#line 1007 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__unique_modes__InstMap_19);
        }
#line 1008 "unique_modes.m"
        {
#line 1008 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_22, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27);
        }
#line 1009 "unique_modes.m"
        {
#line 1009 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_disj_7_p_0(check_hlds__unique_modes__Goals0_14, check_hlds__unique_modes__DisjDetism_2, check_hlds__unique_modes__DisjNonLocals_3, &check_hlds__unique_modes__Goals_18, &check_hlds__unique_modes__InstMaps_20, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_7);
        }
#line 1000 "unique_modes.m"
        {
#line 1000 "unique_modes.m"
          MR_Word base;
#line 1000 "unique_modes.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "unique_modes.m"
          *check_hlds__unique_modes__HeadVar__4_4 = base;
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Goal_17));
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__Goals_18));
#line 1000 "unique_modes.m"
        }
#line 1000 "unique_modes.m"
        {
#line 1000 "unique_modes.m"
          MR_Word base;
#line 1000 "unique_modes.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "unique_modes.m"
          *check_hlds__unique_modes__HeadVar__5_5 = base;
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__InstMap_19));
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__InstMaps_20));
#line 1000 "unique_modes.m"
        }
#line 1000 "unique_modes.m"
      }
#line 998 "unique_modes.m"
  }
#line 994 "unique_modes.m"
}

#line 893 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_conj_2_6_p_0(
#line 893 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ConjType_7,
#line 893 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goal0_8,
#line 893 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goals0_9,
#line 893 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
#line 893 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_15,
#line 893 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_16)
#line 893 "unique_modes.m"
{
#line 898 "unique_modes.m"
  {
#line 898 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 898 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Goal_10;
#line 898 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Goals_11;
#line 898 "unique_modes.m"
    MR_Word check_hlds__unique_modes__NonLocals_13;
#line 898 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstMap_14;
#line 898 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_17;
#line 898 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18;

#line 899 "unique_modes.m"
    {
#line 899 "unique_modes.m"
      check_hlds__unique_modes__NonLocals_13 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__unique_modes__Goal0_8);
    }
#line 900 "unique_modes.m"
    {
#line 900 "unique_modes.m"
      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_13, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_15, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_17);
    }
#line 901 "unique_modes.m"
    {
#line 901 "unique_modes.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Goal0_8, &check_hlds__unique_modes__Goal_10, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_17, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18);
    }
#line 902 "unique_modes.m"
    {
#line 902 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__InstMap_14);
    }
#line 903 "unique_modes.m"
    {
#line 903 "unique_modes.m"
      check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__unique_modes__InstMap_14);
    }
#line 909 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 907 "unique_modes.m"
      {
#line 907 "unique_modes.m"
        {
#line 907 "unique_modes.m"
          check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__unique_modes__Goals0_9, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_16);
        }
#line 908 "unique_modes.m"
        check_hlds__unique_modes__Goals_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 907 "unique_modes.m"
      }
#line 909 "unique_modes.m"
    else
#line 910 "unique_modes.m"
      {
#line 910 "unique_modes.m"
        check_hlds__unique_modes__unique_modes_check_conj_5_p_0(check_hlds__unique_modes__ConjType_7, check_hlds__unique_modes__Goals0_9, &check_hlds__unique_modes__Goals_11, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_16);
      }
#line 898 "unique_modes.m"
    {
#line 898 "unique_modes.m"
      MR_Word base;
#line 898 "unique_modes.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "unique_modes.m"
      *check_hlds__unique_modes__HeadVar__4_4 = base;
#line 898 "unique_modes.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Goal_10));
#line 898 "unique_modes.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__Goals_11));
#line 898 "unique_modes.m"
    }
#line 898 "unique_modes.m"
  }
#line 893 "unique_modes.m"
}

#line 877 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_conj_5_p_0(
#line 877 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 877 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
#line 877 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3,
#line 877 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4,
#line 877 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5)
#line 877 "unique_modes.m"
{
#line 884 "unique_modes.m"
  while (MR_TRUE)
#line 884 "unique_modes.m"
    {
#line 884 "unique_modes.m"
      /* tailcall optimized into a loop */
#line 884 "unique_modes.m"
      {
#line 884 "unique_modes.m"
        MR_bool check_hlds__unique_modes__succeeded;

#line 884 "unique_modes.m"
        if ((check_hlds__unique_modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 884 "unique_modes.m"
          {
#line 884 "unique_modes.m"
            *check_hlds__unique_modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 884 "unique_modes.m"
            *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4;
#line 884 "unique_modes.m"
          }
#line 884 "unique_modes.m"
        else
#line 885 "unique_modes.m"
          {
#line 885 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__2_2, (MR_Integer) 0)));
#line 885 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__2_2, (MR_Integer) 1)));
#line 889 "unique_modes.m"
            MR_Word check_hlds__unique_modes__ConjGoals_15;
#line 886 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_11, (MR_Integer) 0)));
#line 886 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_24_24;
#line 886 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_11, (MR_Integer) 1)));

#line 886 "unique_modes.m"
            check_hlds__unique_modes__succeeded = ((((MR_tag((MR_Word) check_hlds__unique_modes__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 886 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 886 "unique_modes.m"
              {
#line 886 "unique_modes.m"
                check_hlds__unique_modes__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_20_20, (MR_Integer) 1)));
#line 886 "unique_modes.m"
                check_hlds__unique_modes__ConjGoals_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_20_20, (MR_Integer) 2)));
#line 886 "unique_modes.m"
                check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__HeadVar__1_1 == check_hlds__unique_modes__V_24_24);
#line 886 "unique_modes.m"
              }
#line 889 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 887 "unique_modes.m"
              {
#line 887 "unique_modes.m"
                MR_Word check_hlds__unique_modes__Goals1_17;

#line 887 "unique_modes.m"
                {
#line 887 "unique_modes.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__unique_modes__ConjGoals_15, check_hlds__unique_modes__Goals0_12, &check_hlds__unique_modes__Goals1_17);
                }
#line 888 "unique_modes.m"
                /* direct tailcall eliminated */
#line 888 "unique_modes.m"
                {
#line 888 "unique_modes.m"
                  MR_Word check_hlds__unique_modes__HeadVar__2__tmp_copy_2 = check_hlds__unique_modes__Goals1_17;

#line 888 "unique_modes.m"
                  check_hlds__unique_modes__HeadVar__2_2 = check_hlds__unique_modes__HeadVar__2__tmp_copy_2;
#line 888 "unique_modes.m"
                }
#line 888 "unique_modes.m"
                continue;
#line 887 "unique_modes.m"
              }
#line 889 "unique_modes.m"
            else
#line 890 "unique_modes.m"
              {
#line 890 "unique_modes.m"
                check_hlds__unique_modes__unique_modes_check_conj_2_6_p_0(check_hlds__unique_modes__HeadVar__1_1, check_hlds__unique_modes__Goal0_11, check_hlds__unique_modes__Goals0_12, check_hlds__unique_modes__HeadVar__3_3, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5);
#line 890 "unique_modes.m"
                return;
              }
#line 885 "unique_modes.m"
          }
#line 884 "unique_modes.m"
      }
#line 884 "unique_modes.m"
      break;
#line 884 "unique_modes.m"
    }
#line 877 "unique_modes.m"
}

#line 748 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_call_7_p_0(
#line 748 "unique_modes.m"
  MR_Word check_hlds__unique_modes__PredId_8,
#line 748 "unique_modes.m"
  MR_Integer check_hlds__unique_modes__ProcId0_9,
#line 748 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ArgVars_10,
#line 748 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo_11,
#line 748 "unique_modes.m"
  MR_Integer * check_hlds__unique_modes__ProcId_12,
#line 748 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37,
#line 748 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38)
#line 748 "unique_modes.m"
{
#line 752 "unique_modes.m"
  {
#line 752 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__OldErrors_14;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstMap0_15;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ModuleInfo_16;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__PredInfo_17;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ProcInfo_18;
#line 752 "unique_modes.m"
    MR_Integer check_hlds__unique_modes__ArgOffset_19;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ProcArgModes0_20;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InterfaceDeterminism_21;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__NeverSucceeds_22;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ModeErrors_23;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Errors_29;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__MayChangeCalledProc_30;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ModuleInfo_64;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InitialInsts_65;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstVarSub_66;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__FinalInsts0_67;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__FinalInsts_68;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__NewArgVars_69;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ExtraGoals_70;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_73;
#line 752 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_74;

#line 755 "unique_modes.m"
    {
#line 755 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__unique_modes__OldErrors_14);
    }
#line 756 "unique_modes.m"
    {
#line 756 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__unique_modes__InstMap0_15);
    }
#line 757 "unique_modes.m"
    {
#line 757 "unique_modes.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40);
    }
#line 760 "unique_modes.m"
    {
#line 760 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__ModuleInfo_16);
    }
#line 761 "unique_modes.m"
    {
#line 761 "unique_modes.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__unique_modes__ModuleInfo_16, check_hlds__unique_modes__PredId_8, check_hlds__unique_modes__ProcId0_9, &check_hlds__unique_modes__PredInfo_17, &check_hlds__unique_modes__ProcInfo_18);
    }
#line 763 "unique_modes.m"
    {
#line 763 "unique_modes.m"
      check_hlds__modecheck_util__compute_arg_offset_2_p_0(check_hlds__unique_modes__PredInfo_17, &check_hlds__unique_modes__ArgOffset_19);
    }
#line 764 "unique_modes.m"
    {
#line 764 "unique_modes.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__unique_modes__ProcInfo_18, &check_hlds__unique_modes__ProcArgModes0_20);
    }
#line 765 "unique_modes.m"
    {
#line 765 "unique_modes.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__unique_modes__ProcInfo_18, &check_hlds__unique_modes__InterfaceDeterminism_21);
    }
#line 766 "unique_modes.m"
    {
#line 766 "unique_modes.m"
      hlds__hlds_pred__proc_info_never_succeeds_2_p_0(check_hlds__unique_modes__ProcInfo_18, &check_hlds__unique_modes__NeverSucceeds_22);
    }
#line 841 "unique_modes.m"
    {
#line 841 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__ModuleInfo_64);
    }
#line 842 "unique_modes.m"
    {
#line 842 "unique_modes.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__unique_modes__ModuleInfo_64, check_hlds__unique_modes__ProcArgModes0_20, &check_hlds__unique_modes__InitialInsts_65);
    }
#line 843 "unique_modes.m"
    {
#line 843 "unique_modes.m"
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__unique_modes__ArgVars_10, check_hlds__unique_modes__InitialInsts_65, check_hlds__unique_modes__ArgOffset_19, &check_hlds__unique_modes__InstVarSub_66, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_73);
    }
#line 845 "unique_modes.m"
    {
#line 845 "unique_modes.m"
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__unique_modes__ModuleInfo_64, check_hlds__unique_modes__ProcArgModes0_20, &check_hlds__unique_modes__FinalInsts0_67);
    }
#line 846 "unique_modes.m"
    {
#line 846 "unique_modes.m"
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__unique_modes__InstVarSub_66, check_hlds__unique_modes__FinalInsts0_67, &check_hlds__unique_modes__FinalInsts_68);
    }
#line 847 "unique_modes.m"
    {
#line 847 "unique_modes.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__unique_modes__ArgVars_10, check_hlds__unique_modes__InitialInsts_65, check_hlds__unique_modes__FinalInsts_68, check_hlds__unique_modes__ArgOffset_19, &check_hlds__unique_modes__NewArgVars_69, &check_hlds__unique_modes__ExtraGoals_70, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_73, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_74);
    }
#line 850 "unique_modes.m"
    {
#line 850 "unique_modes.m"
      check_hlds__unique_modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[1], ((MR_Box) (check_hlds__unique_modes__NewArgVars_69)), ((MR_Box) (check_hlds__unique_modes__ArgVars_10)));
    }
#line 850 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 851 "unique_modes.m"
      check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__ExtraGoals_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 853 "unique_modes.m"
      {
#line 853 "unique_modes.m"
      }
#line 854 "unique_modes.m"
    else
#line 857 "unique_modes.m"
      {
#line 857 "unique_modes.m"
        {
#line 857 "unique_modes.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
#line 857 "unique_modes.m"
          return;
        }
#line 857 "unique_modes.m"
      }
#line 863 "unique_modes.m"
    if ((check_hlds__unique_modes__NeverSucceeds_22 == (MR_Integer) 0))
#line 870 "unique_modes.m"
      {
#line 868 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_81_81;
#line 868 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_72_72;

#line 868 "unique_modes.m"
        {
#line 868 "unique_modes.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__InterfaceDeterminism_21, &check_hlds__unique_modes__V_72_72, &check_hlds__unique_modes__V_81_81);
        }
#line 868 "unique_modes.m"
        check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__V_81_81);
#line 870 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 164 "unique_modes.m"
          {
#line 164 "unique_modes.m"
            MR_Word check_hlds__unique_modes__FullInstMap0_85;

#line 165 "unique_modes.m"
            {
#line 165 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_74, &check_hlds__unique_modes__FullInstMap0_85);
            }
#line 166 "unique_modes.m"
            {
#line 166 "unique_modes.m"
              check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_85);
            }
#line 170 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 167 "unique_modes.m"
              {
#line 167 "unique_modes.m"
                MR_Word check_hlds__unique_modes__AllVars_86;
#line 167 "unique_modes.m"
                MR_Word check_hlds__unique_modes__NondetLiveVars_87;

#line 167 "unique_modes.m"
                {
#line 167 "unique_modes.m"
                  hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_85, &check_hlds__unique_modes__AllVars_86);
                }
#line 168 "unique_modes.m"
                {
#line 168 "unique_modes.m"
                  check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_86, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_74, &check_hlds__unique_modes__NondetLiveVars_87);
                }
#line 169 "unique_modes.m"
                {
#line 169 "unique_modes.m"
                  check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_87, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_74, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41);
                }
#line 167 "unique_modes.m"
              }
#line 170 "unique_modes.m"
            else
#line 171 "unique_modes.m"
              check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_74;
#line 164 "unique_modes.m"
          }
#line 870 "unique_modes.m"
        else
#line 869 "unique_modes.m"
          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_74;
#line 870 "unique_modes.m"
      }
#line 863 "unique_modes.m"
    else
#line 860 "unique_modes.m"
      {
#line 860 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_71;

#line 861 "unique_modes.m"
        {
#line 861 "unique_modes.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__unique_modes__InstMap_71);
        }
#line 862 "unique_modes.m"
        {
#line 862 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_71, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_74, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41);
        }
#line 860 "unique_modes.m"
      }
#line 769 "unique_modes.m"
    {
#line 769 "unique_modes.m"
      check_hlds__unique_modes__ModeErrors_23 = hlds__hlds_pred__mode_errors_1_f_0(check_hlds__unique_modes__ProcInfo_18);
    }
#line 780 "unique_modes.m"
    if ((check_hlds__unique_modes__ModeErrors_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 781 "unique_modes.m"
      check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41;
#line 780 "unique_modes.m"
    else
#line 771 "unique_modes.m"
      {
#line 771 "unique_modes.m"
        MR_Word check_hlds__unique_modes__WaitingVars_26;
#line 771 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_27;
#line 771 "unique_modes.m"
        MR_Word check_hlds__unique_modes__ArgInsts_28;
#line 771 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_42_42;
#line 771 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_44_44;

#line 773 "unique_modes.m"
        {
#line 773 "unique_modes.m"
          check_hlds__unique_modes__WaitingVars_26 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unique_modes__ArgVars_10);
        }
#line 774 "unique_modes.m"
        {
#line 774 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__unique_modes__InstMap_27);
        }
#line 775 "unique_modes.m"
        {
#line 775 "unique_modes.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__unique_modes__InstMap_27, check_hlds__unique_modes__ArgVars_10, &check_hlds__unique_modes__ArgInsts_28);
        }
#line 777 "unique_modes.m"
        {
#line 777 "unique_modes.m"
          check_hlds__unique_modes__V_44_44 = hlds__hlds_pred__mode_errors_1_f_0(check_hlds__unique_modes__ProcInfo_18);
        }
#line 776 "unique_modes.m"
        {
#line 776 "unique_modes.m"
          check_hlds__unique_modes__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 776 "unique_modes.m"
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 776 "unique_modes.m"
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_42_42, 1) = ((MR_Box) (check_hlds__unique_modes__ArgVars_10));
#line 776 "unique_modes.m"
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_42_42, 2) = ((MR_Box) (check_hlds__unique_modes__ArgInsts_28));
#line 776 "unique_modes.m"
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_42_42, 3) = ((MR_Box) (check_hlds__unique_modes__PredId_8));
#line 776 "unique_modes.m"
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_42_42, 4) = ((MR_Box) (check_hlds__unique_modes__ProcId0_9));
#line 776 "unique_modes.m"
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_42_42, 5) = ((MR_Box) (check_hlds__unique_modes__V_44_44));
#line 776 "unique_modes.m"
        }
#line 776 "unique_modes.m"
        {
#line 776 "unique_modes.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__unique_modes__WaitingVars_26, check_hlds__unique_modes__V_42_42, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43);
        }
#line 771 "unique_modes.m"
      }
#line 785 "unique_modes.m"
    {
#line 785 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__unique_modes__Errors_29);
    }
#line 786 "unique_modes.m"
    {
#line 786 "unique_modes.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__unique_modes__OldErrors_14, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45);
    }
#line 787 "unique_modes.m"
    {
#line 787 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__unique_modes__MayChangeCalledProc_30);
    }
#line 791 "unique_modes.m"
    if ((check_hlds__unique_modes__Errors_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 789 "unique_modes.m"
      {
#line 790 "unique_modes.m"
        *check_hlds__unique_modes__ProcId_12 = check_hlds__unique_modes__ProcId0_9;
#line 790 "unique_modes.m"
        *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45;
#line 789 "unique_modes.m"
      }
#line 791 "unique_modes.m"
    else
#line 800 "unique_modes.m"
      if ((check_hlds__unique_modes__MayChangeCalledProc_30 == (MR_Integer) 0))
#line 801 "unique_modes.m"
        {
#line 801 "unique_modes.m"
          MR_Word check_hlds__unique_modes__Determinism_34;
#line 801 "unique_modes.m"
          MR_Word check_hlds__unique_modes__NewArgVars_35;
#line 801 "unique_modes.m"
          MR_Word check_hlds__unique_modes__ExtraGoals_36;
#line 801 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46;
#line 801 "unique_modes.m"
          MR_Word check_hlds__unique_modes__V_47_47;

#line 812 "unique_modes.m"
          {
#line 812 "unique_modes.m"
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_15, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46);
          }
#line 813 "unique_modes.m"
          {
#line 813 "unique_modes.m"
            hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(check_hlds__unique_modes__ProcInfo_18, &check_hlds__unique_modes__Determinism_34);
          }
#line 814 "unique_modes.m"
          {
#line 814 "unique_modes.m"
            check_hlds__unique_modes__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 814 "unique_modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_47_47, 0) = ((MR_Box) (check_hlds__unique_modes__Determinism_34));
#line 814 "unique_modes.m"
          }
#line 814 "unique_modes.m"
          {
#line 814 "unique_modes.m"
            check_hlds__modecheck_call__modecheck_call_pred_10_p_0(check_hlds__unique_modes__PredId_8, check_hlds__unique_modes__V_47_47, check_hlds__unique_modes__ProcId0_9, check_hlds__unique_modes__ProcId_12, check_hlds__unique_modes__ArgVars_10, &check_hlds__unique_modes__NewArgVars_35, check_hlds__unique_modes__GoalInfo_11, &check_hlds__unique_modes__ExtraGoals_36, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38);
          }
#line 818 "unique_modes.m"
          {
#line 818 "unique_modes.m"
            check_hlds__unique_modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[1], ((MR_Box) (check_hlds__unique_modes__NewArgVars_35)), ((MR_Box) (check_hlds__unique_modes__ArgVars_10)));
          }
#line 818 "unique_modes.m"
          if (check_hlds__unique_modes__succeeded)
#line 819 "unique_modes.m"
            check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__ExtraGoals_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 822 "unique_modes.m"
          if (check_hlds__unique_modes__succeeded)
#line 821 "unique_modes.m"
            {
#line 821 "unique_modes.m"
            }
#line 822 "unique_modes.m"
          else
#line 827 "unique_modes.m"
            {
#line 827 "unique_modes.m"
              {
#line 827 "unique_modes.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call\'/7", (MR_String) "call to implied mode\?");
#line 827 "unique_modes.m"
                return;
              }
#line 827 "unique_modes.m"
            }
#line 801 "unique_modes.m"
        }
#line 800 "unique_modes.m"
      else
#line 794 "unique_modes.m"
        {
#line 794 "unique_modes.m"
          MR_Word check_hlds__unique_modes__AllErrors_33;

#line 797 "unique_modes.m"
          *check_hlds__unique_modes__ProcId_12 = check_hlds__unique_modes__ProcId0_9;
#line 798 "unique_modes.m"
          {
#line 798 "unique_modes.m"
            mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__unique_modes__OldErrors_14, check_hlds__unique_modes__Errors_29, &check_hlds__unique_modes__AllErrors_33);
          }
#line 799 "unique_modes.m"
          {
#line 799 "unique_modes.m"
            check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__unique_modes__AllErrors_33, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38);
#line 799 "unique_modes.m"
            return;
          }
#line 794 "unique_modes.m"
        }
#line 752 "unique_modes.m"
  }
#line 748 "unique_modes.m"
}

#line 699 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_p_0(
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalType_12,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Outer_13,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Inner_14,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__MaybeOutputVars_15,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__MainGoal0_16,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__OrElseGoals0_17,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__OrElseInners_18,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_19,
#line 699 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_20,
#line 699 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_34,
#line 699 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35)
#line 699 "unique_modes.m"
{
#line 708 "unique_modes.m"
  {
#line 708 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 708 "unique_modes.m"
    MR_Word check_hlds__unique_modes__MainGoal_22;
#line 708 "unique_modes.m"
    MR_Word check_hlds__unique_modes__OrElseGoals_23;
#line 708 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ShortHand_33;
#line 708 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38;
#line 708 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49;

#line 709 "unique_modes.m"
    {
#line 709 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "atomic_goal", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38);
    }
#line 714 "unique_modes.m"
    if ((check_hlds__unique_modes__OrElseGoals0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 711 "unique_modes.m"
      {
#line 712 "unique_modes.m"
        {
#line 712 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__MainGoal0_16, &check_hlds__unique_modes__MainGoal_22, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49);
        }
#line 713 "unique_modes.m"
        check_hlds__unique_modes__OrElseGoals_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 711 "unique_modes.m"
      }
#line 714 "unique_modes.m"
    else
#line 715 "unique_modes.m"
      {
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__NonLocals_26;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Determinism_27;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals_30;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_31;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__ArmInstMaps_32;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_70;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_71;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap0_73;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_76;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_77;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_78;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal0_85;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals0_86;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal_89;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals_90;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_91;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_92;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap0_94;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_97;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_98;
#line 715 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_99;
#line 722 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_53_53;
#line 722 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_28_28;

#line 720 "unique_modes.m"
        {
#line 720 "unique_modes.m"
          check_hlds__unique_modes__NonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_19);
        }
#line 721 "unique_modes.m"
        {
#line 721 "unique_modes.m"
          check_hlds__unique_modes__Determinism_27 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_19);
        }
#line 722 "unique_modes.m"
        {
#line 722 "unique_modes.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Determinism_27, &check_hlds__unique_modes__V_28_28, &check_hlds__unique_modes__V_53_53);
        }
#line 722 "unique_modes.m"
        check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__V_53_53);
#line 726 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 723 "unique_modes.m"
          {
#line 723 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40;
#line 723 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41;
#line 723 "unique_modes.m"
            MR_Word check_hlds__unique_modes__FullInstMap0_56;

#line 723 "unique_modes.m"
            {
#line 723 "unique_modes.m"
              check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_26, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40);
            }
#line 165 "unique_modes.m"
            {
#line 165 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__FullInstMap0_56);
            }
#line 166 "unique_modes.m"
            {
#line 166 "unique_modes.m"
              check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_56);
            }
#line 170 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 167 "unique_modes.m"
              {
#line 167 "unique_modes.m"
                MR_Word check_hlds__unique_modes__AllVars_57;
#line 167 "unique_modes.m"
                MR_Word check_hlds__unique_modes__NondetLiveVars_58;

#line 167 "unique_modes.m"
                {
#line 167 "unique_modes.m"
                  hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_56, &check_hlds__unique_modes__AllVars_57);
                }
#line 168 "unique_modes.m"
                {
#line 168 "unique_modes.m"
                  check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_57, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__NondetLiveVars_58);
                }
#line 169 "unique_modes.m"
                {
#line 169 "unique_modes.m"
                  check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_58, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41);
                }
#line 167 "unique_modes.m"
              }
#line 170 "unique_modes.m"
            else
#line 171 "unique_modes.m"
              check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40;
#line 725 "unique_modes.m"
            {
#line 725 "unique_modes.m"
              check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_26, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42);
            }
#line 723 "unique_modes.m"
          }
#line 726 "unique_modes.m"
        else
#line 725 "unique_modes.m"
          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38;
#line 1001 "unique_modes.m"
        {
#line 1001 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__unique_modes__InstMap0_73);
        }
#line 1005 "unique_modes.m"
        {
#line 1005 "unique_modes.m"
          check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__unique_modes__MainGoal0_16, check_hlds__unique_modes__Determinism_27, check_hlds__unique_modes__NonLocals_26, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_76);
        }
#line 1006 "unique_modes.m"
        {
#line 1006 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__MainGoal0_16, &check_hlds__unique_modes__MainGoal_22, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_76, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_77);
        }
#line 1007 "unique_modes.m"
        {
#line 1007 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_77, &check_hlds__unique_modes__InstMap_70);
        }
#line 1008 "unique_modes.m"
        {
#line 1008 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_73, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_77, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_78);
        }
#line 1000 "unique_modes.m"
        check_hlds__unique_modes__Goal0_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__OrElseGoals0_17, (MR_Integer) 0)));
#line 1000 "unique_modes.m"
        check_hlds__unique_modes__Goals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__OrElseGoals0_17, (MR_Integer) 1)));
#line 1001 "unique_modes.m"
        {
#line 1001 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_78, &check_hlds__unique_modes__InstMap0_94);
        }
#line 1005 "unique_modes.m"
        {
#line 1005 "unique_modes.m"
          check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__unique_modes__Goal0_85, check_hlds__unique_modes__Determinism_27, check_hlds__unique_modes__NonLocals_26, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_78, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_97);
        }
#line 1006 "unique_modes.m"
        {
#line 1006 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Goal0_85, &check_hlds__unique_modes__Goal_89, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_97, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_98);
        }
#line 1007 "unique_modes.m"
        {
#line 1007 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_98, &check_hlds__unique_modes__InstMap_91);
        }
#line 1008 "unique_modes.m"
        {
#line 1008 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_94, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_98, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_99);
        }
#line 1009 "unique_modes.m"
        {
#line 1009 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_disj_7_p_0(check_hlds__unique_modes__Goals0_86, check_hlds__unique_modes__Determinism_27, check_hlds__unique_modes__NonLocals_26, &check_hlds__unique_modes__Goals_90, &check_hlds__unique_modes__InstMaps_92, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_99, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43);
        }
#line 1000 "unique_modes.m"
        {
#line 1000 "unique_modes.m"
          check_hlds__unique_modes__OrElseGoals_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__OrElseGoals_23, 0) = ((MR_Box) (check_hlds__unique_modes__Goal_89));
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__OrElseGoals_23, 1) = ((MR_Box) (check_hlds__unique_modes__Goals_90));
#line 1000 "unique_modes.m"
        }
#line 1000 "unique_modes.m"
        {
#line 1000 "unique_modes.m"
          check_hlds__unique_modes__InstMaps_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__InstMaps_71, 0) = ((MR_Box) (check_hlds__unique_modes__InstMap_91));
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__InstMaps_71, 1) = ((MR_Box) (check_hlds__unique_modes__InstMaps_92));
#line 1000 "unique_modes.m"
        }
#line 1000 "unique_modes.m"
        {
#line 1000 "unique_modes.m"
          check_hlds__unique_modes__Goals_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals_30, 0) = ((MR_Box) (check_hlds__unique_modes__MainGoal_22));
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals_30, 1) = ((MR_Box) (check_hlds__unique_modes__OrElseGoals_23));
#line 1000 "unique_modes.m"
        }
#line 1000 "unique_modes.m"
        {
#line 1000 "unique_modes.m"
          check_hlds__unique_modes__InstMaps_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__InstMaps_31, 0) = ((MR_Box) (check_hlds__unique_modes__InstMap_70));
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__InstMaps_31, 1) = ((MR_Box) (check_hlds__unique_modes__InstMaps_71));
#line 1000 "unique_modes.m"
        }
#line 738 "unique_modes.m"
        {
#line 738 "unique_modes.m"
          hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__unique_modes__Goals_30, check_hlds__unique_modes__InstMaps_31, &check_hlds__unique_modes__ArmInstMaps_32);
        }
#line 739 "unique_modes.m"
        {
#line 739 "unique_modes.m"
          hlds__instmap__instmap_merge_5_p_0(check_hlds__unique_modes__NonLocals_26, check_hlds__unique_modes__ArmInstMaps_32, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49);
        }
#line 715 "unique_modes.m"
      }
#line 741 "unique_modes.m"
    {
#line 741 "unique_modes.m"
      check_hlds__unique_modes__ShortHand_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 741 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_33, 0) = ((MR_Box) (check_hlds__unique_modes__GoalType_12));
#line 741 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_33, 1) = ((MR_Box) (check_hlds__unique_modes__Outer_13));
#line 741 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_33, 2) = ((MR_Box) (check_hlds__unique_modes__Inner_14));
#line 741 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_33, 3) = ((MR_Box) (check_hlds__unique_modes__MaybeOutputVars_15));
#line 741 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_33, 4) = ((MR_Box) (check_hlds__unique_modes__MainGoal_22));
#line 741 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_33, 5) = ((MR_Box) (check_hlds__unique_modes__OrElseGoals_23));
#line 741 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_33, 6) = ((MR_Box) (check_hlds__unique_modes__OrElseInners_18));
#line 741 "unique_modes.m"
    }
#line 743 "unique_modes.m"
    {
#line 743 "unique_modes.m"
      MR_Word base;
#line 743 "unique_modes.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "unique_modes.m"
      *check_hlds__unique_modes__GoalExpr_20 = base;
#line 743 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 743 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__ShortHand_33));
#line 743 "unique_modes.m"
    }
#line 744 "unique_modes.m"
    {
#line 744 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "atomic_goal", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35);
#line 744 "unique_modes.m"
      return;
    }
#line 708 "unique_modes.m"
  }
#line 699 "unique_modes.m"
}

#line 653 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_switch_7_p_0(
#line 653 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Var_8,
#line 653 "unique_modes.m"
  MR_Word check_hlds__unique_modes__CanFail_9,
#line 653 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Cases0_10,
#line 653 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_11,
#line 653 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_12,
#line 653 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_21,
#line 653 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22)
#line 653 "unique_modes.m"
{
#line 658 "unique_modes.m"
  {
#line 658 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 658 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Cases_14;
#line 658 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25;
#line 658 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29;

#line 659 "unique_modes.m"
    {
#line 659 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "switch", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_21, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25);
    }
#line 665 "unique_modes.m"
    if ((check_hlds__unique_modes__Cases0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 661 "unique_modes.m"
      {
#line 661 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_15;

#line 662 "unique_modes.m"
        check_hlds__unique_modes__Cases_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "unique_modes.m"
        {
#line 663 "unique_modes.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__unique_modes__InstMap_15);
        }
#line 664 "unique_modes.m"
        {
#line 664 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_15, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29);
        }
#line 661 "unique_modes.m"
      }
#line 665 "unique_modes.m"
    else
#line 666 "unique_modes.m"
      {
#line 666 "unique_modes.m"
        MR_Word check_hlds__unique_modes__NonLocals_18;
#line 666 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_19;
#line 666 "unique_modes.m"
        MR_Word check_hlds__unique_modes__ArmInstMaps_20;
#line 666 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26;

#line 667 "unique_modes.m"
        {
#line 667 "unique_modes.m"
          check_hlds__unique_modes__NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_11);
        }
#line 668 "unique_modes.m"
        {
#line 668 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(check_hlds__unique_modes__Cases0_10, check_hlds__unique_modes__Var_8, &check_hlds__unique_modes__Cases_14, &check_hlds__unique_modes__InstMaps_19, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26);
        }
#line 669 "unique_modes.m"
        {
#line 669 "unique_modes.m"
          hlds__instmap__make_arm_instmaps_for_cases_3_p_0(check_hlds__unique_modes__Cases_14, check_hlds__unique_modes__InstMaps_19, &check_hlds__unique_modes__ArmInstMaps_20);
        }
#line 670 "unique_modes.m"
        {
#line 670 "unique_modes.m"
          hlds__instmap__instmap_merge_5_p_0(check_hlds__unique_modes__NonLocals_18, check_hlds__unique_modes__ArmInstMaps_20, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29);
        }
#line 666 "unique_modes.m"
      }
#line 672 "unique_modes.m"
    {
#line 672 "unique_modes.m"
      MR_Word base;
#line 672 "unique_modes.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 672 "unique_modes.m"
      *check_hlds__unique_modes__GoalExpr_12 = base;
#line 672 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 672 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Var_8));
#line 672 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__CanFail_9));
#line 672 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__unique_modes__Cases_14));
#line 672 "unique_modes.m"
    }
#line 673 "unique_modes.m"
    {
#line 673 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "switch", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22);
#line 673 "unique_modes.m"
      return;
    }
#line 658 "unique_modes.m"
  }
#line 653 "unique_modes.m"
}

#line 500 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_scope_6_p_0(
#line 500 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Reason_7,
#line 500 "unique_modes.m"
  MR_Word check_hlds__unique_modes__SubGoal0_8,
#line 500 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_9,
#line 500 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_10,
#line 500 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_39,
#line 500 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40)
#line 500 "unique_modes.m"
{
#line 507 "unique_modes.m"
  {
#line 507 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;

#line 507 "unique_modes.m"
    if (((((MR_tag((MR_Word) check_hlds__unique_modes__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 521 "unique_modes.m"
      {
#line 521 "unique_modes.m"
        MR_Word check_hlds__unique_modes__TermVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Reason_7, (MR_Integer) 1)));
#line 521 "unique_modes.m"
        MR_Word check_hlds__unique_modes__FGT_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Reason_7, (MR_Integer) 2)));

#line 553 "unique_modes.m"
        if ((check_hlds__unique_modes__FGT_21 == (MR_Integer) 1))
#line 523 "unique_modes.m"
          {
#line 523 "unique_modes.m"
            MR_Word check_hlds__unique_modes__LiveTermVar_22;
#line 523 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_60;
#line 523 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_63_63;

#line 524 "unique_modes.m"
            {
#line 524 "unique_modes.m"
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "from_ground_term_construct scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_60);
            }
#line 526 "unique_modes.m"
            {
#line 526 "unique_modes.m"
              check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_60, check_hlds__unique_modes__TermVar_20, &check_hlds__unique_modes__LiveTermVar_22);
            }
#line 546 "unique_modes.m"
            if ((check_hlds__unique_modes__LiveTermVar_22 == (MR_Integer) 1))
#line 547 "unique_modes.m"
              {
#line 549 "unique_modes.m"
                *check_hlds__unique_modes__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__unique_modes_scalar_common_3[1]);
#line 549 "unique_modes.m"
                check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_63_63 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_60;
#line 547 "unique_modes.m"
              }
#line 546 "unique_modes.m"
            else
#line 528 "unique_modes.m"
              {
#line 528 "unique_modes.m"
                MR_Word check_hlds__unique_modes__SubGoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__SubGoal0_8, (MR_Integer) 1)));
#line 528 "unique_modes.m"
                MR_Word check_hlds__unique_modes__InstMapDelta_25;
#line 533 "unique_modes.m"
                MR_Word check_hlds__unique_modes__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__SubGoal0_8, (MR_Integer) 0)));
#line 542 "unique_modes.m"
                MR_Word check_hlds__unique_modes__TermVarInst_26;

#line 534 "unique_modes.m"
                {
#line 534 "unique_modes.m"
                  check_hlds__unique_modes__InstMapDelta_25 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__unique_modes__SubGoalInfo_24);
                }
#line 536 "unique_modes.m"
                {
#line 536 "unique_modes.m"
                  check_hlds__unique_modes__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__unique_modes__InstMapDelta_25, check_hlds__unique_modes__TermVar_20, &check_hlds__unique_modes__TermVarInst_26);
                }
#line 542 "unique_modes.m"
                if (check_hlds__unique_modes__succeeded)
#line 539 "unique_modes.m"
                  {
#line 539 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__InstMap_27;
#line 539 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__InstMap0_82;

#line 539 "unique_modes.m"
                    {
#line 539 "unique_modes.m"
                      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_60, &check_hlds__unique_modes__InstMap0_82);
                    }
#line 540 "unique_modes.m"
                    {
#line 540 "unique_modes.m"
                      hlds__instmap__instmap_set_var_4_p_0(check_hlds__unique_modes__TermVar_20, check_hlds__unique_modes__TermVarInst_26, check_hlds__unique_modes__InstMap0_82, &check_hlds__unique_modes__InstMap_27);
                    }
#line 541 "unique_modes.m"
                    {
#line 541 "unique_modes.m"
                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_27, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_60, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_63_63);
                    }
#line 539 "unique_modes.m"
                  }
#line 542 "unique_modes.m"
                else
#line 543 "unique_modes.m"
                  {
#line 543 "unique_modes.m"
                    {
#line 543 "unique_modes.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", (MR_String) "bad InstMapDelta");
#line 543 "unique_modes.m"
                      return;
                    }
#line 543 "unique_modes.m"
                  }
#line 545 "unique_modes.m"
                {
#line 545 "unique_modes.m"
                  MR_Word base;
#line 545 "unique_modes.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 545 "unique_modes.m"
                  *check_hlds__unique_modes__GoalExpr_10 = base;
#line 545 "unique_modes.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 545 "unique_modes.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Reason_7));
#line 545 "unique_modes.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal0_8));
#line 545 "unique_modes.m"
                }
#line 528 "unique_modes.m"
              }
#line 551 "unique_modes.m"
            {
#line 551 "unique_modes.m"
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "from_ground_term_construct scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_63_63, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40);
#line 551 "unique_modes.m"
              return;
            }
#line 523 "unique_modes.m"
          }
#line 553 "unique_modes.m"
        else
#line 553 "unique_modes.m"
          if ((check_hlds__unique_modes__FGT_21 == (MR_Integer) 0))
#line 562 "unique_modes.m"
            {
#line 563 "unique_modes.m"
              {
#line 563 "unique_modes.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", (MR_String) "from_ground_term_initial");
#line 563 "unique_modes.m"
                return;
              }
#line 562 "unique_modes.m"
            }
#line 553 "unique_modes.m"
          else
#line 556 "unique_modes.m"
            {
#line 556 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_53_53;
#line 556 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_54_54;
#line 556 "unique_modes.m"
              MR_Word check_hlds__unique_modes__SubGoal_90;

#line 557 "unique_modes.m"
              {
#line 557 "unique_modes.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_53_53);
              }
#line 558 "unique_modes.m"
              {
#line 558 "unique_modes.m"
                check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_8, &check_hlds__unique_modes__SubGoal_90, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_53_53, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_54_54);
              }
#line 559 "unique_modes.m"
              {
#line 559 "unique_modes.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_54_54, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40);
              }
#line 560 "unique_modes.m"
              {
#line 560 "unique_modes.m"
                MR_Word base;
#line 560 "unique_modes.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 560 "unique_modes.m"
                *check_hlds__unique_modes__GoalExpr_10 = base;
#line 560 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 560 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Reason_7));
#line 560 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal_90));
#line 560 "unique_modes.m"
              }
#line 556 "unique_modes.m"
            }
#line 521 "unique_modes.m"
      }
#line 507 "unique_modes.m"
    else
#line 507 "unique_modes.m"
      if (((((MR_tag((MR_Word) check_hlds__unique_modes__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 507 "unique_modes.m"
        {
#line 507 "unique_modes.m"
          MR_Word check_hlds__unique_modes__InstMap0_17;
#line 507 "unique_modes.m"
          MR_Word check_hlds__unique_modes__NonLocals_18;
#line 507 "unique_modes.m"
          MR_Word check_hlds__unique_modes__SubGoal_19;
#line 507 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_72_72;
#line 507 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_74_74;
#line 507 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_75_75;
#line 507 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_77_77;
#line 507 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_78_78;

#line 508 "unique_modes.m"
          {
#line 508 "unique_modes.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "trace scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_72_72);
          }
#line 509 "unique_modes.m"
          {
#line 509 "unique_modes.m"
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__unique_modes__InstMap0_17);
          }
#line 510 "unique_modes.m"
          {
#line 510 "unique_modes.m"
            check_hlds__unique_modes__NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_9);
          }
#line 514 "unique_modes.m"
          {
#line 514 "unique_modes.m"
            check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__unique_modes__NonLocals_18, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_74_74);
          }
#line 515 "unique_modes.m"
          {
#line 515 "unique_modes.m"
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_8, &check_hlds__unique_modes__SubGoal_19, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_74_74, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_75_75);
          }
#line 516 "unique_modes.m"
          {
#line 516 "unique_modes.m"
            check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__unique_modes__NonLocals_18, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_77_77);
          }
#line 517 "unique_modes.m"
          {
#line 517 "unique_modes.m"
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_17, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_77_77, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_78_78);
          }
#line 518 "unique_modes.m"
          {
#line 518 "unique_modes.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "trace scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_78_78, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40);
          }
#line 519 "unique_modes.m"
          {
#line 519 "unique_modes.m"
            MR_Word base;
#line 519 "unique_modes.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 519 "unique_modes.m"
            *check_hlds__unique_modes__GoalExpr_10 = base;
#line 519 "unique_modes.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 519 "unique_modes.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Reason_7));
#line 519 "unique_modes.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal_19));
#line 519 "unique_modes.m"
          }
#line 507 "unique_modes.m"
        }
#line 507 "unique_modes.m"
      else
#line 574 "unique_modes.m"
        {
#line 574 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43;
#line 574 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44;
#line 574 "unique_modes.m"
          MR_Word check_hlds__unique_modes__SubGoal_95;

#line 575 "unique_modes.m"
          {
#line 575 "unique_modes.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43);
          }
#line 576 "unique_modes.m"
          {
#line 576 "unique_modes.m"
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_8, &check_hlds__unique_modes__SubGoal_95, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44);
          }
#line 577 "unique_modes.m"
          {
#line 577 "unique_modes.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40);
          }
#line 578 "unique_modes.m"
          {
#line 578 "unique_modes.m"
            MR_Word base;
#line 578 "unique_modes.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 578 "unique_modes.m"
            *check_hlds__unique_modes__GoalExpr_10 = base;
#line 578 "unique_modes.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 578 "unique_modes.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Reason_7));
#line 578 "unique_modes.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal_95));
#line 578 "unique_modes.m"
          }
#line 574 "unique_modes.m"
        }
#line 507 "unique_modes.m"
  }
#line 500 "unique_modes.m"
}

#line 467 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_negation_5_p_0(
#line 467 "unique_modes.m"
  MR_Word check_hlds__unique_modes__SubGoal0_6,
#line 467 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_7,
#line 467 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 467 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_16,
#line 467 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17)
#line 467 "unique_modes.m"
{
#line 471 "unique_modes.m"
  {
#line 471 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstMap0_10;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__NonLocals_11;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__NonLocalsList_12;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__LiveNonLocals_13;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__LiveVars0_14;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__SubGoal_15;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_21;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_22_22;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29;
#line 471 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30;

#line 472 "unique_modes.m"
    {
#line 472 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "not", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20);
    }
#line 473 "unique_modes.m"
    {
#line 473 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20, &check_hlds__unique_modes__InstMap0_10);
    }
#line 479 "unique_modes.m"
    {
#line 479 "unique_modes.m"
      check_hlds__unique_modes__NonLocals_11 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_7);
    }
#line 480 "unique_modes.m"
    {
#line 480 "unique_modes.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unique_modes__NonLocals_11, &check_hlds__unique_modes__NonLocalsList_12);
    }
#line 481 "unique_modes.m"
    {
#line 481 "unique_modes.m"
      check_hlds__unique_modes__select_live_vars_3_p_0(check_hlds__unique_modes__NonLocalsList_12, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20, &check_hlds__unique_modes__LiveNonLocals_13);
    }
#line 482 "unique_modes.m"
    {
#line 482 "unique_modes.m"
      check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__LiveNonLocals_13, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_21);
    }
#line 487 "unique_modes.m"
    {
#line 487 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_live_vars_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__unique_modes__LiveVars0_14);
    }
#line 488 "unique_modes.m"
    {
#line 488 "unique_modes.m"
      check_hlds__unique_modes__V_22_22 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[0]);
    }
#line 488 "unique_modes.m"
    {
#line 488 "unique_modes.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__unique_modes__V_22_22, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23);
    }
#line 492 "unique_modes.m"
    {
#line 492 "unique_modes.m"
      check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unique_modes__NonLocals_11, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25);
    }
#line 493 "unique_modes.m"
    {
#line 493 "unique_modes.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_6, &check_hlds__unique_modes__SubGoal_15, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26);
    }
#line 494 "unique_modes.m"
    {
#line 494 "unique_modes.m"
      check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unique_modes__NonLocals_11, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28);
    }
#line 495 "unique_modes.m"
    {
#line 495 "unique_modes.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__unique_modes__LiveVars0_14, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29);
    }
#line 496 "unique_modes.m"
    {
#line 496 "unique_modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_10, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 497 "unique_modes.m"
    *check_hlds__unique_modes__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__unique_modes__SubGoal_15);
#line 498 "unique_modes.m"
    {
#line 498 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "not", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17);
#line 498 "unique_modes.m"
      return;
    }
#line 471 "unique_modes.m"
  }
#line 467 "unique_modes.m"
}

#line 393 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_p_0(
#line 393 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Vars_9,
#line 393 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Cond0_10,
#line 393 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Then0_11,
#line 393 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Else0_12,
#line 393 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_13,
#line 393 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_14,
#line 393 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_34,
#line 393 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35)
#line 393 "unique_modes.m"
{
#line 399 "unique_modes.m"
  {
#line 399 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__NonLocals_16;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__CondVars_17;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ThenVars_18;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ElseVars_19;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstMap0_20;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__CondVarList_21;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__CondLiveVars_22;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__CondInfo0_24;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__CondDeltaInstMap0_25;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ChangedVars_26;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Cond_27;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstMapCond_28;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Then_29;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstMapThen_30;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Else_31;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstMapElse_32;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ArmInstMaps_33;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_48;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_50_50;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_51_51;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_52_52;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_53_53;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_54_54;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_55_55;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_57_57;
#line 399 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_60;
#line 435 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_23_23;

#line 400 "unique_modes.m"
    {
#line 400 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "if-then-else", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38);
    }
#line 401 "unique_modes.m"
    {
#line 401 "unique_modes.m"
      check_hlds__unique_modes__NonLocals_16 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_13);
    }
#line 402 "unique_modes.m"
    {
#line 402 "unique_modes.m"
      check_hlds__unique_modes__CondVars_17 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__unique_modes__Cond0_10);
    }
#line 403 "unique_modes.m"
    {
#line 403 "unique_modes.m"
      check_hlds__unique_modes__ThenVars_18 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__unique_modes__Then0_11);
    }
#line 404 "unique_modes.m"
    {
#line 404 "unique_modes.m"
      check_hlds__unique_modes__ElseVars_19 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__unique_modes__Else0_12);
    }
#line 405 "unique_modes.m"
    {
#line 405 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__unique_modes__InstMap0_20);
    }
#line 406 "unique_modes.m"
    {
#line 406 "unique_modes.m"
      check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__unique_modes__NonLocals_16, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40);
    }
#line 432 "unique_modes.m"
    {
#line 432 "unique_modes.m"
      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__ElseVars_19, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41);
    }
#line 433 "unique_modes.m"
    {
#line 433 "unique_modes.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unique_modes__CondVars_17, &check_hlds__unique_modes__CondVarList_21);
    }
#line 434 "unique_modes.m"
    {
#line 434 "unique_modes.m"
      check_hlds__unique_modes__select_live_vars_3_p_0(check_hlds__unique_modes__CondVarList_21, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__unique_modes__CondLiveVars_22);
    }
#line 435 "unique_modes.m"
    check_hlds__unique_modes__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Cond0_10, (MR_Integer) 0)));
#line 435 "unique_modes.m"
    check_hlds__unique_modes__CondInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Cond0_10, (MR_Integer) 1)));
#line 436 "unique_modes.m"
    {
#line 436 "unique_modes.m"
      check_hlds__unique_modes__CondDeltaInstMap0_25 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__unique_modes__CondInfo0_24);
    }
#line 437 "unique_modes.m"
    {
#line 437 "unique_modes.m"
      check_hlds__unique_modes__select_changed_inst_vars_4_p_0(check_hlds__unique_modes__CondLiveVars_22, check_hlds__unique_modes__CondDeltaInstMap0_25, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__unique_modes__ChangedVars_26);
    }
#line 439 "unique_modes.m"
    {
#line 439 "unique_modes.m"
      check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__ChangedVars_26, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42);
    }
#line 440 "unique_modes.m"
    {
#line 440 "unique_modes.m"
      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__ElseVars_19, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43);
    }
#line 442 "unique_modes.m"
    {
#line 442 "unique_modes.m"
      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__ThenVars_18, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44);
    }
#line 443 "unique_modes.m"
    {
#line 443 "unique_modes.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Cond0_10, &check_hlds__unique_modes__Cond_27, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45);
    }
#line 444 "unique_modes.m"
    {
#line 444 "unique_modes.m"
      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__ThenVars_18, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46);
    }
#line 445 "unique_modes.m"
    {
#line 445 "unique_modes.m"
      check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__unique_modes__NonLocals_16, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_48);
    }
#line 446 "unique_modes.m"
    {
#line 446 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__unique_modes__InstMapCond_28);
    }
#line 447 "unique_modes.m"
    {
#line 447 "unique_modes.m"
      check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__InstMapCond_28);
    }
#line 450 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 448 "unique_modes.m"
      {
#line 448 "unique_modes.m"
        {
#line 448 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Then0_11, &check_hlds__unique_modes__Then_29, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49);
        }
#line 449 "unique_modes.m"
        {
#line 449 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__unique_modes__InstMapThen_30);
        }
#line 448 "unique_modes.m"
      }
#line 450 "unique_modes.m"
    else
#line 454 "unique_modes.m"
      {
#line 454 "unique_modes.m"
        {
#line 454 "unique_modes.m"
          check_hlds__unique_modes__Then_29 = hlds__hlds_goal__true_goal_0_f_0();
        }
#line 455 "unique_modes.m"
        check_hlds__unique_modes__InstMapThen_30 = check_hlds__unique_modes__InstMapCond_28;
#line 455 "unique_modes.m"
        check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_48;
#line 454 "unique_modes.m"
      }
#line 457 "unique_modes.m"
    {
#line 457 "unique_modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_20, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_50_50);
    }
#line 458 "unique_modes.m"
    {
#line 458 "unique_modes.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Else0_12, &check_hlds__unique_modes__Else_31, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_50_50, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_51_51);
    }
#line 459 "unique_modes.m"
    {
#line 459 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_51_51, &check_hlds__unique_modes__InstMapElse_32);
    }
#line 460 "unique_modes.m"
    {
#line 460 "unique_modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_20, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_51_51, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_52_52);
    }
#line 461 "unique_modes.m"
    {
#line 461 "unique_modes.m"
      check_hlds__unique_modes__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_55_55, 0) = ((MR_Box) (check_hlds__unique_modes__Else_31));
#line 461 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "unique_modes.m"
    }
#line 461 "unique_modes.m"
    {
#line 461 "unique_modes.m"
      check_hlds__unique_modes__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_53_53, 0) = ((MR_Box) (check_hlds__unique_modes__Then_29));
#line 461 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_53_53, 1) = ((MR_Box) (check_hlds__unique_modes__V_55_55));
#line 461 "unique_modes.m"
    }
#line 461 "unique_modes.m"
    {
#line 461 "unique_modes.m"
      check_hlds__unique_modes__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_57_57, 0) = ((MR_Box) (check_hlds__unique_modes__InstMapElse_32));
#line 461 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "unique_modes.m"
    }
#line 461 "unique_modes.m"
    {
#line 461 "unique_modes.m"
      check_hlds__unique_modes__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_54_54, 0) = ((MR_Box) (check_hlds__unique_modes__InstMapThen_30));
#line 461 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_54_54, 1) = ((MR_Box) (check_hlds__unique_modes__V_57_57));
#line 461 "unique_modes.m"
    }
#line 461 "unique_modes.m"
    {
#line 461 "unique_modes.m"
      hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__unique_modes__V_53_53, check_hlds__unique_modes__V_54_54, &check_hlds__unique_modes__ArmInstMaps_33);
    }
#line 463 "unique_modes.m"
    {
#line 463 "unique_modes.m"
      hlds__instmap__instmap_merge_5_p_0(check_hlds__unique_modes__NonLocals_16, check_hlds__unique_modes__ArmInstMaps_33, (MR_Integer) 1, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_60);
    }
#line 464 "unique_modes.m"
    {
#line 464 "unique_modes.m"
      MR_Word base;
#line 464 "unique_modes.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 464 "unique_modes.m"
      *check_hlds__unique_modes__GoalExpr_14 = base;
#line 464 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 464 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Vars_9));
#line 464 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__Cond_27));
#line 464 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__unique_modes__Then_29));
#line 464 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__unique_modes__Else_31));
#line 464 "unique_modes.m"
    }
#line 465 "unique_modes.m"
    {
#line 465 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "if-then-else", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_60, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35);
#line 465 "unique_modes.m"
      return;
    }
#line 399 "unique_modes.m"
  }
#line 393 "unique_modes.m"
}

#line 349 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_disj_5_p_0(
#line 349 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goals0_6,
#line 349 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_7,
#line 349 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 349 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_19,
#line 349 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20)
#line 349 "unique_modes.m"
{
#line 353 "unique_modes.m"
  {
#line 353 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 353 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Goals_10;
#line 353 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23;
#line 353 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_31;

#line 354 "unique_modes.m"
    {
#line 354 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "disj", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23);
    }
#line 360 "unique_modes.m"
    if ((check_hlds__unique_modes__Goals0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "unique_modes.m"
      {
#line 356 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_11;

#line 357 "unique_modes.m"
        check_hlds__unique_modes__Goals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "unique_modes.m"
        {
#line 358 "unique_modes.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__unique_modes__InstMap_11);
        }
#line 359 "unique_modes.m"
        {
#line 359 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_11, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_31);
        }
#line 356 "unique_modes.m"
      }
#line 360 "unique_modes.m"
    else
#line 361 "unique_modes.m"
      {
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__NonLocals_14;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Determinism_15;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_17;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__ArmInstMaps_18;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal0_46;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals0_47;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal_50;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals_51;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_52;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_53;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap0_55;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_58;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_59;
#line 361 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_60;
#line 375 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_35_35;
#line 375 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_16_16;

#line 372 "unique_modes.m"
        {
#line 372 "unique_modes.m"
          check_hlds__unique_modes__NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_7);
        }
#line 373 "unique_modes.m"
        {
#line 373 "unique_modes.m"
          check_hlds__unique_modes__Determinism_15 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_7);
        }
#line 375 "unique_modes.m"
        {
#line 375 "unique_modes.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Determinism_15, &check_hlds__unique_modes__V_16_16, &check_hlds__unique_modes__V_35_35);
        }
#line 375 "unique_modes.m"
        check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__V_35_35);
#line 379 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 376 "unique_modes.m"
          {
#line 376 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25;
#line 376 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26;
#line 376 "unique_modes.m"
            MR_Word check_hlds__unique_modes__FullInstMap0_38;

#line 376 "unique_modes.m"
            {
#line 376 "unique_modes.m"
              check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_14, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25);
            }
#line 165 "unique_modes.m"
            {
#line 165 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__FullInstMap0_38);
            }
#line 166 "unique_modes.m"
            {
#line 166 "unique_modes.m"
              check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_38);
            }
#line 170 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 167 "unique_modes.m"
              {
#line 167 "unique_modes.m"
                MR_Word check_hlds__unique_modes__AllVars_39;
#line 167 "unique_modes.m"
                MR_Word check_hlds__unique_modes__NondetLiveVars_40;

#line 167 "unique_modes.m"
                {
#line 167 "unique_modes.m"
                  hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_38, &check_hlds__unique_modes__AllVars_39);
                }
#line 168 "unique_modes.m"
                {
#line 168 "unique_modes.m"
                  check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_39, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__NondetLiveVars_40);
                }
#line 169 "unique_modes.m"
                {
#line 169 "unique_modes.m"
                  check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_40, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26);
                }
#line 167 "unique_modes.m"
              }
#line 170 "unique_modes.m"
            else
#line 171 "unique_modes.m"
              check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25;
#line 378 "unique_modes.m"
            {
#line 378 "unique_modes.m"
              check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_14, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27);
            }
#line 376 "unique_modes.m"
          }
#line 379 "unique_modes.m"
        else
#line 378 "unique_modes.m"
          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23;
#line 1000 "unique_modes.m"
        check_hlds__unique_modes__Goal0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals0_6, (MR_Integer) 0)));
#line 1000 "unique_modes.m"
        check_hlds__unique_modes__Goals0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals0_6, (MR_Integer) 1)));
#line 1001 "unique_modes.m"
        {
#line 1001 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__unique_modes__InstMap0_55);
        }
#line 1005 "unique_modes.m"
        {
#line 1005 "unique_modes.m"
          check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__unique_modes__Goal0_46, check_hlds__unique_modes__Determinism_15, check_hlds__unique_modes__NonLocals_14, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_58);
        }
#line 1006 "unique_modes.m"
        {
#line 1006 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Goal0_46, &check_hlds__unique_modes__Goal_50, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_58, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_59);
        }
#line 1007 "unique_modes.m"
        {
#line 1007 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_59, &check_hlds__unique_modes__InstMap_52);
        }
#line 1008 "unique_modes.m"
        {
#line 1008 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_59, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_60);
        }
#line 1009 "unique_modes.m"
        {
#line 1009 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_disj_7_p_0(check_hlds__unique_modes__Goals0_47, check_hlds__unique_modes__Determinism_15, check_hlds__unique_modes__NonLocals_14, &check_hlds__unique_modes__Goals_51, &check_hlds__unique_modes__InstMaps_53, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_60, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28);
        }
#line 1000 "unique_modes.m"
        {
#line 1000 "unique_modes.m"
          check_hlds__unique_modes__Goals_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals_10, 0) = ((MR_Box) (check_hlds__unique_modes__Goal_50));
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals_10, 1) = ((MR_Box) (check_hlds__unique_modes__Goals_51));
#line 1000 "unique_modes.m"
        }
#line 1000 "unique_modes.m"
        {
#line 1000 "unique_modes.m"
          check_hlds__unique_modes__InstMaps_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__InstMaps_17, 0) = ((MR_Box) (check_hlds__unique_modes__InstMap_52));
#line 1000 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__InstMaps_17, 1) = ((MR_Box) (check_hlds__unique_modes__InstMaps_53));
#line 1000 "unique_modes.m"
        }
#line 387 "unique_modes.m"
        {
#line 387 "unique_modes.m"
          hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__unique_modes__Goals_10, check_hlds__unique_modes__InstMaps_17, &check_hlds__unique_modes__ArmInstMaps_18);
        }
#line 388 "unique_modes.m"
        {
#line 388 "unique_modes.m"
          hlds__instmap__instmap_merge_5_p_0(check_hlds__unique_modes__NonLocals_14, check_hlds__unique_modes__ArmInstMaps_18, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_31);
        }
#line 361 "unique_modes.m"
      }
#line 390 "unique_modes.m"
    {
#line 390 "unique_modes.m"
      MR_Word base;
#line 390 "unique_modes.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "unique_modes.m"
      *check_hlds__unique_modes__GoalExpr_8 = base;
#line 390 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 390 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Goals_10));
#line 390 "unique_modes.m"
    }
#line 391 "unique_modes.m"
    {
#line 391 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "disj", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_31, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20);
#line 391 "unique_modes.m"
      return;
    }
#line 353 "unique_modes.m"
  }
#line 349 "unique_modes.m"
}

#line 332 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_conj_5_p_0(
#line 332 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ConjType_6,
#line 332 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goals0_7,
#line 332 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 332 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_13,
#line 332 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14)
#line 332 "unique_modes.m"
{
#line 335 "unique_modes.m"
  {
#line 335 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 335 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Goals_10;
#line 335 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_17;
#line 335 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19;

#line 336 "unique_modes.m"
    {
#line 336 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "*conj", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_13, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_17);
    }
#line 341 "unique_modes.m"
    if ((check_hlds__unique_modes__Goals0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "unique_modes.m"
      {
#line 340 "unique_modes.m"
        check_hlds__unique_modes__Goals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 340 "unique_modes.m"
        check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_17;
#line 338 "unique_modes.m"
      }
#line 341 "unique_modes.m"
    else
#line 342 "unique_modes.m"
      {
#line 342 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18;
#line 342 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal0_28;
#line 342 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals0_29;
#line 889 "unique_modes.m"
        MR_Word check_hlds__unique_modes__ConjGoals_32;
#line 886 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_37_37;
#line 886 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_41_41;
#line 886 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_33_33;

#line 343 "unique_modes.m"
        {
#line 343 "unique_modes.m"
          check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(check_hlds__unique_modes__ConjType_6, check_hlds__unique_modes__Goals0_7, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_17, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18);
        }
#line 885 "unique_modes.m"
        check_hlds__unique_modes__Goal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals0_7, (MR_Integer) 0)));
#line 885 "unique_modes.m"
        check_hlds__unique_modes__Goals0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals0_7, (MR_Integer) 1)));
#line 886 "unique_modes.m"
        check_hlds__unique_modes__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_28, (MR_Integer) 0)));
#line 886 "unique_modes.m"
        check_hlds__unique_modes__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_28, (MR_Integer) 1)));
#line 886 "unique_modes.m"
        check_hlds__unique_modes__succeeded = ((((MR_tag((MR_Word) check_hlds__unique_modes__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 886 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 886 "unique_modes.m"
          {
#line 886 "unique_modes.m"
            check_hlds__unique_modes__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_37_37, (MR_Integer) 1)));
#line 886 "unique_modes.m"
            check_hlds__unique_modes__ConjGoals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_37_37, (MR_Integer) 2)));
#line 886 "unique_modes.m"
            check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__ConjType_6 == check_hlds__unique_modes__V_41_41);
#line 886 "unique_modes.m"
          }
#line 889 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 887 "unique_modes.m"
          {
#line 887 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Goals1_34;

#line 887 "unique_modes.m"
            {
#line 887 "unique_modes.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__unique_modes__ConjGoals_32, check_hlds__unique_modes__Goals0_29, &check_hlds__unique_modes__Goals1_34);
            }
#line 888 "unique_modes.m"
            {
#line 888 "unique_modes.m"
              check_hlds__unique_modes__unique_modes_check_conj_5_p_0(check_hlds__unique_modes__ConjType_6, check_hlds__unique_modes__Goals1_34, &check_hlds__unique_modes__Goals_10, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19);
            }
#line 887 "unique_modes.m"
          }
#line 889 "unique_modes.m"
        else
#line 890 "unique_modes.m"
          {
#line 890 "unique_modes.m"
            check_hlds__unique_modes__unique_modes_check_conj_2_6_p_0(check_hlds__unique_modes__ConjType_6, check_hlds__unique_modes__Goal0_28, check_hlds__unique_modes__Goals0_29, &check_hlds__unique_modes__Goals_10, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19);
          }
#line 342 "unique_modes.m"
      }
#line 346 "unique_modes.m"
    {
#line 346 "unique_modes.m"
      MR_Word base;
#line 346 "unique_modes.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 346 "unique_modes.m"
      *check_hlds__unique_modes__GoalExpr_8 = base;
#line 346 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 346 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__ConjType_6));
#line 346 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__Goals_10));
#line 346 "unique_modes.m"
    }
#line 347 "unique_modes.m"
    {
#line 347 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "*conj", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14);
#line 347 "unique_modes.m"
      return;
    }
#line 335 "unique_modes.m"
  }
#line 332 "unique_modes.m"
}

#line 691 "unique_modes.m"
static MR_Box MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0_1(
#line 691 "unique_modes.m"
  MR_Box check_hlds__unique_modes__closure_arg,
#line 691 "unique_modes.m"
  MR_Box check_hlds__unique_modes__wrapper_arg_1)
#line 691 "unique_modes.m"
{
#line 691 "unique_modes.m"
  {
#line 691 "unique_modes.m"
    MR_Box check_hlds__unique_modes__wrapper_arg_2;
#line 691 "unique_modes.m"
    MR_Box check_hlds__unique_modes__closure = check_hlds__unique_modes__closure_arg;
#line 691 "unique_modes.m"
    MR_Word check_hlds__unique_modes__conv0_HeadVar__2_2;

#line 691 "unique_modes.m"
    {
#line 691 "unique_modes.m"
      check_hlds__unique_modes__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__unique_modes__wrapper_arg_1));
    }
#line 691 "unique_modes.m"
    check_hlds__unique_modes__wrapper_arg_2 = ((MR_Box) (check_hlds__unique_modes__conv0_HeadVar__2_2));
#line 691 "unique_modes.m"
    return check_hlds__unique_modes__wrapper_arg_2;
#line 691 "unique_modes.m"
  }
#line 691 "unique_modes.m"
}

#line 259 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(
#line 259 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalExpr0_6,
#line 259 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_7,
#line 259 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 259 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55,
#line 259 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56)
#line 259 "unique_modes.m"
{
#line 266 "unique_modes.m"
  {
#line 266 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;

#line 266 "unique_modes.m"
    if (((MR_tag((MR_Word) check_hlds__unique_modes__GoalExpr0_6)) == (MR_mktag((MR_Integer) 0))))
#line 303 "unique_modes.m"
      {
#line 303 "unique_modes.m"
        MR_Word check_hlds__unique_modes__SubGoal0_39 = (MR_Word) MR_body(((MR_Word) check_hlds__unique_modes__GoalExpr0_6), (MR_Integer) 0);

#line 304 "unique_modes.m"
        {
#line 304 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_negation_5_p_0(check_hlds__unique_modes__SubGoal0_39, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 304 "unique_modes.m"
          return;
        }
#line 303 "unique_modes.m"
      }
#line 266 "unique_modes.m"
    else
#line 266 "unique_modes.m"
      if (((MR_tag((MR_Word) check_hlds__unique_modes__GoalExpr0_6)) == (MR_mktag((MR_Integer) 2))))
#line 271 "unique_modes.m"
        {
#line 271 "unique_modes.m"
          MR_Word check_hlds__unique_modes__PredId0_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)));
#line 271 "unique_modes.m"
          MR_Integer check_hlds__unique_modes__ProcId0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 271 "unique_modes.m"
          MR_Word check_hlds__unique_modes__ArgVars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
#line 271 "unique_modes.m"
          MR_Word check_hlds__unique_modes__Builtin0_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
#line 271 "unique_modes.m"
          MR_Word check_hlds__unique_modes__MaybeUnifyContext0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));
#line 271 "unique_modes.m"
          MR_Word check_hlds__unique_modes__SymName0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 5)));
#line 271 "unique_modes.m"
          MR_String check_hlds__unique_modes__PredNameString_195;
#line 271 "unique_modes.m"
          MR_String check_hlds__unique_modes__CallString_196;
#line 271 "unique_modes.m"
          MR_Word check_hlds__unique_modes__CallId_197;
#line 271 "unique_modes.m"
          MR_Integer check_hlds__unique_modes__ProcId_198;
#line 271 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_201;
#line 271 "unique_modes.m"
          MR_Word check_hlds__unique_modes__V_202_202;
#line 271 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_203;
#line 271 "unique_modes.m"
          MR_Word check_hlds__unique_modes__V_204_204;
#line 271 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_32_205;
#line 271 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_33_206;

#line 626 "unique_modes.m"
          {
#line 626 "unique_modes.m"
            check_hlds__unique_modes__PredNameString_195 = mdbcomp__prim_data__sym_name_to_string_1_f_0(check_hlds__unique_modes__SymName0_20);
          }
#line 627 "unique_modes.m"
          {
#line 627 "unique_modes.m"
            mercury__string__append_3_p_2((MR_String) "call ", check_hlds__unique_modes__PredNameString_195, &check_hlds__unique_modes__CallString_196);
          }
#line 628 "unique_modes.m"
          {
#line 628 "unique_modes.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__unique_modes__CallString_196, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_201);
          }
#line 629 "unique_modes.m"
          {
#line 629 "unique_modes.m"
            check_hlds__mode_info__mode_info_get_call_id_3_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_201, check_hlds__unique_modes__PredId0_15, &check_hlds__unique_modes__CallId_197);
          }
#line 630 "unique_modes.m"
          {
#line 630 "unique_modes.m"
            check_hlds__unique_modes__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 630 "unique_modes.m"
            MR_hl_field(MR_mktag(0), check_hlds__unique_modes__V_204_204, 0) = ((MR_Box) (check_hlds__unique_modes__CallId_197));
#line 630 "unique_modes.m"
          }
#line 630 "unique_modes.m"
          {
#line 630 "unique_modes.m"
            check_hlds__unique_modes__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 630 "unique_modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_202_202, 0) = ((MR_Box) (check_hlds__unique_modes__V_204_204));
#line 630 "unique_modes.m"
          }
#line 630 "unique_modes.m"
          {
#line 630 "unique_modes.m"
            check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__unique_modes__V_202_202, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_201, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_203);
          }
#line 632 "unique_modes.m"
          {
#line 632 "unique_modes.m"
            check_hlds__unique_modes__unique_modes_check_call_7_p_0(check_hlds__unique_modes__PredId0_15, check_hlds__unique_modes__ProcId0_16, check_hlds__unique_modes__ArgVars0_17, check_hlds__unique_modes__GoalInfo0_7, &check_hlds__unique_modes__ProcId_198, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_203, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_32_205);
          }
#line 634 "unique_modes.m"
          {
#line 634 "unique_modes.m"
            MR_Word base;
#line 634 "unique_modes.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 634 "unique_modes.m"
            *check_hlds__unique_modes__GoalExpr_8 = base;
#line 634 "unique_modes.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__unique_modes__PredId0_15));
#line 634 "unique_modes.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__unique_modes__ProcId_198));
#line 634 "unique_modes.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__unique_modes__ArgVars0_17));
#line 634 "unique_modes.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__unique_modes__Builtin0_18));
#line 634 "unique_modes.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__unique_modes__MaybeUnifyContext0_19));
#line 634 "unique_modes.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__unique_modes__SymName0_20));
#line 634 "unique_modes.m"
          }
#line 636 "unique_modes.m"
          {
#line 636 "unique_modes.m"
            check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_32_205, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_33_206);
          }
#line 637 "unique_modes.m"
          {
#line 637 "unique_modes.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "call", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_33_206, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 637 "unique_modes.m"
            return;
          }
#line 271 "unique_modes.m"
        }
#line 266 "unique_modes.m"
      else
#line 266 "unique_modes.m"
        if (((MR_tag((MR_Word) check_hlds__unique_modes__GoalExpr0_6)) == (MR_mktag((MR_Integer) 1))))
#line 266 "unique_modes.m"
          {
#line 266 "unique_modes.m"
            MR_Word check_hlds__unique_modes__LHS0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)));
#line 266 "unique_modes.m"
            MR_Word check_hlds__unique_modes__RHS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 266 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Unification0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
#line 266 "unique_modes.m"
            MR_Word check_hlds__unique_modes__UnifyContext0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));
#line 266 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_221;
#line 266 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_222_222;
#line 266 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_223;
#line 266 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_224;
#line 266 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_24_225;
#line 266 "unique_modes.m"
            MR_Word check_hlds__unique_modes___UniModes0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));

#line 646 "unique_modes.m"
            {
#line 646 "unique_modes.m"
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "unify", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_221);
            }
#line 647 "unique_modes.m"
            {
#line 647 "unique_modes.m"
              check_hlds__unique_modes__V_222_222 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 647 "unique_modes.m"
              MR_hl_field(MR_mktag(0), check_hlds__unique_modes__V_222_222, 0) = ((MR_Box) (check_hlds__unique_modes__UnifyContext0_14));
#line 647 "unique_modes.m"
            }
#line 647 "unique_modes.m"
            {
#line 647 "unique_modes.m"
              check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__unique_modes__V_222_222, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_221, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_223);
            }
#line 648 "unique_modes.m"
            {
#line 648 "unique_modes.m"
              check_hlds__modecheck_unify__modecheck_unification_8_p_0(check_hlds__unique_modes__LHS0_10, check_hlds__unique_modes__RHS0_11, check_hlds__unique_modes__Unification0_13, check_hlds__unique_modes__UnifyContext0_14, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_223, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_224);
            }
#line 650 "unique_modes.m"
            {
#line 650 "unique_modes.m"
              check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_224, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_24_225);
            }
#line 651 "unique_modes.m"
            {
#line 651 "unique_modes.m"
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "unify", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_24_225, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 651 "unique_modes.m"
              return;
            }
#line 266 "unique_modes.m"
          }
#line 266 "unique_modes.m"
        else
#line 266 "unique_modes.m"
          if (((((MR_tag((MR_Word) check_hlds__unique_modes__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 282 "unique_modes.m"
            {
#line 282 "unique_modes.m"
              MR_Word check_hlds__unique_modes__Attributes0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 282 "unique_modes.m"
              MR_Word check_hlds__unique_modes__Args0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));
#line 282 "unique_modes.m"
              MR_Word check_hlds__unique_modes__ExtraArgs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 5)));
#line 282 "unique_modes.m"
              MR_Word check_hlds__unique_modes__MaybeTraceRuntimeCond0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 6)));
#line 282 "unique_modes.m"
              MR_Word check_hlds__unique_modes__PragmaCode0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 7)));
#line 282 "unique_modes.m"
              MR_Word check_hlds__unique_modes__PredId0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
#line 282 "unique_modes.m"
              MR_Integer check_hlds__unique_modes__ProcId0_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
#line 282 "unique_modes.m"
              MR_Word check_hlds__unique_modes__CallId_98;
#line 282 "unique_modes.m"
              MR_Word check_hlds__unique_modes__ArgVars_99;
#line 282 "unique_modes.m"
              MR_Integer check_hlds__unique_modes__ProcId_100;
#line 282 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_103;
#line 282 "unique_modes.m"
              MR_Word check_hlds__unique_modes__V_104_104;
#line 282 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_105;
#line 282 "unique_modes.m"
              MR_Word check_hlds__unique_modes__V_106_106;
#line 282 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_34_108;
#line 282 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_109;

#line 687 "unique_modes.m"
              {
#line 687 "unique_modes.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "foreign_proc", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_103);
              }
#line 688 "unique_modes.m"
              {
#line 688 "unique_modes.m"
                check_hlds__mode_info__mode_info_get_call_id_3_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_103, check_hlds__unique_modes__PredId0_79, &check_hlds__unique_modes__CallId_98);
              }
#line 689 "unique_modes.m"
              {
#line 689 "unique_modes.m"
                check_hlds__unique_modes__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 689 "unique_modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__unique_modes__V_106_106, 0) = ((MR_Box) (check_hlds__unique_modes__CallId_98));
#line 689 "unique_modes.m"
              }
#line 689 "unique_modes.m"
              {
#line 689 "unique_modes.m"
                check_hlds__unique_modes__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 689 "unique_modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_104_104, 0) = ((MR_Box) (check_hlds__unique_modes__V_106_106));
#line 689 "unique_modes.m"
              }
#line 689 "unique_modes.m"
              {
#line 689 "unique_modes.m"
                check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__unique_modes__V_104_104, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_103, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_105);
              }
#line 691 "unique_modes.m"
              {
#line 691 "unique_modes.m"
                check_hlds__unique_modes__ArgVars_99 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__unique_modes_scalar_common_1[0], (MR_Word) &check_hlds__unique_modes_scalar_common_3[0], check_hlds__unique_modes__Args0_26);
              }
#line 692 "unique_modes.m"
              {
#line 692 "unique_modes.m"
                check_hlds__unique_modes__unique_modes_check_call_7_p_0(check_hlds__unique_modes__PredId0_79, check_hlds__unique_modes__ProcId0_80, check_hlds__unique_modes__ArgVars_99, check_hlds__unique_modes__GoalInfo0_7, &check_hlds__unique_modes__ProcId_100, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_105, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_34_108);
              }
#line 694 "unique_modes.m"
              {
#line 694 "unique_modes.m"
                MR_Word base;
#line 694 "unique_modes.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 694 "unique_modes.m"
                *check_hlds__unique_modes__GoalExpr_8 = base;
#line 694 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 694 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Attributes0_25));
#line 694 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__PredId0_79));
#line 694 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__unique_modes__ProcId_100));
#line 694 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__unique_modes__Args0_26));
#line 694 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (check_hlds__unique_modes__ExtraArgs0_27));
#line 694 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (check_hlds__unique_modes__MaybeTraceRuntimeCond0_28));
#line 694 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (check_hlds__unique_modes__PragmaCode0_29));
#line 694 "unique_modes.m"
              }
#line 696 "unique_modes.m"
              {
#line 696 "unique_modes.m"
                check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_34_108, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_109);
              }
#line 697 "unique_modes.m"
              {
#line 697 "unique_modes.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "foreign_proc", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_109, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 697 "unique_modes.m"
                return;
              }
#line 282 "unique_modes.m"
            }
#line 266 "unique_modes.m"
          else
#line 266 "unique_modes.m"
            if (((((MR_tag((MR_Word) check_hlds__unique_modes__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 287 "unique_modes.m"
              {
#line 287 "unique_modes.m"
                MR_Word check_hlds__unique_modes__GoalType0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 287 "unique_modes.m"
                MR_Word check_hlds__unique_modes__Goals0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));

#line 288 "unique_modes.m"
                {
#line 288 "unique_modes.m"
                  check_hlds__unique_modes__unique_modes_check_goal_conj_5_p_0(check_hlds__unique_modes__GoalType0_30, check_hlds__unique_modes__Goals0_31, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 288 "unique_modes.m"
                  return;
                }
#line 287 "unique_modes.m"
              }
#line 266 "unique_modes.m"
            else
#line 266 "unique_modes.m"
              if (((((MR_tag((MR_Word) check_hlds__unique_modes__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 291 "unique_modes.m"
                {
#line 291 "unique_modes.m"
                  MR_Word check_hlds__unique_modes__Goals0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));

#line 292 "unique_modes.m"
                  {
#line 292 "unique_modes.m"
                    check_hlds__unique_modes__unique_modes_check_goal_disj_5_p_0(check_hlds__unique_modes__Goals0_81, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 292 "unique_modes.m"
                    return;
                  }
#line 291 "unique_modes.m"
                }
#line 266 "unique_modes.m"
              else
#line 266 "unique_modes.m"
                if (((((MR_tag((MR_Word) check_hlds__unique_modes__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 277 "unique_modes.m"
                  {
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__GenericCall0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__ArgModes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__Detism0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 5)));
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__ArgVars0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__CallId_126;
#line 277 "unique_modes.m"
                    MR_Integer check_hlds__unique_modes__ArgOffset_133;
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_34_142;
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__V_143_143;
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_36_144;
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_146;
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_147;
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__ModuleInfo_160;
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__InitialInsts_161;
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__InstVarSub_162;
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__FinalInsts0_163;
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__FinalInsts_164;
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__NewArgVars_165;
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__ExtraGoals_166;
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_169;
#line 277 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_170;
#line 276 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__MaybeRegTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));
#line 591 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__V_151_151;
#line 591 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__V_127_127;

#line 588 "unique_modes.m"
                    {
#line 588 "unique_modes.m"
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "generic_call", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_34_142);
                    }
#line 589 "unique_modes.m"
                    {
#line 589 "unique_modes.m"
                      hlds__hlds_goal__generic_call_id_2_p_0(check_hlds__unique_modes__GenericCall0_21, &check_hlds__unique_modes__CallId_126);
                    }
#line 590 "unique_modes.m"
                    {
#line 590 "unique_modes.m"
                      check_hlds__unique_modes__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 590 "unique_modes.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_143_143, 0) = ((MR_Box) (check_hlds__unique_modes__CallId_126));
#line 590 "unique_modes.m"
                    }
#line 590 "unique_modes.m"
                    {
#line 590 "unique_modes.m"
                      check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__unique_modes__V_143_143, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_34_142, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_36_144);
                    }
#line 599 "unique_modes.m"
                    if (((MR_tag((MR_Word) check_hlds__unique_modes__GenericCall0_21)) == (MR_mktag((MR_Integer) 3))))
#line 610 "unique_modes.m"
                      check_hlds__unique_modes__ArgOffset_133 = (MR_Integer) 0;
#line 599 "unique_modes.m"
                    else
#line 599 "unique_modes.m"
                      if (((MR_tag((MR_Word) check_hlds__unique_modes__GenericCall0_21)) == (MR_mktag((MR_Integer) 1))))
#line 603 "unique_modes.m"
                        check_hlds__unique_modes__ArgOffset_133 = (MR_Integer) 0;
#line 599 "unique_modes.m"
                      else
#line 599 "unique_modes.m"
                        if (((MR_tag((MR_Word) check_hlds__unique_modes__GenericCall0_21)) == (MR_mktag((MR_Integer) 2))))
#line 606 "unique_modes.m"
                          check_hlds__unique_modes__ArgOffset_133 = (MR_Integer) 0;
#line 599 "unique_modes.m"
                        else
#line 598 "unique_modes.m"
                          check_hlds__unique_modes__ArgOffset_133 = (MR_Integer) 1;
#line 841 "unique_modes.m"
                    {
#line 841 "unique_modes.m"
                      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_36_144, &check_hlds__unique_modes__ModuleInfo_160);
                    }
#line 842 "unique_modes.m"
                    {
#line 842 "unique_modes.m"
                      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__unique_modes__ModuleInfo_160, check_hlds__unique_modes__ArgModes0_22, &check_hlds__unique_modes__InitialInsts_161);
                    }
#line 843 "unique_modes.m"
                    {
#line 843 "unique_modes.m"
                      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__unique_modes__ArgVars0_78, check_hlds__unique_modes__InitialInsts_161, check_hlds__unique_modes__ArgOffset_133, &check_hlds__unique_modes__InstVarSub_162, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_36_144, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_169);
                    }
#line 845 "unique_modes.m"
                    {
#line 845 "unique_modes.m"
                      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__unique_modes__ModuleInfo_160, check_hlds__unique_modes__ArgModes0_22, &check_hlds__unique_modes__FinalInsts0_163);
                    }
#line 846 "unique_modes.m"
                    {
#line 846 "unique_modes.m"
                      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__unique_modes__InstVarSub_162, check_hlds__unique_modes__FinalInsts0_163, &check_hlds__unique_modes__FinalInsts_164);
                    }
#line 847 "unique_modes.m"
                    {
#line 847 "unique_modes.m"
                      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__unique_modes__ArgVars0_78, check_hlds__unique_modes__InitialInsts_161, check_hlds__unique_modes__FinalInsts_164, check_hlds__unique_modes__ArgOffset_133, &check_hlds__unique_modes__NewArgVars_165, &check_hlds__unique_modes__ExtraGoals_166, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_169, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_170);
                    }
#line 850 "unique_modes.m"
                    {
#line 850 "unique_modes.m"
                      check_hlds__unique_modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[1], ((MR_Box) (check_hlds__unique_modes__NewArgVars_165)), ((MR_Box) (check_hlds__unique_modes__ArgVars0_78)));
                    }
#line 850 "unique_modes.m"
                    if (check_hlds__unique_modes__succeeded)
#line 851 "unique_modes.m"
                      check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__ExtraGoals_166 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "unique_modes.m"
                    if (check_hlds__unique_modes__succeeded)
#line 853 "unique_modes.m"
                      {
#line 853 "unique_modes.m"
                      }
#line 854 "unique_modes.m"
                    else
#line 857 "unique_modes.m"
                      {
#line 857 "unique_modes.m"
                        {
#line 857 "unique_modes.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
#line 857 "unique_modes.m"
                          return;
                        }
#line 857 "unique_modes.m"
                      }
#line 591 "unique_modes.m"
                    {
#line 591 "unique_modes.m"
                      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Detism0_24, &check_hlds__unique_modes__V_127_127, &check_hlds__unique_modes__V_151_151);
                    }
#line 591 "unique_modes.m"
                    check_hlds__unique_modes__succeeded = ((MR_Integer) 0 == check_hlds__unique_modes__V_151_151);
#line 3731 "check_hlds.unique_modes.c"
                    if (check_hlds__unique_modes__succeeded)
#line 3733 "check_hlds.unique_modes.c"
                      {
#line 3735 "check_hlds.unique_modes.c"
                        MR_Word check_hlds__unique_modes__InstMap_167;

#line 861 "unique_modes.m"
                        {
#line 861 "unique_modes.m"
                          hlds__instmap__init_unreachable_1_p_0(&check_hlds__unique_modes__InstMap_167);
                        }
#line 862 "unique_modes.m"
                        {
#line 862 "unique_modes.m"
                          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_167, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_170, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_146);
                        }
#line 3748 "check_hlds.unique_modes.c"
                      }
#line 3750 "check_hlds.unique_modes.c"
                    else
#line 870 "unique_modes.m"
                      {
#line 868 "unique_modes.m"
                        MR_Word check_hlds__unique_modes__V_177_177;
#line 868 "unique_modes.m"
                        MR_Word check_hlds__unique_modes__V_168_168;

#line 868 "unique_modes.m"
                        {
#line 868 "unique_modes.m"
                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Detism0_24, &check_hlds__unique_modes__V_168_168, &check_hlds__unique_modes__V_177_177);
                        }
#line 868 "unique_modes.m"
                        check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__V_177_177);
#line 870 "unique_modes.m"
                        if (check_hlds__unique_modes__succeeded)
#line 164 "unique_modes.m"
                          {
#line 164 "unique_modes.m"
                            MR_Word check_hlds__unique_modes__FullInstMap0_181;

#line 165 "unique_modes.m"
                            {
#line 165 "unique_modes.m"
                              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_170, &check_hlds__unique_modes__FullInstMap0_181);
                            }
#line 166 "unique_modes.m"
                            {
#line 166 "unique_modes.m"
                              check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_181);
                            }
#line 170 "unique_modes.m"
                            if (check_hlds__unique_modes__succeeded)
#line 167 "unique_modes.m"
                              {
#line 167 "unique_modes.m"
                                MR_Word check_hlds__unique_modes__AllVars_182;
#line 167 "unique_modes.m"
                                MR_Word check_hlds__unique_modes__NondetLiveVars_183;

#line 167 "unique_modes.m"
                                {
#line 167 "unique_modes.m"
                                  hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_181, &check_hlds__unique_modes__AllVars_182);
                                }
#line 168 "unique_modes.m"
                                {
#line 168 "unique_modes.m"
                                  check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_182, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_170, &check_hlds__unique_modes__NondetLiveVars_183);
                                }
#line 169 "unique_modes.m"
                                {
#line 169 "unique_modes.m"
                                  check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_183, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_170, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_146);
                                }
#line 167 "unique_modes.m"
                              }
#line 170 "unique_modes.m"
                            else
#line 171 "unique_modes.m"
                              check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_146 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_170;
#line 164 "unique_modes.m"
                          }
#line 870 "unique_modes.m"
                        else
#line 869 "unique_modes.m"
                          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_146 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_170;
#line 870 "unique_modes.m"
                      }
#line 614 "unique_modes.m"
                    *check_hlds__unique_modes__GoalExpr_8 = check_hlds__unique_modes__GoalExpr0_6;
#line 616 "unique_modes.m"
                    {
#line 616 "unique_modes.m"
                      check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_146, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_147);
                    }
#line 617 "unique_modes.m"
                    {
#line 617 "unique_modes.m"
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "generic_call", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_147, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 617 "unique_modes.m"
                      return;
                    }
#line 277 "unique_modes.m"
                  }
#line 266 "unique_modes.m"
                else
#line 266 "unique_modes.m"
                  if (((((MR_tag((MR_Word) check_hlds__unique_modes__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 299 "unique_modes.m"
                    {
#line 299 "unique_modes.m"
                      MR_Word check_hlds__unique_modes__Vars0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 299 "unique_modes.m"
                      MR_Word check_hlds__unique_modes__Cond0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
#line 299 "unique_modes.m"
                      MR_Word check_hlds__unique_modes__Then0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
#line 299 "unique_modes.m"
                      MR_Word check_hlds__unique_modes__Else0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));

#line 300 "unique_modes.m"
                      {
#line 300 "unique_modes.m"
                        check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_p_0(check_hlds__unique_modes__Vars0_35, check_hlds__unique_modes__Cond0_36, check_hlds__unique_modes__Then0_37, check_hlds__unique_modes__Else0_38, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 300 "unique_modes.m"
                        return;
                      }
#line 299 "unique_modes.m"
                    }
#line 266 "unique_modes.m"
                  else
#line 266 "unique_modes.m"
                    if (((((MR_tag((MR_Word) check_hlds__unique_modes__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 307 "unique_modes.m"
                      {
#line 307 "unique_modes.m"
                        MR_Word check_hlds__unique_modes__Reason0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 307 "unique_modes.m"
                        MR_Word check_hlds__unique_modes__SubGoal0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));

#line 308 "unique_modes.m"
                        {
#line 308 "unique_modes.m"
                          check_hlds__unique_modes__unique_modes_check_goal_scope_6_p_0(check_hlds__unique_modes__Reason0_40, check_hlds__unique_modes__SubGoal0_82, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 308 "unique_modes.m"
                          return;
                        }
#line 307 "unique_modes.m"
                      }
#line 266 "unique_modes.m"
                    else
#line 266 "unique_modes.m"
                      if (((((MR_tag((MR_Word) check_hlds__unique_modes__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 311 "unique_modes.m"
                        {
#line 311 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__ShortHand0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));

#line 318 "unique_modes.m"
                          if (((MR_tag((MR_Word) check_hlds__unique_modes__ShortHand0_41)) == (MR_mktag((MR_Integer) 1))))
#line 314 "unique_modes.m"
                            {
#line 314 "unique_modes.m"
                              MR_Word check_hlds__unique_modes__GoalType_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 0)));
#line 314 "unique_modes.m"
                              MR_Word check_hlds__unique_modes__Outer_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 1)));
#line 314 "unique_modes.m"
                              MR_Word check_hlds__unique_modes__Inner_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 2)));
#line 314 "unique_modes.m"
                              MR_Word check_hlds__unique_modes__MaybeOutputVars_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 3)));
#line 314 "unique_modes.m"
                              MR_Word check_hlds__unique_modes__MainGoal0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 4)));
#line 314 "unique_modes.m"
                              MR_Word check_hlds__unique_modes__OrElseGoals0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 5)));
#line 314 "unique_modes.m"
                              MR_Word check_hlds__unique_modes__OrElseInners0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 6)));

#line 315 "unique_modes.m"
                              {
#line 315 "unique_modes.m"
                                check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_p_0(check_hlds__unique_modes__GoalType_42, check_hlds__unique_modes__Outer_43, check_hlds__unique_modes__Inner_44, check_hlds__unique_modes__MaybeOutputVars_45, check_hlds__unique_modes__MainGoal0_46, check_hlds__unique_modes__OrElseGoals0_47, check_hlds__unique_modes__OrElseInners0_48, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 315 "unique_modes.m"
                                return;
                              }
#line 314 "unique_modes.m"
                            }
#line 318 "unique_modes.m"
                          else
#line 318 "unique_modes.m"
                            if (((MR_tag((MR_Word) check_hlds__unique_modes__ShortHand0_41)) == (MR_mktag((MR_Integer) 0))))
#line 326 "unique_modes.m"
                              {
#line 328 "unique_modes.m"
                                {
#line 328 "unique_modes.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_expr\'/5", (MR_String) "bi_implication");
#line 328 "unique_modes.m"
                                  return;
                                }
#line 326 "unique_modes.m"
                              }
#line 318 "unique_modes.m"
                            else
#line 319 "unique_modes.m"
                              {
#line 319 "unique_modes.m"
                                MR_Word check_hlds__unique_modes__MaybeIO_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 0)));
#line 319 "unique_modes.m"
                                MR_Word check_hlds__unique_modes__ResultVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 1)));
#line 319 "unique_modes.m"
                                MR_Word check_hlds__unique_modes__SubGoal_51;
#line 319 "unique_modes.m"
                                MR_Word check_hlds__unique_modes__ShortHand_52;
#line 319 "unique_modes.m"
                                MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62;
#line 319 "unique_modes.m"
                                MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_63_63;
#line 319 "unique_modes.m"
                                MR_Word check_hlds__unique_modes__SubGoal0_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 2)));

#line 320 "unique_modes.m"
                                {
#line 320 "unique_modes.m"
                                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "try", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62);
                                }
#line 321 "unique_modes.m"
                                {
#line 321 "unique_modes.m"
                                  check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_83, &check_hlds__unique_modes__SubGoal_51, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_63_63);
                                }
#line 322 "unique_modes.m"
                                {
#line 322 "unique_modes.m"
                                  check_hlds__unique_modes__ShortHand_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 322 "unique_modes.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand_52, 0) = ((MR_Box) (check_hlds__unique_modes__MaybeIO_49));
#line 322 "unique_modes.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand_52, 1) = ((MR_Box) (check_hlds__unique_modes__ResultVar_50));
#line 322 "unique_modes.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand_52, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal_51));
#line 322 "unique_modes.m"
                                }
#line 323 "unique_modes.m"
                                {
#line 323 "unique_modes.m"
                                  MR_Word base;
#line 323 "unique_modes.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "unique_modes.m"
                                  *check_hlds__unique_modes__GoalExpr_8 = base;
#line 323 "unique_modes.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 323 "unique_modes.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__ShortHand_52));
#line 323 "unique_modes.m"
                                }
#line 324 "unique_modes.m"
                                {
#line 324 "unique_modes.m"
                                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "try", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_63_63, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 324 "unique_modes.m"
                                  return;
                                }
#line 319 "unique_modes.m"
                              }
#line 311 "unique_modes.m"
                        }
#line 266 "unique_modes.m"
                      else
#line 295 "unique_modes.m"
                        {
#line 295 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__Var0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 295 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__CanFail0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
#line 295 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__Cases0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));

#line 296 "unique_modes.m"
                          {
#line 296 "unique_modes.m"
                            check_hlds__unique_modes__unique_modes_check_goal_switch_7_p_0(check_hlds__unique_modes__Var0_32, check_hlds__unique_modes__CanFail0_33, check_hlds__unique_modes__Cases0_34, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 296 "unique_modes.m"
                            return;
                          }
#line 295 "unique_modes.m"
                        }
#line 266 "unique_modes.m"
  }
#line 259 "unique_modes.m"
}

#line 223 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(
#line 223 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 223 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2,
#line 223 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_3)
#line 223 "unique_modes.m"
{
#line 226 "unique_modes.m"
  while (MR_TRUE)
#line 226 "unique_modes.m"
    {
#line 226 "unique_modes.m"
      /* tailcall optimized into a loop */
#line 226 "unique_modes.m"
      {
#line 226 "unique_modes.m"
        MR_bool check_hlds__unique_modes__succeeded;

#line 226 "unique_modes.m"
        if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 226 "unique_modes.m"
          *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_3 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2;
#line 226 "unique_modes.m"
        else
#line 227 "unique_modes.m"
          {
#line 227 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
#line 227 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
#line 227 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_12_12;
#line 227 "unique_modes.m"
            MR_Word check_hlds__unique_modes__InstMap0_18;
#line 227 "unique_modes.m"
            MR_Word check_hlds__unique_modes__ModuleInfo0_19;
#line 253 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Inst0_21;
#line 239 "unique_modes.m"
            MR_Word check_hlds__unique_modes__TypeInfo_25_35;
#line 239 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Vars_20;
#line 239 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Inst1_22;

#line 235 "unique_modes.m"
            {
#line 235 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__unique_modes__InstMap0_18);
            }
#line 236 "unique_modes.m"
            {
#line 236 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__unique_modes__ModuleInfo0_19);
            }
#line 239 "unique_modes.m"
            {
#line 239 "unique_modes.m"
              check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__InstMap0_18);
            }
#line 239 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 239 "unique_modes.m"
              {
#line 240 "unique_modes.m"
                {
#line 240 "unique_modes.m"
                  hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__InstMap0_18, &check_hlds__unique_modes__Vars_20);
                }
#line 4097 "check_hlds.unique_modes.c"
                check_hlds__unique_modes__TypeInfo_25_35 = (MR_Word) &check_hlds__unique_modes_scalar_common_1[0];
#line 241 "unique_modes.m"
                {
#line 241 "unique_modes.m"
                  check_hlds__unique_modes__succeeded = mercury__list__member_2_p_0(check_hlds__unique_modes__TypeInfo_25_35, ((MR_Box) (check_hlds__unique_modes__Var_7)), check_hlds__unique_modes__Vars_20);
                }
#line 239 "unique_modes.m"
                if (check_hlds__unique_modes__succeeded)
#line 239 "unique_modes.m"
                  {
#line 242 "unique_modes.m"
                    {
#line 242 "unique_modes.m"
                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__unique_modes__InstMap0_18, check_hlds__unique_modes__Var_7, &check_hlds__unique_modes__Inst0_21);
                    }
#line 243 "unique_modes.m"
                    {
#line 243 "unique_modes.m"
                      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__unique_modes__ModuleInfo0_19, check_hlds__unique_modes__Inst0_21, &check_hlds__unique_modes__Inst1_22);
                    }
#line 245 "unique_modes.m"
                    if (((MR_tag((MR_Word) check_hlds__unique_modes__Inst1_22)) == (MR_mktag((MR_Integer) 2))))
#line 246 "unique_modes.m"
                      {
#line 246 "unique_modes.m"
                        MR_Word check_hlds__unique_modes__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__Inst1_22, (MR_Integer) 0)));
#line 246 "unique_modes.m"
                        MR_Word check_hlds__unique_modes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__Inst1_22, (MR_Integer) 1)));

#line 246 "unique_modes.m"
                        check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__V_30_30 == (MR_Integer) 1);
#line 246 "unique_modes.m"
                      }
#line 245 "unique_modes.m"
                    else
#line 245 "unique_modes.m"
                      if (((((MR_tag((MR_Word) check_hlds__unique_modes__Inst1_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 245 "unique_modes.m"
                        {
#line 245 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 1)));
#line 245 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 2)));
#line 245 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 3)));

#line 245 "unique_modes.m"
                          check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__V_31_31 == (MR_Integer) 1);
#line 245 "unique_modes.m"
                        }
#line 245 "unique_modes.m"
                      else
#line 245 "unique_modes.m"
                        if (((((MR_tag((MR_Word) check_hlds__unique_modes__Inst1_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 244 "unique_modes.m"
                          {
#line 244 "unique_modes.m"
                            MR_Word check_hlds__unique_modes__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 1)));
#line 244 "unique_modes.m"
                            MR_Word check_hlds__unique_modes__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 2)));

#line 244 "unique_modes.m"
                            check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__V_32_32 == (MR_Integer) 1);
#line 244 "unique_modes.m"
                          }
#line 245 "unique_modes.m"
                        else
#line 245 "unique_modes.m"
                          check_hlds__unique_modes__succeeded = MR_FALSE;
#line 239 "unique_modes.m"
                  }
#line 239 "unique_modes.m"
              }
#line 253 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 249 "unique_modes.m"
              {
#line 249 "unique_modes.m"
                MR_Word check_hlds__unique_modes__Inst_27;
#line 249 "unique_modes.m"
                MR_Word check_hlds__unique_modes__ModuleInfo_28;
#line 249 "unique_modes.m"
                MR_Word check_hlds__unique_modes__InstMap_29;
#line 249 "unique_modes.m"
                MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_33;

#line 249 "unique_modes.m"
                {
#line 249 "unique_modes.m"
                  check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__unique_modes__Inst0_21, &check_hlds__unique_modes__Inst_27, check_hlds__unique_modes__ModuleInfo0_19, &check_hlds__unique_modes__ModuleInfo_28);
                }
#line 250 "unique_modes.m"
                {
#line 250 "unique_modes.m"
                  check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__unique_modes__ModuleInfo_28, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_33);
                }
#line 251 "unique_modes.m"
                {
#line 251 "unique_modes.m"
                  hlds__instmap__instmap_set_var_4_p_0(check_hlds__unique_modes__Var_7, check_hlds__unique_modes__Inst_27, check_hlds__unique_modes__InstMap0_18, &check_hlds__unique_modes__InstMap_29);
                }
#line 252 "unique_modes.m"
                {
#line 252 "unique_modes.m"
                  check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_29, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_33, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_12_12);
                }
#line 249 "unique_modes.m"
              }
#line 253 "unique_modes.m"
            else
#line 252 "unique_modes.m"
              check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_12_12 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2;
#line 229 "unique_modes.m"
            /* direct tailcall eliminated */
#line 229 "unique_modes.m"
            {
#line 229 "unique_modes.m"
              MR_Word check_hlds__unique_modes__HeadVar__1__tmp_copy_1 = check_hlds__unique_modes__Vars_8;
#line 229 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_2 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_12_12;

#line 229 "unique_modes.m"
              check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_2;
#line 229 "unique_modes.m"
              check_hlds__unique_modes__HeadVar__1_1 = check_hlds__unique_modes__HeadVar__1__tmp_copy_1;
#line 229 "unique_modes.m"
            }
#line 229 "unique_modes.m"
            continue;
#line 227 "unique_modes.m"
          }
#line 226 "unique_modes.m"
      }
#line 226 "unique_modes.m"
      break;
#line 226 "unique_modes.m"
    }
#line 223 "unique_modes.m"
}

#line 202 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__select_changed_inst_vars_4_p_0(
#line 202 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 202 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
#line 202 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__3_3,
#line 202 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4)
#line 202 "unique_modes.m"
{
#line 205 "unique_modes.m"
  while (MR_TRUE)
#line 205 "unique_modes.m"
    {
#line 205 "unique_modes.m"
      /* tailcall optimized into a loop */
#line 205 "unique_modes.m"
      {
#line 205 "unique_modes.m"
        MR_bool check_hlds__unique_modes__succeeded;

#line 205 "unique_modes.m"
        if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "unique_modes.m"
          *check_hlds__unique_modes__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 205 "unique_modes.m"
        else
#line 206 "unique_modes.m"
          {
#line 206 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
#line 206 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
#line 206 "unique_modes.m"
            MR_Word check_hlds__unique_modes__ModuleInfo_12;
#line 206 "unique_modes.m"
            MR_Word check_hlds__unique_modes__InstMap0_13;
#line 206 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Inst0_14;
#line 206 "unique_modes.m"
            MR_Word check_hlds__unique_modes__VarTypes_15;
#line 206 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Type_16;
#line 213 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Inst_17;

#line 207 "unique_modes.m"
            {
#line 207 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__HeadVar__3_3, &check_hlds__unique_modes__ModuleInfo_12);
            }
#line 208 "unique_modes.m"
            {
#line 208 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__HeadVar__3_3, &check_hlds__unique_modes__InstMap0_13);
            }
#line 209 "unique_modes.m"
            {
#line 209 "unique_modes.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__unique_modes__InstMap0_13, check_hlds__unique_modes__Var_7, &check_hlds__unique_modes__Inst0_14);
            }
#line 210 "unique_modes.m"
            {
#line 210 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__unique_modes__HeadVar__3_3, &check_hlds__unique_modes__VarTypes_15);
            }
#line 211 "unique_modes.m"
            {
#line 211 "unique_modes.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__unique_modes__VarTypes_15, check_hlds__unique_modes__Var_7, &check_hlds__unique_modes__Type_16);
            }
#line 213 "unique_modes.m"
            {
#line 213 "unique_modes.m"
              check_hlds__unique_modes__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(check_hlds__unique_modes__HeadVar__2_2);
            }
#line 213 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 213 "unique_modes.m"
              {
#line 214 "unique_modes.m"
                {
#line 214 "unique_modes.m"
                  check_hlds__unique_modes__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__unique_modes__HeadVar__2_2, check_hlds__unique_modes__Var_7, &check_hlds__unique_modes__Inst_17);
                }
#line 213 "unique_modes.m"
                if (check_hlds__unique_modes__succeeded)
#line 213 "unique_modes.m"
                  {
#line 215 "unique_modes.m"
                    {
#line 215 "unique_modes.m"
                      check_hlds__unique_modes__succeeded = check_hlds__inst_match__inst_matches_final_typed_4_p_0(check_hlds__unique_modes__Inst_17, check_hlds__unique_modes__Inst0_14, check_hlds__unique_modes__Type_16, check_hlds__unique_modes__ModuleInfo_12);
                    }
#line 215 "unique_modes.m"
                    check_hlds__unique_modes__succeeded = !(check_hlds__unique_modes__succeeded);
#line 213 "unique_modes.m"
                  }
#line 213 "unique_modes.m"
              }
#line 219 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 217 "unique_modes.m"
              {
#line 217 "unique_modes.m"
                MR_Word check_hlds__unique_modes__ChangedVars1_18;

#line 217 "unique_modes.m"
                {
#line 217 "unique_modes.m"
                  check_hlds__unique_modes__select_changed_inst_vars_4_p_0(check_hlds__unique_modes__Vars_8, check_hlds__unique_modes__HeadVar__2_2, check_hlds__unique_modes__HeadVar__3_3, &check_hlds__unique_modes__ChangedVars1_18);
                }
#line 218 "unique_modes.m"
                {
#line 218 "unique_modes.m"
                  MR_Word base;
#line 218 "unique_modes.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "unique_modes.m"
                  *check_hlds__unique_modes__HeadVar__4_4 = base;
#line 218 "unique_modes.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Var_7));
#line 218 "unique_modes.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__ChangedVars1_18));
#line 218 "unique_modes.m"
                }
#line 217 "unique_modes.m"
              }
#line 219 "unique_modes.m"
            else
#line 220 "unique_modes.m"
              {
#line 220 "unique_modes.m"
                /* direct tailcall eliminated */
#line 220 "unique_modes.m"
                {
#line 220 "unique_modes.m"
                  MR_Word check_hlds__unique_modes__HeadVar__1__tmp_copy_1 = check_hlds__unique_modes__Vars_8;

#line 220 "unique_modes.m"
                  check_hlds__unique_modes__HeadVar__1_1 = check_hlds__unique_modes__HeadVar__1__tmp_copy_1;
#line 220 "unique_modes.m"
                }
#line 220 "unique_modes.m"
                continue;
#line 220 "unique_modes.m"
              }
#line 206 "unique_modes.m"
          }
#line 205 "unique_modes.m"
      }
#line 205 "unique_modes.m"
      break;
#line 205 "unique_modes.m"
    }
#line 202 "unique_modes.m"
}

#line 186 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__select_nondet_live_vars_3_p_0(
#line 186 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 186 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ModeInfo_2,
#line 186 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3)
#line 186 "unique_modes.m"
{
#line 189 "unique_modes.m"
  while (MR_TRUE)
#line 189 "unique_modes.m"
    {
#line 189 "unique_modes.m"
      /* tailcall optimized into a loop */
#line 189 "unique_modes.m"
      {
#line 189 "unique_modes.m"
        MR_bool check_hlds__unique_modes__succeeded;

#line 189 "unique_modes.m"
        if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "unique_modes.m"
          *check_hlds__unique_modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 189 "unique_modes.m"
        else
#line 190 "unique_modes.m"
          {
#line 190 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
#line 190 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
#line 191 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_11_11;

#line 191 "unique_modes.m"
            {
#line 191 "unique_modes.m"
              check_hlds__mode_info__mode_info_var_is_nondet_live_3_p_0(check_hlds__unique_modes__ModeInfo_2, check_hlds__unique_modes__Var_5, &check_hlds__unique_modes__V_11_11);
            }
#line 191 "unique_modes.m"
            check_hlds__unique_modes__succeeded = ((MR_Integer) 0 == check_hlds__unique_modes__V_11_11);
#line 194 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 192 "unique_modes.m"
              {
#line 192 "unique_modes.m"
                MR_Word check_hlds__unique_modes__NondetLiveVars1_9;

#line 192 "unique_modes.m"
                {
#line 192 "unique_modes.m"
                  check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__Vars_6, check_hlds__unique_modes__ModeInfo_2, &check_hlds__unique_modes__NondetLiveVars1_9);
                }
#line 193 "unique_modes.m"
                {
#line 193 "unique_modes.m"
                  MR_Word base;
#line 193 "unique_modes.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "unique_modes.m"
                  *check_hlds__unique_modes__HeadVar__3_3 = base;
#line 193 "unique_modes.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Var_5));
#line 193 "unique_modes.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__NondetLiveVars1_9));
#line 193 "unique_modes.m"
                }
#line 192 "unique_modes.m"
              }
#line 194 "unique_modes.m"
            else
#line 195 "unique_modes.m"
              {
#line 195 "unique_modes.m"
                /* direct tailcall eliminated */
#line 195 "unique_modes.m"
                {
#line 195 "unique_modes.m"
                  MR_Word check_hlds__unique_modes__HeadVar__1__tmp_copy_1 = check_hlds__unique_modes__Vars_6;

#line 195 "unique_modes.m"
                  check_hlds__unique_modes__HeadVar__1_1 = check_hlds__unique_modes__HeadVar__1__tmp_copy_1;
#line 195 "unique_modes.m"
                }
#line 195 "unique_modes.m"
                continue;
#line 195 "unique_modes.m"
              }
#line 190 "unique_modes.m"
          }
#line 189 "unique_modes.m"
      }
#line 189 "unique_modes.m"
      break;
#line 189 "unique_modes.m"
    }
#line 186 "unique_modes.m"
}

#line 174 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__select_live_vars_3_p_0(
#line 174 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 174 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ModeInfo_2,
#line 174 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3)
#line 174 "unique_modes.m"
{
#line 177 "unique_modes.m"
  while (MR_TRUE)
#line 177 "unique_modes.m"
    {
#line 177 "unique_modes.m"
      /* tailcall optimized into a loop */
#line 177 "unique_modes.m"
      {
#line 177 "unique_modes.m"
        MR_bool check_hlds__unique_modes__succeeded;

#line 177 "unique_modes.m"
        if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "unique_modes.m"
          *check_hlds__unique_modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 177 "unique_modes.m"
        else
#line 178 "unique_modes.m"
          {
#line 178 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
#line 178 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
#line 179 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_11_11;

#line 179 "unique_modes.m"
            {
#line 179 "unique_modes.m"
              check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__unique_modes__ModeInfo_2, check_hlds__unique_modes__Var_5, &check_hlds__unique_modes__V_11_11);
            }
#line 179 "unique_modes.m"
            check_hlds__unique_modes__succeeded = ((MR_Integer) 0 == check_hlds__unique_modes__V_11_11);
#line 182 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 180 "unique_modes.m"
              {
#line 180 "unique_modes.m"
                MR_Word check_hlds__unique_modes__LiveVars1_9;

#line 180 "unique_modes.m"
                {
#line 180 "unique_modes.m"
                  check_hlds__unique_modes__select_live_vars_3_p_0(check_hlds__unique_modes__Vars_6, check_hlds__unique_modes__ModeInfo_2, &check_hlds__unique_modes__LiveVars1_9);
                }
#line 181 "unique_modes.m"
                {
#line 181 "unique_modes.m"
                  MR_Word base;
#line 181 "unique_modes.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "unique_modes.m"
                  *check_hlds__unique_modes__HeadVar__3_3 = base;
#line 181 "unique_modes.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Var_5));
#line 181 "unique_modes.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__LiveVars1_9));
#line 181 "unique_modes.m"
                }
#line 180 "unique_modes.m"
              }
#line 182 "unique_modes.m"
            else
#line 183 "unique_modes.m"
              {
#line 183 "unique_modes.m"
                /* direct tailcall eliminated */
#line 183 "unique_modes.m"
                {
#line 183 "unique_modes.m"
                  MR_Word check_hlds__unique_modes__HeadVar__1__tmp_copy_1 = check_hlds__unique_modes__Vars_6;

#line 183 "unique_modes.m"
                  check_hlds__unique_modes__HeadVar__1_1 = check_hlds__unique_modes__HeadVar__1__tmp_copy_1;
#line 183 "unique_modes.m"
                }
#line 183 "unique_modes.m"
                continue;
#line 183 "unique_modes.m"
              }
#line 178 "unique_modes.m"
          }
#line 177 "unique_modes.m"
      }
#line 177 "unique_modes.m"
      break;
#line 177 "unique_modes.m"
    }
#line 174 "unique_modes.m"
}

#line 76 "unique_modes.m"
void MR_CALL 
check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(
#line 76 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ModeInfo0_3,
#line 76 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__ModeInfo_4)
#line 76 "unique_modes.m"
{
#line 164 "unique_modes.m"
  {
#line 164 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 164 "unique_modes.m"
    MR_Word check_hlds__unique_modes__FullInstMap0_5;

#line 165 "unique_modes.m"
    {
#line 165 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__ModeInfo0_3, &check_hlds__unique_modes__FullInstMap0_5);
    }
#line 166 "unique_modes.m"
    {
#line 166 "unique_modes.m"
      check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_5);
    }
#line 170 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 167 "unique_modes.m"
      {
#line 167 "unique_modes.m"
        MR_Word check_hlds__unique_modes__AllVars_6;
#line 167 "unique_modes.m"
        MR_Word check_hlds__unique_modes__NondetLiveVars_7;

#line 167 "unique_modes.m"
        {
#line 167 "unique_modes.m"
          hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_5, &check_hlds__unique_modes__AllVars_6);
        }
#line 168 "unique_modes.m"
        {
#line 168 "unique_modes.m"
          check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_6, check_hlds__unique_modes__ModeInfo0_3, &check_hlds__unique_modes__NondetLiveVars_7);
        }
#line 169 "unique_modes.m"
        {
#line 169 "unique_modes.m"
          check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_7, check_hlds__unique_modes__ModeInfo0_3, check_hlds__unique_modes__ModeInfo_4);
#line 169 "unique_modes.m"
          return;
        }
#line 167 "unique_modes.m"
      }
#line 170 "unique_modes.m"
    else
#line 171 "unique_modes.m"
      *check_hlds__unique_modes__ModeInfo_4 = check_hlds__unique_modes__ModeInfo0_3;
#line 164 "unique_modes.m"
  }
#line 76 "unique_modes.m"
}

#line 70 "unique_modes.m"
void MR_CALL 
check_hlds__unique_modes__prepare_for_disjunct_5_p_0(
#line 70 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goal0_6,
#line 70 "unique_modes.m"
  MR_Word check_hlds__unique_modes__DisjDetism_7,
#line 70 "unique_modes.m"
  MR_Word check_hlds__unique_modes__DisjNonLocals_8,
#line 70 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_16,
#line 70 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17)
#line 70 "unique_modes.m"
{
#line 1031 "unique_modes.m"
  {
#line 1031 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 1017 "unique_modes.m"
    MR_Word check_hlds__unique_modes__GoalInfo0_12;
#line 1017 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Determinism_13;
#line 1017 "unique_modes.m"
    MR_Word check_hlds__unique_modes__CanFail_14;
#line 1017 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_22_22;
#line 1017 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_10_10;
#line 1023 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_11_11;
#line 1025 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_15_15;

#line 1017 "unique_modes.m"
    {
#line 1017 "unique_modes.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__DisjDetism_7, &check_hlds__unique_modes__V_10_10, &check_hlds__unique_modes__V_22_22);
    }
#line 1017 "unique_modes.m"
    check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__V_22_22);
#line 1017 "unique_modes.m"
    check_hlds__unique_modes__succeeded = !(check_hlds__unique_modes__succeeded);
#line 1017 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 1017 "unique_modes.m"
      {
#line 1023 "unique_modes.m"
        check_hlds__unique_modes__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_6, (MR_Integer) 0)));
#line 1023 "unique_modes.m"
        check_hlds__unique_modes__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_6, (MR_Integer) 1)));
#line 1024 "unique_modes.m"
        {
#line 1024 "unique_modes.m"
          check_hlds__unique_modes__Determinism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_12);
        }
#line 1025 "unique_modes.m"
        {
#line 1025 "unique_modes.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Determinism_13, &check_hlds__unique_modes__CanFail_14, &check_hlds__unique_modes__V_15_15);
        }
#line 1026 "unique_modes.m"
        check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__CanFail_14 == (MR_Integer) 0);
#line 1017 "unique_modes.m"
      }
#line 1031 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 1028 "unique_modes.m"
      {
#line 1028 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19;
#line 1028 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20;
#line 1028 "unique_modes.m"
        MR_Word check_hlds__unique_modes__FullInstMap0_25;

#line 1028 "unique_modes.m"
        {
#line 1028 "unique_modes.m"
          check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__DisjNonLocals_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19);
        }
#line 165 "unique_modes.m"
        {
#line 165 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19, &check_hlds__unique_modes__FullInstMap0_25);
        }
#line 166 "unique_modes.m"
        {
#line 166 "unique_modes.m"
          check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_25);
        }
#line 170 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 167 "unique_modes.m"
          {
#line 167 "unique_modes.m"
            MR_Word check_hlds__unique_modes__AllVars_26;
#line 167 "unique_modes.m"
            MR_Word check_hlds__unique_modes__NondetLiveVars_27;

#line 167 "unique_modes.m"
            {
#line 167 "unique_modes.m"
              hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_25, &check_hlds__unique_modes__AllVars_26);
            }
#line 168 "unique_modes.m"
            {
#line 168 "unique_modes.m"
              check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_26, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19, &check_hlds__unique_modes__NondetLiveVars_27);
            }
#line 169 "unique_modes.m"
            {
#line 169 "unique_modes.m"
              check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_27, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20);
            }
#line 167 "unique_modes.m"
          }
#line 170 "unique_modes.m"
        else
#line 171 "unique_modes.m"
          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19;
#line 1030 "unique_modes.m"
        {
#line 1030 "unique_modes.m"
          check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__DisjNonLocals_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17);
#line 1030 "unique_modes.m"
          return;
        }
#line 1028 "unique_modes.m"
      }
#line 1031 "unique_modes.m"
    else
#line 1030 "unique_modes.m"
      *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_16;
#line 1031 "unique_modes.m"
  }
#line 70 "unique_modes.m"
}

#line 65 "unique_modes.m"
void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_4_p_0(
#line 65 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goal0_5,
#line 65 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__Goal_6,
#line 65 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_13,
#line 65 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14)
#line 65 "unique_modes.m"
{
#line 117 "unique_modes.m"
  {
#line 117 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 117 "unique_modes.m"
    MR_Word check_hlds__unique_modes__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_5, (MR_Integer) 0)));
#line 117 "unique_modes.m"
    MR_Word check_hlds__unique_modes__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_5, (MR_Integer) 1)));
#line 117 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Context_10;
#line 117 "unique_modes.m"
    MR_Word check_hlds__unique_modes__EmptyContext_11;
#line 117 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15;

#line 119 "unique_modes.m"
    {
#line 119 "unique_modes.m"
      check_hlds__unique_modes__Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__unique_modes__GoalInfo0_9);
    }
#line 120 "unique_modes.m"
    {
#line 120 "unique_modes.m"
      mercury__term__context_init_1_p_0(&check_hlds__unique_modes__EmptyContext_11);
    }
#line 121 "unique_modes.m"
    {
#line 121 "unique_modes.m"
      check_hlds__unique_modes__succeeded = mercury__term____Unify____context_0_0(check_hlds__unique_modes__Context_10, check_hlds__unique_modes__EmptyContext_11);
    }
#line 123 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 121 "unique_modes.m"
      check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_13;
#line 123 "unique_modes.m"
    else
#line 124 "unique_modes.m"
      {
#line 124 "unique_modes.m"
        check_hlds__mode_info__mode_info_set_context_3_p_0(check_hlds__unique_modes__Context_10, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_13, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15);
      }
#line 126 "unique_modes.m"
    {
#line 126 "unique_modes.m"
      check_hlds__unique_modes__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__unique_modes__GoalInfo0_9, (MR_Integer) 13);
    }
#line 131 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 127 "unique_modes.m"
      {
#line 127 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InDuplForSwitch_12;
#line 127 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18;
#line 127 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19;
#line 127 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap0_29;
#line 127 "unique_modes.m"
        MR_Word check_hlds__unique_modes__NondetLiveVars0_30;
#line 127 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Detism_31;
#line 127 "unique_modes.m"
        MR_Word check_hlds__unique_modes__GoalExpr_33;
#line 127 "unique_modes.m"
        MR_Word check_hlds__unique_modes__GoalInfo_34;
#line 127 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_37;
#line 127 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_38;
#line 127 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_39;
#line 148 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_42_42;
#line 148 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_32_32;

#line 127 "unique_modes.m"
        {
#line 127 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__InDuplForSwitch_12);
        }
#line 128 "unique_modes.m"
        {
#line 128 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0((MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18);
        }
#line 141 "unique_modes.m"
        {
#line 141 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__InstMap0_29);
        }
#line 143 "unique_modes.m"
        {
#line 143 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__NondetLiveVars0_30);
        }
#line 147 "unique_modes.m"
        {
#line 147 "unique_modes.m"
          check_hlds__unique_modes__Detism_31 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_9);
        }
#line 148 "unique_modes.m"
        {
#line 148 "unique_modes.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Detism_31, &check_hlds__unique_modes__V_32_32, &check_hlds__unique_modes__V_42_42);
        }
#line 148 "unique_modes.m"
        check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__V_42_42);
#line 150 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 148 "unique_modes.m"
          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_37 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18;
#line 150 "unique_modes.m"
        else
#line 151 "unique_modes.m"
          {
#line 151 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_36_36;

#line 151 "unique_modes.m"
            {
#line 151 "unique_modes.m"
              check_hlds__unique_modes__V_36_36 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[0]);
            }
#line 151 "unique_modes.m"
            {
#line 151 "unique_modes.m"
              check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__unique_modes__V_36_36, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_37);
            }
#line 151 "unique_modes.m"
          }
#line 154 "unique_modes.m"
        {
#line 154 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(check_hlds__unique_modes__GoalExpr0_8, check_hlds__unique_modes__GoalInfo0_9, &check_hlds__unique_modes__GoalExpr_33, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_37, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_38);
        }
#line 156 "unique_modes.m"
        {
#line 156 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__unique_modes__NondetLiveVars0_30, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_38, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_39);
        }
#line 160 "unique_modes.m"
        {
#line 160 "unique_modes.m"
          check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(check_hlds__unique_modes__InstMap0_29, check_hlds__unique_modes__GoalExpr_33, check_hlds__unique_modes__GoalInfo0_9, &check_hlds__unique_modes__GoalInfo_34, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_39, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19);
        }
#line 162 "unique_modes.m"
        {
#line 162 "unique_modes.m"
          MR_Word base;
#line 162 "unique_modes.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 162 "unique_modes.m"
          *check_hlds__unique_modes__Goal_6 = base;
#line 162 "unique_modes.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unique_modes__GoalExpr_33));
#line 162 "unique_modes.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unique_modes__GoalInfo_34));
#line 162 "unique_modes.m"
        }
#line 130 "unique_modes.m"
        {
#line 130 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(check_hlds__unique_modes__InDuplForSwitch_12, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14);
#line 130 "unique_modes.m"
          return;
        }
#line 127 "unique_modes.m"
      }
#line 131 "unique_modes.m"
    else
#line 140 "unique_modes.m"
      {
#line 140 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap0_49;
#line 140 "unique_modes.m"
        MR_Word check_hlds__unique_modes__NondetLiveVars0_50;
#line 140 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Detism_51;
#line 140 "unique_modes.m"
        MR_Word check_hlds__unique_modes__GoalExpr_53;
#line 140 "unique_modes.m"
        MR_Word check_hlds__unique_modes__GoalInfo_54;
#line 140 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_57;
#line 140 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_58;
#line 140 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_59;
#line 148 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_62_62;
#line 148 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_52_52;

#line 141 "unique_modes.m"
        {
#line 141 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__InstMap0_49);
        }
#line 143 "unique_modes.m"
        {
#line 143 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__NondetLiveVars0_50);
        }
#line 147 "unique_modes.m"
        {
#line 147 "unique_modes.m"
          check_hlds__unique_modes__Detism_51 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_9);
        }
#line 148 "unique_modes.m"
        {
#line 148 "unique_modes.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Detism_51, &check_hlds__unique_modes__V_52_52, &check_hlds__unique_modes__V_62_62);
        }
#line 148 "unique_modes.m"
        check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__V_62_62);
#line 150 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 148 "unique_modes.m"
          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_57 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15;
#line 150 "unique_modes.m"
        else
#line 151 "unique_modes.m"
          {
#line 151 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_56_56;

#line 151 "unique_modes.m"
            {
#line 151 "unique_modes.m"
              check_hlds__unique_modes__V_56_56 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[0]);
            }
#line 151 "unique_modes.m"
            {
#line 151 "unique_modes.m"
              check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__unique_modes__V_56_56, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_57);
            }
#line 151 "unique_modes.m"
          }
#line 154 "unique_modes.m"
        {
#line 154 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(check_hlds__unique_modes__GoalExpr0_8, check_hlds__unique_modes__GoalInfo0_9, &check_hlds__unique_modes__GoalExpr_53, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_57, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_58);
        }
#line 156 "unique_modes.m"
        {
#line 156 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__unique_modes__NondetLiveVars0_50, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_58, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_59);
        }
#line 160 "unique_modes.m"
        {
#line 160 "unique_modes.m"
          check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(check_hlds__unique_modes__InstMap0_49, check_hlds__unique_modes__GoalExpr_53, check_hlds__unique_modes__GoalInfo0_9, &check_hlds__unique_modes__GoalInfo_54, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_59, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14);
        }
#line 162 "unique_modes.m"
        {
#line 162 "unique_modes.m"
          MR_Word base;
#line 162 "unique_modes.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 162 "unique_modes.m"
          *check_hlds__unique_modes__Goal_6 = base;
#line 162 "unique_modes.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unique_modes__GoalExpr_53));
#line 162 "unique_modes.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unique_modes__GoalInfo_54));
#line 162 "unique_modes.m"
        }
#line 140 "unique_modes.m"
      }
#line 117 "unique_modes.m"
  }
#line 65 "unique_modes.m"
}

#line 59 "unique_modes.m"
void MR_CALL 
check_hlds__unique_modes__unique_modes_check_proc_6_p_0(
#line 59 "unique_modes.m"
  MR_Integer check_hlds__unique_modes__ProcId_7,
#line 59 "unique_modes.m"
  MR_Word check_hlds__unique_modes__PredId_8,
#line 59 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_0_12,
#line 59 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_13,
#line 59 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__Changed_10,
#line 59 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__Specs_11)
#line 59 "unique_modes.m"
{
#line 113 "unique_modes.m"
  {
#line 113 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;

#line 114 "unique_modes.m"
    {
#line 114 "unique_modes.m"
      check_hlds__modes__modecheck_proc_general_8_p_0(check_hlds__unique_modes__ProcId_7, check_hlds__unique_modes__PredId_8, (MR_Integer) 1, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_13, check_hlds__unique_modes__Specs_11, check_hlds__unique_modes__Changed_10);
#line 114 "unique_modes.m"
      return;
    }
#line 113 "unique_modes.m"
  }
#line 59 "unique_modes.m"
}

#line 54 "unique_modes.m"
void MR_CALL 
check_hlds__unique_modes__unique_modes_check_module_3_p_0(
#line 54 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_0_7,
#line 54 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_8,
#line 54 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__Specs_5)
#line 54 "unique_modes.m"
{
#line 109 "unique_modes.m"
  {
#line 109 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 110 "unique_modes.m"
    MR_Word check_hlds__unique_modes___SafeToContinue_6;

#line 110 "unique_modes.m"
    {
#line 110 "unique_modes.m"
      check_hlds__modes__check_pred_modes_6_p_0((MR_Integer) 1, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_8, &check_hlds__unique_modes___SafeToContinue_6, check_hlds__unique_modes__Specs_5);
    }
#line 109 "unique_modes.m"
  }
#line 54 "unique_modes.m"
}

void mercury__check_hlds__unique_modes__init(void)
{
}

void mercury__check_hlds__unique_modes__init_type_tables(void)
{
}

void mercury__check_hlds__unique_modes__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.unique_modes. */
