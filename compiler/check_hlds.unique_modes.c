/*
** Automatically generated from `unique_modes.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module check_hlds.unique_modes. */
/* :- implementation. */

/*
INIT mercury__check_hlds__unique_modes__init
ENDINIT
*/

#include "check_hlds.unique_modes.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 150 "check_hlds.unique_modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 1040 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(
#line 1040 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 1040 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
#line 1040 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3,
#line 1040 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
#line 1040 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5,
#line 1040 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_6);

#line 997 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_disj_7_p_0(
#line 997 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 997 "unique_modes.m"
  MR_Word check_hlds__unique_modes__DisjDetism_2,
#line 997 "unique_modes.m"
  MR_Word check_hlds__unique_modes__DisjNonLocals_3,
#line 997 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
#line 997 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__5_5,
#line 997 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6,
#line 997 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_7);

#line 896 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_conj_2_6_p_0(
#line 896 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ConjType_7,
#line 896 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goal0_8,
#line 896 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goals0_9,
#line 896 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
#line 896 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_15,
#line 896 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_16);

#line 880 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_conj_5_p_0(
#line 880 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 880 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
#line 880 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3,
#line 880 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4,
#line 880 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5);

#line 751 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_call_7_p_0(
#line 751 "unique_modes.m"
  MR_Word check_hlds__unique_modes__PredId_8,
#line 751 "unique_modes.m"
  MR_Integer check_hlds__unique_modes__ProcId0_9,
#line 751 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ArgVars_10,
#line 751 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo_11,
#line 751 "unique_modes.m"
  MR_Integer * check_hlds__unique_modes__ProcId_12,
#line 751 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37,
#line 751 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38);

#line 702 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_p_0(
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalType_12,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Outer_13,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Inner_14,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__MaybeOutputVars_15,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__MainGoal0_16,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__OrElseGoals0_17,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__OrElseInners_18,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_19,
#line 702 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_20,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_34,
#line 702 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35);

#line 656 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_switch_7_p_0(
#line 656 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Var_8,
#line 656 "unique_modes.m"
  MR_Word check_hlds__unique_modes__CanFail_9,
#line 656 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Cases0_10,
#line 656 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_11,
#line 656 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_12,
#line 656 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_21,
#line 656 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22);

#line 501 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_scope_6_p_0(
#line 501 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Reason_7,
#line 501 "unique_modes.m"
  MR_Word check_hlds__unique_modes__SubGoal0_8,
#line 501 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_9,
#line 501 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_10,
#line 501 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_41,
#line 501 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42);

#line 468 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_negation_5_p_0(
#line 468 "unique_modes.m"
  MR_Word check_hlds__unique_modes__SubGoal0_6,
#line 468 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_7,
#line 468 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 468 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_16,
#line 468 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17);

#line 394 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_p_0(
#line 394 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Vars_9,
#line 394 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Cond0_10,
#line 394 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Then0_11,
#line 394 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Else0_12,
#line 394 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_13,
#line 394 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_14,
#line 394 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_34,
#line 394 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35);

#line 350 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_disj_5_p_0(
#line 350 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goals0_6,
#line 350 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_7,
#line 350 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 350 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_19,
#line 350 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20);

#line 333 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_conj_5_p_0(
#line 333 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ConjType_6,
#line 333 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goals0_7,
#line 333 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 333 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_13,
#line 333 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14);

#line 694 "unique_modes.m"
static MR_Box MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0_1(
#line 694 "unique_modes.m"
  MR_Box check_hlds__unique_modes__closure_arg,
#line 694 "unique_modes.m"
  MR_Box check_hlds__unique_modes__wrapper_arg_1);

#line 260 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(
#line 260 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalExpr0_6,
#line 260 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_7,
#line 260 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 260 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55,
#line 260 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);

#line 224 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(
#line 224 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 224 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2,
#line 224 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_3);

#line 203 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__select_changed_inst_vars_4_p_0(
#line 203 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 203 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
#line 203 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__3_3,
#line 203 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4);

#line 187 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__select_nondet_live_vars_3_p_0(
#line 187 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 187 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ModeInfo_2,
#line 187 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3);

#line 175 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__select_live_vars_3_p_0(
#line 175 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 175 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ModeInfo_2,
#line 175 "unique_modes.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 479 "check_hlds.unique_modes.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1040 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(
#line 1040 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 1040 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
#line 1040 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3,
#line 1040 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
#line 1040 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5,
#line 1040 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_6)
#line 1040 "unique_modes.m"
{
#line 1043 "unique_modes.m"
  {
#line 1043 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;

#line 1043 "unique_modes.m"
    if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1043 "unique_modes.m"
      {
#line 1043 "unique_modes.m"
        *check_hlds__unique_modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1043 "unique_modes.m"
        *check_hlds__unique_modes__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1043 "unique_modes.m"
        *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_6 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5;
#line 1043 "unique_modes.m"
      }
#line 1043 "unique_modes.m"
    else
#line 1045 "unique_modes.m"
      {
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Case_14;
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Cases_15;
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_16;
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_17;
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case0_11, (MR_Integer) 0)));
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case0_11, (MR_Integer) 1)));
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case0_11, (MR_Integer) 2)));
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap0_22;
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap1_23;
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal1_24;
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal_25;
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28;
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29;
#line 1045 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30;

#line 1047 "unique_modes.m"
        {
#line 1047 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__unique_modes__InstMap0_22);
        }
#line 1054 "unique_modes.m"
        {
#line 1054 "unique_modes.m"
          check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__unique_modes__HeadVar__2_2, check_hlds__unique_modes__MainConsId_19, check_hlds__unique_modes__OtherConsIds_20, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28);
        }
#line 1056 "unique_modes.m"
        {
#line 1056 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__unique_modes__InstMap1_23);
        }
#line 1057 "unique_modes.m"
        {
#line 1057 "unique_modes.m"
          check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__InstMap1_23);
        }
#line 1059 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 1058 "unique_modes.m"
          {
#line 1058 "unique_modes.m"
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Goal0_21, &check_hlds__unique_modes__Goal1_24, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29);
          }
#line 1059 "unique_modes.m"
        else
#line 1063 "unique_modes.m"
          {
#line 1063 "unique_modes.m"
            {
#line 1063 "unique_modes.m"
              check_hlds__unique_modes__Goal1_24 = hlds__make_goal__true_goal_0_f_0();
            }
#line 1063 "unique_modes.m"
            check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28;
#line 1063 "unique_modes.m"
          }
#line 1066 "unique_modes.m"
        {
#line 1066 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__unique_modes__InstMap_16);
        }
#line 1067 "unique_modes.m"
        {
#line 1067 "unique_modes.m"
          check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__unique_modes__HeadVar__2_2, check_hlds__unique_modes__InstMap0_22, check_hlds__unique_modes__InstMap_16, check_hlds__unique_modes__Goal1_24, &check_hlds__unique_modes__Goal_25);
        }
#line 1068 "unique_modes.m"
        {
#line 1068 "unique_modes.m"
          check_hlds__unique_modes__Case_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1068 "unique_modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case_14, 0) = ((MR_Box) (check_hlds__unique_modes__MainConsId_19));
#line 1068 "unique_modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case_14, 1) = ((MR_Box) (check_hlds__unique_modes__OtherConsIds_20));
#line 1068 "unique_modes.m"
          MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case_14, 2) = ((MR_Box) (check_hlds__unique_modes__Goal_25));
#line 1068 "unique_modes.m"
        }
#line 1070 "unique_modes.m"
        {
#line 1070 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_22, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30);
        }
#line 1071 "unique_modes.m"
        {
#line 1071 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(check_hlds__unique_modes__Cases0_12, check_hlds__unique_modes__HeadVar__2_2, &check_hlds__unique_modes__Cases_15, &check_hlds__unique_modes__InstMaps_17, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_6);
        }
#line 1044 "unique_modes.m"
        {
#line 1044 "unique_modes.m"
          MR_Word base;
#line 1044 "unique_modes.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "unique_modes.m"
          *check_hlds__unique_modes__HeadVar__3_3 = base;
#line 1044 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Case_14));
#line 1044 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__Cases_15));
#line 1044 "unique_modes.m"
        }
#line 1045 "unique_modes.m"
        {
#line 1045 "unique_modes.m"
          MR_Word base;
#line 1045 "unique_modes.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "unique_modes.m"
          *check_hlds__unique_modes__HeadVar__4_4 = base;
#line 1045 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__InstMap_16));
#line 1045 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__InstMaps_17));
#line 1045 "unique_modes.m"
        }
#line 1045 "unique_modes.m"
      }
#line 1043 "unique_modes.m"
  }
#line 1040 "unique_modes.m"
}

#line 997 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_disj_7_p_0(
#line 997 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 997 "unique_modes.m"
  MR_Word check_hlds__unique_modes__DisjDetism_2,
#line 997 "unique_modes.m"
  MR_Word check_hlds__unique_modes__DisjNonLocals_3,
#line 997 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
#line 997 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__5_5,
#line 997 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6,
#line 997 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_7)
#line 997 "unique_modes.m"
{
#line 1001 "unique_modes.m"
  {
#line 1001 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;

#line 1001 "unique_modes.m"
    if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1001 "unique_modes.m"
      {
#line 1001 "unique_modes.m"
        *check_hlds__unique_modes__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "unique_modes.m"
        *check_hlds__unique_modes__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "unique_modes.m"
        *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_7 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6;
#line 1001 "unique_modes.m"
      }
#line 1001 "unique_modes.m"
    else
#line 1003 "unique_modes.m"
      {
#line 1003 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
#line 1003 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
#line 1003 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal_17;
#line 1003 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals_18;
#line 1003 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_19;
#line 1003 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_20;
#line 1003 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap0_22;
#line 1003 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25;
#line 1003 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26;
#line 1003 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27;

#line 1004 "unique_modes.m"
        {
#line 1004 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__unique_modes__InstMap0_22);
        }
#line 1008 "unique_modes.m"
        {
#line 1008 "unique_modes.m"
          check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__unique_modes__Goal0_13, check_hlds__unique_modes__DisjDetism_2, check_hlds__unique_modes__DisjNonLocals_3, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25);
        }
#line 1009 "unique_modes.m"
        {
#line 1009 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Goal0_13, &check_hlds__unique_modes__Goal_17, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26);
        }
#line 1010 "unique_modes.m"
        {
#line 1010 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__unique_modes__InstMap_19);
        }
#line 1011 "unique_modes.m"
        {
#line 1011 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_22, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27);
        }
#line 1012 "unique_modes.m"
        {
#line 1012 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_disj_7_p_0(check_hlds__unique_modes__Goals0_14, check_hlds__unique_modes__DisjDetism_2, check_hlds__unique_modes__DisjNonLocals_3, &check_hlds__unique_modes__Goals_18, &check_hlds__unique_modes__InstMaps_20, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_7);
        }
#line 1003 "unique_modes.m"
        {
#line 1003 "unique_modes.m"
          MR_Word base;
#line 1003 "unique_modes.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "unique_modes.m"
          *check_hlds__unique_modes__HeadVar__4_4 = base;
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Goal_17));
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__Goals_18));
#line 1003 "unique_modes.m"
        }
#line 1003 "unique_modes.m"
        {
#line 1003 "unique_modes.m"
          MR_Word base;
#line 1003 "unique_modes.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "unique_modes.m"
          *check_hlds__unique_modes__HeadVar__5_5 = base;
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__InstMap_19));
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__InstMaps_20));
#line 1003 "unique_modes.m"
        }
#line 1003 "unique_modes.m"
      }
#line 1001 "unique_modes.m"
  }
#line 997 "unique_modes.m"
}

#line 896 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_conj_2_6_p_0(
#line 896 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ConjType_7,
#line 896 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goal0_8,
#line 896 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goals0_9,
#line 896 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
#line 896 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_15,
#line 896 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_16)
#line 896 "unique_modes.m"
{
#line 901 "unique_modes.m"
  {
#line 901 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 901 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Goal_10;
#line 901 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Goals_11;
#line 901 "unique_modes.m"
    MR_Word check_hlds__unique_modes__NonLocals_13;
#line 901 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstMap_14;
#line 901 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_17;
#line 901 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18;

#line 902 "unique_modes.m"
    {
#line 902 "unique_modes.m"
      check_hlds__unique_modes__NonLocals_13 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__unique_modes__Goal0_8);
    }
#line 903 "unique_modes.m"
    {
#line 903 "unique_modes.m"
      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_13, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_15, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_17);
    }
#line 904 "unique_modes.m"
    {
#line 904 "unique_modes.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Goal0_8, &check_hlds__unique_modes__Goal_10, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_17, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18);
    }
#line 905 "unique_modes.m"
    {
#line 905 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__InstMap_14);
    }
#line 906 "unique_modes.m"
    {
#line 906 "unique_modes.m"
      check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__unique_modes__InstMap_14);
    }
#line 912 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 910 "unique_modes.m"
      {
#line 910 "unique_modes.m"
        {
#line 910 "unique_modes.m"
          check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__unique_modes__Goals0_9, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_16);
        }
#line 911 "unique_modes.m"
        check_hlds__unique_modes__Goals_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 910 "unique_modes.m"
      }
#line 912 "unique_modes.m"
    else
#line 913 "unique_modes.m"
      {
#line 913 "unique_modes.m"
        check_hlds__unique_modes__unique_modes_check_conj_5_p_0(check_hlds__unique_modes__ConjType_7, check_hlds__unique_modes__Goals0_9, &check_hlds__unique_modes__Goals_11, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_16);
      }
#line 900 "unique_modes.m"
    {
#line 900 "unique_modes.m"
      MR_Word base;
#line 900 "unique_modes.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "unique_modes.m"
      *check_hlds__unique_modes__HeadVar__4_4 = base;
#line 900 "unique_modes.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Goal_10));
#line 900 "unique_modes.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__Goals_11));
#line 900 "unique_modes.m"
    }
#line 901 "unique_modes.m"
  }
#line 896 "unique_modes.m"
}

#line 880 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_conj_5_p_0(
#line 880 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 880 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
#line 880 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3,
#line 880 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4,
#line 880 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5)
#line 880 "unique_modes.m"
{
#line 887 "unique_modes.m"
  while (MR_TRUE)
#line 887 "unique_modes.m"
    {
#line 887 "unique_modes.m"
      /* tailcall optimized into a loop */
#line 887 "unique_modes.m"
      {
#line 887 "unique_modes.m"
        MR_bool check_hlds__unique_modes__succeeded;

#line 887 "unique_modes.m"
        if ((check_hlds__unique_modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "unique_modes.m"
          {
#line 887 "unique_modes.m"
            *check_hlds__unique_modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "unique_modes.m"
            *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4;
#line 887 "unique_modes.m"
          }
#line 887 "unique_modes.m"
        else
#line 888 "unique_modes.m"
          {
#line 888 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__2_2, (MR_Integer) 0)));
#line 888 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__2_2, (MR_Integer) 1)));
#line 892 "unique_modes.m"
            MR_Word check_hlds__unique_modes__ConjGoals_15;
#line 889 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_11, (MR_Integer) 0)));
#line 889 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_24_24;
#line 889 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_11, (MR_Integer) 1)));

#line 889 "unique_modes.m"
            check_hlds__unique_modes__succeeded = ((((MR_tag((MR_Word) check_hlds__unique_modes__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 889 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 889 "unique_modes.m"
              {
#line 889 "unique_modes.m"
                check_hlds__unique_modes__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_20_20, (MR_Integer) 1)));
#line 889 "unique_modes.m"
                check_hlds__unique_modes__ConjGoals_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_20_20, (MR_Integer) 2)));
#line 889 "unique_modes.m"
                check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__HeadVar__1_1 == check_hlds__unique_modes__V_24_24);
#line 889 "unique_modes.m"
              }
#line 892 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 890 "unique_modes.m"
              {
#line 890 "unique_modes.m"
                MR_Word check_hlds__unique_modes__Goals1_17;

#line 890 "unique_modes.m"
                {
#line 890 "unique_modes.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__unique_modes__ConjGoals_15, check_hlds__unique_modes__Goals0_12, &check_hlds__unique_modes__Goals1_17);
                }
#line 891 "unique_modes.m"
                /* direct tailcall eliminated */
#line 891 "unique_modes.m"
                {
#line 891 "unique_modes.m"
                  MR_Word check_hlds__unique_modes__HeadVar__2__tmp_copy_2 = check_hlds__unique_modes__Goals1_17;

#line 891 "unique_modes.m"
                  check_hlds__unique_modes__HeadVar__2_2 = check_hlds__unique_modes__HeadVar__2__tmp_copy_2;
#line 891 "unique_modes.m"
                }
#line 891 "unique_modes.m"
                continue;
#line 890 "unique_modes.m"
              }
#line 892 "unique_modes.m"
            else
#line 893 "unique_modes.m"
              {
#line 893 "unique_modes.m"
                check_hlds__unique_modes__unique_modes_check_conj_2_6_p_0(check_hlds__unique_modes__HeadVar__1_1, check_hlds__unique_modes__Goal0_11, check_hlds__unique_modes__Goals0_12, check_hlds__unique_modes__HeadVar__3_3, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5);
#line 893 "unique_modes.m"
                return;
              }
#line 888 "unique_modes.m"
          }
#line 887 "unique_modes.m"
      }
#line 887 "unique_modes.m"
      break;
#line 887 "unique_modes.m"
    }
#line 880 "unique_modes.m"
}

#line 751 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_call_7_p_0(
#line 751 "unique_modes.m"
  MR_Word check_hlds__unique_modes__PredId_8,
#line 751 "unique_modes.m"
  MR_Integer check_hlds__unique_modes__ProcId0_9,
#line 751 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ArgVars_10,
#line 751 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo_11,
#line 751 "unique_modes.m"
  MR_Integer * check_hlds__unique_modes__ProcId_12,
