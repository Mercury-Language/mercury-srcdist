/*
** Automatically generated from `simplify_goal_scope.m'
** by the Mercury compiler,
** version DEV
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 146 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 149 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0;

#line 155 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0;

#line 158 "check_hlds.simplify.simplify_goal_scope.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0_10001(
#line 161 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
#line 163 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_2);

#line 166 "check_hlds.simplify.simplify_goal_scope.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0_10001(
#line 169 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
#line 171 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_2,
#line 173 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_3);

#line 274 "simplify_goal_scope.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__274__1_2_p_0(
#line 274 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_11,
#line 274 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__LHSVar_32);

#line 264 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__264__1_4_p_0(
#line 264 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__1_67,
#line 264 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__2_68,
#line 264 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__3_69,
#line 264 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__4_70);

#line 237 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0(
#line 237 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__1_1,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__2_2,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__3_3);

#line 237 "simplify_goal_scope.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0(
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__1_1,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__2_2);

#line 510 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__loop_over_any_nested_scopes_4_p_0(
#line 510 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Reason0_5,
#line 510 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__Reason_6,
#line 510 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Goal0_7,
#line 510 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__Goal_8);

#line 372 "simplify_goal_scope.m"
static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(
#line 372 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__TraceExpr_4,
#line 372 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Info_5);

#line 286 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_goal_trace_goal_7_p_0(
#line 286 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_8,
#line 286 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_9,
#line 286 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal_10,
#line 286 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Goal0_11,
#line 286 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__Goal_12,
#line 286 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_30,
#line 286 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_31);

#line 274 "simplify_goal_scope.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_2(
#line 274 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__closure_arg);

#line 264 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_1(
#line 264 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__closure_arg,
#line 264 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
#line 264 "simplify_goal_scope.m"
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_2,
#line 264 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_3,
#line 264 "simplify_goal_scope.m"
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_4);

#line 239 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0(
#line 239 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_11,
#line 239 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__VarTypes_12,
#line 239 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Conjunct_13,
#line 239 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Conjuncts_14,
#line 239 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46,
#line 239 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_47,
#line 239 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48,
#line 239 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_49,
#line 239 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50,
#line 239 "simplify_goal_scope.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 369 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 377 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 385 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0
  }
};

#line 394 "check_hlds.simplify.simplify_goal_scope.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0
  }
};

#line 403 "check_hlds.simplify.simplify_goal_scope.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_scope__check_hlds__simplify__simplify_goal_scope__type_ctor_info_var_to_arg_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_scope",
  (MR_String) "var_to_arg_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_scope__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 420 "check_hlds.simplify.simplify_goal_scope.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0_10001(
#line 423 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
#line 425 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_2)
#line 427 "check_hlds.simplify.simplify_goal_scope.c"
{
#line 429 "check_hlds.simplify.simplify_goal_scope.c"
  {
#line 431 "check_hlds.simplify.simplify_goal_scope.c"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;

#line 434 "check_hlds.simplify.simplify_goal_scope.c"
    {
#line 436 "check_hlds.simplify.simplify_goal_scope.c"
      check_hlds__simplify__simplify_goal_scope__succeeded = check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0(((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_2));
    }
#line 439 "check_hlds.simplify.simplify_goal_scope.c"
    return check_hlds__simplify__simplify_goal_scope__succeeded;
#line 441 "check_hlds.simplify.simplify_goal_scope.c"
  }
#line 443 "check_hlds.simplify.simplify_goal_scope.c"
}

#line 446 "check_hlds.simplify.simplify_goal_scope.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0_10001(
#line 449 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
#line 451 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_2,
#line 453 "check_hlds.simplify.simplify_goal_scope.c"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_3)
#line 455 "check_hlds.simplify.simplify_goal_scope.c"
{
#line 457 "check_hlds.simplify.simplify_goal_scope.c"
  {
#line 459 "check_hlds.simplify.simplify_goal_scope.c"
    MR_Word check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__1_1;

#line 462 "check_hlds.simplify.simplify_goal_scope.c"
    {
#line 464 "check_hlds.simplify.simplify_goal_scope.c"
      check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0(&check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_3));
    }
#line 467 "check_hlds.simplify.simplify_goal_scope.c"
    *check_hlds__simplify__simplify_goal_scope__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__1_1));
#line 469 "check_hlds.simplify.simplify_goal_scope.c"
  }
#line 471 "check_hlds.simplify.simplify_goal_scope.c"
}

#line 274 "simplify_goal_scope.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__274__1_2_p_0(
#line 274 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_11,
#line 274 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__LHSVar_32)
#line 274 "simplify_goal_scope.m"
{
#line 274 "simplify_goal_scope.m"
  {
#line 274 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;

#line 274 "simplify_goal_scope.m"
    {
#line 274 "simplify_goal_scope.m"
      check_hlds__simplify__simplify_goal_scope__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_11)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__LHSVar_32)));
    }
#line 274 "simplify_goal_scope.m"
    return check_hlds__simplify__simplify_goal_scope__succeeded;
#line 274 "simplify_goal_scope.m"
  }
#line 274 "simplify_goal_scope.m"
}

#line 264 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__264__1_4_p_0(
#line 264 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__1_67,
#line 264 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__2_68,
#line 264 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__3_69,
#line 264 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__4_70)
#line 264 "simplify_goal_scope.m"
{
#line 264 "simplify_goal_scope.m"
  {
#line 264 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 264 "simplify_goal_scope.m"
    MR_Box check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__2_68;

#line 264 "simplify_goal_scope.m"
    {
#line 264 "simplify_goal_scope.m"
      mercury__map__det_remove_4_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__HeadVar__1_67)), &check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__2_68, check_hlds__simplify__simplify_goal_scope__HeadVar__3_69, check_hlds__simplify__simplify_goal_scope__HeadVar__4_70);
    }
#line 264 "simplify_goal_scope.m"
    *check_hlds__simplify__simplify_goal_scope__HeadVar__2_68 = ((MR_Word) check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__2_68);
#line 264 "simplify_goal_scope.m"
  }
#line 264 "simplify_goal_scope.m"
}

#line 237 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0(
#line 237 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__1_1,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__2_2,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__3_3)
#line 237 "simplify_goal_scope.m"
{
#line 237 "simplify_goal_scope.m"
  {
#line 237 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 237 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Cast_HeadVar1_4 = check_hlds__simplify__simplify_goal_scope__HeadVar__2_2;
#line 237 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Cast_HeadVar2_5 = check_hlds__simplify__simplify_goal_scope__HeadVar__3_3;

#line 237 "simplify_goal_scope.m"
    {
#line 237 "simplify_goal_scope.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_2[0], check_hlds__simplify__simplify_goal_scope__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Cast_HeadVar2_5)));
    }
#line 237 "simplify_goal_scope.m"
  }
#line 237 "simplify_goal_scope.m"
}

#line 237 "simplify_goal_scope.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0(
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__1_1,
#line 237 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__2_2)
#line 237 "simplify_goal_scope.m"
{
#line 237 "simplify_goal_scope.m"
  {
#line 237 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 237 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Cast_HeadVar1_3 = check_hlds__simplify__simplify_goal_scope__HeadVar__1_1;
#line 237 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Cast_HeadVar2_4 = check_hlds__simplify__simplify_goal_scope__HeadVar__2_2;

#line 237 "simplify_goal_scope.m"
    {
#line 237 "simplify_goal_scope.m"
      check_hlds__simplify__simplify_goal_scope__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Cast_HeadVar2_4)));
    }
#line 237 "simplify_goal_scope.m"
    return check_hlds__simplify__simplify_goal_scope__succeeded;
#line 237 "simplify_goal_scope.m"
  }
#line 237 "simplify_goal_scope.m"
}

#line 510 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__loop_over_any_nested_scopes_4_p_0(
#line 510 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Reason0_5,
#line 510 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__Reason_6,
#line 510 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Goal0_7,
#line 510 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__Goal_8)
#line 510 "simplify_goal_scope.m"
{
#line 552 "simplify_goal_scope.m"
  while (MR_TRUE)
#line 552 "simplify_goal_scope.m"
    {
#line 552 "simplify_goal_scope.m"
      /* tailcall optimized into a loop */
#line 552 "simplify_goal_scope.m"
      {
#line 552 "simplify_goal_scope.m"
        MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 552 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Goal1_10;
#line 552 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Reason2_14;
#line 515 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Reason1_9;
#line 515 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_7, (MR_Integer) 0)));
#line 515 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_7, (MR_Integer) 1)));
#line 521 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Vars0_12;
#line 521 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Vars1_13;

#line 515 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 515 "simplify_goal_scope.m"
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 515 "simplify_goal_scope.m"
          {
#line 515 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__Reason1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__V_21_21, (MR_Integer) 1)));
#line 515 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__Goal1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__V_21_21, (MR_Integer) 2)));
#line 517 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason0_5)) == (MR_mktag((MR_Integer) 0)));
#line 517 "simplify_goal_scope.m"
            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 517 "simplify_goal_scope.m"
              {
#line 517 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__Vars0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 0)));
#line 518 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason1_9)) == (MR_mktag((MR_Integer) 0)));
#line 518 "simplify_goal_scope.m"
                if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 518 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__Vars1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 0)));
#line 517 "simplify_goal_scope.m"
              }
#line 521 "simplify_goal_scope.m"
            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 520 "simplify_goal_scope.m"
              {
#line 520 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__V_22_22;

#line 520 "simplify_goal_scope.m"
                {
#line 520 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__V_22_22 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], check_hlds__simplify__simplify_goal_scope__Vars0_12, check_hlds__simplify__simplify_goal_scope__Vars1_13);
                }
#line 520 "simplify_goal_scope.m"
                {
#line 520 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__Reason2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 520 "simplify_goal_scope.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Reason2_14, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_22_22));
#line 520 "simplify_goal_scope.m"
                }
#line 520 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__succeeded = MR_TRUE;
#line 520 "simplify_goal_scope.m"
              }
#line 521 "simplify_goal_scope.m"
            else
#line 534 "simplify_goal_scope.m"
              {
#line 534 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__Removable0_15;
#line 534 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__Removable1_16;

#line 522 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 522 "simplify_goal_scope.m"
                if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 522 "simplify_goal_scope.m"
                  {
#line 522 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__Removable0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 1)));
#line 523 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 523 "simplify_goal_scope.m"
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 523 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Removable1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 1)));
#line 522 "simplify_goal_scope.m"
                  }
