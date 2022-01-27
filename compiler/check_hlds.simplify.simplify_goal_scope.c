/*
** Automatically generated from `simplify_goal_scope.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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


/* :- module check_hlds.simplify.simplify_goal_scope. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__simplify_goal_scope__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_scope.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.unify_proc.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 142 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 145 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0;

#line 148 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0;

#line 151 "check_hlds.simplify.simplify_goal_scope.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0_10001(
#line 154 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
#line 156 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_2);

#line 159 "check_hlds.simplify.simplify_goal_scope.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0_10001(
#line 162 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
#line 164 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_2,
#line 166 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_3);

#line 272 "simplify_goal_scope.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__272__1_2_p_0(
#line 272 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_11,
#line 272 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__LHSVar_32);

#line 262 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__262__1_4_p_0(
#line 262 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__1_67,
#line 262 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__2_68,
#line 262 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__3_69,
#line 262 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__4_70);

#line 235 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0(
#line 235 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__1_1,
#line 235 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__2_2,
#line 235 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__3_3);

#line 235 "simplify_goal_scope.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0(
#line 235 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__1_1,
#line 235 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__2_2);

#line 520 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__loop_over_any_nested_scopes_4_p_0(
#line 520 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Reason0_5,
#line 520 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__Reason_6,
#line 520 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Goal0_7,
#line 520 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__Goal_8);

#line 374 "simplify_goal_scope.m"
static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(
#line 374 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__TraceExpr_4,
#line 374 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Info_5);

#line 284 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_goal_trace_goal_7_p_0(
#line 284 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_8,
#line 284 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_9,
#line 284 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal_10,
#line 284 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Goal0_11,
#line 284 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__Goal_12,
#line 284 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_30,
#line 284 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_31);

#line 272 "simplify_goal_scope.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_2(
#line 272 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__closure_arg);

#line 262 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_1(
#line 262 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__closure_arg,
#line 262 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
#line 262 "simplify_goal_scope.m"
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_2,
#line 262 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_3,
#line 262 "simplify_goal_scope.m"
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_4);

#line 237 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0(
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_11,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__VarTypes_12,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Conjunct_13,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Conjuncts_14,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46,
#line 237 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_47,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48,
#line 237 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_49,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50,
#line 237 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_51);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_2[2][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_3[1][7];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_4[1][5];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope_scalar_common_1[0])),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope_scalar_common_3[0])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



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



#line 370 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 378 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 386 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0
  }
};

#line 395 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0
  }
};

#line 404 "check_hlds.simplify.simplify_goal_scope.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_scope__check_hlds__simplify__simplify_goal_scope__type_ctor_info_var_to_arg_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_scope",
  (MR_String) "var_to_arg_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_scope__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 425 "check_hlds.simplify.simplify_goal_scope.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0_10001(
#line 428 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
#line 430 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_2)
#line 432 "check_hlds.simplify.simplify_goal_scope.c"
{
#line 434 "check_hlds.simplify.simplify_goal_scope.c"
  {
#line 436 "check_hlds.simplify.simplify_goal_scope.c"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;

#line 439 "check_hlds.simplify.simplify_goal_scope.c"
    {
#line 441 "check_hlds.simplify.simplify_goal_scope.c"
      check_hlds__simplify__simplify_goal_scope__succeeded = check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0(((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_2));
    }
#line 444 "check_hlds.simplify.simplify_goal_scope.c"
    return check_hlds__simplify__simplify_goal_scope__succeeded;
#line 446 "check_hlds.simplify.simplify_goal_scope.c"
  }
#line 448 "check_hlds.simplify.simplify_goal_scope.c"
}

#line 451 "check_hlds.simplify.simplify_goal_scope.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0_10001(
#line 454 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
#line 456 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_2,
#line 458 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_3)
#line 460 "check_hlds.simplify.simplify_goal_scope.c"
{
#line 462 "check_hlds.simplify.simplify_goal_scope.c"
  {
#line 464 "check_hlds.simplify.simplify_goal_scope.c"
    MR_Word check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__1_1;

#line 467 "check_hlds.simplify.simplify_goal_scope.c"
    {
#line 469 "check_hlds.simplify.simplify_goal_scope.c"
      check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0(&check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_3));
    }
#line 472 "check_hlds.simplify.simplify_goal_scope.c"
    *check_hlds__simplify__simplify_goal_scope__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__1_1));
#line 474 "check_hlds.simplify.simplify_goal_scope.c"
  }
#line 476 "check_hlds.simplify.simplify_goal_scope.c"
}

#line 272 "simplify_goal_scope.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__272__1_2_p_0(
#line 272 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_11,
#line 272 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__LHSVar_32)
#line 272 "simplify_goal_scope.m"
{
#line 272 "simplify_goal_scope.m"
  {
#line 272 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;

#line 272 "simplify_goal_scope.m"
    {
#line 272 "simplify_goal_scope.m"
      return check_hlds__simplify__simplify_goal_scope__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_11)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__LHSVar_32)));
    }
#line 272 "simplify_goal_scope.m"
    return check_hlds__simplify__simplify_goal_scope__succeeded;
#line 272 "simplify_goal_scope.m"
  }
#line 272 "simplify_goal_scope.m"
}

#line 262 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__262__1_4_p_0(
#line 262 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__1_67,
#line 262 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__2_68,
#line 262 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__3_69,
#line 262 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__4_70)
#line 262 "simplify_goal_scope.m"
{
#line 262 "simplify_goal_scope.m"
  {
#line 262 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 262 "simplify_goal_scope.m"
    MR_Box check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__2_68;

#line 262 "simplify_goal_scope.m"
    {
#line 262 "simplify_goal_scope.m"
      mercury__map__det_remove_4_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__HeadVar__1_67)), &check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__2_68, check_hlds__simplify__simplify_goal_scope__HeadVar__3_69, check_hlds__simplify__simplify_goal_scope__HeadVar__4_70);
    }
#line 262 "simplify_goal_scope.m"
    *check_hlds__simplify__simplify_goal_scope__HeadVar__2_68 = ((MR_Word) check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__2_68);
#line 262 "simplify_goal_scope.m"
  }
#line 262 "simplify_goal_scope.m"
}

#line 235 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0(
#line 235 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__1_1,
#line 235 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__2_2,
#line 235 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__3_3)
#line 235 "simplify_goal_scope.m"
{
#line 235 "simplify_goal_scope.m"
  {
#line 235 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 235 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Cast_HeadVar1_4 = check_hlds__simplify__simplify_goal_scope__HeadVar__2_2;
#line 235 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Cast_HeadVar2_5 = check_hlds__simplify__simplify_goal_scope__HeadVar__3_3;

#line 235 "simplify_goal_scope.m"
    {
#line 235 "simplify_goal_scope.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_2[0], check_hlds__simplify__simplify_goal_scope__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Cast_HeadVar2_5)));
#line 235 "simplify_goal_scope.m"
      return;
    }
#line 235 "simplify_goal_scope.m"
  }
#line 235 "simplify_goal_scope.m"
}

#line 235 "simplify_goal_scope.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0(
#line 235 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__1_1,
#line 235 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__2_2)
#line 235 "simplify_goal_scope.m"
{
#line 235 "simplify_goal_scope.m"
  {
#line 235 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 235 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Cast_HeadVar1_3 = check_hlds__simplify__simplify_goal_scope__HeadVar__1_1;
#line 235 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Cast_HeadVar2_4 = check_hlds__simplify__simplify_goal_scope__HeadVar__2_2;

#line 235 "simplify_goal_scope.m"
    {
#line 235 "simplify_goal_scope.m"
      return check_hlds__simplify__simplify_goal_scope__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Cast_HeadVar2_4)));
    }
#line 235 "simplify_goal_scope.m"
    return check_hlds__simplify__simplify_goal_scope__succeeded;
#line 235 "simplify_goal_scope.m"
  }
#line 235 "simplify_goal_scope.m"
}

#line 520 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__loop_over_any_nested_scopes_4_p_0(
#line 520 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Reason0_5,
#line 520 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__Reason_6,
#line 520 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Goal0_7,
#line 520 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__Goal_8)
#line 520 "simplify_goal_scope.m"
{
#line 562 "simplify_goal_scope.m"
  while (MR_TRUE)
#line 562 "simplify_goal_scope.m"
    {
#line 562 "simplify_goal_scope.m"
      /* tailcall optimized into a loop */
#line 562 "simplify_goal_scope.m"
      {
#line 562 "simplify_goal_scope.m"
        MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 562 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Goal1_10;
#line 562 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Reason2_14;
#line 525 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Reason1_9;
#line 525 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_7, (MR_Integer) 0)));
#line 525 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_7, (MR_Integer) 1)));
#line 531 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Vars0_12;
#line 531 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Vars1_13;

#line 525 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 525 "simplify_goal_scope.m"
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 525 "simplify_goal_scope.m"
          {
#line 525 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__Reason1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__V_21_21, (MR_Integer) 1)));
#line 525 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__Goal1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__V_21_21, (MR_Integer) 2)));
#line 527 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason0_5)) == (MR_mktag((MR_Integer) 0)));
#line 527 "simplify_goal_scope.m"
            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 527 "simplify_goal_scope.m"
              {
#line 527 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__Vars0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 0)));
#line 528 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason1_9)) == (MR_mktag((MR_Integer) 0)));
#line 528 "simplify_goal_scope.m"
                if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 528 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__Vars1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 0)));
#line 527 "simplify_goal_scope.m"
              }
#line 531 "simplify_goal_scope.m"
            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 530 "simplify_goal_scope.m"
              {
#line 530 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__V_22_22;

#line 530 "simplify_goal_scope.m"
                {
#line 530 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__V_22_22 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], check_hlds__simplify__simplify_goal_scope__Vars0_12, check_hlds__simplify__simplify_goal_scope__Vars1_13);
                }
#line 530 "simplify_goal_scope.m"
                {
#line 530 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__Reason2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 530 "simplify_goal_scope.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Reason2_14, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_22_22));
#line 530 "simplify_goal_scope.m"
                }
#line 530 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__succeeded = MR_TRUE;
#line 530 "simplify_goal_scope.m"
              }
#line 531 "simplify_goal_scope.m"
            else
#line 544 "simplify_goal_scope.m"
              {
#line 544 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__Removable0_15;
#line 544 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__Removable1_16;

#line 532 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 532 "simplify_goal_scope.m"
                if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 532 "simplify_goal_scope.m"
                  {
#line 532 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__Removable0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 1)));
#line 533 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 533 "simplify_goal_scope.m"
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 533 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Removable1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 1)));
#line 532 "simplify_goal_scope.m"
                  }
