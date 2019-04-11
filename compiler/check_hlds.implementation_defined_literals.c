/*
** Automatically generated from `implementation_defined_literals.m'
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


/* :- module check_hlds.implementation_defined_literals. */
/* :- implementation. */

/*
INIT mercury__check_hlds__implementation_defined_literals__init
ENDINIT
*/

#include "check_hlds.implementation_defined_literals.mih"


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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "libs.compute_grade.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_PseudoTypeInfo check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__field_types_subst_literals_info_0_0[3];

static const MR_DuFunctorDesc check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_functor_desc_subst_literals_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_stag_ordered_subst_literals_info_0_0[1];

static const MR_DuPtagLayout check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_ptag_ordered_subst_literals_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_name_ordered_subst_literals_info_0[1];

static const MR_Integer check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__functor_number_map_subst_literals_info_0[1];

static MR_bool MR_CALL 
check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0_10001(
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_2);

static void MR_CALL 
check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0_10001(
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_2,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_3);

static void MR_CALL 
check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0(
  MR_Word * check_hlds__implementation_defined_literals__HeadVar__1_1,
  MR_Word check_hlds__implementation_defined_literals__HeadVar__2_2,
  MR_Word check_hlds__implementation_defined_literals__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0(
  MR_Word check_hlds__implementation_defined_literals__HeadVar__1_1,
  MR_Word check_hlds__implementation_defined_literals__HeadVar__2_2);

static void MR_CALL 
check_hlds__implementation_defined_literals__make_impl_defined_literal_5_p_0(
  MR_Word check_hlds__implementation_defined_literals__Var_6,
  MR_String check_hlds__implementation_defined_literals__Name_7,
  MR_Word check_hlds__implementation_defined_literals__Context_8,
  MR_Word check_hlds__implementation_defined_literals__Info_9,
  MR_Word * check_hlds__implementation_defined_literals__Goal_10);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_case_3_p_0(
  MR_Word check_hlds__implementation_defined_literals__Info_4,
  MR_Word check_hlds__implementation_defined_literals__Case0_5,
  MR_Word * check_hlds__implementation_defined_literals__Case_6);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_4(
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_3(
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_2(
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_1(
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(
  MR_Word check_hlds__implementation_defined_literals__Info_4,
  MR_Word check_hlds__implementation_defined_literals__Goal0_5,
  MR_Word * check_hlds__implementation_defined_literals__Goal_6);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_clause_3_p_0(
  MR_Word check_hlds__implementation_defined_literals__Info_4,
  MR_Word check_hlds__implementation_defined_literals__Clause0_5,
  MR_Word * check_hlds__implementation_defined_literals__Clause_6);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0_1(
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0(
  MR_Word check_hlds__implementation_defined_literals__ModuleInfo_5,
  MR_Word check_hlds__implementation_defined_literals__PredId_6,
  MR_Word check_hlds__implementation_defined_literals__PredInfo0_7,
  MR_Word * check_hlds__implementation_defined_literals__PredInfo_8);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0_1(
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_2,
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__implementation_defined_literals_scalar_common_1[1][7];

static /* final */ const MR_Box check_hlds__implementation_defined_literals_scalar_common_2[3][6];




static /* final */ const MR_Box check_hlds__implementation_defined_literals_scalar_common_1[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box check_hlds__implementation_defined_literals_scalar_common_2[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__type_ctor_info_subst_literals_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__type_ctor_info_subst_literals_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__type_ctor_info_subst_literals_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__field_types_subst_literals_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

static const MR_DuFunctorDesc check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_functor_desc_subst_literals_info_0_0 = {
  (MR_String) "subst_literals_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__field_types_subst_literals_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_stag_ordered_subst_literals_info_0_0[1] = {
  &check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_functor_desc_subst_literals_info_0_0
};

static const MR_DuPtagLayout check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_ptag_ordered_subst_literals_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_stag_ordered_subst_literals_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_name_ordered_subst_literals_info_0[1] = {
  &check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_functor_desc_subst_literals_info_0_0
};

static const MR_Integer check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__functor_number_map_subst_literals_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__type_ctor_info_subst_literals_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0_10001)),
  ((MR_Box) (check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0_10001)),
  (MR_String) "check_hlds.implementation_defined_literals",
  (MR_String) "subst_literals_info",
  {     check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_name_ordered_subst_literals_info_0 },
  {     check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_ptag_ordered_subst_literals_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__functor_number_map_subst_literals_info_0
};

static MR_bool MR_CALL 
check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0_10001(
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_2)
{
  {
    MR_bool check_hlds__implementation_defined_literals__succeeded;

    {
      check_hlds__implementation_defined_literals__succeeded = check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0(((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_1), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_2));
    }
    return check_hlds__implementation_defined_literals__succeeded;
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0_10001(
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_2,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_3)
{
  {
    MR_Word check_hlds__implementation_defined_literals__conv0_HeadVar__1_1;

    {
      check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0(&check_hlds__implementation_defined_literals__conv0_HeadVar__1_1, ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_2), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_3));
    }
    *check_hlds__implementation_defined_literals__wrapper_arg_1 = ((MR_Box) (check_hlds__implementation_defined_literals__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0(
  MR_Word * check_hlds__implementation_defined_literals__HeadVar__1_1,
  MR_Word check_hlds__implementation_defined_literals__HeadVar__2_2,
  MR_Word check_hlds__implementation_defined_literals__HeadVar__3_3)
{
  {
    MR_bool check_hlds__implementation_defined_literals__succeeded;
    MR_Integer check_hlds__implementation_defined_literals__CastX_12 = (MR_Integer) check_hlds__implementation_defined_literals__HeadVar__2_2;
    MR_Integer check_hlds__implementation_defined_literals__CastY_13 = (MR_Integer) check_hlds__implementation_defined_literals__HeadVar__3_3;

    check_hlds__implementation_defined_literals__succeeded = (check_hlds__implementation_defined_literals__CastX_12 == check_hlds__implementation_defined_literals__CastY_13);
    if (check_hlds__implementation_defined_literals__succeeded)
      *check_hlds__implementation_defined_literals__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__implementation_defined_literals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__implementation_defined_literals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__implementation_defined_literals__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__implementation_defined_literals__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__implementation_defined_literals__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__implementation_defined_literals__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__implementation_defined_literals__Var_10;

        {
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__implementation_defined_literals__Var_10, check_hlds__implementation_defined_literals__Var_4, check_hlds__implementation_defined_literals__Var_7);
        }
        check_hlds__implementation_defined_literals__succeeded = (check_hlds__implementation_defined_literals__Var_10 == (MR_Integer) 0);
        check_hlds__implementation_defined_literals__succeeded = !(check_hlds__implementation_defined_literals__succeeded);
        if (check_hlds__implementation_defined_literals__succeeded)
          *check_hlds__implementation_defined_literals__HeadVar__1_1 = check_hlds__implementation_defined_literals__Var_10;
        else
          {
            MR_Word check_hlds__implementation_defined_literals__Var_11;

            {
              hlds__hlds_pred____Compare____pred_info_0_0(&check_hlds__implementation_defined_literals__Var_11, check_hlds__implementation_defined_literals__Var_5, check_hlds__implementation_defined_literals__Var_8);
            }
            check_hlds__implementation_defined_literals__succeeded = (check_hlds__implementation_defined_literals__Var_11 == (MR_Integer) 0);
            check_hlds__implementation_defined_literals__succeeded = !(check_hlds__implementation_defined_literals__succeeded);
            if (check_hlds__implementation_defined_literals__succeeded)
              *check_hlds__implementation_defined_literals__HeadVar__1_1 = check_hlds__implementation_defined_literals__Var_11;
            else
              {
                hlds__hlds_pred____Compare____pred_id_0_0(check_hlds__implementation_defined_literals__HeadVar__1_1, check_hlds__implementation_defined_literals__Var_6, check_hlds__implementation_defined_literals__Var_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0(
  MR_Word check_hlds__implementation_defined_literals__HeadVar__1_1,
  MR_Word check_hlds__implementation_defined_literals__HeadVar__2_2)
{
  {
    MR_bool check_hlds__implementation_defined_literals__succeeded;
    MR_Integer check_hlds__implementation_defined_literals__CastX_9 = (MR_Integer) check_hlds__implementation_defined_literals__HeadVar__1_1;
    MR_Integer check_hlds__implementation_defined_literals__CastY_10 = (MR_Integer) check_hlds__implementation_defined_literals__HeadVar__2_2;

    check_hlds__implementation_defined_literals__succeeded = (check_hlds__implementation_defined_literals__CastX_9 == check_hlds__implementation_defined_literals__CastY_10);
    if (check_hlds__implementation_defined_literals__succeeded)
      check_hlds__implementation_defined_literals__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__implementation_defined_literals__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__implementation_defined_literals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__implementation_defined_literals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__implementation_defined_literals__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__implementation_defined_literals__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__implementation_defined_literals__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__2_2, (MR_Integer) 2)));

        {
          check_hlds__implementation_defined_literals__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__implementation_defined_literals__Var_3, check_hlds__implementation_defined_literals__Var_6);
        }
        if (check_hlds__implementation_defined_literals__succeeded)
          {
            {
              check_hlds__implementation_defined_literals__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(check_hlds__implementation_defined_literals__Var_4, check_hlds__implementation_defined_literals__Var_7);
            }
            if (check_hlds__implementation_defined_literals__succeeded)
              {
                check_hlds__implementation_defined_literals__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__implementation_defined_literals__Var_5, check_hlds__implementation_defined_literals__Var_8);
              }
          }
      }
    return check_hlds__implementation_defined_literals__succeeded;
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__make_impl_defined_literal_5_p_0(
  MR_Word check_hlds__implementation_defined_literals__Var_6,
  MR_String check_hlds__implementation_defined_literals__Name_7,
  MR_Word check_hlds__implementation_defined_literals__Context_8,
  MR_Word check_hlds__implementation_defined_literals__Info_9,
  MR_Word * check_hlds__implementation_defined_literals__Goal_10)
{
  {
    MR_bool check_hlds__implementation_defined_literals__succeeded = (strcmp(check_hlds__implementation_defined_literals__Name_7, (MR_String) "file") == 0);
    MR_String check_hlds__implementation_defined_literals__File_11 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Context_8, (MR_Integer) 0)));
    MR_Integer check_hlds__implementation_defined_literals__Line_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Context_8, (MR_Integer) 1)));
    MR_Word check_hlds__implementation_defined_literals__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Info_9, (MR_Integer) 0)));
    MR_Word check_hlds__implementation_defined_literals__PredInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Info_9, (MR_Integer) 1)));
    MR_Word check_hlds__implementation_defined_literals__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Info_9, (MR_Integer) 2)));

    if (check_hlds__implementation_defined_literals__succeeded)
      {
        hlds__make_goal__make_string_const_construction_3_p_0(check_hlds__implementation_defined_literals__Var_6, check_hlds__implementation_defined_literals__File_11, check_hlds__implementation_defined_literals__Goal_10);
      }
    else
      {
        check_hlds__implementation_defined_literals__succeeded = (strcmp(check_hlds__implementation_defined_literals__Name_7, (MR_String) "line") == 0);
        if (check_hlds__implementation_defined_literals__succeeded)
          {
            hlds__make_goal__make_int_const_construction_3_p_0(check_hlds__implementation_defined_literals__Var_6, check_hlds__implementation_defined_literals__Line_12, check_hlds__implementation_defined_literals__Goal_10);
          }
        else
          {
            check_hlds__implementation_defined_literals__succeeded = (strcmp(check_hlds__implementation_defined_literals__Name_7, (MR_String) "module") == 0);
            if (check_hlds__implementation_defined_literals__succeeded)
              {
                MR_Word check_hlds__implementation_defined_literals__ModuleName_16;
                MR_String check_hlds__implementation_defined_literals__Str_17;

                {
                  check_hlds__implementation_defined_literals__ModuleName_16 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__implementation_defined_literals__PredInfo_14);
                }
                {
                  check_hlds__implementation_defined_literals__Str_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__implementation_defined_literals__ModuleName_16);
                }
                {
                  hlds__make_goal__make_string_const_construction_3_p_0(check_hlds__implementation_defined_literals__Var_6, check_hlds__implementation_defined_literals__Str_17, check_hlds__implementation_defined_literals__Goal_10);
                }
              }
            else
              {
                check_hlds__implementation_defined_literals__succeeded = (strcmp(check_hlds__implementation_defined_literals__Name_7, (MR_String) "pred") == 0);
                if (check_hlds__implementation_defined_literals__succeeded)
                  {
                    MR_String check_hlds__implementation_defined_literals__Str_23;

                    {
                      check_hlds__implementation_defined_literals__Str_23 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(check_hlds__implementation_defined_literals__ModuleInfo_13, check_hlds__implementation_defined_literals__PredId_15);
                    }
                    {
                      hlds__make_goal__make_string_const_construction_3_p_0(check_hlds__implementation_defined_literals__Var_6, check_hlds__implementation_defined_literals__Str_23, check_hlds__implementation_defined_literals__Goal_10);
                    }
                  }
                else
                  {
                    check_hlds__implementation_defined_literals__succeeded = (strcmp(check_hlds__implementation_defined_literals__Name_7, (MR_String) "grade") == 0);
                    if (check_hlds__implementation_defined_literals__succeeded)
                      {
                        MR_Word check_hlds__implementation_defined_literals__Globals_18;
                        MR_String check_hlds__implementation_defined_literals__Grade_19;

                        {
                          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__implementation_defined_literals__ModuleInfo_13, &check_hlds__implementation_defined_literals__Globals_18);
                        }
                        {
                          libs__compute_grade__grade_directory_component_2_p_0(check_hlds__implementation_defined_literals__Globals_18, &check_hlds__implementation_defined_literals__Grade_19);
                        }
                        {
                          hlds__make_goal__make_string_const_construction_3_p_0(check_hlds__implementation_defined_literals__Var_6, check_hlds__implementation_defined_literals__Grade_19, check_hlds__implementation_defined_literals__Goal_10);
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.implementation_defined_literals", (MR_String) "predicate \140check_hlds.implementation_defined_literals.make_impl_defined_literal\'/5", (MR_String) "unknown literal");
                          return;
                        }
                      }
                  }
              }
          }
      }
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_case_3_p_0(
  MR_Word check_hlds__implementation_defined_literals__Info_4,
  MR_Word check_hlds__implementation_defined_literals__Case0_5,
  MR_Word * check_hlds__implementation_defined_literals__Case_6)
{
  {
    MR_bool check_hlds__implementation_defined_literals__succeeded;
    MR_Word check_hlds__implementation_defined_literals__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Case0_5, (MR_Integer) 0)));
    MR_Word check_hlds__implementation_defined_literals__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Case0_5, (MR_Integer) 1)));
    MR_Word check_hlds__implementation_defined_literals__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Case0_5, (MR_Integer) 2)));
    MR_Word check_hlds__implementation_defined_literals__Goal_10;

    {
      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__Goal0_9, &check_hlds__implementation_defined_literals__Goal_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__implementation_defined_literals__Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__MainConsId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__OtherConsIds_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__Goal_10));
    }
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_4(
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2)
{
  {
    MR_Box check_hlds__implementation_defined_literals__closure = check_hlds__implementation_defined_literals__closure_arg;
    MR_Word check_hlds__implementation_defined_literals__conv3_Case_6;

    {
      check_hlds__implementation_defined_literals__subst_literals_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_1), &check_hlds__implementation_defined_literals__conv3_Case_6);
    }
    *check_hlds__implementation_defined_literals__wrapper_arg_2 = ((MR_Box) (check_hlds__implementation_defined_literals__conv3_Case_6));
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_3(
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2)
{
  {
    MR_Box check_hlds__implementation_defined_literals__closure = check_hlds__implementation_defined_literals__closure_arg;
    MR_Word check_hlds__implementation_defined_literals__conv2_Goal_6;

    {
      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_1), &check_hlds__implementation_defined_literals__conv2_Goal_6);
    }
    *check_hlds__implementation_defined_literals__wrapper_arg_2 = ((MR_Box) (check_hlds__implementation_defined_literals__conv2_Goal_6));
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_2(
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2)
{
  {
    MR_Box check_hlds__implementation_defined_literals__closure = check_hlds__implementation_defined_literals__closure_arg;
    MR_Word check_hlds__implementation_defined_literals__conv1_Goal_6;

    {
      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_1), &check_hlds__implementation_defined_literals__conv1_Goal_6);
    }
    *check_hlds__implementation_defined_literals__wrapper_arg_2 = ((MR_Box) (check_hlds__implementation_defined_literals__conv1_Goal_6));
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_1(
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2)
{
  {
    MR_Box check_hlds__implementation_defined_literals__closure = check_hlds__implementation_defined_literals__closure_arg;
    MR_Word check_hlds__implementation_defined_literals__conv0_Goal_6;

    {
      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_1), &check_hlds__implementation_defined_literals__conv0_Goal_6);
    }
    *check_hlds__implementation_defined_literals__wrapper_arg_2 = ((MR_Box) (check_hlds__implementation_defined_literals__conv0_Goal_6));
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(
  MR_Word check_hlds__implementation_defined_literals__Info_4,
  MR_Word check_hlds__implementation_defined_literals__Goal0_5,
  MR_Word * check_hlds__implementation_defined_literals__Goal_6)
{
  {
    MR_bool check_hlds__implementation_defined_literals__succeeded;
    MR_Word check_hlds__implementation_defined_literals__GoalExpr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Goal0_5, (MR_Integer) 0)));
    MR_Word check_hlds__implementation_defined_literals__GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Goal0_5, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) check_hlds__implementation_defined_literals__GoalExpr0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__implementation_defined_literals__SubGoal0_60 = (MR_Word) MR_body(((MR_Word) check_hlds__implementation_defined_literals__GoalExpr0_7), (MR_Integer) 0);
          MR_Word check_hlds__implementation_defined_literals__SubGoal_61;
          MR_Word check_hlds__implementation_defined_literals__GoalExpr_118;

          {
            check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__SubGoal0_60, &check_hlds__implementation_defined_literals__SubGoal_61);
          }
          check_hlds__implementation_defined_literals__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__implementation_defined_literals__SubGoal_61);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *check_hlds__implementation_defined_literals__Goal_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_118));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__implementation_defined_literals__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 0)));
          MR_Word check_hlds__implementation_defined_literals__RHS0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 1)));
          MR_Word check_hlds__implementation_defined_literals__Mode_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 2)));
          MR_Word check_hlds__implementation_defined_literals__Kind_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 3)));
          MR_Word check_hlds__implementation_defined_literals__UnifyContext_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) check_hlds__implementation_defined_literals__RHS0_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *check_hlds__implementation_defined_literals__Goal_6 = check_hlds__implementation_defined_literals__Goal0_5;
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__implementation_defined_literals__ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 0)));
                MR_Word check_hlds__implementation_defined_literals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 1)));
                MR_Word check_hlds__implementation_defined_literals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) check_hlds__implementation_defined_literals__ConsId_14)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__implementation_defined_literals__Goal_6 = check_hlds__implementation_defined_literals__Goal0_5;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__implementation_defined_literals__Goal_6 = check_hlds__implementation_defined_literals__Goal0_5;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__implementation_defined_literals__Goal_6 = check_hlds__implementation_defined_literals__Goal0_5;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__ConsId_14, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                      case (MR_Integer) 8:
                      case (MR_Integer) 9:
                      case (MR_Integer) 11:
                      case (MR_Integer) 12:
                      case (MR_Integer) 13:
                      case (MR_Integer) 14:
                      case (MR_Integer) 15:
                        *check_hlds__implementation_defined_literals__Goal_6 = check_hlds__implementation_defined_literals__Goal0_5;
                        break;
                      case (MR_Integer) 10:
                        {
                          MR_String check_hlds__implementation_defined_literals__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__ConsId_14, (MR_Integer) 1)));
                          MR_Word check_hlds__implementation_defined_literals__Context_18;
                          MR_Word check_hlds__implementation_defined_literals__Goal1_19;
                          MR_Word check_hlds__implementation_defined_literals__GoalExpr_20;
                          MR_Word check_hlds__implementation_defined_literals__Var_21;

                          {
                            check_hlds__implementation_defined_literals__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__implementation_defined_literals__GoalInfo0_8);
                          }
                          {
                            check_hlds__implementation_defined_literals__make_impl_defined_literal_5_p_0(check_hlds__implementation_defined_literals__Var_9, check_hlds__implementation_defined_literals__Name_17, check_hlds__implementation_defined_literals__Context_18, check_hlds__implementation_defined_literals__Info_4, &check_hlds__implementation_defined_literals__Goal1_19);
                          }
                          check_hlds__implementation_defined_literals__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Goal1_19, (MR_Integer) 0)));
                          check_hlds__implementation_defined_literals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Goal1_19, (MR_Integer) 1)));
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            *check_hlds__implementation_defined_literals__Goal_6 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_20));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__implementation_defined_literals__LambdaPurity_48 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 0)))) & (MR_Integer) 3);
                MR_Word check_hlds__implementation_defined_literals__Groundness_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                MR_Word check_hlds__implementation_defined_literals__PredOrFunc_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Word check_hlds__implementation_defined_literals__LambdaNonLocals_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 2)));
                MR_Word check_hlds__implementation_defined_literals__LambdaQuantVars_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 3)));
                MR_Word check_hlds__implementation_defined_literals__LambdaModes_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 4)));
                MR_Word check_hlds__implementation_defined_literals__LambdaDetism_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 5)));
                MR_Word check_hlds__implementation_defined_literals__LambdaGoal0_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 6)));
                MR_Word check_hlds__implementation_defined_literals__LambdaGoal_57;
                MR_Word check_hlds__implementation_defined_literals__RHS_58;
                MR_Word check_hlds__implementation_defined_literals__GoalExpr_117;

                {
                  check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__LambdaGoal0_56, &check_hlds__implementation_defined_literals__LambdaGoal_57);
                }
                {
                  check_hlds__implementation_defined_literals__RHS_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS_58, 0) = ((MR_Box) ((check_hlds__implementation_defined_literals__LambdaPurity_48 | ((((check_hlds__implementation_defined_literals__Groundness_49 << (MR_Integer) 2)) | ((check_hlds__implementation_defined_literals__PredOrFunc_50 << (MR_Integer) 3)))))));
                  MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS_58, 1) = (MR_Integer) 0;
                  MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS_58, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__LambdaNonLocals_52));
                  MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS_58, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__LambdaQuantVars_53));
                  MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS_58, 4) = ((MR_Box) (check_hlds__implementation_defined_literals__LambdaModes_54));
                  MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS_58, 5) = ((MR_Box) (check_hlds__implementation_defined_literals__LambdaDetism_55));
                  MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS_58, 6) = ((MR_Box) (check_hlds__implementation_defined_literals__LambdaGoal_57));
                }
                {
                  check_hlds__implementation_defined_literals__GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr_117, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__Var_9));
                  MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr_117, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__RHS_58));
                  MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr_117, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__Mode_11));
                  MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr_117, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Kind_12));
                  MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr_117, 4) = ((MR_Box) (check_hlds__implementation_defined_literals__UnifyContext_13));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *check_hlds__implementation_defined_literals__Goal_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_117));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *check_hlds__implementation_defined_literals__Goal_6 = check_hlds__implementation_defined_literals__Goal0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *check_hlds__implementation_defined_literals__Goal_6 = check_hlds__implementation_defined_literals__Goal0_5;
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__implementation_defined_literals__TypeCtorInfo_132_132;
              MR_Word check_hlds__implementation_defined_literals__ConjType_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__implementation_defined_literals__Goals0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word check_hlds__implementation_defined_literals__Goals_65;
              MR_Word check_hlds__implementation_defined_literals__Var_116;
              MR_Word check_hlds__implementation_defined_literals__GoalExpr_122;

              {
                check_hlds__implementation_defined_literals__Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_116, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_116, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_1));
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_116, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Info_4));
              }
              check_hlds__implementation_defined_literals__TypeCtorInfo_132_132 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_3_p_0(check_hlds__implementation_defined_literals__TypeCtorInfo_132_132, check_hlds__implementation_defined_literals__TypeCtorInfo_132_132, check_hlds__implementation_defined_literals__Var_116, check_hlds__implementation_defined_literals__Goals0_64, &check_hlds__implementation_defined_literals__Goals_65);
              }
              {
                check_hlds__implementation_defined_literals__GoalExpr_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_122, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__ConjType_63));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_122, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__Goals_65));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *check_hlds__implementation_defined_literals__Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_122));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__implementation_defined_literals__TypeCtorInfo_135_135;
              MR_Word check_hlds__implementation_defined_literals__Var_115;
              MR_Word check_hlds__implementation_defined_literals__GoalExpr_123;
              MR_Word check_hlds__implementation_defined_literals__Goals0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__implementation_defined_literals__Goals_125;

              {
                check_hlds__implementation_defined_literals__Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_115, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_115, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_2));
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_115, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Info_4));
              }
              check_hlds__implementation_defined_literals__TypeCtorInfo_135_135 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_3_p_0(check_hlds__implementation_defined_literals__TypeCtorInfo_135_135, check_hlds__implementation_defined_literals__TypeCtorInfo_135_135, check_hlds__implementation_defined_literals__Var_115, check_hlds__implementation_defined_literals__Goals0_124, &check_hlds__implementation_defined_literals__Goals_125);
              }
              {
                check_hlds__implementation_defined_literals__GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_123, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__Goals_125));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *check_hlds__implementation_defined_literals__Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_123));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__implementation_defined_literals__TypeCtorInfo_138_138;
              MR_Word check_hlds__implementation_defined_literals__CanFail_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word check_hlds__implementation_defined_literals__Cases0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 3)));
              MR_Word check_hlds__implementation_defined_literals__Cases_68;
              MR_Word check_hlds__implementation_defined_literals__Var_114;
              MR_Word check_hlds__implementation_defined_literals__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__implementation_defined_literals__GoalExpr_127;

              {
                check_hlds__implementation_defined_literals__Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_114, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[2]));
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_114, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_4));
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_114, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Info_4));
              }
              check_hlds__implementation_defined_literals__TypeCtorInfo_138_138 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              {
                mercury__list__map_3_p_0(check_hlds__implementation_defined_literals__TypeCtorInfo_138_138, check_hlds__implementation_defined_literals__TypeCtorInfo_138_138, check_hlds__implementation_defined_literals__Var_114, check_hlds__implementation_defined_literals__Cases0_67, &check_hlds__implementation_defined_literals__Cases_68);
              }
              {
                check_hlds__implementation_defined_literals__GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_127, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__Var_126));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_127, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__CanFail_66));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_127, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Cases_68));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *check_hlds__implementation_defined_literals__Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_127));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__implementation_defined_literals__Reason_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__implementation_defined_literals__GoalExpr_119;
              MR_Word check_hlds__implementation_defined_literals__SubGoal0_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word check_hlds__implementation_defined_literals__SubGoal_121;

              {
                check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__SubGoal0_120, &check_hlds__implementation_defined_literals__SubGoal_121);
              }
              {
                check_hlds__implementation_defined_literals__GoalExpr_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_119, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__Reason_62));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_119, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__SubGoal_121));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *check_hlds__implementation_defined_literals__Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_119));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word check_hlds__implementation_defined_literals__Vars_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__implementation_defined_literals__Cond0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word check_hlds__implementation_defined_literals__Then0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 3)));
              MR_Word check_hlds__implementation_defined_literals__Else0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 4)));
              MR_Word check_hlds__implementation_defined_literals__Cond_73;
              MR_Word check_hlds__implementation_defined_literals__Then_74;
              MR_Word check_hlds__implementation_defined_literals__Else_75;
              MR_Word check_hlds__implementation_defined_literals__GoalExpr_128;

              {
                check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__Cond0_70, &check_hlds__implementation_defined_literals__Cond_73);
              }
              {
                check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__Then0_71, &check_hlds__implementation_defined_literals__Then_74);
              }
              {
                check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__Else0_72, &check_hlds__implementation_defined_literals__Else_75);
              }
              {
                check_hlds__implementation_defined_literals__GoalExpr_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_128, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__Vars_69));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_128, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__Cond_73));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_128, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Then_74));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_128, 4) = ((MR_Box) (check_hlds__implementation_defined_literals__Else_75));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *check_hlds__implementation_defined_literals__Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_128));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__implementation_defined_literals__Shorthand0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__implementation_defined_literals__Shorthand_81;
              MR_Word check_hlds__implementation_defined_literals__GoalExpr_129;

              switch (MR_tag((MR_Word) check_hlds__implementation_defined_literals__Shorthand0_76)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__implementation_defined_literals__A0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Shorthand0_76, (MR_Integer) 0)));
                    MR_Word check_hlds__implementation_defined_literals__B0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Shorthand0_76, (MR_Integer) 1)));
                    MR_Word check_hlds__implementation_defined_literals__A_79;
                    MR_Word check_hlds__implementation_defined_literals__B_80;

                    {
                      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__A0_77, &check_hlds__implementation_defined_literals__A_79);
                    }
                    {
                      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__B0_78, &check_hlds__implementation_defined_literals__B_80);
                    }
                    {
                      check_hlds__implementation_defined_literals__Shorthand_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Shorthand_81, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__A_79));
                      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Shorthand_81, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__B_80));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__implementation_defined_literals__TypeCtorInfo_141_141;
                    MR_Word check_hlds__implementation_defined_literals__GoalType_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand0_76, (MR_Integer) 0)));
                    MR_Word check_hlds__implementation_defined_literals__OuterVars_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand0_76, (MR_Integer) 1)));
                    MR_Word check_hlds__implementation_defined_literals__InnerVars_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand0_76, (MR_Integer) 2)));
                    MR_Word check_hlds__implementation_defined_literals__OutputVars_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand0_76, (MR_Integer) 3)));
                    MR_Word check_hlds__implementation_defined_literals__MainGoal0_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand0_76, (MR_Integer) 4)));
                    MR_Word check_hlds__implementation_defined_literals__OrElseGoals0_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand0_76, (MR_Integer) 5)));
                    MR_Word check_hlds__implementation_defined_literals__OrElseInners_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand0_76, (MR_Integer) 6)));
                    MR_Word check_hlds__implementation_defined_literals__MainGoal_89;
                    MR_Word check_hlds__implementation_defined_literals__OrElseGoals_90;
                    MR_Word check_hlds__implementation_defined_literals__Var_113;

                    {
                      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__MainGoal0_86, &check_hlds__implementation_defined_literals__MainGoal_89);
                    }
                    {
                      check_hlds__implementation_defined_literals__Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_113, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[1]));
                      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_113, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_3));
                      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_113, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_113, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Info_4));
                    }
                    check_hlds__implementation_defined_literals__TypeCtorInfo_141_141 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    {
                      mercury__list__map_3_p_0(check_hlds__implementation_defined_literals__TypeCtorInfo_141_141, check_hlds__implementation_defined_literals__TypeCtorInfo_141_141, check_hlds__implementation_defined_literals__Var_113, check_hlds__implementation_defined_literals__OrElseGoals0_87, &check_hlds__implementation_defined_literals__OrElseGoals_90);
                    }
                    {
                      check_hlds__implementation_defined_literals__Shorthand_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand_81, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalType_82));
                      MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand_81, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__OuterVars_83));
                      MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand_81, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__InnerVars_84));
                      MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand_81, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__OutputVars_85));
                      MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand_81, 4) = ((MR_Box) (check_hlds__implementation_defined_literals__MainGoal_89));
                      MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand_81, 5) = ((MR_Box) (check_hlds__implementation_defined_literals__OrElseGoals_90));
                      MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand_81, 6) = ((MR_Box) (check_hlds__implementation_defined_literals__OrElseInners_88));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__implementation_defined_literals__MaybeIOVars_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__Shorthand0_76, (MR_Integer) 0)));
                    MR_Word check_hlds__implementation_defined_literals__ResultVar_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__Shorthand0_76, (MR_Integer) 1)));
                    MR_Word check_hlds__implementation_defined_literals__TryGoal0_93 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__Shorthand0_76, (MR_Integer) 2)));
                    MR_Word check_hlds__implementation_defined_literals__TryGoal_94;

                    {
                      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__TryGoal0_93, &check_hlds__implementation_defined_literals__TryGoal_94);
                    }
                    {
                      check_hlds__implementation_defined_literals__Shorthand_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__Shorthand_81, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__MaybeIOVars_91));
                      MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__Shorthand_81, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__ResultVar_92));
                      MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__Shorthand_81, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__TryGoal_94));
                    }
                  }
                  break;
              }
              {
                check_hlds__implementation_defined_literals__GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_129, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__Shorthand_81));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *check_hlds__implementation_defined_literals__Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_129));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_clause_3_p_0(
  MR_Word check_hlds__implementation_defined_literals__Info_4,
  MR_Word check_hlds__implementation_defined_literals__Clause0_5,
  MR_Word * check_hlds__implementation_defined_literals__Clause_6)
{
  {
    MR_bool check_hlds__implementation_defined_literals__succeeded;
    MR_Word check_hlds__implementation_defined_literals__Body0_7;
    MR_Word check_hlds__implementation_defined_literals__Body_8;
    MR_Word check_hlds__implementation_defined_literals__Var_9;
    MR_Word check_hlds__implementation_defined_literals__Var_11;
    MR_Word check_hlds__implementation_defined_literals__Var_12;
    MR_Word check_hlds__implementation_defined_literals__Var_13;
    MR_Word check_hlds__implementation_defined_literals__Var_10;

    {
      check_hlds__implementation_defined_literals__Body0_7 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__implementation_defined_literals__Clause0_5);
    }
    {
      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__Body0_7, &check_hlds__implementation_defined_literals__Body_8);
    }
    check_hlds__implementation_defined_literals__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Clause0_5, (MR_Integer) 0)));
    check_hlds__implementation_defined_literals__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Clause0_5, (MR_Integer) 1)));
    check_hlds__implementation_defined_literals__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Clause0_5, (MR_Integer) 2)));
    check_hlds__implementation_defined_literals__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Clause0_5, (MR_Integer) 3)));
    check_hlds__implementation_defined_literals__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Clause0_5, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__implementation_defined_literals__Clause_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__Body_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__implementation_defined_literals__Var_13));
    }
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0_1(
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2)
{
  {
    MR_Box check_hlds__implementation_defined_literals__closure = check_hlds__implementation_defined_literals__closure_arg;
    MR_Word check_hlds__implementation_defined_literals__conv0_Clause_6;

    {
      check_hlds__implementation_defined_literals__subst_literals_in_clause_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_1), &check_hlds__implementation_defined_literals__conv0_Clause_6);
    }
    *check_hlds__implementation_defined_literals__wrapper_arg_2 = ((MR_Box) (check_hlds__implementation_defined_literals__conv0_Clause_6));
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0(
  MR_Word check_hlds__implementation_defined_literals__ModuleInfo_5,
  MR_Word check_hlds__implementation_defined_literals__PredId_6,
  MR_Word check_hlds__implementation_defined_literals__PredInfo0_7,
  MR_Word * check_hlds__implementation_defined_literals__PredInfo_8)
{
  {
    MR_bool check_hlds__implementation_defined_literals__succeeded;
    MR_Word check_hlds__implementation_defined_literals__TypeCtorInfo_20_20;
    MR_Word check_hlds__implementation_defined_literals__ClausesInfo0_9;
    MR_Word check_hlds__implementation_defined_literals__ClausesRep0_10;
    MR_Word check_hlds__implementation_defined_literals__ItemNumbers_11;
    MR_Word check_hlds__implementation_defined_literals__Clauses0_12;
    MR_Word check_hlds__implementation_defined_literals__Info_13;
    MR_Word check_hlds__implementation_defined_literals__Clauses_14;
    MR_Word check_hlds__implementation_defined_literals__ClausesRep_15;
    MR_Word check_hlds__implementation_defined_literals__ClausesInfo_16;
    MR_Word check_hlds__implementation_defined_literals__Var_17;

    {
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__implementation_defined_literals__PredInfo0_7, &check_hlds__implementation_defined_literals__ClausesInfo0_9);
    }
    {
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__implementation_defined_literals__ClausesInfo0_9, &check_hlds__implementation_defined_literals__ClausesRep0_10, &check_hlds__implementation_defined_literals__ItemNumbers_11);
    }
    {
      hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(check_hlds__implementation_defined_literals__ClausesRep0_10, &check_hlds__implementation_defined_literals__Clauses0_12);
    }
    {
      check_hlds__implementation_defined_literals__Info_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Info_13, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Info_13, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__PredInfo0_7));
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Info_13, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__PredId_6));
    }
    {
      check_hlds__implementation_defined_literals__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_17, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_17, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_17, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Info_13));
    }
    check_hlds__implementation_defined_literals__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
    {
      mercury__list__map_3_p_0(check_hlds__implementation_defined_literals__TypeCtorInfo_20_20, check_hlds__implementation_defined_literals__TypeCtorInfo_20_20, check_hlds__implementation_defined_literals__Var_17, check_hlds__implementation_defined_literals__Clauses0_12, &check_hlds__implementation_defined_literals__Clauses_14);
    }
    {
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__implementation_defined_literals__Clauses_14, &check_hlds__implementation_defined_literals__ClausesRep_15);
    }
    {
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__implementation_defined_literals__ClausesRep_15, check_hlds__implementation_defined_literals__ItemNumbers_11, check_hlds__implementation_defined_literals__ClausesInfo0_9, &check_hlds__implementation_defined_literals__ClausesInfo_16);
    }
    {
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__implementation_defined_literals__ClausesInfo_16, check_hlds__implementation_defined_literals__PredInfo0_7, check_hlds__implementation_defined_literals__PredInfo_8);
    }
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0_1(
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_2,
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_3)
{
  {
    MR_Box check_hlds__implementation_defined_literals__closure = check_hlds__implementation_defined_literals__closure_arg;
    MR_Word check_hlds__implementation_defined_literals__conv0_PredInfo_8;

    {
      check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_1), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_2), &check_hlds__implementation_defined_literals__conv0_PredInfo_8);
    }
    *check_hlds__implementation_defined_literals__wrapper_arg_3 = ((MR_Box) (check_hlds__implementation_defined_literals__conv0_PredInfo_8));
  }
}