#line 534 "simplify_goal_scope.m"
                if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 532 "simplify_goal_scope.m"
                  {
#line 532 "simplify_goal_scope.m"
                    MR_Word check_hlds__simplify__simplify_goal_scope__Removable2_17;

#line 526 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Removable0_15 == (MR_Integer) 0);
#line 526 "simplify_goal_scope.m"
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 527 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Removable1_16 == (MR_Integer) 0);
#line 530 "simplify_goal_scope.m"
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 529 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Removable2_17 = (MR_Integer) 0;
#line 530 "simplify_goal_scope.m"
                    else
#line 531 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Removable2_17 = (MR_Integer) 1;
#line 533 "simplify_goal_scope.m"
                    {
#line 533 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Reason2_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "simplify_goal_scope.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason2_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 533 "simplify_goal_scope.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason2_14, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Removable2_17));
#line 533 "simplify_goal_scope.m"
                    }
#line 532 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__succeeded = MR_TRUE;
#line 532 "simplify_goal_scope.m"
                  }
#line 534 "simplify_goal_scope.m"
                else
#line 547 "simplify_goal_scope.m"
                  {
#line 547 "simplify_goal_scope.m"
                    MR_Word check_hlds__simplify__simplify_goal_scope__ForcePruning0_18;
#line 547 "simplify_goal_scope.m"
                    MR_Word check_hlds__simplify__simplify_goal_scope__ForcePruning1_19;
#line 547 "simplify_goal_scope.m"
                    MR_Word check_hlds__simplify__simplify_goal_scope__ForcePruning2_20;

#line 535 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 535 "simplify_goal_scope.m"
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 535 "simplify_goal_scope.m"
                      {
#line 535 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__ForcePruning0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 1)));
#line 536 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 536 "simplify_goal_scope.m"
                        if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 536 "simplify_goal_scope.m"
                          {
#line 536 "simplify_goal_scope.m"
                            check_hlds__simplify__simplify_goal_scope__ForcePruning1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 1)));
#line 539 "simplify_goal_scope.m"
                            check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__ForcePruning0_18 == (MR_Integer) 1);
#line 539 "simplify_goal_scope.m"
                            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 540 "simplify_goal_scope.m"
                              check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__ForcePruning1_19 == (MR_Integer) 1);
#line 543 "simplify_goal_scope.m"
                            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 542 "simplify_goal_scope.m"
                              check_hlds__simplify__simplify_goal_scope__ForcePruning2_20 = (MR_Integer) 1;
#line 543 "simplify_goal_scope.m"
                            else
#line 544 "simplify_goal_scope.m"
                              check_hlds__simplify__simplify_goal_scope__ForcePruning2_20 = (MR_Integer) 0;
#line 546 "simplify_goal_scope.m"
                            {
#line 546 "simplify_goal_scope.m"
                              check_hlds__simplify__simplify_goal_scope__Reason2_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "simplify_goal_scope.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason2_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 546 "simplify_goal_scope.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason2_14, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ForcePruning2_20));
#line 546 "simplify_goal_scope.m"
                            }
#line 546 "simplify_goal_scope.m"
                            check_hlds__simplify__simplify_goal_scope__succeeded = MR_TRUE;
#line 536 "simplify_goal_scope.m"
                          }
#line 535 "simplify_goal_scope.m"
                      }
#line 547 "simplify_goal_scope.m"
                  }
#line 534 "simplify_goal_scope.m"
              }
#line 515 "simplify_goal_scope.m"
          }
#line 552 "simplify_goal_scope.m"
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 551 "simplify_goal_scope.m"
          {
#line 551 "simplify_goal_scope.m"
            /* direct tailcall eliminated */
#line 551 "simplify_goal_scope.m"
            {
#line 551 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__Reason0__tmp_copy_5 = check_hlds__simplify__simplify_goal_scope__Reason2_14;
#line 551 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__Goal0__tmp_copy_7 = check_hlds__simplify__simplify_goal_scope__Goal1_10;

#line 551 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Goal0_7 = check_hlds__simplify__simplify_goal_scope__Goal0__tmp_copy_7;
#line 551 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Reason0_5 = check_hlds__simplify__simplify_goal_scope__Reason0__tmp_copy_5;
#line 551 "simplify_goal_scope.m"
            }
#line 551 "simplify_goal_scope.m"
            continue;
#line 551 "simplify_goal_scope.m"
          }
#line 552 "simplify_goal_scope.m"
        else
#line 553 "simplify_goal_scope.m"
          {
#line 553 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__Reason_6 = check_hlds__simplify__simplify_goal_scope__Reason0_5;
#line 554 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__Goal_8 = check_hlds__simplify__simplify_goal_scope__Goal0_7;
#line 553 "simplify_goal_scope.m"
          }
#line 552 "simplify_goal_scope.m"
      }
#line 552 "simplify_goal_scope.m"
      break;
#line 552 "simplify_goal_scope.m"
    }
#line 510 "simplify_goal_scope.m"
}

#line 372 "simplify_goal_scope.m"
static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(
#line 372 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__TraceExpr_4,
#line 372 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Info_5)
#line 372 "simplify_goal_scope.m"
{
#line 377 "simplify_goal_scope.m"
  {
#line 377 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 377 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Result_6;

#line 377 "simplify_goal_scope.m"
#line 377 "simplify_goal_scope.m"
    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__TraceExpr_4)) {
#line 377 "simplify_goal_scope.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 377 "simplify_goal_scope.m"
      case (MR_Integer) 0:
#line 377 "simplify_goal_scope.m"
        {
#line 377 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__BaseExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 0)));
#line 377 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__ModuleInfo_18;
#line 377 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__Globals_19;

#line 400 "simplify_goal_scope.m"
          {
#line 400 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_scope__Info_5, &check_hlds__simplify__simplify_goal_scope__ModuleInfo_18);
          }
#line 401 "simplify_goal_scope.m"
          {
#line 401 "simplify_goal_scope.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo_18, &check_hlds__simplify__simplify_goal_scope__Globals_19);
          }
#line 410 "simplify_goal_scope.m"
#line 410 "simplify_goal_scope.m"
          switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__BaseExpr_7)) {
#line 410 "simplify_goal_scope.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 410 "simplify_goal_scope.m"
            case (MR_Integer) 0:
#line 403 "simplify_goal_scope.m"
              {
#line 403 "simplify_goal_scope.m"
                MR_String check_hlds__simplify__simplify_goal_scope__FlagName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__BaseExpr_7, (MR_Integer) 0)));
#line 403 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__Flags_21;

#line 404 "simplify_goal_scope.m"
                {
#line 404 "simplify_goal_scope.m"
                  libs__globals__lookup_accumulating_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 127, &check_hlds__simplify__simplify_goal_scope__Flags_21);
                }
#line 405 "simplify_goal_scope.m"
                {
#line 405 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__FlagName_20)), check_hlds__simplify__simplify_goal_scope__Flags_21);
                }
#line 407 "simplify_goal_scope.m"
                if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 406 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
#line 407 "simplify_goal_scope.m"
                else
#line 408 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
#line 403 "simplify_goal_scope.m"
              }
#line 410 "simplify_goal_scope.m"
              break;
#line 410 "simplify_goal_scope.m"
            case (MR_Integer) 1:
#line 411 "simplify_goal_scope.m"
              {
#line 411 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__Grade_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__BaseExpr_7, (MR_Integer) 0)));

#line 415 "simplify_goal_scope.m"
#line 415 "simplify_goal_scope.m"
                switch (check_hlds__simplify__simplify_goal_scope__Grade_22) {
#line 415 "simplify_goal_scope.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 415 "simplify_goal_scope.m"
                  case (MR_Integer) 9:
#line 445 "simplify_goal_scope.m"
                    {
#line 445 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__Target_27;

#line 446 "simplify_goal_scope.m"
                      {
#line 446 "simplify_goal_scope.m"
                        libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__Target_27);
                      }
#line 447 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Target_27 == (MR_Integer) 0);
#line 449 "simplify_goal_scope.m"
                      if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 448 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
#line 449 "simplify_goal_scope.m"
                      else
#line 450 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
#line 445 "simplify_goal_scope.m"
                    }
#line 415 "simplify_goal_scope.m"
                    break;
#line 415 "simplify_goal_scope.m"
                  case (MR_Integer) 10:
#line 453 "simplify_goal_scope.m"
                    {
#line 453 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__Target_49;

#line 454 "simplify_goal_scope.m"
                      {
#line 454 "simplify_goal_scope.m"
                        libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__Target_49);
                      }
#line 455 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Target_49 == (MR_Integer) 1);
#line 457 "simplify_goal_scope.m"
                      if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 456 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
#line 457 "simplify_goal_scope.m"
                      else
#line 458 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
#line 453 "simplify_goal_scope.m"
                    }
#line 415 "simplify_goal_scope.m"
                    break;
#line 415 "simplify_goal_scope.m"
                  case (MR_Integer) 0:
#line 413 "simplify_goal_scope.m"
                    {
#line 414 "simplify_goal_scope.m"
                      {
#line 414 "simplify_goal_scope.m"
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 183, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
#line 413 "simplify_goal_scope.m"
                    }
#line 415 "simplify_goal_scope.m"
                    break;
#line 415 "simplify_goal_scope.m"
                  case (MR_Integer) 12:
#line 469 "simplify_goal_scope.m"
                    {
#line 469 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__Target_51;

#line 470 "simplify_goal_scope.m"
                      {
#line 470 "simplify_goal_scope.m"
                        libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__Target_51);
                      }
#line 471 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Target_51 == (MR_Integer) 3);
#line 473 "simplify_goal_scope.m"
                      if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 472 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
#line 473 "simplify_goal_scope.m"
                      else
#line 474 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
#line 469 "simplify_goal_scope.m"
                    }
#line 415 "simplify_goal_scope.m"
                    break;
#line 415 "simplify_goal_scope.m"
                  case (MR_Integer) 11:
#line 461 "simplify_goal_scope.m"
                    {
#line 461 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__Target_50;

#line 462 "simplify_goal_scope.m"
                      {
#line 462 "simplify_goal_scope.m"
                        libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__Target_50);
                      }
#line 463 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Target_50 == (MR_Integer) 2);
#line 465 "simplify_goal_scope.m"
                      if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 464 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
#line 465 "simplify_goal_scope.m"
                      else