#line 544 "simplify_goal_scope.m"
                if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 542 "simplify_goal_scope.m"
                  {
#line 542 "simplify_goal_scope.m"
                    MR_Word check_hlds__simplify__simplify_goal_scope__Removable2_17;

#line 536 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Removable0_15 == (MR_Integer) 0);
#line 536 "simplify_goal_scope.m"
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 537 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Removable1_16 == (MR_Integer) 0);
#line 540 "simplify_goal_scope.m"
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 539 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Removable2_17 = (MR_Integer) 0;
#line 540 "simplify_goal_scope.m"
                    else
#line 541 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Removable2_17 = (MR_Integer) 1;
#line 543 "simplify_goal_scope.m"
                    {
#line 543 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Reason2_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "simplify_goal_scope.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason2_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 543 "simplify_goal_scope.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason2_14, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Removable2_17));
#line 543 "simplify_goal_scope.m"
                    }
#line 542 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__succeeded = MR_TRUE;
#line 542 "simplify_goal_scope.m"
                  }
#line 544 "simplify_goal_scope.m"
                else
#line 557 "simplify_goal_scope.m"
                  {
#line 557 "simplify_goal_scope.m"
                    MR_Word check_hlds__simplify__simplify_goal_scope__ForcePruning0_18;
#line 557 "simplify_goal_scope.m"
                    MR_Word check_hlds__simplify__simplify_goal_scope__ForcePruning1_19;
#line 557 "simplify_goal_scope.m"
                    MR_Word check_hlds__simplify__simplify_goal_scope__ForcePruning2_20;

#line 545 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 545 "simplify_goal_scope.m"
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 545 "simplify_goal_scope.m"
                      {
#line 545 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__ForcePruning0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 1)));
#line 546 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 546 "simplify_goal_scope.m"
                        if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 546 "simplify_goal_scope.m"
                          {
#line 546 "simplify_goal_scope.m"
                            check_hlds__simplify__simplify_goal_scope__ForcePruning1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 1)));
#line 549 "simplify_goal_scope.m"
                            check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__ForcePruning0_18 == (MR_Integer) 1);
#line 549 "simplify_goal_scope.m"
                            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 550 "simplify_goal_scope.m"
                              check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__ForcePruning1_19 == (MR_Integer) 1);
#line 553 "simplify_goal_scope.m"
                            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 552 "simplify_goal_scope.m"
                              check_hlds__simplify__simplify_goal_scope__ForcePruning2_20 = (MR_Integer) 1;
#line 553 "simplify_goal_scope.m"
                            else
#line 554 "simplify_goal_scope.m"
                              check_hlds__simplify__simplify_goal_scope__ForcePruning2_20 = (MR_Integer) 0;
#line 556 "simplify_goal_scope.m"
                            {
#line 556 "simplify_goal_scope.m"
                              check_hlds__simplify__simplify_goal_scope__Reason2_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "simplify_goal_scope.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason2_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 556 "simplify_goal_scope.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason2_14, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ForcePruning2_20));
#line 556 "simplify_goal_scope.m"
                            }
#line 556 "simplify_goal_scope.m"
                            check_hlds__simplify__simplify_goal_scope__succeeded = MR_TRUE;
#line 546 "simplify_goal_scope.m"
                          }
#line 545 "simplify_goal_scope.m"
                      }
#line 557 "simplify_goal_scope.m"
                  }
#line 544 "simplify_goal_scope.m"
              }
#line 525 "simplify_goal_scope.m"
          }
#line 562 "simplify_goal_scope.m"
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 561 "simplify_goal_scope.m"
          {
#line 561 "simplify_goal_scope.m"
            /* direct tailcall eliminated */
#line 561 "simplify_goal_scope.m"
            {
#line 561 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__Reason0__tmp_copy_5 = check_hlds__simplify__simplify_goal_scope__Reason2_14;
#line 561 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__Goal0__tmp_copy_7 = check_hlds__simplify__simplify_goal_scope__Goal1_10;

#line 561 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Goal0_7 = check_hlds__simplify__simplify_goal_scope__Goal0__tmp_copy_7;
#line 561 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Reason0_5 = check_hlds__simplify__simplify_goal_scope__Reason0__tmp_copy_5;
#line 561 "simplify_goal_scope.m"
            }
#line 561 "simplify_goal_scope.m"
            continue;
#line 561 "simplify_goal_scope.m"
          }
#line 562 "simplify_goal_scope.m"
        else
#line 563 "simplify_goal_scope.m"
          {
#line 563 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__Reason_6 = check_hlds__simplify__simplify_goal_scope__Reason0_5;
#line 564 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__Goal_8 = check_hlds__simplify__simplify_goal_scope__Goal0_7;
#line 563 "simplify_goal_scope.m"
          }
#line 562 "simplify_goal_scope.m"
      }
#line 562 "simplify_goal_scope.m"
      break;
#line 562 "simplify_goal_scope.m"
    }
#line 520 "simplify_goal_scope.m"
}

#line 374 "simplify_goal_scope.m"
static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(
#line 374 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__TraceExpr_4,
#line 374 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Info_5)
#line 374 "simplify_goal_scope.m"
{
#line 379 "simplify_goal_scope.m"
  {
#line 379 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 379 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Result_6;

#line 379 "simplify_goal_scope.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__TraceExpr_4)) == (MR_mktag((MR_Integer) 0))))
#line 379 "simplify_goal_scope.m"
      {
#line 379 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__BaseExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 0)));
#line 379 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__ModuleInfo_18;
#line 379 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Globals_19;

#line 402 "simplify_goal_scope.m"
        {
#line 402 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_scope__Info_5, &check_hlds__simplify__simplify_goal_scope__ModuleInfo_18);
        }
#line 403 "simplify_goal_scope.m"
        {
#line 403 "simplify_goal_scope.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo_18, &check_hlds__simplify__simplify_goal_scope__Globals_19);
        }
#line 412 "simplify_goal_scope.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__BaseExpr_7)) == (MR_mktag((MR_Integer) 0))))
#line 405 "simplify_goal_scope.m"
          {
#line 405 "simplify_goal_scope.m"
            MR_String check_hlds__simplify__simplify_goal_scope__FlagName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__BaseExpr_7, (MR_Integer) 0)));
#line 405 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__Flags_21;

#line 406 "simplify_goal_scope.m"
            {
#line 406 "simplify_goal_scope.m"
              libs__globals__lookup_accumulating_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 123, &check_hlds__simplify__simplify_goal_scope__Flags_21);
            }
#line 407 "simplify_goal_scope.m"
            {
#line 407 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__FlagName_20)), check_hlds__simplify__simplify_goal_scope__Flags_21);
            }
#line 409 "simplify_goal_scope.m"
            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 408 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
#line 409 "simplify_goal_scope.m"
            else
#line 410 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
#line 405 "simplify_goal_scope.m"
          }
#line 412 "simplify_goal_scope.m"
        else
#line 412 "simplify_goal_scope.m"
          if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__BaseExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 413 "simplify_goal_scope.m"
            {
#line 413 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__Grade_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__BaseExpr_7, (MR_Integer) 0)));

#line 417 "simplify_goal_scope.m"
              if ((check_hlds__simplify__simplify_goal_scope__Grade_22 == (MR_Integer) 9))
#line 447 "simplify_goal_scope.m"
                {
#line 447 "simplify_goal_scope.m"
                  MR_Word check_hlds__simplify__simplify_goal_scope__Target_27;

#line 448 "simplify_goal_scope.m"
                  {
#line 448 "simplify_goal_scope.m"
                    libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__Target_27);
                  }
#line 449 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Target_27 == (MR_Integer) 0);
#line 451 "simplify_goal_scope.m"
                  if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 450 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
#line 451 "simplify_goal_scope.m"
                  else
#line 452 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
#line 447 "simplify_goal_scope.m"
                }
#line 417 "simplify_goal_scope.m"
              else
#line 417 "simplify_goal_scope.m"
                if ((check_hlds__simplify__simplify_goal_scope__Grade_22 == (MR_Integer) 11))
#line 463 "simplify_goal_scope.m"
                  {
#line 463 "simplify_goal_scope.m"
                    MR_Word check_hlds__simplify__simplify_goal_scope__Target_50;

#line 464 "simplify_goal_scope.m"
                    {
#line 464 "simplify_goal_scope.m"
                      libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__Target_50);
                    }
#line 465 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Target_50 == (MR_Integer) 2);
#line 467 "simplify_goal_scope.m"
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 466 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
#line 467 "simplify_goal_scope.m"
                    else
#line 468 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
#line 463 "simplify_goal_scope.m"
                  }
#line 417 "simplify_goal_scope.m"
                else
#line 417 "simplify_goal_scope.m"
                  if ((check_hlds__simplify__simplify_goal_scope__Grade_22 == (MR_Integer) 0))
#line 415 "simplify_goal_scope.m"
                    {
#line 416 "simplify_goal_scope.m"
                      {
#line 416 "simplify_goal_scope.m"
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 180, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
#line 415 "simplify_goal_scope.m"
                    }
#line 417 "simplify_goal_scope.m"
                  else
#line 417 "simplify_goal_scope.m"
                    if ((check_hlds__simplify__simplify_goal_scope__Grade_22 == (MR_Integer) 13))
#line 479 "simplify_goal_scope.m"
                      {
#line 479 "simplify_goal_scope.m"
                        MR_Word check_hlds__simplify__simplify_goal_scope__Target_52;

#line 480 "simplify_goal_scope.m"
                        {
#line 480 "simplify_goal_scope.m"
                          libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__Target_52);
                        }
#line 481 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Target_52 == (MR_Integer) 4);
#line 483 "simplify_goal_scope.m"
                        if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 482 "simplify_goal_scope.m"
                          check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
#line 483 "simplify_goal_scope.m"
                        else
#line 484 "simplify_goal_scope.m"
                          check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
#line 479 "simplify_goal_scope.m"
                      }
#line 417 "simplify_goal_scope.m"
                    else
#line 417 "simplify_goal_scope.m"
                      if ((check_hlds__simplify__simplify_goal_scope__Grade_22 == (MR_Integer) 10))
#line 455 "simplify_goal_scope.m"
                        {
#line 455 "simplify_goal_scope.m"
                          MR_Word check_hlds__simplify__simplify_goal_scope__Target_49;

#line 456 "simplify_goal_scope.m"
                          {
#line 456 "simplify_goal_scope.m"
                            libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__Target_49);
                          }
