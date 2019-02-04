/*
** Automatically generated from `simplify_goal_conj.m'
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


/* :- module check_hlds.simplify.simplify_goal_conj. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__simplify_goal_conj__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_conj.mih"


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



struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s {
  MR_Word check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Goals_2;
  MR_bool check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__succeeded;
  jmp_buf check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__commit_0;
  MR_Word check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__GoalInfo_4;
  MR_Word check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Detism_5;
  MR_Word check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Var_7;
  MR_Word check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Var_8;
  MR_Word check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Var_10;
  MR_Box check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__conv0_Var_7;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001(
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_3);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__4_4,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__Info_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__ConjNonLocals_2,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_4,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_5,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_6,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_7);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__Subn_4,
  MR_Word check_hlds__simplify__simplify_goal_conj__Var0_5,
  MR_Word * check_hlds__simplify__simplify_goal_conj__Var_6);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__no_conjunct_refers_to_var_2_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__TestVar_2);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__all_cases_construct_test_var_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__TestVar_2,
  MR_Word check_hlds__simplify__simplify_goal_conj__TestConsId_3,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_0_4,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_5,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_0_6,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_7);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_conj_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
  MR_Word * check_hlds__simplify__simplify_goal_conj__Goals_3,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__4_4,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__6_6,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_1(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_3(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_2(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_4(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__Goals_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_conj__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_2);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_3[1][6];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__type_ctor_info_var_renaming_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_conj",
  (MR_String) "var_renaming",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001(
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

    {
      check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_2));
    }
    return check_hlds__simplify__simplify_goal_conj__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__simplify_goal_conj__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(&check_hlds__simplify__simplify_goal_conj__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_3));
    }
    *check_hlds__simplify__simplify_goal_conj__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_4 = check_hlds__simplify__simplify_goal_conj__HeadVar__2_2;
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_5 = check_hlds__simplify__simplify_goal_conj__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_2[0], check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_3 = check_hlds__simplify__simplify_goal_conj__HeadVar__1_1;
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_4 = check_hlds__simplify__simplify_goal_conj__HeadVar__2_2;

    {
      check_hlds__simplify__simplify_goal_conj__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_4)));
    }
    return check_hlds__simplify__simplify_goal_conj__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__4_4,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

    if ((check_hlds__simplify__simplify_goal_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6;
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_conj__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_goal_conj__Goal_16;
        MR_Word check_hlds__simplify__simplify_goal_conj__Goals_17;
        MR_Word check_hlds__simplify__simplify_goal_conj__InstMap1_23;
        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_26;
        MR_Word check_hlds__simplify__simplify_goal_conj___Common1_22;

        {
          check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__Goal0_14, &check_hlds__simplify__simplify_goal_conj__Goal_16, check_hlds__simplify__simplify_goal_conj__HeadVar__3_3, check_hlds__simplify__simplify_goal_conj__HeadVar__4_4, check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, &check_hlds__simplify__simplify_goal_conj___Common1_22, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_26);
        }
        {
          hlds__goal_util__update_instmap_3_p_0(check_hlds__simplify__simplify_goal_conj__Goal_16, check_hlds__simplify__simplify_goal_conj__HeadVar__4_4, &check_hlds__simplify__simplify_goal_conj__InstMap1_23);
        }
        {
          check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(check_hlds__simplify__simplify_goal_conj__Goals0_15, &check_hlds__simplify__simplify_goal_conj__Goals_17, check_hlds__simplify__simplify_goal_conj__HeadVar__3_3, check_hlds__simplify__simplify_goal_conj__InstMap1_23, check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_26, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_17));
        }
      }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__Info_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__ConjNonLocals_2,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_4,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_5,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_6,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

        if ((check_hlds__simplify__simplify_goal_conj__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_6;
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_5 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_4;
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_conj__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_conj__Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_27_27;
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_28_28;
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_26_26;
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_34_59;
            MR_Word check_hlds__simplify__simplify_goal_conj__Unif_40;
            MR_Word check_hlds__simplify__simplify_goal_conj__LeftVar0_43;
            MR_Word check_hlds__simplify__simplify_goal_conj__RightVar0_44;
            MR_Word check_hlds__simplify__simplify_goal_conj__LeftVar_45;
            MR_Word check_hlds__simplify__simplify_goal_conj__RightVar_46;
            MR_Word check_hlds__simplify__simplify_goal_conj__CanElimRight_48;
            MR_Word check_hlds__simplify__simplify_goal_conj__VarSet_49;
            MR_Word check_hlds__simplify__simplify_goal_conj__ElimVar_50;
            MR_Word check_hlds__simplify__simplify_goal_conj__ReplacementVar_51;
            MR_Word check_hlds__simplify__simplify_goal_conj__TraceLevel_52;
            MR_Word check_hlds__simplify__simplify_goal_conj__TraceOptimized_53;
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal_18, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal_18, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_37;
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_38;
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_39;
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_41;
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_33_58;
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_32_57;
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_73;
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_55;
            MR_String check_hlds__simplify__simplify_goal_conj__Name_69;
            MR_String check_hlds__simplify__simplify_goal_conj__Suffix_70;
            MR_String check_hlds__simplify__simplify_goal_conj__Var_72;
            MR_Integer check_hlds__simplify__simplify_goal_conj__Var_71;
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_80;
            MR_String check_hlds__simplify__simplify_goal_conj__Name_76;
            MR_String check_hlds__simplify__simplify_goal_conj__Suffix_77;
            MR_String check_hlds__simplify__simplify_goal_conj__Var_79;
            MR_Integer check_hlds__simplify__simplify_goal_conj__Var_78;

            check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__Var_54)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
              {
                check_hlds__simplify__simplify_goal_conj__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Var_54, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_conj__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Var_54, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_conj__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Var_54, (MR_Integer) 2)));
                check_hlds__simplify__simplify_goal_conj__Unif_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Var_54, (MR_Integer) 3)));
                check_hlds__simplify__simplify_goal_conj__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Var_54, (MR_Integer) 4)));
                check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__Unif_40)) == (MR_mktag((MR_Integer) 2)));
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_conj__LeftVar0_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_conj__Unif_40, (MR_Integer) 0)));
                    check_hlds__simplify__simplify_goal_conj__RightVar0_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_conj__Unif_40, (MR_Integer) 1)));
                    {
                      check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_6, check_hlds__simplify__simplify_goal_conj__LeftVar0_43, &check_hlds__simplify__simplify_goal_conj__LeftVar_45);
                    }
                    {
                      check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_6, check_hlds__simplify__simplify_goal_conj__RightVar0_44, &check_hlds__simplify__simplify_goal_conj__RightVar_46);
                    }
                    check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_33_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      check_hlds__simplify__simplify_goal_conj__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_33_58, check_hlds__simplify__simplify_goal_conj__ConjNonLocals_2, check_hlds__simplify__simplify_goal_conj__RightVar_46);
                    }
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                      check_hlds__simplify__simplify_goal_conj__CanElimRight_48 = (MR_Integer) 0;
                    else
                      check_hlds__simplify__simplify_goal_conj__CanElimRight_48 = (MR_Integer) 1;
                    {
                      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_conj__Info_1, &check_hlds__simplify__simplify_goal_conj__VarSet_49);
                    }
                    check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_32_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      check_hlds__simplify__simplify_goal_conj__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_32_57, check_hlds__simplify__simplify_goal_conj__ConjNonLocals_2, check_hlds__simplify__simplify_goal_conj__LeftVar_45);
                    }
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                      {
                        check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__CanElimRight_48 == (MR_Integer) 1);
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                          {
                            check_hlds__simplify__simplify_goal_conj__ElimVar_50 = check_hlds__simplify__simplify_goal_conj__RightVar_46;
                            check_hlds__simplify__simplify_goal_conj__ReplacementVar_51 = check_hlds__simplify__simplify_goal_conj__LeftVar_45;
                            check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
                          }
                      }
                    else
                      {
                        switch (check_hlds__simplify__simplify_goal_conj__CanElimRight_48) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              check_hlds__simplify__simplify_goal_conj__ElimVar_50 = check_hlds__simplify__simplify_goal_conj__LeftVar_45;
                              check_hlds__simplify__simplify_goal_conj__ReplacementVar_51 = check_hlds__simplify__simplify_goal_conj__RightVar_46;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_String check_hlds__simplify__simplify_goal_conj__Name_62;
                              MR_String check_hlds__simplify__simplify_goal_conj__Suffix_63;
                              MR_String check_hlds__simplify__simplify_goal_conj__Var_65;
                              MR_Integer check_hlds__simplify__simplify_goal_conj__Var_64;

                              {
                                check_hlds__simplify__simplify_goal_conj__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_conj__VarSet_49, check_hlds__simplify__simplify_goal_conj__LeftVar_45, &check_hlds__simplify__simplify_goal_conj__Name_62);
                              }
                              if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_conj__Var_65 = (MR_String) "HeadVar__";
                                  {
                                    check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__append_3_p_1(check_hlds__simplify__simplify_goal_conj__Var_65, &check_hlds__simplify__simplify_goal_conj__Suffix_63, check_hlds__simplify__simplify_goal_conj__Name_62);
                                  }
                                  if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                    {
                                      check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__to_int_2_p_0(check_hlds__simplify__simplify_goal_conj__Suffix_63, &check_hlds__simplify__simplify_goal_conj__Var_64);
                                    }
                                  check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
                                }
                              if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_conj__ElimVar_50 = check_hlds__simplify__simplify_goal_conj__RightVar_46;
                                  check_hlds__simplify__simplify_goal_conj__ReplacementVar_51 = check_hlds__simplify__simplify_goal_conj__LeftVar_45;
                                }
                              else
                                {
                                  check_hlds__simplify__simplify_goal_conj__ElimVar_50 = check_hlds__simplify__simplify_goal_conj__LeftVar_45;
                                  check_hlds__simplify__simplify_goal_conj__ReplacementVar_51 = check_hlds__simplify__simplify_goal_conj__RightVar_46;
                                }
                            }
                            break;
                        }
                        check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
                      }
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                      {
                        {
                          check_hlds__simplify__simplify_info__simplify_info_get_trace_level_optimized_3_p_0(check_hlds__simplify__simplify_goal_conj__Info_1, &check_hlds__simplify__simplify_goal_conj__TraceLevel_52, &check_hlds__simplify__simplify_goal_conj__TraceOptimized_53);
                        }
                        {
                          check_hlds__simplify__simplify_goal_conj__Var_55 = libs__trace_params__trace_level_needs_meaningful_var_names_1_f_0(check_hlds__simplify__simplify_goal_conj__TraceLevel_52);
                        }
                        check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__Var_55 == (MR_Integer) 1);
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                          {
                            check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__TraceOptimized_53 == (MR_Integer) 0);
                            if (check_hlds__simplify__simplify_goal_conj__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                {
                                  check_hlds__simplify__simplify_goal_conj__succeeded = mercury__varset__search_name_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_73, check_hlds__simplify__simplify_goal_conj__VarSet_49, check_hlds__simplify__simplify_goal_conj__ElimVar_50, &check_hlds__simplify__simplify_goal_conj__Name_69);
                                }
                                if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                  {
                                    check_hlds__simplify__simplify_goal_conj__Var_72 = (MR_String) "HeadVar__";
                                    {
                                      check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__append_3_p_1(check_hlds__simplify__simplify_goal_conj__Var_72, &check_hlds__simplify__simplify_goal_conj__Suffix_70, check_hlds__simplify__simplify_goal_conj__Name_69);
                                    }
                                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__to_int_2_p_0(check_hlds__simplify__simplify_goal_conj__Suffix_70, &check_hlds__simplify__simplify_goal_conj__Var_71);
                                      }
                                    check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
                                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                        {
                                          check_hlds__simplify__simplify_goal_conj__succeeded = mercury__varset__search_name_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_80, check_hlds__simplify__simplify_goal_conj__VarSet_49, check_hlds__simplify__simplify_goal_conj__ReplacementVar_51, &check_hlds__simplify__simplify_goal_conj__Name_76);
                                        }
                                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_conj__Var_79 = (MR_String) "HeadVar__";
                                            {
                                              check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__append_3_p_1(check_hlds__simplify__simplify_goal_conj__Var_79, &check_hlds__simplify__simplify_goal_conj__Suffix_77, check_hlds__simplify__simplify_goal_conj__Name_76);
                                            }
                                            if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__to_int_2_p_0(check_hlds__simplify__simplify_goal_conj__Suffix_77, &check_hlds__simplify__simplify_goal_conj__Var_78);
                                              }
                                            check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
                                          }
                                        check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
                                      }
                                  }
                              }
                          }
                        check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                          {
                            check_hlds__simplify__simplify_goal_conj__TypeInfo_34_59 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
                            {
                              mercury__map__det_insert_4_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_34_59, check_hlds__simplify__simplify_goal_conj__TypeInfo_34_59, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__ElimVar_50)), ((MR_Box) (check_hlds__simplify__simplify_goal_conj__ReplacementVar_51)), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_6, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_26_26);
                            }
                            check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
              {
                check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_28_28 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_26_26;
                check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_27_27 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_4;
              }
            else
              {
                {
                  check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_27_27, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal_18));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_27_27, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_4));
                }
                check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_28_28 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_6;
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__3_3 = check_hlds__simplify__simplify_goal_conj__Goals_19;
              MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_RevGoals_0_4 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_27_27;
              MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_Subn_0_6 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_28_28;

              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_6 = check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_Subn_0_6;
              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_4 = check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_RevGoals_0_4;
              check_hlds__simplify__simplify_goal_conj__HeadVar__3_3 = check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__Subn_4,
  MR_Word check_hlds__simplify__simplify_goal_conj__Var0_5,
  MR_Word * check_hlds__simplify__simplify_goal_conj__Var_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
        MR_Word check_hlds__simplify__simplify_goal_conj__Var1_7;
        MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_8_8 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
        MR_Box check_hlds__simplify__simplify_goal_conj__conv0_Var1_7;

        {
          check_hlds__simplify__simplify_goal_conj__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_8_8, check_hlds__simplify__simplify_goal_conj__TypeInfo_8_8, check_hlds__simplify__simplify_goal_conj__Subn_4, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Var0_5)), &check_hlds__simplify__simplify_goal_conj__conv0_Var1_7);
        }
        if (check_hlds__simplify__simplify_goal_conj__succeeded)
          {
            check_hlds__simplify__simplify_goal_conj__Var1_7 = ((MR_Word) check_hlds__simplify__simplify_goal_conj__conv0_Var1_7);
            check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
          }
        if (check_hlds__simplify__simplify_goal_conj__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_Var0_5 = check_hlds__simplify__simplify_goal_conj__Var1_7;

              check_hlds__simplify__simplify_goal_conj__Var0_5 = check_hlds__simplify__simplify_goal_conj__next_value_of_Var0_5;
            }
            continue;
          }
        else
          *check_hlds__simplify__simplify_goal_conj__Var_6 = check_hlds__simplify__simplify_goal_conj__Var0_5;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__no_conjunct_refers_to_var_2_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__TestVar_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

        if ((check_hlds__simplify__simplify_goal_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_conj__Goal_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_conj__Goals_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_conj__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal_4, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_conj__NonLocals_9;
            MR_Word check_hlds__simplify__simplify_goal_conj___GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal_4, (MR_Integer) 0)));

            {
              check_hlds__simplify__simplify_goal_conj__NonLocals_9 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo_8);
            }
            {
              check_hlds__simplify__simplify_goal_conj__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_conj__NonLocals_9, check_hlds__simplify__simplify_goal_conj__TestVar_2);
            }
            check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__1_1 = check_hlds__simplify__simplify_goal_conj__Goals_5;

                  check_hlds__simplify__simplify_goal_conj__HeadVar__1_1 = check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return check_hlds__simplify__simplify_goal_conj__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__all_cases_construct_test_var_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__TestVar_2,
  MR_Word check_hlds__simplify__simplify_goal_conj__TestConsId_3,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_0_4,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_5,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_0_6,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

        if ((check_hlds__simplify__simplify_goal_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_0_6;
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_5 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_0_4;
            check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_50_50;
            MR_Word check_hlds__simplify__simplify_goal_conj__Case_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_conj__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_conj__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Case_16, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_conj__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Case_16, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_conj__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Case_16, (MR_Integer) 2)));
            MR_Word check_hlds__simplify__simplify_goal_conj__GoalExpr_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal_24, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_conj__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal_24, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_conj__Unification_30;
            MR_Word check_hlds__simplify__simplify_goal_conj__CaseConsId_32;
            MR_Word check_hlds__simplify__simplify_goal_conj__CaseArgs_33;
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_45_45;
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_46_46;
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_49;
            MR_Word check_hlds__simplify__simplify_goal_conj___LHSVar_27;
            MR_Word check_hlds__simplify__simplify_goal_conj___RHS_28;
            MR_Word check_hlds__simplify__simplify_goal_conj___UniMode_29;
            MR_Word check_hlds__simplify__simplify_goal_conj___UnifyContext_31;
            MR_Word check_hlds__simplify__simplify_goal_conj___ArgModes_34;
            MR_Word check_hlds__simplify__simplify_goal_conj___HowToConstruct_35;
            MR_Word check_hlds__simplify__simplify_goal_conj___Unique_36;
            MR_Word check_hlds__simplify__simplify_goal_conj___SubInfo_37;

            check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__GoalExpr_25)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
              {
                check_hlds__simplify__simplify_goal_conj___LHSVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__GoalExpr_25, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_conj___RHS_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__GoalExpr_25, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_conj___UniMode_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__GoalExpr_25, (MR_Integer) 2)));
                check_hlds__simplify__simplify_goal_conj__Unification_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__GoalExpr_25, (MR_Integer) 3)));
                check_hlds__simplify__simplify_goal_conj___UnifyContext_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__GoalExpr_25, (MR_Integer) 4)));
                check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__Unification_30)) == (MR_mktag((MR_Integer) 0)));
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_conj__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Unification_30, (MR_Integer) 0)));
                    check_hlds__simplify__simplify_goal_conj__CaseConsId_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Unification_30, (MR_Integer) 1)));
                    check_hlds__simplify__simplify_goal_conj__CaseArgs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Unification_30, (MR_Integer) 2)));
                    check_hlds__simplify__simplify_goal_conj___ArgModes_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Unification_30, (MR_Integer) 3)));
                    check_hlds__simplify__simplify_goal_conj___HowToConstruct_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Unification_30, (MR_Integer) 4)));
                    check_hlds__simplify__simplify_goal_conj___Unique_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Unification_30, (MR_Integer) 5)));
                    check_hlds__simplify__simplify_goal_conj___SubInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Unification_30, (MR_Integer) 6)));
                    check_hlds__simplify__simplify_goal_conj__TypeInfo_50_50 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
                    {
                      check_hlds__simplify__simplify_goal_conj__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_50_50, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__TestVar_2)), ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Var_49)));
                    }
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                      {
                        {
                          check_hlds__simplify__simplify_goal_conj__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__simplify__simplify_goal_conj__CaseConsId_32, check_hlds__simplify__simplify_goal_conj__TestConsId_3);
                        }
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                          check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__CaseArgs_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                          {
                            MR_Word check_hlds__simplify__simplify_goal_conj__Context_38;
                            MR_Word check_hlds__simplify__simplify_goal_conj__TrueGoal_39;
                            MR_Word check_hlds__simplify__simplify_goal_conj__TruncatedCase_40;

                            {
                              check_hlds__simplify__simplify_goal_conj__Context_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo_26);
                            }
                            {
                              check_hlds__simplify__simplify_goal_conj__TrueGoal_39 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_conj__Context_38);
                            }
                            {
                              check_hlds__simplify__simplify_goal_conj__TruncatedCase_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__TruncatedCase_40, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__MainConsId_22));
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__TruncatedCase_40, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__OtherConsIds_23));
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__TruncatedCase_40, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__TrueGoal_39));
                            }
                            {
                              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_45_45, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__TruncatedCase_40));
                              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_45_45, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_0_4));
                            }
                            check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_46_46 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_0_6;
                          }
                        else
                          {
                            {
                              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_46_46, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Case_16));
                              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_46_46, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_0_6));
                            }
                            check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_45_45 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_0_4;
                          }
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__1_1 = check_hlds__simplify__simplify_goal_conj__Cases_17;
                          MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_RevTruncatedSameCases_0_4 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_45_45;
                          MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_RevDiffCases_0_6 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_46_46;

                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevDiffCases_0_6 = check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_RevDiffCases_0_6;
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevTruncatedSameCases_0_4 = check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_RevTruncatedSameCases_0_4;
                          check_hlds__simplify__simplify_goal_conj__HeadVar__1_1 = check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return check_hlds__simplify__simplify_goal_conj__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_conj_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
  MR_Word * check_hlds__simplify__simplify_goal_conj__Goals_3,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__4_4,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__6_6,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

        if ((check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              *check_hlds__simplify__simplify_goal_conj__Goals_3 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1);
            }
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9;
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7;
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_conj__HeadGoal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_conj__TailGoals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_conj__HeadSubGoals0_32;
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__HeadGoal0_24, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_84;
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__HeadGoal0_24, (MR_Integer) 1)));

            check_hlds__simplify__simplify_goal_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__Var_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__Var_83, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
              {
                check_hlds__simplify__simplify_goal_conj__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__Var_83, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_conj__HeadSubGoals0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__Var_83, (MR_Integer) 2)));
                check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__Var_84 == (MR_Integer) 0);
              }
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
              {
                MR_Word check_hlds__simplify__simplify_goal_conj__HeadTailGoals1_34;

                {
                  check_hlds__simplify__simplify_goal_conj__HeadTailGoals1_34 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__HeadSubGoals0_32, check_hlds__simplify__simplify_goal_conj__TailGoals0_25);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__HeadTailGoals1_34;

                  check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__2_2;
                }
                continue;
              }
            else
              {
                MR_Word check_hlds__simplify__simplify_goal_conj__HeadGoal1_36;
                MR_Word check_hlds__simplify__simplify_goal_conj__HeadGoalExpr1_37;
                MR_Word check_hlds__simplify__simplify_goal_conj__HeadGoalInfo1_38;
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_87_87;
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_88_88;
                MR_Word check_hlds__simplify__simplify_goal_conj__HeadSubGoals1_39;
                MR_Word check_hlds__simplify__simplify_goal_conj__Var_89;

                {
                  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__HeadGoal0_24, &check_hlds__simplify__simplify_goal_conj__HeadGoal1_36, check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, check_hlds__simplify__simplify_goal_conj__HeadVar__6_6, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_87_87, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_88_88);
                }
                check_hlds__simplify__simplify_goal_conj__HeadGoalExpr1_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__HeadGoal1_36, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_conj__HeadGoalInfo1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__HeadGoal1_36, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__HeadGoalExpr1_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__HeadGoalExpr1_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_conj__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__HeadGoalExpr1_37, (MR_Integer) 1)));
                    check_hlds__simplify__simplify_goal_conj__HeadSubGoals1_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__HeadGoalExpr1_37, (MR_Integer) 2)));
                    check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__Var_89 == (MR_Integer) 0);
                  }
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
                  {
                    MR_Word check_hlds__simplify__simplify_goal_conj__HeadTailGoals1_109;

                    {
                      check_hlds__simplify__simplify_goal_conj__HeadTailGoals1_109 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__HeadSubGoals1_39, check_hlds__simplify__simplify_goal_conj__TailGoals0_25);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__HeadTailGoals1_109;
                      MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_Info_0_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_88_88;

                      check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9 = check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_Info_0_9;
                      check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__2_2;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word check_hlds__simplify__simplify_goal_conj__InstMap1_40;

                    {
                      hlds__goal_util__update_instmap_3_p_0(check_hlds__simplify__simplify_goal_conj__HeadGoal1_36, check_hlds__simplify__simplify_goal_conj__HeadVar__6_6, &check_hlds__simplify__simplify_goal_conj__InstMap1_40);
                    }
                    {
                      check_hlds__simplify__simplify_goal_conj__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__simplify__simplify_goal_conj__InstMap1_40);
                    }
                    if (!(check_hlds__simplify__simplify_goal_conj__succeeded))
                      {
                        MR_Word check_hlds__simplify__simplify_goal_conj__Detism1_41;
                        MR_Word check_hlds__simplify__simplify_goal_conj__Var_130;
                        MR_Word check_hlds__simplify__simplify_goal_conj__Var_42;

                        {
                          check_hlds__simplify__simplify_goal_conj__Detism1_41 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_conj__HeadGoalInfo1_38);
                        }
                        {
                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_conj__Detism1_41, &check_hlds__simplify__simplify_goal_conj__Var_42, &check_hlds__simplify__simplify_goal_conj__Var_130);
                        }
                        check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_Integer) 0 == check_hlds__simplify__simplify_goal_conj__Var_130);
                      }
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                      {
                        MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_125_125;
                        MR_Word check_hlds__simplify__simplify_goal_conj__DeletedCallCallees0_43;
                        MR_Word check_hlds__simplify__simplify_goal_conj__SubGoalCalledProcs_44;
                        MR_Word check_hlds__simplify__simplify_goal_conj__DeletedCallCallees_45;
                        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_95_95;
                        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_98_111;

                        {
                          check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_88_88, &check_hlds__simplify__simplify_goal_conj__DeletedCallCallees0_43);
                        }
                        {
                          check_hlds__simplify__simplify_goal_conj__SubGoalCalledProcs_44 = hlds__goal_util__goals_proc_refs_1_f_0(check_hlds__simplify__simplify_goal_conj__TailGoals0_25);
                        }
                        {
                          mercury__set__union_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, check_hlds__simplify__simplify_goal_conj__SubGoalCalledProcs_44, check_hlds__simplify__simplify_goal_conj__DeletedCallCallees0_43, &check_hlds__simplify__simplify_goal_conj__DeletedCallCallees_45);
                        }
                        {
                          check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(check_hlds__simplify__simplify_goal_conj__DeletedCallCallees_45, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_88_88, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10);
                        }
                        check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_125_125 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                        {
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_95_95 = mercury__cord__snoc_2_f_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_125_125, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__HeadGoal1_36)));
                        }
                        {
                          MR_Word check_hlds__simplify__simplify_goal_conj__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__HeadGoal1_36, (MR_Integer) 0)));
                          MR_Word check_hlds__simplify__simplify_goal_conj__Var_97;
                          MR_Word check_hlds__simplify__simplify_goal_conj__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__HeadGoal1_36, (MR_Integer) 1)));

                          check_hlds__simplify__simplify_goal_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__Var_96)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__Var_96, (MR_Integer) 0)))) == (MR_Integer) 3)));
                          if (check_hlds__simplify__simplify_goal_conj__succeeded)
                            {
                              check_hlds__simplify__simplify_goal_conj__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__Var_96, (MR_Integer) 1)));
                              check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__Var_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                        }
                        if (!(check_hlds__simplify__simplify_goal_conj__succeeded))
                          check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__TailGoals0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_98_111 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_95_95;
                        else
                          {
                            MR_Word check_hlds__simplify__simplify_goal_conj__HeadGoalInfo0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__HeadGoal0_24, (MR_Integer) 1)));
                            MR_Word check_hlds__simplify__simplify_goal_conj__Context_49;
                            MR_Word check_hlds__simplify__simplify_goal_conj__FailGoal_50;
                            MR_Word check_hlds__simplify__simplify_goal_conj__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__HeadGoal0_24, (MR_Integer) 0)));

                            {
                              check_hlds__simplify__simplify_goal_conj__Context_49 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_conj__HeadGoalInfo0_48);
                            }
                            {
                              check_hlds__simplify__simplify_goal_conj__FailGoal_50 = hlds__make_goal__fail_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_conj__Context_49);
                            }
                            {
                              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_98_111 = mercury__cord__snoc_2_f_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_125_125, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_95_95, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__FailGoal_50)));
                            }
                          }
                        {
                          *check_hlds__simplify__simplify_goal_conj__Goals_3 = mercury__cord__list_1_f_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_125_125, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_98_111);
                        }
                        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_87_87;
                      }
                    else
                      {
                        MR_Word check_hlds__simplify__simplify_goal_conj__SwitchVar_51;
                        MR_Word check_hlds__simplify__simplify_goal_conj__SwitchCanFail1_52;
                        MR_Word check_hlds__simplify__simplify_goal_conj__TailTailGoals0_55;
                        MR_Word check_hlds__simplify__simplify_goal_conj__RevTruncatedSameCases_69;
                        MR_Word check_hlds__simplify__simplify_goal_conj__RevDiffCases_70;
                        MR_Word check_hlds__simplify__simplify_goal_conj__Cases1_53;
                        MR_Word check_hlds__simplify__simplify_goal_conj__HeadTailGoal0_54;
                        MR_Word check_hlds__simplify__simplify_goal_conj__HeadTailGoalExpr0_56;
                        MR_Word check_hlds__simplify__simplify_goal_conj__Unification_61;
                        MR_Word check_hlds__simplify__simplify_goal_conj__TestVar_63;
                        MR_Word check_hlds__simplify__simplify_goal_conj__TestConsId_64;
                        MR_Word check_hlds__simplify__simplify_goal_conj__TestArgs_65;
                        MR_Word check_hlds__simplify__simplify_goal_conj__DeconstructCanFail_67;
                        MR_Word check_hlds__simplify__simplify_goal_conj__ConjNonLocals_71;
                        MR_Word check_hlds__simplify__simplify_goal_conj__Var_99;
                        MR_Word check_hlds__simplify__simplify_goal_conj__Var_100;
                        MR_Word check_hlds__simplify__simplify_goal_conj__Var_57;
                        MR_Word check_hlds__simplify__simplify_goal_conj___LHSVar_58;
                        MR_Word check_hlds__simplify__simplify_goal_conj___RHS_59;
                        MR_Word check_hlds__simplify__simplify_goal_conj___UniMode_60;
                        MR_Word check_hlds__simplify__simplify_goal_conj___UnifyContext_62;
                        MR_Word check_hlds__simplify__simplify_goal_conj___ArgModes_66;
                        MR_Word check_hlds__simplify__simplify_goal_conj___CanCGC_68;
                        MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_126_126;

                        {
                          check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_info__simplify_do_test_after_switch_1_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_88_88);
                        }
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                          {
                            check_hlds__simplify__simplify_goal_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__HeadGoalExpr1_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__HeadGoalExpr1_37, (MR_Integer) 0)))) == (MR_Integer) 4)));
                            if (check_hlds__simplify__simplify_goal_conj__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_conj__SwitchVar_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__HeadGoalExpr1_37, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_conj__SwitchCanFail1_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__HeadGoalExpr1_37, (MR_Integer) 2)));
                                check_hlds__simplify__simplify_goal_conj__Cases1_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__HeadGoalExpr1_37, (MR_Integer) 3)));
                                check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__TailGoals0_25)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                  {
                                    check_hlds__simplify__simplify_goal_conj__HeadTailGoal0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__TailGoals0_25, (MR_Integer) 0)));
                                    check_hlds__simplify__simplify_goal_conj__TailTailGoals0_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__TailGoals0_25, (MR_Integer) 1)));
                                    check_hlds__simplify__simplify_goal_conj__HeadTailGoalExpr0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__HeadTailGoal0_54, (MR_Integer) 0)));
                                    check_hlds__simplify__simplify_goal_conj__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__HeadTailGoal0_54, (MR_Integer) 1)));
                                    check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__HeadTailGoalExpr0_56)) == (MR_mktag((MR_Integer) 1)));
                                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_conj___LHSVar_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadTailGoalExpr0_56, (MR_Integer) 0)));
                                        check_hlds__simplify__simplify_goal_conj___RHS_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadTailGoalExpr0_56, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_conj___UniMode_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadTailGoalExpr0_56, (MR_Integer) 2)));
                                        check_hlds__simplify__simplify_goal_conj__Unification_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadTailGoalExpr0_56, (MR_Integer) 3)));
                                        check_hlds__simplify__simplify_goal_conj___UnifyContext_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadTailGoalExpr0_56, (MR_Integer) 4)));
                                        check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__Unification_61)) == (MR_mktag((MR_Integer) 1)));
                                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_conj__TestVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Unification_61, (MR_Integer) 0)));
                                            check_hlds__simplify__simplify_goal_conj__TestConsId_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Unification_61, (MR_Integer) 1)));
                                            check_hlds__simplify__simplify_goal_conj__TestArgs_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Unification_61, (MR_Integer) 2)));
                                            check_hlds__simplify__simplify_goal_conj___ArgModes_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Unification_61, (MR_Integer) 3)));
                                            check_hlds__simplify__simplify_goal_conj__DeconstructCanFail_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Unification_61, (MR_Integer) 4)));
                                            check_hlds__simplify__simplify_goal_conj___CanCGC_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Unification_61, (MR_Integer) 5)));
                                            check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__TestArgs_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__DeconstructCanFail_67 == (MR_Integer) 0);
                                                if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_goal_conj__Var_99 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                    check_hlds__simplify__simplify_goal_conj__Var_100 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                    {
                                                      check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_goal_conj__all_cases_construct_test_var_7_p_0(check_hlds__simplify__simplify_goal_conj__Cases1_53, check_hlds__simplify__simplify_goal_conj__TestVar_63, check_hlds__simplify__simplify_goal_conj__TestConsId_64, check_hlds__simplify__simplify_goal_conj__Var_99, &check_hlds__simplify__simplify_goal_conj__RevTruncatedSameCases_69, check_hlds__simplify__simplify_goal_conj__Var_100, &check_hlds__simplify__simplify_goal_conj__RevDiffCases_70);
                                                    }
                                                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                                      {
                                                        {
                                                          check_hlds__simplify__simplify_goal_conj__ConjNonLocals_71 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_conj__HeadVar__4_4);
                                                        }
                                                        check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_126_126 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                                        {
                                                          check_hlds__simplify__simplify_goal_conj__succeeded = parse_tree__set_of_var__contains_2_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_126_126, check_hlds__simplify__simplify_goal_conj__ConjNonLocals_71, check_hlds__simplify__simplify_goal_conj__TestVar_63);
                                                        }
                                                        check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
                                                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                                          {
                                                            check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_goal_conj__no_conjunct_refers_to_var_2_p_0(check_hlds__simplify__simplify_goal_conj__TailTailGoals0_55, check_hlds__simplify__simplify_goal_conj__TestVar_63);
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                          {
                            MR_Word check_hlds__simplify__simplify_goal_conj__SwitchCanFail2_72;
                            MR_Word check_hlds__simplify__simplify_goal_conj__TruncatedSameCases_75;
                            MR_Word check_hlds__simplify__simplify_goal_conj__HeadGoalExpr2_76;
                            MR_Word check_hlds__simplify__simplify_goal_conj__HeadGoal2_77;
                            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_101_101;
                            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_98_112;

                            if ((check_hlds__simplify__simplify_goal_conj__RevDiffCases_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                              check_hlds__simplify__simplify_goal_conj__SwitchCanFail2_72 = check_hlds__simplify__simplify_goal_conj__SwitchCanFail1_52;
                            else
                              check_hlds__simplify__simplify_goal_conj__SwitchCanFail2_72 = (MR_Integer) 0;
                            {
                              check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_88_88, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_101_101);
                            }
                            {
                              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, check_hlds__simplify__simplify_goal_conj__RevTruncatedSameCases_69, &check_hlds__simplify__simplify_goal_conj__TruncatedSameCases_75);
                            }
                            {
                              check_hlds__simplify__simplify_goal_conj__HeadGoalExpr2_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__HeadGoalExpr2_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__HeadGoalExpr2_76, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__SwitchVar_51));
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__HeadGoalExpr2_76, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__SwitchCanFail2_72));
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__HeadGoalExpr2_76, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__TruncatedSameCases_75));
                            }
                            {
                              check_hlds__simplify__simplify_goal_conj__HeadGoal2_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__HeadGoal2_77, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__HeadGoalExpr2_76));
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__HeadGoal2_77, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__HeadGoalInfo1_38));
                            }
                            {
                              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_98_112 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__HeadGoal2_77)));
                            }
                            /* direct tailcall eliminated */
                            {
                              MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_PrevGoals_0_1 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_98_112;
                              MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__TailTailGoals0_55;
                              MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__6_6 = check_hlds__simplify__simplify_goal_conj__InstMap1_40;
                              MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_Common_0_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_87_87;
                              MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_Info_0_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_101_101;

                              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9 = check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_Info_0_9;
                              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7 = check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_Common_0_7;
                              check_hlds__simplify__simplify_goal_conj__HeadVar__6_6 = check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__6_6;
                              check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__2_2;
                              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1 = check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_PrevGoals_0_1;
                            }
                            continue;
                          }
                        else
                          {
                            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_98_113;

                            {
                              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_98_113 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__HeadGoal1_36)));
                            }
                            /* direct tailcall eliminated */
                            {
                              MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_PrevGoals_0_1 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_98_113;
                              MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__TailGoals0_25;
                              MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__6_6 = check_hlds__simplify__simplify_goal_conj__InstMap1_40;
                              MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_Common_0_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_87_87;
                              MR_Word check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_Info_0_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_88_88;

                              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9 = check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_Info_0_9;
                              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7 = check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_Common_0_7;
                              check_hlds__simplify__simplify_goal_conj__HeadVar__6_6 = check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__6_6;
                              check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__next_value_of_HeadVar__2_2;
                              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1 = check_hlds__simplify__simplify_goal_conj__next_value_of_STATE_VARIABLE_PrevGoals_0_1;
                            }
                            continue;
                          }
                      }
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_1(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_3(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

    (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Var_7 = ((MR_Word) (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__conv0_Var_7);
    {
      check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_2(check_hlds__simplify__simplify_goal_conj__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_2(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

    {
      MR_Word check_hlds__simplify__simplify_goal_conj___GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Var_7, (MR_Integer) 0)));
      MR_Word check_hlds__simplify__simplify_goal_conj__Var_6;

      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Var_7, (MR_Integer) 1)));
      {
        (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Detism_5 = hlds__hlds_goal__goal_info_get_determinism_1_f_0((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__GoalInfo_4);
      }
      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Var_8 = (MR_Integer) 3;
      {
        parse_tree__prog_data__determinism_components_3_p_0((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Detism_5, &check_hlds__simplify__simplify_goal_conj__Var_6, &(check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Var_10);
      }
      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__succeeded = ((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Var_8 == (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Var_10);
      if ((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__succeeded)
        {
          check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_1(check_hlds__simplify__simplify_goal_conj__env_ptr);
        }
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_4(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__conv0_Var_7, (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Goals_2, check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_3, check_hlds__simplify__simplify_goal_conj__env_ptr);
          }
        }
        (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__Goals_2)
{
  {
    struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s check_hlds__simplify__simplify_goal_conj__env;

    (check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Goals_2 = check_hlds__simplify__simplify_goal_conj__Goals_2;
    {
      check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_4(&check_hlds__simplify__simplify_goal_conj__env);
    }
    return (check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_parallel_conj_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_11,
  MR_Word * check_hlds__simplify__simplify_goal_conj__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_conj__GoalInfo0_13,
  MR_Word * check_hlds__simplify__simplify_goal_conj__GoalInfo_14,
  MR_Word check_hlds__simplify__simplify_goal_conj__NestedContext0_15,
  MR_Word check_hlds__simplify__simplify_goal_conj__InstMap0_16,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

    if ((check_hlds__simplify__simplify_goal_conj__Goals0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__simplify__simplify_goal_conj__Context_19;
        MR_Word check_hlds__simplify__simplify_goal_conj__Var_43;

        {
          check_hlds__simplify__simplify_goal_conj__Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13);
        }
        {
          check_hlds__simplify__simplify_goal_conj__Var_43 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_conj__Context_19);
        }
        *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Var_43, (MR_Integer) 0)));
        *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Var_43, (MR_Integer) 1)));
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27;
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29;
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_conj__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_goal_conj__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 0)));

        if ((check_hlds__simplify__simplify_goal_conj__Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoal_21;
            MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_22;
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_39;
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_41_41;

            {
              check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__Var_45, &check_hlds__simplify__simplify_goal_conj__Var_39, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_41_41);
            }
            check_hlds__simplify__simplify_goal_conj__SingleGoal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Var_39, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Var_39, (MR_Integer) 1)));
            {
              check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_22, check_hlds__simplify__simplify_goal_conj__SingleGoal_21, check_hlds__simplify__simplify_goal_conj__GoalExpr_12, check_hlds__simplify__simplify_goal_conj__GoalInfo_14, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_41_41, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30);
            }
          }
        else
          {
            {
              check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_info__simplify_do_ignore_par_conjunctions_1_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29);
            }
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
              {
                check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(check_hlds__simplify__simplify_goal_conj__Goals0_11, check_hlds__simplify__simplify_goal_conj__GoalExpr_12, check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__GoalInfo_14, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30);
              }
            else
              {
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals_26;
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_34_34;
                MR_Word check_hlds__simplify__simplify_goal_conj__Goal0_52;
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_53;
                MR_Word check_hlds__simplify__simplify_goal_conj__Goal_54;
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals_55;
                MR_Word check_hlds__simplify__simplify_goal_conj__InstMap1_61;
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_64;
                MR_Word check_hlds__simplify__simplify_goal_conj___Common1_60;

                *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = check_hlds__simplify__simplify_goal_conj__GoalInfo0_13;
                check_hlds__simplify__simplify_goal_conj__Goal0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_conj__Goals0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 1)));
                {
                  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__Goal0_52, &check_hlds__simplify__simplify_goal_conj__Goal_54, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, &check_hlds__simplify__simplify_goal_conj___Common1_60, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_64);
                }
                {
                  hlds__goal_util__update_instmap_3_p_0(check_hlds__simplify__simplify_goal_conj__Goal_54, check_hlds__simplify__simplify_goal_conj__InstMap0_16, &check_hlds__simplify__simplify_goal_conj__InstMap1_61);
                }
                {
                  check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(check_hlds__simplify__simplify_goal_conj__Goals0_53, &check_hlds__simplify__simplify_goal_conj__Goals_55, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap1_61, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_64, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_34_34);
                }
                {
                  check_hlds__simplify__simplify_goal_conj__Goals_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal_54));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_55));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_26));
                }
                {
                  check_hlds__simplify__simplify_info__simplify_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_34_34, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30);
                }
                *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27;
              }
          }
      }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_conj__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_2)
{
  {
    MR_Box check_hlds__simplify__simplify_goal_conj__closure = check_hlds__simplify__simplify_goal_conj__closure_arg;
    MR_Word check_hlds__simplify__simplify_goal_conj__conv0_Var_6;

    {
      check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_1), &check_hlds__simplify__simplify_goal_conj__conv0_Var_6);
    }
    *check_hlds__simplify__simplify_goal_conj__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__conv0_Var_6));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_11,
  MR_Word * check_hlds__simplify__simplify_goal_conj__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_conj__GoalInfo0_13,
  MR_Word * check_hlds__simplify__simplify_goal_conj__GoalInfo_14,
  MR_Word check_hlds__simplify__simplify_goal_conj__NestedContext0_15,
  MR_Word check_hlds__simplify__simplify_goal_conj__InstMap0_16,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_33,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_34,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_conj__Goals1_19;
    MR_Word check_hlds__simplify__simplify_goal_conj__Goals_20;
    MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37;
    MR_Word check_hlds__simplify__simplify_goal_conj__Var_38;
    MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40;

    {
      check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_info__simplify_do_excess_assign_1_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35);
    }
    if (check_hlds__simplify__simplify_goal_conj__succeeded)
      {
        MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_32_82;
        MR_Word check_hlds__simplify__simplify_goal_conj__ConjNonLocals_62;
        MR_Word check_hlds__simplify__simplify_goal_conj__Subn0_63;
        MR_Word check_hlds__simplify__simplify_goal_conj__RevGoals_64;
        MR_Word check_hlds__simplify__simplify_goal_conj__Subn1_65;

        {
          check_hlds__simplify__simplify_goal_conj__ConjNonLocals_62 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13);
        }
        check_hlds__simplify__simplify_goal_conj__TypeInfo_32_82 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
        {
          mercury__map__init_1_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_32_82, check_hlds__simplify__simplify_goal_conj__TypeInfo_32_82, &check_hlds__simplify__simplify_goal_conj__Subn0_63);
        }
        {
          check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_7_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_conj__ConjNonLocals_62, check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_conj__RevGoals_64, check_hlds__simplify__simplify_goal_conj__Subn0_63, &check_hlds__simplify__simplify_goal_conj__Subn1_65);
        }
        {
          check_hlds__simplify__simplify_goal_conj__succeeded = mercury__map__is_empty_1_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_32_82, check_hlds__simplify__simplify_goal_conj__TypeInfo_32_82, check_hlds__simplify__simplify_goal_conj__Subn1_65);
        }
        if (check_hlds__simplify__simplify_goal_conj__succeeded)
          {
            check_hlds__simplify__simplify_goal_conj__Goals1_19 = check_hlds__simplify__simplify_goal_conj__Goals0_11;
            check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35;
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_35_85;
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_8_92;
            MR_Word check_hlds__simplify__simplify_goal_conj__Goals1_66;
            MR_Word check_hlds__simplify__simplify_goal_conj__Subn_67;
            MR_Word check_hlds__simplify__simplify_goal_conj__RemovedVars_68;
            MR_Word check_hlds__simplify__simplify_goal_conj__VarSet0_69;
            MR_Word check_hlds__simplify__simplify_goal_conj__VarSet_70;
            MR_Word check_hlds__simplify__simplify_goal_conj__VarTypes0_71;
            MR_Word check_hlds__simplify__simplify_goal_conj__VarTypes_72;
            MR_Word check_hlds__simplify__simplify_goal_conj__RttiVarMaps0_73;
            MR_Word check_hlds__simplify__simplify_goal_conj__RttiVarMaps_74;
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_27_77;
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_28_78;
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_79;
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_80;
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_89;

            {
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__RevGoals_64, &check_hlds__simplify__simplify_goal_conj__Goals1_66);
            }
            {
              check_hlds__simplify__simplify_goal_conj__Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Var_89, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Var_89, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Var_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Var_89, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Subn1_65));
            }
            check_hlds__simplify__simplify_goal_conj__TypeInfo_8_92 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
            {
              mercury__map__map_values_only_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_8_92, check_hlds__simplify__simplify_goal_conj__TypeInfo_8_92, check_hlds__simplify__simplify_goal_conj__TypeInfo_8_92, check_hlds__simplify__simplify_goal_conj__Var_89, check_hlds__simplify__simplify_goal_conj__Subn1_65, &check_hlds__simplify__simplify_goal_conj__Subn_67);
            }
            {
              hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_conj__Subn_67, check_hlds__simplify__simplify_goal_conj__Goals1_66, &check_hlds__simplify__simplify_goal_conj__Goals1_19);
            }
            {
              mercury__map__keys_2_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_32_82, check_hlds__simplify__simplify_goal_conj__TypeInfo_32_82, check_hlds__simplify__simplify_goal_conj__Subn0_63, &check_hlds__simplify__simplify_goal_conj__RemovedVars_68);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35, &check_hlds__simplify__simplify_goal_conj__VarSet0_69);
            }
            {
              mercury__varset__delete_vars_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_conj__RemovedVars_68, check_hlds__simplify__simplify_goal_conj__VarSet0_69, &check_hlds__simplify__simplify_goal_conj__VarSet_70);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_conj__VarSet_70, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_27_77);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_27_77, &check_hlds__simplify__simplify_goal_conj__VarTypes0_71);
            }
            {
              hlds__vartypes__delete_var_types_3_p_0(check_hlds__simplify__simplify_goal_conj__RemovedVars_68, check_hlds__simplify__simplify_goal_conj__VarTypes0_71, &check_hlds__simplify__simplify_goal_conj__VarTypes_72);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_conj__VarTypes_72, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_27_77, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_28_78);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_28_78, &check_hlds__simplify__simplify_goal_conj__RttiVarMaps0_73);
            }
            check_hlds__simplify__simplify_goal_conj__TypeInfo_35_85 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[1];
            {
              check_hlds__simplify__simplify_goal_conj__Var_79 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_35_85, check_hlds__simplify__simplify_goal_conj__TypeInfo_35_85);
            }
            {
              check_hlds__simplify__simplify_goal_conj__Var_80 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_35_85, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            }
            {
              hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(check_hlds__simplify__simplify_goal_conj__Var_79, check_hlds__simplify__simplify_goal_conj__Var_80, check_hlds__simplify__simplify_goal_conj__Subn_67, check_hlds__simplify__simplify_goal_conj__RttiVarMaps0_73, &check_hlds__simplify__simplify_goal_conj__RttiVarMaps_74);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_goal_conj__RttiVarMaps_74, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_28_78, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37);
            }
          }
      }
    else
      {
        check_hlds__simplify__simplify_goal_conj__Goals1_19 = check_hlds__simplify__simplify_goal_conj__Goals0_11;
        check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35;
      }
    {
      check_hlds__simplify__simplify_goal_conj__Var_38 = mercury__cord__empty_0_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
    }
    {
      check_hlds__simplify__simplify_goal_conj__simplify_conj_10_p_0(check_hlds__simplify__simplify_goal_conj__Var_38, check_hlds__simplify__simplify_goal_conj__Goals1_19, &check_hlds__simplify__simplify_goal_conj__Goals_20, check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_33, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_34, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40);
    }
    if ((check_hlds__simplify__simplify_goal_conj__Goals_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__simplify__simplify_goal_conj__Context_21;
        MR_Word check_hlds__simplify__simplify_goal_conj__Var_51;

        {
          check_hlds__simplify__simplify_goal_conj__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13);
        }
        {
          check_hlds__simplify__simplify_goal_conj__Var_51 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_conj__Context_21);
        }
        *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Var_51, (MR_Integer) 0)));
        *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Var_51, (MR_Integer) 1)));
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40;
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_conj__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals_20, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_goal_conj__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals_20, (MR_Integer) 0)));

        if ((check_hlds__simplify__simplify_goal_conj__Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Var_55, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Var_55, (MR_Integer) 1)));

            {
              check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_24, check_hlds__simplify__simplify_goal_conj__SingleGoalExpr_23, check_hlds__simplify__simplify_goal_conj__GoalExpr_12, check_hlds__simplify__simplify_goal_conj__GoalInfo_14, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36);
            }
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_conj__Detism_28;
            MR_Word check_hlds__simplify__simplify_goal_conj__CanFail_29;
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_42;
            MR_Word check_hlds__simplify__simplify_goal_conj__Var_53;

            {
              check_hlds__simplify__simplify_goal_conj__Detism_28 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13);
            }
            {
              check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40);
            }
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
              {
                check_hlds__simplify__simplify_goal_conj__Var_42 = (MR_Integer) 0;
                {
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_conj__Detism_28, &check_hlds__simplify__simplify_goal_conj__CanFail_29, &check_hlds__simplify__simplify_goal_conj__Var_53);
                }
                check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__Var_42 == check_hlds__simplify__simplify_goal_conj__Var_53);
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0(check_hlds__simplify__simplify_goal_conj__Goals_20);
                  }
              }
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
              {
                MR_Word check_hlds__simplify__simplify_goal_conj__InnerDetism_30;
                MR_Word check_hlds__simplify__simplify_goal_conj__InnerInfo_31;
                MR_Word check_hlds__simplify__simplify_goal_conj__InnerGoal_32;
                MR_Word check_hlds__simplify__simplify_goal_conj__Var_44;

                {
                  parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__simplify__simplify_goal_conj__InnerDetism_30, check_hlds__simplify__simplify_goal_conj__CanFail_29, (MR_Integer) 3);
                }
                {
                  hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__simplify__simplify_goal_conj__InnerDetism_30, check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, &check_hlds__simplify__simplify_goal_conj__InnerInfo_31);
                }
                {
                  check_hlds__simplify__simplify_goal_conj__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__Var_44, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__Var_44, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_20));
                }
                {
                  check_hlds__simplify__simplify_goal_conj__InnerGoal_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__InnerGoal_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Var_44));
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__InnerGoal_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__InnerInfo_31));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_conj_scalar_common_1[2])));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__InnerGoal_32));
                }
              }
            else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_20));
                }
              }
            *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = check_hlds__simplify__simplify_goal_conj__GoalInfo0_13;
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40;
          }
      }
  }
}

void mercury__check_hlds__simplify__simplify_goal_conj__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_conj__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__type_ctor_info_var_renaming_0);
}

void mercury__check_hlds__simplify__simplify_goal_conj__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_goal_conj__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.simplify.simplify_goal_conj. */