void MR_CALL 
check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0(
  MR_Word check_hlds__implementation_defined_literals__STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * check_hlds__implementation_defined_literals__STATE_VARIABLE_ModuleInfo_7)
{
  {
    MR_bool check_hlds__implementation_defined_literals__succeeded;
    MR_Word check_hlds__implementation_defined_literals__TypeCtorInfo_14_14;
    MR_Word check_hlds__implementation_defined_literals__Preds0_4;
    MR_Word check_hlds__implementation_defined_literals__Preds_5;
    MR_Word check_hlds__implementation_defined_literals__Var_8;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__implementation_defined_literals__STATE_VARIABLE_ModuleInfo_0_6, &check_hlds__implementation_defined_literals__Preds0_4);
    }
    {
      check_hlds__implementation_defined_literals__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_8, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_8, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Var_8, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__STATE_VARIABLE_ModuleInfo_0_6));
    }
    check_hlds__implementation_defined_literals__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    {
      mercury__map__map_values_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__implementation_defined_literals__TypeCtorInfo_14_14, check_hlds__implementation_defined_literals__TypeCtorInfo_14_14, check_hlds__implementation_defined_literals__Var_8, check_hlds__implementation_defined_literals__Preds0_4, &check_hlds__implementation_defined_literals__Preds_5);
    }
    {
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__implementation_defined_literals__Preds_5, check_hlds__implementation_defined_literals__STATE_VARIABLE_ModuleInfo_0_6, check_hlds__implementation_defined_literals__STATE_VARIABLE_ModuleInfo_7);
    }
  }
}

void mercury__check_hlds__implementation_defined_literals__init(void)
{
}

void mercury__check_hlds__implementation_defined_literals__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__type_ctor_info_subst_literals_info_0);
}

void mercury__check_hlds__implementation_defined_literals__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__implementation_defined_literals__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.implementation_defined_literals. */