#line 457 "simplify_goal_scope.m"
                          check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Target_49 == (MR_Integer) 1);
#line 459 "simplify_goal_scope.m"
                          if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 458 "simplify_goal_scope.m"
                            check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
#line 459 "simplify_goal_scope.m"
                          else
#line 460 "simplify_goal_scope.m"
                            check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
#line 455 "simplify_goal_scope.m"
                        }
#line 417 "simplify_goal_scope.m"
                      else
#line 417 "simplify_goal_scope.m"
                        if ((check_hlds__simplify__simplify_goal_scope__Grade_22 == (MR_Integer) 12))
#line 471 "simplify_goal_scope.m"
                          {
#line 471 "simplify_goal_scope.m"
                            MR_Word check_hlds__simplify__simplify_goal_scope__Target_51;

#line 472 "simplify_goal_scope.m"
                            {
#line 472 "simplify_goal_scope.m"
                              libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__Target_51);
                            }
#line 473 "simplify_goal_scope.m"
                            check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Target_51 == (MR_Integer) 3);
#line 475 "simplify_goal_scope.m"
                            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 474 "simplify_goal_scope.m"
                              check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
#line 475 "simplify_goal_scope.m"
                            else
#line 476 "simplify_goal_scope.m"
                              check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
#line 471 "simplify_goal_scope.m"
                          }
#line 417 "simplify_goal_scope.m"
                        else
#line 417 "simplify_goal_scope.m"
                          if ((check_hlds__simplify__simplify_goal_scope__Grade_22 == (MR_Integer) 7))
#line 440 "simplify_goal_scope.m"
                            {
#line 440 "simplify_goal_scope.m"
                              MR_Word check_hlds__simplify__simplify_goal_scope__NotResult_26;

#line 441 "simplify_goal_scope.m"
                              {
#line 441 "simplify_goal_scope.m"
                                libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 248, &check_hlds__simplify__simplify_goal_scope__NotResult_26);
                              }
#line 442 "simplify_goal_scope.m"
                              {
#line 442 "simplify_goal_scope.m"
                                mercury__bool__not_2_p_0(check_hlds__simplify__simplify_goal_scope__NotResult_26, &check_hlds__simplify__simplify_goal_scope__Result_6);
                              }
#line 440 "simplify_goal_scope.m"
                            }
#line 417 "simplify_goal_scope.m"
                          else
#line 417 "simplify_goal_scope.m"
                            if ((check_hlds__simplify__simplify_goal_scope__Grade_22 == (MR_Integer) 8))
#line 444 "simplify_goal_scope.m"
                              {
#line 445 "simplify_goal_scope.m"
                                {
#line 445 "simplify_goal_scope.m"
                                  libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 248, &check_hlds__simplify__simplify_goal_scope__Result_6);
                                }
#line 444 "simplify_goal_scope.m"
                              }
#line 417 "simplify_goal_scope.m"
                            else
#line 417 "simplify_goal_scope.m"
                              if ((check_hlds__simplify__simplify_goal_scope__Grade_22 == (MR_Integer) 4))
#line 431 "simplify_goal_scope.m"
                                {
#line 432 "simplify_goal_scope.m"
                                  {
#line 432 "simplify_goal_scope.m"
                                    libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 210, &check_hlds__simplify__simplify_goal_scope__Result_6);
                                  }
#line 431 "simplify_goal_scope.m"
                                }
#line 417 "simplify_goal_scope.m"
                              else
#line 417 "simplify_goal_scope.m"
                                if ((check_hlds__simplify__simplify_goal_scope__Grade_22 == (MR_Integer) 2))
#line 422 "simplify_goal_scope.m"
                                  {
#line 422 "simplify_goal_scope.m"
                                    MR_Word check_hlds__simplify__simplify_goal_scope__ProfCalls_23;
#line 422 "simplify_goal_scope.m"
                                    MR_Word check_hlds__simplify__simplify_goal_scope__ProfTime_24;
#line 422 "simplify_goal_scope.m"
                                    MR_Word check_hlds__simplify__simplify_goal_scope__ProfMem_25;
#line 422 "simplify_goal_scope.m"
                                    MR_Word check_hlds__simplify__simplify_goal_scope__V_42_42;
#line 422 "simplify_goal_scope.m"
                                    MR_Word check_hlds__simplify__simplify_goal_scope__V_43_43;
#line 422 "simplify_goal_scope.m"
                                    MR_Word check_hlds__simplify__simplify_goal_scope__V_44_44;

#line 423 "simplify_goal_scope.m"
                                    {
#line 423 "simplify_goal_scope.m"
                                      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 186, &check_hlds__simplify__simplify_goal_scope__ProfCalls_23);
                                    }
#line 424 "simplify_goal_scope.m"
                                    {
#line 424 "simplify_goal_scope.m"
                                      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 187, &check_hlds__simplify__simplify_goal_scope__ProfTime_24);
                                    }
#line 425 "simplify_goal_scope.m"
                                    {
#line 425 "simplify_goal_scope.m"
                                      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 188, &check_hlds__simplify__simplify_goal_scope__ProfMem_25);
                                    }
#line 426 "simplify_goal_scope.m"
                                    {
#line 426 "simplify_goal_scope.m"
                                      check_hlds__simplify__simplify_goal_scope__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "simplify_goal_scope.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__V_44_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ProfMem_25));
#line 426 "simplify_goal_scope.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "simplify_goal_scope.m"
                                    }
#line 426 "simplify_goal_scope.m"
                                    {
#line 426 "simplify_goal_scope.m"
                                      check_hlds__simplify__simplify_goal_scope__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "simplify_goal_scope.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__V_43_43, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ProfTime_24));
#line 426 "simplify_goal_scope.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__V_43_43, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_44_44));
#line 426 "simplify_goal_scope.m"
                                    }
#line 426 "simplify_goal_scope.m"
                                    {
#line 426 "simplify_goal_scope.m"
                                      check_hlds__simplify__simplify_goal_scope__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "simplify_goal_scope.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__V_42_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ProfCalls_23));
#line 426 "simplify_goal_scope.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__V_42_42, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_43_43));
#line 426 "simplify_goal_scope.m"
                                    }
#line 426 "simplify_goal_scope.m"
                                    {
#line 426 "simplify_goal_scope.m"
                                      mercury__bool__or_list_2_p_0(check_hlds__simplify__simplify_goal_scope__V_42_42, &check_hlds__simplify__simplify_goal_scope__Result_6);
                                    }
#line 422 "simplify_goal_scope.m"
                                  }
#line 417 "simplify_goal_scope.m"
                                else
#line 417 "simplify_goal_scope.m"
                                  if ((check_hlds__simplify__simplify_goal_scope__Grade_22 == (MR_Integer) 3))
#line 428 "simplify_goal_scope.m"
                                    {
#line 429 "simplify_goal_scope.m"
                                      {
#line 429 "simplify_goal_scope.m"
                                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 189, &check_hlds__simplify__simplify_goal_scope__Result_6);
                                      }
#line 428 "simplify_goal_scope.m"
                                    }
#line 417 "simplify_goal_scope.m"
                                  else
#line 417 "simplify_goal_scope.m"
                                    if ((check_hlds__simplify__simplify_goal_scope__Grade_22 == (MR_Integer) 6))
#line 437 "simplify_goal_scope.m"
                                      {
#line 438 "simplify_goal_scope.m"
                                        {
#line 438 "simplify_goal_scope.m"
                                          libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 223, &check_hlds__simplify__simplify_goal_scope__Result_6);
                                        }
#line 437 "simplify_goal_scope.m"
                                      }
#line 417 "simplify_goal_scope.m"
                                    else
#line 417 "simplify_goal_scope.m"
                                      if ((check_hlds__simplify__simplify_goal_scope__Grade_22 == (MR_Integer) 1))
#line 418 "simplify_goal_scope.m"
                                        {
#line 419 "simplify_goal_scope.m"
                                          {
#line 419 "simplify_goal_scope.m"
                                            libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 227, &check_hlds__simplify__simplify_goal_scope__Result_6);
                                          }
#line 418 "simplify_goal_scope.m"
                                        }
#line 417 "simplify_goal_scope.m"
                                      else
#line 434 "simplify_goal_scope.m"
                                        {
#line 435 "simplify_goal_scope.m"
                                          {
#line 435 "simplify_goal_scope.m"
                                            libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 212, &check_hlds__simplify__simplify_goal_scope__Result_6);
                                          }
#line 434 "simplify_goal_scope.m"
                                        }
#line 413 "simplify_goal_scope.m"
            }
#line 412 "simplify_goal_scope.m"
          else
#line 488 "simplify_goal_scope.m"
            {
#line 488 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__Level_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_scope__BaseExpr_7, (MR_Integer) 0)));
#line 488 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__TraceLevel_29;
#line 488 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__PredInfo_30;
#line 488 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__ProcInfo_31;
#line 488 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__EffTraceLevel_32;

#line 489 "simplify_goal_scope.m"
              {
#line 489 "simplify_goal_scope.m"
                libs__globals__get_trace_level_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__TraceLevel_29);
              }
#line 490 "simplify_goal_scope.m"
              {
#line 490 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_info_3_p_0(check_hlds__simplify__simplify_goal_scope__Info_5, &check_hlds__simplify__simplify_goal_scope__PredInfo_30, &check_hlds__simplify__simplify_goal_scope__ProcInfo_31);
              }
#line 491 "simplify_goal_scope.m"
              {
#line 491 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__EffTraceLevel_32 = libs__trace_params__eff_trace_level_4_f_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo_18, check_hlds__simplify__simplify_goal_scope__PredInfo_30, check_hlds__simplify__simplify_goal_scope__ProcInfo_31, check_hlds__simplify__simplify_goal_scope__TraceLevel_29);
              }
#line 496 "simplify_goal_scope.m"
              if ((check_hlds__simplify__simplify_goal_scope__Level_28 == (MR_Integer) 1))
#line 498 "simplify_goal_scope.m"
                {
#line 498 "simplify_goal_scope.m"
                  return check_hlds__simplify__simplify_goal_scope__Result_6 = libs__trace_params__at_least_at_deep_1_f_0(check_hlds__simplify__simplify_goal_scope__EffTraceLevel_32);
                }
#line 496 "simplify_goal_scope.m"
              else
