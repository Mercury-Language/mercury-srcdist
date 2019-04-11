/*
** Automatically generated from `simplify_goal_scope.m'
** by the Mercury compiler,
** version rotd-2017-06-12
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
#include "transform_hlds.mih"
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
#include "hlds.hlds_dependency_graph.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0;

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0_10001(
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__279__1_2_p_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_11,
  MR_Word check_hlds__simplify__simplify_goal_scope__LHSVar_32);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__269__1_4_p_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__1_67,
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__2_68,
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__3_69,
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__4_70);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0(
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__loop_over_any_nested_scopes_4_p_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__Reason0_5,
  MR_Word * check_hlds__simplify__simplify_goal_scope__Reason_6,
  MR_Word check_hlds__simplify__simplify_goal_scope__Goal0_7,
  MR_Word * check_hlds__simplify__simplify_goal_scope__Goal_8);

static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__TraceExpr_4,
  MR_Word check_hlds__simplify__simplify_goal_scope__Info_5);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_goal_trace_goal_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_8,
  MR_Word check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_9,
  MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal_10,
  MR_Word check_hlds__simplify__simplify_goal_scope__Goal0_11,
  MR_Word * check_hlds__simplify__simplify_goal_scope__Goal_12,
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_33,
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_34);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_2(
  MR_Box check_hlds__simplify__simplify_goal_scope__closure_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_scope__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_3,
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_4);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_11,
  MR_Word check_hlds__simplify__simplify_goal_scope__VarTypes_12,
  MR_Word check_hlds__simplify__simplify_goal_scope__Conjunct_13,
  MR_Word check_hlds__simplify__simplify_goal_scope__Conjuncts_14,
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46,
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_47,
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48,
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_49,
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50,
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



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_scope__check_hlds__simplify__simplify_goal_scope__type_ctor_info_var_to_arg_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0_10001(
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;

    {
      check_hlds__simplify__simplify_goal_scope__succeeded = check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0(((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_2));
    }
    return check_hlds__simplify__simplify_goal_scope__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0(&check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_3));
    }
    *check_hlds__simplify__simplify_goal_scope__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__279__1_2_p_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_11,
  MR_Word check_hlds__simplify__simplify_goal_scope__LHSVar_32)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;

    {
      check_hlds__simplify__simplify_goal_scope__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_11)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__LHSVar_32)));
    }
    return check_hlds__simplify__simplify_goal_scope__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__269__1_4_p_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__1_67,
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__2_68,
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__3_69,
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__4_70)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
    MR_Box check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__2_68;

    {
      mercury__map__det_remove_4_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__HeadVar__1_67)), &check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__2_68, check_hlds__simplify__simplify_goal_scope__HeadVar__3_69, check_hlds__simplify__simplify_goal_scope__HeadVar__4_70);
    }
    *check_hlds__simplify__simplify_goal_scope__HeadVar__2_68 = ((MR_Word) check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__2_68);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0(
  MR_Word * check_hlds__simplify__simplify_goal_scope__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_scope__Cast_HeadVar1_4 = check_hlds__simplify__simplify_goal_scope__HeadVar__2_2;
    MR_Word check_hlds__simplify__simplify_goal_scope__Cast_HeadVar2_5 = check_hlds__simplify__simplify_goal_scope__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_2[0], check_hlds__simplify__simplify_goal_scope__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_scope__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_scope__Cast_HeadVar1_3 = check_hlds__simplify__simplify_goal_scope__HeadVar__1_1;
    MR_Word check_hlds__simplify__simplify_goal_scope__Cast_HeadVar2_4 = check_hlds__simplify__simplify_goal_scope__HeadVar__2_2;

    {
      check_hlds__simplify__simplify_goal_scope__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Cast_HeadVar2_4)));
    }
    return check_hlds__simplify__simplify_goal_scope__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__loop_over_any_nested_scopes_4_p_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__Reason0_5,
  MR_Word * check_hlds__simplify__simplify_goal_scope__Reason_6,
  MR_Word check_hlds__simplify__simplify_goal_scope__Goal0_7,
  MR_Word * check_hlds__simplify__simplify_goal_scope__Goal_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
        MR_Word check_hlds__simplify__simplify_goal_scope__Goal1_10;
        MR_Word check_hlds__simplify__simplify_goal_scope__Reason2_14;
        MR_Word check_hlds__simplify__simplify_goal_scope__Reason1_9;
        MR_Word check_hlds__simplify__simplify_goal_scope__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_7, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__simplify_goal_scope__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_7, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_goal_scope__Vars0_12;
        MR_Word check_hlds__simplify__simplify_goal_scope__Vars1_13;

        check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Var_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Var_21, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
          {
            check_hlds__simplify__simplify_goal_scope__Reason1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Var_21, (MR_Integer) 1)));
            check_hlds__simplify__simplify_goal_scope__Goal1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Var_21, (MR_Integer) 2)));
            check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason0_5)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__simplify__simplify_goal_scope__succeeded)
              {
                check_hlds__simplify__simplify_goal_scope__Vars0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason1_9)) == (MR_mktag((MR_Integer) 0)));
                if (check_hlds__simplify__simplify_goal_scope__succeeded)
                  check_hlds__simplify__simplify_goal_scope__Vars1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 0)));
              }
            if (check_hlds__simplify__simplify_goal_scope__succeeded)
              {
                MR_Word check_hlds__simplify__simplify_goal_scope__Var_22;

                {
                  check_hlds__simplify__simplify_goal_scope__Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], check_hlds__simplify__simplify_goal_scope__Vars0_12, check_hlds__simplify__simplify_goal_scope__Vars1_13);
                }
                {
                  check_hlds__simplify__simplify_goal_scope__Reason2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Reason2_14, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Var_22));
                }
                check_hlds__simplify__simplify_goal_scope__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word check_hlds__simplify__simplify_goal_scope__Removable0_15;
                MR_Word check_hlds__simplify__simplify_goal_scope__Removable1_16;

                check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (check_hlds__simplify__simplify_goal_scope__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_scope__Removable0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 1)));
                    check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
                      check_hlds__simplify__simplify_goal_scope__Removable1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 1)));
                  }
                if (check_hlds__simplify__simplify_goal_scope__succeeded)
                  {
                    MR_Word check_hlds__simplify__simplify_goal_scope__Removable2_17;

                    check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Removable0_15 == (MR_Integer) 0);
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
                      check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Removable1_16 == (MR_Integer) 0);
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
                      check_hlds__simplify__simplify_goal_scope__Removable2_17 = (MR_Integer) 0;
                    else
                      check_hlds__simplify__simplify_goal_scope__Removable2_17 = (MR_Integer) 1;
                    {
                      check_hlds__simplify__simplify_goal_scope__Reason2_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason2_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason2_14, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Removable2_17));
                    }
                    check_hlds__simplify__simplify_goal_scope__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word check_hlds__simplify__simplify_goal_scope__ForcePruning0_18;
                    MR_Word check_hlds__simplify__simplify_goal_scope__ForcePruning1_19;
                    MR_Word check_hlds__simplify__simplify_goal_scope__ForcePruning2_20;

                    check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (check_hlds__simplify__simplify_goal_scope__succeeded)
                      {
                        check_hlds__simplify__simplify_goal_scope__ForcePruning0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_5, (MR_Integer) 1)));
                        check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
                        if (check_hlds__simplify__simplify_goal_scope__succeeded)
                          {
                            check_hlds__simplify__simplify_goal_scope__ForcePruning1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason1_9, (MR_Integer) 1)));
                            check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__ForcePruning0_18 == (MR_Integer) 1);
                            if (check_hlds__simplify__simplify_goal_scope__succeeded)
                              check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__ForcePruning1_19 == (MR_Integer) 1);
                            if (check_hlds__simplify__simplify_goal_scope__succeeded)
                              check_hlds__simplify__simplify_goal_scope__ForcePruning2_20 = (MR_Integer) 1;
                            else
                              check_hlds__simplify__simplify_goal_scope__ForcePruning2_20 = (MR_Integer) 0;
                            {
                              check_hlds__simplify__simplify_goal_scope__Reason2_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason2_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason2_14, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ForcePruning2_20));
                            }
                            check_hlds__simplify__simplify_goal_scope__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__simplify__simplify_goal_scope__next_value_of_Reason0_5 = check_hlds__simplify__simplify_goal_scope__Reason2_14;
              MR_Word check_hlds__simplify__simplify_goal_scope__next_value_of_Goal0_7 = check_hlds__simplify__simplify_goal_scope__Goal1_10;

              check_hlds__simplify__simplify_goal_scope__Goal0_7 = check_hlds__simplify__simplify_goal_scope__next_value_of_Goal0_7;
              check_hlds__simplify__simplify_goal_scope__Reason0_5 = check_hlds__simplify__simplify_goal_scope__next_value_of_Reason0_5;
            }
            continue;
          }
        else
          {
            *check_hlds__simplify__simplify_goal_scope__Reason_6 = check_hlds__simplify__simplify_goal_scope__Reason0_5;
            *check_hlds__simplify__simplify_goal_scope__Goal_8 = check_hlds__simplify__simplify_goal_scope__Goal0_7;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__TraceExpr_4,
  MR_Word check_hlds__simplify__simplify_goal_scope__Info_5)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_scope__Result_6;

    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__TraceExpr_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__simplify__simplify_goal_scope__BaseExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__simplify_goal_scope__ModuleInfo_18;
          MR_Word check_hlds__simplify__simplify_goal_scope__Globals_19;

          {
            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_scope__Info_5, &check_hlds__simplify__simplify_goal_scope__ModuleInfo_18);
          }
          {
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo_18, &check_hlds__simplify__simplify_goal_scope__Globals_19);
          }
          switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__BaseExpr_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String check_hlds__simplify__simplify_goal_scope__FlagName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__BaseExpr_7, (MR_Integer) 0)));
                MR_Word check_hlds__simplify__simplify_goal_scope__Flags_21;

                {
                  libs__globals__lookup_accumulating_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 138, &check_hlds__simplify__simplify_goal_scope__Flags_21);
                }
                {
                  check_hlds__simplify__simplify_goal_scope__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__FlagName_20)), check_hlds__simplify__simplify_goal_scope__Flags_21);
                }
                if (check_hlds__simplify__simplify_goal_scope__succeeded)
                  check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
                else
                  check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__simplify__simplify_goal_scope__Grade_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__BaseExpr_7, (MR_Integer) 0)));

                switch (check_hlds__simplify__simplify_goal_scope__Grade_22) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 9:
                    {
                      MR_Word check_hlds__simplify__simplify_goal_scope__Target_27;

                      {
                        libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__Target_27);
                      }
                      check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Target_27 == (MR_Integer) 0);
                      if (check_hlds__simplify__simplify_goal_scope__succeeded)
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
                      else
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 10:
                    {
                      MR_Word check_hlds__simplify__simplify_goal_scope__Target_49;

                      {
                        libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__Target_49);
                      }
                      check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Target_49 == (MR_Integer) 1);
                      if (check_hlds__simplify__simplify_goal_scope__succeeded)
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
                      else
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 195, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
                    }
                    break;
                  case (MR_Integer) 12:
                    {
                      MR_Word check_hlds__simplify__simplify_goal_scope__Target_51;

                      {
                        libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__Target_51);
                      }
                      check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Target_51 == (MR_Integer) 3);
                      if (check_hlds__simplify__simplify_goal_scope__succeeded)
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
                      else
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 11:
                    {
                      MR_Word check_hlds__simplify__simplify_goal_scope__Target_50;

                      {
                        libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__Target_50);
                      }
                      check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Target_50 == (MR_Integer) 2);
                      if (check_hlds__simplify__simplify_goal_scope__succeeded)
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 1;
                      else
                        check_hlds__simplify__simplify_goal_scope__Result_6 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word check_hlds__simplify__simplify_goal_scope__NotResult_26;

                      {
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 262, &check_hlds__simplify__simplify_goal_scope__NotResult_26);
                      }
                      {
                        mercury__bool__not_2_p_0(check_hlds__simplify__simplify_goal_scope__NotResult_26, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      {
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 262, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      {
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 225, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word check_hlds__simplify__simplify_goal_scope__ProfCalls_23;
                      MR_Word check_hlds__simplify__simplify_goal_scope__ProfTime_24;
                      MR_Word check_hlds__simplify__simplify_goal_scope__ProfMem_25;
                      MR_Word check_hlds__simplify__simplify_goal_scope__Var_42;
                      MR_Word check_hlds__simplify__simplify_goal_scope__Var_43;
                      MR_Word check_hlds__simplify__simplify_goal_scope__Var_44;

                      {
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 201, &check_hlds__simplify__simplify_goal_scope__ProfCalls_23);
                      }
                      {
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 202, &check_hlds__simplify__simplify_goal_scope__ProfTime_24);
                      }
                      {
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 203, &check_hlds__simplify__simplify_goal_scope__ProfMem_25);
                      }
                      {
                        check_hlds__simplify__simplify_goal_scope__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Var_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ProfMem_25));
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        check_hlds__simplify__simplify_goal_scope__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Var_43, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ProfTime_24));
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Var_43, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Var_44));
                      }
                      {
                        check_hlds__simplify__simplify_goal_scope__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Var_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ProfCalls_23));
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Var_42, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Var_43));
                      }
                      {
                        mercury__bool__or_list_2_p_0(check_hlds__simplify__simplify_goal_scope__Var_42, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      {
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 204, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      {
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 238, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 242, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      {
                        libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, (MR_Integer) 227, &check_hlds__simplify__simplify_goal_scope__Result_6);
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__simplify__simplify_goal_scope__Level_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_scope__BaseExpr_7, (MR_Integer) 0)));
                MR_Word check_hlds__simplify__simplify_goal_scope__TraceLevel_29;
                MR_Word check_hlds__simplify__simplify_goal_scope__PredInfo_30;
                MR_Word check_hlds__simplify__simplify_goal_scope__ProcInfo_31;
                MR_Word check_hlds__simplify__simplify_goal_scope__EffTraceLevel_32;

                {
                  libs__globals__get_trace_level_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_19, &check_hlds__simplify__simplify_goal_scope__TraceLevel_29);
                }
                {
                  check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_info_3_p_0(check_hlds__simplify__simplify_goal_scope__Info_5, &check_hlds__simplify__simplify_goal_scope__PredInfo_30, &check_hlds__simplify__simplify_goal_scope__ProcInfo_31);
                }
                {
                  check_hlds__simplify__simplify_goal_scope__EffTraceLevel_32 = libs__trace_params__eff_trace_level_4_f_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo_18, check_hlds__simplify__simplify_goal_scope__PredInfo_30, check_hlds__simplify__simplify_goal_scope__ProcInfo_31, check_hlds__simplify__simplify_goal_scope__TraceLevel_29);
                }
                switch (check_hlds__simplify__simplify_goal_scope__Level_28) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      check_hlds__simplify__simplify_goal_scope__Result_6 = libs__trace_params__at_least_at_deep_1_f_0(check_hlds__simplify__simplify_goal_scope__EffTraceLevel_32);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      check_hlds__simplify__simplify_goal_scope__Result_6 = libs__trace_params__at_least_at_shallow_1_f_0(check_hlds__simplify__simplify_goal_scope__EffTraceLevel_32);
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__simplify_goal_scope__ExprA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__simplify_goal_scope__ResultA_9;

          {
            check_hlds__simplify__simplify_goal_scope__ResultA_9 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(check_hlds__simplify__simplify_goal_scope__ExprA_8, check_hlds__simplify__simplify_goal_scope__Info_5);
          }
          {
            check_hlds__simplify__simplify_goal_scope__Result_6 = mercury__bool__not_1_f_0(check_hlds__simplify__simplify_goal_scope__ResultA_9);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__simplify__simplify_goal_scope__Op_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__simplify_goal_scope__ExprB_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 2)));
          MR_Word check_hlds__simplify__simplify_goal_scope__ResultB_12;
          MR_Word check_hlds__simplify__simplify_goal_scope__ExprA_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_scope__TraceExpr_4, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__simplify_goal_scope__ResultA_14;

          {
            check_hlds__simplify__simplify_goal_scope__ResultA_14 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(check_hlds__simplify__simplify_goal_scope__ExprA_13, check_hlds__simplify__simplify_goal_scope__Info_5);
          }
          {
            check_hlds__simplify__simplify_goal_scope__ResultB_12 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(check_hlds__simplify__simplify_goal_scope__ExprB_11, check_hlds__simplify__simplify_goal_scope__Info_5);
          }
          switch (check_hlds__simplify__simplify_goal_scope__Op_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                check_hlds__simplify__simplify_goal_scope__Result_6 = mercury__bool__and_2_f_0(check_hlds__simplify__simplify_goal_scope__ResultA_14, check_hlds__simplify__simplify_goal_scope__ResultB_12);
              }
              break;
            case (MR_Integer) 0:
              {
                check_hlds__simplify__simplify_goal_scope__Result_6 = mercury__bool__or_2_f_0(check_hlds__simplify__simplify_goal_scope__ResultA_14, check_hlds__simplify__simplify_goal_scope__ResultB_12);
              }
              break;
          }
        }
        break;
    }
    return check_hlds__simplify__simplify_goal_scope__Result_6;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_goal_trace_goal_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_8,
  MR_Word check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_9,
  MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal_10,
  MR_Word check_hlds__simplify__simplify_goal_scope__Goal0_11,
  MR_Word * check_hlds__simplify__simplify_goal_scope__Goal_12,
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_33,
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_34)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_scope__KeepGoal_15;

    if ((check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__simplify__simplify_goal_scope__KeepGoal_15 = (MR_Integer) 1;
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_scope__CompiletimeExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_8, (MR_Integer) 0)));

        {
          check_hlds__simplify__simplify_goal_scope__KeepGoal_15 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(check_hlds__simplify__simplify_goal_scope__CompiletimeExpr_14, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_33);
        }
      }
    switch (check_hlds__simplify__simplify_goal_scope__KeepGoal_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__simplify__simplify_goal_scope__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_11, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__simplify_goal_scope__Context_18;
          MR_Word check_hlds__simplify__simplify_goal_scope__DeletedCallCallees0_19;
          MR_Word check_hlds__simplify__simplify_goal_scope__SubGoalCalledProcs_20;
          MR_Word check_hlds__simplify__simplify_goal_scope__DeletedCallCallees_21;
          MR_Word check_hlds__simplify__simplify_goal_scope___GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_11, (MR_Integer) 0)));

          {
            check_hlds__simplify__simplify_goal_scope__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo0_17);
          }
          {
            *check_hlds__simplify__simplify_goal_scope__Goal_12 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_scope__Context_18);
          }
          {
            check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_33, &check_hlds__simplify__simplify_goal_scope__DeletedCallCallees0_19);
          }
          {
            check_hlds__simplify__simplify_goal_scope__SubGoalCalledProcs_20 = hlds__goal_util__goal_proc_refs_1_f_0(check_hlds__simplify__simplify_goal_scope__SubGoal_10);
          }
          {
            mercury__set__union_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, check_hlds__simplify__simplify_goal_scope__SubGoalCalledProcs_20, check_hlds__simplify__simplify_goal_scope__DeletedCallCallees0_19, &check_hlds__simplify__simplify_goal_scope__DeletedCallCallees_21);
          }
          {
            check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(check_hlds__simplify__simplify_goal_scope__DeletedCallCallees_21, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_33, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_34);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          if ((check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *check_hlds__simplify__simplify_goal_scope__Goal_12 = check_hlds__simplify__simplify_goal_scope__Goal0_11;
          else
            {
              MR_Word check_hlds__simplify__simplify_goal_scope__ModuleInfo_23;
              MR_Word check_hlds__simplify__simplify_goal_scope__Globals_24;
              MR_Word check_hlds__simplify__simplify_goal_scope__Target_25;
              MR_Word check_hlds__simplify__simplify_goal_scope__PrivateBuiltin_26;
              MR_Word check_hlds__simplify__simplify_goal_scope__EvalAttributes_28;
              MR_Word check_hlds__simplify__simplify_goal_scope__CondGoal_31;
              MR_Word check_hlds__simplify__simplify_goal_scope__GoalExpr_32;
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41;
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_44_44;
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_46_46;
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_48_48;
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_50_50;
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_52_52;
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_54_54;
              MR_Word check_hlds__simplify__simplify_goal_scope__Var_64;
              MR_Word check_hlds__simplify__simplify_goal_scope__Var_66;
              MR_Word check_hlds__simplify__simplify_goal_scope__GoalInfo0_70;
              MR_Word check_hlds__simplify__simplify_goal_scope__Context_71;
              MR_Word check_hlds__simplify__simplify_goal_scope___GoalExpr0_68;

              {
                check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_33, &check_hlds__simplify__simplify_goal_scope__ModuleInfo_23);
              }
              {
                hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo_23, &check_hlds__simplify__simplify_goal_scope__Globals_24);
              }
              {
                libs__globals__get_target_2_p_0(check_hlds__simplify__simplify_goal_scope__Globals_24, &check_hlds__simplify__simplify_goal_scope__Target_25);
              }
              {
                check_hlds__simplify__simplify_goal_scope__PrivateBuiltin_26 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              }
              switch (check_hlds__simplify__simplify_goal_scope__Target_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 1);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 3);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 2);
                    }
                  }
                  break;
              }
              {
                parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_41_41, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_44_44);
              }
              {
                parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_44_44, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_46_46);
              }
              {
                parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_46_46, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_48_48);
              }
              {
                parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_48_48, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_50_50);
              }
              {
                parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_50_50, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_52_52);
              }
              {
                parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_52_52, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_54_54);
              }
              {
                parse_tree__prog_data_foreign__set_may_call_mm_tabled_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_EvalAttributes_54_54, &check_hlds__simplify__simplify_goal_scope__EvalAttributes_28);
              }
              check_hlds__simplify__simplify_goal_scope___GoalExpr0_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_11, (MR_Integer) 0)));
              check_hlds__simplify__simplify_goal_scope__GoalInfo0_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal0_11, (MR_Integer) 1)));
              {
                check_hlds__simplify__simplify_goal_scope__Context_71 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo0_70);
              }
              {
                check_hlds__simplify__simplify_goal_scope__Var_64 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
              }
              {
                hlds__goal_util__generate_foreign_proc_16_p_0(check_hlds__simplify__simplify_goal_scope__PrivateBuiltin_26, (MR_String) "trace_evaluate_runtime_condition", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 1, check_hlds__simplify__simplify_goal_scope__EvalAttributes_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_9, (MR_String) "", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_scope__Var_64, check_hlds__simplify__simplify_goal_scope__ModuleInfo_23, check_hlds__simplify__simplify_goal_scope__Context_71, &check_hlds__simplify__simplify_goal_scope__CondGoal_31);
              }
              {
                check_hlds__simplify__simplify_goal_scope__Var_66 = hlds__make_goal__true_goal_0_f_0();
              }
              {
                check_hlds__simplify__simplify_goal_scope__GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_32, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__CondGoal_31));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_32, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__SubGoal_10));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr_32, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Var_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *check_hlds__simplify__simplify_goal_scope__Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__GoalExpr_32));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__GoalInfo0_70));
              }
            }
          *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_34 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_33;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_2(
  MR_Box check_hlds__simplify__simplify_goal_scope__closure_arg)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
    MR_Box check_hlds__simplify__simplify_goal_scope__closure = check_hlds__simplify__simplify_goal_scope__closure_arg;

    {
      check_hlds__simplify__simplify_goal_scope__succeeded = check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__279__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__closure, (MR_Integer) 4))));
    }
    return check_hlds__simplify__simplify_goal_scope__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_scope__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_goal_scope__wrapper_arg_3,
  MR_Box * check_hlds__simplify__simplify_goal_scope__wrapper_arg_4)
{
  {
    MR_Box check_hlds__simplify__simplify_goal_scope__closure = check_hlds__simplify__simplify_goal_scope__closure_arg;
    MR_Word check_hlds__simplify__simplify_goal_scope__conv1_HeadVar__2_68;
    MR_Word check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__4_70;

    {
      check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__269__1_4_p_0(((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_1), &check_hlds__simplify__simplify_goal_scope__conv1_HeadVar__2_68, ((MR_Word) check_hlds__simplify__simplify_goal_scope__wrapper_arg_3), &check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__4_70);
    }
    *check_hlds__simplify__simplify_goal_scope__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__conv1_HeadVar__2_68));
    *check_hlds__simplify__simplify_goal_scope__wrapper_arg_4 = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__conv0_HeadVar__4_70));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_11,
  MR_Word check_hlds__simplify__simplify_goal_scope__VarTypes_12,
  MR_Word check_hlds__simplify__simplify_goal_scope__Conjunct_13,
  MR_Word check_hlds__simplify__simplify_goal_scope__Conjuncts_14,
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46,
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_47,
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48,
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_49,
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50,
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_51)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
        MR_Word check_hlds__simplify__simplify_goal_scope__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Conjunct_13, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__simplify_goal_scope__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Conjunct_13, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_goal_scope__LHSVar_32;
        MR_Word check_hlds__simplify__simplify_goal_scope__ConsId_33;
        MR_Word check_hlds__simplify__simplify_goal_scope__RHSVars_34;
        MR_Word check_hlds__simplify__simplify_goal_scope__TermType_35;
        MR_Word check_hlds__simplify__simplify_goal_scope__Arg_36;
        MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_56_56;
        MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57;
        MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_58_58;
        MR_Word check_hlds__simplify__simplify_goal_scope__LHSVarPrime_25;
        MR_Word check_hlds__simplify__simplify_goal_scope__ConsIdPrime_26;
        MR_Word check_hlds__simplify__simplify_goal_scope__RHSVarsPrime_27;
        MR_Word check_hlds__simplify__simplify_goal_scope__Unify_23;
        MR_Word check_hlds__simplify__simplify_goal_scope__Var_20;
        MR_Word check_hlds__simplify__simplify_goal_scope__Var_21;
        MR_Word check_hlds__simplify__simplify_goal_scope__Var_22;
        MR_Word check_hlds__simplify__simplify_goal_scope__Var_24;
        MR_Word check_hlds__simplify__simplify_goal_scope__Var_28;
        MR_Word check_hlds__simplify__simplify_goal_scope__Var_29;
        MR_Word check_hlds__simplify__simplify_goal_scope__Var_30;
        MR_Word check_hlds__simplify__simplify_goal_scope__Var_31;

        check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__GoalExpr_18)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
          {
            check_hlds__simplify__simplify_goal_scope__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal_scope__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 1)));
            check_hlds__simplify__simplify_goal_scope__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 2)));
            check_hlds__simplify__simplify_goal_scope__Unify_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 3)));
            check_hlds__simplify__simplify_goal_scope__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__GoalExpr_18, (MR_Integer) 4)));
            check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Unify_23)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__simplify__simplify_goal_scope__succeeded)
              {
                check_hlds__simplify__simplify_goal_scope__LHSVarPrime_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_scope__ConsIdPrime_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_scope__RHSVarsPrime_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 2)));
                check_hlds__simplify__simplify_goal_scope__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 3)));
                check_hlds__simplify__simplify_goal_scope__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 4)));
                check_hlds__simplify__simplify_goal_scope__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 5)));
                check_hlds__simplify__simplify_goal_scope__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unify_23, (MR_Integer) 6)));
              }
          }
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
          {
            check_hlds__simplify__simplify_goal_scope__LHSVar_32 = check_hlds__simplify__simplify_goal_scope__LHSVarPrime_25;
            check_hlds__simplify__simplify_goal_scope__ConsId_33 = check_hlds__simplify__simplify_goal_scope__ConsIdPrime_26;
            check_hlds__simplify__simplify_goal_scope__RHSVars_34 = check_hlds__simplify__simplify_goal_scope__RHSVarsPrime_27;
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_scope", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_construct_ground_terms\'/10", (MR_String) "not construction unification");
              return;
            }
          }
        {
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_scope__VarTypes_12, check_hlds__simplify__simplify_goal_scope__LHSVar_32, &check_hlds__simplify__simplify_goal_scope__TermType_35);
        }
        if ((check_hlds__simplify__simplify_goal_scope__RHSVars_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              check_hlds__simplify__simplify_goal_scope__Arg_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Arg_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConsId_33));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Arg_36, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermType_35));
            }
            check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_56_56 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48;
            check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50;
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_scope__RHSArgs_39;
            MR_Word check_hlds__simplify__simplify_goal_scope__InstMapDelta_40;
            MR_Word check_hlds__simplify__simplify_goal_scope__TermInst_41;
            MR_Word check_hlds__simplify__simplify_goal_scope__ConstStruct_42;
            MR_Integer check_hlds__simplify__simplify_goal_scope__ConstNum_43;
            MR_Box check_hlds__simplify__simplify_goal_scope__conv2_STATE_VARIABLE_VarArgMap_56_56;

            {
              mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, (MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_2[0], (MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_2[1], check_hlds__simplify__simplify_goal_scope__RHSVars_34, &check_hlds__simplify__simplify_goal_scope__RHSArgs_39, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48)), &check_hlds__simplify__simplify_goal_scope__conv2_STATE_VARIABLE_VarArgMap_56_56);
            }
            check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_56_56 = ((MR_Word) check_hlds__simplify__simplify_goal_scope__conv2_STATE_VARIABLE_VarArgMap_56_56);
            {
              check_hlds__simplify__simplify_goal_scope__InstMapDelta_40 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo_19);
            }
            {
              hlds__instmap__instmap_delta_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_scope__InstMapDelta_40, check_hlds__simplify__simplify_goal_scope__LHSVar_32, &check_hlds__simplify__simplify_goal_scope__TermInst_41);
            }
            {
              check_hlds__simplify__simplify_goal_scope__ConstStruct_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__ConstStruct_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConsId_33));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__ConstStruct_42, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__RHSArgs_39));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__ConstStruct_42, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermType_35));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__ConstStruct_42, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermInst_41));
            }
            {
              hlds__const_struct__lookup_insert_const_struct_4_p_0(check_hlds__simplify__simplify_goal_scope__ConstStruct_42, &check_hlds__simplify__simplify_goal_scope__ConstNum_43, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57);
            }
            {
              check_hlds__simplify__simplify_goal_scope__Arg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Arg_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConstNum_43));
            }
          }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0], (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__LHSVar_32)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Arg_36)), check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_56_56, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_58_58);
        }
        if ((check_hlds__simplify__simplify_goal_scope__Conjuncts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__simplify__simplify_goal_scope__Var_63;

            {
              check_hlds__simplify__simplify_goal_scope__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Var_63, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_scope_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Var_63, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0_2));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Var_63, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_11));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Var_63, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__LHSVar_32));
            }
            {
              mercury__require__expect_4_p_0(check_hlds__simplify__simplify_goal_scope__Var_63, (MR_String) "check_hlds.simplify.simplify_goal_scope", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_construct_ground_terms\'/10", (MR_String) "last var is not TermVar");
            }
            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_47 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46;
            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_49 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_58_58;
            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_51 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57;
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_scope__HeadConjunct_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Conjuncts_14, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_scope__TailConjuncts_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Conjuncts_14, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59;

            {
              check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__LHSVar_32));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46));
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__simplify__simplify_goal_scope__next_value_of_Conjunct_13 = check_hlds__simplify__simplify_goal_scope__HeadConjunct_44;
              MR_Word check_hlds__simplify__simplify_goal_scope__next_value_of_Conjuncts_14 = check_hlds__simplify__simplify_goal_scope__TailConjuncts_45;
              MR_Word check_hlds__simplify__simplify_goal_scope__next_value_of_STATE_VARIABLE_ElimVars_0_46 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_59_59;
              MR_Word check_hlds__simplify__simplify_goal_scope__next_value_of_STATE_VARIABLE_VarArgMap_0_48 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_58_58;
              MR_Word check_hlds__simplify__simplify_goal_scope__next_value_of_STATE_VARIABLE_ConstStructDb_0_50 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_57_57;

              check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ConstStructDb_0_50 = check_hlds__simplify__simplify_goal_scope__next_value_of_STATE_VARIABLE_ConstStructDb_0_50;
              check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_VarArgMap_0_48 = check_hlds__simplify__simplify_goal_scope__next_value_of_STATE_VARIABLE_VarArgMap_0_48;
              check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_ElimVars_0_46 = check_hlds__simplify__simplify_goal_scope__next_value_of_STATE_VARIABLE_ElimVars_0_46;
              check_hlds__simplify__simplify_goal_scope__Conjuncts_14 = check_hlds__simplify__simplify_goal_scope__next_value_of_Conjuncts_14;
              check_hlds__simplify__simplify_goal_scope__Conjunct_13 = check_hlds__simplify__simplify_goal_scope__next_value_of_Conjunct_13;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_scope__try_to_merge_nested_scopes_4_p_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__Reason0_5,
  MR_Word check_hlds__simplify__simplify_goal_scope__InnerGoal0_6,
  MR_Word check_hlds__simplify__simplify_goal_scope__OuterGoalInfo_7,
  MR_Word * check_hlds__simplify__simplify_goal_scope__Goal_8)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_scope__Reason_9;
    MR_Word check_hlds__simplify__simplify_goal_scope__InnerGoal_10;
    MR_Word check_hlds__simplify__simplify_goal_scope__GoalInfo_12;
    MR_Word check_hlds__simplify__simplify_goal_scope__Var_11;
    MR_Word check_hlds__simplify__simplify_goal_scope__Detism_14;
    MR_Word check_hlds__simplify__simplify_goal_scope__OuterDetism_15;
    MR_Word check_hlds__simplify__simplify_goal_scope__Var_13;

    {
      check_hlds__simplify__simplify_goal_scope__loop_over_any_nested_scopes_4_p_0(check_hlds__simplify__simplify_goal_scope__Reason0_5, &check_hlds__simplify__simplify_goal_scope__Reason_9, check_hlds__simplify__simplify_goal_scope__InnerGoal0_6, &check_hlds__simplify__simplify_goal_scope__InnerGoal_10);
    }
    check_hlds__simplify__simplify_goal_scope__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__InnerGoal_10, (MR_Integer) 0)));
    check_hlds__simplify__simplify_goal_scope__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__InnerGoal_10, (MR_Integer) 1)));
    check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason_9)) == (MR_mktag((MR_Integer) 0)));
    if (check_hlds__simplify__simplify_goal_scope__succeeded)
      {
        check_hlds__simplify__simplify_goal_scope__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Reason_9, (MR_Integer) 0)));
        {
          check_hlds__simplify__simplify_goal_scope__Detism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo_12);
        }
        {
          check_hlds__simplify__simplify_goal_scope__OuterDetism_15 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_scope__OuterGoalInfo_7);
        }
        check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Detism_14 == check_hlds__simplify__simplify_goal_scope__OuterDetism_15);
      }
    if (check_hlds__simplify__simplify_goal_scope__succeeded)
      *check_hlds__simplify__simplify_goal_scope__Goal_8 = check_hlds__simplify__simplify_goal_scope__InnerGoal_10;
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_scope__Var_16;

        {
          check_hlds__simplify__simplify_goal_scope__Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Var_16, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Reason_9));
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Var_16, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__InnerGoal_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__simplify__simplify_goal_scope__Goal_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Var_16));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__OuterGoalInfo_7));
        }
      }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_goal_scope_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_scope__GoalExpr0_11,
  MR_Word * check_hlds__simplify__simplify_goal_scope__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_scope__GoalInfo0_13,
  MR_Word * check_hlds__simplify__simplify_goal_scope__GoalInfo_14,
  MR_Word check_hlds__simplify__simplify_goal_scope__NestedContext0_15,
  MR_Word check_hlds__simplify__simplify_goal_scope__InstMap0_16,
  MR_Word check_hlds__simplify__simplify_goal_scope__Common0_17,
  MR_Word * check_hlds__simplify__simplify_goal_scope__Common_18,
  MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_83,
  MR_Word * check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_scope__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_scope__Reason0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr0_11, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr0_11, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_goal_scope__TermVar_22;
    MR_Word check_hlds__simplify__simplify_goal_scope__Var_85;

    check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Reason0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (check_hlds__simplify__simplify_goal_scope__succeeded)
      {
        check_hlds__simplify__simplify_goal_scope__TermVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_20, (MR_Integer) 1)));
        check_hlds__simplify__simplify_goal_scope__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__Reason0_20, (MR_Integer) 2)));
        check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Var_85 == (MR_Integer) 1);
      }
    if (check_hlds__simplify__simplify_goal_scope__succeeded)
      {
        MR_Word check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23;
        MR_Word check_hlds__simplify__simplify_goal_scope__ConstStructDb0_24;
        MR_Word check_hlds__simplify__simplify_goal_scope__ConstStructEnabled_25;

        {
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_83, &check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23);
        }
        {
          hlds__hlds_module__module_info_get_const_struct_db_2_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23, &check_hlds__simplify__simplify_goal_scope__ConstStructDb0_24);
        }
        {
          hlds__const_struct__const_struct_db_get_ground_term_enabled_2_p_0(check_hlds__simplify__simplify_goal_scope__ConstStructDb0_24, &check_hlds__simplify__simplify_goal_scope__ConstStructEnabled_25);
        }
        switch (check_hlds__simplify__simplify_goal_scope__ConstStructEnabled_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__simplify__simplify_goal_scope__Globals_26;
              MR_Word check_hlds__simplify__simplify_goal_scope__CommonStruct_27;

              {
                hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23, &check_hlds__simplify__simplify_goal_scope__Globals_26);
              }
              {
                libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_scope__Globals_26, (MR_Integer) 352, &check_hlds__simplify__simplify_goal_scope__CommonStruct_27);
              }
              switch (check_hlds__simplify__simplify_goal_scope__CommonStruct_27) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal_28;
                    MR_Word check_hlds__simplify__simplify_goal_scope__NewReason_29;

                    {
                      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_scope__SubGoal0_21, &check_hlds__simplify__simplify_goal_scope__SubGoal_28, check_hlds__simplify__simplify_goal_scope__NestedContext0_15, check_hlds__simplify__simplify_goal_scope__InstMap0_16, check_hlds__simplify__simplify_goal_scope__Common0_17, check_hlds__simplify__simplify_goal_scope__Common_18, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_83, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84);
                    }
                    {
                      check_hlds__simplify__simplify_goal_scope__NewReason_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__NewReason_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__NewReason_29, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_22));
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__NewReason_29, 2) = ((MR_Box) ((MR_Integer) 3));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__simplify__simplify_goal_scope__GoalExpr_12 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__NewReason_29));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__SubGoal_28));
                    }
                    *check_hlds__simplify__simplify_goal_scope__GoalInfo_14 = check_hlds__simplify__simplify_goal_scope__GoalInfo0_13;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *check_hlds__simplify__simplify_goal_scope__GoalExpr_12 = check_hlds__simplify__simplify_goal_scope__GoalExpr0_11;
                    *check_hlds__simplify__simplify_goal_scope__GoalInfo_14 = check_hlds__simplify__simplify_goal_scope__GoalInfo0_13;
                    *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
                    *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_83;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__simplify__simplify_goal_scope__TypeInfo_123_123;
              MR_Word check_hlds__simplify__simplify_goal_scope__TypeCtorInfo_124_124;
              MR_Word check_hlds__simplify__simplify_goal_scope__HeadConjunct_35;
              MR_Word check_hlds__simplify__simplify_goal_scope__TailConjuncts_36;
              MR_Word check_hlds__simplify__simplify_goal_scope__VarTypes_37;
              MR_Word check_hlds__simplify__simplify_goal_scope__ElimVars_38;
              MR_Word check_hlds__simplify__simplify_goal_scope__VarArgMap_39;
              MR_Word check_hlds__simplify__simplify_goal_scope__ConstStructDb_40;
              MR_Word check_hlds__simplify__simplify_goal_scope__ModuleInfo_41;
              MR_Word check_hlds__simplify__simplify_goal_scope__VarArgs_42;
              MR_Integer check_hlds__simplify__simplify_goal_scope__TermConstNum_45;
              MR_Word check_hlds__simplify__simplify_goal_scope__TermConstStruct_46;
              MR_Word check_hlds__simplify__simplify_goal_scope__TermConsId_47;
              MR_Word check_hlds__simplify__simplify_goal_scope__ConsId_48;
              MR_Word check_hlds__simplify__simplify_goal_scope__RHS_49;
              MR_Word check_hlds__simplify__simplify_goal_scope__Unification_50;
              MR_Word check_hlds__simplify__simplify_goal_scope__InstMapDelta_51;
              MR_Word check_hlds__simplify__simplify_goal_scope__TermInst_52;
              MR_Word check_hlds__simplify__simplify_goal_scope__UnifyMode_53;
              MR_Word check_hlds__simplify__simplify_goal_scope__Var_91;
              MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_92_92;
              MR_Word check_hlds__simplify__simplify_goal_scope__Var_106;
              MR_Word check_hlds__simplify__simplify_goal_scope__Var_108;
              MR_Word check_hlds__simplify__simplify_goal_scope__HeadConjunctPrime_33;
              MR_Word check_hlds__simplify__simplify_goal_scope__TailConjunctsPrime_34;
              MR_Word check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__SubGoal0_21, (MR_Integer) 0)));
              MR_Word check_hlds__simplify__simplify_goal_scope__Conjuncts_32;
              MR_Word check_hlds__simplify__simplify_goal_scope__Var_86;
              MR_Word check_hlds__simplify__simplify_goal_scope__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__SubGoal0_21, (MR_Integer) 1)));
              MR_Integer check_hlds__simplify__simplify_goal_scope__TermConstNumPrime_44;
              MR_Word check_hlds__simplify__simplify_goal_scope__TypeInfo_127_127;
              MR_Word check_hlds__simplify__simplify_goal_scope__TermArg_43;
              MR_Word check_hlds__simplify__simplify_goal_scope__Var_94;
              MR_Word check_hlds__simplify__simplify_goal_scope__Var_95;
              MR_Word check_hlds__simplify__simplify_goal_scope__Var_125;
              MR_Word check_hlds__simplify__simplify_goal_scope__Var_120;
              MR_Word check_hlds__simplify__simplify_goal_scope__Var_121;
              MR_Word check_hlds__simplify__simplify_goal_scope__Var_122;

              check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (check_hlds__simplify__simplify_goal_scope__succeeded)
                {
                  check_hlds__simplify__simplify_goal_scope__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30, (MR_Integer) 1)));
                  check_hlds__simplify__simplify_goal_scope__Conjuncts_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__SubGoalExpr_30, (MR_Integer) 2)));
                  check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Var_86 == (MR_Integer) 0);
                  if (check_hlds__simplify__simplify_goal_scope__succeeded)
                    {
                      check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__Conjuncts_32)) == (MR_mktag((MR_Integer) 1)));
                      if (check_hlds__simplify__simplify_goal_scope__succeeded)
                        {
                          check_hlds__simplify__simplify_goal_scope__HeadConjunctPrime_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Conjuncts_32, (MR_Integer) 0)));
                          check_hlds__simplify__simplify_goal_scope__TailConjunctsPrime_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__Conjuncts_32, (MR_Integer) 1)));
                        }
                    }
                }
              if (check_hlds__simplify__simplify_goal_scope__succeeded)
                {
                  check_hlds__simplify__simplify_goal_scope__HeadConjunct_35 = check_hlds__simplify__simplify_goal_scope__HeadConjunctPrime_33;
                  check_hlds__simplify__simplify_goal_scope__TailConjuncts_36 = check_hlds__simplify__simplify_goal_scope__TailConjunctsPrime_34;
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_scope", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_goal_scope\'/10", (MR_String) "from_ground_term_construct scope is not conjunction");
                    return;
                  }
                }
              {
                check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_83, &check_hlds__simplify__simplify_goal_scope__VarTypes_37);
              }
              check_hlds__simplify__simplify_goal_scope__TypeInfo_123_123 = (MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0];
              check_hlds__simplify__simplify_goal_scope__TypeCtorInfo_124_124 = (MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0;
              {
                check_hlds__simplify__simplify_goal_scope__Var_91 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_goal_scope__TypeInfo_123_123, check_hlds__simplify__simplify_goal_scope__TypeCtorInfo_124_124);
              }
              {
                check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_10_p_0(check_hlds__simplify__simplify_goal_scope__TermVar_22, check_hlds__simplify__simplify_goal_scope__VarTypes_37, check_hlds__simplify__simplify_goal_scope__HeadConjunct_35, check_hlds__simplify__simplify_goal_scope__TailConjuncts_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_scope__ElimVars_38, check_hlds__simplify__simplify_goal_scope__Var_91, &check_hlds__simplify__simplify_goal_scope__VarArgMap_39, check_hlds__simplify__simplify_goal_scope__ConstStructDb0_24, &check_hlds__simplify__simplify_goal_scope__ConstStructDb_40);
              }
              {
                hlds__hlds_module__module_info_set_const_struct_db_3_p_0(check_hlds__simplify__simplify_goal_scope__ConstStructDb_40, check_hlds__simplify__simplify_goal_scope__ModuleInfo0_23, &check_hlds__simplify__simplify_goal_scope__ModuleInfo_41);
              }
              {
                check_hlds__simplify__simplify_info__simplify_info_add_elim_vars_3_p_0(check_hlds__simplify__simplify_goal_scope__ElimVars_38, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_83, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_92_92);
              }
              {
                check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_scope__ModuleInfo_41, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_92_92, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84);
              }
              {
                mercury__map__to_assoc_list_2_p_0(check_hlds__simplify__simplify_goal_scope__TypeInfo_123_123, check_hlds__simplify__simplify_goal_scope__TypeCtorInfo_124_124, check_hlds__simplify__simplify_goal_scope__VarArgMap_39, &check_hlds__simplify__simplify_goal_scope__VarArgs_42);
              }
              check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__VarArgs_42)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__simplify__simplify_goal_scope__succeeded)
                {
                  check_hlds__simplify__simplify_goal_scope__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__VarArgs_42, (MR_Integer) 0)));
                  check_hlds__simplify__simplify_goal_scope__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__VarArgs_42, (MR_Integer) 1)));
                  check_hlds__simplify__simplify_goal_scope__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Var_94, (MR_Integer) 0)));
                  check_hlds__simplify__simplify_goal_scope__TermArg_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Var_94, (MR_Integer) 1)));
                  check_hlds__simplify__simplify_goal_scope__TypeInfo_127_127 = (MR_Word) &check_hlds__simplify__simplify_goal_scope_scalar_common_1[0];
                  {
                    check_hlds__simplify__simplify_goal_scope__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_goal_scope__TypeInfo_127_127, ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_22)), ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Var_125)));
                  }
                  if (check_hlds__simplify__simplify_goal_scope__succeeded)
                    {
                      check_hlds__simplify__simplify_goal_scope__succeeded = (check_hlds__simplify__simplify_goal_scope__Var_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (check_hlds__simplify__simplify_goal_scope__succeeded)
                        {
                          check_hlds__simplify__simplify_goal_scope__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__TermArg_43)) == (MR_mktag((MR_Integer) 0)));
                          if (check_hlds__simplify__simplify_goal_scope__succeeded)
                            check_hlds__simplify__simplify_goal_scope__TermConstNumPrime_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermArg_43, (MR_Integer) 0)));
                        }
                    }
                }
              if (check_hlds__simplify__simplify_goal_scope__succeeded)
                check_hlds__simplify__simplify_goal_scope__TermConstNum_45 = check_hlds__simplify__simplify_goal_scope__TermConstNumPrime_44;
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_scope", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_goal_scope\'/10", (MR_String) "unexpected VarArgMap");
                    return;
                  }
                }
              {
                hlds__const_struct__lookup_const_struct_num_3_p_0(check_hlds__simplify__simplify_goal_scope__ConstStructDb_40, check_hlds__simplify__simplify_goal_scope__TermConstNum_45, &check_hlds__simplify__simplify_goal_scope__TermConstStruct_46);
              }
              check_hlds__simplify__simplify_goal_scope__TermConsId_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermConstStruct_46, (MR_Integer) 0)));
              check_hlds__simplify__simplify_goal_scope__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermConstStruct_46, (MR_Integer) 1)));
              check_hlds__simplify__simplify_goal_scope__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermConstStruct_46, (MR_Integer) 2)));
              check_hlds__simplify__simplify_goal_scope__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__TermConstStruct_46, (MR_Integer) 3)));
              {
                check_hlds__simplify__simplify_goal_scope__ConsId_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__ConsId_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__ConsId_48, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermConstNum_45));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__ConsId_48, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermConsId_47));
              }
              {
                check_hlds__simplify__simplify_goal_scope__RHS_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__RHS_49, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConsId_48));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__RHS_49, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_scope__RHS_49, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__simplify_goal_scope__Unification_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_22));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__ConsId_48));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 5) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Unification_50, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__simplify_goal_scope__InstMapDelta_51 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_scope__GoalInfo0_13);
              }
              {
                hlds__instmap__instmap_delta_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_scope__InstMapDelta_51, check_hlds__simplify__simplify_goal_scope__TermVar_22, &check_hlds__simplify__simplify_goal_scope__TermInst_52);
              }
              {
                check_hlds__simplify__simplify_goal_scope__Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Var_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Var_106, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermInst_52));
              }
              {
                check_hlds__simplify__simplify_goal_scope__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Var_108, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermInst_52));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Var_108, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermInst_52));
              }
              {
                check_hlds__simplify__simplify_goal_scope__UnifyMode_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__UnifyMode_53, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Var_106));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__UnifyMode_53, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Var_108));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__simplify__simplify_goal_scope__GoalExpr_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__TermVar_22));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__RHS_49));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__UnifyMode_53));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__Unification_50));
                MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_scope_scalar_common_1[1]));
              }
              *check_hlds__simplify__simplify_goal_scope__GoalInfo_14 = check_hlds__simplify__simplify_goal_scope__GoalInfo0_13;
              *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
            }
            break;
        }
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_scope__Common1_55;
        MR_Word check_hlds__simplify__simplify_goal_scope__Goal1_56;
        MR_Word check_hlds__simplify__simplify_goal_scope__GoalExpr1_57;
        MR_Word check_hlds__simplify__simplify_goal_scope__Goal_66;
        MR_Word check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115;
        MR_Word check_hlds__simplify__simplify_goal_scope__SubGoal_119;
        MR_Word check_hlds__simplify__simplify_goal_scope___GoalInfo1_58;
        MR_Word check_hlds__simplify__simplify_goal_scope__FinalReason_59;
        MR_Word check_hlds__simplify__simplify_goal_scope__FinalSubGoal_60;

        {
          check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_scope__SubGoal0_21, &check_hlds__simplify__simplify_goal_scope__SubGoal_119, check_hlds__simplify__simplify_goal_scope__NestedContext0_15, check_hlds__simplify__simplify_goal_scope__InstMap0_16, check_hlds__simplify__simplify_goal_scope__Common0_17, &check_hlds__simplify__simplify_goal_scope__Common1_55, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_0_83, &check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115);
        }
        {
          check_hlds__simplify__simplify_goal_scope__try_to_merge_nested_scopes_4_p_0(check_hlds__simplify__simplify_goal_scope__Reason0_20, check_hlds__simplify__simplify_goal_scope__SubGoal_119, check_hlds__simplify__simplify_goal_scope__GoalInfo0_13, &check_hlds__simplify__simplify_goal_scope__Goal1_56);
        }
        check_hlds__simplify__simplify_goal_scope__GoalExpr1_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal1_56, (MR_Integer) 0)));
        check_hlds__simplify__simplify_goal_scope___GoalInfo1_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal1_56, (MR_Integer) 1)));
        check_hlds__simplify__simplify_goal_scope__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__GoalExpr1_57)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr1_57, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (check_hlds__simplify__simplify_goal_scope__succeeded)
          {
            check_hlds__simplify__simplify_goal_scope__FinalReason_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr1_57, (MR_Integer) 1)));
            check_hlds__simplify__simplify_goal_scope__FinalSubGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__GoalExpr1_57, (MR_Integer) 2)));
            switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_scope__FinalReason_59)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  check_hlds__simplify__simplify_goal_scope__Goal_66 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
                  *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
                  *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115;
                }
                break;
              case (MR_Integer) 1:
                {
                  check_hlds__simplify__simplify_goal_scope__Goal_66 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
                  *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
                  *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115;
                }
                break;
              case (MR_Integer) 2:
                {
                  check_hlds__simplify__simplify_goal_scope__Goal_66 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
                  *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
                  *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      check_hlds__simplify__simplify_goal_scope__Goal_66 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
                      *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
                      *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    {
                      check_hlds__simplify__simplify_goal_scope__Goal_66 = check_hlds__simplify__simplify_goal_scope__FinalSubGoal_60;
                      *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
                      *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115;
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      check_hlds__simplify__simplify_goal_scope__Goal_66 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
                      *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
                      *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word check_hlds__simplify__simplify_goal_scope__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 1)));

                      switch (check_hlds__simplify__simplify_goal_scope__Var_126) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            check_hlds__simplify__simplify_goal_scope__Goal_66 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
                            *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
                            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115;
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            check_hlds__simplify__simplify_goal_scope__Goal_66 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
                            *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
                            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      check_hlds__simplify__simplify_goal_scope__Goal_66 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
                      *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
                      *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 1)));
                      MR_Word check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 2)));
                      MR_Word check_hlds__simplify__simplify_goal_scope__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 3)));
                      MR_Word check_hlds__simplify__simplify_goal_scope__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 4)));
                      MR_Word check_hlds__simplify__simplify_goal_scope__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_scope__FinalReason_59, (MR_Integer) 5)));

                      {
                        check_hlds__simplify__simplify_goal_scope__succeeded = check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115);
                      }
                      if (check_hlds__simplify__simplify_goal_scope__succeeded)
                        {
                          check_hlds__simplify__simplify_goal_scope__simplify_goal_trace_goal_7_p_0(check_hlds__simplify__simplify_goal_scope__MaybeCompiletimeExpr_78, check_hlds__simplify__simplify_goal_scope__MaybeRuntimeExpr_79, check_hlds__simplify__simplify_goal_scope__FinalSubGoal_60, check_hlds__simplify__simplify_goal_scope__Goal1_56, &check_hlds__simplify__simplify_goal_scope__Goal_66, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115, check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84);
                        }
                      else
                        {
                          check_hlds__simplify__simplify_goal_scope__Goal_66 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
                          *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115;
                        }
                      *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      check_hlds__simplify__simplify_goal_scope__Goal_66 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
                      *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common0_17;
                      *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115;
                    }
                    break;
                }
                break;
            }
          }
        else
          {
            check_hlds__simplify__simplify_goal_scope__Goal_66 = check_hlds__simplify__simplify_goal_scope__Goal1_56;
            *check_hlds__simplify__simplify_goal_scope__Common_18 = check_hlds__simplify__simplify_goal_scope__Common1_55;
            *check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_84 = check_hlds__simplify__simplify_goal_scope__STATE_VARIABLE_Info_115_115;
          }
        *check_hlds__simplify__simplify_goal_scope__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal_66, (MR_Integer) 0)));
        *check_hlds__simplify__simplify_goal_scope__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_scope__Goal_66, (MR_Integer) 1)));
      }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_goal_scope__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.simplify.simplify_goal_scope. */