#line 466 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
#line 461 "simplify_goal_scope.m"
                    }
#line 415 "simplify_goal_scope.m"
                    break;
#line 415 "simplify_goal_scope.m"
                  case (MR_Integer) 7:
#line 438 "simplify_goal_scope.m"
                    {
#line 438 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__NotResult_26;

#line 439 "simplify_goal_scope.m"
                      {
#line 439 "simplify_goal_scope.m"
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 251, &check_hlds__simplify__simplify_goal_scope__NotResult_26);
                      }
#line 440 "simplify_goal_scope.m"
                      {
#line 440 "simplify_goal_scope.m"
                        mercury__bool__not_2_p_0(check_hlds__simplify__simplify_goal_scope__NotResult_26, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
#line 438 "simplify_goal_scope.m"
                    }
#line 415 "simplify_goal_scope.m"
                    break;
#line 415 "simplify_goal_scope.m"
                  case (MR_Integer) 8:
#line 442 "simplify_goal_scope.m"
                    {
#line 443 "simplify_goal_scope.m"
                      {
#line 443 "simplify_goal_scope.m"
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 251, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
#line 442 "simplify_goal_scope.m"
                    }
#line 415 "simplify_goal_scope.m"
                    break;
#line 415 "simplify_goal_scope.m"
                  case (MR_Integer) 4:
#line 429 "simplify_goal_scope.m"
                    {
#line 430 "simplify_goal_scope.m"
                      {
#line 430 "simplify_goal_scope.m"
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 213, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
#line 429 "simplify_goal_scope.m"
                    }
#line 415 "simplify_goal_scope.m"
                    break;
#line 415 "simplify_goal_scope.m"
                  case (MR_Integer) 2:
#line 420 "simplify_goal_scope.m"
                    {
#line 420 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__ProfCalls_23;
#line 420 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__ProfTime_24;
#line 420 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__ProfMem_25;
#line 420 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__V_42_42;
#line 420 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__V_43_43;
#line 420 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__V_44_44;

#line 421 "simplify_goal_scope.m"
                      {
#line 421 "simplify_goal_scope.m"
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 189, &check_hlds__simplify__simplify_goal_scope__ProfCalls_23);
                      }
#line 422 "simplify_goal_scope.m"
                      {
#line 422 "simplify_goal_scope.m"
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 190, &check_hlds__simplify__simplify_goal_scope__ProfTime_24);
                      }
#line 423 "simplify_goal_scope.m"
                      {
#line 423 "simplify_goal_scope.m"
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 191, &check_hlds__simplify__simplify_goal_scope__ProfMem_25);
                      }
#line 424 "simplify_goal_scope.m"
                      {
#line 424 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "simplify_goal_scope.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__V_44_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ProfMem_25));
#line 424 "simplify_goal_scope.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "simplify_goal_scope.m"
                      }
#line 424 "simplify_goal_scope.m"
                      {
#line 424 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "simplify_goal_scope.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__V_43_43, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ProfTime_24));
#line 424 "simplify_goal_scope.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__V_43_43, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_44_44));
#line 424 "simplify_goal_scope.m"
                      }
#line 424 "simplify_goal_scope.m"
                      {
#line 424 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "simplify_goal_scope.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__V_42_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ProfCalls_23));
#line 424 "simplify_goal_scope.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__V_42_42, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_43_43));
#line 424 "simplify_goal_scope.m"
                      }
#line 424 "simplify_goal_scope.m"
                      {
#line 424 "simplify_goal_scope.m"
                        mercury__bool__or_list_2_p_0(check_hlds__simplify__simplify_goal_scope__V_42_42, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
#line 420 "simplify_goal_scope.m"
                    }
#line 415 "simplify_goal_scope.m"
                    break;
#line 415 "simplify_goal_scope.m"
                  case (MR_Integer) 3:
#line 426 "simplify_goal_scope.m"
                    {
#line 427 "simplify_goal_scope.m"
                      {
#line 427 "simplify_goal_scope.m"
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 192, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
#line 426 "simplify_goal_scope.m"
                    }
#line 415 "simplify_goal_scope.m"
                    break;
#line 415 "simplify_goal_scope.m"
                  case (MR_Integer) 6:
#line 435 "simplify_goal_scope.m"
                    {
#line 436 "simplify_goal_scope.m"
                      {
#line 436 "simplify_goal_scope.m"
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 226, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
#line 435 "simplify_goal_scope.m"
                    }
#line 415 "simplify_goal_scope.m"
                    break;
#line 415 "simplify_goal_scope.m"
                  case (MR_Integer) 1:
#line 416 "simplify_goal_scope.m"
                    {
#line 417 "simplify_goal_scope.m"
                      {
#line 417 "simplify_goal_scope.m"
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 230, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
#line 416 "simplify_goal_scope.m"
                    }
#line 415 "simplify_goal_scope.m"
                    break;
#line 415 "simplify_goal_scope.m"
                  case (MR_Integer) 5:
#line 432 "simplify_goal_scope.m"
                    {
#line 433 "simplify_goal_scope.m"
                      {
#line 433 "simplify_goal_scope.m"
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 215, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
#line 432 "simplify_goal_scope.m"
                    }
#line 415 "simplify_goal_scope.m"
                    break;
#line 415 "simplify_goal_scope.m"
                }
#line 411 "simplify_goal_scope.m"
              }
#line 410 "simplify_goal_scope.m"
              break;
#line 410 "simplify_goal_scope.m"
            case (MR_Integer) 2:
#line 478 "simplify_goal_scope.m"
              {
#line 478 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__Level_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_scope__BaseExpr_7, (MR_Integer) 0)));
#line 478 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__TraceLevel_29;
#line 478 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__PredInfo_30;
#line 478 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__ProcInfo_31;
#line 478 "simplify_goal_scope.m"
                MR_Word check_hlds__simplify__simplify_goal_scope__EffTraceLevel_32;

#line 479 "simplify_goal_scope.m"
                {
#line 479 "simplify_goal_scope.m"
                  libs__globals__get_trace_level_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__TraceLevel_29);
                }
#line 480 "simplify_goal_scope.m"
                {
#line 480 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_info_3_p_0(check_hlds__simplify__simplify_goal_scope__Info_5, &check_hlds__simplify__simplify_goal_scope__PredInfo_30, &check_hlds__simplify__simplify_goal_scope__ProcInfo_31);
                }
#line 481 "simplify_goal_scope.m"
                {
#line 481 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__EffTraceLevel_32 = libs__trace_params__eff_trace_level_4_f_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo_18, check_hlds__simplify__simplify_goal_scope__PredInfo_30, check_hlds__simplify__simplify_goal_scope__ProcInfo_31, check_hlds__simplify__simplify_goal_scope__TraceLevel_29);
                }
#line 486 "simplify_goal_scope.m"
#line 486 "simplify_goal_scope.m"
                switch (check_hlds__simplify__simplify_goal_scope__Level_28) {
#line 486 "simplify_goal_scope.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 486 "simplify_goal_scope.m"
                  case (MR_Integer) 1:
#line 488 "simplify_goal_scope.m"
                    {
#line 488 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Result_6 = libs__trace_params__at_least_at_deep_1_f_0(check_hlds__simplify__simplify_goal_scope__EffTraceLevel_32);
                    }
#line 486 "simplify_goal_scope.m"
                    break;
#line 486 "simplify_goal_scope.m"
                  case (MR_Integer) 0:
#line 485 "simplify_goal_scope.m"
                    {
#line 485 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Result_6 = libs__trace_params__at_least_at_shallow_1_f_0(check_hlds__simplify__simplify_goal_scope__EffTraceLevel_32);
                    }
#line 486 "simplify_goal_scope.m"
                    break;
#line 486 "simplify_goal_scope.m"
                }
#line 478 "simplify_goal_scope.m"
              }
#line 410 "simplify_goal_scope.m"
              break;
#line 410 "simplify_goal_scope.m"
          }
#line 377 "simplify_goal_scope.m"
        }
#line 377 "simplify_goal_scope.m"
        break;
#line 377 "simplify_goal_scope.m"
      case (MR_Integer) 1:
#line 380 "simplify_goal_scope.m"
        {
#line 380 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__ExprA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 0)));
#line 380 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__ResultA_9;

#line 381 "simplify_goal_scope.m"
          {
#line 381 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__ResultA_9 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(check_hlds__simplify__simplify_goal_scope__ExprA_8, check_hlds__simplify__simplify_goal_scope__Info_5);
          }
#line 382 "simplify_goal_scope.m"
          {
#line 382 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__Result_6 = mercury__bool__not_1_f_0(check_hlds__simplify__simplify_goal_scope__ResultA_9);
          }
#line 380 "simplify_goal_scope.m"
        }
#line 377 "simplify_goal_scope.m"
        break;
#line 377 "simplify_goal_scope.m"
      case (MR_Integer) 2:
#line 384 "simplify_goal_scope.m"
        {
#line 384 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__Op_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 0)));
#line 384 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__ExprB_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 2)));
#line 384 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__ResultB_12;
#line 384 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__ExprA_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 1)));
#line 384 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__ResultA_14;

#line 385 "simplify_goal_scope.m"
          {
#line 385 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__ResultA_14 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(check_hlds__simplify__simplify_goal_scope__ExprA_13, check_hlds__simplify__simplify_goal_scope__Info_5);
          }
#line 386 "simplify_goal_scope.m"
          {
#line 386 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__ResultB_12 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(check_hlds__simplify__simplify_goal_scope__ExprB_11, check_hlds__simplify__simplify_goal_scope__Info_5);
          }
#line 390 "simplify_goal_scope.m"
#line 390 "simplify_goal_scope.m"
          switch (check_hlds__simplify__simplify_goal_scope__Op_10) {
#line 390 "simplify_goal_scope.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 390 "simplify_goal_scope.m"
            case (MR_Integer) 1:
#line 392 "simplify_goal_scope.m"
              {
#line 392 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__Result_6 = mercury__bool__and_2_f_0(check_hlds__simplify__simplify_goal_scope__ResultA_14, check_hlds__simplify__simplify_goal_scope__ResultB_12);
              }
#line 390 "simplify_goal_scope.m"
              break;
#line 390 "simplify_goal_scope.m"
            case (MR_Integer) 0:
#line 389 "simplify_goal_scope.m"
              {
#line 389 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__Result_6 = mercury__bool__or_2_f_0(check_hlds__simplify__simplify_goal_scope__ResultA_14, check_hlds__simplify__simplify_goal_scope__ResultB_12);
              }
#line 390 "simplify_goal_scope.m"
              break;
#line 390 "simplify_goal_scope.m"
          }
#line 384 "simplify_goal_scope.m"
        }
#line 377 "simplify_goal_scope.m"
        break;
#line 377 "simplify_goal_scope.m"
    }