#line 495 "simplify_goal_scope.m"
                {
#line 495 "simplify_goal_scope.m"
                  return check_hlds__simplify__simplify_goal_scope__Result_6 = libs__trace_params__at_least_at_shallow_1_f_0(check_hlds__simplify__simplify_goal_scope__EffTraceLevel_32);
                }
#line 488 "simplify_goal_scope.m"
            }
#line 379 "simplify_goal_scope.m"
      }
#line 379 "simplify_goal_scope.m"
    else
#line 379 "simplify_goal_scope.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__TraceExpr_4)) == (MR_mktag((MR_Integer) 1))))
#line 382 "simplify_goal_scope.m"
        {
#line 382 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__ExprA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 0)));
#line 382 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__ResultA_9;

#line 383 "simplify_goal_scope.m"
          {
#line 383 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__ResultA_9 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(check_hlds__simplify__simplify_goal_scope__ExprA_8, check_hlds__simplify__simplify_goal_scope__Info_5);
          }
#line 384 "simplify_goal_scope.m"
          {
#line 384 "simplify_goal_scope.m"
            return check_hlds__simplify__simplify_goal_scope__Result_6 = mercury__bool__not_1_f_0(check_hlds__simplify__simplify_goal_scope__ResultA_9);
          }
#line 382 "simplify_goal_scope.m"
        }
#line 379 "simplify_goal_scope.m"
      else
#line 386 "simplify_goal_scope.m"
        {
#line 386 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__Op_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 0)));
#line 386 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__ExprB_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 2)));
#line 386 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__ResultB_12;
#line 386 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__ExprA_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 1)));
#line 386 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__ResultA_14;

#line 387 "simplify_goal_scope.m"
          {
#line 387 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__ResultA_14 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(check_hlds__simplify__simplify_goal_scope__ExprA_13, check_hlds__simplify__simplify_goal_scope__Info_5);
          }
#line 388 "simplify_goal_scope.m"
          {
#line 388 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__ResultB_12 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(check_hlds__simplify__simplify_goal_scope__ExprB_11, check_hlds__simplify__simplify_goal_scope__Info_5);
          }
#line 392 "simplify_goal_scope.m"
          if ((check_hlds__simplify__simplify_goal_scope__Op_10 == (MR_Integer) 1))
#line 394 "simplify_goal_scope.m"
            {
#line 394 "simplify_goal_scope.m"
              return check_hlds__simplify__simplify_goal_scope__Result_6 = mercury__bool__and_2_f_0(check_hlds__simplify__simplify_goal_scope__ResultA_14, check_hlds__simplify__simplify_goal_scope__ResultB_12);
            }
#line 392 "simplify_goal_scope.m"
          else
#line 391 "simplify_goal_scope.m"
            {
#line 391 "simplify_goal_scope.m"
              return check_hlds__simplify__simplify_goal_scope__Result_6 = mercury__bool__or_2_f_0(check_hlds__simplify__simplify_goal_scope__ResultA_14, check_hlds__simplify__simplify_goal_scope__ResultB_12);
            }
#line 386 "simplify_goal_scope.m"
        }
#line 379 "simplify_goal_scope.m"
    return check_hlds__simplify__simplify_goal_scope__Result_6;
#line 379 "simplify_goal_scope.m"
  }
#line 374 "simplify_goal_scope.m"
}

#line 284 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_goal_trace_goal_7_p_0(
#line 284 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_8,
#line 284 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_9,
#line 284 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal_10,
#line 284 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Goal0_11,
#line 284 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__Goal_12,
#line 284 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_30,
#line 284 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_31)
#line 284 "simplify_goal_scope.m"
{
#line 289 "simplify_goal_scope.m"
  {
#line 289 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 289 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__KeepGoal_15;

#line 293 "simplify_goal_scope.m"
    if ((check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 297 "simplify_goal_scope.m"
      check_hlds__simplify__simplify_goal_scope__KeepGoal_15 = (MR_Integer) 1;
#line 293 "simplify_goal_scope.m"
    else
#line 291 "simplify_goal_scope.m"
      {
#line 291 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__CompiletimeExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_8, (MR_Integer) 0)));

#line 292 "simplify_goal_scope.m"
        {
#line 292 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal_scope__KeepGoal_15 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(check_hlds__simplify__simplify_goal_scope__CompiletimeExpr_14, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_30);
        }
#line 291 "simplify_goal_scope.m"
      }
#line 304 "simplify_goal_scope.m"
    if ((check_hlds__simplify__simplify_goal_scope__KeepGoal_15 == (MR_Integer) 0))
#line 300 "simplify_goal_scope.m"
      {
#line 300 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_11, (MR_Integer) 1)));
#line 300 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Context_18;
#line 301 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope___GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_11, (MR_Integer) 0)));

#line 302 "simplify_goal_scope.m"
        {
#line 302 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal_scope__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo0_17);
        }
#line 303 "simplify_goal_scope.m"
        {
#line 303 "simplify_goal_scope.m"
          *check_hlds__simplify__simplify_goal_scope__Goal_12 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_scope__Context_18);
        }
#line 300 "simplify_goal_scope.m"
      }
#line 304 "simplify_goal_scope.m"
    else
#line 304 "simplify_goal_scope.m"
      if ((check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "simplify_goal_scope.m"
        *check_hlds__simplify__simplify_goal_scope__Goal_12 = check_hlds__simplify__simplify_goal_scope__Goal0_11;
#line 304 "simplify_goal_scope.m"
      else
#line 311 "simplify_goal_scope.m"
        {
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__ModuleInfo_20;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__Globals_21;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__Target_22;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__PrivateBuiltin_23;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__EvalAttributes_25;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__CondGoal_28;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__GoalExpr_29;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_44_44;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_46_46;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_48_48;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_50_50;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_52_52;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_54_54;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__V_64_64;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__V_66_66;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__GoalInfo0_69;
#line 311 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__Context_70;
#line 363 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope___GoalExpr0_67;

#line 326 "simplify_goal_scope.m"
          {
#line 326 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_30, &check_hlds__simplify__simplify_goal_scope__ModuleInfo_20);
          }
#line 327 "simplify_goal_scope.m"
          {
#line 327 "simplify_goal_scope.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo_20, &check_hlds__simplify__simplify_goal_scope__Globals_21);
          }
#line 328 "simplify_goal_scope.m"
          {
#line 328 "simplify_goal_scope.m"
            libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_21, &check_hlds__simplify__simplify_goal_scope__Target_22);
          }
#line 329 "simplify_goal_scope.m"
          {
#line 329 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__PrivateBuiltin_23 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 335 "simplify_goal_scope.m"
          if ((check_hlds__simplify__simplify_goal_scope__Target_22 == (MR_Integer) 0))
#line 333 "simplify_goal_scope.m"
            {
#line 334 "simplify_goal_scope.m"
              {
#line 334 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
              }
#line 333 "simplify_goal_scope.m"
            }
#line 335 "simplify_goal_scope.m"
          else
#line 335 "simplify_goal_scope.m"
            if ((check_hlds__simplify__simplify_goal_scope__Target_22 == (MR_Integer) 2))
#line 342 "simplify_goal_scope.m"
              {
#line 343 "simplify_goal_scope.m"
                {
#line 343 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 1);
                }
#line 342 "simplify_goal_scope.m"
              }
#line 335 "simplify_goal_scope.m"
            else
#line 335 "simplify_goal_scope.m"
              if ((check_hlds__simplify__simplify_goal_scope__Target_22 == (MR_Integer) 4))
#line 336 "simplify_goal_scope.m"
                {
#line 337 "simplify_goal_scope.m"
                  {
#line 337 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 4);
                  }
#line 336 "simplify_goal_scope.m"
                }
#line 335 "simplify_goal_scope.m"
              else
#line 335 "simplify_goal_scope.m"
                if ((check_hlds__simplify__simplify_goal_scope__Target_22 == (MR_Integer) 1))
#line 345 "simplify_goal_scope.m"
                  {
#line 346 "simplify_goal_scope.m"
                    {
#line 346 "simplify_goal_scope.m"
                      mercury__require__sorry_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_scope", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_goal_trace_goal\'/7", (MR_String) "runtime trace conditions for this target language");
#line 346 "simplify_goal_scope.m"
                      return;
                    }
#line 345 "simplify_goal_scope.m"
                  }
#line 335 "simplify_goal_scope.m"
                else
#line 339 "simplify_goal_scope.m"
                  {
#line 340 "simplify_goal_scope.m"
                    {
#line 340 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 2);
                    }
#line 339 "simplify_goal_scope.m"
                  }
#line 349 "simplify_goal_scope.m"
          {
#line 349 "simplify_goal_scope.m"
            parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_44_44);
          }
#line 350 "simplify_goal_scope.m"
          {
#line 350 "simplify_goal_scope.m"
            parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_44_44, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_46_46);
          }
#line 351 "simplify_goal_scope.m"
          {
#line 351 "simplify_goal_scope.m"
            parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_46_46, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_48_48);
          }
#line 352 "simplify_goal_scope.m"
          {
#line 352 "simplify_goal_scope.m"
            parse_tree__prog_data__set_terminates_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_48_48, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_50_50);
          }
#line 353 "simplify_goal_scope.m"
          {
#line 353 "simplify_goal_scope.m"
            parse_tree__prog_data__set_may_throw_exception_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_50_50, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_52_52);
          }
#line 355 "simplify_goal_scope.m"
          {
#line 355 "simplify_goal_scope.m"
            parse_tree__prog_data__set_may_modify_trail_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_52_52, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_54_54);
          }
#line 356 "simplify_goal_scope.m"
          {
#line 356 "simplify_goal_scope.m"
            parse_tree__prog_data__set_may_call_mm_tabled_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_54_54, &check_hlds__simplify__simplify_goal_scope__EvalAttributes_25);
          }
#line 363 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal_scope___GoalExpr0_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_11, (MR_Integer) 0)));
#line 363 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal_scope__GoalInfo0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_11, (MR_Integer) 1)));
#line 364 "simplify_goal_scope.m"
          {
#line 364 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__Context_70 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo0_69);
          }