#line 751 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37,
#line 751 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38)
#line 751 "unique_modes.m"
{
#line 755 "unique_modes.m"
  {
#line 755 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__OldErrors_14;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstMap0_15;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ModuleInfo_16;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__PredInfo_17;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ProcInfo_18;
#line 755 "unique_modes.m"
    MR_Integer check_hlds__unique_modes__ArgOffset_19;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ProcArgModes0_20;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InterfaceDeterminism_21;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__NeverSucceeds_22;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ModeErrors_23;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Errors_29;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__MayChangeCalledProc_30;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ModuleInfo_63;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InitialInsts_64;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstVarSub_65;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__FinalInsts0_66;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__FinalInsts_67;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__NewArgVars_68;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ExtraGoals_69;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_72;
#line 755 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73;

#line 758 "unique_modes.m"
    {
#line 758 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__unique_modes__OldErrors_14);
    }
#line 759 "unique_modes.m"
    {
#line 759 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__unique_modes__InstMap0_15);
    }
#line 760 "unique_modes.m"
    {
#line 760 "unique_modes.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40);
    }
#line 763 "unique_modes.m"
    {
#line 763 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__ModuleInfo_16);
    }
#line 764 "unique_modes.m"
    {
#line 764 "unique_modes.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__unique_modes__ModuleInfo_16, check_hlds__unique_modes__PredId_8, check_hlds__unique_modes__ProcId0_9, &check_hlds__unique_modes__PredInfo_17, &check_hlds__unique_modes__ProcInfo_18);
    }
#line 766 "unique_modes.m"
    {
#line 766 "unique_modes.m"
      check_hlds__modecheck_util__compute_arg_offset_2_p_0(check_hlds__unique_modes__PredInfo_17, &check_hlds__unique_modes__ArgOffset_19);
    }
#line 767 "unique_modes.m"
    {
#line 767 "unique_modes.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__unique_modes__ProcInfo_18, &check_hlds__unique_modes__ProcArgModes0_20);
    }
#line 768 "unique_modes.m"
    {
#line 768 "unique_modes.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__unique_modes__ProcInfo_18, &check_hlds__unique_modes__InterfaceDeterminism_21);
    }
#line 769 "unique_modes.m"
    {
#line 769 "unique_modes.m"
      hlds__hlds_pred__proc_info_never_succeeds_2_p_0(check_hlds__unique_modes__ProcInfo_18, &check_hlds__unique_modes__NeverSucceeds_22);
    }
#line 844 "unique_modes.m"
    {
#line 844 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__ModuleInfo_63);
    }
#line 845 "unique_modes.m"
    {
#line 845 "unique_modes.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__unique_modes__ModuleInfo_63, check_hlds__unique_modes__ProcArgModes0_20, &check_hlds__unique_modes__InitialInsts_64);
    }
#line 846 "unique_modes.m"
    {
#line 846 "unique_modes.m"
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__unique_modes__ArgVars_10, check_hlds__unique_modes__InitialInsts_64, check_hlds__unique_modes__ArgOffset_19, &check_hlds__unique_modes__InstVarSub_65, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_72);
    }
#line 848 "unique_modes.m"
    {
#line 848 "unique_modes.m"
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__unique_modes__ModuleInfo_63, check_hlds__unique_modes__ProcArgModes0_20, &check_hlds__unique_modes__FinalInsts0_66);
    }
#line 849 "unique_modes.m"
    {
#line 849 "unique_modes.m"
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__unique_modes__InstVarSub_65, check_hlds__unique_modes__FinalInsts0_66, &check_hlds__unique_modes__FinalInsts_67);
    }
#line 850 "unique_modes.m"
    {
#line 850 "unique_modes.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__unique_modes__ArgVars_10, check_hlds__unique_modes__InitialInsts_64, check_hlds__unique_modes__FinalInsts_67, check_hlds__unique_modes__ArgOffset_19, &check_hlds__unique_modes__NewArgVars_68, &check_hlds__unique_modes__ExtraGoals_69, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_72, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73);
    }
#line 853 "unique_modes.m"
    {
#line 853 "unique_modes.m"
      check_hlds__unique_modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[1], ((MR_Box) (check_hlds__unique_modes__NewArgVars_68)), ((MR_Box) (check_hlds__unique_modes__ArgVars_10)));
    }
#line 853 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 854 "unique_modes.m"
      check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__ExtraGoals_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 857 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 856 "unique_modes.m"
      {
#line 856 "unique_modes.m"
      }
#line 857 "unique_modes.m"
    else
#line 860 "unique_modes.m"
      {
#line 860 "unique_modes.m"
        {
#line 860 "unique_modes.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
#line 860 "unique_modes.m"
          return;
        }
#line 860 "unique_modes.m"
      }
#line 866 "unique_modes.m"
#line 866 "unique_modes.m"
    switch (check_hlds__unique_modes__NeverSucceeds_22) {
#line 866 "unique_modes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 866 "unique_modes.m"
      case (MR_Integer) 0:
#line 873 "unique_modes.m"
        {
#line 871 "unique_modes.m"
          MR_Word check_hlds__unique_modes__V_80_80;
#line 871 "unique_modes.m"
          MR_Word check_hlds__unique_modes__V_71_71;

#line 871 "unique_modes.m"
          {
#line 871 "unique_modes.m"
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__InterfaceDeterminism_21, &check_hlds__unique_modes__V_71_71, &check_hlds__unique_modes__V_80_80);
          }
#line 871 "unique_modes.m"
          check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__V_80_80);
#line 873 "unique_modes.m"
          if (check_hlds__unique_modes__succeeded)
#line 165 "unique_modes.m"
            {
#line 165 "unique_modes.m"
              MR_Word check_hlds__unique_modes__FullInstMap0_84;

#line 166 "unique_modes.m"
              {
#line 166 "unique_modes.m"
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73, &check_hlds__unique_modes__FullInstMap0_84);
              }
#line 167 "unique_modes.m"
              {
#line 167 "unique_modes.m"
                check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_84);
              }
#line 171 "unique_modes.m"
              if (check_hlds__unique_modes__succeeded)
#line 168 "unique_modes.m"
                {
#line 168 "unique_modes.m"
                  MR_Word check_hlds__unique_modes__AllVars_85;
#line 168 "unique_modes.m"
                  MR_Word check_hlds__unique_modes__NondetLiveVars_86;

#line 168 "unique_modes.m"
                  {
#line 168 "unique_modes.m"
                    hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_84, &check_hlds__unique_modes__AllVars_85);
                  }
#line 169 "unique_modes.m"
                  {
#line 169 "unique_modes.m"
                    check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_85, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73, &check_hlds__unique_modes__NondetLiveVars_86);
                  }
#line 170 "unique_modes.m"
                  {
#line 170 "unique_modes.m"
                    check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_86, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41);
                  }
#line 168 "unique_modes.m"
                }
#line 171 "unique_modes.m"
              else
#line 172 "unique_modes.m"
                check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73;
#line 165 "unique_modes.m"
            }
#line 873 "unique_modes.m"
          else
#line 873 "unique_modes.m"
            check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73;
#line 873 "unique_modes.m"
        }
#line 866 "unique_modes.m"
        break;
#line 866 "unique_modes.m"
      case (MR_Integer) 1:
#line 863 "unique_modes.m"
        {
#line 863 "unique_modes.m"
          MR_Word check_hlds__unique_modes__InstMap_70;

#line 864 "unique_modes.m"
          {
#line 864 "unique_modes.m"
            hlds__instmap__init_unreachable_1_p_0(&check_hlds__unique_modes__InstMap_70);
          }
#line 865 "unique_modes.m"
          {
#line 865 "unique_modes.m"
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_70, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41);
          }
#line 863 "unique_modes.m"
        }
#line 866 "unique_modes.m"
        break;
#line 866 "unique_modes.m"
    }
#line 772 "unique_modes.m"
    {
#line 772 "unique_modes.m"
      hlds__hlds_pred__proc_info_get_mode_errors_2_p_0(check_hlds__unique_modes__ProcInfo_18, &check_hlds__unique_modes__ModeErrors_23);
    }
#line 783 "unique_modes.m"
    if ((check_hlds__unique_modes__ModeErrors_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 784 "unique_modes.m"
      check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41;
#line 783 "unique_modes.m"
    else
#line 774 "unique_modes.m"
      {
#line 774 "unique_modes.m"
        MR_Word check_hlds__unique_modes__WaitingVars_26;
#line 774 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_27;
#line 774 "unique_modes.m"
        MR_Word check_hlds__unique_modes__ArgInsts_28;
#line 774 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_42_42;

#line 776 "unique_modes.m"
        {
#line 776 "unique_modes.m"
          check_hlds__unique_modes__WaitingVars_26 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unique_modes__ArgVars_10);
        }
#line 777 "unique_modes.m"
        {
#line 777 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__unique_modes__InstMap_27);
        }
#line 778 "unique_modes.m"
        {
#line 778 "unique_modes.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__unique_modes__InstMap_27, check_hlds__unique_modes__ArgVars_10, &check_hlds__unique_modes__ArgInsts_28);
        }
#line 780 "unique_modes.m"
        {
#line 780 "unique_modes.m"
          check_hlds__unique_modes__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 780 "unique_modes.m"
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 780 "unique_modes.m"
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_42_42, 1) = ((MR_Box) (check_hlds__unique_modes__ArgVars_10));
#line 780 "unique_modes.m"
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_42_42, 2) = ((MR_Box) (check_hlds__unique_modes__ArgInsts_28));
#line 780 "unique_modes.m"
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_42_42, 3) = ((MR_Box) (check_hlds__unique_modes__PredId_8));
#line 780 "unique_modes.m"
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_42_42, 4) = ((MR_Box) (check_hlds__unique_modes__ProcId0_9));
#line 780 "unique_modes.m"
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_42_42, 5) = ((MR_Box) (check_hlds__unique_modes__ModeErrors_23));
#line 780 "unique_modes.m"
        }
#line 779 "unique_modes.m"
        {
#line 779 "unique_modes.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__unique_modes__WaitingVars_26, check_hlds__unique_modes__V_42_42, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43);
        }
#line 774 "unique_modes.m"
      }
#line 788 "unique_modes.m"
    {
#line 788 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__unique_modes__Errors_29);
    }
#line 789 "unique_modes.m"
    {
#line 789 "unique_modes.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__unique_modes__OldErrors_14, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44);
    }
#line 790 "unique_modes.m"
    {
#line 790 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44, &check_hlds__unique_modes__MayChangeCalledProc_30);
    }
#line 794 "unique_modes.m"
    if ((check_hlds__unique_modes__Errors_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 792 "unique_modes.m"
      {
#line 793 "unique_modes.m"
        *check_hlds__unique_modes__ProcId_12 = check_hlds__unique_modes__ProcId0_9;
#line 792 "unique_modes.m"
        *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44;
#line 792 "unique_modes.m"
      }
#line 794 "unique_modes.m"
    else
#line 803 "unique_modes.m"
#line 803 "unique_modes.m"
      switch (check_hlds__unique_modes__MayChangeCalledProc_30) {
#line 803 "unique_modes.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 803 "unique_modes.m"
        case (MR_Integer) 0:
#line 804 "unique_modes.m"
          {
#line 804 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Determinism_34;
#line 804 "unique_modes.m"
            MR_Word check_hlds__unique_modes__NewArgVars_35;
#line 804 "unique_modes.m"
            MR_Word check_hlds__unique_modes__ExtraGoals_36;
#line 804 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45;
#line 804 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_46_46;

#line 815 "unique_modes.m"
            {
#line 815 "unique_modes.m"
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_15, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45);
            }
#line 816 "unique_modes.m"
            {
#line 816 "unique_modes.m"
              hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(check_hlds__unique_modes__ProcInfo_18, &check_hlds__unique_modes__Determinism_34);
            }
#line 817 "unique_modes.m"
            {
#line 817 "unique_modes.m"
              check_hlds__unique_modes__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 817 "unique_modes.m"
              MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_46_46, 0) = ((MR_Box) (check_hlds__unique_modes__Determinism_34));
#line 817 "unique_modes.m"
            }
#line 817 "unique_modes.m"
            {
#line 817 "unique_modes.m"
              check_hlds__modecheck_call__modecheck_call_pred_10_p_0(check_hlds__unique_modes__PredId_8, check_hlds__unique_modes__V_46_46, check_hlds__unique_modes__ProcId0_9, check_hlds__unique_modes__ProcId_12, check_hlds__unique_modes__ArgVars_10, &check_hlds__unique_modes__NewArgVars_35, check_hlds__unique_modes__GoalInfo_11, &check_hlds__unique_modes__ExtraGoals_36, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38);
            }
#line 821 "unique_modes.m"
            {
#line 821 "unique_modes.m"
              check_hlds__unique_modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[1], ((MR_Box) (check_hlds__unique_modes__NewArgVars_35)), ((MR_Box) (check_hlds__unique_modes__ArgVars_10)));
            }
#line 821 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 822 "unique_modes.m"
              check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__ExtraGoals_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 824 "unique_modes.m"
              {
#line 824 "unique_modes.m"
              }
#line 825 "unique_modes.m"
            else
#line 830 "unique_modes.m"
              {
#line 830 "unique_modes.m"
                {
#line 830 "unique_modes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call\'/7", (MR_String) "call to implied mode\?");
#line 830 "unique_modes.m"
                  return;
                }
#line 830 "unique_modes.m"
              }
#line 804 "unique_modes.m"
          }
#line 803 "unique_modes.m"
          break;
#line 803 "unique_modes.m"
        case (MR_Integer) 1:
#line 797 "unique_modes.m"
          {
#line 797 "unique_modes.m"
            MR_Word check_hlds__unique_modes__AllErrors_33;

#line 800 "unique_modes.m"
            *check_hlds__unique_modes__ProcId_12 = check_hlds__unique_modes__ProcId0_9;
#line 801 "unique_modes.m"
            {
#line 801 "unique_modes.m"
              mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__unique_modes__OldErrors_14, check_hlds__unique_modes__Errors_29, &check_hlds__unique_modes__AllErrors_33);
            }
#line 802 "unique_modes.m"
            {
#line 802 "unique_modes.m"
              check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__unique_modes__AllErrors_33, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38);
#line 802 "unique_modes.m"
              return;
            }
#line 797 "unique_modes.m"
          }
#line 803 "unique_modes.m"
          break;
#line 803 "unique_modes.m"
      }
#line 755 "unique_modes.m"
  }
#line 751 "unique_modes.m"
}

#line 702 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_p_0(
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalType_12,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Outer_13,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Inner_14,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__MaybeOutputVars_15,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__MainGoal0_16,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__OrElseGoals0_17,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__OrElseInners_18,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_19,
#line 702 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_20,
#line 702 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_34,
#line 702 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35)
#line 702 "unique_modes.m"
{
#line 711 "unique_modes.m"
  {
#line 711 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 711 "unique_modes.m"
    MR_Word check_hlds__unique_modes__MainGoal_22;
#line 711 "unique_modes.m"
    MR_Word check_hlds__unique_modes__OrElseGoals_23;
#line 711 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ShortHand_33;
#line 711 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38;
#line 711 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49;

#line 712 "unique_modes.m"
    {
#line 712 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "atomic_goal", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38);
    }
#line 717 "unique_modes.m"
    if ((check_hlds__unique_modes__OrElseGoals0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "unique_modes.m"
      {
#line 715 "unique_modes.m"
        {
#line 715 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__MainGoal0_16, &check_hlds__unique_modes__MainGoal_22, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49);
        }
#line 716 "unique_modes.m"
        check_hlds__unique_modes__OrElseGoals_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 714 "unique_modes.m"
      }
#line 717 "unique_modes.m"
    else
#line 718 "unique_modes.m"
      {
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__NonLocals_26;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Determinism_27;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals_30;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_31;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__ArmInstMaps_32;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_70;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_71;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap0_73;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_76;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_77;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_78;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal0_85;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals0_86;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal_89;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals_90;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_91;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_92;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap0_94;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_97;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_98;
#line 718 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_99;
#line 725 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_53_53;
#line 725 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_28_28;

#line 723 "unique_modes.m"
        {
#line 723 "unique_modes.m"
          check_hlds__unique_modes__NonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_19);
        }
#line 724 "unique_modes.m"
        {
#line 724 "unique_modes.m"
          check_hlds__unique_modes__Determinism_27 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_19);
        }
#line 725 "unique_modes.m"
        {
#line 725 "unique_modes.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Determinism_27, &check_hlds__unique_modes__V_28_28, &check_hlds__unique_modes__V_53_53);
        }
#line 725 "unique_modes.m"
        check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__V_53_53);
#line 729 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 726 "unique_modes.m"
          {
#line 726 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40;
#line 726 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41;
#line 726 "unique_modes.m"
            MR_Word check_hlds__unique_modes__FullInstMap0_56;

#line 726 "unique_modes.m"
            {
#line 726 "unique_modes.m"
              check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_26, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40);
            }
#line 166 "unique_modes.m"
            {
#line 166 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__FullInstMap0_56);
            }
#line 167 "unique_modes.m"
            {
#line 167 "unique_modes.m"
              check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_56);
            }
#line 171 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 168 "unique_modes.m"
              {
#line 168 "unique_modes.m"
                MR_Word check_hlds__unique_modes__AllVars_57;
#line 168 "unique_modes.m"
                MR_Word check_hlds__unique_modes__NondetLiveVars_58;

#line 168 "unique_modes.m"
                {
#line 168 "unique_modes.m"
                  hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_56, &check_hlds__unique_modes__AllVars_57);
                }
#line 169 "unique_modes.m"
                {
#line 169 "unique_modes.m"
                  check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_57, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__NondetLiveVars_58);
                }
#line 170 "unique_modes.m"
                {
#line 170 "unique_modes.m"
                  check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_58, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41);
                }
#line 168 "unique_modes.m"
              }
#line 171 "unique_modes.m"
            else
#line 172 "unique_modes.m"
              check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40;
#line 728 "unique_modes.m"
            {
#line 728 "unique_modes.m"
              check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_26, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42);
            }
#line 726 "unique_modes.m"
          }
#line 729 "unique_modes.m"
        else
#line 729 "unique_modes.m"
          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38;
