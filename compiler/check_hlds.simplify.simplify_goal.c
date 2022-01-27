/*
** Automatically generated from `simplify_goal.m'
** by the Mercury compiler,
** version rotd-2016-05-05
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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
#include "transform_hlds.pd_cost.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
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



struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s {
  MR_Word check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9;
  MR_bool check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded;
  jmp_buf check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0;
  MR_Word check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25;
};


static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_value_ordered_before_after_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_name_ordered_before_after_0[2];

static const MR_Integer check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__functor_number_map_before_after_0[2];

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0_10001(
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_goal__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_3);

static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0(
  MR_Word * check_hlds__simplify__simplify_goal__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0(
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_1,
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal__enforce_unreachability_invariant_4_p_0(
  MR_Word check_hlds__simplify__simplify_goal__GoalInfo0_5,
  MR_Word * check_hlds__simplify__simplify_goal__GoalInfo_6,
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14,
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15);

static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal__BeforeAfter_6,
  MR_Word check_hlds__simplify__simplify_goal__GoalExpr_7,
  MR_Word check_hlds__simplify__simplify_goal__Info_8,
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_10,
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_11);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal__goal_is_call_to_builtin_false_1_p_0(
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__1_1);

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_1(
  void * check_hlds__simplify__simplify_goal__env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_2(
  void * check_hlds__simplify__simplify_goal__env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_3(
  void * check_hlds__simplify__simplify_goal__env_ptr_arg);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_1[16][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_2[1][4];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_3[2][1];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_1[16][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "fail"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "replacing it with"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The compiler will optimize away this goal,"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: this goal cannot succeed."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[7])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (((MR_Integer) 20 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[9])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0 = {
  (MR_String) "before",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1 = {
  (MR_String) "after",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_value_ordered_before_after_0[2] = {
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0,
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_name_ordered_before_after_0[2] = {
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1,
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0
};

static const MR_Integer check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__functor_number_map_before_after_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__type_ctor_info_before_after_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0_10001(
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal__succeeded;

    {
      check_hlds__simplify__simplify_goal__succeeded = check_hlds__simplify__simplify_goal____Unify____before_after_0_0(((MR_Word) check_hlds__simplify__simplify_goal__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal__wrapper_arg_2));
    }
    return check_hlds__simplify__simplify_goal__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_goal__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_goal__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__simplify_goal__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__simplify_goal____Compare____before_after_0_0(&check_hlds__simplify__simplify_goal__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_goal__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_goal__wrapper_arg_3));
    }
    *check_hlds__simplify__simplify_goal__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_goal__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0(
  MR_Word * check_hlds__simplify__simplify_goal__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__simplify_goal__succeeded;
    MR_Integer check_hlds__simplify__simplify_goal__Cast_HeadVar1_4 = (MR_Integer) check_hlds__simplify__simplify_goal__HeadVar__2_2;
    MR_Integer check_hlds__simplify__simplify_goal__Cast_HeadVar2_5 = (MR_Integer) check_hlds__simplify__simplify_goal__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_goal__HeadVar__1_1, check_hlds__simplify__simplify_goal__Cast_HeadVar1_4, check_hlds__simplify__simplify_goal__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0(
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_1,
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__HeadVar__2_1 == check_hlds__simplify__simplify_goal__HeadVar__2_2);

    return check_hlds__simplify__simplify_goal__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__enforce_unreachability_invariant_4_p_0(
  MR_Word check_hlds__simplify__simplify_goal__GoalInfo0_5,
  MR_Word * check_hlds__simplify__simplify_goal__GoalInfo_6,
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14,
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15)
{
  {
    MR_bool check_hlds__simplify__simplify_goal__succeeded;
    MR_Word check_hlds__simplify__simplify_goal__Determinism0_8;
    MR_Word check_hlds__simplify__simplify_goal__InstmapDelta0_9;
    MR_Word check_hlds__simplify__simplify_goal__CanFail0_10;
    MR_Word check_hlds__simplify__simplify_goal__NumSolns0_11;

    {
      check_hlds__simplify__simplify_goal__Determinism0_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_5);
    }
    {
      check_hlds__simplify__simplify_goal__InstmapDelta0_9 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_5);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal__Determinism0_8, &check_hlds__simplify__simplify_goal__CanFail0_10, &check_hlds__simplify__simplify_goal__NumSolns0_11);
    }
    check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__NumSolns0_11 == (MR_Integer) 0);
    if (check_hlds__simplify__simplify_goal__succeeded)
      {
        check_hlds__simplify__simplify_goal__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(check_hlds__simplify__simplify_goal__InstmapDelta0_9);
      }
    if (check_hlds__simplify__simplify_goal__succeeded)
      {
        MR_Word check_hlds__simplify__simplify_goal__UnreachableInstMapDelta_12;

        {
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(&check_hlds__simplify__simplify_goal__UnreachableInstMapDelta_12);
        }
        {
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal__UnreachableInstMapDelta_12, check_hlds__simplify__simplify_goal__GoalInfo0_5, check_hlds__simplify__simplify_goal__GoalInfo_6);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15);
        }
      }
    else
      {
        {
          check_hlds__simplify__simplify_goal__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(check_hlds__simplify__simplify_goal__InstmapDelta0_9);
        }
        if (check_hlds__simplify__simplify_goal__succeeded)
          {
            check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__NumSolns0_11 == (MR_Integer) 0);
            check_hlds__simplify__simplify_goal__succeeded = !(check_hlds__simplify__simplify_goal__succeeded);
          }
        if (check_hlds__simplify__simplify_goal__succeeded)
          {
            MR_Word check_hlds__simplify__simplify_goal__Determinism_13;

            {
              parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__simplify__simplify_goal__Determinism_13, check_hlds__simplify__simplify_goal__CanFail0_10, (MR_Integer) 0);
            }
            {
              hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__simplify__simplify_goal__Determinism_13, check_hlds__simplify__simplify_goal__GoalInfo0_5, check_hlds__simplify__simplify_goal__GoalInfo_6);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15);
            }
          }
        else
          {
            *check_hlds__simplify__simplify_goal__GoalInfo_6 = check_hlds__simplify__simplify_goal__GoalInfo0_5;
            *check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_15 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_14;
          }
      }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal__BeforeAfter_6,
  MR_Word check_hlds__simplify__simplify_goal__GoalExpr_7,
  MR_Word check_hlds__simplify__simplify_goal__Info_8,
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_10,
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_11)
{
  {
    MR_bool check_hlds__simplify__simplify_goal__succeeded;

    {
      check_hlds__simplify__simplify_goal__succeeded = check_hlds__simplify__simplify_info__simplify_do_common_struct_1_p_0(check_hlds__simplify__simplify_goal__Info_8);
    }
    if (check_hlds__simplify__simplify_goal__succeeded)
      {
        {
          check_hlds__simplify__simplify_goal__succeeded = check_hlds__simplify__simplify_info__simplify_do_extra_common_struct_1_p_0(check_hlds__simplify__simplify_goal__Info_8);
        }
        check_hlds__simplify__simplify_goal__succeeded = !(check_hlds__simplify__simplify_goal__succeeded);
        if (check_hlds__simplify__simplify_goal__succeeded)
          switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr_7)) {
            default:
              check_hlds__simplify__simplify_goal__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              check_hlds__simplify__simplify_goal__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__simplify__simplify_goal__Unify_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 3)));
                MR_Word check_hlds__simplify__simplify_goal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 0)));
                MR_Word check_hlds__simplify__simplify_goal__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));
                MR_Word check_hlds__simplify__simplify_goal__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 2)));
                MR_Word check_hlds__simplify__simplify_goal__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 4)));
                MR_Word check_hlds__simplify__simplify_goal__V_22_22;
                MR_Word check_hlds__simplify__simplify_goal__V_23_23;
                MR_Word check_hlds__simplify__simplify_goal__V_24_24;

                check_hlds__simplify__simplify_goal__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__Unify_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Unify_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (check_hlds__simplify__simplify_goal__succeeded)
                  {
                    check_hlds__simplify__simplify_goal__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Unify_20, (MR_Integer) 1)));
                    check_hlds__simplify__simplify_goal__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Unify_20, (MR_Integer) 2)));
                    check_hlds__simplify__simplify_goal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Unify_20, (MR_Integer) 3)));
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__simplify__simplify_goal__BuiltinState_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 3)));
                MR_Word check_hlds__simplify__simplify_goal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 0)));
                MR_Integer check_hlds__simplify__simplify_goal__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));
                MR_Word check_hlds__simplify__simplify_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 2)));
                MR_Word check_hlds__simplify__simplify_goal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 4)));
                MR_Word check_hlds__simplify__simplify_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 5)));

                switch (check_hlds__simplify__simplify_goal__BuiltinState_28) {
                  default:
                    check_hlds__simplify__simplify_goal__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 1);
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 0)))) {
                default:
                  check_hlds__simplify__simplify_goal__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__simplify__simplify_goal__GenericCall_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word check_hlds__simplify__simplify_goal__WillFlush0_40;
                    MR_Word check_hlds__simplify__simplify_goal__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word check_hlds__simplify__simplify_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word check_hlds__simplify__simplify_goal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 4)));
                    MR_Word check_hlds__simplify__simplify_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 5)));

                    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GenericCall_31)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        check_hlds__simplify__simplify_goal__WillFlush0_40 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        check_hlds__simplify__simplify_goal__WillFlush0_40 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        check_hlds__simplify__simplify_goal__WillFlush0_40 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 3:
                        check_hlds__simplify__simplify_goal__WillFlush0_40 = (MR_Integer) 0;
                        break;
                    }
                    check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 1);
                    if (check_hlds__simplify__simplify_goal__succeeded)
                      check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__WillFlush0_40 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 1);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__simplify__simplify_goal__ConjType_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word check_hlds__simplify__simplify_goal__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 2)));

                    check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__ConjType_54 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 3:
                  check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 0);
                  break;
                case (MR_Integer) 6:
                  check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__BeforeAfter_6 == (MR_Integer) 0);
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word check_hlds__simplify__simplify_goal__ShortHand_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr_7, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal__ShortHand_67)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal", (MR_String) "function \140check_hlds.simplify.simplify_goal.will_flush\'/2", (MR_String) "bi_implication");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                        }
                        break;
                    }
                    check_hlds__simplify__simplify_goal__succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
          }
      }
    if (check_hlds__simplify__simplify_goal__succeeded)
      {
        check_hlds__simplify__common__common_info_clear_structs_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_10, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_11);
      }
    else
      *check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_11 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_10;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal__goal_is_call_to_builtin_false_1_p_0(
  MR_Word check_hlds__simplify__simplify_goal__HeadVar__1_1)
{
  {
    MR_bool check_hlds__simplify__simplify_goal__succeeded;
    MR_Word check_hlds__simplify__simplify_goal__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_goal__SymName_9;
    MR_Word check_hlds__simplify__simplify_goal__V_10_10;
    MR_String check_hlds__simplify__simplify_goal__V_11_11;
    MR_Word check_hlds__simplify__simplify_goal__V_12_12;
    MR_Word check_hlds__simplify__simplify_goal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_goal__V_4_4;
    MR_Integer check_hlds__simplify__simplify_goal__V_5_5;
    MR_Word check_hlds__simplify__simplify_goal__V_6_6;
    MR_Word check_hlds__simplify__simplify_goal__V_7_7;
    MR_Word check_hlds__simplify__simplify_goal__V_8_8;

    check_hlds__simplify__simplify_goal__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr_2)) == (MR_mktag((MR_Integer) 2)));
    if (check_hlds__simplify__simplify_goal__succeeded)
      {
        check_hlds__simplify__simplify_goal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 0)));
        check_hlds__simplify__simplify_goal__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 1)));
        check_hlds__simplify__simplify_goal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 2)));
        check_hlds__simplify__simplify_goal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 3)));
        check_hlds__simplify__simplify_goal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 4)));
        check_hlds__simplify__simplify_goal__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal__GoalExpr_2, (MR_Integer) 5)));
        check_hlds__simplify__simplify_goal__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__SymName_9)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__simplify_goal__succeeded)
          {
            check_hlds__simplify__simplify_goal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__SymName_9, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__SymName_9, (MR_Integer) 1)));
            {
              check_hlds__simplify__simplify_goal__V_12_12 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
            {
              check_hlds__simplify__simplify_goal__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__simplify_goal__V_10_10, check_hlds__simplify__simplify_goal__V_12_12);
            }
            if (check_hlds__simplify__simplify_goal__succeeded)
              check_hlds__simplify__simplify_goal__succeeded = (strcmp(check_hlds__simplify__simplify_goal__V_11_11, (MR_String) "false") == 0);
          }
      }
    return check_hlds__simplify__simplify_goal__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal__OuterGoalInfo_8,
  MR_Word check_hlds__simplify__simplify_goal__InnerGoalInfo_9,
  MR_Word check_hlds__simplify__simplify_goal__GoalExpr1_10,
  MR_Word * check_hlds__simplify__simplify_goal__GoalExpr_11,
  MR_Word * check_hlds__simplify__simplify_goal__GoalInfo_12,
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_17)
{
  {
    MR_bool check_hlds__simplify__simplify_goal__succeeded;
    MR_Word check_hlds__simplify__simplify_goal__InnerDet_14;
    MR_Word check_hlds__simplify__simplify_goal__OuterDet_15;

    {
      check_hlds__simplify__simplify_goal__InnerDet_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal__InnerGoalInfo_9);
    }
    {
      check_hlds__simplify__simplify_goal__OuterDet_15 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal__OuterGoalInfo_8);
    }
    check_hlds__simplify__simplify_goal__succeeded = (check_hlds__simplify__simplify_goal__InnerDet_14 == check_hlds__simplify__simplify_goal__OuterDet_15);
    if (check_hlds__simplify__simplify_goal__succeeded)
      {
        *check_hlds__simplify__simplify_goal__GoalExpr_11 = check_hlds__simplify__simplify_goal__GoalExpr1_10;
        *check_hlds__simplify__simplify_goal__GoalInfo_12 = check_hlds__simplify__simplify_goal__InnerGoalInfo_9;
        *check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_17 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_16;
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal__V_20_20;

        {
          check_hlds__simplify__simplify_goal__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__V_20_20, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal__GoalExpr1_10));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__V_20_20, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal__InnerGoalInfo_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__simplify_goal__GoalExpr_11 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[15])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal__V_20_20));
        }
        *check_hlds__simplify__simplify_goal__GoalInfo_12 = check_hlds__simplify__simplify_goal__OuterGoalInfo_8;
        {
          check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_16, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_17);
        }
      }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66,
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67,
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68,
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69,
  MR_Word check_hlds__simplify__simplify_goal__NestedContext0_13,
  MR_Word check_hlds__simplify__simplify_goal__InstMap0_14,
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70,
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71,
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72,
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73)
{
  {
    MR_bool check_hlds__simplify__simplify_goal__succeeded;

    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__simplify__simplify_goal_ite__simplify_goal_neg_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
        }
        break;
      case (MR_Integer) 1:
        {
          check_hlds__simplify__simplify_goal_unify__simplify_goal_unify_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
        }
        break;
      case (MR_Integer) 2:
        {
          check_hlds__simplify__simplify_goal_call__simplify_goal_plain_call_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__simplify__simplify_goal_call__simplify_goal_generic_call_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
            }
            break;
          case (MR_Integer) 1:
            {
              check_hlds__simplify__simplify_goal_call__simplify_goal_foreign_proc_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__simplify__simplify_goal__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 1)));
              MR_Word check_hlds__simplify__simplify_goal__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 2)));

              switch (check_hlds__simplify__simplify_goal__ConjType_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    check_hlds__simplify__simplify_goal_conj__simplify_goal_parallel_conj_10_p_0(check_hlds__simplify__simplify_goal__Goals_18, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(check_hlds__simplify__simplify_goal__Goals_18, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              check_hlds__simplify__simplify_goal_disj__simplify_goal_disj_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
            }
            break;
          case (MR_Integer) 4:
            {
              check_hlds__simplify__simplify_goal_switch__simplify_goal_switch_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
            }
            break;
          case (MR_Integer) 5:
            {
              check_hlds__simplify__simplify_goal_scope__simplify_goal_scope_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
            }
            break;
          case (MR_Integer) 6:
            {
              check_hlds__simplify__simplify_goal_ite__simplify_goal_ite_10_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__simplify__simplify_goal__ShortHand0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal__ShortHand0_53)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal", (MR_String) "predicate \140check_hlds.simplify.simplify_goal.simplify_goal_expr\'/10", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__simplify__simplify_goal__GoalType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 0)));
                    MR_Word check_hlds__simplify__simplify_goal__Outer_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 1)));
                    MR_Word check_hlds__simplify__simplify_goal__Inner_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 2)));
                    MR_Word check_hlds__simplify__simplify_goal__MaybeOutputVars_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 3)));
                    MR_Word check_hlds__simplify__simplify_goal__MainGoal_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 4)));
                    MR_Word check_hlds__simplify__simplify_goal__OrElseGoals_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 5)));
                    MR_Word check_hlds__simplify__simplify_goal__OrElseInners_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__ShortHand0_53, (MR_Integer) 6)));

                    {
                      check_hlds__simplify__simplify_goal_disj__simplify_goal_atomic_goal_16_p_0(check_hlds__simplify__simplify_goal__GoalType_54, check_hlds__simplify__simplify_goal__Outer_55, check_hlds__simplify__simplify_goal__Inner_56, check_hlds__simplify__simplify_goal__MaybeOutputVars_57, check_hlds__simplify__simplify_goal__MainGoal_58, check_hlds__simplify__simplify_goal__OrElseGoals_59, check_hlds__simplify__simplify_goal__OrElseInners_60, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalExpr_67, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_0_68, check_hlds__simplify__simplify_goal__STATE_VARIABLE_GoalInfo_69, check_hlds__simplify__simplify_goal__NestedContext0_13, check_hlds__simplify__simplify_goal__InstMap0_14, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_70, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_71, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_72, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_73);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal", (MR_String) "predicate \140check_hlds.simplify.simplify_goal.simplify_goal_expr\'/10", (MR_String) "try_goal");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_1(
  void * check_hlds__simplify__simplify_goal__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * check_hlds__simplify__simplify_goal__env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) check_hlds__simplify__simplify_goal__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_2(
  void * check_hlds__simplify__simplify_goal__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * check_hlds__simplify__simplify_goal__env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) check_hlds__simplify__simplify_goal__env_ptr_arg;

    {
      MR_Word check_hlds__simplify__simplify_goal__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25, (MR_Integer) 0)));
      MR_Word check_hlds__simplify__simplify_goal__V_67_67;
      MR_Word check_hlds__simplify__simplify_goal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25, (MR_Integer) 1)));

      (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__V_66_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_66_66, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if ((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        {
          check_hlds__simplify__simplify_goal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_66_66, (MR_Integer) 1)));
          (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
    }
    if (!((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
      {
        (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal__goal_is_call_to_builtin_false_1_p_0((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25);
      }
    if ((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      {
        check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_1(check_hlds__simplify__simplify_goal__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_3(
  void * check_hlds__simplify__simplify_goal__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * check_hlds__simplify__simplify_goal__env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) check_hlds__simplify__simplify_goal__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0) == 0)
      {
        {
          hlds__goal_util__goal_contains_goal_2_p_0((check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &(check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25, check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_2, check_hlds__simplify__simplify_goal__env_ptr);
        }
        (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__simplify__simplify_goal__env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(
  MR_Word check_hlds__simplify__simplify_goal__Goal0_9,
  MR_Word * check_hlds__simplify__simplify_goal__Goal_10,
  MR_Word check_hlds__simplify__simplify_goal__NestedContext0_11,
  MR_Word check_hlds__simplify__simplify_goal__InstMap0_12,
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_55,
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_56,
  MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_57,
  MR_Word * check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_58)
{
  {
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s check_hlds__simplify__simplify_goal__env;

    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9 = check_hlds__simplify__simplify_goal__Goal0_9;
    {
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, (MR_Integer) 1)));
      MR_Word check_hlds__simplify__simplify_goal__NestedContext_17;
      MR_Word check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18;
      MR_Word check_hlds__simplify__simplify_goal__Detism_19;
      MR_Word check_hlds__simplify__simplify_goal__ModuleInfo0_20;
      MR_Word check_hlds__simplify__simplify_goal__Goal0CanLoopOrThrow_21;
      MR_Word check_hlds__simplify__simplify_goal__ModuleInfo_22;
      MR_Word check_hlds__simplify__simplify_goal__Purity_23;
      MR_Word check_hlds__simplify__simplify_goal__Goal1_34;
      MR_Word check_hlds__simplify__simplify_goal__GoalExpr1_39;
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo1_40;
      MR_Word check_hlds__simplify__simplify_goal__Goal2_43;
      MR_Word check_hlds__simplify__simplify_goal__Goal3_49;
      MR_Word check_hlds__simplify__simplify_goal__GoalExpr3_50;
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo3_51;
      MR_Word check_hlds__simplify__simplify_goal__GoalExpr4_52;
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo4_53;
      MR_Word check_hlds__simplify__simplify_goal__GoalInfo_54;
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63;
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_64_64;
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_104_104;
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_112_112;
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_113_113;
      MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_114_114;
      MR_Word check_hlds__simplify__simplify_goal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, (MR_Integer) 0)));
      MR_Word check_hlds__simplify__simplify_goal__Reason1_41;
      MR_Word check_hlds__simplify__simplify_goal__SomeGoal1_42;
      MR_Word check_hlds__simplify__simplify_goal__SomeGoal2_45;
      MR_Word check_hlds__simplify__simplify_goal__Reason2_44;
      MR_Word check_hlds__simplify__simplify_goal__V_109_109;
      MR_Word check_hlds__simplify__simplify_goal___GoalInfo2_46;

      {
        (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__simplify__simplify_goal__GoalInfo0_16, (MR_Integer) 13);
      }
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        {
          MR_Integer check_hlds__simplify__simplify_goal__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext0_11, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__simplify_goal__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext0_11, (MR_Integer) 2)));
          MR_Word check_hlds__simplify__simplify_goal__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext0_11, (MR_Integer) 0)));

          {
            check_hlds__simplify__simplify_goal__NestedContext_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext_17, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext_17, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal__V_125_125));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__NestedContext_17, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal__V_126_126));
          }
        }
      else
        check_hlds__simplify__simplify_goal__NestedContext_17 = check_hlds__simplify__simplify_goal__NestedContext0_11;
      {
        (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__simplify__simplify_goal__GoalInfo0_16, (MR_Integer) 17);
      }
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        {
          {
            check_hlds__simplify__simplify_info__simplify_info_set_found_contains_trace_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_57, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63);
          }
          check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18 = (MR_Integer) 0;
        }
      else
        {
          check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18 = (MR_Integer) 1;
          check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_0_57;
        }
      {
        check_hlds__simplify__simplify_goal__Detism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
      }
      {
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63, &check_hlds__simplify__simplify_goal__ModuleInfo0_20);
      }
      {
        hlds__goal_form__goal_can_loop_or_throw_4_p_0((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &check_hlds__simplify__simplify_goal__Goal0CanLoopOrThrow_21, check_hlds__simplify__simplify_goal__ModuleInfo0_20, &check_hlds__simplify__simplify_goal__ModuleInfo_22);
      }
      {
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal__ModuleInfo_22, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_63_63, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_64_64);
      }
      {
        check_hlds__simplify__simplify_goal__Purity_23 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
      }
      (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Detism_19 == (MR_Integer) 7);
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        {
          switch (check_hlds__simplify__simplify_goal__Purity_23) {
            default:
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
              break;
          }
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
            {
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18 == (MR_Integer) 1);
              if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
                {
                  {
                    MR_Word check_hlds__simplify__simplify_goal__V_129_129;

                    {
                      check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_64_64, &check_hlds__simplify__simplify_goal__V_129_129);
                    }
                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 0 == check_hlds__simplify__simplify_goal__V_129_129);
                  }
                  if (!((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Goal0CanLoopOrThrow_21 == (MR_Integer) 1);
                }
            }
        }
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        {
          MR_Word check_hlds__simplify__simplify_goal__Context_24;
          MR_Word check_hlds__simplify__simplify_goal__NonLocals0_32;
          MR_Integer check_hlds__simplify__simplify_goal__CostDelta_33;
          MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102;
          MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_103_103;

          {
            check_hlds__simplify__simplify_goal__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
          }
          {
            (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_64_64);
          }
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
            {
              {
                check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_3(&check_hlds__simplify__simplify_goal__env);
              }
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded);
            }
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
            {
              MR_Word check_hlds__simplify__simplify_goal__Msg_29;
              MR_Word check_hlds__simplify__simplify_goal__Spec_31;
              MR_Word check_hlds__simplify__simplify_goal__V_100_100;

              {
                check_hlds__simplify__simplify_goal__Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Msg_29, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal__Context_24));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Msg_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[14])));
              }
              {
                check_hlds__simplify__simplify_goal__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__V_100_100, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal__Msg_29));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__simplify_goal__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_2[0])));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_scalar_common_3[1])));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Spec_31, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal__V_100_100));
              }
              {
                check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal__Spec_31, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_64_64, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102);
              }
            }
          else
            check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_64_64;
          {
            check_hlds__simplify__simplify_goal__NonLocals0_32 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
          }
          {
            (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal__NonLocals0_32);
          }
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
            check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_103_103 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102;
          else
            {
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_102_102, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_103_103);
            }
          {
            transform_hlds__pd_cost__goal_cost_2_p_0((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &check_hlds__simplify__simplify_goal__CostDelta_33);
          }
          {
            check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__simplify_goal__CostDelta_33, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_103_103, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_104_104);
          }
          {
            check_hlds__simplify__simplify_goal__Goal1_34 = hlds__make_goal__fail_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal__Context_24);
          }
        }
      else
        {
          MR_Word check_hlds__simplify__simplify_goal__MaxSoln_35;
          MR_Word check_hlds__simplify__simplify_goal__InstMapDelta_36;
          MR_Word check_hlds__simplify__simplify_goal__NonLocalVars_37;
          MR_Word check_hlds__simplify__simplify_goal__VarTypes_38;
          MR_Word check_hlds__simplify__simplify_goal__V_130_130;
          MR_Word check_hlds__simplify__simplify_goal__V_131_131;

          {
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal__Detism_19, &check_hlds__simplify__simplify_goal__V_130_130, &check_hlds__simplify__simplify_goal__MaxSoln_35);
          }
          (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 1 == check_hlds__simplify__simplify_goal__V_130_130);
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
            {
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__MaxSoln_35 == (MR_Integer) 0);
              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded);
              if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
                {
                  {
                    check_hlds__simplify__simplify_goal__InstMapDelta_36 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
                  }
                  {
                    check_hlds__simplify__simplify_goal__NonLocalVars_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
                  }
                  {
                    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_64_64, &check_hlds__simplify__simplify_goal__V_131_131);
                  }
                  {
                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__simplify__simplify_goal__ModuleInfo_22, check_hlds__simplify__simplify_goal__V_131_131);
                  }
                  if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
                    {
                      {
                        check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_64_64, &check_hlds__simplify__simplify_goal__VarTypes_38);
                      }
                      {
                        (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__instmap__instmap_delta_no_output_vars_5_p_0(check_hlds__simplify__simplify_goal__ModuleInfo_22, check_hlds__simplify__simplify_goal__VarTypes_38, check_hlds__simplify__simplify_goal__InstMap0_12, check_hlds__simplify__simplify_goal__InstMapDelta_36, check_hlds__simplify__simplify_goal__NonLocalVars_37);
                      }
                      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
                        {
                          switch (check_hlds__simplify__simplify_goal__Purity_23) {
                            default:
                              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
                              break;
                            case (MR_Integer) 0:
                              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
                              break;
                            case (MR_Integer) 1:
                              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
                              break;
                          }
                          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
                            {
                              (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Goal0ContainsTrace_18 == (MR_Integer) 1);
                              if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
                                {
                                  {
                                    MR_Word check_hlds__simplify__simplify_goal__V_132_132;

                                    {
                                      check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_64_64, &check_hlds__simplify__simplify_goal__V_132_132);
                                    }
                                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 0 == check_hlds__simplify__simplify_goal__V_132_132);
                                  }
                                  if (!((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
                                    (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Goal0CanLoopOrThrow_21 == (MR_Integer) 1);
                                }
                            }
                        }
                    }
                }
            }
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
            {
              MR_Word check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_107_107;
              MR_Word check_hlds__simplify__simplify_goal__Context_118;
              MR_Word check_hlds__simplify__simplify_goal__NonLocals0_119;
              MR_Integer check_hlds__simplify__simplify_goal__CostDelta_120;

              {
                check_hlds__simplify__simplify_goal__NonLocals0_119 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
              }
              {
                (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal__NonLocals0_119);
              }
              if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
                check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_107_107 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_64_64;
              else
                {
                  check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_64_64, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_107_107);
                }
              {
                transform_hlds__pd_cost__goal_cost_2_p_0((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &check_hlds__simplify__simplify_goal__CostDelta_120);
              }
              {
                check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__simplify_goal__CostDelta_120, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_107_107, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_104_104);
              }
              {
                check_hlds__simplify__simplify_goal__Context_118 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal__GoalInfo0_16);
              }
              {
                check_hlds__simplify__simplify_goal__Goal1_34 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal__Context_118);
              }
            }
          else
            {
              check_hlds__simplify__simplify_goal__Goal1_34 = (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9;
              check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_104_104 = check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_64_64;
            }
        }
      check_hlds__simplify__simplify_goal__GoalExpr1_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal1_34, (MR_Integer) 0)));
      check_hlds__simplify__simplify_goal__GoalInfo1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal1_34, (MR_Integer) 1)));
      (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__GoalExpr1_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr1_39, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        {
          check_hlds__simplify__simplify_goal__Reason1_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr1_39, (MR_Integer) 1)));
          check_hlds__simplify__simplify_goal__SomeGoal1_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__GoalExpr1_39, (MR_Integer) 2)));
          {
            check_hlds__simplify__simplify_goal_scope__try_to_merge_nested_scopes_4_p_0(check_hlds__simplify__simplify_goal__Reason1_41, check_hlds__simplify__simplify_goal__SomeGoal1_42, check_hlds__simplify__simplify_goal__GoalInfo1_40, &check_hlds__simplify__simplify_goal__Goal2_43);
          }
        }
      else
        check_hlds__simplify__simplify_goal__Goal2_43 = check_hlds__simplify__simplify_goal__Goal1_34;
      {
        (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_elim_removable_scopes_1_p_0(check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_104_104);
      }
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        {
          check_hlds__simplify__simplify_goal__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal2_43, (MR_Integer) 0)));
          check_hlds__simplify__simplify_goal___GoalInfo2_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal2_43, (MR_Integer) 1)));
          (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__V_109_109)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_109_109, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
            {
              check_hlds__simplify__simplify_goal__Reason2_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_109_109, (MR_Integer) 1)));
              check_hlds__simplify__simplify_goal__SomeGoal2_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__V_109_109, (MR_Integer) 2)));
              if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__Reason2_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_44, (MR_Integer) 0)))) == (MR_Integer) 4))))
                {
                  MR_Word check_hlds__simplify__simplify_goal__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_44, (MR_Integer) 1)));

                  (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__V_110_110 == (MR_Integer) 0);
                }
              else
              if (((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal__Reason2_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_44, (MR_Integer) 0)))) == (MR_Integer) 5))))
                {
                  MR_Word check_hlds__simplify__simplify_goal__Kind_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_44, (MR_Integer) 2)));
                  MR_Word check_hlds__simplify__simplify_goal__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal__Reason2_44, (MR_Integer) 1)));

                  (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal__Kind_48 == (MR_Integer) 3);
                }
              else
                (check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
            }
        }
      if ((check_hlds__simplify__simplify_goal__env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        check_hlds__simplify__simplify_goal__Goal3_49 = check_hlds__simplify__simplify_goal__SomeGoal2_45;
      else
        check_hlds__simplify__simplify_goal__Goal3_49 = check_hlds__simplify__simplify_goal__Goal2_43;
      check_hlds__simplify__simplify_goal__GoalExpr3_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal3_49, (MR_Integer) 0)));
      check_hlds__simplify__simplify_goal__GoalInfo3_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal__Goal3_49, (MR_Integer) 1)));
      {
        check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal__GoalExpr3_50, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_104_104, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_0_55, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_112_112);
      }
      {
        check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(check_hlds__simplify__simplify_goal__GoalExpr3_50, &check_hlds__simplify__simplify_goal__GoalExpr4_52, check_hlds__simplify__simplify_goal__GoalInfo3_51, &check_hlds__simplify__simplify_goal__GoalInfo4_53, check_hlds__simplify__simplify_goal__NestedContext_17, check_hlds__simplify__simplify_goal__InstMap0_12, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_112_112, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_113_113, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_104_104, &check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_114_114);
      }
      {
        check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal__GoalExpr4_52, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_114_114, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_113_113, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Common_56);
      }
      {
        check_hlds__simplify__simplify_goal__enforce_unreachability_invariant_4_p_0(check_hlds__simplify__simplify_goal__GoalInfo4_53, &check_hlds__simplify__simplify_goal__GoalInfo_54, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_114_114, check_hlds__simplify__simplify_goal__STATE_VARIABLE_Info_58);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *check_hlds__simplify__simplify_goal__Goal_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal__GoalExpr4_52));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal__GoalInfo_54));
      }
    }
  }
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