#line 368 "simplify_goal_scope.m"
          {
#line 368 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__V_64_64 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 365 "simplify_goal_scope.m"
          {
#line 365 "simplify_goal_scope.m"
            hlds__goal_util__generate_foreign_proc_16_p_0(check_hlds__simplify__simplify_goal_scope__PrivateBuiltin_23, (MR_String) "trace_evaluate_runtime_condition", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__EvalAttributes_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_9, (MR_String) "", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_scope__V_64_64, check_hlds__simplify__simplify_goal_scope__ModuleInfo_20, check_hlds__simplify__simplify_goal_scope__Context_70, &check_hlds__simplify__simplify_goal_scope__CondGoal_28);
          }
#line 370 "simplify_goal_scope.m"
          {
#line 370 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__V_66_66 = hlds__make_goal__true_goal_0_f_0();
          }
#line 370 "simplify_goal_scope.m"
          {
#line 370 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__GoalExpr_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 370 "simplify_goal_scope.m"
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 370 "simplify_goal_scope.m"
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "simplify_goal_scope.m"
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_29, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__CondGoal_28));
#line 370 "simplify_goal_scope.m"
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_29, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__SubGoal_10));
#line 370 "simplify_goal_scope.m"
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_29, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_66_66));
#line 370 "simplify_goal_scope.m"
          }
#line 371 "simplify_goal_scope.m"
          {
#line 371 "simplify_goal_scope.m"
            MR_Word base;
#line 371 "simplify_goal_scope.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__Goal_12 = base;
#line 371 "simplify_goal_scope.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__GoalExpr_29));
#line 371 "simplify_goal_scope.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__GoalInfo0_69));
#line 371 "simplify_goal_scope.m"
          }
#line 311 "simplify_goal_scope.m"
        }
#line 371 "simplify_goal_scope.m"
    *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_31 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_30;
#line 289 "simplify_goal_scope.m"
  }
#line 284 "simplify_goal_scope.m"
}

#line 272 "simplify_goal_scope.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_2(
#line 272 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__closure_arg)
#line 272 "simplify_goal_scope.m"
{
#line 272 "simplify_goal_scope.m"
  {
#line 272 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 272 "simplify_goal_scope.m"
    MR_Box check_hlds__simplify__simplify_goal_scope__closure = check_hlds__simplify__simplify_goal_scope__closure_arg;

#line 272 "simplify_goal_scope.m"
    {
#line 272 "simplify_goal_scope.m"
      return check_hlds__simplify__simplify_goal_scope__succeeded = check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__272__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__closure, (MR_Integer) 4))));
    }
#line 272 "simplify_goal_scope.m"
    return check_hlds__simplify__simplify_goal_scope__succeeded;
#line 272 "simplify_goal_scope.m"
  }
#line 272 "simplify_goal_scope.m"
}

#line 262 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_1(
#line 262 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__closure_arg,
#line 262 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
#line 262 "simplify_goal_scope.m"
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_2,
#line 262 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_3,
#line 262 "simplify_goal_scope.m"
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_4)
#line 262 "simplify_goal_scope.m"
{
#line 262 "simplify_goal_scope.m"
  {
#line 262 "simplify_goal_scope.m"
    MR_Box check_hlds__simplify__simplify_goal_scope__closure = check_hlds__simplify__simplify_goal_scope__closure_arg;
#line 262 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__conv1_HeadVar__2_68;
#line 262 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__4_70;

#line 262 "simplify_goal_scope.m"
    {
#line 262 "simplify_goal_scope.m"
      check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__262__1_4_p_0(((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_1), &check_hlds__simplify__simplify_goal_scope__conv1_HeadVar__2_68, ((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_3), &check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__4_70);
    }
#line 262 "simplify_goal_scope.m"
    *check_hlds__simplify__simplify_goal_scope__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__conv1_HeadVar__2_68));
#line 262 "simplify_goal_scope.m"
    *check_hlds__simplify__simplify_goal_scope__wrapper_arg_4 = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__4_70));
#line 262 "simplify_goal_scope.m"
  }
#line 262 "simplify_goal_scope.m"
}

#line 237 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0(
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_11,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__VarTypes_12,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Conjunct_13,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Conjuncts_14,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46,
#line 237 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_47,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48,
#line 237 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_49,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50,
#line 237 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_51)
#line 237 "simplify_goal_scope.m"
{
#line 244 "simplify_goal_scope.m"
  while (MR_TRUE)
#line 244 "simplify_goal_scope.m"
    {
#line 244 "simplify_goal_scope.m"
      /* tailcall optimized into a loop */
#line 244 "simplify_goal_scope.m"
      {
#line 244 "simplify_goal_scope.m"
        MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 244 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Conjunct_13, (MR_Integer) 0)));
#line 244 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Conjunct_13, (MR_Integer) 1)));
#line 244 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__LHSVar_32;
#line 244 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__ConsId_33;
#line 244 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__RHSVars_34;
#line 244 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__TermType_35;
#line 244 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Arg_36;
#line 244 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_56_56;
#line 244 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57;
#line 244 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_58_58;
#line 253 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__LHSVarPrime_25;
#line 253 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__ConsIdPrime_26;
#line 253 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__RHSVarsPrime_27;
#line 247 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Unify_23;
#line 247 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_20_20;
#line 247 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_21_21;
#line 247 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_22_22;
#line 247 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_24_24;
#line 248 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_28_28;
#line 248 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_29_29;
#line 248 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_30_30;
#line 248 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_31_31;

#line 247 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__GoalExpr_18)) == (MR_mktag((MR_Integer) 1)));
#line 247 "simplify_goal_scope.m"
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 247 "simplify_goal_scope.m"
          {
#line 247 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 0)));
#line 247 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 1)));
#line 247 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 2)));
#line 247 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__Unify_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 3)));
#line 247 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 4)));
#line 248 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Unify_23)) == (MR_mktag((MR_Integer) 0)));
#line 248 "simplify_goal_scope.m"
            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 248 "simplify_goal_scope.m"
              {
#line 248 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__LHSVarPrime_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 0)));
#line 248 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__ConsIdPrime_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 1)));
#line 248 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__RHSVarsPrime_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 2)));
#line 248 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 3)));
#line 248 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 4)));
#line 248 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 5)));
#line 248 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 6)));
#line 248 "simplify_goal_scope.m"
              }
#line 247 "simplify_goal_scope.m"
          }
#line 253 "simplify_goal_scope.m"
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 250 "simplify_goal_scope.m"
          {
#line 250 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__LHSVar_32 = check_hlds__simplify__simplify_goal_scope__LHSVarPrime_25;
#line 251 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__ConsId_33 = check_hlds__simplify__simplify_goal_scope__ConsIdPrime_26;
#line 252 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__RHSVars_34 = check_hlds__simplify__simplify_goal_scope__RHSVarsPrime_27;
#line 250 "simplify_goal_scope.m"
          }
#line 253 "simplify_goal_scope.m"
        else
#line 254 "simplify_goal_scope.m"
          {
#line 254 "simplify_goal_scope.m"
            {
#line 254 "simplify_goal_scope.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_scope", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_construct_ground_terms\'/10", (MR_String) "not construction unification");
#line 254 "simplify_goal_scope.m"
              return;
            }
#line 254 "simplify_goal_scope.m"
          }
#line 256 "simplify_goal_scope.m"
        {
#line 256 "simplify_goal_scope.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_scope__VarTypes_12, check_hlds__simplify__simplify_goal_scope__LHSVar_32, &check_hlds__simplify__simplify_goal_scope__TermType_35);
        }
#line 260 "simplify_goal_scope.m"
        if ((check_hlds__simplify__simplify_goal_scope__RHSVars_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 258 "simplify_goal_scope.m"
          {
#line 259 "simplify_goal_scope.m"
            {
#line 259 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Arg_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Arg_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConsId_33));
#line 259 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Arg_36, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermType_35));
#line 259 "simplify_goal_scope.m"
            }
#line 259 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_56_56 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48;
#line 259 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50;
#line 258 "simplify_goal_scope.m"
          }
#line 260 "simplify_goal_scope.m"
        else
#line 261 "simplify_goal_scope.m"
          {
#line 261 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__RHSArgs_39;
#line 261 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__InstMapDelta_40;
#line 261 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__TermInst_41;
#line 261 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__ConstStruct_42;
#line 261 "simplify_goal_scope.m"
            MR_Integer check_hlds__simplify__simplify_goal_scope__ConstNum_43;
#line 262 "simplify_goal_scope.m"
            MR_Box check_hlds__simplify__simplify_goal_scope__conv2_STATE_VARIABLE_VarArgMap_56_56;

#line 262 "simplify_goal_scope.m"
            {
#line 262 "simplify_goal_scope.m"
              mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, (MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_2[0], (MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_2[1], check_hlds__simplify__simplify_goal_scope__RHSVars_34, &check_hlds__simplify__simplify_goal_scope__RHSArgs_39, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48)), &check_hlds__simplify__simplify_goal_scope__conv2_STATE_VARIABLE_VarArgMap_56_56);
            }
#line 262 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_56_56 = ((MR_Word) check_hlds__simplify__simplify_goal_scope__conv2_STATE_VARIABLE_VarArgMap_56_56);
#line 263 "simplify_goal_scope.m"
            {
#line 263 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__InstMapDelta_40 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo_19);
            }
#line 264 "simplify_goal_scope.m"
            {
#line 264 "simplify_goal_scope.m"
              hlds__instmap__instmap_delta_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_scope__InstMapDelta_40, check_hlds__simplify__simplify_goal_scope__LHSVar_32, &check_hlds__simplify__simplify_goal_scope__TermInst_41);
            }
#line 265 "simplify_goal_scope.m"
            {
#line 265 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__ConstStruct_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 265 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__ConstStruct_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConsId_33));
#line 265 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__ConstStruct_42, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__RHSArgs_39));
#line 265 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__ConstStruct_42, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermType_35));
#line 265 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__ConstStruct_42, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermInst_41));
#line 265 "simplify_goal_scope.m"
            }
#line 266 "simplify_goal_scope.m"
            {
#line 266 "simplify_goal_scope.m"
              hlds__const_struct__lookup_insert_const_struct_4_p_0(check_hlds__simplify__simplify_goal_scope__ConstStruct_42, &check_hlds__simplify__simplify_goal_scope__ConstNum_43, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57);
            }
#line 267 "simplify_goal_scope.m"
            {
#line 267 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Arg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 267 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Arg_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConstNum_43));
#line 267 "simplify_goal_scope.m"
            }
#line 261 "simplify_goal_scope.m"
          }
#line 269 "simplify_goal_scope.m"
        {
#line 269 "simplify_goal_scope.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__LHSVar_32)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Arg_36)), check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_56_56, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_58_58);
        }