#line 1004 "unique_modes.m"
        {
#line 1004 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__unique_modes__InstMap0_73);
        }
#line 1008 "unique_modes.m"
        {
#line 1008 "unique_modes.m"
          check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__unique_modes__MainGoal0_16, check_hlds__unique_modes__Determinism_27, check_hlds__unique_modes__NonLocals_26, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_76);
        }
#line 1009 "unique_modes.m"
        {
#line 1009 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__MainGoal0_16, &check_hlds__unique_modes__MainGoal_22, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_76, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_77);
        }
#line 1010 "unique_modes.m"
        {
#line 1010 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_77, &check_hlds__unique_modes__InstMap_70);
        }
#line 1011 "unique_modes.m"
        {
#line 1011 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_73, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_77, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_78);
        }
#line 1002 "unique_modes.m"
        check_hlds__unique_modes__Goal0_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__OrElseGoals0_17, (MR_Integer) 0)));
#line 1002 "unique_modes.m"
        check_hlds__unique_modes__Goals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__OrElseGoals0_17, (MR_Integer) 1)));
#line 1004 "unique_modes.m"
        {
#line 1004 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_78, &check_hlds__unique_modes__InstMap0_94);
        }
#line 1008 "unique_modes.m"
        {
#line 1008 "unique_modes.m"
          check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__unique_modes__Goal0_85, check_hlds__unique_modes__Determinism_27, check_hlds__unique_modes__NonLocals_26, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_78, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_97);
        }
#line 1009 "unique_modes.m"
        {
#line 1009 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Goal0_85, &check_hlds__unique_modes__Goal_89, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_97, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_98);
        }
#line 1010 "unique_modes.m"
        {
#line 1010 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_98, &check_hlds__unique_modes__InstMap_91);
        }
#line 1011 "unique_modes.m"
        {
#line 1011 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_94, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_98, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_99);
        }
#line 1012 "unique_modes.m"
        {
#line 1012 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_disj_7_p_0(check_hlds__unique_modes__Goals0_86, check_hlds__unique_modes__Determinism_27, check_hlds__unique_modes__NonLocals_26, &check_hlds__unique_modes__Goals_90, &check_hlds__unique_modes__InstMaps_92, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_99, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43);
        }
#line 1003 "unique_modes.m"
        {
#line 1003 "unique_modes.m"
          check_hlds__unique_modes__OrElseGoals_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__OrElseGoals_23, 0) = ((MR_Box) (check_hlds__unique_modes__Goal_89));
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__OrElseGoals_23, 1) = ((MR_Box) (check_hlds__unique_modes__Goals_90));
#line 1003 "unique_modes.m"
        }
#line 1003 "unique_modes.m"
        {
#line 1003 "unique_modes.m"
          check_hlds__unique_modes__InstMaps_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__InstMaps_71, 0) = ((MR_Box) (check_hlds__unique_modes__InstMap_91));
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__InstMaps_71, 1) = ((MR_Box) (check_hlds__unique_modes__InstMaps_92));
#line 1003 "unique_modes.m"
        }
#line 1003 "unique_modes.m"
        {
#line 1003 "unique_modes.m"
          check_hlds__unique_modes__Goals_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals_30, 0) = ((MR_Box) (check_hlds__unique_modes__MainGoal_22));
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals_30, 1) = ((MR_Box) (check_hlds__unique_modes__OrElseGoals_23));
#line 1003 "unique_modes.m"
        }
#line 1003 "unique_modes.m"
        {
#line 1003 "unique_modes.m"
          check_hlds__unique_modes__InstMaps_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__InstMaps_31, 0) = ((MR_Box) (check_hlds__unique_modes__InstMap_70));
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__InstMaps_31, 1) = ((MR_Box) (check_hlds__unique_modes__InstMaps_71));
#line 1003 "unique_modes.m"
        }
#line 741 "unique_modes.m"
        {
#line 741 "unique_modes.m"
          hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__unique_modes__Goals_30, check_hlds__unique_modes__InstMaps_31, &check_hlds__unique_modes__ArmInstMaps_32);
        }
#line 742 "unique_modes.m"
        {
#line 742 "unique_modes.m"
          hlds__instmap__instmap_merge_5_p_0(check_hlds__unique_modes__NonLocals_26, check_hlds__unique_modes__ArmInstMaps_32, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49);
        }
#line 718 "unique_modes.m"
      }
#line 744 "unique_modes.m"
    {
#line 744 "unique_modes.m"
      check_hlds__unique_modes__ShortHand_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 744 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_33, 0) = ((MR_Box) (check_hlds__unique_modes__GoalType_12));
#line 744 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_33, 1) = ((MR_Box) (check_hlds__unique_modes__Outer_13));
#line 744 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_33, 2) = ((MR_Box) (check_hlds__unique_modes__Inner_14));
#line 744 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_33, 3) = ((MR_Box) (check_hlds__unique_modes__MaybeOutputVars_15));
#line 744 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_33, 4) = ((MR_Box) (check_hlds__unique_modes__MainGoal_22));
#line 744 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_33, 5) = ((MR_Box) (check_hlds__unique_modes__OrElseGoals_23));
#line 744 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_33, 6) = ((MR_Box) (check_hlds__unique_modes__OrElseInners_18));
#line 744 "unique_modes.m"
    }
#line 746 "unique_modes.m"
    {
#line 746 "unique_modes.m"
      MR_Word base;
#line 746 "unique_modes.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "unique_modes.m"
      *check_hlds__unique_modes__GoalExpr_20 = base;
#line 746 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 746 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__ShortHand_33));
#line 746 "unique_modes.m"
    }
#line 747 "unique_modes.m"
    {
#line 747 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "atomic_goal", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35);
#line 747 "unique_modes.m"
      return;
    }
#line 711 "unique_modes.m"
  }
#line 702 "unique_modes.m"
}

#line 656 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_switch_7_p_0(
#line 656 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Var_8,
#line 656 "unique_modes.m"
  MR_Word check_hlds__unique_modes__CanFail_9,
#line 656 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Cases0_10,
#line 656 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_11,
#line 656 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_12,
#line 656 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_21,
#line 656 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22)
#line 656 "unique_modes.m"
{
#line 661 "unique_modes.m"
  {
#line 661 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 661 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Cases_14;
#line 661 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25;
#line 661 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29;

#line 662 "unique_modes.m"
    {
#line 662 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "switch", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_21, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25);
    }
#line 668 "unique_modes.m"
    if ((check_hlds__unique_modes__Cases0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "unique_modes.m"
      {
#line 664 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_15;

#line 665 "unique_modes.m"
        check_hlds__unique_modes__Cases_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 666 "unique_modes.m"
        {
#line 666 "unique_modes.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__unique_modes__InstMap_15);
        }
#line 667 "unique_modes.m"
        {
#line 667 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_15, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29);
        }
#line 664 "unique_modes.m"
      }
#line 668 "unique_modes.m"
    else
#line 669 "unique_modes.m"
      {
#line 669 "unique_modes.m"
        MR_Word check_hlds__unique_modes__NonLocals_18;
#line 669 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_19;
#line 669 "unique_modes.m"
        MR_Word check_hlds__unique_modes__ArmInstMaps_20;
#line 669 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26;

#line 670 "unique_modes.m"
        {
#line 670 "unique_modes.m"
          check_hlds__unique_modes__NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_11);
        }
#line 671 "unique_modes.m"
        {
#line 671 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(check_hlds__unique_modes__Cases0_10, check_hlds__unique_modes__Var_8, &check_hlds__unique_modes__Cases_14, &check_hlds__unique_modes__InstMaps_19, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26);
        }
#line 672 "unique_modes.m"
        {
#line 672 "unique_modes.m"
          hlds__instmap__make_arm_instmaps_for_cases_3_p_0(check_hlds__unique_modes__Cases_14, check_hlds__unique_modes__InstMaps_19, &check_hlds__unique_modes__ArmInstMaps_20);
        }
#line 673 "unique_modes.m"
        {
#line 673 "unique_modes.m"
          hlds__instmap__instmap_merge_5_p_0(check_hlds__unique_modes__NonLocals_18, check_hlds__unique_modes__ArmInstMaps_20, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29);
        }
#line 669 "unique_modes.m"
      }
#line 675 "unique_modes.m"
    {
#line 675 "unique_modes.m"
      MR_Word base;
#line 675 "unique_modes.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 675 "unique_modes.m"
      *check_hlds__unique_modes__GoalExpr_12 = base;
#line 675 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 675 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Var_8));
#line 675 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__CanFail_9));
#line 675 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__unique_modes__Cases_14));
#line 675 "unique_modes.m"
    }
#line 676 "unique_modes.m"
    {
#line 676 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "switch", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22);
#line 676 "unique_modes.m"
      return;
    }
#line 661 "unique_modes.m"
  }
#line 656 "unique_modes.m"
}

#line 501 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_scope_6_p_0(
#line 501 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Reason_7,
#line 501 "unique_modes.m"
  MR_Word check_hlds__unique_modes__SubGoal0_8,
#line 501 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_9,
#line 501 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_10,
#line 501 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_41,
#line 501 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42)
#line 501 "unique_modes.m"
{
#line 508 "unique_modes.m"
  {
#line 508 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;

#line 508 "unique_modes.m"
#line 508 "unique_modes.m"
    switch (MR_tag((MR_Word) check_hlds__unique_modes__Reason_7)) {
#line 508 "unique_modes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 508 "unique_modes.m"
      case (MR_Integer) 0:
#line 508 "unique_modes.m"
      case (MR_Integer) 1:
#line 508 "unique_modes.m"
      case (MR_Integer) 2:
#line 576 "unique_modes.m"
        {
#line 576 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45;
#line 576 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46;
#line 576 "unique_modes.m"
          MR_Word check_hlds__unique_modes__SubGoal_97;

#line 577 "unique_modes.m"
          {
#line 577 "unique_modes.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_41, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45);
          }
#line 578 "unique_modes.m"
          {
#line 578 "unique_modes.m"
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_8, &check_hlds__unique_modes__SubGoal_97, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46);
          }
#line 579 "unique_modes.m"
          {
#line 579 "unique_modes.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42);
          }
#line 580 "unique_modes.m"
          {
#line 580 "unique_modes.m"
            MR_Word base;
#line 580 "unique_modes.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 580 "unique_modes.m"
            *check_hlds__unique_modes__GoalExpr_10 = base;
#line 580 "unique_modes.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 580 "unique_modes.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Reason_7));
#line 580 "unique_modes.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal_97));
#line 580 "unique_modes.m"
          }
#line 576 "unique_modes.m"
        }
#line 508 "unique_modes.m"
        break;
#line 508 "unique_modes.m"
      case (MR_Integer) 3:
#line 508 "unique_modes.m"
#line 508 "unique_modes.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Reason_7, (MR_Integer) 0)))) {
#line 508 "unique_modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 508 "unique_modes.m"
          case (MR_Integer) 0:
#line 508 "unique_modes.m"
          case (MR_Integer) 1:
#line 508 "unique_modes.m"
          case (MR_Integer) 2:
#line 508 "unique_modes.m"
          case (MR_Integer) 3:
#line 508 "unique_modes.m"
          case (MR_Integer) 4:
#line 508 "unique_modes.m"
          case (MR_Integer) 7:
#line 576 "unique_modes.m"
            {
#line 576 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45;
#line 576 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46;
#line 576 "unique_modes.m"
              MR_Word check_hlds__unique_modes__SubGoal_97;

#line 577 "unique_modes.m"
              {
#line 577 "unique_modes.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_41, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45);
              }
#line 578 "unique_modes.m"
              {
#line 578 "unique_modes.m"
                check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_8, &check_hlds__unique_modes__SubGoal_97, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46);
              }
#line 579 "unique_modes.m"
              {
#line 579 "unique_modes.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42);
              }
#line 580 "unique_modes.m"
              {
#line 580 "unique_modes.m"
                MR_Word base;
#line 580 "unique_modes.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 580 "unique_modes.m"
                *check_hlds__unique_modes__GoalExpr_10 = base;
#line 580 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 580 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Reason_7));
#line 580 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal_97));
#line 580 "unique_modes.m"
              }
#line 576 "unique_modes.m"
            }
#line 508 "unique_modes.m"
            break;
#line 508 "unique_modes.m"
          case (MR_Integer) 5:
#line 522 "unique_modes.m"
            {
#line 522 "unique_modes.m"
              MR_Word check_hlds__unique_modes__TermVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Reason_7, (MR_Integer) 1)));
#line 522 "unique_modes.m"
              MR_Word check_hlds__unique_modes__FGT_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Reason_7, (MR_Integer) 2)));

#line 554 "unique_modes.m"
#line 554 "unique_modes.m"
              switch (check_hlds__unique_modes__FGT_21) {
#line 554 "unique_modes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 554 "unique_modes.m"
                case (MR_Integer) 1:
#line 524 "unique_modes.m"
                  {
#line 524 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__LiveTermVar_22;
#line 524 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62;
#line 524 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_65_65;

#line 525 "unique_modes.m"
                    {
#line 525 "unique_modes.m"
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "from_ground_term_construct scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_41, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62);
                    }
#line 527 "unique_modes.m"
                    {
#line 527 "unique_modes.m"
                      check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62, check_hlds__unique_modes__TermVar_20, &check_hlds__unique_modes__LiveTermVar_22);
                    }
#line 547 "unique_modes.m"
#line 547 "unique_modes.m"
                    switch (check_hlds__unique_modes__LiveTermVar_22) {
#line 547 "unique_modes.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 547 "unique_modes.m"
                      case (MR_Integer) 1:
#line 548 "unique_modes.m"
                        {
#line 550 "unique_modes.m"
                          *check_hlds__unique_modes__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__unique_modes_scalar_common_3[1]);
#line 548 "unique_modes.m"
                          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_65_65 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62;
#line 548 "unique_modes.m"
                        }
#line 547 "unique_modes.m"
                        break;
#line 547 "unique_modes.m"
                      case (MR_Integer) 0:
#line 529 "unique_modes.m"
                        {
#line 529 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__SubGoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__SubGoal0_8, (MR_Integer) 1)));
#line 529 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__InstMapDelta_25;
#line 534 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__SubGoal0_8, (MR_Integer) 0)));
#line 543 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__TermVarInst_26;

#line 535 "unique_modes.m"
                          {
#line 535 "unique_modes.m"
                            check_hlds__unique_modes__InstMapDelta_25 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__unique_modes__SubGoalInfo_24);
                          }
#line 537 "unique_modes.m"
                          {
#line 537 "unique_modes.m"
                            check_hlds__unique_modes__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__unique_modes__InstMapDelta_25, check_hlds__unique_modes__TermVar_20, &check_hlds__unique_modes__TermVarInst_26);
                          }
#line 543 "unique_modes.m"
                          if (check_hlds__unique_modes__succeeded)
#line 540 "unique_modes.m"
                            {
#line 540 "unique_modes.m"
                              MR_Word check_hlds__unique_modes__InstMap_27;
#line 540 "unique_modes.m"
                              MR_Word check_hlds__unique_modes__InstMap0_84;

#line 540 "unique_modes.m"
                              {
#line 540 "unique_modes.m"
                                check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62, &check_hlds__unique_modes__InstMap0_84);
                              }
#line 541 "unique_modes.m"
                              {
#line 541 "unique_modes.m"
                                hlds__instmap__instmap_set_var_4_p_0(check_hlds__unique_modes__TermVar_20, check_hlds__unique_modes__TermVarInst_26, check_hlds__unique_modes__InstMap0_84, &check_hlds__unique_modes__InstMap_27);
                              }
#line 542 "unique_modes.m"
                              {
#line 542 "unique_modes.m"
                                check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_27, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_65_65);
                              }
#line 540 "unique_modes.m"
                            }
#line 543 "unique_modes.m"
                          else
#line 544 "unique_modes.m"
                            {
#line 544 "unique_modes.m"
                              {
#line 544 "unique_modes.m"
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", (MR_String) "bad InstMapDelta");
#line 544 "unique_modes.m"
                                return;
                              }
#line 544 "unique_modes.m"
                            }
#line 546 "unique_modes.m"
                          {
#line 546 "unique_modes.m"
                            MR_Word base;
#line 546 "unique_modes.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 546 "unique_modes.m"
                            *check_hlds__unique_modes__GoalExpr_10 = base;
#line 546 "unique_modes.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 546 "unique_modes.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Reason_7));
#line 546 "unique_modes.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal0_8));
#line 546 "unique_modes.m"
                          }
#line 529 "unique_modes.m"
                        }
#line 547 "unique_modes.m"
                        break;
#line 547 "unique_modes.m"
                    }
#line 552 "unique_modes.m"
                    {
#line 552 "unique_modes.m"
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "from_ground_term_construct scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_65_65, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42);
#line 552 "unique_modes.m"
                      return;
                    }
#line 524 "unique_modes.m"
                  }
#line 554 "unique_modes.m"
                  break;
#line 554 "unique_modes.m"
                case (MR_Integer) 2:
#line 554 "unique_modes.m"
                case (MR_Integer) 3:
#line 557 "unique_modes.m"
                  {
#line 557 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_55_55;
#line 557 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56_56;
#line 557 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__SubGoal_92;

#line 558 "unique_modes.m"
                    {
#line 558 "unique_modes.m"
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_41, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_55_55);
                    }
#line 559 "unique_modes.m"
                    {
#line 559 "unique_modes.m"
                      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_8, &check_hlds__unique_modes__SubGoal_92, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_55_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56_56);
                    }
#line 560 "unique_modes.m"
                    {
#line 560 "unique_modes.m"
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56_56, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42);
                    }
#line 561 "unique_modes.m"
                    {
#line 561 "unique_modes.m"
                      MR_Word base;
#line 561 "unique_modes.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 561 "unique_modes.m"
                      *check_hlds__unique_modes__GoalExpr_10 = base;
#line 561 "unique_modes.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 561 "unique_modes.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Reason_7));
#line 561 "unique_modes.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal_92));
#line 561 "unique_modes.m"
                    }