#line 377 "simplify_goal_scope.m"
    return check_hlds__simplify__simplify_goal_scope__Result_6;
#line 377 "simplify_goal_scope.m"
  }
#line 372 "simplify_goal_scope.m"
}

#line 286 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_goal_trace_goal_7_p_0(
#line 286 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_8,
#line 286 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_9,
#line 286 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal_10,
#line 286 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Goal0_11,
#line 286 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__Goal_12,
#line 286 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_30,
#line 286 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_31)
#line 286 "simplify_goal_scope.m"
{
#line 291 "simplify_goal_scope.m"
  {
#line 291 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 291 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__KeepGoal_15;

#line 295 "simplify_goal_scope.m"
    if ((check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "simplify_goal_scope.m"
      check_hlds__simplify__simplify_goal_scope__KeepGoal_15 = (MR_Integer) 1;
#line 295 "simplify_goal_scope.m"
    else
#line 293 "simplify_goal_scope.m"
      {
#line 293 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__CompiletimeExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_8, (MR_Integer) 0)));

#line 294 "simplify_goal_scope.m"
        {
#line 294 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal_scope__KeepGoal_15 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(check_hlds__simplify__simplify_goal_scope__CompiletimeExpr_14, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_30);
        }
#line 293 "simplify_goal_scope.m"
      }
#line 306 "simplify_goal_scope.m"
#line 306 "simplify_goal_scope.m"
    switch (check_hlds__simplify__simplify_goal_scope__KeepGoal_15) {
#line 306 "simplify_goal_scope.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 306 "simplify_goal_scope.m"
      case (MR_Integer) 0:
#line 302 "simplify_goal_scope.m"
        {
#line 302 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_11, (MR_Integer) 1)));
#line 302 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope__Context_18;
#line 303 "simplify_goal_scope.m"
          MR_Word check_hlds__simplify__simplify_goal_scope___GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_11, (MR_Integer) 0)));

#line 304 "simplify_goal_scope.m"
          {
#line 304 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo0_17);
          }
#line 305 "simplify_goal_scope.m"
          {
#line 305 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__Goal_12 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_scope__Context_18);
          }
#line 302 "simplify_goal_scope.m"
        }
#line 306 "simplify_goal_scope.m"
        break;
#line 306 "simplify_goal_scope.m"
      case (MR_Integer) 1:
#line 306 "simplify_goal_scope.m"
        if ((check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 311 "simplify_goal_scope.m"
          *check_hlds__simplify__simplify_goal_scope__Goal_12 = check_hlds__simplify__simplify_goal_scope__Goal0_11;
#line 306 "simplify_goal_scope.m"
        else
#line 313 "simplify_goal_scope.m"
          {
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__ModuleInfo_20;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__Globals_21;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__Target_22;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__PrivateBuiltin_23;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__EvalAttributes_25;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__CondGoal_28;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__GoalExpr_29;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_38_38;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_43_43;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_45_45;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_47_47;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_49_49;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_51_51;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_61_61;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_63_63;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__GoalInfo0_66;
#line 313 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__Context_67;
#line 361 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope___GoalExpr0_64;

#line 328 "simplify_goal_scope.m"
            {
#line 328 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_30, &check_hlds__simplify__simplify_goal_scope__ModuleInfo_20);
            }
#line 329 "simplify_goal_scope.m"
            {
#line 329 "simplify_goal_scope.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo_20, &check_hlds__simplify__simplify_goal_scope__Globals_21);
            }
#line 330 "simplify_goal_scope.m"
            {
#line 330 "simplify_goal_scope.m"
              libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_21, &check_hlds__simplify__simplify_goal_scope__Target_22);
            }
#line 331 "simplify_goal_scope.m"
            {
#line 331 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__PrivateBuiltin_23 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            }
#line 337 "simplify_goal_scope.m"
#line 337 "simplify_goal_scope.m"
            switch (check_hlds__simplify__simplify_goal_scope__Target_22) {
#line 337 "simplify_goal_scope.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 337 "simplify_goal_scope.m"
              case (MR_Integer) 0:
#line 335 "simplify_goal_scope.m"
                {
#line 336 "simplify_goal_scope.m"
                  {
#line 336 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_38_38 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
                  }
#line 335 "simplify_goal_scope.m"
                }
#line 337 "simplify_goal_scope.m"
                break;
#line 337 "simplify_goal_scope.m"
              case (MR_Integer) 1:
#line 344 "simplify_goal_scope.m"
                {
#line 345 "simplify_goal_scope.m"
                  {
#line 345 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_38_38 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 1);
                  }
#line 344 "simplify_goal_scope.m"
                }
#line 337 "simplify_goal_scope.m"
                break;
#line 337 "simplify_goal_scope.m"
              case (MR_Integer) 3:
#line 338 "simplify_goal_scope.m"
                {
#line 339 "simplify_goal_scope.m"
                  {
#line 339 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_38_38 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 3);
                  }
#line 338 "simplify_goal_scope.m"
                }
#line 337 "simplify_goal_scope.m"
                break;
#line 337 "simplify_goal_scope.m"
              case (MR_Integer) 2:
#line 341 "simplify_goal_scope.m"
                {
#line 342 "simplify_goal_scope.m"
                  {
#line 342 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_38_38 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 2);
                  }
#line 341 "simplify_goal_scope.m"
                }
#line 337 "simplify_goal_scope.m"
                break;
#line 337 "simplify_goal_scope.m"
            }
#line 347 "simplify_goal_scope.m"
            {
#line 347 "simplify_goal_scope.m"
              parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_38_38, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41);
            }
#line 348 "simplify_goal_scope.m"
            {
#line 348 "simplify_goal_scope.m"
              parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_43_43);
            }
#line 349 "simplify_goal_scope.m"
            {
#line 349 "simplify_goal_scope.m"
              parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_43_43, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_45_45);
            }
#line 350 "simplify_goal_scope.m"
            {
#line 350 "simplify_goal_scope.m"
              parse_tree__prog_data__set_terminates_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_45_45, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_47_47);
            }
#line 351 "simplify_goal_scope.m"
            {
#line 351 "simplify_goal_scope.m"
              parse_tree__prog_data__set_may_throw_exception_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_47_47, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_49_49);
            }
#line 353 "simplify_goal_scope.m"
            {
#line 353 "simplify_goal_scope.m"
              parse_tree__prog_data__set_may_modify_trail_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_49_49, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_51_51);
            }
#line 354 "simplify_goal_scope.m"
            {
#line 354 "simplify_goal_scope.m"
              parse_tree__prog_data__set_may_call_mm_tabled_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_51_51, &check_hlds__simplify__simplify_goal_scope__EvalAttributes_25);
            }
#line 361 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope___GoalExpr0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_11, (MR_Integer) 0)));
#line 361 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__GoalInfo0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_11, (MR_Integer) 1)));
#line 362 "simplify_goal_scope.m"
            {
#line 362 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Context_67 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo0_66);
            }
#line 366 "simplify_goal_scope.m"
            {
#line 366 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__V_61_61 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
            }
#line 363 "simplify_goal_scope.m"
            {
#line 363 "simplify_goal_scope.m"
              hlds__goal_util__generate_foreign_proc_16_p_0(check_hlds__simplify__simplify_goal_scope__PrivateBuiltin_23, (MR_String) "trace_evaluate_runtime_condition", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__EvalAttributes_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_9, (MR_String) "", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_scope__V_61_61, check_hlds__simplify__simplify_goal_scope__ModuleInfo_20, check_hlds__simplify__simplify_goal_scope__Context_67, &check_hlds__simplify__simplify_goal_scope__CondGoal_28);
            }
#line 368 "simplify_goal_scope.m"
            {
#line 368 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__V_63_63 = hlds__make_goal__true_goal_0_f_0();
            }
#line 368 "simplify_goal_scope.m"
            {
#line 368 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__GoalExpr_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 368 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 368 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 368 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_29, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__CondGoal_28));
#line 368 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_29, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__SubGoal_10));
#line 368 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_29, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_63_63));
#line 368 "simplify_goal_scope.m"
            }
#line 369 "simplify_goal_scope.m"
            {
#line 369 "simplify_goal_scope.m"
              MR_Word base;
#line 369 "simplify_goal_scope.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 369 "simplify_goal_scope.m"
              *check_hlds__simplify__simplify_goal_scope__Goal_12 = base;
#line 369 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__GoalExpr_29));
#line 369 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__GoalInfo0_66));
#line 369 "simplify_goal_scope.m"
            }
#line 313 "simplify_goal_scope.m"
          }
#line 306 "simplify_goal_scope.m"
        break;
#line 306 "simplify_goal_scope.m"
    }
#line 291 "simplify_goal_scope.m"
    *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_31 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_30;
#line 291 "simplify_goal_scope.m"
  }
#line 286 "simplify_goal_scope.m"
}

#line 274 "simplify_goal_scope.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_2(
#line 274 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__closure_arg)
#line 274 "simplify_goal_scope.m"
{
#line 274 "simplify_goal_scope.m"
  {
#line 274 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 274 "simplify_goal_scope.m"
    MR_Box check_hlds__simplify__simplify_goal_scope__closure = check_hlds__simplify__simplify_goal_scope__closure_arg;

#line 274 "simplify_goal_scope.m"
    {
#line 274 "simplify_goal_scope.m"
      check_hlds__simplify__simplify_goal_scope__succeeded = check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__274__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__closure, (MR_Integer) 4))));
    }
#line 274 "simplify_goal_scope.m"
    return check_hlds__simplify__simplify_goal_scope__succeeded;
#line 274 "simplify_goal_scope.m"
  }
#line 274 "simplify_goal_scope.m"
}