#line 274 "simplify_goal_scope.m"
        if ((check_hlds__simplify__simplify_goal_scope__Conjuncts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 271 "simplify_goal_scope.m"
          {
#line 271 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_63_63;

#line 272 "simplify_goal_scope.m"
            {
#line 272 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 272 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_63_63, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_scope_scalar_common_4[0]));
#line 272 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_63_63, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_2));
#line 272 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 272 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_63_63, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_11));
#line 272 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_63_63, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__LHSVar_32));
#line 272 "simplify_goal_scope.m"
            }
#line 272 "simplify_goal_scope.m"
            {
#line 272 "simplify_goal_scope.m"
              mercury__require__expect_4_p_0(check_hlds__simplify__simplify_goal_scope__V_63_63, (MR_String) "check_hlds.simplify.simplify_goal_scope", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_construct_ground_terms\'/10", (MR_String) "last var is not TermVar");
            }
#line 272 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_47 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46;
#line 272 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_49 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_58_58;
#line 272 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_51 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57;
#line 271 "simplify_goal_scope.m"
          }
#line 274 "simplify_goal_scope.m"
        else
#line 275 "simplify_goal_scope.m"
          {
#line 275 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__HeadConjunct_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Conjuncts_14, (MR_Integer) 0)));
#line 275 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__TailConjuncts_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Conjuncts_14, (MR_Integer) 1)));
#line 275 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59;

#line 276 "simplify_goal_scope.m"
            {
#line 276 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__LHSVar_32));
#line 276 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46));
#line 276 "simplify_goal_scope.m"
            }
#line 277 "simplify_goal_scope.m"
            /* direct tailcall eliminated */
#line 277 "simplify_goal_scope.m"
            {
#line 277 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__Conjunct__tmp_copy_13 = check_hlds__simplify__simplify_goal_scope__HeadConjunct_44;
#line 277 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__Conjuncts__tmp_copy_14 = check_hlds__simplify__simplify_goal_scope__TailConjuncts_45;
#line 277 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0__tmp_copy_46 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59;
#line 277 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0__tmp_copy_48 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_58_58;
#line 277 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0__tmp_copy_50 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57;

#line 277 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0__tmp_copy_50;
#line 277 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0__tmp_copy_48;
#line 277 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0__tmp_copy_46;
#line 277 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Conjuncts_14 = check_hlds__simplify__simplify_goal_scope__Conjuncts__tmp_copy_14;
#line 277 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Conjunct_13 = check_hlds__simplify__simplify_goal_scope__Conjunct__tmp_copy_13;
#line 277 "simplify_goal_scope.m"
            }
#line 277 "simplify_goal_scope.m"
            continue;
#line 275 "simplify_goal_scope.m"
          }
#line 244 "simplify_goal_scope.m"
      }
#line 244 "simplify_goal_scope.m"
      break;
#line 244 "simplify_goal_scope.m"
    }
#line 237 "simplify_goal_scope.m"
}

#line 37 "simplify_goal_scope.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_scope__try_to_merge_nested_scopes_4_p_0(
#line 37 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Reason0_5,
#line 37 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__InnerGoal0_6,
#line 37 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__OuterGoalInfo_7,
#line 37 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__Goal_8)
#line 37 "simplify_goal_scope.m"
{
#line 504 "simplify_goal_scope.m"
  {
#line 504 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 504 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Reason_9;
#line 504 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__InnerGoal_10;
#line 504 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__GoalInfo_12;
#line 506 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__V_11_11;
#line 508 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Detism_14;
#line 508 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__OuterDetism_15;
#line 508 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__V_13_13;

#line 505 "simplify_goal_scope.m"
    {
#line 505 "simplify_goal_scope.m"
      check_hlds__simplify__simplify_goal_scope__loop_over_any_nested_scopes_4_p_0(check_hlds__simplify__simplify_goal_scope__Reason0_5, &check_hlds__simplify__simplify_goal_scope__Reason_9, check_hlds__simplify__simplify_goal_scope__InnerGoal0_6, &check_hlds__simplify__simplify_goal_scope__InnerGoal_10);
    }
#line 506 "simplify_goal_scope.m"
    check_hlds__simplify__simplify_goal_scope__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__InnerGoal_10, (MR_Integer) 0)));
#line 506 "simplify_goal_scope.m"
    check_hlds__simplify__simplify_goal_scope__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__InnerGoal_10, (MR_Integer) 1)));
#line 508 "simplify_goal_scope.m"
    check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason_9)) == (MR_mktag((MR_Integer) 0)));
#line 508 "simplify_goal_scope.m"
    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 508 "simplify_goal_scope.m"
      {
#line 508 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Reason_9, (MR_Integer) 0)));
#line 509 "simplify_goal_scope.m"
        {
#line 509 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal_scope__Detism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo_12);
        }
#line 510 "simplify_goal_scope.m"
        {
#line 510 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal_scope__OuterDetism_15 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_scope__OuterGoalInfo_7);
        }
#line 511 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Detism_14 == check_hlds__simplify__simplify_goal_scope__OuterDetism_15);
#line 508 "simplify_goal_scope.m"
      }
#line 516 "simplify_goal_scope.m"
    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 515 "simplify_goal_scope.m"
      *check_hlds__simplify__simplify_goal_scope__Goal_8 = check_hlds__simplify__simplify_goal_scope__InnerGoal_10;
#line 516 "simplify_goal_scope.m"
    else
#line 517 "simplify_goal_scope.m"
      {
#line 517 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_16_16;

#line 517 "simplify_goal_scope.m"
        {
#line 517 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal_scope__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 517 "simplify_goal_scope.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 517 "simplify_goal_scope.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__V_16_16, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Reason_9));
#line 517 "simplify_goal_scope.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__V_16_16, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__InnerGoal_10));
#line 517 "simplify_goal_scope.m"
        }
#line 517 "simplify_goal_scope.m"
        {
#line 517 "simplify_goal_scope.m"
          MR_Word base;
#line 517 "simplify_goal_scope.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 517 "simplify_goal_scope.m"
          *check_hlds__simplify__simplify_goal_scope__Goal_8 = base;
#line 517 "simplify_goal_scope.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_16_16));
#line 517 "simplify_goal_scope.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__OuterGoalInfo_7));
#line 517 "simplify_goal_scope.m"
        }
#line 517 "simplify_goal_scope.m"
      }
#line 504 "simplify_goal_scope.m"
  }
#line 37 "simplify_goal_scope.m"
}