#line 557 "unique_modes.m"
                  }
#line 554 "unique_modes.m"
                  break;
#line 554 "unique_modes.m"
                case (MR_Integer) 0:
#line 563 "unique_modes.m"
                  {
#line 564 "unique_modes.m"
                    {
#line 564 "unique_modes.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", (MR_String) "from_ground_term_initial");
#line 564 "unique_modes.m"
                      return;
                    }
#line 563 "unique_modes.m"
                  }
#line 554 "unique_modes.m"
                  break;
#line 554 "unique_modes.m"
              }
#line 522 "unique_modes.m"
            }
#line 508 "unique_modes.m"
            break;
#line 508 "unique_modes.m"
          case (MR_Integer) 6:
#line 508 "unique_modes.m"
            {
#line 508 "unique_modes.m"
              MR_Word check_hlds__unique_modes__InstMap0_17;
#line 508 "unique_modes.m"
              MR_Word check_hlds__unique_modes__NonLocals_18;
#line 508 "unique_modes.m"
              MR_Word check_hlds__unique_modes__SubGoal_19;
#line 508 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_74_74;
#line 508 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_76_76;
#line 508 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_77_77;
#line 508 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_79_79;
#line 508 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_80_80;

#line 509 "unique_modes.m"
              {
#line 509 "unique_modes.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "trace scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_41, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_74_74);
              }
#line 510 "unique_modes.m"
              {
#line 510 "unique_modes.m"
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_74_74, &check_hlds__unique_modes__InstMap0_17);
              }
#line 511 "unique_modes.m"
              {
#line 511 "unique_modes.m"
                check_hlds__unique_modes__NonLocals_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_9);
              }
#line 515 "unique_modes.m"
              {
#line 515 "unique_modes.m"
                check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__unique_modes__NonLocals_18, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_74_74, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_76_76);
              }
#line 516 "unique_modes.m"
              {
#line 516 "unique_modes.m"
                check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_8, &check_hlds__unique_modes__SubGoal_19, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_76_76, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_77_77);
              }
#line 517 "unique_modes.m"
              {
#line 517 "unique_modes.m"
                check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__unique_modes__NonLocals_18, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_77_77, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_79_79);
              }
#line 518 "unique_modes.m"
              {
#line 518 "unique_modes.m"
                check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_17, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_80_80);
              }
#line 519 "unique_modes.m"
              {
#line 519 "unique_modes.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "trace scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_80_80, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42);
              }
#line 520 "unique_modes.m"
              {
#line 520 "unique_modes.m"
                MR_Word base;
#line 520 "unique_modes.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 520 "unique_modes.m"
                *check_hlds__unique_modes__GoalExpr_10 = base;
#line 520 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 520 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Reason_7));
#line 520 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal_19));
#line 520 "unique_modes.m"
              }
#line 508 "unique_modes.m"
            }
#line 508 "unique_modes.m"
            break;
#line 508 "unique_modes.m"
        }
#line 508 "unique_modes.m"
        break;
#line 508 "unique_modes.m"
    }
#line 508 "unique_modes.m"
  }
#line 501 "unique_modes.m"
}

#line 468 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_negation_5_p_0(
#line 468 "unique_modes.m"
  MR_Word check_hlds__unique_modes__SubGoal0_6,
#line 468 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_7,
#line 468 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 468 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_16,
#line 468 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17)
#line 468 "unique_modes.m"
{
#line 472 "unique_modes.m"
  {
#line 472 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstMap0_10;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__NonLocals_11;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__NonLocalsList_12;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__LiveNonLocals_13;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__LiveVars0_14;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__SubGoal_15;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_21;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_22_22;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29;
#line 472 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30;

#line 473 "unique_modes.m"
    {
#line 473 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "not", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20);
    }
#line 474 "unique_modes.m"
    {
#line 474 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20, &check_hlds__unique_modes__InstMap0_10);
    }
#line 480 "unique_modes.m"
    {
#line 480 "unique_modes.m"
      check_hlds__unique_modes__NonLocals_11 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_7);
    }
#line 481 "unique_modes.m"
    {
#line 481 "unique_modes.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unique_modes__NonLocals_11, &check_hlds__unique_modes__NonLocalsList_12);
    }
#line 482 "unique_modes.m"
    {
#line 482 "unique_modes.m"
      check_hlds__unique_modes__select_live_vars_3_p_0(check_hlds__unique_modes__NonLocalsList_12, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20, &check_hlds__unique_modes__LiveNonLocals_13);
    }
#line 483 "unique_modes.m"
    {
#line 483 "unique_modes.m"
      check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__LiveNonLocals_13, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_21);
    }
#line 488 "unique_modes.m"
    {
#line 488 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_live_vars_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__unique_modes__LiveVars0_14);
    }
#line 489 "unique_modes.m"
    {
#line 489 "unique_modes.m"
      check_hlds__unique_modes__V_22_22 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[0]);
    }
#line 489 "unique_modes.m"
    {
#line 489 "unique_modes.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__unique_modes__V_22_22, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23);
    }
#line 493 "unique_modes.m"
    {
#line 493 "unique_modes.m"
      check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unique_modes__NonLocals_11, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25);
    }
#line 494 "unique_modes.m"
    {
#line 494 "unique_modes.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_6, &check_hlds__unique_modes__SubGoal_15, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26);
    }
#line 495 "unique_modes.m"
    {
#line 495 "unique_modes.m"
      check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unique_modes__NonLocals_11, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28);
    }
#line 496 "unique_modes.m"
    {
#line 496 "unique_modes.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__unique_modes__LiveVars0_14, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29);
    }
#line 497 "unique_modes.m"
    {
#line 497 "unique_modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_10, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30);
    }
#line 498 "unique_modes.m"
    *check_hlds__unique_modes__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__unique_modes__SubGoal_15);
#line 499 "unique_modes.m"
    {
#line 499 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "not", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17);
#line 499 "unique_modes.m"
      return;
    }
#line 472 "unique_modes.m"
  }
#line 468 "unique_modes.m"
}

#line 394 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_p_0(
#line 394 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Vars_9,
#line 394 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Cond0_10,
#line 394 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Then0_11,
#line 394 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Else0_12,
#line 394 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_13,
#line 394 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_14,
#line 394 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_34,
#line 394 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35)
#line 394 "unique_modes.m"
{
#line 400 "unique_modes.m"
  {
#line 400 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__NonLocals_16;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__CondVars_17;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ThenVars_18;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ElseVars_19;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstMap0_20;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__CondVarList_21;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__CondLiveVars_22;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__CondInfo0_24;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__CondDeltaInstMap0_25;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ChangedVars_26;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Cond_27;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstMapCond_28;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Then_29;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstMapThen_30;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Else_31;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__InstMapElse_32;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__ArmInstMaps_33;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_48;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_50_50;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_51_51;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_52_52;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_53_53;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_54_54;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_55_55;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_57_57;
#line 400 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_60;
#line 436 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_23_23;

#line 401 "unique_modes.m"
    {
#line 401 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "if-then-else", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38);
    }
#line 402 "unique_modes.m"
    {
#line 402 "unique_modes.m"
      check_hlds__unique_modes__NonLocals_16 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_13);
    }
#line 403 "unique_modes.m"
    {
#line 403 "unique_modes.m"
      check_hlds__unique_modes__CondVars_17 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__unique_modes__Cond0_10);
    }
#line 404 "unique_modes.m"
    {
#line 404 "unique_modes.m"
      check_hlds__unique_modes__ThenVars_18 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__unique_modes__Then0_11);
    }
#line 405 "unique_modes.m"
    {
#line 405 "unique_modes.m"
      check_hlds__unique_modes__ElseVars_19 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__unique_modes__Else0_12);
    }
#line 406 "unique_modes.m"
    {
#line 406 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__unique_modes__InstMap0_20);
    }
#line 407 "unique_modes.m"
    {
#line 407 "unique_modes.m"
      check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__unique_modes__NonLocals_16, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40);
    }
#line 433 "unique_modes.m"
    {
#line 433 "unique_modes.m"
      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__ElseVars_19, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41);
    }
#line 434 "unique_modes.m"
    {
#line 434 "unique_modes.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unique_modes__CondVars_17, &check_hlds__unique_modes__CondVarList_21);
    }
#line 435 "unique_modes.m"
    {
#line 435 "unique_modes.m"
      check_hlds__unique_modes__select_live_vars_3_p_0(check_hlds__unique_modes__CondVarList_21, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__unique_modes__CondLiveVars_22);
    }
#line 436 "unique_modes.m"
    check_hlds__unique_modes__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Cond0_10, (MR_Integer) 0)));
#line 436 "unique_modes.m"
    check_hlds__unique_modes__CondInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Cond0_10, (MR_Integer) 1)));
#line 437 "unique_modes.m"
    {
#line 437 "unique_modes.m"
      check_hlds__unique_modes__CondDeltaInstMap0_25 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__unique_modes__CondInfo0_24);
    }
#line 438 "unique_modes.m"
    {
#line 438 "unique_modes.m"
      check_hlds__unique_modes__select_changed_inst_vars_4_p_0(check_hlds__unique_modes__CondLiveVars_22, check_hlds__unique_modes__CondDeltaInstMap0_25, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__unique_modes__ChangedVars_26);
    }
#line 440 "unique_modes.m"
    {
#line 440 "unique_modes.m"
      check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__ChangedVars_26, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42);
    }
#line 441 "unique_modes.m"
    {
#line 441 "unique_modes.m"
      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__ElseVars_19, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43);
    }
#line 443 "unique_modes.m"
    {
#line 443 "unique_modes.m"
      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__ThenVars_18, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44);
    }
#line 444 "unique_modes.m"
    {
#line 444 "unique_modes.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Cond0_10, &check_hlds__unique_modes__Cond_27, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45);
    }
#line 445 "unique_modes.m"
    {
#line 445 "unique_modes.m"
      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__ThenVars_18, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46);
    }
#line 446 "unique_modes.m"
    {
#line 446 "unique_modes.m"
      check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__unique_modes__NonLocals_16, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_48);
    }
#line 447 "unique_modes.m"
    {
#line 447 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__unique_modes__InstMapCond_28);
    }
#line 448 "unique_modes.m"
    {
#line 448 "unique_modes.m"
      check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__InstMapCond_28);
    }
#line 451 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 449 "unique_modes.m"
      {
#line 449 "unique_modes.m"
        {
#line 449 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Then0_11, &check_hlds__unique_modes__Then_29, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49);
        }
#line 450 "unique_modes.m"
        {
#line 450 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__unique_modes__InstMapThen_30);
        }
#line 449 "unique_modes.m"
      }
#line 451 "unique_modes.m"
    else
#line 455 "unique_modes.m"
      {
#line 455 "unique_modes.m"
        {
#line 455 "unique_modes.m"
          check_hlds__unique_modes__Then_29 = hlds__make_goal__true_goal_0_f_0();
        }
#line 456 "unique_modes.m"
        check_hlds__unique_modes__InstMapThen_30 = check_hlds__unique_modes__InstMapCond_28;
#line 455 "unique_modes.m"
        check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_48;
#line 455 "unique_modes.m"
      }
#line 458 "unique_modes.m"
    {
#line 458 "unique_modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_20, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_50_50);
    }
#line 459 "unique_modes.m"
    {
#line 459 "unique_modes.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Else0_12, &check_hlds__unique_modes__Else_31, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_50_50, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_51_51);
    }
#line 460 "unique_modes.m"
    {
#line 460 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_51_51, &check_hlds__unique_modes__InstMapElse_32);
    }
#line 461 "unique_modes.m"
    {
#line 461 "unique_modes.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_20, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_51_51, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_52_52);
    }
#line 462 "unique_modes.m"
    {
#line 462 "unique_modes.m"
      check_hlds__unique_modes__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_55_55, 0) = ((MR_Box) (check_hlds__unique_modes__Else_31));
#line 462 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "unique_modes.m"
    }
#line 462 "unique_modes.m"
    {
#line 462 "unique_modes.m"
      check_hlds__unique_modes__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_53_53, 0) = ((MR_Box) (check_hlds__unique_modes__Then_29));
#line 462 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_53_53, 1) = ((MR_Box) (check_hlds__unique_modes__V_55_55));
#line 462 "unique_modes.m"
    }
#line 462 "unique_modes.m"
    {
#line 462 "unique_modes.m"
      check_hlds__unique_modes__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_57_57, 0) = ((MR_Box) (check_hlds__unique_modes__InstMapElse_32));
#line 462 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "unique_modes.m"
    }
#line 462 "unique_modes.m"
    {
#line 462 "unique_modes.m"
      check_hlds__unique_modes__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_54_54, 0) = ((MR_Box) (check_hlds__unique_modes__InstMapThen_30));
#line 462 "unique_modes.m"
      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_54_54, 1) = ((MR_Box) (check_hlds__unique_modes__V_57_57));
#line 462 "unique_modes.m"
    }
#line 462 "unique_modes.m"
    {
#line 462 "unique_modes.m"
      hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__unique_modes__V_53_53, check_hlds__unique_modes__V_54_54, &check_hlds__unique_modes__ArmInstMaps_33);
    }
#line 464 "unique_modes.m"
    {
#line 464 "unique_modes.m"
      hlds__instmap__instmap_merge_5_p_0(check_hlds__unique_modes__NonLocals_16, check_hlds__unique_modes__ArmInstMaps_33, (MR_Integer) 1, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_60);
    }
#line 465 "unique_modes.m"
    {
#line 465 "unique_modes.m"
      MR_Word base;
#line 465 "unique_modes.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 465 "unique_modes.m"
      *check_hlds__unique_modes__GoalExpr_14 = base;
#line 465 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 465 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Vars_9));
#line 465 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__Cond_27));
#line 465 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__unique_modes__Then_29));
#line 465 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__unique_modes__Else_31));
#line 465 "unique_modes.m"
    }
#line 466 "unique_modes.m"
    {
#line 466 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "if-then-else", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_60, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35);
#line 466 "unique_modes.m"
      return;
    }
#line 400 "unique_modes.m"
  }
#line 394 "unique_modes.m"
}

#line 350 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_disj_5_p_0(
#line 350 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goals0_6,
#line 350 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_7,
#line 350 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 350 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_19,
#line 350 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20)
#line 350 "unique_modes.m"
{
#line 354 "unique_modes.m"
  {
#line 354 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 354 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Goals_10;
#line 354 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23;
#line 354 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_31;

#line 355 "unique_modes.m"
    {
#line 355 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "disj", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23);
    }
#line 361 "unique_modes.m"
    if ((check_hlds__unique_modes__Goals0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "unique_modes.m"
      {
#line 357 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_11;

#line 358 "unique_modes.m"
        check_hlds__unique_modes__Goals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 359 "unique_modes.m"
        {
#line 359 "unique_modes.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__unique_modes__InstMap_11);
        }
#line 360 "unique_modes.m"
        {
#line 360 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_11, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_31);
        }
#line 357 "unique_modes.m"
      }
#line 361 "unique_modes.m"
    else
#line 362 "unique_modes.m"
      {
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__NonLocals_14;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Determinism_15;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_17;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__ArmInstMaps_18;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal0_46;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals0_47;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal_50;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals_51;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap_52;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMaps_53;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap0_55;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_58;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_59;
#line 362 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_60;
#line 376 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_35_35;
#line 376 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_16_16;

#line 373 "unique_modes.m"
        {
#line 373 "unique_modes.m"
          check_hlds__unique_modes__NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_7);
        }
#line 374 "unique_modes.m"
        {
#line 374 "unique_modes.m"
          check_hlds__unique_modes__Determinism_15 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_7);
        }
#line 376 "unique_modes.m"
        {
#line 376 "unique_modes.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Determinism_15, &check_hlds__unique_modes__V_16_16, &check_hlds__unique_modes__V_35_35);
        }
#line 376 "unique_modes.m"
        check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__V_35_35);
#line 380 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 377 "unique_modes.m"
          {
#line 377 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25;
#line 377 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26;
#line 377 "unique_modes.m"
            MR_Word check_hlds__unique_modes__FullInstMap0_38;

#line 377 "unique_modes.m"
            {
#line 377 "unique_modes.m"
              check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_14, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25);
            }
#line 166 "unique_modes.m"
            {
#line 166 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__FullInstMap0_38);
            }
#line 167 "unique_modes.m"
            {
#line 167 "unique_modes.m"
              check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_38);
            }
#line 171 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 168 "unique_modes.m"
              {
#line 168 "unique_modes.m"
                MR_Word check_hlds__unique_modes__AllVars_39;
#line 168 "unique_modes.m"
                MR_Word check_hlds__unique_modes__NondetLiveVars_40;

#line 168 "unique_modes.m"
                {
#line 168 "unique_modes.m"
                  hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_38, &check_hlds__unique_modes__AllVars_39);
                }
#line 169 "unique_modes.m"
                {
#line 169 "unique_modes.m"
                  check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_39, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__NondetLiveVars_40);
                }
#line 170 "unique_modes.m"
                {
#line 170 "unique_modes.m"
                  check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_40, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26);
                }
#line 168 "unique_modes.m"
              }
#line 171 "unique_modes.m"
            else
#line 172 "unique_modes.m"
              check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25;
#line 379 "unique_modes.m"
            {
#line 379 "unique_modes.m"
              check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_14, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27);
            }
#line 377 "unique_modes.m"
          }
#line 380 "unique_modes.m"
        else
#line 380 "unique_modes.m"
          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_23;
#line 1002 "unique_modes.m"
        check_hlds__unique_modes__Goal0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals0_6, (MR_Integer) 0)));
#line 1002 "unique_modes.m"
        check_hlds__unique_modes__Goals0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals0_6, (MR_Integer) 1)));
#line 1004 "unique_modes.m"
        {
#line 1004 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__unique_modes__InstMap0_55);
        }
#line 1008 "unique_modes.m"
        {
#line 1008 "unique_modes.m"
          check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__unique_modes__Goal0_46, check_hlds__unique_modes__Determinism_15, check_hlds__unique_modes__NonLocals_14, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_58);
        }
