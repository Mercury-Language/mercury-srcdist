/*
** Automatically generated from `simplify_goal.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module check_hlds.simplify.simplify_goal. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__simplify_goal__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal.mih"


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
#include "transform_hlds.mih"
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
#include "hlds.goal_form.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.pd_cost.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal_call.mih"
#include "check_hlds.simplify.simplify_goal_conj.mih"
#include "check_hlds.simplify.simplify_goal_disj.mih"
#include "check_hlds.simplify.simplify_goal_ite.mih"
#include "check_hlds.simplify.simplify_goal_scope.mih"
#include "check_hlds.simplify.simplify_goal_switch.mih"
#include "check_hlds.simplify.simplify_goal_unify.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 47 "simplify_goal.m"
struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s {
#line 47 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9;
#line 106 "simplify_goal.m"
  MR_bool check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded;
#line 146 "simplify_goal.m"
  jmp_buf check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0;
#line 146 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25;
#line 47 "simplify_goal.m"
};


#line 159 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0;

#line 162 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1;

#line 165 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_value_ordered_before_after_0[2];

#line 168 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_name_ordered_before_after_0[2];

#line 171 "check_hlds.simplify.simplify_goal.c"
static const MR_Integer check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__functor_number_map_before_after_0[2];

#line 174 "check_hlds.simplify.simplify_goal.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0_10001(
#line 177 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_1,
#line 179 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_2);

#line 182 "check_hlds.simplify.simplify_goal.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0_10001(
#line 185 "check_hlds.simplify.simplify_goal.c"
  MR_Box * check_hlds__simplify__simplify_goal__wrapper_arg_1,
#line 187 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_2,
#line 189 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_3);

#line 364 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0(
#line 364 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__HeadVar__1_1,
#line 364 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_2,
#line 364 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__3_3);

#line 364 "simplify_goal.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0(
#line 364 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_1,
#line 364 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_2);

#line 509 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__enforce_unreachability_invariant_4_p_0(
#line 509 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__GoalInfo0_5,
#line 509 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__GoalInfo_6,
#line 509 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14,
#line 509 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15);

#line 377 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0(
#line 377 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__BeforeAfter_6,
#line 377 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__GoalExpr_7,
#line 377 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__Info_8,
#line 377 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_10,
#line 377 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_11);

#line 285 "simplify_goal.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal__goal_is_call_to_builtin_false_1_p_0(
#line 285 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__1_1);

#line 146 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_1(
#line 146 "simplify_goal.m"
  void * check_hlds__simplify__simplify_goal__env_ptr_arg);

#line 146 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_2(
#line 146 "simplify_goal.m"
  void * check_hlds__simplify__simplify_goal__env_ptr_arg);

#line 146 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_3(
#line 146 "simplify_goal.m"
  void * check_hlds__simplify__simplify_goal__env_ptr_arg);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_1[14][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_2[4][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_3[1][4];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "replacing it with"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The compiler will optimize away this goal,"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: this goal cannot succeed."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_2[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "fail"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[8])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[6])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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



#line 389 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0 = {
  (MR_String) "before",
  (MR_Integer) 0
};

#line 395 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1 = {
  (MR_String) "after",
  (MR_Integer) 1
};

#line 401 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_value_ordered_before_after_0[2] = {
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0,
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1
};

#line 407 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_name_ordered_before_after_0[2] = {
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1,
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0
};

#line 413 "check_hlds.simplify.simplify_goal.c"
static const MR_Integer check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__functor_number_map_before_after_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 419 "check_hlds.simplify.simplify_goal.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__type_ctor_info_before_after_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_goal____Unify____before_after_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal____Compare____before_after_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal",
  (MR_String) "before_after",
  {
    check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_name_ordered_before_after_0
  },
  {
    check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_value_ordered_before_after_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__functor_number_map_before_after_0
};

#line 440 "check_hlds.simplify.simplify_goal.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0_10001(
#line 443 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_1,
#line 445 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_2)
#line 447 "check_hlds.simplify.simplify_goal.c"
{
#line 449 "check_hlds.simplify.simplify_goal.c"
  {
#line 451 "check_hlds.simplify.simplify_goal.c"
    MR_bool check_hlds__simplify__simplify_goal__succeeded;

#line 454 "check_hlds.simplify.simplify_goal.c"
    {
#line 456 "check_hlds.simplify.simplify_goal.c"
      check_hlds__simplify__simplify_goal__succeeded = check_hlds__simplify__simplify_goal____Unify____before_after_0_0(((MR_Word) check_hlds__simplify__simplify_goal__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal__wrapper_arg_2));
    }
#line 459 "check_hlds.simplify.simplify_goal.c"
    return check_hlds__simplify__simplify_goal__succeeded;
#line 461 "check_hlds.simplify.simplify_goal.c"
  }
#line 463 "check_hlds.simplify.simplify_goal.c"
}

#line 466 "check_hlds.simplify.simplify_goal.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0_10001(
#line 469 "check_hlds.simplify.simplify_goal.c"
  MR_Box * check_hlds__simplify__simplify_goal__wrapper_arg_1,
#line 471 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_2,
#line 473 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_3)
#line 475 "check_hlds.simplify.simplify_goal.c"
{
#line 477 "check_hlds.simplify.simplify_goal.c"
  {
#line 479 "check_hlds.simplify.simplify_goal.c"
    MR_Word check_hlds__simplify__simplify_goal__conv0_HeadVar__1_1;

#line 482 "check_hlds.simplify.simplify_goal.c"
    {
#line 484 "check_hlds.simplify.simplify_goal.c"
      check_hlds__simplify__simplify_goal____Compare____before_after_0_0(&check_hlds__simplify__simplify_goal__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_goal__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_goal__wrapper_arg_3));
    }
#line 487 "check_hlds.simplify.simplify_goal.c"
    *check_hlds__simplify__simplify_goal__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_goal__conv0_HeadVar__1_1));
#line 489 "check_hlds.simplify.simplify_goal.c"
  }
#line 491 "check_hlds.simplify.simplify_goal.c"
}

#line 364 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0(
#line 364 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__HeadVar__1_1,
#line 364 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_2,
#line 364 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__3_3)
#line 364 "simplify_goal.m"
{
#line 364 "simplify_goal.m"
  {
#line 364 "simplify_goal.m"
    MR_bool check_hlds__simplify__simplify_goal__succeeded;
#line 364 "simplify_goal.m"
    MR_Integer check_hlds__simplify__simplify_goal__Cast_HeadVar1_4 = (MR_Integer) check_hlds__simplify__simplify_goal__HeadVar__2_2;
#line 364 "simplify_goal.m"
    MR_Integer check_hlds__simplify__simplify_goal__Cast_HeadVar2_5 = (MR_Integer) check_hlds__simplify__simplify_goal__HeadVar__3_3;

#line 364 "simplify_goal.m"
    {
#line 364 "simplify_goal.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_goal__HeadVar__1_1, check_hlds__simplify__simplify_goal__Cast_HeadVar1_4, check_hlds__simplify__simplify_goal__Cast_HeadVar2_5);
#line 364 "simplify_goal.m"
      return;
    }
#line 364 "simplify_goal.m"
  }
#line 364 "simplify_goal.m"
}

#line 364 "simplify_goal.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0(
#line 364 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_1,
#line 364 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_2)
#line 364 "simplify_goal.m"
{
#line 535 "check_hlds.simplify.simplify_goal.c"
  {
#line 537 "check_hlds.simplify.simplify_goal.c"
    MR_bool check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__HeadVar__2_1 == check_hlds__simplify__simplify_goal__HeadVar__2_2);

#line 540 "check_hlds.simplify.simplify_goal.c"
    return check_hlds__simplify__simplify_goal__succeeded;
#line 542 "check_hlds.simplify.simplify_goal.c"
  }
#line 364 "simplify_goal.m"
}

#line 509 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__enforce_unreachability_invariant_4_p_0(
#line 509 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__GoalInfo0_5,
#line 509 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__GoalInfo_6,
#line 509 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14,
#line 509 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15)
#line 509 "simplify_goal.m"
{
#line 513 "simplify_goal.m"
  {
#line 513 "simplify_goal.m"
    MR_bool check_hlds__simplify__simplify_goal__succeeded;
#line 513 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__Determinism0_8;
#line 513 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__InstmapDelta0_9;
#line 513 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__CanFail0_10;
#line 513 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__NumSolns0_11;

#line 514 "simplify_goal.m"
    {
#line 514 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__Determinism0_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_5);
    }
#line 515 "simplify_goal.m"
    {
#line 515 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__InstmapDelta0_9 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_5);
    }
#line 516 "simplify_goal.m"
    {
#line 516 "simplify_goal.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal__Determinism0_8, &check_hlds__simplify__simplify_goal__CanFail0_10, &check_hlds__simplify__simplify_goal__NumSolns0_11);
    }
#line 518 "simplify_goal.m"
    check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__NumSolns0_11 == (MR_Integer) 0);
#line 518 "simplify_goal.m"
    if (check_hlds__simplify__simplify_goal__succeeded)
#line 519 "simplify_goal.m"
      {
#line 519 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(check_hlds__simplify__simplify_goal__InstmapDelta0_9);
      }
#line 525 "simplify_goal.m"
    if (check_hlds__simplify__simplify_goal__succeeded)
#line 521 "simplify_goal.m"
      {
#line 521 "simplify_goal.m"
        MR_Word check_hlds__simplify__simplify_goal__UnreachableInstMapDelta_12;

#line 521 "simplify_goal.m"
        {
#line 521 "simplify_goal.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(&check_hlds__simplify__simplify_goal__UnreachableInstMapDelta_12);
        }
#line 522 "simplify_goal.m"
        {
#line 522 "simplify_goal.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal__UnreachableInstMapDelta_12, check_hlds__simplify__simplify_goal__GoalInfo0_5, check_hlds__simplify__simplify_goal__GoalInfo_6);
        }
#line 524 "simplify_goal.m"
        {
#line 524 "simplify_goal.m"
          check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15);
#line 524 "simplify_goal.m"
          return;
        }
#line 521 "simplify_goal.m"
      }
#line 525 "simplify_goal.m"
    else
#line 532 "simplify_goal.m"
      {
#line 526 "simplify_goal.m"
        {
#line 526 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(check_hlds__simplify__simplify_goal__InstmapDelta0_9);
        }
#line 526 "simplify_goal.m"
        if (check_hlds__simplify__simplify_goal__succeeded)
#line 526 "simplify_goal.m"
          {
#line 527 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__NumSolns0_11 == (MR_Integer) 0);
#line 527 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__succeeded = !(check_hlds__simplify__simplify_goal__succeeded);
#line 526 "simplify_goal.m"
          }
#line 532 "simplify_goal.m"
        if (check_hlds__simplify__simplify_goal__succeeded)
#line 529 "simplify_goal.m"
          {
#line 529 "simplify_goal.m"
            MR_Word check_hlds__simplify__simplify_goal__Determinism_13;

#line 529 "simplify_goal.m"
            {
#line 529 "simplify_goal.m"
              parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__simplify__simplify_goal__Determinism_13, check_hlds__simplify__simplify_goal__CanFail0_10, (MR_Integer) 0);
            }
#line 530 "simplify_goal.m"
            {
#line 530 "simplify_goal.m"
              hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__simplify__simplify_goal__Determinism_13, check_hlds__simplify__simplify_goal__GoalInfo0_5, check_hlds__simplify__simplify_goal__GoalInfo_6);
            }
#line 531 "simplify_goal.m"
            {
#line 531 "simplify_goal.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15);
#line 531 "simplify_goal.m"
              return;
            }
#line 529 "simplify_goal.m"
          }
#line 532 "simplify_goal.m"
        else
#line 533 "simplify_goal.m"
          {
#line 533 "simplify_goal.m"
            *check_hlds__simplify__simplify_goal__GoalInfo_6 = check_hlds__simplify__simplify_goal__GoalInfo0_5;
#line 533 "simplify_goal.m"
            *check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14;
#line 533 "simplify_goal.m"
          }
#line 532 "simplify_goal.m"
      }
#line 513 "simplify_goal.m"
  }
#line 509 "simplify_goal.m"
}

#line 377 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0(
#line 377 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__BeforeAfter_6,
#line 377 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__GoalExpr_7,
#line 377 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__Info_8,
#line 377 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_10,
#line 377 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_11)
#line 377 "simplify_goal.m"
{
#line 387 "simplify_goal.m"
  {
#line 387 "simplify_goal.m"
    MR_bool check_hlds__simplify__simplify_goal__succeeded;

#line 382 "simplify_goal.m"
    {
#line 382 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__succeeded = check_hlds__simplify__simplify_info__simplify_do_common_struct_1_p_0(check_hlds__simplify__simplify_goal__Info_8);
    }
#line 382 "simplify_goal.m"
    if (check_hlds__simplify__simplify_goal__succeeded)
#line 382 "simplify_goal.m"
      {
#line 383 "simplify_goal.m"
        {
#line 383 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__succeeded = check_hlds__simplify__simplify_info__simplify_do_extra_common_struct_1_p_0(check_hlds__simplify__simplify_goal__Info_8);
        }
#line 383 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__succeeded = !(check_hlds__simplify__simplify_goal__succeeded);
#line 382 "simplify_goal.m"
        if (check_hlds__simplify__simplify_goal__succeeded)
#line 399 "simplify_goal.m"
          {
#line 399 "simplify_goal.m"
            if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr_7)) == (MR_mktag((MR_Integer) 0))))
#line 485 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__succeeded = MR_TRUE;
#line 399 "simplify_goal.m"
            else
#line 399 "simplify_goal.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 406 "simplify_goal.m"
                {
#line 406 "simplify_goal.m"
                  MR_Word check_hlds__simplify__simplify_goal__BuiltinState_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 3)));
#line 406 "simplify_goal.m"
                  MR_Word check_hlds__simplify__simplify_goal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 0)));
#line 406 "simplify_goal.m"
                  MR_Integer check_hlds__simplify__simplify_goal__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));
#line 406 "simplify_goal.m"
                  MR_Word check_hlds__simplify__simplify_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 2)));
#line 406 "simplify_goal.m"
                  MR_Word check_hlds__simplify__simplify_goal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 4)));
#line 406 "simplify_goal.m"
                  MR_Word check_hlds__simplify__simplify_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 5)));

#line 410 "simplify_goal.m"
                  if ((((check_hlds__simplify__simplify_goal__BuiltinState_28 == (MR_Integer) 2)) || ((check_hlds__simplify__simplify_goal__BuiltinState_28 == (MR_Integer) 1))))
#line 750 "check_hlds.simplify.simplify_goal.c"
                    check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 1);
#line 410 "simplify_goal.m"
                  else
#line 410 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal__succeeded = MR_FALSE;
#line 406 "simplify_goal.m"
                }
#line 399 "simplify_goal.m"
              else
#line 399 "simplify_goal.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 399 "simplify_goal.m"
                  {
#line 399 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__Unify_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 3)));
#line 399 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 0)));
#line 399 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));
#line 399 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 2)));
#line 399 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 4)));
#line 400 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_22_22;
#line 400 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_23_23;
#line 400 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_24_24;

#line 400 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__Unify_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Unify_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 400 "simplify_goal.m"
                    if (check_hlds__simplify__simplify_goal__succeeded)
#line 400 "simplify_goal.m"
                      {
#line 400 "simplify_goal.m"
                        check_hlds__simplify__simplify_goal__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Unify_20, (MR_Integer) 1)));
#line 400 "simplify_goal.m"
                        check_hlds__simplify__simplify_goal__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Unify_20, (MR_Integer) 2)));
#line 400 "simplify_goal.m"
                        check_hlds__simplify__simplify_goal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Unify_20, (MR_Integer) 3)));
#line 400 "simplify_goal.m"
                      }
#line 399 "simplify_goal.m"
                  }
#line 399 "simplify_goal.m"
                else
#line 399 "simplify_goal.m"
                  if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 801 "check_hlds.simplify.simplify_goal.c"
                    check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 1);
#line 399 "simplify_goal.m"
                  else
#line 399 "simplify_goal.m"
                    if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 454 "simplify_goal.m"
                      {
#line 454 "simplify_goal.m"
                        MR_Word check_hlds__simplify__simplify_goal__ConjType_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));
#line 454 "simplify_goal.m"
                        MR_Word check_hlds__simplify__simplify_goal__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 2)));

#line 814 "check_hlds.simplify.simplify_goal.c"
                        check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__ConjType_54 == (MR_Integer) 1);
#line 454 "simplify_goal.m"
                      }
#line 399 "simplify_goal.m"
                    else
#line 399 "simplify_goal.m"
                      if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 822 "check_hlds.simplify.simplify_goal.c"
                        check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 0);
#line 399 "simplify_goal.m"
                      else
#line 399 "simplify_goal.m"
                        if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 423 "simplify_goal.m"
                          {
#line 423 "simplify_goal.m"
                            MR_Word check_hlds__simplify__simplify_goal__GenericCall_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));
#line 423 "simplify_goal.m"
                            MR_Word check_hlds__simplify__simplify_goal__WillFlush0_40;
#line 423 "simplify_goal.m"
                            MR_Word check_hlds__simplify__simplify_goal__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 2)));
#line 423 "simplify_goal.m"
                            MR_Word check_hlds__simplify__simplify_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 3)));
#line 423 "simplify_goal.m"
                            MR_Word check_hlds__simplify__simplify_goal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 4)));
#line 423 "simplify_goal.m"
                            MR_Word check_hlds__simplify__simplify_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 5)));

#line 427 "simplify_goal.m"
                            if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GenericCall_31)) == (MR_mktag((MR_Integer) 3))))
#line 435 "simplify_goal.m"
                              check_hlds__simplify__simplify_goal__WillFlush0_40 = (MR_Integer) 0;
#line 427 "simplify_goal.m"
                            else
#line 427 "simplify_goal.m"
                              if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GenericCall_31)) == (MR_mktag((MR_Integer) 1))))
#line 429 "simplify_goal.m"
                                check_hlds__simplify__simplify_goal__WillFlush0_40 = (MR_Integer) 1;
#line 427 "simplify_goal.m"
                              else
#line 427 "simplify_goal.m"
                                if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GenericCall_31)) == (MR_mktag((MR_Integer) 2))))
#line 432 "simplify_goal.m"
                                  check_hlds__simplify__simplify_goal__WillFlush0_40 = (MR_Integer) 0;
#line 427 "simplify_goal.m"
                                else
#line 426 "simplify_goal.m"
                                  check_hlds__simplify__simplify_goal__WillFlush0_40 = (MR_Integer) 1;
#line 863 "check_hlds.simplify.simplify_goal.c"
                            check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 1);
#line 423 "simplify_goal.m"
                            if (check_hlds__simplify__simplify_goal__succeeded)
#line 384 "simplify_goal.m"
                              check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__WillFlush0_40 == (MR_Integer) 1);
#line 423 "simplify_goal.m"
                          }
#line 399 "simplify_goal.m"
                        else
#line 399 "simplify_goal.m"
                          if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 875 "check_hlds.simplify.simplify_goal.c"
                            check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 0);
#line 399 "simplify_goal.m"
                          else
#line 399 "simplify_goal.m"
                            if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 490 "simplify_goal.m"
                              {
#line 490 "simplify_goal.m"
                                MR_Word check_hlds__simplify__simplify_goal__ShortHand_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));

#line 494 "simplify_goal.m"
                                if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__ShortHand_67)) == (MR_mktag((MR_Integer) 1))))
#line 493 "simplify_goal.m"
                                  {
#line 493 "simplify_goal.m"
                                  }
#line 494 "simplify_goal.m"
                                else
#line 494 "simplify_goal.m"
                                  if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__ShortHand_67)) == (MR_mktag((MR_Integer) 0))))
#line 498 "simplify_goal.m"
                                    {
#line 500 "simplify_goal.m"
                                      {
#line 500 "simplify_goal.m"
                                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal", (MR_String) "function \140check_hlds.simplify.simplify_goal.will_flush\'/2", (MR_String) "bi_implication");
#line 500 "simplify_goal.m"
                                        return;
                                      }
#line 498 "simplify_goal.m"
                                    }
#line 494 "simplify_goal.m"
                                  else
#line 496 "simplify_goal.m"
                                    {
#line 496 "simplify_goal.m"
                                    }
#line 490 "simplify_goal.m"
                                check_hlds__simplify__simplify_goal__succeeded = MR_TRUE;
#line 490 "simplify_goal.m"
                              }
#line 399 "simplify_goal.m"
                            else
#line 399 "simplify_goal.m"
                              check_hlds__simplify__simplify_goal__succeeded = MR_FALSE;
#line 399 "simplify_goal.m"
          }
#line 382 "simplify_goal.m"
      }
#line 387 "simplify_goal.m"
    if (check_hlds__simplify__simplify_goal__succeeded)
#line 386 "simplify_goal.m"
      {
#line 386 "simplify_goal.m"
        check_hlds__simplify__common__common_info_clear_structs_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_10, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_11);
#line 386 "simplify_goal.m"
        return;
      }
#line 387 "simplify_goal.m"
    else
#line 386 "simplify_goal.m"
      *check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_11 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_10;
#line 387 "simplify_goal.m"
  }
#line 377 "simplify_goal.m"
}

#line 285 "simplify_goal.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal__goal_is_call_to_builtin_false_1_p_0(
#line 285 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__1_1)
#line 285 "simplify_goal.m"
{
#line 287 "simplify_goal.m"
  {
#line 287 "simplify_goal.m"
    MR_bool check_hlds__simplify__simplify_goal__succeeded;
#line 287 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__HeadVar__1_1, (MR_Integer) 0)));
#line 287 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__SymName_9;
#line 287 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__V_10_10;
#line 287 "simplify_goal.m"
    MR_String check_hlds__simplify__simplify_goal__V_11_11;
#line 287 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__V_12_12;
#line 287 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__HeadVar__1_1, (MR_Integer) 1)));
#line 288 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__V_4_4;
#line 288 "simplify_goal.m"
    MR_Integer check_hlds__simplify__simplify_goal__V_5_5;
#line 288 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__V_6_6;
#line 288 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__V_7_7;
#line 288 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__V_8_8;

#line 288 "simplify_goal.m"
    check_hlds__simplify__simplify_goal__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr_2)) == (MR_mktag((MR_Integer) 2)));
#line 288 "simplify_goal.m"
    if (check_hlds__simplify__simplify_goal__succeeded)
#line 288 "simplify_goal.m"
      {
#line 288 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 0)));
#line 288 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 1)));
#line 288 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 2)));
#line 288 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 3)));
#line 288 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 4)));
#line 288 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 5)));
#line 289 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__SymName_9)) == (MR_mktag((MR_Integer) 1)));
#line 289 "simplify_goal.m"
        if (check_hlds__simplify__simplify_goal__succeeded)
#line 289 "simplify_goal.m"
          {
#line 289 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__SymName_9, (MR_Integer) 0)));
#line 289 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__SymName_9, (MR_Integer) 1)));
#line 289 "simplify_goal.m"
            {
#line 289 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__V_12_12 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
            }
#line 289 "simplify_goal.m"
            {
#line 289 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__simplify__simplify_goal__V_10_10, check_hlds__simplify__simplify_goal__V_12_12);
            }
#line 287 "simplify_goal.m"
            if (check_hlds__simplify__simplify_goal__succeeded)
#line 289 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__succeeded = (strcmp(check_hlds__simplify__simplify_goal__V_11_11, (MR_String) "false") == 0);
#line 289 "simplify_goal.m"
          }
#line 288 "simplify_goal.m"
      }
#line 287 "simplify_goal.m"
    return check_hlds__simplify__simplify_goal__succeeded;
#line 287 "simplify_goal.m"
  }
#line 285 "simplify_goal.m"
}

#line 72 "simplify_goal.m"
void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(
#line 72 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__OuterGoalInfo_8,
#line 72 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__InnerGoalInfo_9,
#line 72 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__GoalExpr1_10,
#line 72 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__GoalExpr_11,
#line 72 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__GoalInfo_12,
#line 72 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_16,
#line 72 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_17)
#line 72 "simplify_goal.m"
{
#line 547 "simplify_goal.m"
  {
#line 547 "simplify_goal.m"
    MR_bool check_hlds__simplify__simplify_goal__succeeded;
#line 541 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__InnerDet_14;
#line 541 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__OuterDet_15;

#line 541 "simplify_goal.m"
    {
#line 541 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__InnerDet_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal__InnerGoalInfo_9);
    }
#line 542 "simplify_goal.m"
    {
#line 542 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__OuterDet_15 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal__OuterGoalInfo_8);
    }
#line 543 "simplify_goal.m"
    check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__InnerDet_14 == check_hlds__simplify__simplify_goal__OuterDet_15);
#line 547 "simplify_goal.m"
    if (check_hlds__simplify__simplify_goal__succeeded)
#line 545 "simplify_goal.m"
      {
#line 545 "simplify_goal.m"
        *check_hlds__simplify__simplify_goal__GoalExpr_11 = check_hlds__simplify__simplify_goal__GoalExpr1_10;
#line 546 "simplify_goal.m"
        *check_hlds__simplify__simplify_goal__GoalInfo_12 = check_hlds__simplify__simplify_goal__InnerGoalInfo_9;
#line 546 "simplify_goal.m"
        *check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_17 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_16;
#line 545 "simplify_goal.m"
      }
#line 547 "simplify_goal.m"
    else
#line 549 "simplify_goal.m"
      {
#line 549 "simplify_goal.m"
        MR_Word check_hlds__simplify__simplify_goal__V_20_20;

#line 549 "simplify_goal.m"
        {
#line 549 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 549 "simplify_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__V_20_20, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal__GoalExpr1_10));
#line 549 "simplify_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__V_20_20, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal__InnerGoalInfo_9));
#line 549 "simplify_goal.m"
        }
#line 548 "simplify_goal.m"
        {
#line 548 "simplify_goal.m"
          MR_Word base;
#line 548 "simplify_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 548 "simplify_goal.m"
          *check_hlds__simplify__simplify_goal__GoalExpr_11 = base;
#line 548 "simplify_goal.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 548 "simplify_goal.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[13])));
#line 548 "simplify_goal.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal__V_20_20));
#line 548 "simplify_goal.m"
        }
#line 550 "simplify_goal.m"
        *check_hlds__simplify__simplify_goal__GoalInfo_12 = check_hlds__simplify__simplify_goal__OuterGoalInfo_8;
#line 551 "simplify_goal.m"
        {
#line 551 "simplify_goal.m"
          check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_16, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_17);
#line 551 "simplify_goal.m"
          return;
        }
#line 549 "simplify_goal.m"
      }
#line 547 "simplify_goal.m"
  }
#line 72 "simplify_goal.m"
}

#line 54 "simplify_goal.m"
void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(
#line 54 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66,
#line 54 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67,
#line 54 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68,
#line 54 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69,
#line 54 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__NestedContext0_13,
#line 54 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__InstMap0_14,
#line 54 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70,
#line 54 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71,
#line 54 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72,
#line 54 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73)
#line 54 "simplify_goal.m"
{
#line 296 "simplify_goal.m"
  {
#line 296 "simplify_goal.m"
    MR_bool check_hlds__simplify__simplify_goal__succeeded;

#line 296 "simplify_goal.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66)) == (MR_mktag((MR_Integer) 0))))
#line 320 "simplify_goal.m"
      {
#line 320 "simplify_goal.m"
        check_hlds__simplify__simplify_goal_ite__simplify_goal_neg_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 320 "simplify_goal.m"
        return;
      }
#line 296 "simplify_goal.m"
    else
#line 296 "simplify_goal.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66)) == (MR_mktag((MR_Integer) 2))))
#line 332 "simplify_goal.m"
        {
#line 332 "simplify_goal.m"
          check_hlds__simplify__simplify_goal_call__simplify_goal_plain_call_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 332 "simplify_goal.m"
          return;
        }
#line 296 "simplify_goal.m"
      else
#line 296 "simplify_goal.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66)) == (MR_mktag((MR_Integer) 1))))
#line 328 "simplify_goal.m"
          {
#line 328 "simplify_goal.m"
            check_hlds__simplify__simplify_goal_unify__simplify_goal_unify_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 328 "simplify_goal.m"
            return;
          }
#line 296 "simplify_goal.m"
        else
#line 296 "simplify_goal.m"
          if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 340 "simplify_goal.m"
            {
#line 340 "simplify_goal.m"
              check_hlds__simplify__simplify_goal_call__simplify_goal_foreign_proc_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 340 "simplify_goal.m"
              return;
            }
#line 296 "simplify_goal.m"
          else
#line 296 "simplify_goal.m"
            if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 296 "simplify_goal.m"
              {
#line 296 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 1)));
#line 296 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 2)));

#line 301 "simplify_goal.m"
                if ((check_hlds__simplify__simplify_goal__ConjType_17 == (MR_Integer) 1))
#line 303 "simplify_goal.m"
                  {
#line 303 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal_conj__simplify_goal_parallel_conj_10_p_0(check_hlds__simplify__simplify_goal__Goals_18, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 303 "simplify_goal.m"
                    return;
                  }
#line 301 "simplify_goal.m"
                else
#line 299 "simplify_goal.m"
                  {
#line 299 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(check_hlds__simplify__simplify_goal__Goals_18, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 299 "simplify_goal.m"
                    return;
                  }
#line 296 "simplify_goal.m"
              }
#line 296 "simplify_goal.m"
            else
#line 296 "simplify_goal.m"
              if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 308 "simplify_goal.m"
                {
#line 308 "simplify_goal.m"
                  check_hlds__simplify__simplify_goal_disj__simplify_goal_disj_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 308 "simplify_goal.m"
                  return;
                }
#line 296 "simplify_goal.m"
              else
#line 296 "simplify_goal.m"
                if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 336 "simplify_goal.m"
                  {
#line 336 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal_call__simplify_goal_generic_call_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 336 "simplify_goal.m"
                    return;
                  }
#line 296 "simplify_goal.m"
                else
#line 296 "simplify_goal.m"
                  if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 316 "simplify_goal.m"
                    {
#line 316 "simplify_goal.m"
                      check_hlds__simplify__simplify_goal_ite__simplify_goal_ite_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 316 "simplify_goal.m"
                      return;
                    }
#line 296 "simplify_goal.m"
                  else
#line 296 "simplify_goal.m"
                    if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 324 "simplify_goal.m"
                      {
#line 324 "simplify_goal.m"
                        check_hlds__simplify__simplify_goal_scope__simplify_goal_scope_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 324 "simplify_goal.m"
                        return;
                      }
#line 296 "simplify_goal.m"
                    else
#line 296 "simplify_goal.m"
                      if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 343 "simplify_goal.m"
                        {
#line 343 "simplify_goal.m"
                          MR_Word check_hlds__simplify__simplify_goal__ShortHand0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 1)));

#line 351 "simplify_goal.m"
                          if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__ShortHand0_53)) == (MR_mktag((MR_Integer) 1))))
#line 346 "simplify_goal.m"
                            {
#line 346 "simplify_goal.m"
                              MR_Word check_hlds__simplify__simplify_goal__GoalType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 0)));
#line 346 "simplify_goal.m"
                              MR_Word check_hlds__simplify__simplify_goal__Outer_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 1)));
#line 346 "simplify_goal.m"
                              MR_Word check_hlds__simplify__simplify_goal__Inner_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 2)));
#line 346 "simplify_goal.m"
                              MR_Word check_hlds__simplify__simplify_goal__MaybeOutputVars_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 3)));
#line 346 "simplify_goal.m"
                              MR_Word check_hlds__simplify__simplify_goal__MainGoal_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 4)));
#line 346 "simplify_goal.m"
                              MR_Word check_hlds__simplify__simplify_goal__OrElseGoals_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 5)));
#line 346 "simplify_goal.m"
                              MR_Word check_hlds__simplify__simplify_goal__OrElseInners_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 6)));

#line 347 "simplify_goal.m"
                              {
#line 347 "simplify_goal.m"
                                check_hlds__simplify__simplify_goal_disj__simplify_goal_atomic_goal_16_p_0(check_hlds__simplify__simplify_goal__GoalType_54, check_hlds__simplify__simplify_goal__Outer_55, check_hlds__simplify__simplify_goal__Inner_56, check_hlds__simplify__simplify_goal__MaybeOutputVars_57, check_hlds__simplify__simplify_goal__MainGoal_58, check_hlds__simplify__simplify_goal__OrElseGoals_59, check_hlds__simplify__simplify_goal__OrElseInners_60, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 347 "simplify_goal.m"
                                return;
                              }
#line 346 "simplify_goal.m"
                            }
#line 351 "simplify_goal.m"
                          else
#line 351 "simplify_goal.m"
                            if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__ShortHand0_53)) == (MR_mktag((MR_Integer) 0))))
#line 356 "simplify_goal.m"
                              {
#line 358 "simplify_goal.m"
                                {
#line 358 "simplify_goal.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal", (MR_String) "predicate \140check_hlds.simplify.simplify_goal.simplify_goal_expr\'/10", (MR_String) "bi_implication");
#line 358 "simplify_goal.m"
                                  return;
                                }
#line 356 "simplify_goal.m"
                              }
#line 351 "simplify_goal.m"
                            else
#line 352 "simplify_goal.m"
                              {
#line 354 "simplify_goal.m"
                                {
#line 354 "simplify_goal.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal", (MR_String) "predicate \140check_hlds.simplify.simplify_goal.simplify_goal_expr\'/10", (MR_String) "try_goal");
#line 354 "simplify_goal.m"
                                  return;
                                }
#line 352 "simplify_goal.m"
                              }
#line 343 "simplify_goal.m"
                        }
#line 296 "simplify_goal.m"
                      else
#line 312 "simplify_goal.m"
                        {
#line 312 "simplify_goal.m"
                          check_hlds__simplify__simplify_goal_switch__simplify_goal_switch_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 312 "simplify_goal.m"
                          return;
                        }
#line 296 "simplify_goal.m"
  }
#line 54 "simplify_goal.m"
}

#line 146 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_1(
#line 146 "simplify_goal.m"
  void * check_hlds__simplify__simplify_goal__env_ptr_arg)
#line 146 "simplify_goal.m"
{
#line 146 "simplify_goal.m"
  {
#line 146 "simplify_goal.m"
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * check_hlds__simplify__simplify_goal__env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) check_hlds__simplify__simplify_goal__env_ptr_arg;

#line 146 "simplify_goal.m"
    MR_builtin_longjmp((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0, 1);
#line 146 "simplify_goal.m"
  }
#line 146 "simplify_goal.m"
}

#line 146 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_2(
#line 146 "simplify_goal.m"
  void * check_hlds__simplify__simplify_goal__env_ptr_arg)
#line 146 "simplify_goal.m"
{
#line 146 "simplify_goal.m"
  {
#line 146 "simplify_goal.m"
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * check_hlds__simplify__simplify_goal__env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) check_hlds__simplify__simplify_goal__env_ptr_arg;

#line 147 "simplify_goal.m"
    {
#line 147 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25, (MR_Integer) 0)));
#line 147 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__V_66_66;
#line 147 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25, (MR_Integer) 1)));

#line 147 "simplify_goal.m"
      (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__V_65_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_65_65, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 147 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 147 "simplify_goal.m"
        {
#line 147 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_65_65, (MR_Integer) 1)));
#line 147 "simplify_goal.m"
          (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "simplify_goal.m"
        }
#line 147 "simplify_goal.m"
    }
#line 148 "simplify_goal.m"
    if (!((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
#line 148 "simplify_goal.m"
      {
#line 148 "simplify_goal.m"
        (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal__goal_is_call_to_builtin_false_1_p_0((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25);
      }
#line 148 "simplify_goal.m"
    if ((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 148 "simplify_goal.m"
      {
#line 148 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_1(check_hlds__simplify__simplify_goal__env_ptr);
#line 148 "simplify_goal.m"
        return;
      }
#line 146 "simplify_goal.m"
  }
#line 146 "simplify_goal.m"
}

#line 146 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_3(
#line 146 "simplify_goal.m"
  void * check_hlds__simplify__simplify_goal__env_ptr_arg)
#line 146 "simplify_goal.m"
{
#line 146 "simplify_goal.m"
  {
#line 146 "simplify_goal.m"
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * check_hlds__simplify__simplify_goal__env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) check_hlds__simplify__simplify_goal__env_ptr_arg;

#line 146 "simplify_goal.m"
    if (MR_builtin_setjmp((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0) == 0)
#line 146 "simplify_goal.m"
      {
#line 146 "simplify_goal.m"
        {
#line 146 "simplify_goal.m"
          hlds__goal_util__goal_contains_goal_2_p_0((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &(check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25, check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_2, check_hlds__simplify__simplify_goal__env_ptr);
        }
#line 146 "simplify_goal.m"
        (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
#line 146 "simplify_goal.m"
      }
#line 146 "simplify_goal.m"
    else
#line 146 "simplify_goal.m"
      (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
#line 146 "simplify_goal.m"
  }
#line 146 "simplify_goal.m"
}

#line 47 "simplify_goal.m"
void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(
#line 47 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__Goal0_9,
#line 47 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__Goal_10,
#line 47 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__NestedContext0_11,
#line 47 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__InstMap0_12,
#line 47 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_54,
#line 47 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_55,
#line 47 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_56,
#line 47 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_57)
#line 47 "simplify_goal.m"
{
#line 47 "simplify_goal.m"
  {
#line 47 "simplify_goal.m"
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s check_hlds__simplify__simplify_goal__env;

#line 47 "simplify_goal.m"
    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9 = check_hlds__simplify__simplify_goal__Goal0_9;
#line 106 "simplify_goal.m"
    {
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, (MR_Integer) 1)));
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__NestedContext_17;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Detism_19;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__ModuleInfo0_20;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Goal0CanLoopOrThrow_21;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__ModuleInfo_22;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Purity_23;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Goal1_34;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Goal2_42;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Goal3_48;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__GoalExpr3_49;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo3_50;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__GoalExpr4_51;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo4_52;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo_53;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_62_62;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_111_111;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_112_112;
#line 106 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_113_113;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, (MR_Integer) 0)));
#line 258 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Reason1_39;
#line 258 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__SomeGoal1_40;
#line 258 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo1_41;
#line 256 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__V_107_107;
#line 272 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__SomeGoal2_44;
#line 262 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Reason2_43;
#line 262 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__V_108_108;
#line 263 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal___GoalInfo2_45;

#line 108 "simplify_goal.m"
      {
#line 108 "simplify_goal.m"
        (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__simplify__simplify_goal__GoalInfo0_16, (MR_Integer) 13);
      }
#line 110 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 109 "simplify_goal.m"
        {
#line 109 "simplify_goal.m"
          MR_Integer check_hlds__simplify__simplify_goal__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext0_11, (MR_Integer) 1)));
#line 109 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext0_11, (MR_Integer) 2)));
#line 109 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext0_11, (MR_Integer) 0)));

#line 109 "simplify_goal.m"
          {
#line 109 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__NestedContext_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 109 "simplify_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext_17, 0) = ((MR_Box) ((MR_Integer) 1));
#line 109 "simplify_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext_17, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal__V_124_124));
#line 109 "simplify_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext_17, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal__V_125_125));
#line 109 "simplify_goal.m"
          }
#line 109 "simplify_goal.m"
        }
#line 110 "simplify_goal.m"
      else
#line 111 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__NestedContext_17 = check_hlds__simplify__simplify_goal__NestedContext0_11;
#line 113 "simplify_goal.m"
      {
#line 113 "simplify_goal.m"
        (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__simplify__simplify_goal__GoalInfo0_16, (MR_Integer) 17);
      }
#line 116 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 114 "simplify_goal.m"
        {
#line 114 "simplify_goal.m"
          {
#line 114 "simplify_goal.m"
            check_hlds__simplify__simplify_info__simplify_info_set_found_contains_trace_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_56, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_62_62);
          }
#line 115 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18 = (MR_Integer) 0;
#line 114 "simplify_goal.m"
        }
#line 116 "simplify_goal.m"
      else
#line 117 "simplify_goal.m"
        {
#line 117 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18 = (MR_Integer) 1;
#line 117 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_62_62 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_56;
#line 117 "simplify_goal.m"
        }
#line 119 "simplify_goal.m"
      {
#line 119 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__Detism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
      }
#line 120 "simplify_goal.m"
      {
#line 120 "simplify_goal.m"
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_62_62, &check_hlds__simplify__simplify_goal__ModuleInfo0_20);
      }
#line 121 "simplify_goal.m"
      {
#line 121 "simplify_goal.m"
        hlds__goal_form__goal_can_loop_or_throw_4_p_0((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &check_hlds__simplify__simplify_goal__Goal0CanLoopOrThrow_21, check_hlds__simplify__simplify_goal__ModuleInfo0_20, &check_hlds__simplify__simplify_goal__ModuleInfo_22);
      }
#line 123 "simplify_goal.m"
      {
#line 123 "simplify_goal.m"
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal__ModuleInfo_22, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_62_62, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63);
      }
#line 124 "simplify_goal.m"
      {
#line 124 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__Purity_23 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
      }
#line 129 "simplify_goal.m"
      (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Detism_19 == (MR_Integer) 7);
#line 129 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 129 "simplify_goal.m"
        {
#line 131 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__Purity_23 == (MR_Integer) 0))
#line 130 "simplify_goal.m"
            (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
#line 131 "simplify_goal.m"
          else
#line 131 "simplify_goal.m"
            if ((check_hlds__simplify__simplify_goal__Purity_23 == (MR_Integer) 1))
#line 131 "simplify_goal.m"
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
#line 131 "simplify_goal.m"
            else
#line 131 "simplify_goal.m"
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
#line 129 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 129 "simplify_goal.m"
            {
#line 133 "simplify_goal.m"
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18 == (MR_Integer) 1);
#line 129 "simplify_goal.m"
              if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 129 "simplify_goal.m"
                {
#line 134 "simplify_goal.m"
                  {
#line 134 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_128_128;

#line 134 "simplify_goal.m"
                    {
#line 134 "simplify_goal.m"
                      check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63, &check_hlds__simplify__simplify_goal__V_128_128);
                    }
#line 134 "simplify_goal.m"
                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 0 == check_hlds__simplify__simplify_goal__V_128_128);
#line 134 "simplify_goal.m"
                  }
#line 135 "simplify_goal.m"
                  if (!((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
#line 135 "simplify_goal.m"
                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Goal0CanLoopOrThrow_21 == (MR_Integer) 1);
#line 129 "simplify_goal.m"
                }
#line 129 "simplify_goal.m"
            }
#line 129 "simplify_goal.m"
        }
#line 179 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 142 "simplify_goal.m"
        {
#line 142 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__Context_24;
#line 142 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__NonLocals0_32;
#line 142 "simplify_goal.m"
          MR_Integer check_hlds__simplify__simplify_goal__CostDelta_33;
#line 142 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_100_100;
#line 142 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_101_101;

#line 142 "simplify_goal.m"
          {
#line 142 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
          }
#line 144 "simplify_goal.m"
          {
#line 144 "simplify_goal.m"
            (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63);
          }
#line 144 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 144 "simplify_goal.m"
            {
#line 146 "simplify_goal.m"
              {
#line 146 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_3(&check_hlds__simplify__simplify_goal__env);
              }
#line 145 "simplify_goal.m"
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded);
#line 144 "simplify_goal.m"
            }
#line 165 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 152 "simplify_goal.m"
            {
#line 152 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__Msg_29;
#line 152 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__Spec_31;
#line 152 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__V_98_98;

#line 157 "simplify_goal.m"
              {
#line 157 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 157 "simplify_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Msg_29, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal__Context_24));
#line 157 "simplify_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Msg_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[12])));
#line 157 "simplify_goal.m"
              }
#line 163 "simplify_goal.m"
              {
#line 163 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "simplify_goal.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__V_98_98, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal__Msg_29));
#line 163 "simplify_goal.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 163 "simplify_goal.m"
              }
#line 162 "simplify_goal.m"
              {
#line 162 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 162 "simplify_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_3[0])));
#line 162 "simplify_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_scalar_common_2[3])));
#line 162 "simplify_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Spec_31, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal__V_98_98));
#line 162 "simplify_goal.m"
              }
#line 164 "simplify_goal.m"
              {
#line 164 "simplify_goal.m"
                check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal__Spec_31, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_100_100);
              }
#line 152 "simplify_goal.m"
            }
#line 165 "simplify_goal.m"
          else
#line 164 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_100_100 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63;
#line 170 "simplify_goal.m"
          {
#line 170 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__NonLocals0_32 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
          }
#line 171 "simplify_goal.m"
          {
#line 171 "simplify_goal.m"
            (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal__NonLocals0_32);
          }
#line 173 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 171 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_101_101 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_100_100;
#line 173 "simplify_goal.m"
          else
#line 174 "simplify_goal.m"
            {
#line 174 "simplify_goal.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_100_100, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_101_101);
            }
#line 176 "simplify_goal.m"
          {
#line 176 "simplify_goal.m"
            transform_hlds__pd_cost__goal_cost_2_p_0((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &check_hlds__simplify__simplify_goal__CostDelta_33);
          }
#line 177 "simplify_goal.m"
          {
#line 177 "simplify_goal.m"
            check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__simplify_goal__CostDelta_33, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_101_101, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102);
          }
#line 178 "simplify_goal.m"
          {
#line 178 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__Goal1_34 = hlds__make_goal__fail_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal__Context_24);
          }
#line 142 "simplify_goal.m"
        }
#line 179 "simplify_goal.m"
      else
#line 249 "simplify_goal.m"
        {
#line 186 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__MaxSoln_35;
#line 186 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__InstMapDelta_36;
#line 186 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__NonLocalVars_37;
#line 186 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__VarTypes_38;
#line 186 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__V_129_129;
#line 186 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__V_130_130;

#line 186 "simplify_goal.m"
          {
#line 186 "simplify_goal.m"
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal__Detism_19, &check_hlds__simplify__simplify_goal__V_129_129, &check_hlds__simplify__simplify_goal__MaxSoln_35);
          }
#line 186 "simplify_goal.m"
          (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 1 == check_hlds__simplify__simplify_goal__V_129_129);
#line 186 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 186 "simplify_goal.m"
            {
#line 187 "simplify_goal.m"
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__MaxSoln_35 == (MR_Integer) 0);
#line 187 "simplify_goal.m"
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded);
#line 186 "simplify_goal.m"
              if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 186 "simplify_goal.m"
                {
#line 188 "simplify_goal.m"
                  {
#line 188 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal__InstMapDelta_36 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
                  }
#line 189 "simplify_goal.m"
                  {
#line 189 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal__NonLocalVars_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
                  }
#line 190 "simplify_goal.m"
                  {
#line 190 "simplify_goal.m"
                    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63, &check_hlds__simplify__simplify_goal__V_130_130);
                  }
#line 190 "simplify_goal.m"
                  {
#line 190 "simplify_goal.m"
                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__simplify__simplify_goal__ModuleInfo_22, check_hlds__simplify__simplify_goal__V_130_130);
                  }
#line 186 "simplify_goal.m"
                  if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 186 "simplify_goal.m"
                    {
#line 191 "simplify_goal.m"
                      {
#line 191 "simplify_goal.m"
                        check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63, &check_hlds__simplify__simplify_goal__VarTypes_38);
                      }
#line 192 "simplify_goal.m"
                      {
#line 192 "simplify_goal.m"
                        (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__instmap__instmap_delta_no_output_vars_5_p_0(check_hlds__simplify__simplify_goal__ModuleInfo_22, check_hlds__simplify__simplify_goal__VarTypes_38, check_hlds__simplify__simplify_goal__InstMap0_12, check_hlds__simplify__simplify_goal__InstMapDelta_36, check_hlds__simplify__simplify_goal__NonLocalVars_37);
                      }
#line 186 "simplify_goal.m"
                      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 186 "simplify_goal.m"
                        {
#line 195 "simplify_goal.m"
                          if ((check_hlds__simplify__simplify_goal__Purity_23 == (MR_Integer) 0))
#line 194 "simplify_goal.m"
                            (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
#line 195 "simplify_goal.m"
                          else
#line 195 "simplify_goal.m"
                            if ((check_hlds__simplify__simplify_goal__Purity_23 == (MR_Integer) 1))
#line 195 "simplify_goal.m"
                              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
#line 195 "simplify_goal.m"
                            else
#line 195 "simplify_goal.m"
                              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
#line 186 "simplify_goal.m"
                          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 186 "simplify_goal.m"
                            {
#line 197 "simplify_goal.m"
                              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18 == (MR_Integer) 1);
#line 186 "simplify_goal.m"
                              if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 186 "simplify_goal.m"
                                {
#line 198 "simplify_goal.m"
                                  {
#line 198 "simplify_goal.m"
                                    MR_Word check_hlds__simplify__simplify_goal__V_131_131;

#line 198 "simplify_goal.m"
                                    {
#line 198 "simplify_goal.m"
                                      check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63, &check_hlds__simplify__simplify_goal__V_131_131);
                                    }
#line 198 "simplify_goal.m"
                                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 0 == check_hlds__simplify__simplify_goal__V_131_131);
#line 198 "simplify_goal.m"
                                  }
#line 199 "simplify_goal.m"
                                  if (!((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
#line 199 "simplify_goal.m"
                                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Goal0CanLoopOrThrow_21 == (MR_Integer) 1);
#line 186 "simplify_goal.m"
                                }
#line 186 "simplify_goal.m"
                            }
#line 186 "simplify_goal.m"
                        }
#line 186 "simplify_goal.m"
                    }
#line 186 "simplify_goal.m"
                }
#line 186 "simplify_goal.m"
            }
#line 249 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 239 "simplify_goal.m"
            {
#line 239 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_105_105;
#line 239 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__Context_117;
#line 239 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__NonLocals0_118;
#line 239 "simplify_goal.m"
              MR_Integer check_hlds__simplify__simplify_goal__CostDelta_119;

#line 239 "simplify_goal.m"
              {
#line 239 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__NonLocals0_118 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
              }
#line 240 "simplify_goal.m"
              {
#line 240 "simplify_goal.m"
                (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal__NonLocals0_118);
              }
#line 242 "simplify_goal.m"
              if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 240 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_105_105 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63;
#line 242 "simplify_goal.m"
              else
#line 243 "simplify_goal.m"
                {
#line 243 "simplify_goal.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_105_105);
                }
#line 245 "simplify_goal.m"
              {
#line 245 "simplify_goal.m"
                transform_hlds__pd_cost__goal_cost_2_p_0((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &check_hlds__simplify__simplify_goal__CostDelta_119);
              }
#line 246 "simplify_goal.m"
              {
#line 246 "simplify_goal.m"
                check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__simplify_goal__CostDelta_119, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_105_105, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102);
              }
#line 247 "simplify_goal.m"
              {
#line 247 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__Context_117 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
              }
#line 248 "simplify_goal.m"
              {
#line 248 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__Goal1_34 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal__Context_117);
              }
#line 239 "simplify_goal.m"
            }
#line 249 "simplify_goal.m"
          else
#line 250 "simplify_goal.m"
            {
#line 250 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__Goal1_34 = (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9;
#line 250 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63;
#line 250 "simplify_goal.m"
            }
#line 249 "simplify_goal.m"
        }
#line 256 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal1_34, (MR_Integer) 0)));
#line 256 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__GoalInfo1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal1_34, (MR_Integer) 1)));
#line 256 "simplify_goal.m"
      (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__V_107_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_107_107, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 256 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 256 "simplify_goal.m"
        {
#line 256 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__Reason1_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_107_107, (MR_Integer) 1)));
#line 256 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__SomeGoal1_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_107_107, (MR_Integer) 2)));
#line 257 "simplify_goal.m"
          {
#line 257 "simplify_goal.m"
            check_hlds__simplify__simplify_goal_scope__try_to_merge_nested_scopes_4_p_0(check_hlds__simplify__simplify_goal__Reason1_39, check_hlds__simplify__simplify_goal__SomeGoal1_40, check_hlds__simplify__simplify_goal__GoalInfo1_41, &check_hlds__simplify__simplify_goal__Goal2_42);
          }
#line 256 "simplify_goal.m"
        }
#line 256 "simplify_goal.m"
      else
#line 259 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__Goal2_42 = check_hlds__simplify__simplify_goal__Goal1_34;
#line 262 "simplify_goal.m"
      {
#line 262 "simplify_goal.m"
        (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_elim_removable_scopes_1_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102);
      }
#line 262 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 262 "simplify_goal.m"
        {
#line 263 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal2_42, (MR_Integer) 0)));
#line 263 "simplify_goal.m"
          check_hlds__simplify__simplify_goal___GoalInfo2_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal2_42, (MR_Integer) 1)));
#line 263 "simplify_goal.m"
          (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__V_108_108)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_108_108, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 263 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 263 "simplify_goal.m"
            {
#line 263 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__Reason2_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_108_108, (MR_Integer) 1)));
#line 263 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__SomeGoal2_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_108_108, (MR_Integer) 2)));
#line 266 "simplify_goal.m"
              if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__Reason2_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_43, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 265 "simplify_goal.m"
                {
#line 265 "simplify_goal.m"
                  MR_Word check_hlds__simplify__simplify_goal__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_43, (MR_Integer) 1)));

#line 265 "simplify_goal.m"
                  (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__V_109_109 == (MR_Integer) 0);
#line 265 "simplify_goal.m"
                }
#line 266 "simplify_goal.m"
              else
#line 266 "simplify_goal.m"
                if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__Reason2_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_43, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 267 "simplify_goal.m"
                  {
#line 267 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__Kind_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_43, (MR_Integer) 2)));
#line 267 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_43, (MR_Integer) 1)));

#line 268 "simplify_goal.m"
                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Kind_47 == (MR_Integer) 3);
#line 267 "simplify_goal.m"
                  }
#line 266 "simplify_goal.m"
                else
#line 266 "simplify_goal.m"
                  (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
#line 263 "simplify_goal.m"
            }
#line 262 "simplify_goal.m"
        }
#line 272 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 271 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__Goal3_48 = check_hlds__simplify__simplify_goal__SomeGoal2_44;
#line 272 "simplify_goal.m"
      else
#line 273 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__Goal3_48 = check_hlds__simplify__simplify_goal__Goal2_42;
#line 275 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__GoalExpr3_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal3_48, (MR_Integer) 0)));
#line 275 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__GoalInfo3_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal3_48, (MR_Integer) 1)));
#line 276 "simplify_goal.m"
      {
#line 276 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal__GoalExpr3_49, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_54, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_111_111);
      }
#line 277 "simplify_goal.m"
      {
#line 277 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(check_hlds__simplify__simplify_goal__GoalExpr3_49, &check_hlds__simplify__simplify_goal__GoalExpr4_51, check_hlds__simplify__simplify_goal__GoalInfo3_50, &check_hlds__simplify__simplify_goal__GoalInfo4_52, check_hlds__simplify__simplify_goal__NestedContext_17, check_hlds__simplify__simplify_goal__InstMap0_12, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_111_111, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_112_112, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_113_113);
      }
#line 279 "simplify_goal.m"
      {
#line 279 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal__GoalExpr4_51, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_113_113, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_112_112, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_55);
      }
#line 280 "simplify_goal.m"
      {
#line 280 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__enforce_unreachability_invariant_4_p_0(check_hlds__simplify__simplify_goal__GoalInfo4_52, &check_hlds__simplify__simplify_goal__GoalInfo_53, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_113_113, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_57);
      }
#line 281 "simplify_goal.m"
      {
#line 281 "simplify_goal.m"
        MR_Word base;
#line 281 "simplify_goal.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "simplify_goal.m"
        *check_hlds__simplify__simplify_goal__Goal_10 = base;
#line 281 "simplify_goal.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal__GoalExpr4_51));
#line 281 "simplify_goal.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal__GoalInfo_53));
#line 281 "simplify_goal.m"
      }
#line 106 "simplify_goal.m"
    }
#line 47 "simplify_goal.m"
  }
#line 47 "simplify_goal.m"
}

void mercury__check_hlds__simplify__simplify_goal__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__type_ctor_info_before_after_0);
}

void mercury__check_hlds__simplify__simplify_goal__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.simplify_goal. */