#line 26 "simplify_goal_scope.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_goal_scope_10_p_0(
#line 26 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__GoalExpr0_11,
#line 26 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__GoalExpr_12,
#line 26 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__GoalInfo0_13,
#line 26 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__GoalInfo_14,
#line 26 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__NestedContext0_15,
#line 26 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__InstMap0_16,
#line 26 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Common0_17,
#line 26 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__Common_18,
#line 26 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_79,
#line 26 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80)
#line 26 "simplify_goal_scope.m"
{
#line 68 "simplify_goal_scope.m"
  {
#line 68 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 68 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Reason0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr0_11, (MR_Integer) 1)));
#line 68 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr0_11, (MR_Integer) 2)));
#line 168 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_22;
#line 70 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__V_81_81;

#line 70 "simplify_goal_scope.m"
    check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_20, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 70 "simplify_goal_scope.m"
    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 70 "simplify_goal_scope.m"
      {
#line 70 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__TermVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_20, (MR_Integer) 1)));
#line 70 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_20, (MR_Integer) 2)));
#line 70 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__V_81_81 == (MR_Integer) 1);
#line 70 "simplify_goal_scope.m"
      }
#line 168 "simplify_goal_scope.m"
    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 71 "simplify_goal_scope.m"
      {
#line 71 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23;
#line 71 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__ConstStructDb0_24;
#line 71 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__ConstStructEnabled_25;

#line 71 "simplify_goal_scope.m"
        {
#line 71 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_79, &check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23);
        }
#line 72 "simplify_goal_scope.m"
        {
#line 72 "simplify_goal_scope.m"
          hlds__hlds_module__module_info_get_const_struct_db_2_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23, &check_hlds__simplify__simplify_goal_scope__ConstStructDb0_24);
        }
#line 73 "simplify_goal_scope.m"
        {
#line 73 "simplify_goal_scope.m"
          hlds__const_struct__const_struct_db_get_ground_term_enabled_2_p_0(check_hlds__simplify__simplify_goal_scope__ConstStructDb0_24, &check_hlds__simplify__simplify_goal_scope__ConstStructEnabled_25);
        }
#line 120 "simplify_goal_scope.m"
        if ((check_hlds__simplify__simplify_goal_scope__ConstStructEnabled_25 == (MR_Integer) 0))
#line 76 "simplify_goal_scope.m"
          {
#line 76 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__Globals_26;
#line 76 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__CommonStruct_27;

#line 77 "simplify_goal_scope.m"
            {
#line 77 "simplify_goal_scope.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23, &check_hlds__simplify__simplify_goal_scope__Globals_26);
            }
#line 78 "simplify_goal_scope.m"
            {
#line 78 "simplify_goal_scope.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_26, (MR_Integer) 343, &check_hlds__simplify__simplify_goal_scope__CommonStruct_27);
            }
#line 104 "simplify_goal_scope.m"
            if ((check_hlds__simplify__simplify_goal_scope__CommonStruct_27 == (MR_Integer) 0))
#line 105 "simplify_goal_scope.m"
              {
#line 105 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal_28;
#line 105 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__NewReason_29;

#line 114 "simplify_goal_scope.m"
                {
#line 114 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_scope__SubGoal0_21, &check_hlds__simplify__simplify_goal_scope__SubGoal_28, check_hlds__simplify__simplify_goal_scope__NestedContext0_15, check_hlds__simplify__simplify_goal_scope__InstMap0_16, check_hlds__simplify__simplify_goal_scope__Common0_17, check_hlds__simplify__simplify_goal_scope__Common_18, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_79, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80);
                }
#line 116 "simplify_goal_scope.m"
                {
#line 116 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__NewReason_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 116 "simplify_goal_scope.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__NewReason_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 116 "simplify_goal_scope.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__NewReason_29, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_22));
#line 116 "simplify_goal_scope.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__NewReason_29, 2) = ((MR_Box) ((MR_Integer) 3));
#line 116 "simplify_goal_scope.m"
                }
#line 117 "simplify_goal_scope.m"
                {
#line 117 "simplify_goal_scope.m"
                  MR_Word base;
#line 117 "simplify_goal_scope.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 117 "simplify_goal_scope.m"
                  *check_hlds__simplify__simplify_goal_scope__GoalExpr_12 = base;
#line 117 "simplify_goal_scope.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 117 "simplify_goal_scope.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__NewReason_29));
#line 117 "simplify_goal_scope.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__SubGoal_28));
#line 117 "simplify_goal_scope.m"
                }
#line 118 "simplify_goal_scope.m"
                *check_hlds__simplify__simplify_goal_scope__GoalInfo_14 = check_hlds__simplify__simplify_goal_scope__GoalInfo0_13;
#line 105 "simplify_goal_scope.m"
              }
#line 104 "simplify_goal_scope.m"
            else
#line 80 "simplify_goal_scope.m"
              {
#line 101 "simplify_goal_scope.m"
                *check_hlds__simplify__simplify_goal_scope__GoalExpr_12 = check_hlds__simplify__simplify_goal_scope__GoalExpr0_11;
#line 102 "simplify_goal_scope.m"
                *check_hlds__simplify__simplify_goal_scope__GoalInfo_14 = check_hlds__simplify__simplify_goal_scope__GoalInfo0_13;
#line 103 "simplify_goal_scope.m"
                *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 103 "simplify_goal_scope.m"
                *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_79;
#line 80 "simplify_goal_scope.m"
              }
#line 76 "simplify_goal_scope.m"
          }
#line 120 "simplify_goal_scope.m"
        else
#line 121 "simplify_goal_scope.m"
          {
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__TypeInfo_119_119;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__TypeCtorInfo_120_120;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__HeadConjunct_35;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__TailConjuncts_36;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__VarTypes_37;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__ElimVars_38;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__VarArgMap_39;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__ConstStructDb_40;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__ModuleInfo_41;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__VarArgs_42;
#line 121 "simplify_goal_scope.m"
            MR_Integer check_hlds__simplify__simplify_goal_scope__TermConstNum_45;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__TermConstStruct_46;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__TermConsId_47;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__ConsId_48;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__RHS_49;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__Unification_50;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__InstMapDelta_51;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__TermInst_52;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__UnifyMode_53;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_87_87;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_88_88;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_102_102;
#line 121 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_104_104;
#line 129 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__HeadConjunctPrime_33;
#line 129 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__TailConjunctsPrime_34;
#line 123 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__SubGoal0_21, (MR_Integer) 0)));
#line 123 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__Conjuncts_32;
#line 123 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_82_82;
#line 123 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__SubGoal0_21, (MR_Integer) 1)));
#line 148 "simplify_goal_scope.m"
            MR_Integer check_hlds__simplify__simplify_goal_scope__TermConstNumPrime_44;
#line 144 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__TypeInfo_123_123;
#line 144 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__TermArg_43;
#line 144 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_90_90;
#line 144 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_91_91;
#line 144 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_121_121;
#line 154 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_116_116;
#line 154 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_117_117;
#line 154 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_118_118;

#line 124 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 124 "simplify_goal_scope.m"
            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 124 "simplify_goal_scope.m"
              {
#line 124 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30, (MR_Integer) 1)));
#line 124 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__Conjuncts_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30, (MR_Integer) 2)));
#line 124 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__V_82_82 == (MR_Integer) 0);
#line 123 "simplify_goal_scope.m"
                if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 123 "simplify_goal_scope.m"
                  {
#line 125 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Conjuncts_32)) == (MR_mktag((MR_Integer) 1)));
#line 125 "simplify_goal_scope.m"
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 125 "simplify_goal_scope.m"
                      {
#line 125 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__HeadConjunctPrime_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Conjuncts_32, (MR_Integer) 0)));
#line 125 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__TailConjunctsPrime_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Conjuncts_32, (MR_Integer) 1)));
#line 125 "simplify_goal_scope.m"
                      }
#line 123 "simplify_goal_scope.m"
                  }
#line 124 "simplify_goal_scope.m"
              }
#line 129 "simplify_goal_scope.m"
            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 127 "simplify_goal_scope.m"
              {
#line 127 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__HeadConjunct_35 = check_hlds__simplify__simplify_goal_scope__HeadConjunctPrime_33;
#line 128 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__TailConjuncts_36 = check_hlds__simplify__simplify_goal_scope__TailConjunctsPrime_34;
#line 127 "simplify_goal_scope.m"
              }
#line 129 "simplify_goal_scope.m"
            else
#line 130 "simplify_goal_scope.m"
              {
#line 130 "simplify_goal_scope.m"
                {
#line 130 "simplify_goal_scope.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_scope", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_goal_scope\'/10", (MR_String) "from_ground_term_construct scope is not conjunction");
#line 130 "simplify_goal_scope.m"
                  return;
                }
#line 130 "simplify_goal_scope.m"
              }
#line 133 "simplify_goal_scope.m"
            {
#line 133 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_79, &check_hlds__simplify__simplify_goal_scope__VarTypes_37);
            }
#line 2460 "check_hlds.simplify.simplify_goal_scope.c"
            check_hlds__simplify__simplify_goal_scope__TypeInfo_119_119 = (MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0];
#line 2462 "check_hlds.simplify.simplify_goal_scope.c"
            check_hlds__simplify__simplify_goal_scope__TypeCtorInfo_120_120 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0;
#line 136 "simplify_goal_scope.m"
            {
#line 136 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__V_87_87 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_goal_scope__TypeInfo_119_119, check_hlds__simplify__simplify_goal_scope__TypeCtorInfo_120_120);
            }
#line 134 "simplify_goal_scope.m"
            {
#line 134 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0(check_hlds__simplify__simplify_goal_scope__TermVar_22, check_hlds__simplify__simplify_goal_scope__VarTypes_37, check_hlds__simplify__simplify_goal_scope__HeadConjunct_35, check_hlds__simplify__simplify_goal_scope__TailConjuncts_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_scope__ElimVars_38, check_hlds__simplify__simplify_goal_scope__V_87_87, &check_hlds__simplify__simplify_goal_scope__VarArgMap_39, check_hlds__simplify__simplify_goal_scope__ConstStructDb0_24, &check_hlds__simplify__simplify_goal_scope__ConstStructDb_40);
            }
#line 137 "simplify_goal_scope.m"
            {
#line 137 "simplify_goal_scope.m"
              hlds__hlds_module__module_info_set_const_struct_db_3_p_0(check_hlds__simplify__simplify_goal_scope__ConstStructDb_40, check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23, &check_hlds__simplify__simplify_goal_scope__ModuleInfo_41);
            }
#line 139 "simplify_goal_scope.m"
            {
#line 139 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_info__simplify_info_add_elim_vars_3_p_0(check_hlds__simplify__simplify_goal_scope__ElimVars_38, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_79, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_88_88);
            }
#line 140 "simplify_goal_scope.m"
            {
#line 140 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo_41, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_88_88, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80);
            }
#line 142 "simplify_goal_scope.m"
            {
#line 142 "simplify_goal_scope.m"
              mercury__map__to_assoc_list_2_p_0(check_hlds__simplify__simplify_goal_scope__TypeInfo_119_119, check_hlds__simplify__simplify_goal_scope__TypeCtorInfo_120_120, check_hlds__simplify__simplify_goal_scope__VarArgMap_39, &check_hlds__simplify__simplify_goal_scope__VarArgs_42);
            }
#line 144 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__VarArgs_42)) == (MR_mktag((MR_Integer) 1)));
#line 144 "simplify_goal_scope.m"
            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 144 "simplify_goal_scope.m"
              {
#line 144 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__VarArgs_42, (MR_Integer) 0)));
#line 144 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__VarArgs_42, (MR_Integer) 1)));
#line 144 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_90_90, (MR_Integer) 0)));
#line 144 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__TermArg_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_90_90, (MR_Integer) 1)));
#line 2508 "check_hlds.simplify.simplify_goal_scope.c"
                check_hlds__simplify__simplify_goal_scope__TypeInfo_123_123 = (MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0];
#line 144 "simplify_goal_scope.m"
                {
#line 144 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_goal_scope__TypeInfo_123_123, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_22)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_121_121)));
                }
#line 144 "simplify_goal_scope.m"
                if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 144 "simplify_goal_scope.m"
                  {
#line 144 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__V_91_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 144 "simplify_goal_scope.m"
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 144 "simplify_goal_scope.m"
                      {
#line 145 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__TermArg_43)) == (MR_mktag((MR_Integer) 0)));
#line 145 "simplify_goal_scope.m"
                        if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 145 "simplify_goal_scope.m"
                          check_hlds__simplify__simplify_goal_scope__TermConstNumPrime_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermArg_43, (MR_Integer) 0)));
#line 144 "simplify_goal_scope.m"
                      }
#line 144 "simplify_goal_scope.m"
                  }
#line 144 "simplify_goal_scope.m"
              }
#line 148 "simplify_goal_scope.m"
            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 147 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__TermConstNum_45 = check_hlds__simplify__simplify_goal_scope__TermConstNumPrime_44;
#line 148 "simplify_goal_scope.m"
            else
#line 149 "simplify_goal_scope.m"
              {
#line 149 "simplify_goal_scope.m"
                {
#line 149 "simplify_goal_scope.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_scope", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_goal_scope\'/10", (MR_String) "unexpected VarArgMap");
#line 149 "simplify_goal_scope.m"
                  return;
                }
#line 149 "simplify_goal_scope.m"
              }
#line 152 "simplify_goal_scope.m"
            {
#line 152 "simplify_goal_scope.m"
              hlds__const_struct__lookup_const_struct_num_3_p_0(check_hlds__simplify__simplify_goal_scope__ConstStructDb_40, check_hlds__simplify__simplify_goal_scope__TermConstNum_45, &check_hlds__simplify__simplify_goal_scope__TermConstStruct_46);
            }
#line 154 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__TermConsId_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermConstStruct_46, (MR_Integer) 0)));
#line 154 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermConstStruct_46, (MR_Integer) 1)));
#line 154 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermConstStruct_46, (MR_Integer) 2)));
#line 154 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermConstStruct_46, (MR_Integer) 3)));
#line 155 "simplify_goal_scope.m"
            {
#line 155 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__ConsId_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 155 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__ConsId_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 155 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__ConsId_48, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermConstNum_45));
#line 155 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__ConsId_48, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermConsId_47));
#line 155 "simplify_goal_scope.m"
            }
#line 156 "simplify_goal_scope.m"
            {
#line 156 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__RHS_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 156 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__RHS_49, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConsId_48));
#line 156 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__RHS_49, 1) = ((MR_Box) ((MR_Integer) 0));
#line 156 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__RHS_49, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 156 "simplify_goal_scope.m"
            }