#line 1009 "unique_modes.m"
        {
#line 1009 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Goal0_46, &check_hlds__unique_modes__Goal_50, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_58, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_59);
        }
#line 1010 "unique_modes.m"
        {
#line 1010 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_59, &check_hlds__unique_modes__InstMap_52);
        }
#line 1011 "unique_modes.m"
        {
#line 1011 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_59, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_60);
        }
#line 1012 "unique_modes.m"
        {
#line 1012 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_disj_7_p_0(check_hlds__unique_modes__Goals0_47, check_hlds__unique_modes__Determinism_15, check_hlds__unique_modes__NonLocals_14, &check_hlds__unique_modes__Goals_51, &check_hlds__unique_modes__InstMaps_53, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_60, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28);
        }
#line 1003 "unique_modes.m"
        {
#line 1003 "unique_modes.m"
          check_hlds__unique_modes__Goals_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals_10, 0) = ((MR_Box) (check_hlds__unique_modes__Goal_50));
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals_10, 1) = ((MR_Box) (check_hlds__unique_modes__Goals_51));
#line 1003 "unique_modes.m"
        }
#line 1003 "unique_modes.m"
        {
#line 1003 "unique_modes.m"
          check_hlds__unique_modes__InstMaps_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__InstMaps_17, 0) = ((MR_Box) (check_hlds__unique_modes__InstMap_52));
#line 1003 "unique_modes.m"
          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__InstMaps_17, 1) = ((MR_Box) (check_hlds__unique_modes__InstMaps_53));
#line 1003 "unique_modes.m"
        }
#line 388 "unique_modes.m"
        {
#line 388 "unique_modes.m"
          hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__unique_modes__Goals_10, check_hlds__unique_modes__InstMaps_17, &check_hlds__unique_modes__ArmInstMaps_18);
        }
#line 389 "unique_modes.m"
        {
#line 389 "unique_modes.m"
          hlds__instmap__instmap_merge_5_p_0(check_hlds__unique_modes__NonLocals_14, check_hlds__unique_modes__ArmInstMaps_18, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_31);
        }
#line 362 "unique_modes.m"
      }
#line 391 "unique_modes.m"
    {
#line 391 "unique_modes.m"
      MR_Word base;
#line 391 "unique_modes.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "unique_modes.m"
      *check_hlds__unique_modes__GoalExpr_8 = base;
#line 391 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 391 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Goals_10));
#line 391 "unique_modes.m"
    }
#line 392 "unique_modes.m"
    {
#line 392 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "disj", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_31, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20);
#line 392 "unique_modes.m"
      return;
    }
#line 354 "unique_modes.m"
  }
#line 350 "unique_modes.m"
}

#line 333 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_conj_5_p_0(
#line 333 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ConjType_6,
#line 333 "unique_modes.m"
  MR_Word check_hlds__unique_modes__Goals0_7,
#line 333 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 333 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_13,
#line 333 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14)
#line 333 "unique_modes.m"
{
#line 336 "unique_modes.m"
  {
#line 336 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 336 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Goals_10;
#line 336 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_17;
#line 336 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19;

#line 337 "unique_modes.m"
    {
#line 337 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "*conj", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_13, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_17);
    }
#line 342 "unique_modes.m"
    if ((check_hlds__unique_modes__Goals0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 339 "unique_modes.m"
      {
#line 341 "unique_modes.m"
        check_hlds__unique_modes__Goals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 339 "unique_modes.m"
        check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_17;
#line 339 "unique_modes.m"
      }
#line 342 "unique_modes.m"
    else
#line 343 "unique_modes.m"
      {
#line 343 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18;
#line 343 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goal0_28;
#line 343 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Goals0_29;
#line 892 "unique_modes.m"
        MR_Word check_hlds__unique_modes__ConjGoals_32;
#line 889 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_37_37;
#line 889 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_41_41;
#line 889 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_33_33;

#line 344 "unique_modes.m"
        {
#line 344 "unique_modes.m"
          check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(check_hlds__unique_modes__ConjType_6, check_hlds__unique_modes__Goals0_7, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_17, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18);
        }
#line 888 "unique_modes.m"
        check_hlds__unique_modes__Goal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals0_7, (MR_Integer) 0)));
#line 888 "unique_modes.m"
        check_hlds__unique_modes__Goals0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals0_7, (MR_Integer) 1)));
#line 889 "unique_modes.m"
        check_hlds__unique_modes__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_28, (MR_Integer) 0)));
#line 889 "unique_modes.m"
        check_hlds__unique_modes__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_28, (MR_Integer) 1)));
#line 889 "unique_modes.m"
        check_hlds__unique_modes__succeeded = ((((MR_tag((MR_Word) check_hlds__unique_modes__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 889 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 889 "unique_modes.m"
          {
#line 889 "unique_modes.m"
            check_hlds__unique_modes__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_37_37, (MR_Integer) 1)));
#line 889 "unique_modes.m"
            check_hlds__unique_modes__ConjGoals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__V_37_37, (MR_Integer) 2)));
#line 889 "unique_modes.m"
            check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__ConjType_6 == check_hlds__unique_modes__V_41_41);
#line 889 "unique_modes.m"
          }
#line 892 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 890 "unique_modes.m"
          {
#line 890 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Goals1_34;

#line 890 "unique_modes.m"
            {
#line 890 "unique_modes.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__unique_modes__ConjGoals_32, check_hlds__unique_modes__Goals0_29, &check_hlds__unique_modes__Goals1_34);
            }
#line 891 "unique_modes.m"
            {
#line 891 "unique_modes.m"
              check_hlds__unique_modes__unique_modes_check_conj_5_p_0(check_hlds__unique_modes__ConjType_6, check_hlds__unique_modes__Goals1_34, &check_hlds__unique_modes__Goals_10, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19);
            }
#line 890 "unique_modes.m"
          }
#line 892 "unique_modes.m"
        else
#line 893 "unique_modes.m"
          {
#line 893 "unique_modes.m"
            check_hlds__unique_modes__unique_modes_check_conj_2_6_p_0(check_hlds__unique_modes__ConjType_6, check_hlds__unique_modes__Goal0_28, check_hlds__unique_modes__Goals0_29, &check_hlds__unique_modes__Goals_10, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19);
          }
#line 343 "unique_modes.m"
      }
#line 347 "unique_modes.m"
    {
#line 347 "unique_modes.m"
      MR_Word base;
#line 347 "unique_modes.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 347 "unique_modes.m"
      *check_hlds__unique_modes__GoalExpr_8 = base;
#line 347 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 347 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__ConjType_6));
#line 347 "unique_modes.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__Goals_10));
#line 347 "unique_modes.m"
    }
#line 348 "unique_modes.m"
    {
#line 348 "unique_modes.m"
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "*conj", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14);
#line 348 "unique_modes.m"
      return;
    }
#line 336 "unique_modes.m"
  }
#line 333 "unique_modes.m"
}

#line 694 "unique_modes.m"
static MR_Box MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0_1(
#line 694 "unique_modes.m"
  MR_Box check_hlds__unique_modes__closure_arg,
#line 694 "unique_modes.m"
  MR_Box check_hlds__unique_modes__wrapper_arg_1)
#line 694 "unique_modes.m"
{
#line 694 "unique_modes.m"
  {
#line 694 "unique_modes.m"
    MR_Box check_hlds__unique_modes__wrapper_arg_2;
#line 694 "unique_modes.m"
    MR_Box check_hlds__unique_modes__closure = check_hlds__unique_modes__closure_arg;
#line 694 "unique_modes.m"
    MR_Word check_hlds__unique_modes__conv0_HeadVar__2_2;

#line 694 "unique_modes.m"
    {
#line 694 "unique_modes.m"
      check_hlds__unique_modes__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__unique_modes__wrapper_arg_1));
    }
#line 694 "unique_modes.m"
    check_hlds__unique_modes__wrapper_arg_2 = ((MR_Box) (check_hlds__unique_modes__conv0_HeadVar__2_2));
#line 694 "unique_modes.m"
    return check_hlds__unique_modes__wrapper_arg_2;
#line 694 "unique_modes.m"
  }
#line 694 "unique_modes.m"
}

#line 260 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(
#line 260 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalExpr0_6,
#line 260 "unique_modes.m"
  MR_Word check_hlds__unique_modes__GoalInfo0_7,
#line 260 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
#line 260 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55,
#line 260 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56)
#line 260 "unique_modes.m"
{
#line 267 "unique_modes.m"
  {
#line 267 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;

#line 267 "unique_modes.m"
#line 267 "unique_modes.m"
    switch (MR_tag((MR_Word) check_hlds__unique_modes__GoalExpr0_6)) {
#line 267 "unique_modes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 267 "unique_modes.m"
      case (MR_Integer) 0:
#line 304 "unique_modes.m"
        {
#line 304 "unique_modes.m"
          MR_Word check_hlds__unique_modes__SubGoal0_39 = (MR_Word) MR_body(((MR_Word) check_hlds__unique_modes__GoalExpr0_6), (MR_Integer) 0);

#line 305 "unique_modes.m"
          {
#line 305 "unique_modes.m"
            check_hlds__unique_modes__unique_modes_check_goal_negation_5_p_0(check_hlds__unique_modes__SubGoal0_39, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 305 "unique_modes.m"
            return;
          }
#line 304 "unique_modes.m"
        }
#line 267 "unique_modes.m"
        break;
#line 267 "unique_modes.m"
      case (MR_Integer) 1:
#line 267 "unique_modes.m"
        {
#line 267 "unique_modes.m"
          MR_Word check_hlds__unique_modes__LHS0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)));
#line 267 "unique_modes.m"
          MR_Word check_hlds__unique_modes__RHS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 267 "unique_modes.m"
          MR_Word check_hlds__unique_modes__Unification0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
#line 267 "unique_modes.m"
          MR_Word check_hlds__unique_modes__UnifyContext0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));
#line 267 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_222;
#line 267 "unique_modes.m"
          MR_Word check_hlds__unique_modes__V_223_223;
#line 267 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_224;
#line 267 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_225;
#line 267 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_24_226;
#line 267 "unique_modes.m"
          MR_Word check_hlds__unique_modes___UniModes0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));

#line 649 "unique_modes.m"
          {
#line 649 "unique_modes.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "unify", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_222);
          }
#line 650 "unique_modes.m"
          {
#line 650 "unique_modes.m"
            check_hlds__unique_modes__V_223_223 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 650 "unique_modes.m"
            MR_hl_field(MR_mktag(0), check_hlds__unique_modes__V_223_223, 0) = ((MR_Box) (check_hlds__unique_modes__UnifyContext0_14));
#line 650 "unique_modes.m"
          }
#line 650 "unique_modes.m"
          {
#line 650 "unique_modes.m"
            check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__unique_modes__V_223_223, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_222, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_224);
          }
#line 651 "unique_modes.m"
          {
#line 651 "unique_modes.m"
            check_hlds__modecheck_unify__modecheck_unification_8_p_0(check_hlds__unique_modes__LHS0_10, check_hlds__unique_modes__RHS0_11, check_hlds__unique_modes__Unification0_13, check_hlds__unique_modes__UnifyContext0_14, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_224, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_225);
          }
#line 653 "unique_modes.m"
          {
#line 653 "unique_modes.m"
            check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_225, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_24_226);
          }
#line 654 "unique_modes.m"
          {
#line 654 "unique_modes.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "unify", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_24_226, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 654 "unique_modes.m"
            return;
          }
#line 267 "unique_modes.m"
        }
#line 267 "unique_modes.m"
        break;
#line 267 "unique_modes.m"
      case (MR_Integer) 2:
#line 272 "unique_modes.m"
        {
#line 272 "unique_modes.m"
          MR_Word check_hlds__unique_modes__PredId0_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)));
#line 272 "unique_modes.m"
          MR_Integer check_hlds__unique_modes__ProcId0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 272 "unique_modes.m"
          MR_Word check_hlds__unique_modes__ArgVars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
#line 272 "unique_modes.m"
          MR_Word check_hlds__unique_modes__Builtin0_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
#line 272 "unique_modes.m"
          MR_Word check_hlds__unique_modes__MaybeUnifyContext0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));
#line 272 "unique_modes.m"
          MR_Word check_hlds__unique_modes__SymName0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 5)));
#line 272 "unique_modes.m"
          MR_String check_hlds__unique_modes__PredNameString_196;
#line 272 "unique_modes.m"
          MR_String check_hlds__unique_modes__CallString_197;
#line 272 "unique_modes.m"
          MR_Word check_hlds__unique_modes__CallId_198;
#line 272 "unique_modes.m"
          MR_Integer check_hlds__unique_modes__ProcId_199;
#line 272 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_202;
#line 272 "unique_modes.m"
          MR_Word check_hlds__unique_modes__V_203_203;
#line 272 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_204;
#line 272 "unique_modes.m"
          MR_Word check_hlds__unique_modes__V_205_205;
#line 272 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_32_206;
#line 272 "unique_modes.m"
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_33_207;

#line 629 "unique_modes.m"
          {
#line 629 "unique_modes.m"
            check_hlds__unique_modes__PredNameString_196 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__unique_modes__SymName0_20);
          }
#line 630 "unique_modes.m"
          {
#line 630 "unique_modes.m"
            mercury__string__append_3_p_2((MR_String) "call ", check_hlds__unique_modes__PredNameString_196, &check_hlds__unique_modes__CallString_197);
          }
#line 631 "unique_modes.m"
          {
#line 631 "unique_modes.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__unique_modes__CallString_197, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_202);
          }
#line 632 "unique_modes.m"
          {
#line 632 "unique_modes.m"
            check_hlds__mode_info__mode_info_get_call_id_3_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_202, check_hlds__unique_modes__PredId0_15, &check_hlds__unique_modes__CallId_198);
          }
#line 633 "unique_modes.m"
          {
#line 633 "unique_modes.m"
            check_hlds__unique_modes__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 633 "unique_modes.m"
            MR_hl_field(MR_mktag(0), check_hlds__unique_modes__V_205_205, 0) = ((MR_Box) (check_hlds__unique_modes__CallId_198));
#line 633 "unique_modes.m"
          }
#line 633 "unique_modes.m"
          {
#line 633 "unique_modes.m"
            check_hlds__unique_modes__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 633 "unique_modes.m"
            MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_203_203, 0) = ((MR_Box) (check_hlds__unique_modes__V_205_205));
#line 633 "unique_modes.m"
          }
#line 633 "unique_modes.m"
          {
#line 633 "unique_modes.m"
            check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__unique_modes__V_203_203, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_202, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_204);
          }
#line 635 "unique_modes.m"
          {
#line 635 "unique_modes.m"
            check_hlds__unique_modes__unique_modes_check_call_7_p_0(check_hlds__unique_modes__PredId0_15, check_hlds__unique_modes__ProcId0_16, check_hlds__unique_modes__ArgVars0_17, check_hlds__unique_modes__GoalInfo0_7, &check_hlds__unique_modes__ProcId_199, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_204, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_32_206);
          }
#line 637 "unique_modes.m"
          {
#line 637 "unique_modes.m"
            MR_Word base;
#line 637 "unique_modes.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 637 "unique_modes.m"
            *check_hlds__unique_modes__GoalExpr_8 = base;
#line 637 "unique_modes.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__unique_modes__PredId0_15));
#line 637 "unique_modes.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__unique_modes__ProcId_199));
#line 637 "unique_modes.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__unique_modes__ArgVars0_17));
#line 637 "unique_modes.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__unique_modes__Builtin0_18));
#line 637 "unique_modes.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__unique_modes__MaybeUnifyContext0_19));
#line 637 "unique_modes.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__unique_modes__SymName0_20));
#line 637 "unique_modes.m"
          }
#line 639 "unique_modes.m"
          {
#line 639 "unique_modes.m"
            check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_32_206, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_33_207);
          }
#line 640 "unique_modes.m"
          {
#line 640 "unique_modes.m"
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "call", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_33_207, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 640 "unique_modes.m"
            return;
          }
#line 272 "unique_modes.m"
        }
#line 267 "unique_modes.m"
        break;
#line 267 "unique_modes.m"
      case (MR_Integer) 3:
#line 267 "unique_modes.m"
#line 267 "unique_modes.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)))) {
#line 267 "unique_modes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 267 "unique_modes.m"
          case (MR_Integer) 0:
#line 278 "unique_modes.m"
            {
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__GenericCall0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__ArgModes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__Detism0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 5)));
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__ArgVars0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__GenericCallId_126;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__CallId_127;
#line 278 "unique_modes.m"
              MR_Integer check_hlds__unique_modes__ArgOffset_134;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_143;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__V_144_144;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_37_145;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_147;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_148;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__ModuleInfo_161;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__InitialInsts_162;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__InstVarSub_163;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__FinalInsts0_164;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__FinalInsts_165;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__NewArgVars_166;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__ExtraGoals_167;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_170;
#line 278 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_171;
#line 277 "unique_modes.m"
              MR_Word check_hlds__unique_modes__MaybeRegTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));
#line 594 "unique_modes.m"
              MR_Word check_hlds__unique_modes__V_152_152;
#line 594 "unique_modes.m"
              MR_Word check_hlds__unique_modes__V_128_128;

#line 590 "unique_modes.m"
              {
#line 590 "unique_modes.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "generic_call", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_143);
              }
#line 591 "unique_modes.m"
              {
#line 591 "unique_modes.m"
                hlds__hlds_goal__generic_call_to_id_2_p_0(check_hlds__unique_modes__GenericCall0_21, &check_hlds__unique_modes__GenericCallId_126);
              }
#line 592 "unique_modes.m"
              {
#line 592 "unique_modes.m"
                check_hlds__unique_modes__CallId_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 592 "unique_modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__CallId_127, 0) = ((MR_Box) (check_hlds__unique_modes__GenericCallId_126));
#line 592 "unique_modes.m"
              }
#line 593 "unique_modes.m"
              {
#line 593 "unique_modes.m"
                check_hlds__unique_modes__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 593 "unique_modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_144_144, 0) = ((MR_Box) (check_hlds__unique_modes__CallId_127));
#line 593 "unique_modes.m"
              }