#line 264 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_1(
#line 264 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__closure_arg,
#line 264 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
#line 264 "simplify_goal_scope.m"
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_2,
#line 264 "simplify_goal_scope.m"
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_3,
#line 264 "simplify_goal_scope.m"
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_4)
#line 264 "simplify_goal_scope.m"
{
#line 264 "simplify_goal_scope.m"
  {
#line 264 "simplify_goal_scope.m"
    MR_Box check_hlds__simplify__simplify_goal_scope__closure = check_hlds__simplify__simplify_goal_scope__closure_arg;
#line 264 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__conv1_HeadVar__2_68;
#line 264 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__4_70;

#line 264 "simplify_goal_scope.m"
    {
#line 264 "simplify_goal_scope.m"
      check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__264__1_4_p_0(((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_1), &check_hlds__simplify__simplify_goal_scope__conv1_HeadVar__2_68, ((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_3), &check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__4_70);
    }
#line 264 "simplify_goal_scope.m"
    *check_hlds__simplify__simplify_goal_scope__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__conv1_HeadVar__2_68));
#line 264 "simplify_goal_scope.m"
    *check_hlds__simplify__simplify_goal_scope__wrapper_arg_4 = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__4_70));
#line 264 "simplify_goal_scope.m"
  }
#line 264 "simplify_goal_scope.m"
}

#line 239 "simplify_goal_scope.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0(
#line 239 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_11,
#line 239 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__VarTypes_12,
#line 239 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Conjunct_13,
#line 239 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__Conjuncts_14,
#line 239 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46,
#line 239 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_47,
#line 239 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48,
#line 239 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_49,
#line 239 "simplify_goal_scope.m"
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50,
#line 239 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_51)
#line 239 "simplify_goal_scope.m"
{
#line 246 "simplify_goal_scope.m"
  while (MR_TRUE)
#line 246 "simplify_goal_scope.m"
    {
#line 246 "simplify_goal_scope.m"
      /* tailcall optimized into a loop */
#line 246 "simplify_goal_scope.m"
      {
#line 246 "simplify_goal_scope.m"
        MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 246 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Conjunct_13, (MR_Integer) 0)));
#line 246 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Conjunct_13, (MR_Integer) 1)));
#line 246 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__LHSVar_32;
#line 246 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__ConsId_33;
#line 246 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__RHSVars_34;
#line 246 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__TermType_35;
#line 246 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Arg_36;
#line 246 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_56_56;
#line 246 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57;
#line 246 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_58_58;
#line 255 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__LHSVarPrime_25;
#line 255 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__ConsIdPrime_26;
#line 255 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__RHSVarsPrime_27;
#line 249 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Unify_23;
#line 249 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_20_20;
#line 249 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_21_21;
#line 249 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_22_22;
#line 249 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_24_24;
#line 250 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_28_28;
#line 250 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_29_29;
#line 250 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_30_30;
#line 250 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_31_31;

#line 249 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__GoalExpr_18)) == (MR_mktag((MR_Integer) 1)));
#line 249 "simplify_goal_scope.m"
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 249 "simplify_goal_scope.m"
          {
#line 249 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 0)));
#line 249 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 1)));
#line 249 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 2)));
#line 249 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__Unify_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 3)));
#line 249 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 4)));
#line 250 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Unify_23)) == (MR_mktag((MR_Integer) 0)));
#line 250 "simplify_goal_scope.m"
            if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 250 "simplify_goal_scope.m"
              {
#line 250 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__LHSVarPrime_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 0)));
#line 250 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__ConsIdPrime_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 1)));
#line 250 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__RHSVarsPrime_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 2)));
#line 250 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 3)));
#line 250 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 4)));
#line 250 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 5)));
#line 250 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 6)));
#line 250 "simplify_goal_scope.m"
              }
#line 249 "simplify_goal_scope.m"
          }
#line 255 "simplify_goal_scope.m"
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 252 "simplify_goal_scope.m"
          {
#line 252 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__LHSVar_32 = check_hlds__simplify__simplify_goal_scope__LHSVarPrime_25;
#line 253 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__ConsId_33 = check_hlds__simplify__simplify_goal_scope__ConsIdPrime_26;
#line 254 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__RHSVars_34 = check_hlds__simplify__simplify_goal_scope__RHSVarsPrime_27;
#line 252 "simplify_goal_scope.m"
          }
#line 255 "simplify_goal_scope.m"
        else
#line 256 "simplify_goal_scope.m"
          {
#line 256 "simplify_goal_scope.m"
            {
#line 256 "simplify_goal_scope.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_scope", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_construct_ground_terms\'/10", (MR_String) "not construction unification");
#line 256 "simplify_goal_scope.m"
              return;
            }
#line 256 "simplify_goal_scope.m"
          }
#line 258 "simplify_goal_scope.m"
        {
#line 258 "simplify_goal_scope.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_scope__VarTypes_12, check_hlds__simplify__simplify_goal_scope__LHSVar_32, &check_hlds__simplify__simplify_goal_scope__TermType_35);
        }
#line 262 "simplify_goal_scope.m"
        if ((check_hlds__simplify__simplify_goal_scope__RHSVars_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "simplify_goal_scope.m"
          {
#line 261 "simplify_goal_scope.m"
            {
#line 261 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Arg_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Arg_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConsId_33));
#line 261 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Arg_36, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermType_35));
#line 261 "simplify_goal_scope.m"
            }
#line 260 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_56_56 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48;
#line 260 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50;
#line 260 "simplify_goal_scope.m"
          }
#line 262 "simplify_goal_scope.m"
        else
#line 263 "simplify_goal_scope.m"
          {
#line 263 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__RHSArgs_39;
#line 263 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__InstMapDelta_40;
#line 263 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__TermInst_41;
#line 263 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__ConstStruct_42;
#line 263 "simplify_goal_scope.m"
            MR_Integer check_hlds__simplify__simplify_goal_scope__ConstNum_43;
#line 264 "simplify_goal_scope.m"
            MR_Box check_hlds__simplify__simplify_goal_scope__conv2_STATE_VARIABLE_VarArgMap_56_56;

#line 264 "simplify_goal_scope.m"
            {
#line 264 "simplify_goal_scope.m"
              mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, (MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_2[0], (MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_2[1], check_hlds__simplify__simplify_goal_scope__RHSVars_34, &check_hlds__simplify__simplify_goal_scope__RHSArgs_39, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48)), &check_hlds__simplify__simplify_goal_scope__conv2_STATE_VARIABLE_VarArgMap_56_56);
            }
#line 264 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_56_56 = ((MR_Word) check_hlds__simplify__simplify_goal_scope__conv2_STATE_VARIABLE_VarArgMap_56_56);
#line 265 "simplify_goal_scope.m"
            {
#line 265 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__InstMapDelta_40 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo_19);
            }
#line 266 "simplify_goal_scope.m"
            {
#line 266 "simplify_goal_scope.m"
              hlds__instmap__instmap_delta_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_scope__InstMapDelta_40, check_hlds__simplify__simplify_goal_scope__LHSVar_32, &check_hlds__simplify__simplify_goal_scope__TermInst_41);
            }
#line 267 "simplify_goal_scope.m"
            {
#line 267 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__ConstStruct_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 267 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__ConstStruct_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConsId_33));
#line 267 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__ConstStruct_42, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__RHSArgs_39));
#line 267 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__ConstStruct_42, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermType_35));
#line 267 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__ConstStruct_42, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermInst_41));
#line 267 "simplify_goal_scope.m"
            }
#line 268 "simplify_goal_scope.m"
            {
#line 268 "simplify_goal_scope.m"
              hlds__const_struct__lookup_insert_const_struct_4_p_0(check_hlds__simplify__simplify_goal_scope__ConstStruct_42, &check_hlds__simplify__simplify_goal_scope__ConstNum_43, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57);
            }
#line 269 "simplify_goal_scope.m"
            {
#line 269 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Arg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 269 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Arg_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConstNum_43));
#line 269 "simplify_goal_scope.m"
            }
#line 263 "simplify_goal_scope.m"
          }
#line 271 "simplify_goal_scope.m"
        {
#line 271 "simplify_goal_scope.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__LHSVar_32)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Arg_36)), check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_56_56, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_58_58);
        }
#line 276 "simplify_goal_scope.m"
        if ((check_hlds__simplify__simplify_goal_scope__Conjuncts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 273 "simplify_goal_scope.m"
          {
#line 273 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__V_63_63;

#line 274 "simplify_goal_scope.m"
            {
#line 274 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 274 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_63_63, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_scope_scalar_common_4[0]));
#line 274 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_63_63, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_2));
#line 274 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 274 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_63_63, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_11));
#line 274 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_63_63, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__LHSVar_32));
#line 274 "simplify_goal_scope.m"
            }
#line 274 "simplify_goal_scope.m"
            {
#line 274 "simplify_goal_scope.m"
              mercury__require__expect_4_p_0(check_hlds__simplify__simplify_goal_scope__V_63_63, (MR_String) "check_hlds.simplify.simplify_goal_scope", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_construct_ground_terms\'/10", (MR_String) "last var is not TermVar");
            }
#line 273 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_47 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46;
#line 273 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_49 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_58_58;
#line 273 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_51 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57;
#line 273 "simplify_goal_scope.m"
          }
#line 276 "simplify_goal_scope.m"
        else
#line 277 "simplify_goal_scope.m"
          {
#line 277 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__HeadConjunct_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Conjuncts_14, (MR_Integer) 0)));
#line 277 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__TailConjuncts_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Conjuncts_14, (MR_Integer) 1)));
#line 277 "simplify_goal_scope.m"
            MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59;

#line 278 "simplify_goal_scope.m"
            {
#line 278 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__LHSVar_32));
#line 278 "simplify_goal_scope.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46));
#line 278 "simplify_goal_scope.m"
            }
#line 279 "simplify_goal_scope.m"
            /* direct tailcall eliminated */
#line 279 "simplify_goal_scope.m"
            {
#line 279 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__Conjunct__tmp_copy_13 = check_hlds__simplify__simplify_goal_scope__HeadConjunct_44;
#line 279 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__Conjuncts__tmp_copy_14 = check_hlds__simplify__simplify_goal_scope__TailConjuncts_45;
#line 279 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0__tmp_copy_46 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59;
#line 279 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0__tmp_copy_48 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_58_58;
#line 279 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0__tmp_copy_50 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57;

#line 279 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0__tmp_copy_50;
#line 279 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0__tmp_copy_48;
#line 279 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0__tmp_copy_46;
#line 279 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Conjuncts_14 = check_hlds__simplify__simplify_goal_scope__Conjuncts__tmp_copy_14;
#line 279 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__Conjunct_13 = check_hlds__simplify__simplify_goal_scope__Conjunct__tmp_copy_13;
#line 279 "simplify_goal_scope.m"
            }
#line 279 "simplify_goal_scope.m"
            continue;
#line 277 "simplify_goal_scope.m"
          }
#line 246 "simplify_goal_scope.m"
      }
#line 246 "simplify_goal_scope.m"
      break;
#line 246 "simplify_goal_scope.m"
    }
#line 239 "simplify_goal_scope.m"
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
#line 494 "simplify_goal_scope.m"
  {
#line 494 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 494 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Reason_9;
#line 494 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__InnerGoal_10;
#line 494 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__GoalInfo_12;
#line 496 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__V_11_11;
#line 498 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Detism_14;
#line 498 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__OuterDetism_15;
#line 498 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__V_13_13;

#line 495 "simplify_goal_scope.m"
    {
#line 495 "simplify_goal_scope.m"
      check_hlds__simplify__simplify_goal_scope__loop_over_any_nested_scopes_4_p_0(check_hlds__simplify__simplify_goal_scope__Reason0_5, &check_hlds__simplify__simplify_goal_scope__Reason_9, check_hlds__simplify__simplify_goal_scope__InnerGoal0_6, &check_hlds__simplify__simplify_goal_scope__InnerGoal_10);
    }
#line 496 "simplify_goal_scope.m"
    check_hlds__simplify__simplify_goal_scope__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__InnerGoal_10, (MR_Integer) 0)));