#line 157 "simplify_goal_scope.m"
            {
#line 157 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Unification_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 157 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_22));
#line 157 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConsId_48));
#line 157 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 5) = ((MR_Box) ((MR_Integer) 1));
#line 157 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "simplify_goal_scope.m"
            }
#line 159 "simplify_goal_scope.m"
            {
#line 159 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__InstMapDelta_51 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo0_13);
            }
#line 160 "simplify_goal_scope.m"
            {
#line 160 "simplify_goal_scope.m"
              hlds__instmap__instmap_delta_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_scope__InstMapDelta_51, check_hlds__simplify__simplify_goal_scope__TermVar_22, &check_hlds__simplify__simplify_goal_scope__TermInst_52);
            }
#line 161 "simplify_goal_scope.m"
            {
#line 161 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 161 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_102_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 161 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_102_102, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermInst_52));
#line 161 "simplify_goal_scope.m"
            }
#line 161 "simplify_goal_scope.m"
            {
#line 161 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 161 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_104_104, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermInst_52));
#line 161 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_104_104, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermInst_52));
#line 161 "simplify_goal_scope.m"
            }
#line 161 "simplify_goal_scope.m"
            {
#line 161 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__UnifyMode_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 161 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__UnifyMode_53, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_102_102));
#line 161 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__UnifyMode_53, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_104_104));
#line 161 "simplify_goal_scope.m"
            }
#line 163 "simplify_goal_scope.m"
            {
#line 163 "simplify_goal_scope.m"
              MR_Word base;
#line 163 "simplify_goal_scope.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 163 "simplify_goal_scope.m"
              *check_hlds__simplify__simplify_goal_scope__GoalExpr_12 = base;
#line 163 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_22));
#line 163 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__RHS_49));
#line 163 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__UnifyMode_53));
#line 163 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Unification_50));
#line 163 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_scope_scalar_common_1[1]));
#line 163 "simplify_goal_scope.m"
            }
#line 165 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__GoalInfo_14 = check_hlds__simplify__simplify_goal_scope__GoalInfo0_13;
#line 166 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 121 "simplify_goal_scope.m"
          }
#line 71 "simplify_goal_scope.m"
      }
#line 168 "simplify_goal_scope.m"
    else
#line 170 "simplify_goal_scope.m"
      {
#line 170 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Common1_55;
#line 170 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 170 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__GoalExpr1_57;
#line 170 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Goal_64;
#line 170 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111;
#line 170 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal_115;
#line 172 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope___GoalInfo1_58;
#line 226 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__FinalReason_59;
#line 226 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__FinalSubGoal_60;

#line 169 "simplify_goal_scope.m"
        {
#line 169 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_scope__SubGoal0_21, &check_hlds__simplify__simplify_goal_scope__SubGoal_115, check_hlds__simplify__simplify_goal_scope__NestedContext0_15, check_hlds__simplify__simplify_goal_scope__InstMap0_16, check_hlds__simplify__simplify_goal_scope__Common0_17, &check_hlds__simplify__simplify_goal_scope__Common1_55, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_79, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111);
        }
#line 171 "simplify_goal_scope.m"
        {
#line 171 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal_scope__try_to_merge_nested_scopes_4_p_0(check_hlds__simplify__simplify_goal_scope__Reason0_20, check_hlds__simplify__simplify_goal_scope__SubGoal_115, check_hlds__simplify__simplify_goal_scope__GoalInfo0_13, &check_hlds__simplify__simplify_goal_scope__Goal1_56);
        }
#line 172 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__GoalExpr1_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal1_56, (MR_Integer) 0)));
#line 172 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope___GoalInfo1_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal1_56, (MR_Integer) 1)));
#line 173 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__GoalExpr1_57)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr1_57, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 173 "simplify_goal_scope.m"
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 173 "simplify_goal_scope.m"
          {
#line 173 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__FinalReason_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr1_57, (MR_Integer) 1)));
#line 173 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__FinalSubGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr1_57, (MR_Integer) 2)));
#line 181 "simplify_goal_scope.m"
            if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__FinalReason_59)) == (MR_mktag((MR_Integer) 0))))
#line 195 "simplify_goal_scope.m"
              {
#line 196 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 210 "simplify_goal_scope.m"
                *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 210 "simplify_goal_scope.m"
                *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111;
#line 195 "simplify_goal_scope.m"
              }
#line 181 "simplify_goal_scope.m"
            else
#line 181 "simplify_goal_scope.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__FinalReason_59)) == (MR_mktag((MR_Integer) 2))))
#line 178 "simplify_goal_scope.m"
                {
#line 179 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 180 "simplify_goal_scope.m"
                  *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
#line 180 "simplify_goal_scope.m"
                  *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111;
#line 178 "simplify_goal_scope.m"
                }
#line 181 "simplify_goal_scope.m"
              else
#line 181 "simplify_goal_scope.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__FinalReason_59)) == (MR_mktag((MR_Integer) 1))))
#line 195 "simplify_goal_scope.m"
                  {
#line 196 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 210 "simplify_goal_scope.m"
                    *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 210 "simplify_goal_scope.m"
                    *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111;
#line 195 "simplify_goal_scope.m"
                  }
#line 181 "simplify_goal_scope.m"
                else
#line 181 "simplify_goal_scope.m"
                  if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__FinalReason_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 181 "simplify_goal_scope.m"
                    {
#line 181 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 1)));

#line 181 "simplify_goal_scope.m"
                      if ((check_hlds__simplify__simplify_goal_scope__V_122_122 == (MR_Integer) 1))
#line 195 "simplify_goal_scope.m"
                        {
#line 196 "simplify_goal_scope.m"
                          check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 210 "simplify_goal_scope.m"
                          *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 210 "simplify_goal_scope.m"
                          *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111;
#line 195 "simplify_goal_scope.m"
                        }
#line 181 "simplify_goal_scope.m"
                      else
#line 178 "simplify_goal_scope.m"
                        {
#line 179 "simplify_goal_scope.m"
                          check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 180 "simplify_goal_scope.m"
                          *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
#line 180 "simplify_goal_scope.m"
                          *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111;
#line 178 "simplify_goal_scope.m"
                        }
#line 181 "simplify_goal_scope.m"
                    }
#line 181 "simplify_goal_scope.m"
                  else
#line 181 "simplify_goal_scope.m"
                    if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__FinalReason_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 195 "simplify_goal_scope.m"
                      {
#line 196 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 210 "simplify_goal_scope.m"
                        *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 210 "simplify_goal_scope.m"
                        *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111;
#line 195 "simplify_goal_scope.m"
                      }
#line 181 "simplify_goal_scope.m"
                    else
#line 181 "simplify_goal_scope.m"
                      if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__FinalReason_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 178 "simplify_goal_scope.m"
                        {
#line 179 "simplify_goal_scope.m"
                          check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 180 "simplify_goal_scope.m"
                          *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
#line 180 "simplify_goal_scope.m"
                          *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111;
#line 178 "simplify_goal_scope.m"
                        }
#line 181 "simplify_goal_scope.m"
                      else
#line 181 "simplify_goal_scope.m"
                        if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__FinalReason_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 195 "simplify_goal_scope.m"
                          {
#line 196 "simplify_goal_scope.m"
                            check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 210 "simplify_goal_scope.m"
                            *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 210 "simplify_goal_scope.m"
                            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111;
#line 195 "simplify_goal_scope.m"
                          }
#line 181 "simplify_goal_scope.m"
                        else
#line 181 "simplify_goal_scope.m"
                          if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__FinalReason_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 213 "simplify_goal_scope.m"
                            {
#line 213 "simplify_goal_scope.m"
                              MR_Word check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 1)));
#line 213 "simplify_goal_scope.m"
                              MR_Word check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 2)));
#line 212 "simplify_goal_scope.m"
                              MR_Word check_hlds__simplify__simplify_goal_scope__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 3)));
#line 212 "simplify_goal_scope.m"
                              MR_Word check_hlds__simplify__simplify_goal_scope__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 4)));
#line 212 "simplify_goal_scope.m"
                              MR_Word check_hlds__simplify__simplify_goal_scope__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 5)));

#line 214 "simplify_goal_scope.m"
                              {
#line 214 "simplify_goal_scope.m"
                                check_hlds__simplify__simplify_goal_scope__succeeded = check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111);
                              }
#line 217 "simplify_goal_scope.m"
                              if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 215 "simplify_goal_scope.m"
                                {
#line 215 "simplify_goal_scope.m"
                                  check_hlds__simplify__simplify_goal_scope__simplify_goal_trace_goal_7_p_0(check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_74, check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_75, check_hlds__simplify__simplify_goal_scope__FinalSubGoal_60, check_hlds__simplify__simplify_goal_scope__Goal1_56, &check_hlds__simplify__simplify_goal_scope__Goal_64, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80);
                                }
#line 217 "simplify_goal_scope.m"
                              else
#line 218 "simplify_goal_scope.m"
                                {
#line 218 "simplify_goal_scope.m"
                                  check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 218 "simplify_goal_scope.m"
                                  *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111;
#line 218 "simplify_goal_scope.m"
                                }
#line 224 "simplify_goal_scope.m"
                              *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 213 "simplify_goal_scope.m"
                            }
#line 181 "simplify_goal_scope.m"
                          else
#line 184 "simplify_goal_scope.m"
                            {
#line 187 "simplify_goal_scope.m"
                              check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__FinalSubGoal_60;
#line 188 "simplify_goal_scope.m"
                              *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
#line 188 "simplify_goal_scope.m"
                              *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111;
#line 184 "simplify_goal_scope.m"
                            }
#line 173 "simplify_goal_scope.m"
          }
#line 173 "simplify_goal_scope.m"
        else
#line 227 "simplify_goal_scope.m"
          {
#line 227 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 228 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
#line 228 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_80 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_111_111;
#line 227 "simplify_goal_scope.m"
          }
#line 230 "simplify_goal_scope.m"
        *check_hlds__simplify__simplify_goal_scope__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal_64, (MR_Integer) 0)));
#line 230 "simplify_goal_scope.m"
        *check_hlds__simplify__simplify_goal_scope__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal_64, (MR_Integer) 1)));
#line 170 "simplify_goal_scope.m"
      }
#line 68 "simplify_goal_scope.m"
  }
#line 26 "simplify_goal_scope.m"
}

void mercury__check_hlds__simplify__simplify_goal_scope__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_scope__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_scope__check_hlds__simplify__simplify_goal_scope__type_ctor_info_var_to_arg_map_0);
}

void mercury__check_hlds__simplify__simplify_goal_scope__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.simplify_goal_scope. */