#line 593 "unique_modes.m"
              {
#line 593 "unique_modes.m"
                check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__unique_modes__V_144_144, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_143, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_37_145);
              }
#line 602 "unique_modes.m"
#line 602 "unique_modes.m"
              switch (MR_tag((MR_Word) check_hlds__unique_modes__GenericCall0_21)) {
#line 602 "unique_modes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 602 "unique_modes.m"
                case (MR_Integer) 0:
#line 601 "unique_modes.m"
                  check_hlds__unique_modes__ArgOffset_134 = (MR_Integer) 1;
#line 602 "unique_modes.m"
                  break;
#line 602 "unique_modes.m"
                case (MR_Integer) 1:
#line 606 "unique_modes.m"
                  check_hlds__unique_modes__ArgOffset_134 = (MR_Integer) 0;
#line 602 "unique_modes.m"
                  break;
#line 602 "unique_modes.m"
                case (MR_Integer) 2:
#line 609 "unique_modes.m"
                  check_hlds__unique_modes__ArgOffset_134 = (MR_Integer) 0;
#line 602 "unique_modes.m"
                  break;
#line 602 "unique_modes.m"
                case (MR_Integer) 3:
#line 613 "unique_modes.m"
                  check_hlds__unique_modes__ArgOffset_134 = (MR_Integer) 0;
#line 602 "unique_modes.m"
                  break;
#line 602 "unique_modes.m"
              }
#line 844 "unique_modes.m"
              {
#line 844 "unique_modes.m"
                check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_37_145, &check_hlds__unique_modes__ModuleInfo_161);
              }
#line 845 "unique_modes.m"
              {
#line 845 "unique_modes.m"
                check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__unique_modes__ModuleInfo_161, check_hlds__unique_modes__ArgModes0_22, &check_hlds__unique_modes__InitialInsts_162);
              }
#line 846 "unique_modes.m"
              {
#line 846 "unique_modes.m"
                check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__unique_modes__ArgVars0_78, check_hlds__unique_modes__InitialInsts_162, check_hlds__unique_modes__ArgOffset_134, &check_hlds__unique_modes__InstVarSub_163, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_37_145, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_170);
              }
#line 848 "unique_modes.m"
              {
#line 848 "unique_modes.m"
                check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__unique_modes__ModuleInfo_161, check_hlds__unique_modes__ArgModes0_22, &check_hlds__unique_modes__FinalInsts0_164);
              }
#line 849 "unique_modes.m"
              {
#line 849 "unique_modes.m"
                parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__unique_modes__InstVarSub_163, check_hlds__unique_modes__FinalInsts0_164, &check_hlds__unique_modes__FinalInsts_165);
              }
#line 850 "unique_modes.m"
              {
#line 850 "unique_modes.m"
                check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__unique_modes__ArgVars0_78, check_hlds__unique_modes__InitialInsts_162, check_hlds__unique_modes__FinalInsts_165, check_hlds__unique_modes__ArgOffset_134, &check_hlds__unique_modes__NewArgVars_166, &check_hlds__unique_modes__ExtraGoals_167, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_170, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_171);
              }
#line 853 "unique_modes.m"
              {
#line 853 "unique_modes.m"
                check_hlds__unique_modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[1], ((MR_Box) (check_hlds__unique_modes__NewArgVars_166)), ((MR_Box) (check_hlds__unique_modes__ArgVars0_78)));
              }
#line 853 "unique_modes.m"
              if (check_hlds__unique_modes__succeeded)
#line 854 "unique_modes.m"
                check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__ExtraGoals_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 857 "unique_modes.m"
              if (check_hlds__unique_modes__succeeded)
#line 856 "unique_modes.m"
                {
#line 856 "unique_modes.m"
                }
#line 857 "unique_modes.m"
              else
#line 860 "unique_modes.m"
                {
#line 860 "unique_modes.m"
                  {
#line 860 "unique_modes.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
#line 860 "unique_modes.m"
                    return;
                  }
#line 860 "unique_modes.m"
                }
#line 594 "unique_modes.m"
              {
#line 594 "unique_modes.m"
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Detism0_24, &check_hlds__unique_modes__V_128_128, &check_hlds__unique_modes__V_152_152);
              }
#line 594 "unique_modes.m"
              check_hlds__unique_modes__succeeded = ((MR_Integer) 0 == check_hlds__unique_modes__V_152_152);
#line 3730 "check_hlds.unique_modes.c"
              if (check_hlds__unique_modes__succeeded)
#line 3732 "check_hlds.unique_modes.c"
                {
#line 3734 "check_hlds.unique_modes.c"
                  MR_Word check_hlds__unique_modes__InstMap_168;

#line 864 "unique_modes.m"
                  {
#line 864 "unique_modes.m"
                    hlds__instmap__init_unreachable_1_p_0(&check_hlds__unique_modes__InstMap_168);
                  }
#line 865 "unique_modes.m"
                  {
#line 865 "unique_modes.m"
                    check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_168, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_171, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_147);
                  }
#line 3747 "check_hlds.unique_modes.c"
                }
#line 3749 "check_hlds.unique_modes.c"
              else
#line 873 "unique_modes.m"
                {
#line 871 "unique_modes.m"
                  MR_Word check_hlds__unique_modes__V_178_178;
#line 871 "unique_modes.m"
                  MR_Word check_hlds__unique_modes__V_169_169;

#line 871 "unique_modes.m"
                  {
#line 871 "unique_modes.m"
                    parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Detism0_24, &check_hlds__unique_modes__V_169_169, &check_hlds__unique_modes__V_178_178);
                  }
#line 871 "unique_modes.m"
                  check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__V_178_178);
#line 873 "unique_modes.m"
                  if (check_hlds__unique_modes__succeeded)
#line 165 "unique_modes.m"
                    {
#line 165 "unique_modes.m"
                      MR_Word check_hlds__unique_modes__FullInstMap0_182;

#line 166 "unique_modes.m"
                      {
#line 166 "unique_modes.m"
                        check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_171, &check_hlds__unique_modes__FullInstMap0_182);
                      }
#line 167 "unique_modes.m"
                      {
#line 167 "unique_modes.m"
                        check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_182);
                      }
#line 171 "unique_modes.m"
                      if (check_hlds__unique_modes__succeeded)
#line 168 "unique_modes.m"
                        {
#line 168 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__AllVars_183;
#line 168 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__NondetLiveVars_184;

#line 168 "unique_modes.m"
                          {
#line 168 "unique_modes.m"
                            hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_182, &check_hlds__unique_modes__AllVars_183);
                          }
#line 169 "unique_modes.m"
                          {
#line 169 "unique_modes.m"
                            check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_183, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_171, &check_hlds__unique_modes__NondetLiveVars_184);
                          }
#line 170 "unique_modes.m"
                          {
#line 170 "unique_modes.m"
                            check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_184, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_171, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_147);
                          }
#line 168 "unique_modes.m"
                        }
#line 171 "unique_modes.m"
                      else
#line 172 "unique_modes.m"
                        check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_147 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_171;
#line 165 "unique_modes.m"
                    }
#line 873 "unique_modes.m"
                  else
#line 873 "unique_modes.m"
                    check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_147 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_171;
#line 873 "unique_modes.m"
                }
#line 617 "unique_modes.m"
              *check_hlds__unique_modes__GoalExpr_8 = check_hlds__unique_modes__GoalExpr0_6;
#line 619 "unique_modes.m"
              {
#line 619 "unique_modes.m"
                check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_147, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_148);
              }
#line 620 "unique_modes.m"
              {
#line 620 "unique_modes.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "generic_call", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_148, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 620 "unique_modes.m"
                return;
              }
#line 278 "unique_modes.m"
            }
#line 267 "unique_modes.m"
            break;
#line 267 "unique_modes.m"
          case (MR_Integer) 1:
#line 283 "unique_modes.m"
            {
#line 283 "unique_modes.m"
              MR_Word check_hlds__unique_modes__Attributes0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 283 "unique_modes.m"
              MR_Word check_hlds__unique_modes__Args0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));
#line 283 "unique_modes.m"
              MR_Word check_hlds__unique_modes__ExtraArgs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 5)));
#line 283 "unique_modes.m"
              MR_Word check_hlds__unique_modes__MaybeTraceRuntimeCond0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 6)));
#line 283 "unique_modes.m"
              MR_Word check_hlds__unique_modes__PragmaCode0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 7)));
#line 283 "unique_modes.m"
              MR_Word check_hlds__unique_modes__PredId0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
#line 283 "unique_modes.m"
              MR_Integer check_hlds__unique_modes__ProcId0_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
#line 283 "unique_modes.m"
              MR_Word check_hlds__unique_modes__CallId_98;
#line 283 "unique_modes.m"
              MR_Word check_hlds__unique_modes__ArgVars_99;
#line 283 "unique_modes.m"
              MR_Integer check_hlds__unique_modes__ProcId_100;
#line 283 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_103;
#line 283 "unique_modes.m"
              MR_Word check_hlds__unique_modes__V_104_104;
#line 283 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_105;
#line 283 "unique_modes.m"
              MR_Word check_hlds__unique_modes__V_106_106;
#line 283 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_34_108;
#line 283 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_109;

#line 690 "unique_modes.m"
              {
#line 690 "unique_modes.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "foreign_proc", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_103);
              }
#line 691 "unique_modes.m"
              {
#line 691 "unique_modes.m"
                check_hlds__mode_info__mode_info_get_call_id_3_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_103, check_hlds__unique_modes__PredId0_79, &check_hlds__unique_modes__CallId_98);
              }
#line 692 "unique_modes.m"
              {
#line 692 "unique_modes.m"
                check_hlds__unique_modes__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 692 "unique_modes.m"
                MR_hl_field(MR_mktag(0), check_hlds__unique_modes__V_106_106, 0) = ((MR_Box) (check_hlds__unique_modes__CallId_98));
#line 692 "unique_modes.m"
              }
#line 692 "unique_modes.m"
              {
#line 692 "unique_modes.m"
                check_hlds__unique_modes__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 692 "unique_modes.m"
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__V_104_104, 0) = ((MR_Box) (check_hlds__unique_modes__V_106_106));
#line 692 "unique_modes.m"
              }
#line 692 "unique_modes.m"
              {
#line 692 "unique_modes.m"
                check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__unique_modes__V_104_104, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_103, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_105);
              }
#line 694 "unique_modes.m"
              {
#line 694 "unique_modes.m"
                check_hlds__unique_modes__ArgVars_99 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__unique_modes_scalar_common_1[0], (MR_Word) &check_hlds__unique_modes_scalar_common_3[0], check_hlds__unique_modes__Args0_26);
              }
#line 695 "unique_modes.m"
              {
#line 695 "unique_modes.m"
                check_hlds__unique_modes__unique_modes_check_call_7_p_0(check_hlds__unique_modes__PredId0_79, check_hlds__unique_modes__ProcId0_80, check_hlds__unique_modes__ArgVars_99, check_hlds__unique_modes__GoalInfo0_7, &check_hlds__unique_modes__ProcId_100, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_105, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_34_108);
              }
#line 697 "unique_modes.m"
              {
#line 697 "unique_modes.m"
                MR_Word base;
#line 697 "unique_modes.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 697 "unique_modes.m"
                *check_hlds__unique_modes__GoalExpr_8 = base;
#line 697 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 697 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Attributes0_25));
#line 697 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__PredId0_79));
#line 697 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__unique_modes__ProcId_100));
#line 697 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__unique_modes__Args0_26));
#line 697 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (check_hlds__unique_modes__ExtraArgs0_27));
#line 697 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (check_hlds__unique_modes__MaybeTraceRuntimeCond0_28));
#line 697 "unique_modes.m"
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (check_hlds__unique_modes__PragmaCode0_29));
#line 697 "unique_modes.m"
              }
#line 699 "unique_modes.m"
              {
#line 699 "unique_modes.m"
                check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_34_108, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_109);
              }
#line 700 "unique_modes.m"
              {
#line 700 "unique_modes.m"
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "foreign_proc", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_109, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 700 "unique_modes.m"
                return;
              }
#line 283 "unique_modes.m"
            }
#line 267 "unique_modes.m"
            break;
#line 267 "unique_modes.m"
          case (MR_Integer) 2:
#line 288 "unique_modes.m"
            {
#line 288 "unique_modes.m"
              MR_Word check_hlds__unique_modes__GoalType0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 288 "unique_modes.m"
              MR_Word check_hlds__unique_modes__Goals0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));

#line 289 "unique_modes.m"
              {
#line 289 "unique_modes.m"
                check_hlds__unique_modes__unique_modes_check_goal_conj_5_p_0(check_hlds__unique_modes__GoalType0_30, check_hlds__unique_modes__Goals0_31, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 289 "unique_modes.m"
                return;
              }
#line 288 "unique_modes.m"
            }
#line 267 "unique_modes.m"
            break;
#line 267 "unique_modes.m"
          case (MR_Integer) 3:
#line 292 "unique_modes.m"
            {
#line 292 "unique_modes.m"
              MR_Word check_hlds__unique_modes__Goals0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));

#line 293 "unique_modes.m"
              {
#line 293 "unique_modes.m"
                check_hlds__unique_modes__unique_modes_check_goal_disj_5_p_0(check_hlds__unique_modes__Goals0_81, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 293 "unique_modes.m"
                return;
              }
#line 292 "unique_modes.m"
            }
#line 267 "unique_modes.m"
            break;
#line 267 "unique_modes.m"
          case (MR_Integer) 4:
#line 296 "unique_modes.m"
            {
#line 296 "unique_modes.m"
              MR_Word check_hlds__unique_modes__Var0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 296 "unique_modes.m"
              MR_Word check_hlds__unique_modes__CanFail0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
#line 296 "unique_modes.m"
              MR_Word check_hlds__unique_modes__Cases0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));

#line 297 "unique_modes.m"
              {
#line 297 "unique_modes.m"
                check_hlds__unique_modes__unique_modes_check_goal_switch_7_p_0(check_hlds__unique_modes__Var0_32, check_hlds__unique_modes__CanFail0_33, check_hlds__unique_modes__Cases0_34, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 297 "unique_modes.m"
                return;
              }
#line 296 "unique_modes.m"
            }
#line 267 "unique_modes.m"
            break;
#line 267 "unique_modes.m"
          case (MR_Integer) 5:
#line 308 "unique_modes.m"
            {
#line 308 "unique_modes.m"
              MR_Word check_hlds__unique_modes__Reason0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 308 "unique_modes.m"
              MR_Word check_hlds__unique_modes__SubGoal0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));

#line 309 "unique_modes.m"
              {
#line 309 "unique_modes.m"
                check_hlds__unique_modes__unique_modes_check_goal_scope_6_p_0(check_hlds__unique_modes__Reason0_40, check_hlds__unique_modes__SubGoal0_82, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 309 "unique_modes.m"
                return;
              }
#line 308 "unique_modes.m"
            }
#line 267 "unique_modes.m"
            break;
#line 267 "unique_modes.m"
          case (MR_Integer) 6:
#line 300 "unique_modes.m"
            {
#line 300 "unique_modes.m"
              MR_Word check_hlds__unique_modes__Vars0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
#line 300 "unique_modes.m"
              MR_Word check_hlds__unique_modes__Cond0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
#line 300 "unique_modes.m"
              MR_Word check_hlds__unique_modes__Then0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
#line 300 "unique_modes.m"
              MR_Word check_hlds__unique_modes__Else0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));

#line 301 "unique_modes.m"
              {
#line 301 "unique_modes.m"
                check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_p_0(check_hlds__unique_modes__Vars0_35, check_hlds__unique_modes__Cond0_36, check_hlds__unique_modes__Then0_37, check_hlds__unique_modes__Else0_38, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 301 "unique_modes.m"
                return;
              }
#line 300 "unique_modes.m"
            }
#line 267 "unique_modes.m"
            break;
#line 267 "unique_modes.m"
          case (MR_Integer) 7:
#line 312 "unique_modes.m"
            {
#line 312 "unique_modes.m"
              MR_Word check_hlds__unique_modes__ShortHand0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));

#line 319 "unique_modes.m"
#line 319 "unique_modes.m"
              switch (MR_tag((MR_Word) check_hlds__unique_modes__ShortHand0_41)) {
#line 319 "unique_modes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 319 "unique_modes.m"
                case (MR_Integer) 0:
#line 327 "unique_modes.m"
                  {
#line 329 "unique_modes.m"
                    {
#line 329 "unique_modes.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_expr\'/5", (MR_String) "bi_implication");
#line 329 "unique_modes.m"
                      return;
                    }
#line 327 "unique_modes.m"
                  }
#line 319 "unique_modes.m"
                  break;
#line 319 "unique_modes.m"
                case (MR_Integer) 1:
#line 315 "unique_modes.m"
                  {
#line 315 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__GoalType_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 0)));
#line 315 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__Outer_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 1)));
#line 315 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__Inner_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 2)));
#line 315 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__MaybeOutputVars_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 3)));
#line 315 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__MainGoal0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 4)));
#line 315 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__OrElseGoals0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 5)));
#line 315 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__OrElseInners0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 6)));

#line 316 "unique_modes.m"
                    {
#line 316 "unique_modes.m"
                      check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_p_0(check_hlds__unique_modes__GoalType_42, check_hlds__unique_modes__Outer_43, check_hlds__unique_modes__Inner_44, check_hlds__unique_modes__MaybeOutputVars_45, check_hlds__unique_modes__MainGoal0_46, check_hlds__unique_modes__OrElseGoals0_47, check_hlds__unique_modes__OrElseInners0_48, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 316 "unique_modes.m"
                      return;
                    }
#line 315 "unique_modes.m"
                  }
#line 319 "unique_modes.m"
                  break;
#line 319 "unique_modes.m"
                case (MR_Integer) 2:
#line 320 "unique_modes.m"
                  {
#line 320 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__MaybeIO_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 0)));
#line 320 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__ResultVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 1)));
#line 320 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__SubGoal_51;
#line 320 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__ShortHand_52;
#line 320 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62;
#line 320 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_63_63;
#line 320 "unique_modes.m"
                    MR_Word check_hlds__unique_modes__SubGoal0_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 2)));