#line 496 "simplify_goal_scope.m"
    check_hlds__simplify__simplify_goal_scope__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__InnerGoal_10, (MR_Integer) 1)));
#line 498 "simplify_goal_scope.m"
    check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason_9)) == (MR_mktag((MR_Integer) 0)));
#line 498 "simplify_goal_scope.m"
    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 498 "simplify_goal_scope.m"
      {
#line 498 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Reason_9, (MR_Integer) 0)));
#line 499 "simplify_goal_scope.m"
        {
#line 499 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal_scope__Detism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo_12);
        }
#line 500 "simplify_goal_scope.m"
        {
#line 500 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal_scope__OuterDetism_15 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_scope__OuterGoalInfo_7);
        }
#line 501 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Detism_14 == check_hlds__simplify__simplify_goal_scope__OuterDetism_15);
#line 498 "simplify_goal_scope.m"
      }
#line 506 "simplify_goal_scope.m"
    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 505 "simplify_goal_scope.m"
      *check_hlds__simplify__simplify_goal_scope__Goal_8 = check_hlds__simplify__simplify_goal_scope__InnerGoal_10;
#line 506 "simplify_goal_scope.m"
    else
#line 507 "simplify_goal_scope.m"
      {
#line 507 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__V_16_16;

#line 507 "simplify_goal_scope.m"
        {
#line 507 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal_scope__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 507 "simplify_goal_scope.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 507 "simplify_goal_scope.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__V_16_16, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Reason_9));
#line 507 "simplify_goal_scope.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__V_16_16, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__InnerGoal_10));
#line 507 "simplify_goal_scope.m"
        }
#line 507 "simplify_goal_scope.m"
        {
#line 507 "simplify_goal_scope.m"
          MR_Word base;
#line 507 "simplify_goal_scope.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 507 "simplify_goal_scope.m"
          *check_hlds__simplify__simplify_goal_scope__Goal_8 = base;
#line 507 "simplify_goal_scope.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_16_16));
#line 507 "simplify_goal_scope.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__OuterGoalInfo_7));
#line 507 "simplify_goal_scope.m"
        }
#line 507 "simplify_goal_scope.m"
      }
#line 494 "simplify_goal_scope.m"
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
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_81,
#line 26 "simplify_goal_scope.m"
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82)
#line 26 "simplify_goal_scope.m"
{
#line 69 "simplify_goal_scope.m"
  {
#line 69 "simplify_goal_scope.m"
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
#line 69 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__Reason0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr0_11, (MR_Integer) 1)));
#line 69 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr0_11, (MR_Integer) 2)));
#line 169 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_22;
#line 71 "simplify_goal_scope.m"
    MR_Word check_hlds__simplify__simplify_goal_scope__V_83_83;

#line 71 "simplify_goal_scope.m"
    check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_20, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 71 "simplify_goal_scope.m"
    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 71 "simplify_goal_scope.m"
      {
#line 71 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__TermVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_20, (MR_Integer) 1)));
#line 71 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_20, (MR_Integer) 2)));
#line 71 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__V_83_83 == (MR_Integer) 1);
#line 71 "simplify_goal_scope.m"
      }
#line 169 "simplify_goal_scope.m"
    if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 72 "simplify_goal_scope.m"
      {
#line 72 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23;
#line 72 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__ConstStructDb0_24;
#line 72 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__ConstStructEnabled_25;

#line 72 "simplify_goal_scope.m"
        {
#line 72 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_81, &check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23);
        }
#line 73 "simplify_goal_scope.m"
        {
#line 73 "simplify_goal_scope.m"
          hlds__hlds_module__module_info_get_const_struct_db_2_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23, &check_hlds__simplify__simplify_goal_scope__ConstStructDb0_24);
        }
#line 74 "simplify_goal_scope.m"
        {
#line 74 "simplify_goal_scope.m"
          hlds__const_struct__const_struct_db_get_ground_term_enabled_2_p_0(check_hlds__simplify__simplify_goal_scope__ConstStructDb0_24, &check_hlds__simplify__simplify_goal_scope__ConstStructEnabled_25);
        }
#line 121 "simplify_goal_scope.m"
#line 121 "simplify_goal_scope.m"
        switch (check_hlds__simplify__simplify_goal_scope__ConstStructEnabled_25) {
#line 121 "simplify_goal_scope.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 121 "simplify_goal_scope.m"
          case (MR_Integer) 0:
#line 77 "simplify_goal_scope.m"
            {
#line 77 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__Globals_26;
#line 77 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__CommonStruct_27;

#line 78 "simplify_goal_scope.m"
              {
#line 78 "simplify_goal_scope.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23, &check_hlds__simplify__simplify_goal_scope__Globals_26);
              }
#line 79 "simplify_goal_scope.m"
              {
#line 79 "simplify_goal_scope.m"
                libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_26, (MR_Integer) 340, &check_hlds__simplify__simplify_goal_scope__CommonStruct_27);
              }
#line 105 "simplify_goal_scope.m"
#line 105 "simplify_goal_scope.m"
              switch (check_hlds__simplify__simplify_goal_scope__CommonStruct_27) {
#line 105 "simplify_goal_scope.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 105 "simplify_goal_scope.m"
                case (MR_Integer) 0:
#line 106 "simplify_goal_scope.m"
                  {
#line 106 "simplify_goal_scope.m"
                    MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal_28;
#line 106 "simplify_goal_scope.m"
                    MR_Word check_hlds__simplify__simplify_goal_scope__NewReason_29;

#line 115 "simplify_goal_scope.m"
                    {
#line 115 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_scope__SubGoal0_21, &check_hlds__simplify__simplify_goal_scope__SubGoal_28, check_hlds__simplify__simplify_goal_scope__NestedContext0_15, check_hlds__simplify__simplify_goal_scope__InstMap0_16, check_hlds__simplify__simplify_goal_scope__Common0_17, check_hlds__simplify__simplify_goal_scope__Common_18, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_81, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82);
                    }
#line 117 "simplify_goal_scope.m"
                    {
#line 117 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__NewReason_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 117 "simplify_goal_scope.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__NewReason_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 117 "simplify_goal_scope.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__NewReason_29, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_22));
#line 117 "simplify_goal_scope.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__NewReason_29, 2) = ((MR_Box) ((MR_Integer) 3));
#line 117 "simplify_goal_scope.m"
                    }
#line 118 "simplify_goal_scope.m"
                    {
#line 118 "simplify_goal_scope.m"
                      MR_Word base;
#line 118 "simplify_goal_scope.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 118 "simplify_goal_scope.m"
                      *check_hlds__simplify__simplify_goal_scope__GoalExpr_12 = base;
#line 118 "simplify_goal_scope.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 118 "simplify_goal_scope.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__NewReason_29));
#line 118 "simplify_goal_scope.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__SubGoal_28));
#line 118 "simplify_goal_scope.m"
                    }
#line 119 "simplify_goal_scope.m"
                    *check_hlds__simplify__simplify_goal_scope__GoalInfo_14 = check_hlds__simplify__simplify_goal_scope__GoalInfo0_13;
#line 106 "simplify_goal_scope.m"
                  }
#line 105 "simplify_goal_scope.m"
                  break;
#line 105 "simplify_goal_scope.m"
                case (MR_Integer) 1:
#line 81 "simplify_goal_scope.m"
                  {
#line 102 "simplify_goal_scope.m"
                    *check_hlds__simplify__simplify_goal_scope__GoalExpr_12 = check_hlds__simplify__simplify_goal_scope__GoalExpr0_11;
#line 103 "simplify_goal_scope.m"
                    *check_hlds__simplify__simplify_goal_scope__GoalInfo_14 = check_hlds__simplify__simplify_goal_scope__GoalInfo0_13;
#line 104 "simplify_goal_scope.m"
                    *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 81 "simplify_goal_scope.m"
                    *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_81;
#line 81 "simplify_goal_scope.m"
                  }
#line 105 "simplify_goal_scope.m"
                  break;
#line 105 "simplify_goal_scope.m"
              }
#line 77 "simplify_goal_scope.m"
            }
#line 121 "simplify_goal_scope.m"
            break;
#line 121 "simplify_goal_scope.m"
          case (MR_Integer) 1:
#line 122 "simplify_goal_scope.m"
            {
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__TypeInfo_121_121;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__TypeCtorInfo_122_122;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__HeadConjunct_35;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__TailConjuncts_36;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__VarTypes_37;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__ElimVars_38;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__VarArgMap_39;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__ConstStructDb_40;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__ModuleInfo_41;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__VarArgs_42;
#line 122 "simplify_goal_scope.m"
              MR_Integer check_hlds__simplify__simplify_goal_scope__TermConstNum_45;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__TermConstStruct_46;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__TermConsId_47;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__ConsId_48;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__RHS_49;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__Unification_50;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__InstMapDelta_51;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__TermInst_52;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__UnifyMode_53;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__V_89_89;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_90_90;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__V_104_104;
#line 122 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__V_106_106;
#line 130 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__HeadConjunctPrime_33;
#line 130 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__TailConjunctsPrime_34;
#line 124 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__SubGoal0_21, (MR_Integer) 0)));
#line 124 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__Conjuncts_32;
#line 124 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__V_84_84;
#line 124 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__SubGoal0_21, (MR_Integer) 1)));
#line 149 "simplify_goal_scope.m"
              MR_Integer check_hlds__simplify__simplify_goal_scope__TermConstNumPrime_44;
#line 145 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__TypeInfo_125_125;
#line 145 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__TermArg_43;
#line 145 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__V_92_92;
#line 145 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__V_93_93;
#line 145 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__V_123_123;
#line 155 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__V_118_118;
#line 155 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__V_119_119;
#line 155 "simplify_goal_scope.m"
              MR_Word check_hlds__simplify__simplify_goal_scope__V_120_120;

#line 125 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 125 "simplify_goal_scope.m"
              if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 125 "simplify_goal_scope.m"
                {
#line 125 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30, (MR_Integer) 1)));
#line 125 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__Conjuncts_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30, (MR_Integer) 2)));
#line 125 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__V_84_84 == (MR_Integer) 0);
#line 124 "simplify_goal_scope.m"
                  if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 124 "simplify_goal_scope.m"
                    {
#line 126 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Conjuncts_32)) == (MR_mktag((MR_Integer) 1)));
#line 126 "simplify_goal_scope.m"
                      if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 126 "simplify_goal_scope.m"
                        {
#line 126 "simplify_goal_scope.m"
                          check_hlds__simplify__simplify_goal_scope__HeadConjunctPrime_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Conjuncts_32, (MR_Integer) 0)));
#line 126 "simplify_goal_scope.m"
                          check_hlds__simplify__simplify_goal_scope__TailConjunctsPrime_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Conjuncts_32, (MR_Integer) 1)));
