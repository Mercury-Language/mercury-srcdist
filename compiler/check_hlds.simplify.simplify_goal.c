/*
** Automatically generated from `simplify_goal.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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
#include "transform_hlds.mih"
#include "tree234.mih"
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
#line 107 "simplify_goal.m"
  MR_bool check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded;
#line 147 "simplify_goal.m"
  jmp_buf check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0;
#line 147 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25;
#line 47 "simplify_goal.m"
};


#line 163 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0;

#line 166 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1;

#line 169 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_value_ordered_before_after_0[2];

#line 172 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_name_ordered_before_after_0[2];

#line 175 "check_hlds.simplify.simplify_goal.c"
static const MR_Integer check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__functor_number_map_before_after_0[2];

#line 178 "check_hlds.simplify.simplify_goal.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0_10001(
#line 181 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_1,
#line 183 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_2);

#line 186 "check_hlds.simplify.simplify_goal.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0_10001(
#line 189 "check_hlds.simplify.simplify_goal.c"
  MR_Box * check_hlds__simplify__simplify_goal__wrapper_arg_1,
#line 191 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_2,
#line 193 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_3);

#line 366 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0(
#line 366 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__HeadVar__1_1,
#line 366 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_2,
#line 366 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__3_3);

#line 366 "simplify_goal.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0(
#line 366 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_1,
#line 366 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_2);

#line 511 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__enforce_unreachability_invariant_4_p_0(
#line 511 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__GoalInfo0_5,
#line 511 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__GoalInfo_6,
#line 511 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14,
#line 511 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15);

#line 379 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0(
#line 379 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__BeforeAfter_6,
#line 379 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__GoalExpr_7,
#line 379 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__Info_8,
#line 379 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_10,
#line 379 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_11);

#line 287 "simplify_goal.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal__goal_is_call_to_builtin_false_1_p_0(
#line 287 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__1_1);

#line 147 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_1(
#line 147 "simplify_goal.m"
  void * check_hlds__simplify__simplify_goal__env_ptr_arg);

#line 147 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_2(
#line 147 "simplify_goal.m"
  void * check_hlds__simplify__simplify_goal__env_ptr_arg);

#line 147 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_3(
#line 147 "simplify_goal.m"
  void * check_hlds__simplify__simplify_goal__env_ptr_arg);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_1[15][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_2[3][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_3[1][4];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_1[15][2] = {
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
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[6])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_2[3][1] = {
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



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 394 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0 = {
  (MR_String) "before",
  (MR_Integer) 0
};

#line 400 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1 = {
  (MR_String) "after",
  (MR_Integer) 1
};

#line 406 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_value_ordered_before_after_0[2] = {
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0,
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1
};

#line 412 "check_hlds.simplify.simplify_goal.c"
static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_name_ordered_before_after_0[2] = {
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1,
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0
};

#line 418 "check_hlds.simplify.simplify_goal.c"
static const MR_Integer check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__functor_number_map_before_after_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 424 "check_hlds.simplify.simplify_goal.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__type_ctor_info_before_after_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_goal____Unify____before_after_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal____Compare____before_after_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal",
  (MR_String) "before_after",
  {     check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_name_ordered_before_after_0 },
  {     check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_value_ordered_before_after_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__functor_number_map_before_after_0
};

#line 441 "check_hlds.simplify.simplify_goal.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0_10001(
#line 444 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_1,
#line 446 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_2)
#line 448 "check_hlds.simplify.simplify_goal.c"
{
#line 450 "check_hlds.simplify.simplify_goal.c"
  {
#line 452 "check_hlds.simplify.simplify_goal.c"
    MR_bool check_hlds__simplify__simplify_goal__succeeded;

#line 455 "check_hlds.simplify.simplify_goal.c"
    {
#line 457 "check_hlds.simplify.simplify_goal.c"
      check_hlds__simplify__simplify_goal__succeeded = check_hlds__simplify__simplify_goal____Unify____before_after_0_0(((MR_Word) check_hlds__simplify__simplify_goal__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal__wrapper_arg_2));
    }
#line 460 "check_hlds.simplify.simplify_goal.c"
    return check_hlds__simplify__simplify_goal__succeeded;
#line 462 "check_hlds.simplify.simplify_goal.c"
  }
#line 464 "check_hlds.simplify.simplify_goal.c"
}

#line 467 "check_hlds.simplify.simplify_goal.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0_10001(
#line 470 "check_hlds.simplify.simplify_goal.c"
  MR_Box * check_hlds__simplify__simplify_goal__wrapper_arg_1,
#line 472 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_2,
#line 474 "check_hlds.simplify.simplify_goal.c"
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_3)
#line 476 "check_hlds.simplify.simplify_goal.c"
{
#line 478 "check_hlds.simplify.simplify_goal.c"
  {
#line 480 "check_hlds.simplify.simplify_goal.c"
    MR_Word check_hlds__simplify__simplify_goal__conv0_HeadVar__1_1;

#line 483 "check_hlds.simplify.simplify_goal.c"
    {
#line 485 "check_hlds.simplify.simplify_goal.c"
      check_hlds__simplify__simplify_goal____Compare____before_after_0_0(&check_hlds__simplify__simplify_goal__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_goal__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_goal__wrapper_arg_3));
    }
#line 488 "check_hlds.simplify.simplify_goal.c"
    *check_hlds__simplify__simplify_goal__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_goal__conv0_HeadVar__1_1));
#line 490 "check_hlds.simplify.simplify_goal.c"
  }
#line 492 "check_hlds.simplify.simplify_goal.c"
}

#line 366 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0(
#line 366 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__HeadVar__1_1,
#line 366 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_2,
#line 366 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__3_3)
#line 366 "simplify_goal.m"
{
#line 366 "simplify_goal.m"
  {
#line 366 "simplify_goal.m"
    MR_bool check_hlds__simplify__simplify_goal__succeeded;
#line 366 "simplify_goal.m"
    MR_Integer check_hlds__simplify__simplify_goal__Cast_HeadVar1_4 = (MR_Integer) check_hlds__simplify__simplify_goal__HeadVar__2_2;
#line 366 "simplify_goal.m"
    MR_Integer check_hlds__simplify__simplify_goal__Cast_HeadVar2_5 = (MR_Integer) check_hlds__simplify__simplify_goal__HeadVar__3_3;

#line 366 "simplify_goal.m"
    {
#line 366 "simplify_goal.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_goal__HeadVar__1_1, check_hlds__simplify__simplify_goal__Cast_HeadVar1_4, check_hlds__simplify__simplify_goal__Cast_HeadVar2_5);
#line 366 "simplify_goal.m"
      return;
    }
#line 366 "simplify_goal.m"
  }
#line 366 "simplify_goal.m"
}

#line 366 "simplify_goal.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0(
#line 366 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_1,
#line 366 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_2)
#line 366 "simplify_goal.m"
{
#line 536 "check_hlds.simplify.simplify_goal.c"
  {
#line 538 "check_hlds.simplify.simplify_goal.c"
    MR_bool check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__HeadVar__2_1 == check_hlds__simplify__simplify_goal__HeadVar__2_2);

#line 541 "check_hlds.simplify.simplify_goal.c"
    return check_hlds__simplify__simplify_goal__succeeded;
#line 543 "check_hlds.simplify.simplify_goal.c"
  }
#line 366 "simplify_goal.m"
}

#line 511 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__enforce_unreachability_invariant_4_p_0(
#line 511 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__GoalInfo0_5,
#line 511 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__GoalInfo_6,
#line 511 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14,
#line 511 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15)
#line 511 "simplify_goal.m"
{
#line 515 "simplify_goal.m"
  {
#line 515 "simplify_goal.m"
    MR_bool check_hlds__simplify__simplify_goal__succeeded;
#line 515 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__Determinism0_8;
#line 515 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__InstmapDelta0_9;
#line 515 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__CanFail0_10;
#line 515 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__NumSolns0_11;

#line 516 "simplify_goal.m"
    {
#line 516 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__Determinism0_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_5);
    }
#line 517 "simplify_goal.m"
    {
#line 517 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__InstmapDelta0_9 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_5);
    }
#line 518 "simplify_goal.m"
    {
#line 518 "simplify_goal.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal__Determinism0_8, &check_hlds__simplify__simplify_goal__CanFail0_10, &check_hlds__simplify__simplify_goal__NumSolns0_11);
    }
#line 520 "simplify_goal.m"
    check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__NumSolns0_11 == (MR_Integer) 0);
#line 520 "simplify_goal.m"
    if (check_hlds__simplify__simplify_goal__succeeded)
#line 521 "simplify_goal.m"
      {
#line 521 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(check_hlds__simplify__simplify_goal__InstmapDelta0_9);
      }
#line 527 "simplify_goal.m"
    if (check_hlds__simplify__simplify_goal__succeeded)
#line 523 "simplify_goal.m"
      {
#line 523 "simplify_goal.m"
        MR_Word check_hlds__simplify__simplify_goal__UnreachableInstMapDelta_12;

#line 523 "simplify_goal.m"
        {
#line 523 "simplify_goal.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(&check_hlds__simplify__simplify_goal__UnreachableInstMapDelta_12);
        }
#line 524 "simplify_goal.m"
        {
#line 524 "simplify_goal.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal__UnreachableInstMapDelta_12, check_hlds__simplify__simplify_goal__GoalInfo0_5, check_hlds__simplify__simplify_goal__GoalInfo_6);
        }
#line 526 "simplify_goal.m"
        {
#line 526 "simplify_goal.m"
          check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15);
#line 526 "simplify_goal.m"
          return;
        }
#line 523 "simplify_goal.m"
      }
#line 527 "simplify_goal.m"
    else
#line 534 "simplify_goal.m"
      {
#line 528 "simplify_goal.m"
        {
#line 528 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(check_hlds__simplify__simplify_goal__InstmapDelta0_9);
        }
#line 528 "simplify_goal.m"
        if (check_hlds__simplify__simplify_goal__succeeded)
#line 528 "simplify_goal.m"
          {
#line 529 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__NumSolns0_11 == (MR_Integer) 0);
#line 529 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__succeeded = !(check_hlds__simplify__simplify_goal__succeeded);
#line 528 "simplify_goal.m"
          }
#line 534 "simplify_goal.m"
        if (check_hlds__simplify__simplify_goal__succeeded)
#line 531 "simplify_goal.m"
          {
#line 531 "simplify_goal.m"
            MR_Word check_hlds__simplify__simplify_goal__Determinism_13;

#line 531 "simplify_goal.m"
            {
#line 531 "simplify_goal.m"
              parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__simplify__simplify_goal__Determinism_13, check_hlds__simplify__simplify_goal__CanFail0_10, (MR_Integer) 0);
            }
#line 532 "simplify_goal.m"
            {
#line 532 "simplify_goal.m"
              hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__simplify__simplify_goal__Determinism_13, check_hlds__simplify__simplify_goal__GoalInfo0_5, check_hlds__simplify__simplify_goal__GoalInfo_6);
            }
#line 533 "simplify_goal.m"
            {
#line 533 "simplify_goal.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15);
#line 533 "simplify_goal.m"
              return;
            }
#line 531 "simplify_goal.m"
          }
#line 534 "simplify_goal.m"
        else
#line 535 "simplify_goal.m"
          {
#line 535 "simplify_goal.m"
            *check_hlds__simplify__simplify_goal__GoalInfo_6 = check_hlds__simplify__simplify_goal__GoalInfo0_5;
#line 535 "simplify_goal.m"
            *check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14;
#line 535 "simplify_goal.m"
          }
#line 534 "simplify_goal.m"
      }
#line 515 "simplify_goal.m"
  }
#line 511 "simplify_goal.m"
}

#line 379 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0(
#line 379 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__BeforeAfter_6,
#line 379 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__GoalExpr_7,
#line 379 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__Info_8,
#line 379 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_10,
#line 379 "simplify_goal.m"
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_11)
#line 379 "simplify_goal.m"
{
#line 389 "simplify_goal.m"
  {
#line 389 "simplify_goal.m"
    MR_bool check_hlds__simplify__simplify_goal__succeeded;

#line 384 "simplify_goal.m"
    {
#line 384 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__succeeded = check_hlds__simplify__simplify_info__simplify_do_common_struct_1_p_0(check_hlds__simplify__simplify_goal__Info_8);
    }
#line 384 "simplify_goal.m"
    if (check_hlds__simplify__simplify_goal__succeeded)
#line 384 "simplify_goal.m"
      {
#line 385 "simplify_goal.m"
        {
#line 385 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__succeeded = check_hlds__simplify__simplify_info__simplify_do_extra_common_struct_1_p_0(check_hlds__simplify__simplify_goal__Info_8);
        }
#line 385 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__succeeded = !(check_hlds__simplify__simplify_goal__succeeded);
#line 384 "simplify_goal.m"
        if (check_hlds__simplify__simplify_goal__succeeded)
#line 401 "simplify_goal.m"
#line 401 "simplify_goal.m"
          switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr_7)) {
#line 401 "simplify_goal.m"
            default:
#line 401 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__succeeded = MR_FALSE;
#line 401 "simplify_goal.m"
              break;
#line 401 "simplify_goal.m"
            case (MR_Integer) 0:
#line 487 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__succeeded = MR_TRUE;
#line 401 "simplify_goal.m"
              break;
#line 401 "simplify_goal.m"
            case (MR_Integer) 1:
#line 401 "simplify_goal.m"
              {
#line 401 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__Unify_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 3)));
#line 401 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 0)));
#line 401 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));
#line 401 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 2)));
#line 401 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 4)));
#line 402 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__V_22_22;
#line 402 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__V_23_23;
#line 402 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__V_24_24;

#line 402 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__Unify_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Unify_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 402 "simplify_goal.m"
                if (check_hlds__simplify__simplify_goal__succeeded)
#line 402 "simplify_goal.m"
                  {
#line 402 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Unify_20, (MR_Integer) 1)));
#line 402 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Unify_20, (MR_Integer) 2)));
#line 402 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Unify_20, (MR_Integer) 3)));
#line 402 "simplify_goal.m"
                  }
#line 401 "simplify_goal.m"
              }
#line 401 "simplify_goal.m"
              break;
#line 401 "simplify_goal.m"
            case (MR_Integer) 2:
#line 408 "simplify_goal.m"
              {
#line 408 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__BuiltinState_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 3)));
#line 408 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 0)));
#line 408 "simplify_goal.m"
                MR_Integer check_hlds__simplify__simplify_goal__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));
#line 408 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 2)));
#line 408 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 4)));
#line 408 "simplify_goal.m"
                MR_Word check_hlds__simplify__simplify_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 5)));

#line 412 "simplify_goal.m"
#line 412 "simplify_goal.m"
                switch (check_hlds__simplify__simplify_goal__BuiltinState_28) {
#line 412 "simplify_goal.m"
                  default:
#line 412 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal__succeeded = MR_FALSE;
#line 412 "simplify_goal.m"
                    break;
#line 412 "simplify_goal.m"
                  case (MR_Integer) 2:
#line 412 "simplify_goal.m"
                  case (MR_Integer) 1:
#line 808 "check_hlds.simplify.simplify_goal.c"
                    check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 1);
#line 412 "simplify_goal.m"
                    break;
#line 412 "simplify_goal.m"
                }
#line 408 "simplify_goal.m"
              }
#line 401 "simplify_goal.m"
              break;
#line 401 "simplify_goal.m"
            case (MR_Integer) 3:
#line 401 "simplify_goal.m"
#line 401 "simplify_goal.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 0)))) {
#line 401 "simplify_goal.m"
                default:
#line 401 "simplify_goal.m"
                  check_hlds__simplify__simplify_goal__succeeded = MR_FALSE;
#line 401 "simplify_goal.m"
                  break;
#line 401 "simplify_goal.m"
                case (MR_Integer) 0:
#line 425 "simplify_goal.m"
                  {
#line 425 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__GenericCall_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));
#line 425 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__WillFlush0_40;
#line 425 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 2)));
#line 425 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 3)));
#line 425 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 4)));
#line 425 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 5)));

#line 429 "simplify_goal.m"
#line 429 "simplify_goal.m"
                    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GenericCall_31)) {
#line 429 "simplify_goal.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 429 "simplify_goal.m"
                      case (MR_Integer) 0:
#line 428 "simplify_goal.m"
                        check_hlds__simplify__simplify_goal__WillFlush0_40 = (MR_Integer) 1;
#line 429 "simplify_goal.m"
                        break;
#line 429 "simplify_goal.m"
                      case (MR_Integer) 1:
#line 431 "simplify_goal.m"
                        check_hlds__simplify__simplify_goal__WillFlush0_40 = (MR_Integer) 1;
#line 429 "simplify_goal.m"
                        break;
#line 429 "simplify_goal.m"
                      case (MR_Integer) 2:
#line 434 "simplify_goal.m"
                        check_hlds__simplify__simplify_goal__WillFlush0_40 = (MR_Integer) 0;
#line 429 "simplify_goal.m"
                        break;
#line 429 "simplify_goal.m"
                      case (MR_Integer) 3:
#line 437 "simplify_goal.m"
                        check_hlds__simplify__simplify_goal__WillFlush0_40 = (MR_Integer) 0;
#line 429 "simplify_goal.m"
                        break;
#line 429 "simplify_goal.m"
                    }
#line 877 "check_hlds.simplify.simplify_goal.c"
                    check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 1);
#line 425 "simplify_goal.m"
                    if (check_hlds__simplify__simplify_goal__succeeded)
#line 386 "simplify_goal.m"
                      check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__WillFlush0_40 == (MR_Integer) 1);
#line 425 "simplify_goal.m"
                  }
#line 401 "simplify_goal.m"
                  break;
#line 401 "simplify_goal.m"
                case (MR_Integer) 1:
#line 889 "check_hlds.simplify.simplify_goal.c"
                  check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 1);
#line 401 "simplify_goal.m"
                  break;
#line 401 "simplify_goal.m"
                case (MR_Integer) 2:
#line 456 "simplify_goal.m"
                  {
#line 456 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__ConjType_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));
#line 456 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 2)));

#line 902 "check_hlds.simplify.simplify_goal.c"
                    check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__ConjType_54 == (MR_Integer) 1);
#line 456 "simplify_goal.m"
                  }
#line 401 "simplify_goal.m"
                  break;
#line 401 "simplify_goal.m"
                case (MR_Integer) 3:
#line 910 "check_hlds.simplify.simplify_goal.c"
                  check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 0);
#line 401 "simplify_goal.m"
                  break;
#line 401 "simplify_goal.m"
                case (MR_Integer) 6:
#line 916 "check_hlds.simplify.simplify_goal.c"
                  check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 0);
#line 401 "simplify_goal.m"
                  break;
#line 401 "simplify_goal.m"
                case (MR_Integer) 7:
#line 492 "simplify_goal.m"
                  {
#line 492 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__ShortHand_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));

#line 496 "simplify_goal.m"
#line 496 "simplify_goal.m"
                    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal__ShortHand_67)) {
#line 496 "simplify_goal.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 496 "simplify_goal.m"
                      case (MR_Integer) 0:
#line 500 "simplify_goal.m"
                        {
#line 502 "simplify_goal.m"
                          {
#line 502 "simplify_goal.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal", (MR_String) "function \140check_hlds.simplify.simplify_goal.will_flush\'/2", (MR_String) "bi_implication");
#line 502 "simplify_goal.m"
                            return;
                          }
#line 500 "simplify_goal.m"
                        }
#line 496 "simplify_goal.m"
                        break;
#line 496 "simplify_goal.m"
                      case (MR_Integer) 1:
#line 495 "simplify_goal.m"
                        {
#line 495 "simplify_goal.m"
                        }
#line 496 "simplify_goal.m"
                        break;
#line 496 "simplify_goal.m"
                      case (MR_Integer) 2:
#line 498 "simplify_goal.m"
                        {
#line 498 "simplify_goal.m"
                        }
#line 496 "simplify_goal.m"
                        break;
#line 496 "simplify_goal.m"
                    }
#line 492 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal__succeeded = MR_TRUE;
#line 492 "simplify_goal.m"
                  }
#line 401 "simplify_goal.m"
                  break;
#line 401 "simplify_goal.m"
              }
#line 401 "simplify_goal.m"
              break;
#line 401 "simplify_goal.m"
          }
#line 384 "simplify_goal.m"
      }
#line 389 "simplify_goal.m"
    if (check_hlds__simplify__simplify_goal__succeeded)
#line 388 "simplify_goal.m"
      {
#line 388 "simplify_goal.m"
        check_hlds__simplify__common__common_info_clear_structs_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_10, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_11);
#line 388 "simplify_goal.m"
        return;
      }
#line 389 "simplify_goal.m"
    else
#line 389 "simplify_goal.m"
      *check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_11 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_10;
#line 389 "simplify_goal.m"
  }
#line 379 "simplify_goal.m"
}

#line 287 "simplify_goal.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal__goal_is_call_to_builtin_false_1_p_0(
#line 287 "simplify_goal.m"
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__1_1)
#line 287 "simplify_goal.m"
{
#line 289 "simplify_goal.m"
  {
#line 289 "simplify_goal.m"
    MR_bool check_hlds__simplify__simplify_goal__succeeded;
#line 289 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__HeadVar__1_1, (MR_Integer) 0)));
#line 289 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__SymName_9;
#line 289 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__V_10_10;
#line 289 "simplify_goal.m"
    MR_String check_hlds__simplify__simplify_goal__V_11_11;
#line 289 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__V_12_12;
#line 289 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__V_4_4;
#line 290 "simplify_goal.m"
    MR_Integer check_hlds__simplify__simplify_goal__V_5_5;
#line 290 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__V_6_6;
#line 290 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__V_7_7;
#line 290 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__V_8_8;

#line 290 "simplify_goal.m"
    check_hlds__simplify__simplify_goal__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr_2)) == (MR_mktag((MR_Integer) 2)));
#line 290 "simplify_goal.m"
    if (check_hlds__simplify__simplify_goal__succeeded)
#line 290 "simplify_goal.m"
      {
#line 290 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 0)));
#line 290 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 1)));
#line 290 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 2)));
#line 290 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 3)));
#line 290 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 4)));
#line 290 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 5)));
#line 291 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__SymName_9)) == (MR_mktag((MR_Integer) 1)));
#line 291 "simplify_goal.m"
        if (check_hlds__simplify__simplify_goal__succeeded)
#line 291 "simplify_goal.m"
          {
#line 291 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__SymName_9, (MR_Integer) 0)));
#line 291 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__SymName_9, (MR_Integer) 1)));
#line 291 "simplify_goal.m"
            {
#line 291 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__V_12_12 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 291 "simplify_goal.m"
            {
#line 291 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__simplify_goal__V_10_10, check_hlds__simplify__simplify_goal__V_12_12);
            }
#line 289 "simplify_goal.m"
            if (check_hlds__simplify__simplify_goal__succeeded)
#line 291 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__succeeded = (strcmp(check_hlds__simplify__simplify_goal__V_11_11, (MR_String) "false") == 0);
#line 291 "simplify_goal.m"
          }
#line 290 "simplify_goal.m"
      }
#line 289 "simplify_goal.m"
    return check_hlds__simplify__simplify_goal__succeeded;
#line 289 "simplify_goal.m"
  }
#line 287 "simplify_goal.m"
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
#line 549 "simplify_goal.m"
  {
#line 549 "simplify_goal.m"
    MR_bool check_hlds__simplify__simplify_goal__succeeded;
#line 543 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__InnerDet_14;
#line 543 "simplify_goal.m"
    MR_Word check_hlds__simplify__simplify_goal__OuterDet_15;

#line 543 "simplify_goal.m"
    {
#line 543 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__InnerDet_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal__InnerGoalInfo_9);
    }
#line 544 "simplify_goal.m"
    {
#line 544 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__OuterDet_15 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal__OuterGoalInfo_8);
    }
#line 545 "simplify_goal.m"
    check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__InnerDet_14 == check_hlds__simplify__simplify_goal__OuterDet_15);
#line 549 "simplify_goal.m"
    if (check_hlds__simplify__simplify_goal__succeeded)
#line 547 "simplify_goal.m"
      {
#line 547 "simplify_goal.m"
        *check_hlds__simplify__simplify_goal__GoalExpr_11 = check_hlds__simplify__simplify_goal__GoalExpr1_10;
#line 548 "simplify_goal.m"
        *check_hlds__simplify__simplify_goal__GoalInfo_12 = check_hlds__simplify__simplify_goal__InnerGoalInfo_9;
#line 547 "simplify_goal.m"
        *check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_17 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_16;
#line 547 "simplify_goal.m"
      }
#line 549 "simplify_goal.m"
    else
#line 551 "simplify_goal.m"
      {
#line 551 "simplify_goal.m"
        MR_Word check_hlds__simplify__simplify_goal__V_20_20;

#line 551 "simplify_goal.m"
        {
#line 551 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 551 "simplify_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__V_20_20, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal__GoalExpr1_10));
#line 551 "simplify_goal.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__V_20_20, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal__InnerGoalInfo_9));
#line 551 "simplify_goal.m"
        }
#line 550 "simplify_goal.m"
        {
#line 550 "simplify_goal.m"
          MR_Word base;
#line 550 "simplify_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 550 "simplify_goal.m"
          *check_hlds__simplify__simplify_goal__GoalExpr_11 = base;
#line 550 "simplify_goal.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 550 "simplify_goal.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[14])));
#line 550 "simplify_goal.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal__V_20_20));
#line 550 "simplify_goal.m"
        }
#line 552 "simplify_goal.m"
        *check_hlds__simplify__simplify_goal__GoalInfo_12 = check_hlds__simplify__simplify_goal__OuterGoalInfo_8;
#line 553 "simplify_goal.m"
        {
#line 553 "simplify_goal.m"
          check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_16, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_17);
#line 553 "simplify_goal.m"
          return;
        }
#line 551 "simplify_goal.m"
      }
#line 549 "simplify_goal.m"
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
#line 298 "simplify_goal.m"
  {
#line 298 "simplify_goal.m"
    MR_bool check_hlds__simplify__simplify_goal__succeeded;

#line 298 "simplify_goal.m"
#line 298 "simplify_goal.m"
    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66)) {
#line 298 "simplify_goal.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 298 "simplify_goal.m"
      case (MR_Integer) 0:
#line 322 "simplify_goal.m"
        {
#line 322 "simplify_goal.m"
          check_hlds__simplify__simplify_goal_ite__simplify_goal_neg_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 322 "simplify_goal.m"
          return;
        }
#line 298 "simplify_goal.m"
        break;
#line 298 "simplify_goal.m"
      case (MR_Integer) 1:
#line 330 "simplify_goal.m"
        {
#line 330 "simplify_goal.m"
          check_hlds__simplify__simplify_goal_unify__simplify_goal_unify_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 330 "simplify_goal.m"
          return;
        }
#line 298 "simplify_goal.m"
        break;
#line 298 "simplify_goal.m"
      case (MR_Integer) 2:
#line 334 "simplify_goal.m"
        {
#line 334 "simplify_goal.m"
          check_hlds__simplify__simplify_goal_call__simplify_goal_plain_call_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 334 "simplify_goal.m"
          return;
        }
#line 298 "simplify_goal.m"
        break;
#line 298 "simplify_goal.m"
      case (MR_Integer) 3:
#line 298 "simplify_goal.m"
#line 298 "simplify_goal.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0)))) {
#line 298 "simplify_goal.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 298 "simplify_goal.m"
          case (MR_Integer) 0:
#line 338 "simplify_goal.m"
            {
#line 338 "simplify_goal.m"
              check_hlds__simplify__simplify_goal_call__simplify_goal_generic_call_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 338 "simplify_goal.m"
              return;
            }
#line 298 "simplify_goal.m"
            break;
#line 298 "simplify_goal.m"
          case (MR_Integer) 1:
#line 342 "simplify_goal.m"
            {
#line 342 "simplify_goal.m"
              check_hlds__simplify__simplify_goal_call__simplify_goal_foreign_proc_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 342 "simplify_goal.m"
              return;
            }
#line 298 "simplify_goal.m"
            break;
#line 298 "simplify_goal.m"
          case (MR_Integer) 2:
#line 298 "simplify_goal.m"
            {
#line 298 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 1)));
#line 298 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 2)));

#line 303 "simplify_goal.m"
#line 303 "simplify_goal.m"
              switch (check_hlds__simplify__simplify_goal__ConjType_17) {
#line 303 "simplify_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 303 "simplify_goal.m"
                case (MR_Integer) 1:
#line 305 "simplify_goal.m"
                  {
#line 305 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal_conj__simplify_goal_parallel_conj_10_p_0(check_hlds__simplify__simplify_goal__Goals_18, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 305 "simplify_goal.m"
                    return;
                  }
#line 303 "simplify_goal.m"
                  break;
#line 303 "simplify_goal.m"
                case (MR_Integer) 0:
#line 301 "simplify_goal.m"
                  {
#line 301 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(check_hlds__simplify__simplify_goal__Goals_18, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 301 "simplify_goal.m"
                    return;
                  }
#line 303 "simplify_goal.m"
                  break;
#line 303 "simplify_goal.m"
              }
#line 298 "simplify_goal.m"
            }
#line 298 "simplify_goal.m"
            break;
#line 298 "simplify_goal.m"
          case (MR_Integer) 3:
#line 310 "simplify_goal.m"
            {
#line 310 "simplify_goal.m"
              check_hlds__simplify__simplify_goal_disj__simplify_goal_disj_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 310 "simplify_goal.m"
              return;
            }
#line 298 "simplify_goal.m"
            break;
#line 298 "simplify_goal.m"
          case (MR_Integer) 4:
#line 314 "simplify_goal.m"
            {
#line 314 "simplify_goal.m"
              check_hlds__simplify__simplify_goal_switch__simplify_goal_switch_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 314 "simplify_goal.m"
              return;
            }
#line 298 "simplify_goal.m"
            break;
#line 298 "simplify_goal.m"
          case (MR_Integer) 5:
#line 326 "simplify_goal.m"
            {
#line 326 "simplify_goal.m"
              check_hlds__simplify__simplify_goal_scope__simplify_goal_scope_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 326 "simplify_goal.m"
              return;
            }
#line 298 "simplify_goal.m"
            break;
#line 298 "simplify_goal.m"
          case (MR_Integer) 6:
#line 318 "simplify_goal.m"
            {
#line 318 "simplify_goal.m"
              check_hlds__simplify__simplify_goal_ite__simplify_goal_ite_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 318 "simplify_goal.m"
              return;
            }
#line 298 "simplify_goal.m"
            break;
#line 298 "simplify_goal.m"
          case (MR_Integer) 7:
#line 345 "simplify_goal.m"
            {
#line 345 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__ShortHand0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 1)));

#line 353 "simplify_goal.m"
#line 353 "simplify_goal.m"
              switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal__ShortHand0_53)) {
#line 353 "simplify_goal.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 353 "simplify_goal.m"
                case (MR_Integer) 0:
#line 358 "simplify_goal.m"
                  {
#line 360 "simplify_goal.m"
                    {
#line 360 "simplify_goal.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal", (MR_String) "predicate \140check_hlds.simplify.simplify_goal.simplify_goal_expr\'/10", (MR_String) "bi_implication");
#line 360 "simplify_goal.m"
                      return;
                    }
#line 358 "simplify_goal.m"
                  }
#line 353 "simplify_goal.m"
                  break;
#line 353 "simplify_goal.m"
                case (MR_Integer) 1:
#line 348 "simplify_goal.m"
                  {
#line 348 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__GoalType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 0)));
#line 348 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__Outer_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 1)));
#line 348 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__Inner_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 2)));
#line 348 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__MaybeOutputVars_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 3)));
#line 348 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__MainGoal_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 4)));
#line 348 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__OrElseGoals_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 5)));
#line 348 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__OrElseInners_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 6)));

#line 349 "simplify_goal.m"
                    {
#line 349 "simplify_goal.m"
                      check_hlds__simplify__simplify_goal_disj__simplify_goal_atomic_goal_16_p_0(check_hlds__simplify__simplify_goal__GoalType_54, check_hlds__simplify__simplify_goal__Outer_55, check_hlds__simplify__simplify_goal__Inner_56, check_hlds__simplify__simplify_goal__MaybeOutputVars_57, check_hlds__simplify__simplify_goal__MainGoal_58, check_hlds__simplify__simplify_goal__OrElseGoals_59, check_hlds__simplify__simplify_goal__OrElseInners_60, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
#line 349 "simplify_goal.m"
                      return;
                    }
#line 348 "simplify_goal.m"
                  }
#line 353 "simplify_goal.m"
                  break;
#line 353 "simplify_goal.m"
                case (MR_Integer) 2:
#line 354 "simplify_goal.m"
                  {
#line 356 "simplify_goal.m"
                    {
#line 356 "simplify_goal.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal", (MR_String) "predicate \140check_hlds.simplify.simplify_goal.simplify_goal_expr\'/10", (MR_String) "try_goal");
#line 356 "simplify_goal.m"
                      return;
                    }
#line 354 "simplify_goal.m"
                  }
#line 353 "simplify_goal.m"
                  break;
#line 353 "simplify_goal.m"
              }
#line 345 "simplify_goal.m"
            }
#line 298 "simplify_goal.m"
            break;
#line 298 "simplify_goal.m"
        }
#line 298 "simplify_goal.m"
        break;
#line 298 "simplify_goal.m"
    }
#line 298 "simplify_goal.m"
  }
#line 54 "simplify_goal.m"
}

#line 147 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_1(
#line 147 "simplify_goal.m"
  void * check_hlds__simplify__simplify_goal__env_ptr_arg)
#line 147 "simplify_goal.m"
{
#line 147 "simplify_goal.m"
  {
#line 147 "simplify_goal.m"
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * check_hlds__simplify__simplify_goal__env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) check_hlds__simplify__simplify_goal__env_ptr_arg;

#line 147 "simplify_goal.m"
    MR_builtin_longjmp((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0, 1);
#line 147 "simplify_goal.m"
  }
#line 147 "simplify_goal.m"
}

#line 147 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_2(
#line 147 "simplify_goal.m"
  void * check_hlds__simplify__simplify_goal__env_ptr_arg)
#line 147 "simplify_goal.m"
{
#line 147 "simplify_goal.m"
  {
#line 147 "simplify_goal.m"
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * check_hlds__simplify__simplify_goal__env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) check_hlds__simplify__simplify_goal__env_ptr_arg;

#line 148 "simplify_goal.m"
    {
#line 148 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25, (MR_Integer) 0)));
#line 148 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__V_66_66;
#line 148 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25, (MR_Integer) 1)));

#line 148 "simplify_goal.m"
      (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__V_65_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_65_65, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 148 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 148 "simplify_goal.m"
        {
#line 148 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_65_65, (MR_Integer) 1)));
#line 148 "simplify_goal.m"
          (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "simplify_goal.m"
        }
#line 148 "simplify_goal.m"
    }
#line 149 "simplify_goal.m"
    if (!((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
#line 149 "simplify_goal.m"
      {
#line 149 "simplify_goal.m"
        (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal__goal_is_call_to_builtin_false_1_p_0((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25);
      }
#line 149 "simplify_goal.m"
    if ((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 149 "simplify_goal.m"
      {
#line 149 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_1(check_hlds__simplify__simplify_goal__env_ptr);
#line 149 "simplify_goal.m"
        return;
      }
#line 147 "simplify_goal.m"
  }
#line 147 "simplify_goal.m"
}

#line 147 "simplify_goal.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_3(
#line 147 "simplify_goal.m"
  void * check_hlds__simplify__simplify_goal__env_ptr_arg)
#line 147 "simplify_goal.m"
{
#line 147 "simplify_goal.m"
  {
#line 147 "simplify_goal.m"
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * check_hlds__simplify__simplify_goal__env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) check_hlds__simplify__simplify_goal__env_ptr_arg;

#line 147 "simplify_goal.m"
    if (MR_builtin_setjmp((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0) == 0)
#line 147 "simplify_goal.m"
      {
#line 147 "simplify_goal.m"
        {
#line 147 "simplify_goal.m"
          hlds__goal_util__goal_contains_goal_2_p_0((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &(check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25, check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_2, check_hlds__simplify__simplify_goal__env_ptr);
        }
#line 147 "simplify_goal.m"
        (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
#line 147 "simplify_goal.m"
      }
#line 147 "simplify_goal.m"
    else
#line 147 "simplify_goal.m"
      (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
#line 147 "simplify_goal.m"
  }
#line 147 "simplify_goal.m"
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
#line 107 "simplify_goal.m"
    {
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, (MR_Integer) 1)));
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__NestedContext_17;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Detism_19;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__ModuleInfo0_20;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Goal0CanLoopOrThrow_21;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__ModuleInfo_22;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Purity_23;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Goal1_34;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Goal2_42;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Goal3_48;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__GoalExpr3_49;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo3_50;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__GoalExpr4_51;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo4_52;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo_53;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_62_62;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_103_103;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_112_112;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_113_113;
#line 107 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_114_114;
#line 108 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, (MR_Integer) 0)));
#line 260 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Reason1_39;
#line 260 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__SomeGoal1_40;
#line 260 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo1_41;
#line 258 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__V_108_108;
#line 274 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__SomeGoal2_44;
#line 264 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__Reason2_43;
#line 264 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal__V_109_109;
#line 265 "simplify_goal.m"
      MR_Word check_hlds__simplify__simplify_goal___GoalInfo2_45;

#line 109 "simplify_goal.m"
      {
#line 109 "simplify_goal.m"
        (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__simplify__simplify_goal__GoalInfo0_16, (MR_Integer) 13);
      }
#line 111 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 110 "simplify_goal.m"
        {
#line 110 "simplify_goal.m"
          MR_Integer check_hlds__simplify__simplify_goal__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext0_11, (MR_Integer) 1)));
#line 110 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext0_11, (MR_Integer) 2)));
#line 110 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext0_11, (MR_Integer) 0)));

#line 110 "simplify_goal.m"
          {
#line 110 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__NestedContext_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 110 "simplify_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext_17, 0) = ((MR_Box) ((MR_Integer) 1));
#line 110 "simplify_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext_17, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal__V_125_125));
#line 110 "simplify_goal.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext_17, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal__V_126_126));
#line 110 "simplify_goal.m"
          }
#line 110 "simplify_goal.m"
        }
#line 111 "simplify_goal.m"
      else
#line 112 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__NestedContext_17 = check_hlds__simplify__simplify_goal__NestedContext0_11;
#line 114 "simplify_goal.m"
      {
#line 114 "simplify_goal.m"
        (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__simplify__simplify_goal__GoalInfo0_16, (MR_Integer) 17);
      }
#line 117 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 115 "simplify_goal.m"
        {
#line 115 "simplify_goal.m"
          {
#line 115 "simplify_goal.m"
            check_hlds__simplify__simplify_info__simplify_info_set_found_contains_trace_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_56, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_62_62);
          }
#line 116 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18 = (MR_Integer) 0;
#line 115 "simplify_goal.m"
        }
#line 117 "simplify_goal.m"
      else
#line 118 "simplify_goal.m"
        {
#line 118 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18 = (MR_Integer) 1;
#line 118 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_62_62 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_56;
#line 118 "simplify_goal.m"
        }
#line 120 "simplify_goal.m"
      {
#line 120 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__Detism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
      }
#line 121 "simplify_goal.m"
      {
#line 121 "simplify_goal.m"
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_62_62, &check_hlds__simplify__simplify_goal__ModuleInfo0_20);
      }
#line 122 "simplify_goal.m"
      {
#line 122 "simplify_goal.m"
        hlds__goal_form__goal_can_loop_or_throw_4_p_0((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &check_hlds__simplify__simplify_goal__Goal0CanLoopOrThrow_21, check_hlds__simplify__simplify_goal__ModuleInfo0_20, &check_hlds__simplify__simplify_goal__ModuleInfo_22);
      }
#line 124 "simplify_goal.m"
      {
#line 124 "simplify_goal.m"
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal__ModuleInfo_22, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_62_62, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63);
      }
#line 125 "simplify_goal.m"
      {
#line 125 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__Purity_23 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
      }
#line 130 "simplify_goal.m"
      (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Detism_19 == (MR_Integer) 7);
#line 130 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 130 "simplify_goal.m"
        {
#line 132 "simplify_goal.m"
#line 132 "simplify_goal.m"
          switch (check_hlds__simplify__simplify_goal__Purity_23) {
#line 132 "simplify_goal.m"
            default:
#line 132 "simplify_goal.m"
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
#line 132 "simplify_goal.m"
              break;
#line 132 "simplify_goal.m"
            case (MR_Integer) 0:
#line 131 "simplify_goal.m"
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
#line 132 "simplify_goal.m"
              break;
#line 132 "simplify_goal.m"
            case (MR_Integer) 1:
#line 132 "simplify_goal.m"
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
#line 132 "simplify_goal.m"
              break;
#line 132 "simplify_goal.m"
          }
#line 130 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 130 "simplify_goal.m"
            {
#line 134 "simplify_goal.m"
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18 == (MR_Integer) 1);
#line 130 "simplify_goal.m"
              if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 130 "simplify_goal.m"
                {
#line 135 "simplify_goal.m"
                  {
#line 135 "simplify_goal.m"
                    MR_Word check_hlds__simplify__simplify_goal__V_129_129;

#line 135 "simplify_goal.m"
                    {
#line 135 "simplify_goal.m"
                      check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63, &check_hlds__simplify__simplify_goal__V_129_129);
                    }
#line 135 "simplify_goal.m"
                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 0 == check_hlds__simplify__simplify_goal__V_129_129);
#line 135 "simplify_goal.m"
                  }
#line 136 "simplify_goal.m"
                  if (!((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
#line 136 "simplify_goal.m"
                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Goal0CanLoopOrThrow_21 == (MR_Integer) 1);
#line 130 "simplify_goal.m"
                }
#line 130 "simplify_goal.m"
            }
#line 130 "simplify_goal.m"
        }
#line 181 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 143 "simplify_goal.m"
        {
#line 143 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__Context_24;
#line 143 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__NonLocals0_32;
#line 143 "simplify_goal.m"
          MR_Integer check_hlds__simplify__simplify_goal__CostDelta_33;
#line 143 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_101_101;
#line 143 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102;

#line 143 "simplify_goal.m"
          {
#line 143 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
          }
#line 145 "simplify_goal.m"
          {
#line 145 "simplify_goal.m"
            (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63);
          }
#line 145 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 145 "simplify_goal.m"
            {
#line 147 "simplify_goal.m"
              {
#line 147 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_3(&check_hlds__simplify__simplify_goal__env);
              }
#line 146 "simplify_goal.m"
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded);
#line 145 "simplify_goal.m"
            }
#line 167 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 153 "simplify_goal.m"
            {
#line 153 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__Msg_29;
#line 153 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__Spec_31;
#line 153 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__V_99_99;

#line 158 "simplify_goal.m"
              {
#line 158 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 158 "simplify_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Msg_29, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal__Context_24));
#line 158 "simplify_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Msg_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[13])));
#line 158 "simplify_goal.m"
              }
#line 165 "simplify_goal.m"
              {
#line 165 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "simplify_goal.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__V_99_99, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal__Msg_29));
#line 165 "simplify_goal.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 165 "simplify_goal.m"
              }
#line 164 "simplify_goal.m"
              {
#line 164 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 164 "simplify_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_3[0])));
#line 164 "simplify_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_scalar_common_2[2])));
#line 164 "simplify_goal.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Spec_31, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal__V_99_99));
#line 164 "simplify_goal.m"
              }
#line 166 "simplify_goal.m"
              {
#line 166 "simplify_goal.m"
                check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal__Spec_31, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_101_101);
              }
#line 153 "simplify_goal.m"
            }
#line 167 "simplify_goal.m"
          else
#line 167 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_101_101 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63;
#line 172 "simplify_goal.m"
          {
#line 172 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__NonLocals0_32 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
          }
#line 173 "simplify_goal.m"
          {
#line 173 "simplify_goal.m"
            (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal__NonLocals0_32);
          }
#line 175 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 175 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_101_101;
#line 175 "simplify_goal.m"
          else
#line 176 "simplify_goal.m"
            {
#line 176 "simplify_goal.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_101_101, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102);
            }
#line 178 "simplify_goal.m"
          {
#line 178 "simplify_goal.m"
            transform_hlds__pd_cost__goal_cost_2_p_0((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &check_hlds__simplify__simplify_goal__CostDelta_33);
          }
#line 179 "simplify_goal.m"
          {
#line 179 "simplify_goal.m"
            check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__simplify_goal__CostDelta_33, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_103_103);
          }
#line 180 "simplify_goal.m"
          {
#line 180 "simplify_goal.m"
            check_hlds__simplify__simplify_goal__Goal1_34 = hlds__make_goal__fail_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal__Context_24);
          }
#line 143 "simplify_goal.m"
        }
#line 181 "simplify_goal.m"
      else
#line 251 "simplify_goal.m"
        {
#line 188 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__MaxSoln_35;
#line 188 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__InstMapDelta_36;
#line 188 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__NonLocalVars_37;
#line 188 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__VarTypes_38;
#line 188 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__V_130_130;
#line 188 "simplify_goal.m"
          MR_Word check_hlds__simplify__simplify_goal__V_131_131;

#line 188 "simplify_goal.m"
          {
#line 188 "simplify_goal.m"
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal__Detism_19, &check_hlds__simplify__simplify_goal__V_130_130, &check_hlds__simplify__simplify_goal__MaxSoln_35);
          }
#line 188 "simplify_goal.m"
          (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 1 == check_hlds__simplify__simplify_goal__V_130_130);
#line 188 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 188 "simplify_goal.m"
            {
#line 189 "simplify_goal.m"
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__MaxSoln_35 == (MR_Integer) 0);
#line 189 "simplify_goal.m"
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded);
#line 188 "simplify_goal.m"
              if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 188 "simplify_goal.m"
                {
#line 190 "simplify_goal.m"
                  {
#line 190 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal__InstMapDelta_36 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
                  }
#line 191 "simplify_goal.m"
                  {
#line 191 "simplify_goal.m"
                    check_hlds__simplify__simplify_goal__NonLocalVars_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
                  }
#line 192 "simplify_goal.m"
                  {
#line 192 "simplify_goal.m"
                    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63, &check_hlds__simplify__simplify_goal__V_131_131);
                  }
#line 192 "simplify_goal.m"
                  {
#line 192 "simplify_goal.m"
                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__simplify__simplify_goal__ModuleInfo_22, check_hlds__simplify__simplify_goal__V_131_131);
                  }
#line 188 "simplify_goal.m"
                  if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 188 "simplify_goal.m"
                    {
#line 193 "simplify_goal.m"
                      {
#line 193 "simplify_goal.m"
                        check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63, &check_hlds__simplify__simplify_goal__VarTypes_38);
                      }
#line 194 "simplify_goal.m"
                      {
#line 194 "simplify_goal.m"
                        (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__instmap__instmap_delta_no_output_vars_5_p_0(check_hlds__simplify__simplify_goal__ModuleInfo_22, check_hlds__simplify__simplify_goal__VarTypes_38, check_hlds__simplify__simplify_goal__InstMap0_12, check_hlds__simplify__simplify_goal__InstMapDelta_36, check_hlds__simplify__simplify_goal__NonLocalVars_37);
                      }
#line 188 "simplify_goal.m"
                      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 188 "simplify_goal.m"
                        {
#line 197 "simplify_goal.m"
#line 197 "simplify_goal.m"
                          switch (check_hlds__simplify__simplify_goal__Purity_23) {
#line 197 "simplify_goal.m"
                            default:
#line 197 "simplify_goal.m"
                              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
#line 197 "simplify_goal.m"
                              break;
#line 197 "simplify_goal.m"
                            case (MR_Integer) 0:
#line 196 "simplify_goal.m"
                              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
#line 197 "simplify_goal.m"
                              break;
#line 197 "simplify_goal.m"
                            case (MR_Integer) 1:
#line 197 "simplify_goal.m"
                              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
#line 197 "simplify_goal.m"
                              break;
#line 197 "simplify_goal.m"
                          }
#line 188 "simplify_goal.m"
                          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 188 "simplify_goal.m"
                            {
#line 199 "simplify_goal.m"
                              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18 == (MR_Integer) 1);
#line 188 "simplify_goal.m"
                              if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 188 "simplify_goal.m"
                                {
#line 200 "simplify_goal.m"
                                  {
#line 200 "simplify_goal.m"
                                    MR_Word check_hlds__simplify__simplify_goal__V_132_132;

#line 200 "simplify_goal.m"
                                    {
#line 200 "simplify_goal.m"
                                      check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63, &check_hlds__simplify__simplify_goal__V_132_132);
                                    }
#line 200 "simplify_goal.m"
                                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 0 == check_hlds__simplify__simplify_goal__V_132_132);
#line 200 "simplify_goal.m"
                                  }
#line 201 "simplify_goal.m"
                                  if (!((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
#line 201 "simplify_goal.m"
                                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Goal0CanLoopOrThrow_21 == (MR_Integer) 1);
#line 188 "simplify_goal.m"
                                }
#line 188 "simplify_goal.m"
                            }
#line 188 "simplify_goal.m"
                        }
#line 188 "simplify_goal.m"
                    }
#line 188 "simplify_goal.m"
                }
#line 188 "simplify_goal.m"
            }
#line 251 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 241 "simplify_goal.m"
            {
#line 241 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_106_106;
#line 241 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__Context_118;
#line 241 "simplify_goal.m"
              MR_Word check_hlds__simplify__simplify_goal__NonLocals0_119;
#line 241 "simplify_goal.m"
              MR_Integer check_hlds__simplify__simplify_goal__CostDelta_120;

#line 241 "simplify_goal.m"
              {
#line 241 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__NonLocals0_119 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
              }
#line 242 "simplify_goal.m"
              {
#line 242 "simplify_goal.m"
                (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal__NonLocals0_119);
              }
#line 244 "simplify_goal.m"
              if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 244 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_106_106 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63;
#line 244 "simplify_goal.m"
              else
#line 245 "simplify_goal.m"
                {
#line 245 "simplify_goal.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_106_106);
                }
#line 247 "simplify_goal.m"
              {
#line 247 "simplify_goal.m"
                transform_hlds__pd_cost__goal_cost_2_p_0((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &check_hlds__simplify__simplify_goal__CostDelta_120);
              }
#line 248 "simplify_goal.m"
              {
#line 248 "simplify_goal.m"
                check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__simplify_goal__CostDelta_120, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_106_106, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_103_103);
              }
#line 249 "simplify_goal.m"
              {
#line 249 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__Context_118 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
              }
#line 250 "simplify_goal.m"
              {
#line 250 "simplify_goal.m"
                check_hlds__simplify__simplify_goal__Goal1_34 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal__Context_118);
              }
#line 241 "simplify_goal.m"
            }
#line 251 "simplify_goal.m"
          else
#line 252 "simplify_goal.m"
            {
#line 252 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__Goal1_34 = (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9;
#line 252 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_103_103 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63;
#line 252 "simplify_goal.m"
            }
#line 251 "simplify_goal.m"
        }
#line 258 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal1_34, (MR_Integer) 0)));
#line 258 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__GoalInfo1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal1_34, (MR_Integer) 1)));
#line 258 "simplify_goal.m"
      (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__V_108_108)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_108_108, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 258 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 258 "simplify_goal.m"
        {
#line 258 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__Reason1_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_108_108, (MR_Integer) 1)));
#line 258 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__SomeGoal1_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_108_108, (MR_Integer) 2)));
#line 259 "simplify_goal.m"
          {
#line 259 "simplify_goal.m"
            check_hlds__simplify__simplify_goal_scope__try_to_merge_nested_scopes_4_p_0(check_hlds__simplify__simplify_goal__Reason1_39, check_hlds__simplify__simplify_goal__SomeGoal1_40, check_hlds__simplify__simplify_goal__GoalInfo1_41, &check_hlds__simplify__simplify_goal__Goal2_42);
          }
#line 258 "simplify_goal.m"
        }
#line 258 "simplify_goal.m"
      else
#line 261 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__Goal2_42 = check_hlds__simplify__simplify_goal__Goal1_34;
#line 264 "simplify_goal.m"
      {
#line 264 "simplify_goal.m"
        (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_elim_removable_scopes_1_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_103_103);
      }
#line 264 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 264 "simplify_goal.m"
        {
#line 265 "simplify_goal.m"
          check_hlds__simplify__simplify_goal__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal2_42, (MR_Integer) 0)));
#line 265 "simplify_goal.m"
          check_hlds__simplify__simplify_goal___GoalInfo2_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal2_42, (MR_Integer) 1)));
#line 265 "simplify_goal.m"
          (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__V_109_109)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_109_109, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 265 "simplify_goal.m"
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 265 "simplify_goal.m"
            {
#line 265 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__Reason2_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_109_109, (MR_Integer) 1)));
#line 265 "simplify_goal.m"
              check_hlds__simplify__simplify_goal__SomeGoal2_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_109_109, (MR_Integer) 2)));
#line 268 "simplify_goal.m"
              if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__Reason2_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_43, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 267 "simplify_goal.m"
                {
#line 267 "simplify_goal.m"
                  MR_Word check_hlds__simplify__simplify_goal__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_43, (MR_Integer) 1)));

#line 267 "simplify_goal.m"
                  (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__V_110_110 == (MR_Integer) 0);
#line 267 "simplify_goal.m"
                }
#line 268 "simplify_goal.m"
              else
#line 268 "simplify_goal.m"
              if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__Reason2_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_43, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 269 "simplify_goal.m"
                {
#line 269 "simplify_goal.m"
                  MR_Word check_hlds__simplify__simplify_goal__Kind_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_43, (MR_Integer) 2)));
#line 269 "simplify_goal.m"
                  MR_Word check_hlds__simplify__simplify_goal__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_43, (MR_Integer) 1)));

#line 270 "simplify_goal.m"
                  (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Kind_47 == (MR_Integer) 3);
#line 269 "simplify_goal.m"
                }
#line 268 "simplify_goal.m"
              else
#line 268 "simplify_goal.m"
                (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
#line 265 "simplify_goal.m"
            }
#line 264 "simplify_goal.m"
        }
#line 274 "simplify_goal.m"
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
#line 273 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__Goal3_48 = check_hlds__simplify__simplify_goal__SomeGoal2_44;
#line 274 "simplify_goal.m"
      else
#line 275 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__Goal3_48 = check_hlds__simplify__simplify_goal__Goal2_42;
#line 277 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__GoalExpr3_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal3_48, (MR_Integer) 0)));
#line 277 "simplify_goal.m"
      check_hlds__simplify__simplify_goal__GoalInfo3_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal3_48, (MR_Integer) 1)));
#line 278 "simplify_goal.m"
      {
#line 278 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal__GoalExpr3_49, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_103_103, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_54, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_112_112);
      }
#line 279 "simplify_goal.m"
      {
#line 279 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(check_hlds__simplify__simplify_goal__GoalExpr3_49, &check_hlds__simplify__simplify_goal__GoalExpr4_51, check_hlds__simplify__simplify_goal__GoalInfo3_50, &check_hlds__simplify__simplify_goal__GoalInfo4_52, check_hlds__simplify__simplify_goal__NestedContext_17, check_hlds__simplify__simplify_goal__InstMap0_12, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_112_112, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_113_113, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_103_103, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_114_114);
      }
#line 281 "simplify_goal.m"
      {
#line 281 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal__GoalExpr4_51, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_114_114, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_113_113, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_55);
      }
#line 282 "simplify_goal.m"
      {
#line 282 "simplify_goal.m"
        check_hlds__simplify__simplify_goal__enforce_unreachability_invariant_4_p_0(check_hlds__simplify__simplify_goal__GoalInfo4_52, &check_hlds__simplify__simplify_goal__GoalInfo_53, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_114_114, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_57);
      }
#line 283 "simplify_goal.m"
      {
#line 283 "simplify_goal.m"
        MR_Word base;
#line 283 "simplify_goal.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "simplify_goal.m"
        *check_hlds__simplify__simplify_goal__Goal_10 = base;
#line 283 "simplify_goal.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal__GoalExpr4_51));
#line 283 "simplify_goal.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal__GoalInfo_53));
#line 283 "simplify_goal.m"
      }
#line 107 "simplify_goal.m"
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