#line 321 "unique_modes.m"
                    {
#line 321 "unique_modes.m"
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "try", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62);
                    }
#line 322 "unique_modes.m"
                    {
#line 322 "unique_modes.m"
                      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_83, &check_hlds__unique_modes__SubGoal_51, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_63_63);
                    }
#line 323 "unique_modes.m"
                    {
#line 323 "unique_modes.m"
                      check_hlds__unique_modes__ShortHand_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 323 "unique_modes.m"
                      MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand_52, 0) = ((MR_Box) (check_hlds__unique_modes__MaybeIO_49));
#line 323 "unique_modes.m"
                      MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand_52, 1) = ((MR_Box) (check_hlds__unique_modes__ResultVar_50));
#line 323 "unique_modes.m"
                      MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand_52, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal_51));
#line 323 "unique_modes.m"
                    }
#line 324 "unique_modes.m"
                    {
#line 324 "unique_modes.m"
                      MR_Word base;
#line 324 "unique_modes.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "unique_modes.m"
                      *check_hlds__unique_modes__GoalExpr_8 = base;
#line 324 "unique_modes.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 324 "unique_modes.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__ShortHand_52));
#line 324 "unique_modes.m"
                    }
#line 325 "unique_modes.m"
                    {
#line 325 "unique_modes.m"
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "try", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_63_63, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
#line 325 "unique_modes.m"
                      return;
                    }
#line 320 "unique_modes.m"
                  }
#line 319 "unique_modes.m"
                  break;
#line 319 "unique_modes.m"
              }
#line 312 "unique_modes.m"
            }
#line 267 "unique_modes.m"
            break;
#line 267 "unique_modes.m"
        }
#line 267 "unique_modes.m"
        break;
#line 267 "unique_modes.m"
    }
#line 267 "unique_modes.m"
  }
#line 260 "unique_modes.m"
}

#line 224 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(
#line 224 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 224 "unique_modes.m"
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2,
#line 224 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_3)
#line 224 "unique_modes.m"
{
#line 227 "unique_modes.m"
  while (MR_TRUE)
#line 227 "unique_modes.m"
    {
#line 227 "unique_modes.m"
      /* tailcall optimized into a loop */
#line 227 "unique_modes.m"
      {
#line 227 "unique_modes.m"
        MR_bool check_hlds__unique_modes__succeeded;

#line 227 "unique_modes.m"
        if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "unique_modes.m"
          *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_3 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2;
#line 227 "unique_modes.m"
        else
#line 228 "unique_modes.m"
          {
#line 228 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
#line 228 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
#line 228 "unique_modes.m"
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_12_12;
#line 228 "unique_modes.m"
            MR_Word check_hlds__unique_modes__InstMap0_18;
#line 228 "unique_modes.m"
            MR_Word check_hlds__unique_modes__ModuleInfo0_19;
#line 254 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Inst0_21;
#line 240 "unique_modes.m"
            MR_Word check_hlds__unique_modes__TypeInfo_25_35;
#line 240 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Vars_20;
#line 240 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Inst1_22;

#line 236 "unique_modes.m"
            {
#line 236 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__unique_modes__InstMap0_18);
            }
#line 237 "unique_modes.m"
            {
#line 237 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__unique_modes__ModuleInfo0_19);
            }
#line 240 "unique_modes.m"
            {
#line 240 "unique_modes.m"
              check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__InstMap0_18);
            }
#line 240 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 240 "unique_modes.m"
              {
#line 241 "unique_modes.m"
                {
#line 241 "unique_modes.m"
                  hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__InstMap0_18, &check_hlds__unique_modes__Vars_20);
                }
#line 4275 "check_hlds.unique_modes.c"
                check_hlds__unique_modes__TypeInfo_25_35 = (MR_Word) &check_hlds__unique_modes_scalar_common_1[0];
#line 242 "unique_modes.m"
                {
#line 242 "unique_modes.m"
                  check_hlds__unique_modes__succeeded = mercury__list__member_2_p_0(check_hlds__unique_modes__TypeInfo_25_35, ((MR_Box) (check_hlds__unique_modes__Var_7)), check_hlds__unique_modes__Vars_20);
                }
#line 240 "unique_modes.m"
                if (check_hlds__unique_modes__succeeded)
#line 240 "unique_modes.m"
                  {
#line 243 "unique_modes.m"
                    {
#line 243 "unique_modes.m"
                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__unique_modes__InstMap0_18, check_hlds__unique_modes__Var_7, &check_hlds__unique_modes__Inst0_21);
                    }
#line 244 "unique_modes.m"
                    {
#line 244 "unique_modes.m"
                      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__unique_modes__ModuleInfo0_19, check_hlds__unique_modes__Inst0_21, &check_hlds__unique_modes__Inst1_22);
                    }
#line 246 "unique_modes.m"
#line 246 "unique_modes.m"
                    switch (MR_tag((MR_Word) check_hlds__unique_modes__Inst1_22)) {
#line 246 "unique_modes.m"
                      default:
#line 246 "unique_modes.m"
                        check_hlds__unique_modes__succeeded = MR_FALSE;
#line 246 "unique_modes.m"
                        break;
#line 246 "unique_modes.m"
                      case (MR_Integer) 2:
#line 247 "unique_modes.m"
                        {
#line 247 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__Inst1_22, (MR_Integer) 0)));
#line 247 "unique_modes.m"
                          MR_Word check_hlds__unique_modes__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__Inst1_22, (MR_Integer) 1)));

#line 247 "unique_modes.m"
                          check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__V_30_30 == (MR_Integer) 1);
#line 247 "unique_modes.m"
                        }
#line 246 "unique_modes.m"
                        break;
#line 246 "unique_modes.m"
                      case (MR_Integer) 3:
#line 246 "unique_modes.m"
#line 246 "unique_modes.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 0)))) {
#line 246 "unique_modes.m"
                          default:
#line 246 "unique_modes.m"
                            check_hlds__unique_modes__succeeded = MR_FALSE;
#line 246 "unique_modes.m"
                            break;
#line 246 "unique_modes.m"
                          case (MR_Integer) 0:
#line 246 "unique_modes.m"
                            {
#line 246 "unique_modes.m"
                              MR_Word check_hlds__unique_modes__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 1)));
#line 246 "unique_modes.m"
                              MR_Word check_hlds__unique_modes__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 2)));
#line 246 "unique_modes.m"
                              MR_Word check_hlds__unique_modes__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 3)));

#line 246 "unique_modes.m"
                              check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__V_31_31 == (MR_Integer) 1);
#line 246 "unique_modes.m"
                            }
#line 246 "unique_modes.m"
                            break;
#line 246 "unique_modes.m"
                          case (MR_Integer) 1:
#line 245 "unique_modes.m"
                            {
#line 245 "unique_modes.m"
                              MR_Word check_hlds__unique_modes__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 1)));
#line 245 "unique_modes.m"
                              MR_Word check_hlds__unique_modes__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 2)));

#line 245 "unique_modes.m"
                              check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__V_32_32 == (MR_Integer) 1);
#line 245 "unique_modes.m"
                            }
#line 246 "unique_modes.m"
                            break;
#line 246 "unique_modes.m"
                        }
#line 246 "unique_modes.m"
                        break;
#line 246 "unique_modes.m"
                    }
#line 240 "unique_modes.m"
                  }
#line 240 "unique_modes.m"
              }
#line 254 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 250 "unique_modes.m"
              {
#line 250 "unique_modes.m"
                MR_Word check_hlds__unique_modes__Inst_27;
#line 250 "unique_modes.m"
                MR_Word check_hlds__unique_modes__ModuleInfo_28;
#line 250 "unique_modes.m"
                MR_Word check_hlds__unique_modes__InstMap_29;
#line 250 "unique_modes.m"
                MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_33;

#line 250 "unique_modes.m"
                {
#line 250 "unique_modes.m"
                  check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__unique_modes__Inst0_21, &check_hlds__unique_modes__Inst_27, check_hlds__unique_modes__ModuleInfo0_19, &check_hlds__unique_modes__ModuleInfo_28);
                }
#line 251 "unique_modes.m"
                {
#line 251 "unique_modes.m"
                  check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__unique_modes__ModuleInfo_28, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_33);
                }
#line 252 "unique_modes.m"
                {
#line 252 "unique_modes.m"
                  hlds__instmap__instmap_set_var_4_p_0(check_hlds__unique_modes__Var_7, check_hlds__unique_modes__Inst_27, check_hlds__unique_modes__InstMap0_18, &check_hlds__unique_modes__InstMap_29);
                }
#line 253 "unique_modes.m"
                {
#line 253 "unique_modes.m"
                  check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_29, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_33, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_12_12);
                }
#line 250 "unique_modes.m"
              }
#line 254 "unique_modes.m"
            else
#line 254 "unique_modes.m"
              check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_12_12 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2;
#line 230 "unique_modes.m"
            /* direct tailcall eliminated */
#line 230 "unique_modes.m"
            {
#line 230 "unique_modes.m"
              MR_Word check_hlds__unique_modes__HeadVar__1__tmp_copy_1 = check_hlds__unique_modes__Vars_8;
#line 230 "unique_modes.m"
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_2 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_12_12;

#line 230 "unique_modes.m"
              check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0__tmp_copy_2;
#line 230 "unique_modes.m"
              check_hlds__unique_modes__HeadVar__1_1 = check_hlds__unique_modes__HeadVar__1__tmp_copy_1;
#line 230 "unique_modes.m"
            }
#line 230 "unique_modes.m"
            continue;
#line 228 "unique_modes.m"
          }
#line 227 "unique_modes.m"
      }
#line 227 "unique_modes.m"
      break;
#line 227 "unique_modes.m"
    }
#line 224 "unique_modes.m"
}

#line 203 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__select_changed_inst_vars_4_p_0(
#line 203 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 203 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
#line 203 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__3_3,
#line 203 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__4_4)
#line 203 "unique_modes.m"
{
#line 206 "unique_modes.m"
  while (MR_TRUE)
#line 206 "unique_modes.m"
    {
#line 206 "unique_modes.m"
      /* tailcall optimized into a loop */
#line 206 "unique_modes.m"
      {
#line 206 "unique_modes.m"
        MR_bool check_hlds__unique_modes__succeeded;

#line 206 "unique_modes.m"
        if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 206 "unique_modes.m"
          *check_hlds__unique_modes__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 206 "unique_modes.m"
        else
#line 207 "unique_modes.m"
          {
#line 207 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
#line 207 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
#line 207 "unique_modes.m"
            MR_Word check_hlds__unique_modes__ModuleInfo_12;
#line 207 "unique_modes.m"
            MR_Word check_hlds__unique_modes__InstMap0_13;
#line 207 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Inst0_14;
#line 207 "unique_modes.m"
            MR_Word check_hlds__unique_modes__VarTypes_15;
#line 207 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Type_16;
#line 214 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Inst_17;

#line 208 "unique_modes.m"
            {
#line 208 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__HeadVar__3_3, &check_hlds__unique_modes__ModuleInfo_12);
            }
#line 209 "unique_modes.m"
            {
#line 209 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__HeadVar__3_3, &check_hlds__unique_modes__InstMap0_13);
            }
#line 210 "unique_modes.m"
            {
#line 210 "unique_modes.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__unique_modes__InstMap0_13, check_hlds__unique_modes__Var_7, &check_hlds__unique_modes__Inst0_14);
            }
#line 211 "unique_modes.m"
            {
#line 211 "unique_modes.m"
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__unique_modes__HeadVar__3_3, &check_hlds__unique_modes__VarTypes_15);
            }
#line 212 "unique_modes.m"
            {
#line 212 "unique_modes.m"
              hlds__vartypes__lookup_var_type_3_p_0(check_hlds__unique_modes__VarTypes_15, check_hlds__unique_modes__Var_7, &check_hlds__unique_modes__Type_16);
            }
#line 214 "unique_modes.m"
            {
#line 214 "unique_modes.m"
              check_hlds__unique_modes__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(check_hlds__unique_modes__HeadVar__2_2);
            }
#line 214 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 214 "unique_modes.m"
              {
#line 215 "unique_modes.m"
                {
#line 215 "unique_modes.m"
                  check_hlds__unique_modes__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__unique_modes__HeadVar__2_2, check_hlds__unique_modes__Var_7, &check_hlds__unique_modes__Inst_17);
                }
#line 214 "unique_modes.m"
                if (check_hlds__unique_modes__succeeded)
#line 214 "unique_modes.m"
                  {
#line 216 "unique_modes.m"
                    {
#line 216 "unique_modes.m"
                      check_hlds__unique_modes__succeeded = check_hlds__inst_match__inst_matches_final_typed_4_p_0(check_hlds__unique_modes__Inst_17, check_hlds__unique_modes__Inst0_14, check_hlds__unique_modes__Type_16, check_hlds__unique_modes__ModuleInfo_12);
                    }
#line 216 "unique_modes.m"
                    check_hlds__unique_modes__succeeded = !(check_hlds__unique_modes__succeeded);
#line 214 "unique_modes.m"
                  }
#line 214 "unique_modes.m"
              }
#line 220 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 218 "unique_modes.m"
              {
#line 218 "unique_modes.m"
                MR_Word check_hlds__unique_modes__ChangedVars1_18;

#line 218 "unique_modes.m"
                {
#line 218 "unique_modes.m"
                  check_hlds__unique_modes__select_changed_inst_vars_4_p_0(check_hlds__unique_modes__Vars_8, check_hlds__unique_modes__HeadVar__2_2, check_hlds__unique_modes__HeadVar__3_3, &check_hlds__unique_modes__ChangedVars1_18);
                }
#line 219 "unique_modes.m"
                {
#line 219 "unique_modes.m"
                  MR_Word base;
#line 219 "unique_modes.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "unique_modes.m"
                  *check_hlds__unique_modes__HeadVar__4_4 = base;
#line 219 "unique_modes.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Var_7));
#line 219 "unique_modes.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__ChangedVars1_18));
#line 219 "unique_modes.m"
                }
#line 218 "unique_modes.m"
              }
#line 220 "unique_modes.m"
            else
#line 221 "unique_modes.m"
              {
#line 221 "unique_modes.m"
                /* direct tailcall eliminated */
#line 221 "unique_modes.m"
                {
#line 221 "unique_modes.m"
                  MR_Word check_hlds__unique_modes__HeadVar__1__tmp_copy_1 = check_hlds__unique_modes__Vars_8;

#line 221 "unique_modes.m"
                  check_hlds__unique_modes__HeadVar__1_1 = check_hlds__unique_modes__HeadVar__1__tmp_copy_1;
#line 221 "unique_modes.m"
                }
#line 221 "unique_modes.m"
                continue;
#line 221 "unique_modes.m"
              }
#line 207 "unique_modes.m"
          }
#line 206 "unique_modes.m"
      }
#line 206 "unique_modes.m"
      break;
#line 206 "unique_modes.m"
    }
#line 203 "unique_modes.m"
}

#line 187 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__select_nondet_live_vars_3_p_0(
#line 187 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 187 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ModeInfo_2,
#line 187 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3)
#line 187 "unique_modes.m"
{
#line 190 "unique_modes.m"
  while (MR_TRUE)
#line 190 "unique_modes.m"
    {
#line 190 "unique_modes.m"
      /* tailcall optimized into a loop */
#line 190 "unique_modes.m"
      {
#line 190 "unique_modes.m"
        MR_bool check_hlds__unique_modes__succeeded;

#line 190 "unique_modes.m"
        if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "unique_modes.m"
          *check_hlds__unique_modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "unique_modes.m"
        else
#line 191 "unique_modes.m"
          {
#line 191 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
#line 191 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
#line 192 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_11_11;

#line 192 "unique_modes.m"
            {
#line 192 "unique_modes.m"
              check_hlds__mode_info__mode_info_var_is_nondet_live_3_p_0(check_hlds__unique_modes__ModeInfo_2, check_hlds__unique_modes__Var_5, &check_hlds__unique_modes__V_11_11);
            }
#line 192 "unique_modes.m"
            check_hlds__unique_modes__succeeded = ((MR_Integer) 0 == check_hlds__unique_modes__V_11_11);
#line 195 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 193 "unique_modes.m"
              {
#line 193 "unique_modes.m"
                MR_Word check_hlds__unique_modes__NondetLiveVars1_9;

#line 193 "unique_modes.m"
                {
#line 193 "unique_modes.m"
                  check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__Vars_6, check_hlds__unique_modes__ModeInfo_2, &check_hlds__unique_modes__NondetLiveVars1_9);
                }
#line 194 "unique_modes.m"
                {
#line 194 "unique_modes.m"
                  MR_Word base;
#line 194 "unique_modes.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "unique_modes.m"
                  *check_hlds__unique_modes__HeadVar__3_3 = base;
#line 194 "unique_modes.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Var_5));
#line 194 "unique_modes.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__NondetLiveVars1_9));
#line 194 "unique_modes.m"
                }
#line 193 "unique_modes.m"
              }
#line 195 "unique_modes.m"
            else
#line 196 "unique_modes.m"
              {
#line 196 "unique_modes.m"
                /* direct tailcall eliminated */
#line 196 "unique_modes.m"
                {
#line 196 "unique_modes.m"
                  MR_Word check_hlds__unique_modes__HeadVar__1__tmp_copy_1 = check_hlds__unique_modes__Vars_6;

#line 196 "unique_modes.m"
                  check_hlds__unique_modes__HeadVar__1_1 = check_hlds__unique_modes__HeadVar__1__tmp_copy_1;
#line 196 "unique_modes.m"
                }
#line 196 "unique_modes.m"
                continue;
#line 196 "unique_modes.m"
              }
#line 191 "unique_modes.m"
          }
#line 190 "unique_modes.m"
      }
#line 190 "unique_modes.m"
      break;
#line 190 "unique_modes.m"
    }