#line 126 "simplify_goal_scope.m"
                        }
#line 124 "simplify_goal_scope.m"
                    }
#line 125 "simplify_goal_scope.m"
                }
#line 130 "simplify_goal_scope.m"
              if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 128 "simplify_goal_scope.m"
                {
#line 128 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__HeadConjunct_35 = check_hlds__simplify__simplify_goal_scope__HeadConjunctPrime_33;
#line 129 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__TailConjuncts_36 = check_hlds__simplify__simplify_goal_scope__TailConjunctsPrime_34;
#line 128 "simplify_goal_scope.m"
                }
#line 130 "simplify_goal_scope.m"
              else
#line 131 "simplify_goal_scope.m"
                {
#line 131 "simplify_goal_scope.m"
                  {
#line 131 "simplify_goal_scope.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_scope", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_goal_scope\'/10", (MR_String) "from_ground_term_construct scope is not conjunction");
#line 131 "simplify_goal_scope.m"
                    return;
                  }
#line 131 "simplify_goal_scope.m"
                }
#line 134 "simplify_goal_scope.m"
              {
#line 134 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_81, &check_hlds__simplify__simplify_goal_scope__VarTypes_37);
              }
#line 2507 "check_hlds.simplify.simplify_goal_scope.c"
              check_hlds__simplify__simplify_goal_scope__TypeInfo_121_121 = (MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0];
#line 2509 "check_hlds.simplify.simplify_goal_scope.c"
              check_hlds__simplify__simplify_goal_scope__TypeCtorInfo_122_122 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0;
#line 137 "simplify_goal_scope.m"
              {
#line 137 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_89_89 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_goal_scope__TypeInfo_121_121, check_hlds__simplify__simplify_goal_scope__TypeCtorInfo_122_122);
              }
#line 135 "simplify_goal_scope.m"
              {
#line 135 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0(check_hlds__simplify__simplify_goal_scope__TermVar_22, check_hlds__simplify__simplify_goal_scope__VarTypes_37, check_hlds__simplify__simplify_goal_scope__HeadConjunct_35, check_hlds__simplify__simplify_goal_scope__TailConjuncts_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_scope__ElimVars_38, check_hlds__simplify__simplify_goal_scope__V_89_89, &check_hlds__simplify__simplify_goal_scope__VarArgMap_39, check_hlds__simplify__simplify_goal_scope__ConstStructDb0_24, &check_hlds__simplify__simplify_goal_scope__ConstStructDb_40);
              }
#line 138 "simplify_goal_scope.m"
              {
#line 138 "simplify_goal_scope.m"
                hlds__hlds_module__module_info_set_const_struct_db_3_p_0(check_hlds__simplify__simplify_goal_scope__ConstStructDb_40, check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23, &check_hlds__simplify__simplify_goal_scope__ModuleInfo_41);
              }
#line 140 "simplify_goal_scope.m"
              {
#line 140 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_info__simplify_info_add_elim_vars_3_p_0(check_hlds__simplify__simplify_goal_scope__ElimVars_38, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_81, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_90_90);
              }
#line 141 "simplify_goal_scope.m"
              {
#line 141 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo_41, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_90_90, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82);
              }
#line 143 "simplify_goal_scope.m"
              {
#line 143 "simplify_goal_scope.m"
                mercury__map__to_assoc_list_2_p_0(check_hlds__simplify__simplify_goal_scope__TypeInfo_121_121, check_hlds__simplify__simplify_goal_scope__TypeCtorInfo_122_122, check_hlds__simplify__simplify_goal_scope__VarArgMap_39, &check_hlds__simplify__simplify_goal_scope__VarArgs_42);
              }
#line 145 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__VarArgs_42)) == (MR_mktag((MR_Integer) 1)));
#line 145 "simplify_goal_scope.m"
              if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 145 "simplify_goal_scope.m"
                {
#line 145 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__VarArgs_42, (MR_Integer) 0)));
#line 145 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__VarArgs_42, (MR_Integer) 1)));
#line 145 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_92_92, (MR_Integer) 0)));
#line 145 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__TermArg_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_92_92, (MR_Integer) 1)));
#line 2555 "check_hlds.simplify.simplify_goal_scope.c"
                  check_hlds__simplify__simplify_goal_scope__TypeInfo_125_125 = (MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0];
#line 145 "simplify_goal_scope.m"
                  {
#line 145 "simplify_goal_scope.m"
                    check_hlds__simplify__simplify_goal_scope__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_goal_scope__TypeInfo_125_125, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_22)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_123_123)));
                  }
#line 145 "simplify_goal_scope.m"
                  if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 145 "simplify_goal_scope.m"
                    {
#line 145 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__V_93_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "simplify_goal_scope.m"
                      if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 145 "simplify_goal_scope.m"
                        {
#line 146 "simplify_goal_scope.m"
                          check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__TermArg_43)) == (MR_mktag((MR_Integer) 0)));
#line 146 "simplify_goal_scope.m"
                          if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 146 "simplify_goal_scope.m"
                            check_hlds__simplify__simplify_goal_scope__TermConstNumPrime_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermArg_43, (MR_Integer) 0)));
#line 145 "simplify_goal_scope.m"
                        }
#line 145 "simplify_goal_scope.m"
                    }
#line 145 "simplify_goal_scope.m"
                }
#line 149 "simplify_goal_scope.m"
              if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 148 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__TermConstNum_45 = check_hlds__simplify__simplify_goal_scope__TermConstNumPrime_44;
#line 149 "simplify_goal_scope.m"
              else
#line 150 "simplify_goal_scope.m"
                {
#line 150 "simplify_goal_scope.m"
                  {
#line 150 "simplify_goal_scope.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_scope", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_goal_scope\'/10", (MR_String) "unexpected VarArgMap");
#line 150 "simplify_goal_scope.m"
                    return;
                  }
#line 150 "simplify_goal_scope.m"
                }
#line 153 "simplify_goal_scope.m"
              {
#line 153 "simplify_goal_scope.m"
                hlds__const_struct__lookup_const_struct_num_3_p_0(check_hlds__simplify__simplify_goal_scope__ConstStructDb_40, check_hlds__simplify__simplify_goal_scope__TermConstNum_45, &check_hlds__simplify__simplify_goal_scope__TermConstStruct_46);
              }
#line 155 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__TermConsId_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermConstStruct_46, (MR_Integer) 0)));
#line 155 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermConstStruct_46, (MR_Integer) 1)));
#line 155 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermConstStruct_46, (MR_Integer) 2)));
#line 155 "simplify_goal_scope.m"
              check_hlds__simplify__simplify_goal_scope__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermConstStruct_46, (MR_Integer) 3)));
#line 156 "simplify_goal_scope.m"
              {
#line 156 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__ConsId_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 156 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__ConsId_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 156 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__ConsId_48, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermConstNum_45));
#line 156 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__ConsId_48, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermConsId_47));
#line 156 "simplify_goal_scope.m"
              }
#line 157 "simplify_goal_scope.m"
              {
#line 157 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__RHS_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 157 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__RHS_49, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConsId_48));
#line 157 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__RHS_49, 1) = ((MR_Box) ((MR_Integer) 0));
#line 157 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__RHS_49, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "simplify_goal_scope.m"
              }
#line 158 "simplify_goal_scope.m"
              {
#line 158 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__Unification_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 158 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_22));
#line 158 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConsId_48));
#line 158 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 5) = ((MR_Box) ((MR_Integer) 1));
#line 158 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "simplify_goal_scope.m"
              }
#line 160 "simplify_goal_scope.m"
              {
#line 160 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__InstMapDelta_51 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo0_13);
              }
#line 161 "simplify_goal_scope.m"
              {
#line 161 "simplify_goal_scope.m"
                hlds__instmap__instmap_delta_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_scope__InstMapDelta_51, check_hlds__simplify__simplify_goal_scope__TermVar_22, &check_hlds__simplify__simplify_goal_scope__TermInst_52);
              }
#line 162 "simplify_goal_scope.m"
              {
#line 162 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 162 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_104_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 162 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_104_104, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermInst_52));
#line 162 "simplify_goal_scope.m"
              }
#line 162 "simplify_goal_scope.m"
              {
#line 162 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 162 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_106_106, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermInst_52));
#line 162 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__V_106_106, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermInst_52));
#line 162 "simplify_goal_scope.m"
              }
#line 162 "simplify_goal_scope.m"
              {
#line 162 "simplify_goal_scope.m"
                check_hlds__simplify__simplify_goal_scope__UnifyMode_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 162 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__UnifyMode_53, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_104_104));
#line 162 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__UnifyMode_53, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__V_106_106));
#line 162 "simplify_goal_scope.m"
              }