#line 187 "unique_modes.m"
}

#line 175 "unique_modes.m"
static void MR_CALL 
check_hlds__unique_modes__select_live_vars_3_p_0(
#line 175 "unique_modes.m"
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
#line 175 "unique_modes.m"
  MR_Word check_hlds__unique_modes__ModeInfo_2,
#line 175 "unique_modes.m"
  MR_Word * check_hlds__unique_modes__HeadVar__3_3)
#line 175 "unique_modes.m"
{
#line 178 "unique_modes.m"
  while (MR_TRUE)
#line 178 "unique_modes.m"
    {
#line 178 "unique_modes.m"
      /* tailcall optimized into a loop */
#line 178 "unique_modes.m"
      {
#line 178 "unique_modes.m"
        MR_bool check_hlds__unique_modes__succeeded;

#line 178 "unique_modes.m"
        if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 178 "unique_modes.m"
          *check_hlds__unique_modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "unique_modes.m"
        else
#line 179 "unique_modes.m"
          {
#line 179 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
#line 179 "unique_modes.m"
            MR_Word check_hlds__unique_modes__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
#line 180 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_11_11;

#line 180 "unique_modes.m"
            {
#line 180 "unique_modes.m"
              check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__unique_modes__ModeInfo_2, check_hlds__unique_modes__Var_5, &check_hlds__unique_modes__V_11_11);
            }
#line 180 "unique_modes.m"
            check_hlds__unique_modes__succeeded = ((MR_Integer) 0 == check_hlds__unique_modes__V_11_11);
#line 183 "unique_modes.m"
            if (check_hlds__unique_modes__succeeded)
#line 181 "unique_modes.m"
              {
#line 181 "unique_modes.m"
                MR_Word check_hlds__unique_modes__LiveVars1_9;

#line 181 "unique_modes.m"
                {
#line 181 "unique_modes.m"
                  check_hlds__unique_modes__select_live_vars_3_p_0(check_hlds__unique_modes__Vars_6, check_hlds__unique_modes__ModeInfo_2, &check_hlds__unique_modes__LiveVars1_9);
                }
#line 182 "unique_modes.m"
                {
#line 182 "unique_modes.m"
                  MR_Word base;
#line 182 "unique_modes.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "unique_modes.m"
                  *check_hlds__unique_modes__HeadVar__3_3 = base;
#line 182 "unique_modes.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Var_5));
#line 182 "unique_modes.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__LiveVars1_9));
#line 182 "unique_modes.m"
                }
#line 181 "unique_modes.m"
              }
#line 183 "unique_modes.m"
            else
#line 184 "unique_modes.m"
              {
#line 184 "unique_modes.m"
                /* direct tailcall eliminated */
#line 184 "unique_modes.m"
                {
#line 184 "unique_modes.m"
                  MR_Word check_hlds__unique_modes__HeadVar__1__tmp_copy_1 = check_hlds__unique_modes__Vars_6;

#line 184 "unique_modes.m"
                  check_hlds__unique_modes__HeadVar__1_1 = check_hlds__unique_modes__HeadVar__1__tmp_copy_1;
#line 184 "unique_modes.m"
                }
#line 184 "unique_modes.m"
                continue;
#line 184 "unique_modes.m"
              }
#line 179 "unique_modes.m"
          }
#line 178 "unique_modes.m"
      }
#line 178 "unique_modes.m"
      break;
#line 178 "unique_modes.m"
    }
#line 175 "unique_modes.m"
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
#line 165 "unique_modes.m"
  {
#line 165 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 165 "unique_modes.m"
    MR_Word check_hlds__unique_modes__FullInstMap0_5;

#line 166 "unique_modes.m"
    {
#line 166 "unique_modes.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__ModeInfo0_3, &check_hlds__unique_modes__FullInstMap0_5);
    }
#line 167 "unique_modes.m"
    {
#line 167 "unique_modes.m"
      check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_5);
    }
#line 171 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 168 "unique_modes.m"
      {
#line 168 "unique_modes.m"
        MR_Word check_hlds__unique_modes__AllVars_6;
#line 168 "unique_modes.m"
        MR_Word check_hlds__unique_modes__NondetLiveVars_7;

#line 168 "unique_modes.m"
        {
#line 168 "unique_modes.m"
          hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_5, &check_hlds__unique_modes__AllVars_6);
        }
#line 169 "unique_modes.m"
        {
#line 169 "unique_modes.m"
          check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_6, check_hlds__unique_modes__ModeInfo0_3, &check_hlds__unique_modes__NondetLiveVars_7);
        }
#line 170 "unique_modes.m"
        {
#line 170 "unique_modes.m"
          check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_7, check_hlds__unique_modes__ModeInfo0_3, check_hlds__unique_modes__ModeInfo_4);
#line 170 "unique_modes.m"
          return;
        }
#line 168 "unique_modes.m"
      }
#line 171 "unique_modes.m"
    else
#line 172 "unique_modes.m"
      *check_hlds__unique_modes__ModeInfo_4 = check_hlds__unique_modes__ModeInfo0_3;
#line 165 "unique_modes.m"
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
#line 1034 "unique_modes.m"
  {
#line 1034 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 1020 "unique_modes.m"
    MR_Word check_hlds__unique_modes__GoalInfo0_12;
#line 1020 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Determinism_13;
#line 1020 "unique_modes.m"
    MR_Word check_hlds__unique_modes__CanFail_14;
#line 1020 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_22_22;
#line 1020 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_10_10;
#line 1026 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_11_11;
#line 1028 "unique_modes.m"
    MR_Word check_hlds__unique_modes__V_15_15;

#line 1020 "unique_modes.m"
    {
#line 1020 "unique_modes.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__DisjDetism_7, &check_hlds__unique_modes__V_10_10, &check_hlds__unique_modes__V_22_22);
    }
#line 1020 "unique_modes.m"
    check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__V_22_22);
#line 1020 "unique_modes.m"
    check_hlds__unique_modes__succeeded = !(check_hlds__unique_modes__succeeded);
#line 1020 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 1020 "unique_modes.m"
      {
#line 1026 "unique_modes.m"
        check_hlds__unique_modes__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_6, (MR_Integer) 0)));
#line 1026 "unique_modes.m"
        check_hlds__unique_modes__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_6, (MR_Integer) 1)));
#line 1027 "unique_modes.m"
        {
#line 1027 "unique_modes.m"
          check_hlds__unique_modes__Determinism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_12);
        }
#line 1028 "unique_modes.m"
        {
#line 1028 "unique_modes.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Determinism_13, &check_hlds__unique_modes__CanFail_14, &check_hlds__unique_modes__V_15_15);
        }
#line 1029 "unique_modes.m"
        check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__CanFail_14 == (MR_Integer) 0);
#line 1020 "unique_modes.m"
      }
#line 1034 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 1031 "unique_modes.m"
      {
#line 1031 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19;
#line 1031 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20;
#line 1031 "unique_modes.m"
        MR_Word check_hlds__unique_modes__FullInstMap0_25;

#line 1031 "unique_modes.m"
        {
#line 1031 "unique_modes.m"
          check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__DisjNonLocals_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19);
        }
#line 166 "unique_modes.m"
        {
#line 166 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19, &check_hlds__unique_modes__FullInstMap0_25);
        }
#line 167 "unique_modes.m"
        {
#line 167 "unique_modes.m"
          check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_25);
        }
#line 171 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 168 "unique_modes.m"
          {
#line 168 "unique_modes.m"
            MR_Word check_hlds__unique_modes__AllVars_26;
#line 168 "unique_modes.m"
            MR_Word check_hlds__unique_modes__NondetLiveVars_27;

#line 168 "unique_modes.m"
            {
#line 168 "unique_modes.m"
              hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_25, &check_hlds__unique_modes__AllVars_26);
            }
#line 169 "unique_modes.m"
            {
#line 169 "unique_modes.m"
              check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_26, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19, &check_hlds__unique_modes__NondetLiveVars_27);
            }
#line 170 "unique_modes.m"
            {
#line 170 "unique_modes.m"
              check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_27, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20);
            }
#line 168 "unique_modes.m"
          }
#line 171 "unique_modes.m"
        else
#line 172 "unique_modes.m"
          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19;
#line 1033 "unique_modes.m"
        {
#line 1033 "unique_modes.m"
          check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__DisjNonLocals_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17);
#line 1033 "unique_modes.m"
          return;
        }
#line 1031 "unique_modes.m"
      }
#line 1034 "unique_modes.m"
    else
#line 1034 "unique_modes.m"
      *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_16;
#line 1034 "unique_modes.m"
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
#line 118 "unique_modes.m"
  {
#line 118 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 118 "unique_modes.m"
    MR_Word check_hlds__unique_modes__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_5, (MR_Integer) 0)));
#line 118 "unique_modes.m"
    MR_Word check_hlds__unique_modes__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_5, (MR_Integer) 1)));
#line 118 "unique_modes.m"
    MR_Word check_hlds__unique_modes__Context_10;
#line 118 "unique_modes.m"
    MR_Word check_hlds__unique_modes__EmptyContext_11;
#line 118 "unique_modes.m"
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15;

#line 120 "unique_modes.m"
    {
#line 120 "unique_modes.m"
      check_hlds__unique_modes__Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__unique_modes__GoalInfo0_9);
    }
#line 121 "unique_modes.m"
    {
#line 121 "unique_modes.m"
      mercury__term__context_init_1_p_0(&check_hlds__unique_modes__EmptyContext_11);
    }
#line 122 "unique_modes.m"
    {
#line 122 "unique_modes.m"
      check_hlds__unique_modes__succeeded = mercury__term____Unify____context_0_0(check_hlds__unique_modes__Context_10, check_hlds__unique_modes__EmptyContext_11);
    }
#line 124 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 124 "unique_modes.m"
      check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_13;
#line 124 "unique_modes.m"
    else
#line 125 "unique_modes.m"
      {
#line 125 "unique_modes.m"
        check_hlds__mode_info__mode_info_set_context_3_p_0(check_hlds__unique_modes__Context_10, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_13, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15);
      }
#line 127 "unique_modes.m"
    {
#line 127 "unique_modes.m"
      check_hlds__unique_modes__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__unique_modes__GoalInfo0_9, (MR_Integer) 13);
    }
#line 132 "unique_modes.m"
    if (check_hlds__unique_modes__succeeded)
#line 128 "unique_modes.m"
      {
#line 128 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InDuplForSwitch_12;
#line 128 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18;
#line 128 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19;
#line 128 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap0_29;
#line 128 "unique_modes.m"
        MR_Word check_hlds__unique_modes__NondetLiveVars0_30;
#line 128 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Detism_31;
#line 128 "unique_modes.m"
        MR_Word check_hlds__unique_modes__GoalExpr_33;
#line 128 "unique_modes.m"
        MR_Word check_hlds__unique_modes__GoalInfo_34;
#line 128 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_37;
#line 128 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_38;
#line 128 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_39;
#line 149 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_42_42;
#line 149 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_32_32;

#line 128 "unique_modes.m"
        {
#line 128 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__InDuplForSwitch_12);
        }
#line 129 "unique_modes.m"
        {
#line 129 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0((MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18);
        }
#line 142 "unique_modes.m"
        {
#line 142 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__InstMap0_29);
        }
#line 144 "unique_modes.m"
        {
#line 144 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__NondetLiveVars0_30);
        }
#line 148 "unique_modes.m"
        {
#line 148 "unique_modes.m"
          check_hlds__unique_modes__Detism_31 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_9);
        }
#line 149 "unique_modes.m"
        {
#line 149 "unique_modes.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Detism_31, &check_hlds__unique_modes__V_32_32, &check_hlds__unique_modes__V_42_42);
        }
#line 149 "unique_modes.m"
        check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__V_42_42);
#line 151 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 151 "unique_modes.m"
          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_37 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18;
#line 151 "unique_modes.m"
        else
#line 152 "unique_modes.m"
          {
#line 152 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_36_36;

#line 152 "unique_modes.m"
            {
#line 152 "unique_modes.m"
              check_hlds__unique_modes__V_36_36 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[0]);
            }
#line 152 "unique_modes.m"
            {
#line 152 "unique_modes.m"
              check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__unique_modes__V_36_36, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_37);
            }
#line 152 "unique_modes.m"
          }
#line 155 "unique_modes.m"
        {
#line 155 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(check_hlds__unique_modes__GoalExpr0_8, check_hlds__unique_modes__GoalInfo0_9, &check_hlds__unique_modes__GoalExpr_33, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_37, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_38);
        }
#line 157 "unique_modes.m"
        {
#line 157 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__unique_modes__NondetLiveVars0_30, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_38, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_39);
        }
#line 161 "unique_modes.m"
        {
#line 161 "unique_modes.m"
          check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(check_hlds__unique_modes__InstMap0_29, check_hlds__unique_modes__GoalExpr_33, check_hlds__unique_modes__GoalInfo0_9, &check_hlds__unique_modes__GoalInfo_34, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_39, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19);
        }
#line 163 "unique_modes.m"
        {
#line 163 "unique_modes.m"
          MR_Word base;
#line 163 "unique_modes.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 163 "unique_modes.m"
          *check_hlds__unique_modes__Goal_6 = base;
#line 163 "unique_modes.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unique_modes__GoalExpr_33));
#line 163 "unique_modes.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unique_modes__GoalInfo_34));
#line 163 "unique_modes.m"
        }
#line 131 "unique_modes.m"
        {
#line 131 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(check_hlds__unique_modes__InDuplForSwitch_12, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14);
#line 131 "unique_modes.m"
          return;
        }
#line 128 "unique_modes.m"
      }
#line 132 "unique_modes.m"
    else
#line 141 "unique_modes.m"
      {
#line 141 "unique_modes.m"
        MR_Word check_hlds__unique_modes__InstMap0_49;
#line 141 "unique_modes.m"
        MR_Word check_hlds__unique_modes__NondetLiveVars0_50;
#line 141 "unique_modes.m"
        MR_Word check_hlds__unique_modes__Detism_51;
#line 141 "unique_modes.m"
        MR_Word check_hlds__unique_modes__GoalExpr_53;
#line 141 "unique_modes.m"
        MR_Word check_hlds__unique_modes__GoalInfo_54;
#line 141 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_57;
#line 141 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_58;
#line 141 "unique_modes.m"
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_59;
#line 149 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_62_62;
#line 149 "unique_modes.m"
        MR_Word check_hlds__unique_modes__V_52_52;

#line 142 "unique_modes.m"
        {
#line 142 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__InstMap0_49);
        }
#line 144 "unique_modes.m"
        {
#line 144 "unique_modes.m"
          check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__NondetLiveVars0_50);
        }
#line 148 "unique_modes.m"
        {
#line 148 "unique_modes.m"
          check_hlds__unique_modes__Detism_51 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_9);
        }
#line 149 "unique_modes.m"
        {
#line 149 "unique_modes.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Detism_51, &check_hlds__unique_modes__V_52_52, &check_hlds__unique_modes__V_62_62);
        }
#line 149 "unique_modes.m"
        check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__V_62_62);
#line 151 "unique_modes.m"
        if (check_hlds__unique_modes__succeeded)
#line 151 "unique_modes.m"
          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_57 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15;
#line 151 "unique_modes.m"
        else
#line 152 "unique_modes.m"
          {
#line 152 "unique_modes.m"
            MR_Word check_hlds__unique_modes__V_56_56;

#line 152 "unique_modes.m"
            {
#line 152 "unique_modes.m"
              check_hlds__unique_modes__V_56_56 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[0]);
            }
#line 152 "unique_modes.m"
            {
#line 152 "unique_modes.m"
              check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__unique_modes__V_56_56, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_57);
            }
#line 152 "unique_modes.m"
          }
#line 155 "unique_modes.m"
        {
#line 155 "unique_modes.m"
          check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(check_hlds__unique_modes__GoalExpr0_8, check_hlds__unique_modes__GoalInfo0_9, &check_hlds__unique_modes__GoalExpr_53, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_57, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_58);
        }
#line 157 "unique_modes.m"
        {
#line 157 "unique_modes.m"
          check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__unique_modes__NondetLiveVars0_50, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_58, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_59);
        }
#line 161 "unique_modes.m"
        {
#line 161 "unique_modes.m"
          check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(check_hlds__unique_modes__InstMap0_49, check_hlds__unique_modes__GoalExpr_53, check_hlds__unique_modes__GoalInfo0_9, &check_hlds__unique_modes__GoalInfo_54, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_59, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14);
        }
#line 163 "unique_modes.m"
        {
#line 163 "unique_modes.m"
          MR_Word base;
#line 163 "unique_modes.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 163 "unique_modes.m"
          *check_hlds__unique_modes__Goal_6 = base;
#line 163 "unique_modes.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unique_modes__GoalExpr_53));
#line 163 "unique_modes.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unique_modes__GoalInfo_54));
#line 163 "unique_modes.m"
        }
#line 141 "unique_modes.m"
      }
#line 118 "unique_modes.m"
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
#line 114 "unique_modes.m"
  {
#line 114 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;

#line 115 "unique_modes.m"
    {
#line 115 "unique_modes.m"
      check_hlds__modes__modecheck_proc_general_8_p_0(check_hlds__unique_modes__ProcId_7, check_hlds__unique_modes__PredId_8, (MR_Integer) 1, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_13, check_hlds__unique_modes__Specs_11, check_hlds__unique_modes__Changed_10);
#line 115 "unique_modes.m"
      return;
    }
#line 114 "unique_modes.m"
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
#line 110 "unique_modes.m"
  {
#line 110 "unique_modes.m"
    MR_bool check_hlds__unique_modes__succeeded;
#line 111 "unique_modes.m"
    MR_Word check_hlds__unique_modes___SafeToContinue_6;

#line 111 "unique_modes.m"
    {
#line 111 "unique_modes.m"
      check_hlds__modes__check_pred_modes_6_p_0((MR_Integer) 1, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_8, &check_hlds__unique_modes___SafeToContinue_6, check_hlds__unique_modes__Specs_5);
    }
#line 110 "unique_modes.m"
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