#line 164 "simplify_goal_scope.m"
              {
#line 164 "simplify_goal_scope.m"
                MR_Word base;
#line 164 "simplify_goal_scope.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 164 "simplify_goal_scope.m"
                *check_hlds__simplify__simplify_goal_scope__GoalExpr_12 = base;
#line 164 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_22));
#line 164 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__RHS_49));
#line 164 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__UnifyMode_53));
#line 164 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Unification_50));
#line 164 "simplify_goal_scope.m"
                MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_scope_scalar_common_1[1]));
#line 164 "simplify_goal_scope.m"
              }
#line 166 "simplify_goal_scope.m"
              *check_hlds__simplify__simplify_goal_scope__GoalInfo_14 = check_hlds__simplify__simplify_goal_scope__GoalInfo0_13;
#line 167 "simplify_goal_scope.m"
              *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 122 "simplify_goal_scope.m"
            }
#line 121 "simplify_goal_scope.m"
            break;
#line 121 "simplify_goal_scope.m"
        }
#line 72 "simplify_goal_scope.m"
      }
#line 169 "simplify_goal_scope.m"
    else
#line 171 "simplify_goal_scope.m"
      {
#line 171 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Common1_55;
#line 171 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 171 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__GoalExpr1_57;
#line 171 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__Goal_64;
#line 171 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113;
#line 171 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal_117;
#line 173 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope___GoalInfo1_58;
#line 228 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__FinalReason_59;
#line 228 "simplify_goal_scope.m"
        MR_Word check_hlds__simplify__simplify_goal_scope__FinalSubGoal_60;

#line 170 "simplify_goal_scope.m"
        {
#line 170 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_scope__SubGoal0_21, &check_hlds__simplify__simplify_goal_scope__SubGoal_117, check_hlds__simplify__simplify_goal_scope__NestedContext0_15, check_hlds__simplify__simplify_goal_scope__InstMap0_16, check_hlds__simplify__simplify_goal_scope__Common0_17, &check_hlds__simplify__simplify_goal_scope__Common1_55, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_81, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113);
        }
#line 172 "simplify_goal_scope.m"
        {
#line 172 "simplify_goal_scope.m"
          check_hlds__simplify__simplify_goal_scope__try_to_merge_nested_scopes_4_p_0(check_hlds__simplify__simplify_goal_scope__Reason0_20, check_hlds__simplify__simplify_goal_scope__SubGoal_117, check_hlds__simplify__simplify_goal_scope__GoalInfo0_13, &check_hlds__simplify__simplify_goal_scope__Goal1_56);
        }
#line 173 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__GoalExpr1_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal1_56, (MR_Integer) 0)));
#line 173 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope___GoalInfo1_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal1_56, (MR_Integer) 1)));
#line 174 "simplify_goal_scope.m"
        check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__GoalExpr1_57)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr1_57, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 174 "simplify_goal_scope.m"
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 174 "simplify_goal_scope.m"
          {
#line 174 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__FinalReason_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr1_57, (MR_Integer) 1)));
#line 174 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__FinalSubGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr1_57, (MR_Integer) 2)));
#line 182 "simplify_goal_scope.m"
#line 182 "simplify_goal_scope.m"
            switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__FinalReason_59)) {
#line 182 "simplify_goal_scope.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 182 "simplify_goal_scope.m"
              case (MR_Integer) 0:
#line 197 "simplify_goal_scope.m"
                {
#line 198 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 212 "simplify_goal_scope.m"
                  *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 197 "simplify_goal_scope.m"
                  *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113;
#line 197 "simplify_goal_scope.m"
                }
#line 182 "simplify_goal_scope.m"
                break;
#line 182 "simplify_goal_scope.m"
              case (MR_Integer) 1:
#line 197 "simplify_goal_scope.m"
                {
#line 198 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 212 "simplify_goal_scope.m"
                  *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 197 "simplify_goal_scope.m"
                  *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113;
#line 197 "simplify_goal_scope.m"
                }
#line 182 "simplify_goal_scope.m"
                break;
#line 182 "simplify_goal_scope.m"
              case (MR_Integer) 2:
#line 179 "simplify_goal_scope.m"
                {
#line 180 "simplify_goal_scope.m"
                  check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 181 "simplify_goal_scope.m"
                  *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
#line 179 "simplify_goal_scope.m"
                  *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113;
#line 179 "simplify_goal_scope.m"
                }
#line 182 "simplify_goal_scope.m"
                break;
#line 182 "simplify_goal_scope.m"
              case (MR_Integer) 3:
#line 182 "simplify_goal_scope.m"
#line 182 "simplify_goal_scope.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 0)))) {
#line 182 "simplify_goal_scope.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 182 "simplify_goal_scope.m"
                  case (MR_Integer) 0:
#line 182 "simplify_goal_scope.m"
                  case (MR_Integer) 1:
#line 182 "simplify_goal_scope.m"
                  case (MR_Integer) 2:
#line 186 "simplify_goal_scope.m"
                    {
#line 189 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__FinalSubGoal_60;
#line 190 "simplify_goal_scope.m"
                      *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
#line 186 "simplify_goal_scope.m"
                      *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113;
#line 186 "simplify_goal_scope.m"
                    }
#line 182 "simplify_goal_scope.m"
                    break;
#line 182 "simplify_goal_scope.m"
                  case (MR_Integer) 3:
#line 197 "simplify_goal_scope.m"
                    {
#line 198 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 212 "simplify_goal_scope.m"
                      *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 197 "simplify_goal_scope.m"
                      *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113;
#line 197 "simplify_goal_scope.m"
                    }
#line 182 "simplify_goal_scope.m"
                    break;
#line 182 "simplify_goal_scope.m"
                  case (MR_Integer) 4:
#line 182 "simplify_goal_scope.m"
                    {
#line 182 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 1)));

#line 182 "simplify_goal_scope.m"
#line 182 "simplify_goal_scope.m"
                      switch (check_hlds__simplify__simplify_goal_scope__V_124_124) {
#line 182 "simplify_goal_scope.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 182 "simplify_goal_scope.m"
                        case (MR_Integer) 1:
#line 197 "simplify_goal_scope.m"
                          {
#line 198 "simplify_goal_scope.m"
                            check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 212 "simplify_goal_scope.m"
                            *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 197 "simplify_goal_scope.m"
                            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113;
#line 197 "simplify_goal_scope.m"
                          }
#line 182 "simplify_goal_scope.m"
                          break;
#line 182 "simplify_goal_scope.m"
                        case (MR_Integer) 0:
#line 179 "simplify_goal_scope.m"
                          {
#line 180 "simplify_goal_scope.m"
                            check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 181 "simplify_goal_scope.m"
                            *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
#line 179 "simplify_goal_scope.m"
                            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113;
#line 179 "simplify_goal_scope.m"
                          }
#line 182 "simplify_goal_scope.m"
                          break;
#line 182 "simplify_goal_scope.m"
                      }
#line 182 "simplify_goal_scope.m"
                    }
#line 182 "simplify_goal_scope.m"
                    break;
#line 182 "simplify_goal_scope.m"
                  case (MR_Integer) 5:
#line 179 "simplify_goal_scope.m"
                    {
#line 180 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 181 "simplify_goal_scope.m"
                      *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
#line 179 "simplify_goal_scope.m"
                      *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113;
#line 179 "simplify_goal_scope.m"
                    }
#line 182 "simplify_goal_scope.m"
                    break;
#line 182 "simplify_goal_scope.m"
                  case (MR_Integer) 6:
#line 215 "simplify_goal_scope.m"
                    {
#line 215 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 1)));
#line 215 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 2)));
#line 214 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 3)));
#line 214 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 4)));
#line 214 "simplify_goal_scope.m"
                      MR_Word check_hlds__simplify__simplify_goal_scope__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 5)));

#line 216 "simplify_goal_scope.m"
                      {
#line 216 "simplify_goal_scope.m"
                        check_hlds__simplify__simplify_goal_scope__succeeded = check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113);
                      }
#line 219 "simplify_goal_scope.m"
                      if (check_hlds__simplify__simplify_goal_scope__succeeded)
#line 217 "simplify_goal_scope.m"
                        {
#line 217 "simplify_goal_scope.m"
                          check_hlds__simplify__simplify_goal_scope__simplify_goal_trace_goal_7_p_0(check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_76, check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_77, check_hlds__simplify__simplify_goal_scope__FinalSubGoal_60, check_hlds__simplify__simplify_goal_scope__Goal1_56, &check_hlds__simplify__simplify_goal_scope__Goal_64, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82);
                        }
#line 219 "simplify_goal_scope.m"
                      else
#line 220 "simplify_goal_scope.m"
                        {
#line 220 "simplify_goal_scope.m"
                          check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 220 "simplify_goal_scope.m"
                          *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113;
#line 220 "simplify_goal_scope.m"
                        }
#line 226 "simplify_goal_scope.m"
                      *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 215 "simplify_goal_scope.m"
                    }
#line 182 "simplify_goal_scope.m"
                    break;
#line 182 "simplify_goal_scope.m"
                  case (MR_Integer) 7:
#line 197 "simplify_goal_scope.m"
                    {
#line 198 "simplify_goal_scope.m"
                      check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 212 "simplify_goal_scope.m"
                      *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
#line 197 "simplify_goal_scope.m"
                      *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113;
#line 197 "simplify_goal_scope.m"
                    }
#line 182 "simplify_goal_scope.m"
                    break;
#line 182 "simplify_goal_scope.m"
                }
#line 182 "simplify_goal_scope.m"
                break;
#line 182 "simplify_goal_scope.m"
            }
#line 174 "simplify_goal_scope.m"
          }
#line 174 "simplify_goal_scope.m"
        else
#line 229 "simplify_goal_scope.m"
          {
#line 229 "simplify_goal_scope.m"
            check_hlds__simplify__simplify_goal_scope__Goal_64 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
#line 230 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
#line 229 "simplify_goal_scope.m"
            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_82 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_113_113;
#line 229 "simplify_goal_scope.m"
          }
#line 232 "simplify_goal_scope.m"
        *check_hlds__simplify__simplify_goal_scope__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal_64, (MR_Integer) 0)));
#line 232 "simplify_goal_scope.m"
        *check_hlds__simplify__simplify_goal_scope__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal_64, (MR_Integer) 1)));
#line 171 "simplify_goal_scope.m"
      }
#line 69 "simplify_goal_scope.m"
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
